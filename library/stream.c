/*
** Automatically generated from `stream.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 85 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1];

#line 88 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0;

#line 91 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2];

#line 94 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1;

#line 97 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1];

#line 100 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1];

#line 103 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2];

#line 106 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2];

#line 109 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2];

#line 112 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1];

#line 115 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0;

#line 118 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1];

#line 121 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1;

#line 124 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1];

#line 127 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1];

#line 130 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2];

#line 133 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2];

#line 136 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2];

#line 139 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0;

#line 142 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1];

#line 145 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1;

#line 148 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1];

#line 151 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1];

#line 154 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2];

#line 157 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2];

#line 160 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2];

#line 163 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1];

#line 166 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0;

#line 169 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1;

#line 172 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1];

#line 175 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2;

#line 178 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1];

#line 181 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1];

#line 184 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1];

#line 187 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3];

#line 190 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3];

#line 193 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3];

#line 196 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0;

#line 199 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1;

#line 202 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1];

#line 205 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2;

#line 208 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2];

#line 211 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1];

#line 214 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2];

#line 217 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3];

#line 220 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3];

#line 223 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0;

#line 226 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1;

#line 229 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2;

#line 232 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3];

#line 235 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3];

#line 238 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3];

#line 241 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3];

#line 244 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1];

#line 247 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3;

#line 250 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1;

#line 253 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1];

#line 256 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4];

#line 259 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4;

#line 262 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1;

#line 265 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1];

#line 268 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2];

#line 271 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1];

#line 274 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2;

#line 277 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2];

#line 280 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1];

#line 283 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2;

#line 286 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1;

#line 289 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1];

#line 292 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4];

#line 295 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1];

#line 298 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4;

#line 301 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1;

#line 304 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2;

#line 307 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2];

#line 310 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4];

#line 313 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1];

#line 316 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4;

#line 319 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1;

#line 322 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1];

#line 325 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2];

#line 328 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1];

#line 331 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2;

#line 334 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1;

#line 337 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1];

#line 340 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2];

#line 343 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2];

#line 346 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2;

#line 349 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1;

#line 352 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1];

#line 355 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2];

#line 358 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2;

#line 361 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1;

#line 364 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1];

#line 367 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1];

#line 370 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1];

#line 373 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1;

#line 376 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2];

#line 379 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2;

#line 382 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1;

#line 385 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2;

#line 388 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2];

#line 391 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5];

#line 394 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1];

#line 397 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5;

#line 400 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1;

#line 403 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2;

#line 406 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2];

#line 409 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 412 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 414 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 416 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 418 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 421 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 424 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 426 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 428 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 430 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 432 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 435 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 438 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 440 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 443 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 446 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 448 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 450 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 453 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 456 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 458 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 460 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 462 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 465 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 468 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 470 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 472 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 474 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 476 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 479 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 482 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 484 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 486 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 489 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 492 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 494 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 496 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 498 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 501 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 504 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 506 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 508 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 510 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 513 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 516 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 518 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 520 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 522 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 524 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 527 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 530 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 532 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 534 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 537 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 540 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 542 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 544 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 546 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 549 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 552 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 554 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 557 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 560 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 562 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 564 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 13 "ops.opt"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "table_builtin.mh"
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
#include "type_desc.mh"
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
#include "version_array.mh"
#include "version_array.mh"



#line 931 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 936 "stream.c"
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

#line 951 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 957 "stream.c"
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

#line 972 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 977 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1
};

#line 982 "stream.c"
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

#line 996 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1,
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 1002 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1008 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_maybe_partial_res_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____maybe_partial_res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____maybe_partial_res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "maybe_partial_res",
  {
    mercury__stream__stream__du_name_ordered_maybe_partial_res_2
  },
  {
    mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_maybe_partial_res_2
};

#line 1029 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__stream____Unify____name_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____name_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1050 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1055 "stream.c"
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

#line 1070 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1075 "stream.c"
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

#line 1090 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1095 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_1
};

#line 1100 "stream.c"
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

#line 1114 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_res_2_1,
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1120 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1126 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {
    mercury__stream__stream__du_name_ordered_res_2
  },
  {
    mercury__stream__stream__du_ptag_ordered_res_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_res_2
};

#line 1147 "stream.c"
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

#line 1162 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1167 "stream.c"
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

#line 1182 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1187 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_1
};

#line 1192 "stream.c"
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

#line 1206 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2] = {
  &mercury__stream__stream__du_functor_desc_res_1_1,
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1212 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1218 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {
    mercury__stream__stream__du_name_ordered_res_1
  },
  {
    mercury__stream__stream__du_ptag_ordered_res_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_res_1
};

#line 1239 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1244 "stream.c"
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

#line 1259 "stream.c"
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

#line 1274 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1279 "stream.c"
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

#line 1294 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_1
};

#line 1299 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1304 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_2
};

#line 1309 "stream.c"
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

#line 1328 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3] = {
  &mercury__stream__stream__du_functor_desc_result_2_1,
  &mercury__stream__stream__du_functor_desc_result_2_2,
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1335 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1342 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {
    mercury__stream__stream__du_name_ordered_result_2
  },
  {
    mercury__stream__stream__du_ptag_ordered_result_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_result_2
};

#line 1363 "stream.c"
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

#line 1378 "stream.c"
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

#line 1393 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1398 "stream.c"
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

#line 1413 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2] = {
  &mercury__stream__stream__du_functor_desc_result_1_0,
  &mercury__stream__stream__du_functor_desc_result_1_1
};

#line 1419 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_1_2
};

#line 1424 "stream.c"
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

#line 1438 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3] = {
  &mercury__stream__stream__du_functor_desc_result_1_1,
  &mercury__stream__stream__du_functor_desc_result_1_2,
  &mercury__stream__stream__du_functor_desc_result_1_0
};

#line 1445 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1452 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {
    mercury__stream__stream__du_name_ordered_result_1
  },
  {
    mercury__stream__stream__du_ptag_ordered_result_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_result_1
};

#line 1473 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  (MR_Integer) 0
};

#line 1479 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  (MR_Integer) 1
};

#line 1485 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  (MR_Integer) 2
};

#line 1491 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_0,
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2
};

#line 1498 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2,
  &mercury__stream__stream__enum_functor_desc_whence_0_0
};

#line 1505 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1512 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_whence_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__stream____Unify____whence_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____whence_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "whence",
  {
    mercury__stream__stream__enum_name_ordered_whence_0
  },
  {
    mercury__stream__stream__enum_value_ordered_whence_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_whence_0
};

#line 1533 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State"
};

#line 1540 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1] = {
  {
    (MR_String) "put",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1549 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3 = {
  (MR_String) "stream",
  (MR_String) "writer",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_writer_3,
  mercury__stream__stream__type_class_id_method_ids_writer_3
};

#line 1560 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1569 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_writer_3_1
};

#line 1574 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_writer_3 = {
  &mercury__stream__stream__type_class_id_writer_3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1582 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1590 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4 = {
  (MR_String) "stream",
  (MR_String) "unbounded_putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_unbounded_putback_4,
  NULL
};

#line 1601 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_putback_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1612 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1
};

#line 1617 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_unbounded_putback_4 = {
  &mercury__stream__stream__type_class_id_unbounded_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1625 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1631 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1] = {
  {
    (MR_String) "name",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1640 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2 = {
  (MR_String) "stream",
  (MR_String) "stream",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_stream_2,
  mercury__stream__stream__type_class_id_method_ids_stream_2
};

#line 1651 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_stream_2 = {
  &mercury__stream__stream__type_class_id_stream_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1659 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1665 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1] = {
  {
    (MR_String) "seek",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1674 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2 = {
  (MR_String) "stream",
  (MR_String) "seekable",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_seekable_2,
  mercury__stream__stream__type_class_id_method_ids_seekable_2
};

#line 1685 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1694 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_seekable_2_1
};

#line 1699 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_seekable_2 = {
  &mercury__stream__stream__type_class_id_seekable_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1707 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1715 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1] = {
  {
    (MR_String) "get",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1724 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4 = {
  (MR_String) "stream",
  (MR_String) "reader",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_reader_4,
  mercury__stream__stream__type_class_id_method_ids_reader_4
};

#line 1735 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1744 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1752 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_2
};

#line 1758 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_reader_4 = {
  &mercury__stream__stream__type_class_id_reader_4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1766 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1774 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1] = {
  {
    (MR_String) "unget",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1783 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4 = {
  (MR_String) "stream",
  (MR_String) "putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_putback_4,
  mercury__stream__stream__type_class_id_method_ids_putback_4
};

#line 1794 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_reader_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1805 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_putback_4_1
};

#line 1810 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_putback_4 = {
  &mercury__stream__stream__type_class_id_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1818 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1824 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1] = {
  {
    (MR_String) "flush",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1833 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2 = {
  (MR_String) "stream",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_output_2,
  mercury__stream__stream__type_class_id_method_ids_output_2
};

#line 1844 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1853 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_output_2_1
};

#line 1858 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_output_2 = {
  &mercury__stream__stream__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1866 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1872 "stream.c"
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

#line 1886 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2 = {
  (MR_String) "stream",
  (MR_String) "line_oriented",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__stream__stream__type_class_id_var_names_line_oriented_2,
  mercury__stream__stream__type_class_id_method_ids_line_oriented_2
};

#line 1897 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1906 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_line_oriented_2_1
};

#line 1911 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_line_oriented_2 = {
  &mercury__stream__stream__type_class_id_line_oriented_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1919 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1925 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2 = {
  (MR_String) "stream",
  (MR_String) "input",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_input_2,
  NULL
};

#line 1936 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1945 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_input_2_1
};

#line 1950 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_input_2 = {
  &mercury__stream__stream__type_class_id_input_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1958 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1] = {
  (MR_String) "Error"
};

#line 1963 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1] = {
  {
    (MR_String) "error_message",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1972 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1 = {
  (MR_String) "stream",
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_error_1,
  mercury__stream__stream__type_class_id_method_ids_error_1
};

#line 1983 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_error_1 = {
  &mercury__stream__stream__type_class_id_error_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1991 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1997 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2 = {
  (MR_String) "stream",
  (MR_String) "duplex",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_duplex_2,
  NULL
};

#line 2008 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2017 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2026 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_2
};

#line 2032 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_duplex_2 = {
  &mercury__stream__stream__type_class_id_duplex_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2040 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5] = {
  (MR_String) "Stream",
  (MR_String) "Index",
  (MR_String) "Store",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 2049 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1] = {
  {
    (MR_String) "bulk_get",
    (MR_Integer) 9,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2058 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5 = {
  (MR_String) "stream",
  (MR_String) "bulk_reader",
  (MR_Integer) 5,
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_bulk_reader_5,
  mercury__stream__stream__type_class_id_method_ids_bulk_reader_5
};

#line 2069 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 2078 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 5
  }
};

#line 2086 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_2
};

#line 2092 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_bulk_reader_5 = {
  &mercury__stream__stream__type_class_id_bulk_reader_5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2100 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 2103 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2105 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2107 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2109 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2111 "stream.c"
{
#line 2113 "stream.c"
  {
#line 2115 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2118 "stream.c"
    {
#line 2120 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2123 "stream.c"
    return mercury__stream__succeeded;
#line 2125 "stream.c"
  }
#line 2127 "stream.c"
}

#line 2130 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 2133 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2135 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2137 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2139 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2141 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2143 "stream.c"
{
#line 2145 "stream.c"
  {
#line 2147 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2150 "stream.c"
    {
#line 2152 "stream.c"
      mercury__stream____Compare____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2155 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2157 "stream.c"
  }
#line 2159 "stream.c"
}

#line 2162 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 2165 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2167 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2169 "stream.c"
{
#line 2171 "stream.c"
  {
#line 2173 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2176 "stream.c"
    {
#line 2178 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____name_0_0(((MR_String) mercury__stream__wrapper_arg_1), ((MR_String) mercury__stream__wrapper_arg_2));
    }
#line 2181 "stream.c"
    return mercury__stream__succeeded;
#line 2183 "stream.c"
  }
#line 2185 "stream.c"
}

#line 2188 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 2191 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2193 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2195 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2197 "stream.c"
{
#line 2199 "stream.c"
  {
#line 2201 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2204 "stream.c"
    {
#line 2206 "stream.c"
      mercury__stream____Compare____name_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_String) mercury__stream__wrapper_arg_2), ((MR_String) mercury__stream__wrapper_arg_3));
    }
#line 2209 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2211 "stream.c"
  }
#line 2213 "stream.c"
}

#line 2216 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 2219 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2221 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2223 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2225 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2227 "stream.c"
{
#line 2229 "stream.c"
  {
#line 2231 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2234 "stream.c"
    {
#line 2236 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2239 "stream.c"
    return mercury__stream__succeeded;
#line 2241 "stream.c"
  }
#line 2243 "stream.c"
}

#line 2246 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 2249 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2251 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2253 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2255 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2257 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2259 "stream.c"
{
#line 2261 "stream.c"
  {
#line 2263 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2266 "stream.c"
    {
#line 2268 "stream.c"
      mercury__stream____Compare____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2271 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2273 "stream.c"
  }
#line 2275 "stream.c"
}

#line 2278 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 2281 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2283 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2285 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2287 "stream.c"
{
#line 2289 "stream.c"
  {
#line 2291 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2294 "stream.c"
    {
#line 2296 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2299 "stream.c"
    return mercury__stream__succeeded;
#line 2301 "stream.c"
  }
#line 2303 "stream.c"
}

#line 2306 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 2309 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2311 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2313 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2315 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2317 "stream.c"
{
#line 2319 "stream.c"
  {
#line 2321 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2324 "stream.c"
    {
#line 2326 "stream.c"
      mercury__stream____Compare____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2329 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2331 "stream.c"
  }
#line 2333 "stream.c"
}

#line 2336 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 2339 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2341 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2343 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2345 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2347 "stream.c"
{
#line 2349 "stream.c"
  {
#line 2351 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2354 "stream.c"
    {
#line 2356 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2359 "stream.c"
    return mercury__stream__succeeded;
#line 2361 "stream.c"
  }
#line 2363 "stream.c"
}

#line 2366 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 2369 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2371 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2373 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2375 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2377 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2379 "stream.c"
{
#line 2381 "stream.c"
  {
#line 2383 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2386 "stream.c"
    {
#line 2388 "stream.c"
      mercury__stream____Compare____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2391 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2393 "stream.c"
  }
#line 2395 "stream.c"
}

#line 2398 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 2401 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2403 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2405 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2407 "stream.c"
{
#line 2409 "stream.c"
  {
#line 2411 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2414 "stream.c"
    {
#line 2416 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2419 "stream.c"
    return mercury__stream__succeeded;
#line 2421 "stream.c"
  }
#line 2423 "stream.c"
}

#line 2426 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 2429 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2431 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2433 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2435 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2437 "stream.c"
{
#line 2439 "stream.c"
  {
#line 2441 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2444 "stream.c"
    {
#line 2446 "stream.c"
      mercury__stream____Compare____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2449 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2451 "stream.c"
  }
#line 2453 "stream.c"
}

#line 2456 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 2459 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2461 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2463 "stream.c"
{
#line 2465 "stream.c"
  {
#line 2467 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2470 "stream.c"
    {
#line 2472 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____whence_0_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2));
    }
#line 2475 "stream.c"
    return mercury__stream__succeeded;
#line 2477 "stream.c"
  }
#line 2479 "stream.c"
}

#line 2482 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 2485 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2487 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2489 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2491 "stream.c"
{
#line 2493 "stream.c"
  {
#line 2495 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2498 "stream.c"
    {
#line 2500 "stream.c"
      mercury__stream____Compare____whence_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2503 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2505 "stream.c"
  }
#line 2507 "stream.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__stream__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__stream__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 253 "stream.m"
void MR_CALL 
mercury__stream____Compare____whence_0_0(
#line 253 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 253 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 253 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 253 "stream.m"
{
#line 253 "stream.m"
  {
#line 253 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 253 "stream.m"
    MR_Integer mercury__stream__Cast_HeadVar1_4 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 253 "stream.m"
    MR_Integer mercury__stream__Cast_HeadVar2_5 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__stream__succeeded = (mercury__stream__Cast_HeadVar1_4 < mercury__stream__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__stream__succeeded)
#line 68 "private_builtin.opt"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__stream__succeeded = (mercury__stream__Cast_HeadVar1_4 == mercury__stream__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__stream__succeeded)
#line 73 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 253 "stream.m"
  }
#line 253 "stream.m"
}

#line 253 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0(
#line 253 "stream.m"
  MR_Word mercury__stream__HeadVar__2_1,
#line 253 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 253 "stream.m"
{
#line 2583 "stream.c"
  {
#line 2585 "stream.c"
    MR_bool mercury__stream__succeeded = (mercury__stream__HeadVar__2_1 == mercury__stream__HeadVar__2_2);

#line 2588 "stream.c"
    return mercury__stream__succeeded;
#line 2590 "stream.c"
  }
#line 253 "stream.m"
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
#line 2623 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "stream.m"
    else
#line 41 "stream.m"
      if ((mercury__stream__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 41 "stream.m"
        if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 41 "stream.m"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "stream.m"
        else
#line 41 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2637 "stream.c"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
          else
#line 2641 "stream.c"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
      else
#line 41 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_20_20 = (MR_hl_field(MR_mktag(2), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 41 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2654 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
            else
#line 41 "stream.m"
              if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
              else
#line 2676 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
          }
#line 41 "stream.m"
        else
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 41 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2689 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
            else
#line 41 "stream.m"
              if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2695 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
              else
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
      if ((mercury__stream__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 41 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 2782 "stream.c"
                {
#line 2784 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_12, mercury__stream__V_7_7, mercury__stream__V_8_8);
                }
#line 41 "stream.m"
              }
#line 41 "stream.m"
          }
#line 41 "stream.m"
        else
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
#line 2808 "stream.c"
                {
#line 2810 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_3_3, mercury__stream__V_4_4);
                }
#line 41 "stream.m"
              }
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
#line 2850 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
    else
#line 36 "stream.m"
      if ((mercury__stream__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "stream.m"
        if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "stream.m"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
        else
#line 36 "stream.m"
          if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "stream.m"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
          else
#line 2868 "stream.c"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
      else
#line 36 "stream.m"
        if ((mercury__stream__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "stream.m"
          if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "stream.m"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
          else
#line 36 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "stream.m"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
            else
#line 2886 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
        else
#line 36 "stream.m"
          {
#line 36 "stream.m"
            MR_Box mercury__stream__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 36 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2897 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
            else
#line 36 "stream.m"
              if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2903 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
              else
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
      if ((mercury__stream__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
      else
#line 36 "stream.m"
        if ((mercury__stream__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
        else
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
#line 3001 "stream.c"
                {
#line 3003 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_11, mercury__stream__V_7_7, mercury__stream__V_8_8);
                }
#line 36 "stream.m"
              }
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
#line 3045 "stream.c"
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
#line 3074 "stream.c"
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
#line 3087 "stream.c"
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
#line 3159 "stream.c"
              {
#line 3161 "stream.c"
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
#line 3185 "stream.c"
              {
#line 3187 "stream.c"
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
#line 3227 "stream.c"
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
#line 3239 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "stream.m"
      else
#line 46 "stream.m"
        {
#line 46 "stream.m"
          MR_Box mercury__stream__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 46 "stream.m"
          if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3250 "stream.c"
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
#line 3333 "stream.c"
              {
#line 3335 "stream.c"
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
    MR_Integer mercury__stream__Res_7_10;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream____Compare____name_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__stream__Cast_HeadVar1_4 ;
	S2 =  mercury__stream__Cast_HeadVar2_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3386 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__Res_7_10  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
    mercury__stream__succeeded = (mercury__stream__Res_7_10 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
    if (mercury__stream__succeeded)
#line 104 "private_builtin.opt"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
    else
#line 110 "private_builtin.opt"
      {
#line 107 "private_builtin.opt"
        mercury__stream__succeeded = (mercury__stream__Res_7_10 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
        if (mercury__stream__succeeded)
#line 109 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
        else
#line 111 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
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
#line 3475 "stream.c"
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
#line 3504 "stream.c"
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
#line 3525 "stream.c"
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
#line 3538 "stream.c"
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
#line 3616 "stream.c"
              {
#line 3618 "stream.c"
                mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_5_5, mercury__stream__V_7_7);
              }
#line 57 "stream.m"
              if (mercury__stream__succeeded)
#line 3623 "stream.c"
                {
#line 3625 "stream.c"
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
#line 3649 "stream.c"
              {
#line 3651 "stream.c"
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

#line 368 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_2(
#line 368 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_27,
#line 368 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_26,
#line 368 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 368 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 368 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3,
#line 368 "stream.m"
  MR_Word mercury__stream__HeadVar__4_4,
#line 368 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_5,
#line 368 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_6)
#line 368 "stream.m"
{
#line 471 "stream.m"
  while (MR_TRUE)
#line 471 "stream.m"
    {
#line 471 "stream.m"
      /* tailcall optimized into a loop */
