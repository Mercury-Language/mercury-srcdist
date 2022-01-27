/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module table_builtin. */
/* :- implementation. */

/*
INIT mercury__table_builtin__init
ENDINIT
*/

#include "table_builtin.mih"


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
#include "stream.mih"
#include "string.mih"
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





#line 86 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0;

#line 89 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1;

#line 92 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2];

#line 95 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2];

#line 98 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2];

#line 101 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0;

#line 104 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1;

#line 107 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2;

#line 110 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3];

#line 113 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3];

#line 116 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3];

#line 119 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0;

#line 122 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1;

#line 125 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2;

#line 128 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3;

#line 131 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4];

#line 134 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4];

#line 137 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4];

#line 140 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0;

#line 143 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1;

#line 146 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2;

#line 149 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3;

#line 152 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4];

#line 155 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4];

#line 158 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4];

#line 161 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0;

#line 164 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1;

#line 167 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2;

#line 170 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3];

#line 173 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3];

#line 176 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3];

#line 179 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
#line 182 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 184 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 187 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
#line 190 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 192 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 194 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 197 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
#line 200 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 202 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 205 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
#line 208 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 210 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 212 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 215 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
#line 218 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 220 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 223 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
#line 226 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 228 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 230 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 233 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
#line 236 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 238 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 241 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
#line 244 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 246 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 248 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 251 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
#line 254 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 256 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 259 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
#line 262 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 264 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 266 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 269 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
#line 272 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 274 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 277 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
#line 280 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 282 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 284 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 287 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
#line 290 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 292 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 295 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
#line 298 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 300 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 302 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 305 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
#line 308 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 310 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 313 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
#line 316 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 318 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 320 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 323 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
#line 326 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 328 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 331 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
#line 334 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 336 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 338 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 341 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
#line 344 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 346 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 349 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
#line 352 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 354 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 356 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 359 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
#line 362 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 364 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 367 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
#line 370 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 372 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 374 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 377 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
#line 380 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 382 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 385 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
#line 388 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 390 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 392 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 395 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
#line 398 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 400 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 403 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
#line 406 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 408 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 410 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__table_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__table_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__table_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__table_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "table_builtin.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 763 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0 = {
  (MR_String) "loop_inactive",
  (MR_Integer) 0
};

#line 769 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1 = {
  (MR_String) "loop_active",
  (MR_Integer) 1
};

#line 775 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1
};

#line 781 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0
};

#line 787 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 793 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____loop_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____loop_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "loop_status",
  {
    mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0
  },
  {
    mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_loop_status_0
};

#line 814 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0 = {
  (MR_String) "memo_det_inactive",
  (MR_Integer) 0
};

#line 820 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1 = {
  (MR_String) "memo_det_active",
  (MR_Integer) 1
};

#line 826 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2 = {
  (MR_String) "memo_det_succeeded",
  (MR_Integer) 2
};

#line 832 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

#line 839 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

#line 846 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 853 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_det_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_det_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_det_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_det_status",
  {
    mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0
  },
  {
    mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0
};

#line 874 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_record_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_record_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_record_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_record",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 895 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0 = {
  (MR_String) "memo_non_inactive",
  (MR_Integer) 0
};

#line 901 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1 = {
  (MR_String) "memo_non_active",
  (MR_Integer) 1
};

#line 907 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2 = {
  (MR_String) "memo_non_incomplete",
  (MR_Integer) 2
};

#line 913 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3 = {
  (MR_String) "memo_non_complete",
  (MR_Integer) 3
};

#line 919 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3
};

#line 927 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2
};

#line 935 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 943 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_status",
  {
    mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0
  },
  {
    mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0
};

#line 964 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0 = {
  (MR_String) "memo_semi_inactive",
  (MR_Integer) 0
};

#line 970 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1 = {
  (MR_String) "memo_semi_active",
  (MR_Integer) 1
};

#line 976 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2 = {
  (MR_String) "memo_semi_succeeded",
  (MR_Integer) 2
};

#line 982 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3 = {
  (MR_String) "memo_semi_failed",
  (MR_Integer) 3
};

#line 988 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3
};

#line 996 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2
};

#line 1004 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1012 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_semi_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_semi_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_semi_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_semi_status",
  {
    mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0
  },
  {
    mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0
};

#line 1033 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_block_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_block_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_block",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1054 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_list_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_list_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_list",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1075 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_consumer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_consumer_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_consumer_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_consumer",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1096 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_generator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_generator_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_generator_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_generator",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1117 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_proc_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_proc_table_info",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1138 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_subgoal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_SUBGOAL,
  ((MR_Box) (mercury__table_builtin____Unify____ml_subgoal_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_subgoal_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_subgoal",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1159 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_trie_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_trie_node_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_trie_node_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_trie_node",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1180 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0 = {
  (MR_String) "mm_inactive",
  (MR_Integer) 0
};

#line 1186 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1 = {
  (MR_String) "mm_active",
  (MR_Integer) 1
};

#line 1192 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2 = {
  (MR_String) "mm_complete",
  (MR_Integer) 2
};

#line 1198 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2
};

#line 1205 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0
};

#line 1212 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1219 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_mm_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____mm_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____mm_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "mm_status",
  {
    mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0
  },
  {
    mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_mm_status_0
};

