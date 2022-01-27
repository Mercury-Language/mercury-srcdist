/*
** Automatically generated from `stream.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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




#line 92 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1];

#line 95 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0;

#line 98 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2];

#line 101 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1;

#line 104 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1];

#line 107 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1];

#line 110 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2];

#line 113 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2];

#line 116 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2];

#line 119 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1];

#line 122 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0;

#line 125 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1];

#line 128 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1;

#line 131 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1];

#line 134 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1];

#line 137 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2];

#line 140 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2];

#line 143 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2];

#line 146 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0;

#line 149 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1];

#line 152 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1;

#line 155 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1];

#line 158 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1];

#line 161 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2];

#line 164 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2];

#line 167 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2];

#line 170 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1];

#line 173 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0;

#line 176 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1;

#line 179 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1];

#line 182 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2;

#line 185 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1];

#line 188 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1];

#line 191 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1];

#line 194 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3];

#line 197 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3];

#line 200 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3];

#line 203 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0;

#line 206 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1;

#line 209 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1];

#line 212 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2;

#line 215 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2];

#line 218 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1];

#line 221 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2];

#line 224 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3];

#line 227 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3];

#line 230 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0;

#line 233 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1;

#line 236 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2;

#line 239 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3];

#line 242 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3];

#line 245 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3];

#line 248 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3];

#line 251 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1];

#line 254 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3;

#line 257 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1;

#line 260 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1];

#line 263 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4];

#line 266 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4;

#line 269 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1;

#line 272 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1];

#line 275 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2];

#line 278 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1];

#line 281 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2;

#line 284 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2];

#line 287 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1];

#line 290 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2;

#line 293 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1;

#line 296 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1];

#line 299 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4];

#line 302 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1];

#line 305 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4;

#line 308 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1;

#line 311 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2;

#line 314 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2];

#line 317 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4];

#line 320 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1];

#line 323 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4;

#line 326 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1;

#line 329 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1];

#line 332 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2];

#line 335 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1];

#line 338 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2;

#line 341 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1;

#line 344 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1];

#line 347 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2];

#line 350 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2];

#line 353 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2;

#line 356 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1;

#line 359 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1];

#line 362 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2];

#line 365 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2;

#line 368 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1;

#line 371 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1];

#line 374 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1];

#line 377 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1];

#line 380 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1;

#line 383 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2];

#line 386 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2;

#line 389 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1;

#line 392 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2;

#line 395 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2];

#line 398 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5];

#line 401 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1];

#line 404 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5;

#line 407 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1;

#line 410 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2;

#line 413 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2];

#line 416 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 419 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 421 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 423 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 425 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 428 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 431 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 433 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 435 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 437 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 439 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 442 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 445 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 447 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 450 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 453 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 455 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 457 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 460 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 463 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 465 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 467 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 469 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 472 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 475 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 477 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 479 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 481 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 483 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 486 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 489 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 491 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 493 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 496 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 499 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 501 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 503 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 505 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 508 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 511 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 513 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 515 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 517 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 520 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 523 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 525 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 527 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 529 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 531 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 534 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 537 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 539 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 541 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 544 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 547 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 549 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 551 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 553 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 556 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 559 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 561 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 564 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 567 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 569 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 571 "stream.c"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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



#line 940 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 945 "stream.c"
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

#line 960 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 966 "stream.c"
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

#line 981 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 986 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1
};

#line 991 "stream.c"
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

#line 1005 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1,
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 1011 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1017 "stream.c"
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

#line 1038 "stream.c"
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

#line 1059 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1064 "stream.c"
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

#line 1079 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1084 "stream.c"
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

#line 1099 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1104 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_1
};

#line 1109 "stream.c"
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

#line 1123 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_res_2_1,
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 1129 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1135 "stream.c"
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

#line 1156 "stream.c"
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

#line 1171 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1176 "stream.c"
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

#line 1191 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1196 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_1
};

#line 1201 "stream.c"
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

#line 1215 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2] = {
  &mercury__stream__stream__du_functor_desc_res_1_1,
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1221 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1227 "stream.c"
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

#line 1248 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1253 "stream.c"
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

#line 1268 "stream.c"
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

#line 1283 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1288 "stream.c"
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

#line 1303 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_1
};

#line 1308 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1313 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_2
};

#line 1318 "stream.c"
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

#line 1337 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3] = {
  &mercury__stream__stream__du_functor_desc_result_2_1,
  &mercury__stream__stream__du_functor_desc_result_2_2,
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1344 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1351 "stream.c"
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

#line 1372 "stream.c"
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

#line 1387 "stream.c"
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

#line 1402 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1407 "stream.c"
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

#line 1422 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2] = {
  &mercury__stream__stream__du_functor_desc_result_1_0,
  &mercury__stream__stream__du_functor_desc_result_1_1
};

#line 1428 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_1_2
};

#line 1433 "stream.c"
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

#line 1447 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3] = {
  &mercury__stream__stream__du_functor_desc_result_1_1,
  &mercury__stream__stream__du_functor_desc_result_1_2,
  &mercury__stream__stream__du_functor_desc_result_1_0
};

#line 1454 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1461 "stream.c"
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

#line 1482 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  (MR_Integer) 0
};

#line 1488 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  (MR_Integer) 1
};

#line 1494 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  (MR_Integer) 2
};

#line 1500 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_0,
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2
};

#line 1507 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2,
  &mercury__stream__stream__enum_functor_desc_whence_0_0
};

#line 1514 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1521 "stream.c"
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

#line 1542 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State"
};

#line 1549 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1] = {
  {
    (MR_String) "put",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1558 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3 = {
  (MR_String) "stream",
  (MR_String) "writer",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_writer_3,
  mercury__stream__stream__type_class_id_method_ids_writer_3
};

#line 1569 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1578 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_writer_3_1
};

#line 1583 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_writer_3 = {
  &mercury__stream__stream__type_class_id_writer_3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1591 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1599 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4 = {
  (MR_String) "stream",
  (MR_String) "unbounded_putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_unbounded_putback_4,
  NULL
};

#line 1610 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_putback_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1621 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1
};

#line 1626 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_unbounded_putback_4 = {
  &mercury__stream__stream__type_class_id_unbounded_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1634 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1640 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1] = {
  {
    (MR_String) "name",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1649 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2 = {
  (MR_String) "stream",
  (MR_String) "stream",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_stream_2,
  mercury__stream__stream__type_class_id_method_ids_stream_2
};

#line 1660 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_stream_2 = {
  &mercury__stream__stream__type_class_id_stream_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1668 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1674 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1] = {
  {
    (MR_String) "seek",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1683 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2 = {
  (MR_String) "stream",
  (MR_String) "seekable",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_seekable_2,
  mercury__stream__stream__type_class_id_method_ids_seekable_2
};

#line 1694 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1703 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_seekable_2_1
};

#line 1708 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_seekable_2 = {
  &mercury__stream__stream__type_class_id_seekable_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1716 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1724 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1] = {
  {
    (MR_String) "get",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1733 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4 = {
  (MR_String) "stream",
  (MR_String) "reader",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_reader_4,
  mercury__stream__stream__type_class_id_method_ids_reader_4
};

#line 1744 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1753 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1761 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_2
};

#line 1767 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_reader_4 = {
  &mercury__stream__stream__type_class_id_reader_4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1775 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1783 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1] = {
  {
    (MR_String) "unget",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1792 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4 = {
  (MR_String) "stream",
  (MR_String) "putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_putback_4,
  mercury__stream__stream__type_class_id_method_ids_putback_4
};

#line 1803 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_reader_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1814 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_putback_4_1
};

#line 1819 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_putback_4 = {
  &mercury__stream__stream__type_class_id_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1827 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1833 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1] = {
  {
    (MR_String) "flush",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1842 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2 = {
  (MR_String) "stream",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_output_2,
  mercury__stream__stream__type_class_id_method_ids_output_2
};

#line 1853 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1862 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_output_2_1
};

#line 1867 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_output_2 = {
  &mercury__stream__stream__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1875 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1881 "stream.c"
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

#line 1895 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2 = {
  (MR_String) "stream",
  (MR_String) "line_oriented",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__stream__stream__type_class_id_var_names_line_oriented_2,
  mercury__stream__stream__type_class_id_method_ids_line_oriented_2
};

#line 1906 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1915 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_line_oriented_2_1
};

#line 1920 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_line_oriented_2 = {
  &mercury__stream__stream__type_class_id_line_oriented_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1928 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1934 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2 = {
  (MR_String) "stream",
  (MR_String) "input",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_input_2,
  NULL
};

#line 1945 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1954 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_input_2_1
};

#line 1959 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_input_2 = {
  &mercury__stream__stream__type_class_id_input_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1967 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1] = {
  (MR_String) "Error"
};

#line 1972 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1] = {
  {
    (MR_String) "error_message",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1981 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1 = {
  (MR_String) "stream",
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_error_1,
  mercury__stream__stream__type_class_id_method_ids_error_1
};

#line 1992 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_error_1 = {
  &mercury__stream__stream__type_class_id_error_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2000 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 2006 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2 = {
  (MR_String) "stream",
  (MR_String) "duplex",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_duplex_2,
  NULL
};

#line 2017 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2026 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2035 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_2
};

#line 2041 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_duplex_2 = {
  &mercury__stream__stream__type_class_id_duplex_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2049 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5] = {
  (MR_String) "Stream",
  (MR_String) "Index",
  (MR_String) "Store",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 2058 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1] = {
  {
    (MR_String) "bulk_get",
    (MR_Integer) 9,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2067 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5 = {
  (MR_String) "stream",
  (MR_String) "bulk_reader",
  (MR_Integer) 5,
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_bulk_reader_5,
  mercury__stream__stream__type_class_id_method_ids_bulk_reader_5
};

#line 2078 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 2087 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 5
  }
};

#line 2095 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_2
};

#line 2101 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_bulk_reader_5 = {
  &mercury__stream__stream__type_class_id_bulk_reader_5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 2109 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 2112 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2114 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2116 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2118 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2120 "stream.c"
{
#line 2122 "stream.c"
  {
#line 2124 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2127 "stream.c"
    {
#line 2129 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2132 "stream.c"
    return mercury__stream__succeeded;
#line 2134 "stream.c"
  }
#line 2136 "stream.c"
}

#line 2139 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 2142 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2144 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2146 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2148 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2150 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2152 "stream.c"
{
#line 2154 "stream.c"
  {
#line 2156 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2159 "stream.c"
    {
#line 2161 "stream.c"
      mercury__stream____Compare____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2164 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2166 "stream.c"
  }
#line 2168 "stream.c"
}

#line 2171 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 2174 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2176 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2178 "stream.c"
{
#line 2180 "stream.c"
  {
#line 2182 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2185 "stream.c"
    {
#line 2187 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____name_0_0(((MR_String) mercury__stream__wrapper_arg_1), ((MR_String) mercury__stream__wrapper_arg_2));
    }
#line 2190 "stream.c"
    return mercury__stream__succeeded;
#line 2192 "stream.c"
  }
#line 2194 "stream.c"
}

#line 2197 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 2200 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2202 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2204 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2206 "stream.c"
{
#line 2208 "stream.c"
  {
#line 2210 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2213 "stream.c"
    {
#line 2215 "stream.c"
      mercury__stream____Compare____name_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_String) mercury__stream__wrapper_arg_2), ((MR_String) mercury__stream__wrapper_arg_3));
    }
#line 2218 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2220 "stream.c"
  }
#line 2222 "stream.c"
}

#line 2225 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 2228 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2230 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2232 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2234 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2236 "stream.c"
{
#line 2238 "stream.c"
  {
#line 2240 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2243 "stream.c"
    {
#line 2245 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2248 "stream.c"
    return mercury__stream__succeeded;
#line 2250 "stream.c"
  }
#line 2252 "stream.c"
}

#line 2255 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 2258 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2260 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2262 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2264 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2266 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2268 "stream.c"
{
#line 2270 "stream.c"
  {
#line 2272 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2275 "stream.c"
    {
#line 2277 "stream.c"
      mercury__stream____Compare____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2280 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2282 "stream.c"
  }
#line 2284 "stream.c"
}

#line 2287 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 2290 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2292 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2294 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2296 "stream.c"
{
#line 2298 "stream.c"
  {
#line 2300 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2303 "stream.c"
    {
#line 2305 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2308 "stream.c"
    return mercury__stream__succeeded;
#line 2310 "stream.c"
  }
#line 2312 "stream.c"
}

#line 2315 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 2318 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2320 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2322 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2324 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2326 "stream.c"
{
#line 2328 "stream.c"
  {
#line 2330 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2333 "stream.c"
    {
#line 2335 "stream.c"
      mercury__stream____Compare____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2338 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2340 "stream.c"
  }
#line 2342 "stream.c"
}

#line 2345 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 2348 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2350 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2352 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2354 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2356 "stream.c"
{
#line 2358 "stream.c"
  {
#line 2360 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2363 "stream.c"
    {
#line 2365 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2368 "stream.c"
    return mercury__stream__succeeded;
#line 2370 "stream.c"
  }
#line 2372 "stream.c"
}

#line 2375 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 2378 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2380 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2382 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2384 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2386 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2388 "stream.c"
{
#line 2390 "stream.c"
  {
#line 2392 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2395 "stream.c"
    {
#line 2397 "stream.c"
      mercury__stream____Compare____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2400 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2402 "stream.c"
  }
#line 2404 "stream.c"
}

#line 2407 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 2410 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2412 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2414 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2416 "stream.c"
{
#line 2418 "stream.c"
  {
#line 2420 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2423 "stream.c"
    {
#line 2425 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2428 "stream.c"
    return mercury__stream__succeeded;
#line 2430 "stream.c"
  }
#line 2432 "stream.c"
}

#line 2435 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 2438 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2440 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2442 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2444 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2446 "stream.c"
{
#line 2448 "stream.c"
  {
#line 2450 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2453 "stream.c"
    {
#line 2455 "stream.c"
      mercury__stream____Compare____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2458 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2460 "stream.c"
  }
#line 2462 "stream.c"
}

#line 2465 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 2468 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2470 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2472 "stream.c"
{
#line 2474 "stream.c"
  {
#line 2476 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2479 "stream.c"
    {
#line 2481 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____whence_0_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2));
    }
#line 2484 "stream.c"
    return mercury__stream__succeeded;
#line 2486 "stream.c"
  }
#line 2488 "stream.c"
}

#line 2491 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 2494 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2496 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2498 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2500 "stream.c"
{
#line 2502 "stream.c"
  {
#line 2504 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2507 "stream.c"
    {
#line 2509 "stream.c"
      mercury__stream____Compare____whence_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2512 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2514 "stream.c"
  }
#line 2516 "stream.c"
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
#line 2592 "stream.c"
  {
#line 2594 "stream.c"
    MR_bool mercury__stream__succeeded = (mercury__stream__HeadVar__2_1 == mercury__stream__HeadVar__2_2);

#line 2597 "stream.c"
    return mercury__stream__succeeded;
#line 2599 "stream.c"
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
#line 2632 "stream.c"
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
#line 2646 "stream.c"
            *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
          else
#line 2650 "stream.c"
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
#line 2663 "stream.c"
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
#line 2685 "stream.c"
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
#line 2698 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
            else
#line 41 "stream.m"
              if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2704 "stream.c"
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
#line 2791 "stream.c"
                {
#line 2793 "stream.c"
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
#line 2817 "stream.c"
                {
#line 2819 "stream.c"
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
#line 2859 "stream.c"
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
#line 2877 "stream.c"
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
#line 2895 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
        else
#line 36 "stream.m"
          {
#line 36 "stream.m"
            MR_Box mercury__stream__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 36 "stream.m"
            if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2906 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
            else
#line 36 "stream.m"
              if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2912 "stream.c"
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
#line 3010 "stream.c"
                {
#line 3012 "stream.c"
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
#line 3054 "stream.c"
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
#line 3083 "stream.c"
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
#line 3096 "stream.c"
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
#line 3168 "stream.c"
              {
#line 3170 "stream.c"
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
#line 3194 "stream.c"
              {
#line 3196 "stream.c"
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
#line 3236 "stream.c"
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
#line 3248 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "stream.m"
      else
#line 46 "stream.m"
        {
#line 46 "stream.m"
          MR_Box mercury__stream__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 46 "stream.m"
          if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3259 "stream.c"
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
#line 3342 "stream.c"
              {
#line 3344 "stream.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream____Compare____name_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__stream__Cast_HeadVar1_4 ;
	S2 =  mercury__stream__Cast_HeadVar2_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3395 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__Res_7_10  = Res;
#line 130 "private_builtin.opt"
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
#line 3484 "stream.c"
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
#line 3513 "stream.c"
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
#line 3534 "stream.c"
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
#line 3547 "stream.c"
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
#line 3625 "stream.c"
              {
#line 3627 "stream.c"
                mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_5_5, mercury__stream__V_7_7);
              }
#line 57 "stream.m"
              if (mercury__stream__succeeded)
#line 3632 "stream.c"
                {
#line 3634 "stream.c"
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
#line 3658 "stream.c"
              {
#line 3660 "stream.c"
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
#line 4011 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 4013 "stream.c"
        MR_Box mercury__stream__conv1_CharResult_8;

#line 139 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream__ignore_whitespace_4_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__stream__TypeClassInfo_for_putback_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 139 "private_builtin.opt"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 4032 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__TypeClassInfo_for_reader_17  = TypeClassInfo;
#line 139 "private_builtin.opt"
}
#line 4039 "stream.c"
        mercury__stream__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4041 "stream.c"
        {
#line 4043 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_17), mercury__stream__Stream_5, &mercury__stream__conv1_CharResult_8, mercury__stream__STATE_VARIABLE_State_0_11, &mercury__stream__STATE_VARIABLE_State_13_13);
        }
#line 4046 "stream.c"
        mercury__stream__CharResult_8 = ((MR_Word) mercury__stream__conv1_CharResult_8);
#line 454 "stream.m"
        if ((mercury__stream__CharResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "stream.m"
          {
#line 456 "stream.m"
            *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 455 "stream.m"
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
#line 452 "stream.m"
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
#line 4118 "stream.c"
                  void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4121 "stream.c"
                  {
#line 4123 "stream.c"
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
#line 4176 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4178 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4181 "stream.c"
        {
#line 4183 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4186 "stream.c"
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
#line 440 "stream.m"
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
#line 443 "stream.m"
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
#line 432 "stream.m"
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
#line 4348 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4350 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4353 "stream.c"
        {
#line 4355 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4358 "stream.c"
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
#line 440 "stream.m"
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
#line 443 "stream.m"
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
#line 432 "stream.m"
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
#line 4520 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4522 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4525 "stream.c"
        {
#line 4527 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4530 "stream.c"
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
#line 419 "stream.m"
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
#line 422 "stream.m"
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
#line 4660 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4662 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4665 "stream.c"
        {
#line 4667 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4670 "stream.c"
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
#line 419 "stream.m"
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
#line 422 "stream.m"
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
#line 4796 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4798 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4801 "stream.c"
        {
#line 4803 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4806 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "stream.m"
          {
#line 406 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "stream.m"
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
#line 408 "stream.m"
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
#line 4914 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4916 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4919 "stream.c"
        {
#line 4921 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4924 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
        if ((mercury__stream__Result0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "stream.m"
          {
#line 406 "stream.m"
            *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "stream.m"
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
#line 408 "stream.m"
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
#line 5036 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5038 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5041 "stream.c"
        {
#line 5043 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5046 "stream.c"
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
#line 391 "stream.m"
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
#line 394 "stream.m"
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
#line 5174 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5176 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5179 "stream.c"
        {
#line 5181 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5184 "stream.c"
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
#line 391 "stream.m"
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
#line 394 "stream.m"
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
#line 5292 "stream.c"
  {
#line 5294 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5296 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 5299 "stream.c"
    {
#line 5301 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5303 "stream.c"
      return;
    }
#line 5306 "stream.c"
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
#line 5326 "stream.c"
  {
#line 5328 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5330 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5332 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5335 "stream.c"
    {
#line 5337 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5340 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Integer) mercury__stream__conv1_HeadVar__2_2);
#line 5342 "stream.c"
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
#line 5364 "stream.c"
  {
#line 5366 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5368 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_seekable_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5371 "stream.c"
    {
#line 5373 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_seekable_6), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5);
#line 5375 "stream.c"
      return;
    }
#line 5378 "stream.c"
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
#line 5398 "stream.c"
  {
#line 5400 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5402 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5405 "stream.c"
    {
#line 5407 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_putback_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5409 "stream.c"
      return;
    }
#line 5412 "stream.c"
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
#line 5432 "stream.c"
  {
#line 5434 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5436 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_writer_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5439 "stream.c"
    {
#line 5441 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_writer_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5443 "stream.c"
      return;
    }
#line 5446 "stream.c"
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
#line 5464 "stream.c"
  {
#line 5466 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5468 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5471 "stream.c"
    {
#line 5473 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_output_4), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3);
#line 5475 "stream.c"
      return;
    }
#line 5478 "stream.c"
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
#line 5508 "stream.c"
  {
#line 5510 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5512 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_bulk_reader_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5514 "stream.c"
    MR_Box mercury__stream__conv2_HeadVar__6_6;
#line 5516 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__7_7;

#line 5519 "stream.c"
    {
#line 5521 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_bulk_reader_10), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5, &mercury__stream__conv2_HeadVar__6_6, &mercury__stream__conv1_HeadVar__7_7, mercury__stream__HeadVar__8_8, mercury__stream__HeadVar__9_9);
    }
#line 5524 "stream.c"
    *mercury__stream__HeadVar__6_6 = ((MR_Integer) mercury__stream__conv2_HeadVar__6_6);
#line 5526 "stream.c"
    *mercury__stream__HeadVar__7_7 = ((MR_Word) mercury__stream__conv1_HeadVar__7_7);
#line 5528 "stream.c"
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
#line 5548 "stream.c"
  {
#line 5550 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5552 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5554 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5557 "stream.c"
    {
#line 5559 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5562 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Word) mercury__stream__conv1_HeadVar__2_2);
#line 5564 "stream.c"
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
#line 5584 "stream.c"
  {
#line 5586 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5588 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_stream_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5590 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5593 "stream.c"
    {
#line 5595 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_stream_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5598 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5600 "stream.c"
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
#line 5614 "stream.c"
  {
#line 5616 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5618 "stream.c"
    MR_String mercury__stream__HeadVar__2_2;
#line 5620 "stream.c"
    MR_Box MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_error_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5622 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5625 "stream.c"
    {
#line 5627 "stream.c"
      mercury__stream__conv1_HeadVar__2_2 = mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_error_3), mercury__stream__HeadVar__1_1);
    }
#line 5630 "stream.c"
    mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5632 "stream.c"
    return mercury__stream__HeadVar__2_2;
#line 5634 "stream.c"
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