#line 471 "stream.m"
      {
#line 471 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 471 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 471 "stream.m"
        else
#line 472 "stream.m"
          {
#line 472 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 472 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 472 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 473 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 473 "stream.m"
            {
#line 473 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 476 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 476 "stream.m"
            else
#line 477 "stream.m"
              {
#line 477 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 478 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 478 "stream.m"
                {
#line 478 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 479 "stream.m"
                /* direct tailcall eliminated */
#line 479 "stream.m"
                {
#line 479 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 479 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 479 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 479 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 479 "stream.m"
                }
#line 479 "stream.m"
                continue;
#line 477 "stream.m"
              }
#line 472 "stream.m"
          }
#line 471 "stream.m"
      }
#line 471 "stream.m"
      break;
#line 471 "stream.m"
    }
#line 368 "stream.m"
}

#line 366 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_1(
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
#line 471 "stream.m"
  while (MR_TRUE)
#line 471 "stream.m"
    {
#line 471 "stream.m"
      /* tailcall optimized into a loop */
#line 471 "stream.m"
      {
#line 471 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 471 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 471 "stream.m"
        else
#line 472 "stream.m"
          {
#line 472 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 472 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 472 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 473 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 473 "stream.m"
            {
#line 473 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 476 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 476 "stream.m"
            else
#line 477 "stream.m"
              {
#line 477 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 478 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 478 "stream.m"
                {
#line 478 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 479 "stream.m"
                /* direct tailcall eliminated */
#line 479 "stream.m"
                {
#line 479 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 479 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 479 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 479 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 479 "stream.m"
                }
#line 479 "stream.m"
                continue;
#line 477 "stream.m"
              }
#line 472 "stream.m"
          }
#line 471 "stream.m"
      }
#line 471 "stream.m"
      break;
#line 471 "stream.m"
    }
#line 366 "stream.m"
}

#line 364 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_0(
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
#line 471 "stream.m"
  while (MR_TRUE)
#line 471 "stream.m"
    {
#line 471 "stream.m"
      /* tailcall optimized into a loop */
#line 471 "stream.m"
      {
#line 471 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 471 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 471 "stream.m"
        else
#line 472 "stream.m"
          {
#line 472 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 472 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 472 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 473 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 473 "stream.m"
            {
#line 473 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 476 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 476 "stream.m"
            else
#line 477 "stream.m"
              {
#line 477 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 478 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 478 "stream.m"
                {
#line 478 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 479 "stream.m"
                /* direct tailcall eliminated */
#line 479 "stream.m"
                {
#line 479 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 479 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 479 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 479 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 479 "stream.m"
                }
#line 479 "stream.m"
                continue;
#line 477 "stream.m"
              }
#line 472 "stream.m"
          }
#line 471 "stream.m"
      }
#line 471 "stream.m"
      break;
#line 471 "stream.m"
    }
#line 364 "stream.m"
}

#line 348 "stream.m"
void MR_CALL 
mercury__stream__ignore_whitespace_4_p_0(
#line 348 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_putback_16,
#line 348 "stream.m"
  MR_Box mercury__stream__Stream_5,
#line 348 "stream.m"
  MR_Word * mercury__stream__Result_6,
#line 348 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_11,
#line 348 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_12)
#line 348 "stream.m"
{
#line 451 "stream.m"
  while (MR_TRUE)
#line 451 "stream.m"
    {
#line 451 "stream.m"
      /* tailcall optimized into a loop */
#line 451 "stream.m"
      {
#line 451 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 451 "stream.m"
        MR_Word mercury__stream__TypeClassInfo_for_reader_17;
#line 451 "stream.m"
        MR_Word mercury__stream__CharResult_8;
#line 451 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_State_13_13;
#line 4002 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 4004 "stream.c"
        MR_Box mercury__stream__conv1_CharResult_8;

#line 143 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream__ignore_whitespace_4_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__stream__TypeClassInfo_for_putback_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 143 "private_builtin.opt"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 4023 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__TypeClassInfo_for_reader_17  = TypeClassInfo;
#line 143 "private_builtin.opt"
}
#line 4030 "stream.c"
        mercury__stream__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4032 "stream.c"
        {
#line 4034 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_17), mercury__stream__Stream_5, &mercury__stream__conv1_CharResult_8, mercury__stream__STATE_VARIABLE_State_0_11, &mercury__stream__STATE_VARIABLE_State_13_13);
        }
#line 4037 "stream.c"
        mercury__stream__CharResult_8 = ((MR_Word) mercury__stream__conv1_CharResult_8);
#line 456 "stream.m"
        if ((mercury__stream__CharResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "stream.m"
          {
#line 458 "stream.m"
            *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 458 "stream.m"
            *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 457 "stream.m"
          }
#line 456 "stream.m"
        else
#line 456 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__CharResult_8)) == (MR_mktag((MR_Integer) 2))))
#line 454 "stream.m"
            {
#line 454 "stream.m"
              MR_Box mercury__stream__Error_9 = (MR_hl_field(MR_mktag(2), mercury__stream__CharResult_8, (MR_Integer) 0));

#line 455 "stream.m"
              {
#line 455 "stream.m"
                MR_Word base;
#line 455 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 455 "stream.m"
                *mercury__stream__Result_6 = base;
#line 455 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_9;
#line 455 "stream.m"
              }
#line 455 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 454 "stream.m"
            }
#line 456 "stream.m"
          else
#line 460 "stream.m"
            {
#line 460 "stream.m"
              MR_Char mercury__stream__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__CharResult_8, (MR_Integer) 0)));

#line 461 "stream.m"
              {
#line 461 "stream.m"
                mercury__stream__succeeded = mercury__char__is_whitespace_1_p_0(mercury__stream__Char_10);
              }
#line 463 "stream.m"
              if (mercury__stream__succeeded)
#line 462 "stream.m"
                {
#line 462 "stream.m"
                  /* direct tailcall eliminated */
#line 462 "stream.m"
                  {
#line 462 "stream.m"
                    MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_11 = mercury__stream__STATE_VARIABLE_State_13_13;

#line 462 "stream.m"
                    mercury__stream__STATE_VARIABLE_State_0_11 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_11;
#line 462 "stream.m"
                  }
#line 462 "stream.m"
                  continue;
#line 462 "stream.m"
                }
#line 463 "stream.m"
              else
#line 464 "stream.m"
                {
#line 4109 "stream.c"
                  void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4112 "stream.c"
                  {
#line 4114 "stream.c"
                    mercury__stream__func_2(((MR_Box) mercury__stream__TypeClassInfo_for_putback_16), mercury__stream__Stream_5, ((MR_Box) (MR_Word) (mercury__stream__Char_10)), mercury__stream__STATE_VARIABLE_State_13_13, mercury__stream__STATE_VARIABLE_State_12);
                  }
#line 465 "stream.m"
                  *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "stream.m"
                }
#line 460 "stream.m"
            }
#line 451 "stream.m"
      }
#line 451 "stream.m"
      break;
#line 451 "stream.m"
    }
#line 348 "stream.m"
}

#line 337 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_1(
#line 337 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_23,
#line 337 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_22,
#line 337 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 337 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 337 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 337 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 337 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_17,
#line 337 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_18)
#line 337 "stream.m"
{
#line 428 "stream.m"
  while (MR_TRUE)
#line 428 "stream.m"
    {
#line 428 "stream.m"
      /* tailcall optimized into a loop */
#line 428 "stream.m"
      {
#line 428 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 428 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 428 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 4167 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4169 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4172 "stream.c"
        {
#line 4174 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4177 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 441 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "stream.m"
          {
#line 443 "stream.m"
            {
#line 443 "stream.m"
              MR_Word base;
#line 443 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "stream.m"
              *mercury__stream__Res_10 = base;
#line 443 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 443 "stream.m"
            }
#line 443 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 442 "stream.m"
          }
#line 441 "stream.m"
        else
#line 441 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
#line 445 "stream.m"
            {
#line 445 "stream.m"
              MR_Box mercury__stream__Error_16 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 446 "stream.m"
              {
#line 446 "stream.m"
                MR_Word base;
#line 446 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "stream.m"
                *mercury__stream__Res_10 = base;
#line 446 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 446 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_16;
#line 446 "stream.m"
              }
#line 446 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 445 "stream.m"
            }
#line 441 "stream.m"
          else
#line 431 "stream.m"
            {
#line 431 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 431 "stream.m"
              MR_Word mercury__stream__Continue_14;
#line 431 "stream.m"
              MR_Box mercury__stream__T1_15;
#line 431 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));
#line 432 "stream.m"
              MR_Box mercury__stream__conv3_Continue_14;

#line 432 "stream.m"
              {
#line 432 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, &mercury__stream__conv3_Continue_14, mercury__stream__T0_9, &mercury__stream__T1_15, mercury__stream__STATE_VARIABLE_S_19_19, &mercury__stream__STATE_VARIABLE_S_20_20);
              }
#line 432 "stream.m"
              mercury__stream__Continue_14 = ((MR_Word) mercury__stream__conv3_Continue_14);
#line 436 "stream.m"
              if ((mercury__stream__Continue_14 == (MR_Integer) 0))
#line 434 "stream.m"
                {
#line 435 "stream.m"
                  {
#line 435 "stream.m"
                    MR_Word base;
#line 435 "stream.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 435 "stream.m"
                    *mercury__stream__Res_10 = base;
#line 435 "stream.m"
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T1_15;
#line 435 "stream.m"
                  }
#line 435 "stream.m"
                  *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 434 "stream.m"
                }
#line 436 "stream.m"
              else
#line 438 "stream.m"
                {
#line 438 "stream.m"
                  /* direct tailcall eliminated */
#line 438 "stream.m"
                  {
#line 438 "stream.m"
                    MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_15;
#line 438 "stream.m"
                    MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__stream__STATE_VARIABLE_S_20_20;

#line 438 "stream.m"
                    mercury__stream__STATE_VARIABLE_S_0_17 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17;
#line 438 "stream.m"
                    mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 438 "stream.m"
                  }
#line 438 "stream.m"
                  continue;
#line 438 "stream.m"
                }
#line 431 "stream.m"
            }
#line 428 "stream.m"
      }
#line 428 "stream.m"
      break;
#line 428 "stream.m"
    }
#line 337 "stream.m"
}

#line 335 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_0(
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
#line 428 "stream.m"
  while (MR_TRUE)
#line 428 "stream.m"
    {
#line 428 "stream.m"
      /* tailcall optimized into a loop */
#line 428 "stream.m"
      {
#line 428 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 428 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 428 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 4339 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4341 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4344 "stream.c"
        {
#line 4346 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4349 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 441 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "stream.m"
          {
#line 443 "stream.m"
            {
#line 443 "stream.m"
              MR_Word base;
#line 443 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "stream.m"
              *mercury__stream__Res_10 = base;
#line 443 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 443 "stream.m"
            }
#line 443 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 442 "stream.m"
          }
#line 441 "stream.m"
        else
#line 441 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
#line 445 "stream.m"
            {
#line 445 "stream.m"
              MR_Box mercury__stream__Error_16 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 446 "stream.m"
              {
#line 446 "stream.m"
                MR_Word base;
#line 446 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "stream.m"
                *mercury__stream__Res_10 = base;
#line 446 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 446 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_16;
#line 446 "stream.m"
              }
#line 446 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 445 "stream.m"
            }
#line 441 "stream.m"
          else
#line 431 "stream.m"
            {
#line 431 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 431 "stream.m"
              MR_Word mercury__stream__Continue_14;
#line 431 "stream.m"
              MR_Box mercury__stream__T1_15;
#line 431 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));
#line 432 "stream.m"
              MR_Box mercury__stream__conv3_Continue_14;

#line 432 "stream.m"
              {
#line 432 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, &mercury__stream__conv3_Continue_14, mercury__stream__T0_9, &mercury__stream__T1_15, mercury__stream__STATE_VARIABLE_S_19_19, &mercury__stream__STATE_VARIABLE_S_20_20);
              }
#line 432 "stream.m"
              mercury__stream__Continue_14 = ((MR_Word) mercury__stream__conv3_Continue_14);
#line 436 "stream.m"
              if ((mercury__stream__Continue_14 == (MR_Integer) 0))
#line 434 "stream.m"
                {
#line 435 "stream.m"
                  {
#line 435 "stream.m"
                    MR_Word base;
#line 435 "stream.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 435 "stream.m"
                    *mercury__stream__Res_10 = base;
#line 435 "stream.m"
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T1_15;
#line 435 "stream.m"
                  }
#line 435 "stream.m"
                  *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 434 "stream.m"
                }
#line 436 "stream.m"
              else
#line 438 "stream.m"
                {
#line 438 "stream.m"
                  /* direct tailcall eliminated */
#line 438 "stream.m"
                  {
#line 438 "stream.m"
                    MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_15;
#line 438 "stream.m"
                    MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__stream__STATE_VARIABLE_S_20_20;

#line 438 "stream.m"
                    mercury__stream__STATE_VARIABLE_S_0_17 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17;
#line 438 "stream.m"
                    mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 438 "stream.m"
                  }
#line 438 "stream.m"
                  continue;
#line 438 "stream.m"
                }
#line 431 "stream.m"
            }
#line 428 "stream.m"
      }
#line 428 "stream.m"
      break;
#line 428 "stream.m"
    }
#line 335 "stream.m"
}

#line 323 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_1(
#line 323 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_22,
#line 323 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_21,
#line 323 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 323 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 323 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 323 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 323 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 323 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 323 "stream.m"
{
#line 414 "stream.m"
  while (MR_TRUE)
#line 414 "stream.m"
    {
#line 414 "stream.m"
      /* tailcall optimized into a loop */
#line 414 "stream.m"
      {
#line 414 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 414 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 414 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 4511 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4513 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4516 "stream.c"
        {
#line 4518 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4521 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 420 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "stream.m"
          {
#line 422 "stream.m"
            {
#line 422 "stream.m"
              MR_Word base;
#line 422 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 422 "stream.m"
              *mercury__stream__Res_10 = base;
#line 422 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 422 "stream.m"
            }
#line 422 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 421 "stream.m"
          }
#line 420 "stream.m"
        else
#line 420 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
#line 424 "stream.m"
            {
#line 424 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 425 "stream.m"
              {
#line 425 "stream.m"
                MR_Word base;
#line 425 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "stream.m"
                *mercury__stream__Res_10 = base;
#line 425 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 425 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 425 "stream.m"
              }
#line 425 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 424 "stream.m"
            }
#line 420 "stream.m"
          else
#line 417 "stream.m"
            {
#line 417 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 417 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 417 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 418 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 418 "stream.m"
              {
#line 418 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, mercury__stream__T0_9, &mercury__stream__T1_14, mercury__stream__STATE_VARIABLE_S_18_18, &mercury__stream__STATE_VARIABLE_S_19_19);
              }
#line 419 "stream.m"
              /* direct tailcall eliminated */
#line 419 "stream.m"
              {
#line 419 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 419 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_19_19;

#line 419 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 419 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 419 "stream.m"
              }
#line 419 "stream.m"
              continue;
#line 417 "stream.m"
            }
#line 414 "stream.m"
      }
#line 414 "stream.m"
      break;
#line 414 "stream.m"
    }
#line 323 "stream.m"
}

#line 320 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_0(
#line 320 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_22,
#line 320 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_21,
#line 320 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 320 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 320 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 320 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 320 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 320 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 320 "stream.m"
{
#line 414 "stream.m"
  while (MR_TRUE)
#line 414 "stream.m"
    {
#line 414 "stream.m"
      /* tailcall optimized into a loop */
#line 414 "stream.m"
      {
#line 414 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 414 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 414 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 4651 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4653 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4656 "stream.c"
        {
#line 4658 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4661 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 420 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "stream.m"
          {
#line 422 "stream.m"
            {
#line 422 "stream.m"
              MR_Word base;
#line 422 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 422 "stream.m"
              *mercury__stream__Res_10 = base;
#line 422 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 422 "stream.m"
            }
#line 422 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 421 "stream.m"
          }
#line 420 "stream.m"
        else
#line 420 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
#line 424 "stream.m"
            {
#line 424 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 425 "stream.m"
              {
#line 425 "stream.m"
                MR_Word base;
#line 425 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "stream.m"
                *mercury__stream__Res_10 = base;
#line 425 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 425 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 425 "stream.m"
              }
#line 425 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 424 "stream.m"
            }
#line 420 "stream.m"
          else
#line 417 "stream.m"
            {
#line 417 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 417 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 417 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 418 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 418 "stream.m"
              {
#line 418 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, mercury__stream__T0_9, &mercury__stream__T1_14, mercury__stream__STATE_VARIABLE_S_18_18, &mercury__stream__STATE_VARIABLE_S_19_19);
              }
#line 419 "stream.m"
              /* direct tailcall eliminated */
#line 419 "stream.m"
              {
#line 419 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 419 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_19_19;

#line 419 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 419 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 419 "stream.m"
              }
#line 419 "stream.m"
              continue;
#line 417 "stream.m"
            }
#line 414 "stream.m"
      }
#line 414 "stream.m"
      break;
#line 414 "stream.m"
    }
#line 320 "stream.m"
}

#line 311 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_1(
#line 311 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_18,
#line 311 "stream.m"
  MR_Box mercury__stream__Stream_6,
#line 311 "stream.m"
  MR_Word mercury__stream__Pred_7,
#line 311 "stream.m"
  MR_Word * mercury__stream__Res_8,
#line 311 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_13,
#line 311 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_14)
#line 311 "stream.m"
{
#line 400 "stream.m"
  while (MR_TRUE)
#line 400 "stream.m"
    {
#line 400 "stream.m"
      /* tailcall optimized into a loop */
#line 400 "stream.m"
      {
#line 400 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 400 "stream.m"
        MR_Word mercury__stream__Result0_10;
#line 400 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_15_15;
#line 4787 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4789 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4792 "stream.c"
        {
#line 4794 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4797 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 406 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "stream.m"
          {
#line 408 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 408 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 407 "stream.m"
          }
#line 406 "stream.m"
        else
#line 406 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_10)) == (MR_mktag((MR_Integer) 2))))
#line 410 "stream.m"
            {
#line 410 "stream.m"
              MR_Box mercury__stream__Error_12 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_10, (MR_Integer) 0));

#line 411 "stream.m"
              {
#line 411 "stream.m"
                MR_Word base;
#line 411 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "stream.m"
                *mercury__stream__Res_8 = base;
#line 411 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_12;
#line 411 "stream.m"
              }
#line 411 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 410 "stream.m"
            }
#line 406 "stream.m"
          else
#line 403 "stream.m"
            {
#line 403 "stream.m"
              MR_Box mercury__stream__Result_11 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_10, (MR_Integer) 0));
#line 403 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_16_16;
#line 404 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_7, (MR_Integer) 1)));

#line 404 "stream.m"
              {
#line 404 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_7), mercury__stream__Result_11, mercury__stream__STATE_VARIABLE_S_15_15, &mercury__stream__STATE_VARIABLE_S_16_16);
              }
#line 405 "stream.m"
              /* direct tailcall eliminated */
#line 405 "stream.m"
              {
#line 405 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13 = mercury__stream__STATE_VARIABLE_S_16_16;

#line 405 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_13 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13;
#line 405 "stream.m"
              }
#line 405 "stream.m"
              continue;
#line 403 "stream.m"
            }
#line 400 "stream.m"
      }
#line 400 "stream.m"
      break;
#line 400 "stream.m"
    }
#line 311 "stream.m"
}

#line 309 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_0(
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
#line 400 "stream.m"
  while (MR_TRUE)
#line 400 "stream.m"
    {
#line 400 "stream.m"
      /* tailcall optimized into a loop */
#line 400 "stream.m"
      {
#line 400 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 400 "stream.m"
        MR_Word mercury__stream__Result0_10;
#line 400 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_15_15;
#line 4905 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4907 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4910 "stream.c"
        {
#line 4912 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4915 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 406 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "stream.m"
          {
#line 408 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 408 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 407 "stream.m"
          }
#line 406 "stream.m"
        else
#line 406 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_10)) == (MR_mktag((MR_Integer) 2))))
#line 410 "stream.m"
            {
#line 410 "stream.m"
              MR_Box mercury__stream__Error_12 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_10, (MR_Integer) 0));

#line 411 "stream.m"
              {
#line 411 "stream.m"
                MR_Word base;
#line 411 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "stream.m"
                *mercury__stream__Res_8 = base;
#line 411 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_12;
#line 411 "stream.m"
              }
#line 411 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 410 "stream.m"
            }
#line 406 "stream.m"
          else
#line 403 "stream.m"
            {
#line 403 "stream.m"
              MR_Box mercury__stream__Result_11 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_10, (MR_Integer) 0));
#line 403 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_16_16;
#line 404 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_7, (MR_Integer) 1)));

#line 404 "stream.m"
              {
#line 404 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_7), mercury__stream__Result_11, mercury__stream__STATE_VARIABLE_S_15_15, &mercury__stream__STATE_VARIABLE_S_16_16);
              }
#line 405 "stream.m"
              /* direct tailcall eliminated */
#line 405 "stream.m"
              {
#line 405 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13 = mercury__stream__STATE_VARIABLE_S_16_16;

#line 405 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_13 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13;
#line 405 "stream.m"
              }
#line 405 "stream.m"
              continue;
#line 403 "stream.m"
            }