#line 1240 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
#line 1243 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1245 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1247 "table_builtin.c"
{
#line 1249 "table_builtin.c"
  {
#line 1251 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1254 "table_builtin.c"
    {
#line 1256 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____loop_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1259 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1261 "table_builtin.c"
  }
#line 1263 "table_builtin.c"
}

#line 1266 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
#line 1269 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1271 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1273 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1275 "table_builtin.c"
{
#line 1277 "table_builtin.c"
  {
#line 1279 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1282 "table_builtin.c"
    {
#line 1284 "table_builtin.c"
      mercury__table_builtin____Compare____loop_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1287 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1289 "table_builtin.c"
  }
#line 1291 "table_builtin.c"
}

#line 1294 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
#line 1297 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1299 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1301 "table_builtin.c"
{
#line 1303 "table_builtin.c"
  {
#line 1305 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1308 "table_builtin.c"
    {
#line 1310 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_det_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1313 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1315 "table_builtin.c"
  }
#line 1317 "table_builtin.c"
}

#line 1320 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
#line 1323 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1325 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1327 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1329 "table_builtin.c"
{
#line 1331 "table_builtin.c"
  {
#line 1333 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1336 "table_builtin.c"
    {
#line 1338 "table_builtin.c"
      mercury__table_builtin____Compare____memo_det_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1341 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1343 "table_builtin.c"
  }
#line 1345 "table_builtin.c"
}

#line 1348 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
#line 1351 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1353 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1355 "table_builtin.c"
{
#line 1357 "table_builtin.c"
  {
#line 1359 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1362 "table_builtin.c"
    {
#line 1364 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_non_record_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1367 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1369 "table_builtin.c"
  }
#line 1371 "table_builtin.c"
}

#line 1374 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
#line 1377 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1379 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1381 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1383 "table_builtin.c"
{
#line 1385 "table_builtin.c"
  {
#line 1387 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1390 "table_builtin.c"
    {
#line 1392 "table_builtin.c"
      mercury__table_builtin____Compare____memo_non_record_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1395 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1397 "table_builtin.c"
  }
#line 1399 "table_builtin.c"
}

#line 1402 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
#line 1405 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1407 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1409 "table_builtin.c"
{
#line 1411 "table_builtin.c"
  {
#line 1413 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1416 "table_builtin.c"
    {
#line 1418 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_non_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1421 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1423 "table_builtin.c"
  }
#line 1425 "table_builtin.c"
}

#line 1428 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
#line 1431 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1433 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1435 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1437 "table_builtin.c"
{
#line 1439 "table_builtin.c"
  {
#line 1441 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1444 "table_builtin.c"
    {
#line 1446 "table_builtin.c"
      mercury__table_builtin____Compare____memo_non_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1449 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1451 "table_builtin.c"
  }
#line 1453 "table_builtin.c"
}

#line 1456 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
#line 1459 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1461 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1463 "table_builtin.c"
{
#line 1465 "table_builtin.c"
  {
#line 1467 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1470 "table_builtin.c"
    {
#line 1472 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_semi_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1475 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1477 "table_builtin.c"
  }
#line 1479 "table_builtin.c"
}

#line 1482 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
#line 1485 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1487 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1489 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1491 "table_builtin.c"
{
#line 1493 "table_builtin.c"
  {
#line 1495 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1498 "table_builtin.c"
    {
#line 1500 "table_builtin.c"
      mercury__table_builtin____Compare____memo_semi_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1503 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1505 "table_builtin.c"
  }
#line 1507 "table_builtin.c"
}

#line 1510 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
#line 1513 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1515 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1517 "table_builtin.c"
{
#line 1519 "table_builtin.c"
  {
#line 1521 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1524 "table_builtin.c"
    {
#line 1526 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_answer_block_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1529 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1531 "table_builtin.c"
  }
#line 1533 "table_builtin.c"
}

#line 1536 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
#line 1539 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1541 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1543 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1545 "table_builtin.c"
{
#line 1547 "table_builtin.c"
  {
#line 1549 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1552 "table_builtin.c"
    {
#line 1554 "table_builtin.c"
      mercury__table_builtin____Compare____ml_answer_block_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1557 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1559 "table_builtin.c"
  }
#line 1561 "table_builtin.c"
}

#line 1564 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
#line 1567 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1569 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1571 "table_builtin.c"
{
#line 1573 "table_builtin.c"
  {
#line 1575 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1578 "table_builtin.c"
    {
#line 1580 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_answer_list_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1583 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1585 "table_builtin.c"
  }
#line 1587 "table_builtin.c"
}

#line 1590 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
#line 1593 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1595 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1597 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1599 "table_builtin.c"
{
#line 1601 "table_builtin.c"
  {
#line 1603 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1606 "table_builtin.c"
    {
#line 1608 "table_builtin.c"
      mercury__table_builtin____Compare____ml_answer_list_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1611 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1613 "table_builtin.c"
  }
#line 1615 "table_builtin.c"
}

#line 1618 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
#line 1621 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1623 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1625 "table_builtin.c"
{
#line 1627 "table_builtin.c"
  {
#line 1629 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1632 "table_builtin.c"
    {
#line 1634 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_consumer_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1637 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1639 "table_builtin.c"
  }
#line 1641 "table_builtin.c"
}

#line 1644 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
#line 1647 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1649 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1651 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1653 "table_builtin.c"
{
#line 1655 "table_builtin.c"
  {
#line 1657 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1660 "table_builtin.c"
    {
#line 1662 "table_builtin.c"
      mercury__table_builtin____Compare____ml_consumer_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1665 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1667 "table_builtin.c"
  }
#line 1669 "table_builtin.c"
}

#line 1672 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
#line 1675 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1677 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1679 "table_builtin.c"
{
#line 1681 "table_builtin.c"
  {
#line 1683 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1686 "table_builtin.c"
    {
#line 1688 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_generator_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1691 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1693 "table_builtin.c"
  }
#line 1695 "table_builtin.c"
}

#line 1698 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
#line 1701 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1703 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1705 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1707 "table_builtin.c"
{
#line 1709 "table_builtin.c"
  {
#line 1711 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1714 "table_builtin.c"
    {
#line 1716 "table_builtin.c"
      mercury__table_builtin____Compare____ml_generator_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1719 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1721 "table_builtin.c"
  }
#line 1723 "table_builtin.c"
}

#line 1726 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
#line 1729 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1731 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1733 "table_builtin.c"
{
#line 1735 "table_builtin.c"
  {
#line 1737 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1740 "table_builtin.c"
    {
#line 1742 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_proc_table_info_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1745 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1747 "table_builtin.c"
  }
#line 1749 "table_builtin.c"
}

#line 1752 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
#line 1755 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1757 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1759 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1761 "table_builtin.c"
{
#line 1763 "table_builtin.c"
  {
#line 1765 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1768 "table_builtin.c"
    {
#line 1770 "table_builtin.c"
      mercury__table_builtin____Compare____ml_proc_table_info_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1773 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1775 "table_builtin.c"
  }
#line 1777 "table_builtin.c"
}

#line 1780 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
#line 1783 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1785 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1787 "table_builtin.c"
{
#line 1789 "table_builtin.c"
  {
#line 1791 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1794 "table_builtin.c"
    {
#line 1796 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_subgoal_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1799 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1801 "table_builtin.c"
  }
#line 1803 "table_builtin.c"
}

#line 1806 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
#line 1809 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1811 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1813 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1815 "table_builtin.c"
{
#line 1817 "table_builtin.c"
  {
#line 1819 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1822 "table_builtin.c"
    {
#line 1824 "table_builtin.c"
      mercury__table_builtin____Compare____ml_subgoal_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1827 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1829 "table_builtin.c"
  }
#line 1831 "table_builtin.c"
}

#line 1834 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
#line 1837 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1839 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1841 "table_builtin.c"
{
#line 1843 "table_builtin.c"
  {
#line 1845 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1848 "table_builtin.c"
    {
#line 1850 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_trie_node_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1853 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1855 "table_builtin.c"
  }
#line 1857 "table_builtin.c"
}

#line 1860 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
#line 1863 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1865 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1867 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1869 "table_builtin.c"
{
#line 1871 "table_builtin.c"
  {
#line 1873 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1876 "table_builtin.c"
    {
#line 1878 "table_builtin.c"
      mercury__table_builtin____Compare____ml_trie_node_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1881 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1883 "table_builtin.c"
  }
#line 1885 "table_builtin.c"
}

#line 1888 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
#line 1891 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1893 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1895 "table_builtin.c"
{
#line 1897 "table_builtin.c"
  {
#line 1899 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1902 "table_builtin.c"
    {
#line 1904 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____mm_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1907 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1909 "table_builtin.c"
  }
#line 1911 "table_builtin.c"
}

#line 1914 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
#line 1917 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1919 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1921 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1923 "table_builtin.c"
{
#line 1925 "table_builtin.c"
  {
#line 1927 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1930 "table_builtin.c"
    {
#line 1932 "table_builtin.c"
      mercury__table_builtin____Compare____mm_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1935 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1937 "table_builtin.c"
  }
#line 1939 "table_builtin.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__table_builtin__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1046 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_p_0(void)
#line 1046 "table_builtin.m"
{
#line 1143 "table_builtin.m"
  {
#line 1143 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1143 "table_builtin.m"
  }
#line 1046 "table_builtin.m"
}

#line 868 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 868 "table_builtin.m"
{
#line 903 "table_builtin.m"
  {
#line 903 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 903 "table_builtin.m"
  }
#line 868 "table_builtin.m"
}

#line 369 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 369 "table_builtin.m"
{
#line 511 "table_builtin.m"
  {
#line 511 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 511 "table_builtin.m"
  }
#line 369 "table_builtin.m"
}

#line 340 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 340 "table_builtin.m"
{
#line 474 "table_builtin.m"
  {
#line 474 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 474 "table_builtin.m"
  }
#line 340 "table_builtin.m"
}

#line 804 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0(
#line 804 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 804 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 804 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 804 "table_builtin.m"
{
#line 804 "table_builtin.m"
  {
#line 804 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 804 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 804 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 804 "table_builtin.m"
  }
#line 804 "table_builtin.m"
}

#line 804 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0(
#line 804 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 804 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 804 "table_builtin.m"
{
#line 2075 "table_builtin.c"
  {
#line 2077 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2080 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2082 "table_builtin.c"
  }
#line 804 "table_builtin.m"
}

#line 131 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0(
#line 131 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 131 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 131 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 131 "table_builtin.m"
{
#line 131 "table_builtin.m"
  {
#line 131 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 131 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 131 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 131 "table_builtin.m"
    {
#line 131 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 131 "table_builtin.m"
      return;
    }
#line 131 "table_builtin.m"
  }
#line 131 "table_builtin.m"
}

#line 131 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0(
#line 131 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 131 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 131 "table_builtin.m"
{
#line 131 "table_builtin.m"
  {
#line 131 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 131 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 131 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 131 "table_builtin.m"
    {
#line 131 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 131 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 131 "table_builtin.m"
  }
#line 131 "table_builtin.m"
}

#line 879 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0(
#line 879 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 879 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 879 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 879 "table_builtin.m"
{
#line 879 "table_builtin.m"
  {
#line 879 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 879 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 879 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 879 "table_builtin.m"
    {
#line 879 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 879 "table_builtin.m"
      return;
    }
#line 879 "table_builtin.m"
  }
#line 879 "table_builtin.m"
}

#line 879 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0(
#line 879 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 879 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 879 "table_builtin.m"
{
#line 879 "table_builtin.m"
  {
#line 879 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 879 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 879 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 879 "table_builtin.m"
    {
#line 879 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 879 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 879 "table_builtin.m"
  }
#line 879 "table_builtin.m"
}

#line 144 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0(
#line 144 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 144 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 144 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 144 "table_builtin.m"
{
#line 144 "table_builtin.m"
  {
#line 144 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 144 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 144 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 144 "table_builtin.m"
    {
#line 144 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 144 "table_builtin.m"
      return;
    }
#line 144 "table_builtin.m"
  }
#line 144 "table_builtin.m"
}

#line 144 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0(
#line 144 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 144 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 144 "table_builtin.m"
{
#line 144 "table_builtin.m"
  {
#line 144 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 144 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 144 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 144 "table_builtin.m"
    {
#line 144 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 144 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 144 "table_builtin.m"
  }
#line 144 "table_builtin.m"
}

#line 1087 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0(
#line 1087 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 1087 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1087 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1087 "table_builtin.m"
{
#line 1087 "table_builtin.m"
  {
#line 1087 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1087 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 1087 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 1087 "table_builtin.m"
    {
#line 1087 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 1087 "table_builtin.m"
      return;
    }
#line 1087 "table_builtin.m"
  }
#line 1087 "table_builtin.m"
}

#line 1087 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0(
#line 1087 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1087 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 1087 "table_builtin.m"
{
#line 1087 "table_builtin.m"
  {
#line 1087 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1087 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 1087 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 1087 "table_builtin.m"
    {
#line 1087 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 1087 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1087 "table_builtin.m"
  }
#line 1087 "table_builtin.m"
}

#line 1079 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0(
#line 1079 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 1079 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1079 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1079 "table_builtin.m"
{
#line 1079 "table_builtin.m"
  {
#line 1079 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1079 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 1079 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 1079 "table_builtin.m"
    {
#line 1079 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 1079 "table_builtin.m"
      return;
    }
#line 1079 "table_builtin.m"
  }
#line 1079 "table_builtin.m"
}

#line 1079 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0(
#line 1079 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1079 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 1079 "table_builtin.m"
{
#line 1079 "table_builtin.m"
  {
#line 1079 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1079 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 1079 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 1079 "table_builtin.m"
    {
#line 1079 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 1079 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1079 "table_builtin.m"
  }
#line 1079 "table_builtin.m"
}

#line 886 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0(
#line 886 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 886 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 886 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 886 "table_builtin.m"
{
#line 886 "table_builtin.m"
  {
#line 886 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 886 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 886 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 886 "table_builtin.m"
    {
#line 886 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 886 "table_builtin.m"
      return;
    }
#line 886 "table_builtin.m"
  }
#line 886 "table_builtin.m"
}

#line 886 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0(
#line 886 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 886 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 886 "table_builtin.m"
{
#line 886 "table_builtin.m"
  {
#line 886 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 886 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 886 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 886 "table_builtin.m"
    {
#line 886 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 886 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 886 "table_builtin.m"
  }
#line 886 "table_builtin.m"
}

#line 139 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0(
#line 139 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 139 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 139 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 139 "table_builtin.m"
{
#line 139 "table_builtin.m"
  {
#line 139 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 139 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 139 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 139 "table_builtin.m"
    {
#line 139 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 139 "table_builtin.m"
      return;
    }
#line 139 "table_builtin.m"
  }
#line 139 "table_builtin.m"
}

#line 139 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0(
#line 139 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 139 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 139 "table_builtin.m"
{
#line 139 "table_builtin.m"
  {
#line 139 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 139 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 139 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 139 "table_builtin.m"
    {
#line 139 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 139 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 139 "table_builtin.m"
  }
#line 139 "table_builtin.m"
}

#line 275 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0(
#line 275 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 275 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 275 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 275 "table_builtin.m"
{
#line 275 "table_builtin.m"
  {
#line 275 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 275 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 275 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 275 "table_builtin.m"
  }
#line 275 "table_builtin.m"
}

#line 275 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0(
#line 275 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 275 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 275 "table_builtin.m"
{
#line 2577 "table_builtin.c"
  {
#line 2579 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2582 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2584 "table_builtin.c"
  }
#line 275 "table_builtin.m"
}

#line 284 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0(
#line 284 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 284 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 284 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 284 "table_builtin.m"
{
#line 284 "table_builtin.m"
  {
#line 284 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 284 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 284 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 284 "table_builtin.m"
  }
#line 284 "table_builtin.m"
}

#line 284 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0(
#line 284 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 284 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 284 "table_builtin.m"
{
#line 2645 "table_builtin.c"
  {
#line 2647 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2650 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2652 "table_builtin.c"
  }
#line 284 "table_builtin.m"
}

#line 379 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0(
#line 379 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 379 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 379 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 379 "table_builtin.m"
{
#line 379 "table_builtin.m"
  {
#line 379 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 379 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 379 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 379 "table_builtin.m"
    {
#line 379 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 379 "table_builtin.m"
      return;
    }
#line 379 "table_builtin.m"
  }
#line 379 "table_builtin.m"
}

#line 379 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0(
#line 379 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 379 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 379 "table_builtin.m"
{
#line 379 "table_builtin.m"
  {
#line 379 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 379 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 379 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 379 "table_builtin.m"
    {
#line 379 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 379 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 379 "table_builtin.m"
  }
#line 379 "table_builtin.m"
}

#line 267 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0(
#line 267 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 267 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 267 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 267 "table_builtin.m"
{
#line 267 "table_builtin.m"
  {
#line 267 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 267 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 267 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 267 "table_builtin.m"
  }
#line 267 "table_builtin.m"
}

#line 267 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0(
#line 267 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 267 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 267 "table_builtin.m"
{
#line 2775 "table_builtin.c"
  {
#line 2777 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2780 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2782 "table_builtin.c"
  }
#line 267 "table_builtin.m"
}

#line 158 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0(
#line 158 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 158 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 158 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 158 "table_builtin.m"
{
#line 158 "table_builtin.m"
  {
#line 158 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 158 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 158 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 68 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 73 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 158 "table_builtin.m"
  }
#line 158 "table_builtin.m"
}

#line 158 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0(
#line 158 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 158 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 158 "table_builtin.m"
{
#line 2843 "table_builtin.c"
  {
#line 2845 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2848 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2850 "table_builtin.c"
  }
#line 158 "table_builtin.m"
}

#line 1387 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_report_statistics_0_p_0(void)
#line 1387 "table_builtin.m"
{
#line 1598 "table_builtin.m"
  {
#line 1598 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1601 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_report_statistics_0_p_0


		{
#line 1601 "table_builtin.m"

    MR_table_report_statistics(stderr);

#line 2875 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1601 "table_builtin.m"
}
#line 1598 "table_builtin.m"
  }
#line 1387 "table_builtin.m"
}

#line 1383 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_error_1_p_0(
#line 1383 "table_builtin.m"
  MR_String mercury__table_builtin__Message_2)
#line 1383 "table_builtin.m"
{
#line 1596 "table_builtin.m"
  {
#line 1596 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1596 "table_builtin.m"
    {
#line 1596 "table_builtin.m"
      mercury__require__error_1_p_0(mercury__table_builtin__Message_2);
#line 1596 "table_builtin.m"
      return;
    }
#line 1596 "table_builtin.m"
  }
#line 1383 "table_builtin.m"
}

#line 1378 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_any_answer_3_p_0(
#line 1378 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1378 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1378 "table_builtin.m"
  MR_Box * mercury__table_builtin__V_3)
#line 1378 "table_builtin.m"
{
#line 1588 "table_builtin.m"
  {
#line 1588 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1591 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_any_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1591 "table_builtin.m"

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2941 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = (MR_Box) V;
#line 1591 "table_builtin.m"
}
#line 1588 "table_builtin.m"
  }
#line 1378 "table_builtin.m"
}

#line 1372 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_io_state_answer_3_p_0(
#line 1372 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1372 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2)
#line 1372 "table_builtin.m"
{
#line 1581 "table_builtin.m"
  {
#line 1581 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1584 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1584 "table_builtin.m"

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2982 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1584 "table_builtin.m"
}
#line 1581 "table_builtin.m"
  }
#line 1372 "table_builtin.m"
}

#line 1367 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_float_answer_3_p_0(
#line 1367 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1367 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1367 "table_builtin.m"
  MR_Float * mercury__table_builtin__V_3)
#line 1367 "table_builtin.m"
{
#line 1574 "table_builtin.m"
  {
#line 1574 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1577 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1577 "table_builtin.m"

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3024 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1577 "table_builtin.m"
}
#line 1574 "table_builtin.m"
  }
#line 1367 "table_builtin.m"
}

#line 1361 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_string_answer_3_p_0(
#line 1361 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1361 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1361 "table_builtin.m"
  MR_String * mercury__table_builtin__V_3)
#line 1361 "table_builtin.m"
{
#line 1567 "table_builtin.m"
  {
#line 1567 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1570 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1570 "table_builtin.m"

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3067 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1570 "table_builtin.m"
}
#line 1567 "table_builtin.m"
  }
#line 1361 "table_builtin.m"
}

#line 1355 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_char_answer_3_p_0(
#line 1355 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1355 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1355 "table_builtin.m"
  MR_Char * mercury__table_builtin__V_3)
#line 1355 "table_builtin.m"
{
#line 1560 "table_builtin.m"
  {
#line 1560 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1563 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1563 "table_builtin.m"

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3110 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1563 "table_builtin.m"
}
#line 1560 "table_builtin.m"
  }
#line 1355 "table_builtin.m"
}

#line 1349 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_int_answer_3_p_0(
#line 1349 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1349 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1349 "table_builtin.m"
  MR_Integer * mercury__table_builtin__V_3)
#line 1349 "table_builtin.m"
{
#line 1553 "table_builtin.m"
  {
#line 1553 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1556 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1556 "table_builtin.m"

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3153 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1556 "table_builtin.m"
}
#line 1553 "table_builtin.m"
  }
#line 1349 "table_builtin.m"
}

#line 1343 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_any_answer_3_p_0(
#line 1343 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1343 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1343 "table_builtin.m"
  MR_Integer mercury__table_builtin__HeadVar__2_2,
#line 1343 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1343 "table_builtin.m"
{
#line 1545 "table_builtin.m"
  {
#line 1545 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1548 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_any_answer_3_p_0

	MR_Word TypeInfo_for_T;
	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	AB = (MR_AnswerBlock) mercury__table_builtin__HeadVar__1_1 ;
	Offset =  mercury__table_builtin__HeadVar__2_2 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__3_3 ;
		{
#line 1548 "table_builtin.m"

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);

#line 3202 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1548 "table_builtin.m"
}
#line 1545 "table_builtin.m"
  }
#line 1343 "table_builtin.m"
}

#line 1337 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_io_state_answer_3_p_0(
#line 1337 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1337 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2)
#line 1337 "table_builtin.m"
{
#line 1538 "table_builtin.m"
  {
#line 1538 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1541 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V = (MR_Word) (MR_Integer) 0 ;
		{
#line 1541 "table_builtin.m"

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3243 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1541 "table_builtin.m"
}
#line 1538 "table_builtin.m"
  }
#line 1337 "table_builtin.m"
}

#line 1332 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_float_answer_3_p_0(
#line 1332 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1332 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1332 "table_builtin.m"
  MR_Float mercury__table_builtin__V_3)
#line 1332 "table_builtin.m"
{
#line 1531 "table_builtin.m"
  {
#line 1531 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1534 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1534 "table_builtin.m"

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3286 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1534 "table_builtin.m"
}
#line 1531 "table_builtin.m"
  }
#line 1332 "table_builtin.m"
}

#line 1326 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_string_answer_3_p_0(
#line 1326 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1326 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1326 "table_builtin.m"
  MR_String mercury__table_builtin__V_3)
#line 1326 "table_builtin.m"
{
#line 1524 "table_builtin.m"
  {
#line 1524 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1527 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1527 "table_builtin.m"

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3329 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1527 "table_builtin.m"
}
#line 1524 "table_builtin.m"
  }
#line 1326 "table_builtin.m"
}

#line 1320 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_char_answer_3_p_0(
#line 1320 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1320 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1320 "table_builtin.m"
  MR_Char mercury__table_builtin__V_3)
#line 1320 "table_builtin.m"
{
#line 1517 "table_builtin.m"
  {
#line 1517 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1520 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1520 "table_builtin.m"

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3372 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1520 "table_builtin.m"
}
#line 1517 "table_builtin.m"
  }
#line 1320 "table_builtin.m"
}

#line 1314 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_int_answer_3_p_0(
#line 1314 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1314 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1314 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_3)
#line 1314 "table_builtin.m"
{
#line 1510 "table_builtin.m"
  {
#line 1510 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1513 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1513 "table_builtin.m"

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3415 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1513 "table_builtin.m"
}
#line 1510 "table_builtin.m"
  }
#line 1314 "table_builtin.m"
}

#line 1308 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0(
#line 1308 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1308 "table_builtin.m"
  MR_Word mercury__table_builtin__V_2,
#line 1308 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1308 "table_builtin.m"
{
#line 1500 "table_builtin.m"
  {
#line 1500 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1503 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1503 "table_builtin.m"

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);

#line 3458 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1503 "table_builtin.m"
}
#line 1500 "table_builtin.m"
  }
#line 1308 "table_builtin.m"
}

#line 1303 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0(
#line 1303 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1303 "table_builtin.m"
  MR_Word mercury__table_builtin__V_2,
#line 1303 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1303 "table_builtin.m"
{
#line 1492 "table_builtin.m"
  {
#line 1492 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1495 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1495 "table_builtin.m"

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);

#line 3502 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1495 "table_builtin.m"
}
#line 1492 "table_builtin.m"
  }
#line 1303 "table_builtin.m"
}

#line 1298 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0(
#line 1298 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1298 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1298 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1298 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1298 "table_builtin.m"
{
#line 1484 "table_builtin.m"
  {
#line 1484 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1487 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1487 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly_addr(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, TypeInfo_for_T, V, T);

#line 3550 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1487 "table_builtin.m"
}
#line 1484 "table_builtin.m"
  }
#line 1298 "table_builtin.m"
}

#line 1290 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_3_p_0(
#line 1290 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1290 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1290 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1290 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1290 "table_builtin.m"
{
#line 1476 "table_builtin.m"
  {
#line 1476 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1479 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_poly_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1479 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3598 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1479 "table_builtin.m"
}
#line 1476 "table_builtin.m"
  }
#line 1290 "table_builtin.m"
}

#line 1285 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0(
#line 1285 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1285 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1285 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1285 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1285 "table_builtin.m"
{
#line 1468 "table_builtin.m"
  {
#line 1468 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1471 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1471 "table_builtin.m"

    MR_tbl_lookup_insert_gen_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3646 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1471 "table_builtin.m"
}
#line 1468 "table_builtin.m"
  }
#line 1285 "table_builtin.m"
}

#line 1277 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_3_p_0(
#line 1277 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1277 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1277 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1277 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1277 "table_builtin.m"
{
#line 1460 "table_builtin.m"
  {
#line 1460 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1463 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1463 "table_builtin.m"

    MR_tbl_lookup_insert_gen(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3694 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1463 "table_builtin.m"
}
#line 1460 "table_builtin.m"
  }
#line 1277 "table_builtin.m"
}

#line 1272 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0(
#line 1272 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_4,
#line 1272 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1272 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1272 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1272 "table_builtin.m"
{
#line 1452 "table_builtin.m"
  {
#line 1452 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1452 "table_builtin.m"
    MR_Word mercury__table_builtin__TypeInfo_for_T_5;

#line 1455 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1455 "table_builtin.m"

    MR_tbl_lookup_insert_foreign_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        V, T);

#line 3742 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1455 "table_builtin.m"
}
#line 1452 "table_builtin.m"
  }
#line 1272 "table_builtin.m"
}

#line 1267 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_enum_4_p_0(
#line 1267 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1267 "table_builtin.m"
  MR_Integer mercury__table_builtin__R_2,
#line 1267 "table_builtin.m"
  MR_Box mercury__table_builtin__V_3,
#line 1267 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_4)
#line 1267 "table_builtin.m"
{
#line 1444 "table_builtin.m"
  {
#line 1444 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1447 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_enum_4_p_0

	MR_TrieNode T0;
	MR_Integer R;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	R =  mercury__table_builtin__R_2 ;
	V = (MR_Word) mercury__table_builtin__V_3 ;
		{
#line 1447 "table_builtin.m"

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);

#line 3790 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_4  = (MR_Box) T;
#line 1447 "table_builtin.m"
}
#line 1444 "table_builtin.m"
  }
#line 1267 "table_builtin.m"
}

#line 1262 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_float_3_p_0(
#line 1262 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1262 "table_builtin.m"
  MR_Float mercury__table_builtin__V_2,
#line 1262 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1262 "table_builtin.m"
{
#line 1437 "table_builtin.m"
  {
#line 1437 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1440 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_float_3_p_0

	MR_TrieNode T0;
	MR_Float V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1440 "table_builtin.m"

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3833 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1440 "table_builtin.m"
}
#line 1437 "table_builtin.m"
  }
#line 1262 "table_builtin.m"
}

#line 1257 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_string_3_p_0(
#line 1257 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1257 "table_builtin.m"
  MR_String mercury__table_builtin__V_2,
#line 1257 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1257 "table_builtin.m"
{
#line 1430 "table_builtin.m"
  {
#line 1430 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1433 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_string_3_p_0

	MR_TrieNode T0;
	MR_String V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1433 "table_builtin.m"

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3876 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1433 "table_builtin.m"
}
#line 1430 "table_builtin.m"
  }
#line 1257 "table_builtin.m"
}

#line 1252 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_char_3_p_0(
#line 1252 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1252 "table_builtin.m"
  MR_Char mercury__table_builtin__V_2,
#line 1252 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1252 "table_builtin.m"
{
#line 1423 "table_builtin.m"
  {
#line 1423 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1426 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_char_3_p_0

	MR_TrieNode T0;
	MR_Char V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1426 "table_builtin.m"

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3919 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1426 "table_builtin.m"
}
#line 1423 "table_builtin.m"
  }
#line 1252 "table_builtin.m"
}

#line 1247 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_start_int_4_p_0(
#line 1247 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1247 "table_builtin.m"
  MR_Integer mercury__table_builtin__S_2,
#line 1247 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_3,
#line 1247 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_4)
#line 1247 "table_builtin.m"
{
#line 1415 "table_builtin.m"
  {
#line 1415 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1418 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_start_int_4_p_0

	MR_TrieNode T0;
	MR_Integer S;
	MR_Integer V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	S =  mercury__table_builtin__S_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1418 "table_builtin.m"

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);

#line 3967 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_4  = (MR_Box) T;
#line 1418 "table_builtin.m"
}
#line 1415 "table_builtin.m"
  }
#line 1247 "table_builtin.m"
}

