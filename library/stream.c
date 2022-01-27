/*
** Automatically generated from `stream.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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




#line 86 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1];

#line 89 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0;

#line 92 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2];

#line 95 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1;

#line 98 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1];

#line 101 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1];

#line 104 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2];

#line 107 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2];

#line 110 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2];

#line 113 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1];

#line 116 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0;

#line 119 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1];

#line 122 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1;

#line 125 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1];

#line 128 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1];

#line 131 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2];

#line 134 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2];

#line 137 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2];

#line 140 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0;

#line 143 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1];

#line 146 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1;

#line 149 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1];

#line 152 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1];

#line 155 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2];

#line 158 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2];

#line 161 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2];

#line 164 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1];

#line 167 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0;

#line 170 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1;

#line 173 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1];

#line 176 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2;

#line 179 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1];

#line 182 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1];

#line 185 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1];

#line 188 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3];

#line 191 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3];

#line 194 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3];

#line 197 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0;

#line 200 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1;

#line 203 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1];

#line 206 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2;

#line 209 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2];

#line 212 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1];

#line 215 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2];

#line 218 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3];

#line 221 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3];

#line 224 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0;

#line 227 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1;

#line 230 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2;

#line 233 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3];

#line 236 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3];

#line 239 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3];

#line 242 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3];

#line 245 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1];

#line 248 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3;

#line 251 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1;

#line 254 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1];

#line 257 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4];

#line 260 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4;

#line 263 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1;

#line 266 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1];

#line 269 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2];

#line 272 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1];

#line 275 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2;

#line 278 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2];

#line 281 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1];

#line 284 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2;

#line 287 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1;

#line 290 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1];

#line 293 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4];

#line 296 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1];

#line 299 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4;

#line 302 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1;

#line 305 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2;

#line 308 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2];

#line 311 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4];

#line 314 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1];

#line 317 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4;

#line 320 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1;

#line 323 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1];

#line 326 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2];

#line 329 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1];

#line 332 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2;

#line 335 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1;

#line 338 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1];

#line 341 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2];

#line 344 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2];

#line 347 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2;

#line 350 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1;

#line 353 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1];

#line 356 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2];

#line 359 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2;

#line 362 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1;

#line 365 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1];

#line 368 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1];

#line 371 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1];

#line 374 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1;

#line 377 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2];

#line 380 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2;

#line 383 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1;

#line 386 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2;

#line 389 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2];

#line 392 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5];

#line 395 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1];

#line 398 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5;

#line 401 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1;

#line 404 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2;

#line 407 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2];

#line 410 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 413 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 415 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 417 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 419 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 422 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 425 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 427 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 429 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 431 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 433 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 436 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 439 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 441 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 444 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 447 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 449 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 451 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 454 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 457 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 459 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 461 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 463 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 466 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 469 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 471 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 473 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 475 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 477 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 480 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 483 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 485 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 487 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 490 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 493 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 495 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 497 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 499 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 502 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 505 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 507 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 509 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 511 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 514 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 517 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 519 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 521 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 523 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 525 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 528 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 531 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 533 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 535 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 538 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 541 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 543 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 545 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 547 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 550 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 553 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 555 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 558 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 561 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 563 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 565 "stream.c"
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



#line 934 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 939 "stream.c"
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

#line 954 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 960 "stream.c"
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

#line 975 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 980 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1
};

#line 985 "stream.c"
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

#line 999 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1,
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 1005 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1011 "stream.c"
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

#line 1032 "stream.c"
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

#line 1053 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1058 "stream.c"
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

#line 1073 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1078 "stream.c"
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

#line 1093 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1098 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_1
};

#line 1103 "stream.c"
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

#line 1117 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_res_2_1,
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1123 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1129 "stream.c"
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

#line 1150 "stream.c"
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

#line 1165 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1170 "stream.c"
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

#line 1185 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1190 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_1
};

#line 1195 "stream.c"
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

#line 1209 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2] = {
  &mercury__stream__stream__du_functor_desc_res_1_1,
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1215 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1221 "stream.c"
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

#line 1242 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1247 "stream.c"
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

#line 1262 "stream.c"
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

#line 1277 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1282 "stream.c"
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

#line 1297 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_1
};

#line 1302 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1307 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_2
};

#line 1312 "stream.c"
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

#line 1331 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3] = {
  &mercury__stream__stream__du_functor_desc_result_2_1,
  &mercury__stream__stream__du_functor_desc_result_2_2,
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1338 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1345 "stream.c"
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

#line 1366 "stream.c"
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

#line 1381 "stream.c"
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

#line 1396 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1401 "stream.c"
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

#line 1416 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2] = {
  &mercury__stream__stream__du_functor_desc_result_1_0,
  &mercury__stream__stream__du_functor_desc_result_1_1
};

#line 1422 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_1_2
};

#line 1427 "stream.c"
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

#line 1441 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3] = {
  &mercury__stream__stream__du_functor_desc_result_1_1,
  &mercury__stream__stream__du_functor_desc_result_1_2,
  &mercury__stream__stream__du_functor_desc_result_1_0
};

#line 1448 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1455 "stream.c"
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

#line 1476 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  (MR_Integer) 0
};

#line 1482 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  (MR_Integer) 1
};

#line 1488 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  (MR_Integer) 2
};

#line 1494 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_0,
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2
};

#line 1501 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2,
  &mercury__stream__stream__enum_functor_desc_whence_0_0
};

#line 1508 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1515 "stream.c"
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

#line 1536 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State"
};

#line 1543 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1] = {
  {
    (MR_String) "put",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1552 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3 = {
  (MR_String) "stream",
  (MR_String) "writer",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_writer_3,
  mercury__stream__stream__type_class_id_method_ids_writer_3
};

#line 1563 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1572 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_writer_3_1
};

#line 1577 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_writer_3 = {
  &mercury__stream__stream__type_class_id_writer_3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1585 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1593 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4 = {
  (MR_String) "stream",
  (MR_String) "unbounded_putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_unbounded_putback_4,
  NULL
};

#line 1604 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_putback_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1615 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1
};

#line 1620 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_unbounded_putback_4 = {
  &mercury__stream__stream__type_class_id_unbounded_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1628 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1634 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1] = {
  {
    (MR_String) "name",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1643 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2 = {
  (MR_String) "stream",
  (MR_String) "stream",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_stream_2,
  mercury__stream__stream__type_class_id_method_ids_stream_2
};

#line 1654 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_stream_2 = {
  &mercury__stream__stream__type_class_id_stream_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1662 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1668 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1] = {
  {
    (MR_String) "seek",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1677 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2 = {
  (MR_String) "stream",
  (MR_String) "seekable",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_seekable_2,
  mercury__stream__stream__type_class_id_method_ids_seekable_2
};

#line 1688 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1697 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_seekable_2_1
};

#line 1702 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_seekable_2 = {
  &mercury__stream__stream__type_class_id_seekable_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1710 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1718 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1] = {
  {
    (MR_String) "get",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1727 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4 = {
  (MR_String) "stream",
  (MR_String) "reader",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_reader_4,
  mercury__stream__stream__type_class_id_method_ids_reader_4
};

#line 1738 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1747 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1755 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_2
};

#line 1761 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_reader_4 = {
  &mercury__stream__stream__type_class_id_reader_4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1769 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1777 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1] = {
  {
    (MR_String) "unget",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1786 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4 = {
  (MR_String) "stream",
  (MR_String) "putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_putback_4,
  mercury__stream__stream__type_class_id_method_ids_putback_4
};

#line 1797 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_reader_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1808 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_putback_4_1
};

#line 1813 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_putback_4 = {
  &mercury__stream__stream__type_class_id_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1821 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1827 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1] = {
  {
    (MR_String) "flush",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1836 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2 = {
  (MR_String) "stream",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_output_2,
  mercury__stream__stream__type_class_id_method_ids_output_2
};

#line 1847 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1856 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_output_2_1
};

#line 1861 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_output_2 = {
  &mercury__stream__stream__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1869 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1875 "stream.c"
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

#line 1889 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2 = {
  (MR_String) "stream",
  (MR_String) "line_oriented",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__stream__stream__type_class_id_var_names_line_oriented_2,
  mercury__stream__stream__type_class_id_method_ids_line_oriented_2
};

#line 1900 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1909 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_line_oriented_2_1
};

#line 1914 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_line_oriented_2 = {
  &mercury__stream__stream__type_class_id_line_oriented_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1922 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1928 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2 = {
  (MR_String) "stream",
  (MR_String) "input",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_input_2,
  NULL
};

#line 1939 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1948 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_input_2_1
};

#line 1953 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_input_2 = {
  &mercury__stream__stream__type_class_id_input_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1961 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1] = {
  (MR_String) "Error"
};

#line 1966 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1] = {
  {
    (MR_String) "error_message",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1975 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1 = {
  (MR_String) "stream",
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_error_1,
  mercury__stream__stream__type_class_id_method_ids_error_1
};

#line 1986 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_error_1 = {
  &mercury__stream__stream__type_class_id_error_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1994 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 2000 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2 = {
  (MR_String) "stream",
  (MR_String) "duplex",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_duplex_2,
  NULL
};

#line 2011 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2020 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2029 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_2
};

#line 2035 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_duplex_2 = {
  &mercury__stream__stream__type_class_id_duplex_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2043 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5] = {
  (MR_String) "Stream",
  (MR_String) "Index",
  (MR_String) "Store",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 2052 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1] = {
  {
    (MR_String) "bulk_get",
    (MR_Integer) 9,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2061 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5 = {
  (MR_String) "stream",
  (MR_String) "bulk_reader",
  (MR_Integer) 5,
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_bulk_reader_5,
  mercury__stream__stream__type_class_id_method_ids_bulk_reader_5
};

#line 2072 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 2081 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 5
  }
};

#line 2089 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_2
};

#line 2095 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_bulk_reader_5 = {
  &mercury__stream__stream__type_class_id_bulk_reader_5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2103 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 2106 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2108 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2110 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2112 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2114 "stream.c"
{
#line 2116 "stream.c"
  {
#line 2118 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2121 "stream.c"
    {
#line 2123 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2126 "stream.c"
    return mercury__stream__succeeded;
#line 2128 "stream.c"
  }
#line 2130 "stream.c"
}

#line 2133 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 2136 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2138 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2140 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2142 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2144 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2146 "stream.c"
{
#line 2148 "stream.c"
  {
#line 2150 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2153 "stream.c"
    {
#line 2155 "stream.c"
      mercury__stream____Compare____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2158 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2160 "stream.c"
  }
#line 2162 "stream.c"
}

#line 2165 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 2168 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2170 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2172 "stream.c"
{
#line 2174 "stream.c"
  {
#line 2176 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2179 "stream.c"
    {
#line 2181 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____name_0_0(((MR_String) mercury__stream__wrapper_arg_1), ((MR_String) mercury__stream__wrapper_arg_2));
    }
#line 2184 "stream.c"
    return mercury__stream__succeeded;
#line 2186 "stream.c"
  }
#line 2188 "stream.c"
}

#line 2191 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 2194 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2196 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2198 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2200 "stream.c"
{
#line 2202 "stream.c"
  {
#line 2204 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2207 "stream.c"
    {
#line 2209 "stream.c"
      mercury__stream____Compare____name_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_String) mercury__stream__wrapper_arg_2), ((MR_String) mercury__stream__wrapper_arg_3));
    }
#line 2212 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2214 "stream.c"
  }
#line 2216 "stream.c"
}

#line 2219 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 2222 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2224 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2226 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2228 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2230 "stream.c"
{
#line 2232 "stream.c"
  {
#line 2234 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2237 "stream.c"
    {
#line 2239 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2242 "stream.c"
    return mercury__stream__succeeded;
#line 2244 "stream.c"
  }
#line 2246 "stream.c"
}

#line 2249 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 2252 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2254 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2256 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2258 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2260 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2262 "stream.c"
{
#line 2264 "stream.c"
  {
#line 2266 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2269 "stream.c"
    {
#line 2271 "stream.c"
      mercury__stream____Compare____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2274 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2276 "stream.c"
  }
#line 2278 "stream.c"
}

#line 2281 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 2284 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2286 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2288 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2290 "stream.c"
{
#line 2292 "stream.c"
  {
#line 2294 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2297 "stream.c"
    {
#line 2299 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2302 "stream.c"
    return mercury__stream__succeeded;
#line 2304 "stream.c"
  }
#line 2306 "stream.c"
}

#line 2309 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 2312 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2314 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2316 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2318 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2320 "stream.c"
{
#line 2322 "stream.c"
  {
#line 2324 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2327 "stream.c"
    {
#line 2329 "stream.c"
      mercury__stream____Compare____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2332 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2334 "stream.c"
  }
#line 2336 "stream.c"
}

#line 2339 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 2342 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2344 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2346 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2348 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2350 "stream.c"
{
#line 2352 "stream.c"
  {
#line 2354 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2357 "stream.c"
    {
#line 2359 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2362 "stream.c"
    return mercury__stream__succeeded;
#line 2364 "stream.c"
  }
#line 2366 "stream.c"
}

#line 2369 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 2372 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2374 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2376 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2378 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2380 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2382 "stream.c"
{
#line 2384 "stream.c"
  {
#line 2386 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2389 "stream.c"
    {
#line 2391 "stream.c"
      mercury__stream____Compare____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2394 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2396 "stream.c"
  }
#line 2398 "stream.c"
}

#line 2401 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 2404 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2406 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2408 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2410 "stream.c"
{
#line 2412 "stream.c"
  {
#line 2414 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2417 "stream.c"
    {
#line 2419 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2422 "stream.c"
    return mercury__stream__succeeded;
#line 2424 "stream.c"
  }
#line 2426 "stream.c"
}

#line 2429 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 2432 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2434 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2436 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2438 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2440 "stream.c"
{
#line 2442 "stream.c"
  {
#line 2444 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2447 "stream.c"
    {
#line 2449 "stream.c"
      mercury__stream____Compare____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2452 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2454 "stream.c"
  }
#line 2456 "stream.c"
}

#line 2459 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 2462 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2464 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2466 "stream.c"
{
#line 2468 "stream.c"
  {
#line 2470 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2473 "stream.c"
    {
#line 2475 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____whence_0_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2));
    }
#line 2478 "stream.c"
    return mercury__stream__succeeded;
#line 2480 "stream.c"
  }
#line 2482 "stream.c"
}

#line 2485 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 2488 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2490 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2492 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2494 "stream.c"
{
#line 2496 "stream.c"
  {
#line 2498 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2501 "stream.c"
    {
#line 2503 "stream.c"
      mercury__stream____Compare____whence_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2506 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2508 "stream.c"
  }
#line 2510 "stream.c"
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
#line 2586 "stream.c"
  {
#line 2588 "stream.c"
    MR_bool mercury__stream__succeeded = (mercury__stream__HeadVar__2_1 == mercury__stream__HeadVar__2_2);

#line 2591 "stream.c"
    return mercury__stream__succeeded;
#line 2593 "stream.c"
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
#line 2626 "stream.c"
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
#line 2640 "stream.c"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
          else
#line 2644 "stream.c"
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
#line 2657 "stream.c"
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
#line 2679 "stream.c"
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
#line 2692 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
            else
#line 41 "stream.m"
              if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2698 "stream.c"
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
#line 2785 "stream.c"
                {
#line 2787 "stream.c"
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
#line 2811 "stream.c"
                {
#line 2813 "stream.c"
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
#line 2853 "stream.c"
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
#line 2871 "stream.c"
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
#line 2889 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
        else
#line 36 "stream.m"
          {
#line 36 "stream.m"
            MR_Box mercury__stream__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 36 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2900 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
            else
#line 36 "stream.m"
              if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2906 "stream.c"
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
#line 3004 "stream.c"
                {
#line 3006 "stream.c"
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
#line 3048 "stream.c"
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
#line 3077 "stream.c"
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
#line 3090 "stream.c"
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
#line 3162 "stream.c"
              {
#line 3164 "stream.c"
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
#line 3188 "stream.c"
              {
#line 3190 "stream.c"
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
#line 3230 "stream.c"
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
#line 3242 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "stream.m"
      else
#line 46 "stream.m"
        {
#line 46 "stream.m"
          MR_Box mercury__stream__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 46 "stream.m"
          if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3253 "stream.c"
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
#line 3336 "stream.c"
              {
#line 3338 "stream.c"
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

#line 3389 "stream.c"

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
#line 3478 "stream.c"
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
#line 3507 "stream.c"
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
#line 3528 "stream.c"
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
#line 3541 "stream.c"
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
#line 3619 "stream.c"
              {
#line 3621 "stream.c"
                mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_5_5, mercury__stream__V_7_7);
              }
#line 57 "stream.m"
              if (mercury__stream__succeeded)
#line 3626 "stream.c"
                {
#line 3628 "stream.c"
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
#line 3652 "stream.c"
              {
#line 3654 "stream.c"
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
#line 4005 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 4007 "stream.c"
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

#line 4026 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__TypeClassInfo_for_reader_17  = TypeClassInfo;
#line 143 "private_builtin.opt"
}
#line 4033 "stream.c"
        mercury__stream__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4035 "stream.c"
        {
#line 4037 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_17), mercury__stream__Stream_5, &mercury__stream__conv1_CharResult_8, mercury__stream__STATE_VARIABLE_State_0_11, &mercury__stream__STATE_VARIABLE_State_13_13);
        }
#line 4040 "stream.c"
        mercury__stream__CharResult_8 = ((MR_Word) mercury__stream__conv1_CharResult_8);
#line 454 "stream.m"
        if ((mercury__stream__CharResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "stream.m"
          {
#line 456 "stream.m"
            *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 456 "stream.m"
            *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 455 "stream.m"
          }
#line 454 "stream.m"
        else
#line 454 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__CharResult_8)) == (MR_mktag((MR_Integer) 2))))
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
#line 453 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 452 "stream.m"
            }
#line 454 "stream.m"
          else
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
#line 4112 "stream.c"
                  void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4115 "stream.c"
                  {
#line 4117 "stream.c"
                    mercury__stream__func_2(((MR_Box) mercury__stream__TypeClassInfo_for_putback_16), mercury__stream__Stream_5, ((MR_Box) (MR_Word) (mercury__stream__Char_10)), mercury__stream__STATE_VARIABLE_State_13_13, mercury__stream__STATE_VARIABLE_State_12);
                  }
#line 463 "stream.m"
                  *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "stream.m"
                }
#line 458 "stream.m"
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
#line 4170 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4172 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4175 "stream.c"
        {
#line 4177 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4180 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 439 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 441 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 440 "stream.m"
          }
#line 439 "stream.m"
        else
#line 439 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 444 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 443 "stream.m"
            }
#line 439 "stream.m"
          else
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
              if ((mercury__stream__Continue_14 == (MR_Integer) 0))
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
#line 433 "stream.m"
                  *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
                }
#line 434 "stream.m"
              else
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
#line 429 "stream.m"
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
#line 4342 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4344 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4347 "stream.c"
        {
#line 4349 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4352 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 439 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 441 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 440 "stream.m"
          }
#line 439 "stream.m"
        else
#line 439 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 444 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 443 "stream.m"
            }
#line 439 "stream.m"
          else
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
              if ((mercury__stream__Continue_14 == (MR_Integer) 0))
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
#line 433 "stream.m"
                  *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
                }
#line 434 "stream.m"
              else
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
#line 429 "stream.m"
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
#line 4514 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4516 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4519 "stream.c"
        {
#line 4521 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4524 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 418 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 420 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 419 "stream.m"
          }
#line 418 "stream.m"
        else
#line 418 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 423 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 422 "stream.m"
            }
#line 418 "stream.m"
          else
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
#line 4654 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4656 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4659 "stream.c"
        {
#line 4661 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4664 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 418 "stream.m"
        if ((mercury__stream__Result0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 420 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 419 "stream.m"
          }
#line 418 "stream.m"
        else
#line 418 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 423 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 422 "stream.m"
            }
#line 418 "stream.m"
          else
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
#line 4790 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4792 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4795 "stream.c"
        {
#line 4797 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4800 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "stream.m"
          {
#line 406 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 405 "stream.m"
          }
#line 404 "stream.m"
        else
#line 404 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_10)) == (MR_mktag((MR_Integer) 2))))
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
#line 409 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 408 "stream.m"
            }
#line 404 "stream.m"
          else
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
#line 4908 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4910 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4913 "stream.c"
        {
#line 4915 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4918 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "stream.m"
          {
#line 406 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 405 "stream.m"
          }
#line 404 "stream.m"
        else
#line 404 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result0_10)) == (MR_mktag((MR_Integer) 2))))
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
#line 409 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 408 "stream.m"
            }
#line 404 "stream.m"
          else
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
#line 5030 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5032 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5035 "stream.c"
        {
#line 5037 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5040 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 390 "stream.m"
        if ((mercury__stream__Result_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 392 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 391 "stream.m"
          }
#line 390 "stream.m"
        else
#line 390 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 395 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 394 "stream.m"
            }
#line 390 "stream.m"
          else
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
#line 5168 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5170 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5173 "stream.c"
        {
#line 5175 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5178 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 390 "stream.m"
        if ((mercury__stream__Result_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 392 "stream.m"
            *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 391 "stream.m"
          }
#line 390 "stream.m"
        else
#line 390 "stream.m"
          if (((MR_tag((MR_Word) mercury__stream__Result_12)) == (MR_mktag((MR_Integer) 2))))
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
#line 395 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 394 "stream.m"
            }
#line 390 "stream.m"
          else
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
#line 5286 "stream.c"
  {
#line 5288 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5290 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 5293 "stream.c"
    {
#line 5295 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5297 "stream.c"
      return;
    }
#line 5300 "stream.c"
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
#line 5320 "stream.c"
  {
#line 5322 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5324 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5326 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5329 "stream.c"
    {
#line 5331 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5334 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Integer) mercury__stream__conv1_HeadVar__2_2);
#line 5336 "stream.c"
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
#line 5358 "stream.c"
  {
#line 5360 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5362 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_seekable_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5365 "stream.c"
    {
#line 5367 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_seekable_6), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5);
#line 5369 "stream.c"
      return;
    }
#line 5372 "stream.c"
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
#line 5392 "stream.c"
  {
#line 5394 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5396 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5399 "stream.c"
    {
#line 5401 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_putback_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5403 "stream.c"
      return;
    }
#line 5406 "stream.c"
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
#line 5426 "stream.c"
  {
#line 5428 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5430 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_writer_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5433 "stream.c"
    {
#line 5435 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_writer_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5437 "stream.c"
      return;
    }
#line 5440 "stream.c"
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
#line 5458 "stream.c"
  {
#line 5460 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5462 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5465 "stream.c"
    {
#line 5467 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_output_4), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3);
#line 5469 "stream.c"
      return;
    }
#line 5472 "stream.c"
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
#line 5502 "stream.c"
  {
#line 5504 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5506 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_bulk_reader_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5508 "stream.c"
    MR_Box mercury__stream__conv2_HeadVar__6_6;
#line 5510 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__7_7;

#line 5513 "stream.c"
    {
#line 5515 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_bulk_reader_10), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5, &mercury__stream__conv2_HeadVar__6_6, &mercury__stream__conv1_HeadVar__7_7, mercury__stream__HeadVar__8_8, mercury__stream__HeadVar__9_9);
    }
#line 5518 "stream.c"
    *mercury__stream__HeadVar__6_6 = ((MR_Integer) mercury__stream__conv2_HeadVar__6_6);
#line 5520 "stream.c"
    *mercury__stream__HeadVar__7_7 = ((MR_Word) mercury__stream__conv1_HeadVar__7_7);
#line 5522 "stream.c"
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
#line 5542 "stream.c"
  {
#line 5544 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5546 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5548 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5551 "stream.c"
    {
#line 5553 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5556 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Word) mercury__stream__conv1_HeadVar__2_2);
#line 5558 "stream.c"
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
#line 5578 "stream.c"
  {
#line 5580 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5582 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_stream_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5584 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5587 "stream.c"
    {
#line 5589 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_stream_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5592 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5594 "stream.c"
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
#line 5608 "stream.c"
  {
#line 5610 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5612 "stream.c"
    MR_String mercury__stream__HeadVar__2_2;
#line 5614 "stream.c"
    MR_Box MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_error_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5616 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5619 "stream.c"
    {
#line 5621 "stream.c"
      mercury__stream__conv1_HeadVar__2_2 = mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_error_3), mercury__stream__HeadVar__1_1);
    }
#line 5624 "stream.c"
    mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5626 "stream.c"
    return mercury__stream__HeadVar__2_2;
#line 5628 "stream.c"
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