#line 400 "stream.m"
      }
#line 400 "stream.m"
      break;
#line 400 "stream.m"
    }
#line 309 "stream.m"
}

#line 300 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_6_p_1(
#line 300 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_21,
#line 300 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_20,
#line 300 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 300 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 300 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 300 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 300 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 300 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 300 "stream.m"
{
#line 386 "stream.m"
  while (MR_TRUE)
#line 386 "stream.m"
    {
#line 386 "stream.m"
      /* tailcall optimized into a loop */
#line 386 "stream.m"
      {
#line 386 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 386 "stream.m"
        MR_Word mercury__stream__Result_12;
#line 386 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 5027 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5029 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5032 "stream.c"
        {
#line 5034 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5037 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 392 "stream.m"
        if ((mercury__stream__Result_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "stream.m"
          {
#line 394 "stream.m"
            {
#line 394 "stream.m"
              MR_Word base;
#line 394 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "stream.m"
              *mercury__stream__Res_10 = base;
#line 394 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 394 "stream.m"
            }
#line 394 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 393 "stream.m"
          }
#line 392 "stream.m"
        else
#line 392 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result_12)) == (MR_mktag((MR_Integer) 2))))
#line 396 "stream.m"
            {
#line 396 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result_12, (MR_Integer) 0));

#line 397 "stream.m"
              {
#line 397 "stream.m"
                MR_Word base;
#line 397 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "stream.m"
                *mercury__stream__Res_10 = base;
#line 397 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 397 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 397 "stream.m"
              }
#line 397 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 396 "stream.m"
            }
#line 392 "stream.m"
          else
#line 389 "stream.m"
            {
#line 389 "stream.m"
              MR_Box mercury__stream__Unit_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result_12, (MR_Integer) 0));
#line 389 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 390 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 390 "stream.m"
              {
#line 390 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Unit_13, mercury__stream__T0_9, &mercury__stream__T1_14);
              }
#line 391 "stream.m"
              /* direct tailcall eliminated */
#line 391 "stream.m"
              {
#line 391 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 391 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_18_18;

#line 391 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 391 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 391 "stream.m"
              }
#line 391 "stream.m"
              continue;
#line 389 "stream.m"
            }
#line 386 "stream.m"
      }
#line 386 "stream.m"
      break;
#line 386 "stream.m"
    }
#line 300 "stream.m"
}

#line 298 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_6_p_0(
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
#line 386 "stream.m"
  while (MR_TRUE)
#line 386 "stream.m"
    {
#line 386 "stream.m"
      /* tailcall optimized into a loop */
#line 386 "stream.m"
      {
#line 386 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 386 "stream.m"
        MR_Word mercury__stream__Result_12;
#line 386 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 5165 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5167 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5170 "stream.c"
        {
#line 5172 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5175 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 392 "stream.m"
        if ((mercury__stream__Result_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "stream.m"
          {
#line 394 "stream.m"
            {
#line 394 "stream.m"
              MR_Word base;
#line 394 "stream.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "stream.m"
              *mercury__stream__Res_10 = base;
#line 394 "stream.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 394 "stream.m"
            }
#line 394 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 393 "stream.m"
          }
#line 392 "stream.m"
        else
#line 392 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result_12)) == (MR_mktag((MR_Integer) 2))))
#line 396 "stream.m"
            {
#line 396 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result_12, (MR_Integer) 0));

#line 397 "stream.m"
              {
#line 397 "stream.m"
                MR_Word base;
#line 397 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "stream.m"
                *mercury__stream__Res_10 = base;
#line 397 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 397 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 397 "stream.m"
              }
#line 397 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 396 "stream.m"
            }
#line 392 "stream.m"
          else
#line 389 "stream.m"
            {
#line 389 "stream.m"
              MR_Box mercury__stream__Unit_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result_12, (MR_Integer) 0));
#line 389 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 390 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 390 "stream.m"
              {
#line 390 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Unit_13, mercury__stream__T0_9, &mercury__stream__T1_14);
              }
#line 391 "stream.m"
              /* direct tailcall eliminated */
#line 391 "stream.m"
              {
#line 391 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 391 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_18_18;

#line 391 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 391 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 391 "stream.m"
              }
#line 391 "stream.m"
              continue;
#line 389 "stream.m"
            }
#line 386 "stream.m"
      }
#line 386 "stream.m"
      break;
#line 386 "stream.m"
    }
#line 298 "stream.m"
}

#line 284 "stream.m"
void MR_CALL 
mercury__stream__set_line_4_p_0(
#line 284 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_line_oriented_5,
#line 284 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 284 "stream.m"
  MR_Integer mercury__stream__HeadVar__2_2,
#line 284 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 284 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 284 "stream.m"
{
#line 5283 "stream.c"
  {
#line 5285 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5287 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 5290 "stream.c"
    {
#line 5292 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5294 "stream.c"
      return;
    }
#line 5297 "stream.c"
  }
#line 284 "stream.m"
}

#line 280 "stream.m"
void MR_CALL 
mercury__stream__get_line_4_p_0(
#line 280 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_line_oriented_5,
#line 280 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 280 "stream.m"
  MR_Integer * mercury__stream__HeadVar__2_2,
#line 280 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 280 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 280 "stream.m"
{
#line 5317 "stream.c"
  {
#line 5319 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5321 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5323 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5326 "stream.c"
    {
#line 5328 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5331 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Integer) mercury__stream__conv1_HeadVar__2_2);
#line 5333 "stream.c"
  }
#line 280 "stream.m"
}

#line 264 "stream.m"
void MR_CALL 
mercury__stream__seek_5_p_0(
#line 264 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_seekable_6,
#line 264 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 264 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 264 "stream.m"
  MR_Integer mercury__stream__HeadVar__3_3,
#line 264 "stream.m"
  MR_Box mercury__stream__HeadVar__4_4,
#line 264 "stream.m"
  MR_Box * mercury__stream__HeadVar__5_5)
#line 264 "stream.m"
{
#line 5355 "stream.c"
  {
#line 5357 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5359 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_seekable_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5362 "stream.c"
    {
#line 5364 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_seekable_6), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5);
#line 5366 "stream.c"
      return;
    }
#line 5369 "stream.c"
  }
#line 264 "stream.m"
}

#line 234 "stream.m"
void MR_CALL 
mercury__stream__unget_4_p_0(
#line 234 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_putback_5,
#line 234 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 234 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 234 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 234 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 234 "stream.m"
{
#line 5389 "stream.c"
  {
#line 5391 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5393 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5396 "stream.c"
    {
#line 5398 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_putback_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5400 "stream.c"
      return;
    }
#line 5403 "stream.c"
  }
#line 234 "stream.m"
}

#line 202 "stream.m"
void MR_CALL 
mercury__stream__put_4_p_0(
#line 202 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_writer_5,
#line 202 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 202 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 202 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 202 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 202 "stream.m"
{
#line 5423 "stream.c"
  {
#line 5425 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5427 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_writer_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5430 "stream.c"
    {
#line 5432 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_writer_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5434 "stream.c"
      return;
    }
#line 5437 "stream.c"
  }
#line 202 "stream.m"
}

#line 188 "stream.m"
void MR_CALL 
mercury__stream__flush_3_p_0(
#line 188 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_4,
#line 188 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 188 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 188 "stream.m"
  MR_Box * mercury__stream__HeadVar__3_3)
#line 188 "stream.m"
{
#line 5455 "stream.c"
  {
#line 5457 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5459 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5462 "stream.c"
    {
#line 5464 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_output_4), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3);
#line 5466 "stream.c"
      return;
    }
#line 5469 "stream.c"
  }
#line 188 "stream.m"
}

#line 161 "stream.m"
void MR_CALL 
mercury__stream__bulk_get_9_p_0(
#line 161 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_bulk_reader_10,
#line 161 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 161 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 161 "stream.m"
  MR_Integer mercury__stream__HeadVar__3_3,
#line 161 "stream.m"
  MR_Box mercury__stream__HeadVar__4_4,
#line 161 "stream.m"
  MR_Box * mercury__stream__HeadVar__5_5,
#line 161 "stream.m"
  MR_Integer * mercury__stream__HeadVar__6_6,
#line 161 "stream.m"
  MR_Word * mercury__stream__HeadVar__7_7,
#line 161 "stream.m"
  MR_Box mercury__stream__HeadVar__8_8,
#line 161 "stream.m"
  MR_Box * mercury__stream__HeadVar__9_9)
#line 161 "stream.m"
{
#line 5499 "stream.c"
  {
#line 5501 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5503 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_bulk_reader_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5505 "stream.c"
    MR_Box mercury__stream__conv2_HeadVar__6_6;
#line 5507 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__7_7;

#line 5510 "stream.c"
    {
#line 5512 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_bulk_reader_10), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5, &mercury__stream__conv2_HeadVar__6_6, &mercury__stream__conv1_HeadVar__7_7, mercury__stream__HeadVar__8_8, mercury__stream__HeadVar__9_9);
    }
#line 5515 "stream.c"
    *mercury__stream__HeadVar__6_6 = ((MR_Integer) mercury__stream__conv2_HeadVar__6_6);
#line 5517 "stream.c"
    *mercury__stream__HeadVar__7_7 = ((MR_Word) mercury__stream__conv1_HeadVar__7_7);
#line 5519 "stream.c"
  }
#line 161 "stream.m"
}

#line 122 "stream.m"
void MR_CALL 
mercury__stream__get_4_p_0(
#line 122 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_5,
#line 122 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 122 "stream.m"
  MR_Word * mercury__stream__HeadVar__2_2,
#line 122 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 122 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 122 "stream.m"
{
#line 5539 "stream.c"
  {
#line 5541 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5543 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5545 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5548 "stream.c"
    {
#line 5550 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5553 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Word) mercury__stream__conv1_HeadVar__2_2);
#line 5555 "stream.c"
  }
#line 122 "stream.m"
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
#line 5575 "stream.c"
  {
#line 5577 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5579 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_stream_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5581 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5584 "stream.c"
    {
#line 5586 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_stream_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5589 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5591 "stream.c"
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
#line 5605 "stream.c"
  {
#line 5607 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5609 "stream.c"
    MR_String mercury__stream__HeadVar__2_2;
#line 5611 "stream.c"
    MR_Box MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_error_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5613 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5616 "stream.c"
    {
#line 5618 "stream.c"
      mercury__stream__conv1_HeadVar__2_2 = mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_error_3), mercury__stream__HeadVar__1_1);
    }
#line 5621 "stream.c"
    mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5623 "stream.c"
    return mercury__stream__HeadVar__2_2;
#line 5625 "stream.c"
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