#line 1242 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_int_3_p_0(
#line 1242 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1242 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_2,
#line 1242 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1242 "table_builtin.m"
{
#line 1408 "table_builtin.m"
  {
#line 1408 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1411 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int_3_p_0

	MR_TrieNode T0;
	MR_Integer V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1411 "table_builtin.m"

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 4010 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1411 "table_builtin.m"
}
#line 1408 "table_builtin.m"
  }
#line 1242 "table_builtin.m"
}

#line 1069 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_completion_1_p_0(
#line 1069 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1)
#line 1069 "table_builtin.m"
{
#line 1188 "table_builtin.m"
  {
#line 1188 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1191 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_completion_1_p_0

	MR_GeneratorPtr Generator;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
		{
#line 1191 "table_builtin.m"

    /*
    MR_tbl_mmos_completion(Generator);
    */

#line 4048 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1191 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 1188 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1188 "table_builtin.m"
  }
#line 1069 "table_builtin.m"
}

#line 1061 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_return_answer_2_p_0(
#line 1061 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1,
#line 1061 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_2)
#line 1061 "table_builtin.m"
{
#line 1179 "table_builtin.m"
  {
#line 1179 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1182 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_return_answer_2_p_0

	MR_GeneratorPtr Generator;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
	AnswerBlock = (MR_AnswerBlock) mercury__table_builtin__AnswerBlock_2 ;
		{
#line 1182 "table_builtin.m"

    /*
    MR_tbl_mmos_return_answer(Generator, AnswerBlock);
    */

#line 4092 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1182 "table_builtin.m"
}
#line 1179 "table_builtin.m"
  }
#line 1061 "table_builtin.m"
}

#line 1056 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_create_answer_block_3_p_0(
#line 1056 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1,
#line 1056 "table_builtin.m"
  MR_Integer mercury__table_builtin__BlockSize_2,
#line 1056 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 1056 "table_builtin.m"
{
#line 1169 "table_builtin.m"
  {
#line 1169 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1173 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_create_answer_block_3_p_0

	MR_GeneratorPtr Generator;
	MR_Integer BlockSize;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
	BlockSize =  mercury__table_builtin__BlockSize_2 ;
		{
#line 1173 "table_builtin.m"

    /*
    MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);
    */

#line 4136 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 1173 "table_builtin.m"
}
#line 1169 "table_builtin.m"
  }
#line 1056 "table_builtin.m"
}

#line 1051 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_pickup_inputs_1_p_0(
#line 1051 "table_builtin.m"
  MR_Box * mercury__table_builtin__Generator_1)
#line 1051 "table_builtin.m"
{
#line 1156 "table_builtin.m"
  {
#line 1156 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1159 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_pickup_inputs_1_p_0

	MR_GeneratorPtr Generator;

		{
#line 1159 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Generator to shut up the warning */
    MR_fatal_error("table_mmos_pickup_inputs: direct call");

#line 4177 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Generator_1  = (MR_Box) Generator;
#line 1159 "table_builtin.m"
}
#line 1156 "table_builtin.m"
  }
#line 1051 "table_builtin.m"
}

#line 1046 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_restore_answers_1_p_0(
#line 1046 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_1)
#line 1046 "table_builtin.m"
{
#line 1143 "table_builtin.m"
  {
#line 1143 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1143 "table_builtin.m"
    {
#line 1143 "table_builtin.m"
      mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_p_0();
#line 1143 "table_builtin.m"
      return;
    }
#line 1143 "table_builtin.m"
  }
#line 1046 "table_builtin.m"
}

#line 1040 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_multi_2_p_0(
#line 1040 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1040 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 1040 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 1040 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 1038 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_nondet_2_p_0(
#line 1038 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1038 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 1038 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 1038 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 1031 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0(
#line 1031 "table_builtin.m"
  MR_Box mercury__table_builtin__G_1)
#line 1031 "table_builtin.m"
{
#line 1127 "table_builtin.m"
  {
#line 1127 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1130 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0

	MR_GeneratorPtr G;
	MR_bool SUCCESS_INDICATOR;

	G = (MR_GeneratorPtr) mercury__table_builtin__G_1 ;
		{
#line 1130 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention G to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate_shortcut: direct call");

#line 4268 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1130 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1127 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1127 "table_builtin.m"
  }
#line 1031 "table_builtin.m"
}

#line 1026 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0(
#line 1026 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 1026 "table_builtin.m"
{
#line 1114 "table_builtin.m"
  {
#line 1114 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1117 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 1117 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");

#line 4315 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1117 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1114 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1114 "table_builtin.m"
  }
#line 1026 "table_builtin.m"
}

#line 1018 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_setup_consumer_3_p_0(
#line 1018 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 1018 "table_builtin.m"
  MR_Word mercury__table_builtin__GeneratorPred_2,
#line 1018 "table_builtin.m"
  MR_Box * mercury__table_builtin__Consumer_3)
#line 1018 "table_builtin.m"
{
#line 1101 "table_builtin.m"
  {
#line 1101 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1104 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_setup_consumer_3_p_0

	MR_TrieNode T;
	MR_Word GeneratorPred;
	MR_ConsumerPtr Consumer;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
	GeneratorPred =  mercury__table_builtin__GeneratorPred_2 ;
		{
#line 1104 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T, GeneratorPred, Consumer to shut up the warning */
    MR_fatal_error("table_mmos_setup_consumer: direct call");

#line 4368 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Consumer_3  = (MR_Box) Consumer;
#line 1104 "table_builtin.m"
}
#line 1101 "table_builtin.m"
  }
#line 1018 "table_builtin.m"
}

#line 1010 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_save_inputs_0_p_0(void)
#line 1010 "table_builtin.m"
{
#line 1089 "table_builtin.m"
  {
#line 1089 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1092 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_save_inputs_0_p_0


		{
#line 1092 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    MR_fatal_error("table_mmos_save_inputs: direct call");

#line 4405 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1092 "table_builtin.m"
}
#line 1089 "table_builtin.m"
  }
#line 1010 "table_builtin.m"
}

#line 868 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_shortcut_1_p_0(
#line 868 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_1)
#line 868 "table_builtin.m"
{
#line 903 "table_builtin.m"
  {
#line 903 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 903 "table_builtin.m"
    {
#line 903 "table_builtin.m"
      mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0();
#line 903 "table_builtin.m"
      return;
    }
#line 903 "table_builtin.m"
  }
#line 868 "table_builtin.m"
}

#line 866 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_multi_2_p_0(
#line 866 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 866 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 866 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 866 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 864 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_nondet_2_p_0(
#line 864 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 864 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 864 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 864 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 860 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0(
#line 860 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1)
#line 860 "table_builtin.m"
{
#line 946 "table_builtin.m"
  {
#line 946 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 949 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 949 "table_builtin.m"

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);

#line 4488 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 949 "table_builtin.m"
}
#line 946 "table_builtin.m"
  }
#line 860 "table_builtin.m"
}

#line 857 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_create_answer_block_3_p_0(
#line 857 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1,
#line 857 "table_builtin.m"
  MR_Integer mercury__table_builtin__Size_2,
#line 857 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 857 "table_builtin.m"
{
#line 938 "table_builtin.m"
  {
#line 938 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 941 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_create_answer_block_3_p_0

	MR_SubgoalPtr Subgoal;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
	Size =  mercury__table_builtin__Size_2 ;
		{
#line 941 "table_builtin.m"

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);

#line 4531 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 941 "table_builtin.m"
}
#line 938 "table_builtin.m"
  }
#line 857 "table_builtin.m"
}

#line 850 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0(
#line 850 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1)
#line 850 "table_builtin.m"
{
#line 925 "table_builtin.m"
  {
#line 925 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 928 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;
	MR_bool SUCCESS_INDICATOR;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 928 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Subgoal to shut up the warning */
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");

#line 4574 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 928 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 925 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 925 "table_builtin.m"
  }
#line 850 "table_builtin.m"
}

#line 849 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0(
#line 849 "table_builtin.m"
  MR_Box mercury__table_builtin__TrieNode_1)
#line 849 "table_builtin.m"
{
#line 917 "table_builtin.m"
  {
#line 917 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 920 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0

	MR_TrieNode TrieNode;
	MR_bool SUCCESS_INDICATOR;

	TrieNode = (MR_TrieNode) mercury__table_builtin__TrieNode_1 ;
		{
#line 920 "table_builtin.m"

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);

#line 4616 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 920 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 917 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 917 "table_builtin.m"
  }
#line 849 "table_builtin.m"
}

#line 841 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_get_answer_table_2_p_0(
#line 841 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1,
#line 841 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerTable_2)
#line 841 "table_builtin.m"
{
#line 910 "table_builtin.m"
  {
#line 910 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 913 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_get_answer_table_2_p_0

	MR_SubgoalPtr Subgoal;
	MR_TrieNode AnswerTable;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 913 "table_builtin.m"

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);

#line 4659 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerTable_2  = (MR_Box) AnswerTable;
#line 913 "table_builtin.m"
}
#line 910 "table_builtin.m"
  }
#line 841 "table_builtin.m"
}

#line 836 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_completion_1_p_0(
#line 836 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1);

#line 828 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_suspend_consumer_2_p_0(
#line 828 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 828 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 828 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 828 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 820 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_setup_3_p_0(
#line 820 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 820 "table_builtin.m"
  MR_Box * mercury__table_builtin__Subgoal_2,
#line 820 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 820 "table_builtin.m"
{
#line 888 "table_builtin.m"
  {
#line 888 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 891 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_setup_3_p_0

	MR_TrieNode T;
	MR_SubgoalPtr Subgoal;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 891 "table_builtin.m"

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);

#line 4719 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Subgoal_2  = (MR_Box) Subgoal;
	 *mercury__table_builtin__Status_3  = Status;
#line 891 "table_builtin.m"
}
#line 888 "table_builtin.m"
  }
#line 820 "table_builtin.m"
}

#line 683 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0(
#line 683 "table_builtin.m"
  MR_Integer mercury__table_builtin__TraceEnabled_1)
#line 683 "table_builtin.m"
{
#line 762 "table_builtin.m"
  {
#line 762 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 765 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

	TraceEnabled =  mercury__table_builtin__TraceEnabled_1 ;
		{
#line 765 "table_builtin.m"

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);

#line 4756 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 765 "table_builtin.m"
}
#line 762 "table_builtin.m"
  }
#line 683 "table_builtin.m"
}

#line 682 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0(
#line 682 "table_builtin.m"
  MR_Integer * mercury__table_builtin__TraceEnabled_1)
#line 682 "table_builtin.m"
{
#line 755 "table_builtin.m"
  {
#line 755 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 758 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

		{
#line 758 "table_builtin.m"

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);

#line 4790 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__TraceEnabled_1  = TraceEnabled;
#line 758 "table_builtin.m"
}
#line 755 "table_builtin.m"
  }
#line 682 "table_builtin.m"
}

#line 671 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_copy_io_state_2_p_0(void)
#line 671 "table_builtin.m"
{
#line 753 "table_builtin.m"
  {
#line 753 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 753 "table_builtin.m"
  }
#line 671 "table_builtin.m"
}

#line 664 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_io_has_occurred_1_p_0(
#line 664 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 664 "table_builtin.m"
{
#line 746 "table_builtin.m"
  {
#line 746 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 749 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_has_occurred_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 749 "table_builtin.m"

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);

#line 4842 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 749 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 746 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 746 "table_builtin.m"
  }
#line 664 "table_builtin.m"
}

#line 655 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_io_in_range_3_p_0(
#line 655 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_1,
#line 655 "table_builtin.m"
  MR_Integer * mercury__table_builtin__Counter_2,
#line 655 "table_builtin.m"
  MR_Integer * mercury__table_builtin__Start_3)
#line 655 "table_builtin.m"
{
#line 738 "table_builtin.m"
  {
#line 738 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 741 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_in_range_3_p_0

	MR_TrieNode T;
	MR_Integer Counter;
	MR_Integer Start;
	MR_bool SUCCESS_INDICATOR;

		{
#line 741 "table_builtin.m"

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);

#line 4889 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__table_builtin__T_1  = (MR_Box) T;
	 *mercury__table_builtin__Counter_2  = Counter;
	 *mercury__table_builtin__Start_3  = Start;
#line 741 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 738 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 738 "table_builtin.m"
  }
#line 655 "table_builtin.m"
}

#line 369 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_return_all_shortcut_1_p_0(
#line 369 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 369 "table_builtin.m"
{
#line 511 "table_builtin.m"
  {
#line 511 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 511 "table_builtin.m"
    {
#line 511 "table_builtin.m"
      mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0();
#line 511 "table_builtin.m"
      return;
    }
#line 511 "table_builtin.m"
  }
#line 369 "table_builtin.m"
}

#line 367 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_multi_2_p_0(
#line 367 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 367 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 367 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 367 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 365 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_nondet_2_p_0(
#line 365 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 365 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 365 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 365 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 360 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0(
#line 360 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 360 "table_builtin.m"
{
#line 504 "table_builtin.m"
  {
#line 504 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 507 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 507 "table_builtin.m"

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);

#line 4980 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 507 "table_builtin.m"
}
#line 504 "table_builtin.m"
  }
#line 360 "table_builtin.m"
}

#line 355 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0(
#line 355 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 355 "table_builtin.m"
{
#line 496 "table_builtin.m"
  {
#line 496 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 499 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0

	MR_MemoNonRecordPtr R;
	MR_bool SUCCESS_INDICATOR;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 499 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);

#line 5017 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 499 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 496 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 496 "table_builtin.m"
  }
#line 355 "table_builtin.m"
}

#line 353 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0(
#line 353 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 353 "table_builtin.m"
{
#line 488 "table_builtin.m"
  {
#line 488 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 491 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 491 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);

#line 5059 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 491 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 488 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 488 "table_builtin.m"
  }
#line 353 "table_builtin.m"
}

#line 345 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_get_answer_table_2_p_0(
#line 345 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1,
#line 345 "table_builtin.m"
  MR_Box * mercury__table_builtin__AT_2)
#line 345 "table_builtin.m"
{
#line 481 "table_builtin.m"
  {
#line 481 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 484 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_get_answer_table_2_p_0

	MR_MemoNonRecordPtr R;
	MR_TrieNode AT;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 484 "table_builtin.m"

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);

#line 5102 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AT_2  = (MR_Box) AT;
#line 484 "table_builtin.m"
}
#line 481 "table_builtin.m"
  }
#line 345 "table_builtin.m"
}

#line 340 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_shortcut_1_p_0(
#line 340 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 340 "table_builtin.m"
{
#line 474 "table_builtin.m"
  {
#line 474 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 474 "table_builtin.m"
    {
#line 474 "table_builtin.m"
      mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0();
#line 474 "table_builtin.m"
      return;
    }
#line 474 "table_builtin.m"
  }
#line 340 "table_builtin.m"
}

#line 338 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_2_p_0(
#line 338 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 338 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_2)
#line 338 "table_builtin.m"
{
#line 467 "table_builtin.m"
  {
#line 467 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 470 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_get_answer_block_2_p_0

	MR_TrieNode T;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 470 "table_builtin.m"

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);

#line 5165 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_2  = (MR_Box) AnswerBlock;
#line 470 "table_builtin.m"
}
#line 467 "table_builtin.m"
  }
#line 338 "table_builtin.m"
}

#line 334 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0(
#line 334 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 334 "table_builtin.m"
{
#line 460 "table_builtin.m"
  {
#line 460 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 463 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 463 "table_builtin.m"

    MR_tbl_memo_fill_answer_block_shortcut(T);

#line 5201 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 463 "table_builtin.m"
}
#line 460 "table_builtin.m"
  }
#line 334 "table_builtin.m"
}

#line 332 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_create_answer_block_3_p_0(
#line 332 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 332 "table_builtin.m"
  MR_Integer mercury__table_builtin__Size_2,
#line 332 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 332 "table_builtin.m"
{
#line 452 "table_builtin.m"
  {
#line 452 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 455 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_create_answer_block_3_p_0

	MR_TrieNode T;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
	Size =  mercury__table_builtin__Size_2 ;
		{
#line 455 "table_builtin.m"

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);

#line 5244 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 455 "table_builtin.m"
}
#line 452 "table_builtin.m"
  }
#line 332 "table_builtin.m"
}

#line 326 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0(
#line 326 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 326 "table_builtin.m"
{
#line 445 "table_builtin.m"
  {
#line 445 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 448 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 448 "table_builtin.m"

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);

#line 5280 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 448 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 445 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 445 "table_builtin.m"
  }
#line 326 "table_builtin.m"
}

#line 321 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0(
#line 321 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 321 "table_builtin.m"
{
#line 438 "table_builtin.m"
  {
#line 438 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 441 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 441 "table_builtin.m"

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);

#line 5318 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 441 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 438 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 438 "table_builtin.m"
  }
#line 321 "table_builtin.m"
}

#line 317 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0(
#line 317 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 317 "table_builtin.m"
{
#line 431 "table_builtin.m"
  {
#line 431 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 434 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 434 "table_builtin.m"

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);

#line 5356 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 434 "table_builtin.m"
}
#line 431 "table_builtin.m"
  }
#line 317 "table_builtin.m"
}

#line 313 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0(
#line 313 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 313 "table_builtin.m"
{
#line 424 "table_builtin.m"
  {
#line 424 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 427 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 427 "table_builtin.m"

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);

#line 5391 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 427 "table_builtin.m"
}
#line 424 "table_builtin.m"
  }
#line 313 "table_builtin.m"
}

#line 309 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_failed_1_p_0(
#line 309 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 309 "table_builtin.m"
{
#line 417 "table_builtin.m"
  {
#line 417 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 420 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_failed_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 420 "table_builtin.m"

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);

#line 5426 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 420 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 417 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 417 "table_builtin.m"
  }
#line 309 "table_builtin.m"
}

#line 304 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_setup_3_p_0(
#line 304 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 304 "table_builtin.m"
  MR_Box * mercury__table_builtin__Record_2,
#line 304 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 304 "table_builtin.m"
{
#line 410 "table_builtin.m"
  {
#line 410 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 413 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_setup_3_p_0

	MR_TrieNode T0;
	MR_MemoNonRecordPtr Record;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 413 "table_builtin.m"

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);

#line 5470 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Record_2  = (MR_Box) Record;
	 *mercury__table_builtin__Status_3  = Status;
#line 413 "table_builtin.m"
}
#line 410 "table_builtin.m"
  }
#line 304 "table_builtin.m"
}

#line 301 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0(
#line 301 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 301 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 301 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 301 "table_builtin.m"
{
#line 403 "table_builtin.m"
  {
#line 403 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 406 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 406 "table_builtin.m"

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);

#line 5513 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 406 "table_builtin.m"
}
#line 403 "table_builtin.m"
  }
#line 301 "table_builtin.m"
}

#line 298 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_2_p_0(
#line 298 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 298 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 298 "table_builtin.m"
{
#line 396 "table_builtin.m"
  {
#line 396 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 399 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 399 "table_builtin.m"

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5553 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 399 "table_builtin.m"
}
#line 396 "table_builtin.m"
  }
#line 298 "table_builtin.m"
}

#line 295 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0(
#line 295 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 295 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 295 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 295 "table_builtin.m"
{
#line 389 "table_builtin.m"
  {
#line 389 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 392 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 392 "table_builtin.m"

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);

#line 5595 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 392 "table_builtin.m"
}
#line 389 "table_builtin.m"
  }
#line 295 "table_builtin.m"
}

#line 292 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_det_setup_2_p_0(
#line 292 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 292 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 292 "table_builtin.m"
{
#line 382 "table_builtin.m"
  {
#line 382 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 385 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 385 "table_builtin.m"

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5635 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 385 "table_builtin.m"
}
#line 382 "table_builtin.m"
  }
#line 292 "table_builtin.m"
}

#line 181 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0(
#line 181 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 181 "table_builtin.m"
{
#line 217 "table_builtin.m"
  {
#line 217 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 220 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 220 "table_builtin.m"

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);

#line 5671 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 220 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 217 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 217 "table_builtin.m"
  }
#line 181 "table_builtin.m"
}

#line 175 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0(
#line 175 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 175 "table_builtin.m"
{
#line 210 "table_builtin.m"
  {
#line 210 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 213 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 213 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);

#line 5709 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 213 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 210 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 210 "table_builtin.m"
  }
#line 175 "table_builtin.m"
}

#line 170 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_1_p_0(
#line 170 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 170 "table_builtin.m"
{
#line 203 "table_builtin.m"
  {
#line 203 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 206 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 206 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);

#line 5747 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 206 "table_builtin.m"
}
#line 203 "table_builtin.m"
  }
#line 170 "table_builtin.m"
}

#line 164 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_setup_shortcut_3_p_0(
#line 164 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 164 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 164 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 164 "table_builtin.m"
{
#line 196 "table_builtin.m"
  {
#line 196 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 199 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 199 "table_builtin.m"

    MR_tbl_loop_setup_shortcut(T0, T, Status);

#line 5788 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 199 "table_builtin.m"
}
#line 196 "table_builtin.m"
  }
#line 164 "table_builtin.m"
}

#line 162 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_setup_2_p_0(
#line 162 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 162 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 162 "table_builtin.m"
{
#line 189 "table_builtin.m"
  {
#line 189 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 192 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 192 "table_builtin.m"

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5828 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 192 "table_builtin.m"
}
#line 189 "table_builtin.m"
  }
#line 162 "table_builtin.m"
}

void mercury__table_builtin__init(void)
{
}

void mercury__table_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_loop_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_det_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_non_record_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_non_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_semi_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_block_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_list_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_consumer_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_generator_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_proc_table_info_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_subgoal_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_trie_node_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_mm_status_0);
}

void mercury__table_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module table_builtin. */
