/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version 2015-10-27
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





#line 94 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0;

#line 97 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1;

#line 100 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2];

#line 103 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2];

#line 106 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2];

#line 109 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0;

#line 112 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1;

#line 115 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2;

#line 118 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3];

#line 121 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3];

#line 124 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3];

#line 127 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0;

#line 130 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1;

#line 133 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2;

#line 136 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3;

#line 139 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4];

#line 142 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4];

#line 145 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4];

#line 148 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0;

#line 151 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1;

#line 154 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2;

#line 157 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3;

#line 160 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4];

#line 163 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4];

#line 166 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4];

#line 169 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0;

#line 172 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1;

#line 175 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2;

#line 178 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3];

#line 181 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3];

#line 184 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3];

#line 187 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
#line 190 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 192 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 195 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
#line 198 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 200 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 202 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 205 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
#line 208 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 210 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 213 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
#line 216 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 218 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 220 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 223 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
#line 226 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 228 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 231 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
#line 234 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 236 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 238 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 241 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
#line 244 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 246 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 249 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
#line 252 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 254 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 256 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 259 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
#line 262 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 264 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 267 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
#line 270 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 272 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 274 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 277 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
#line 280 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 282 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 285 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
#line 288 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 290 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 292 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 295 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
#line 298 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 300 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 303 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
#line 306 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 308 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 310 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 313 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
#line 316 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 318 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 321 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
#line 324 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 326 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 328 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 331 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
#line 334 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 336 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 339 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
#line 342 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 344 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 346 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 349 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
#line 352 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 354 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 357 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
#line 360 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 362 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 364 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 367 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
#line 370 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 372 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 375 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
#line 378 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 380 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 382 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 385 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
#line 388 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 390 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 393 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
#line 396 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 398 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 400 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 403 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
#line 406 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 408 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2);

#line 411 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
#line 414 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 416 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 418 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3);

#line 18 "ops.opt"
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



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 500 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0 = {
  (MR_String) "loop_inactive",
  (MR_Integer) 0
};

#line 506 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1 = {
  (MR_String) "loop_active",
  (MR_Integer) 1
};

#line 512 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1
};

#line 518 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0
};

#line 524 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 530 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____loop_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____loop_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "loop_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_loop_status_0
};

#line 547 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0 = {
  (MR_String) "memo_det_inactive",
  (MR_Integer) 0
};

#line 553 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1 = {
  (MR_String) "memo_det_active",
  (MR_Integer) 1
};

#line 559 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2 = {
  (MR_String) "memo_det_succeeded",
  (MR_Integer) 2
};

#line 565 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

#line 572 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

#line 579 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 586 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_det_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_det_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_det_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_det_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0
};

#line 603 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_record_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_record_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_record_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_record",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 620 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0 = {
  (MR_String) "memo_non_inactive",
  (MR_Integer) 0
};

#line 626 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1 = {
  (MR_String) "memo_non_active",
  (MR_Integer) 1
};

#line 632 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2 = {
  (MR_String) "memo_non_incomplete",
  (MR_Integer) 2
};

#line 638 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3 = {
  (MR_String) "memo_non_complete",
  (MR_Integer) 3
};

#line 644 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3
};

#line 652 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2
};

#line 660 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 668 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0
};

#line 685 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0 = {
  (MR_String) "memo_semi_inactive",
  (MR_Integer) 0
};

#line 691 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1 = {
  (MR_String) "memo_semi_active",
  (MR_Integer) 1
};

#line 697 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2 = {
  (MR_String) "memo_semi_succeeded",
  (MR_Integer) 2
};

#line 703 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3 = {
  (MR_String) "memo_semi_failed",
  (MR_Integer) 3
};

#line 709 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3
};

#line 717 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2
};

#line 725 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 733 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_semi_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_semi_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_semi_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_semi_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0
};

#line 750 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_block_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_block_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_block",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 767 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_list_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_list_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_list",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 784 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_consumer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_consumer_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_consumer_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_consumer",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 801 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_generator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_generator_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_generator_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_generator",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 818 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_proc_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_proc_table_info",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 835 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_subgoal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_SUBGOAL,
  ((MR_Box) (mercury__table_builtin____Unify____ml_subgoal_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_subgoal_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_subgoal",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 852 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_trie_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_trie_node_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_trie_node_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_trie_node",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 869 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0 = {
  (MR_String) "mm_inactive",
  (MR_Integer) 0
};

#line 875 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1 = {
  (MR_String) "mm_active",
  (MR_Integer) 1
};

#line 881 "table_builtin.c"
static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2 = {
  (MR_String) "mm_complete",
  (MR_Integer) 2
};

#line 887 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2
};

#line 894 "table_builtin.c"
static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0
};

#line 901 "table_builtin.c"
static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 908 "table_builtin.c"
const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_mm_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____mm_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____mm_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "mm_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_mm_status_0
};

#line 925 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
#line 928 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 930 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 932 "table_builtin.c"
{
#line 934 "table_builtin.c"
  {
#line 936 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 939 "table_builtin.c"
    {
#line 941 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____loop_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 944 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 946 "table_builtin.c"
  }
#line 948 "table_builtin.c"
}

#line 951 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
#line 954 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 956 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 958 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 960 "table_builtin.c"
{
#line 962 "table_builtin.c"
  {
#line 964 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 967 "table_builtin.c"
    {
#line 969 "table_builtin.c"
      mercury__table_builtin____Compare____loop_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 972 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 974 "table_builtin.c"
  }
#line 976 "table_builtin.c"
}

#line 979 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
#line 982 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 984 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 986 "table_builtin.c"
{
#line 988 "table_builtin.c"
  {
#line 990 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 993 "table_builtin.c"
    {
#line 995 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_det_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 998 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1000 "table_builtin.c"
  }
#line 1002 "table_builtin.c"
}

#line 1005 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
#line 1008 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1010 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1012 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1014 "table_builtin.c"
{
#line 1016 "table_builtin.c"
  {
#line 1018 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1021 "table_builtin.c"
    {
#line 1023 "table_builtin.c"
      mercury__table_builtin____Compare____memo_det_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1026 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1028 "table_builtin.c"
  }
#line 1030 "table_builtin.c"
}

#line 1033 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
#line 1036 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1038 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1040 "table_builtin.c"
{
#line 1042 "table_builtin.c"
  {
#line 1044 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1047 "table_builtin.c"
    {
#line 1049 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_non_record_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1052 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1054 "table_builtin.c"
  }
#line 1056 "table_builtin.c"
}

#line 1059 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
#line 1062 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1064 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1066 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1068 "table_builtin.c"
{
#line 1070 "table_builtin.c"
  {
#line 1072 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1075 "table_builtin.c"
    {
#line 1077 "table_builtin.c"
      mercury__table_builtin____Compare____memo_non_record_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1080 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1082 "table_builtin.c"
  }
#line 1084 "table_builtin.c"
}

#line 1087 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
#line 1090 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1092 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1094 "table_builtin.c"
{
#line 1096 "table_builtin.c"
  {
#line 1098 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1101 "table_builtin.c"
    {
#line 1103 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_non_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1106 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1108 "table_builtin.c"
  }
#line 1110 "table_builtin.c"
}

#line 1113 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
#line 1116 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1118 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1120 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1122 "table_builtin.c"
{
#line 1124 "table_builtin.c"
  {
#line 1126 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1129 "table_builtin.c"
    {
#line 1131 "table_builtin.c"
      mercury__table_builtin____Compare____memo_non_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1134 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1136 "table_builtin.c"
  }
#line 1138 "table_builtin.c"
}

#line 1141 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
#line 1144 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1146 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1148 "table_builtin.c"
{
#line 1150 "table_builtin.c"
  {
#line 1152 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1155 "table_builtin.c"
    {
#line 1157 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____memo_semi_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1160 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1162 "table_builtin.c"
  }
#line 1164 "table_builtin.c"
}

#line 1167 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
#line 1170 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1172 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1174 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1176 "table_builtin.c"
{
#line 1178 "table_builtin.c"
  {
#line 1180 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1183 "table_builtin.c"
    {
#line 1185 "table_builtin.c"
      mercury__table_builtin____Compare____memo_semi_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1188 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1190 "table_builtin.c"
  }
#line 1192 "table_builtin.c"
}

#line 1195 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
#line 1198 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1200 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1202 "table_builtin.c"
{
#line 1204 "table_builtin.c"
  {
#line 1206 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1209 "table_builtin.c"
    {
#line 1211 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_answer_block_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1214 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1216 "table_builtin.c"
  }
#line 1218 "table_builtin.c"
}

#line 1221 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
#line 1224 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1226 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1228 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1230 "table_builtin.c"
{
#line 1232 "table_builtin.c"
  {
#line 1234 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1237 "table_builtin.c"
    {
#line 1239 "table_builtin.c"
      mercury__table_builtin____Compare____ml_answer_block_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1242 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1244 "table_builtin.c"
  }
#line 1246 "table_builtin.c"
}

#line 1249 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
#line 1252 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1254 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1256 "table_builtin.c"
{
#line 1258 "table_builtin.c"
  {
#line 1260 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1263 "table_builtin.c"
    {
#line 1265 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_answer_list_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1268 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1270 "table_builtin.c"
  }
#line 1272 "table_builtin.c"
}

#line 1275 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
#line 1278 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1280 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1282 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1284 "table_builtin.c"
{
#line 1286 "table_builtin.c"
  {
#line 1288 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1291 "table_builtin.c"
    {
#line 1293 "table_builtin.c"
      mercury__table_builtin____Compare____ml_answer_list_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1296 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1298 "table_builtin.c"
  }
#line 1300 "table_builtin.c"
}

#line 1303 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
#line 1306 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1308 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1310 "table_builtin.c"
{
#line 1312 "table_builtin.c"
  {
#line 1314 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1317 "table_builtin.c"
    {
#line 1319 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_consumer_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1322 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1324 "table_builtin.c"
  }
#line 1326 "table_builtin.c"
}

#line 1329 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
#line 1332 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1334 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1336 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1338 "table_builtin.c"
{
#line 1340 "table_builtin.c"
  {
#line 1342 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1345 "table_builtin.c"
    {
#line 1347 "table_builtin.c"
      mercury__table_builtin____Compare____ml_consumer_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1350 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1352 "table_builtin.c"
  }
#line 1354 "table_builtin.c"
}

#line 1357 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
#line 1360 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1362 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1364 "table_builtin.c"
{
#line 1366 "table_builtin.c"
  {
#line 1368 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1371 "table_builtin.c"
    {
#line 1373 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_generator_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1376 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1378 "table_builtin.c"
  }
#line 1380 "table_builtin.c"
}

#line 1383 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
#line 1386 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1388 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1390 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1392 "table_builtin.c"
{
#line 1394 "table_builtin.c"
  {
#line 1396 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1399 "table_builtin.c"
    {
#line 1401 "table_builtin.c"
      mercury__table_builtin____Compare____ml_generator_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1404 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1406 "table_builtin.c"
  }
#line 1408 "table_builtin.c"
}

#line 1411 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
#line 1414 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1416 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1418 "table_builtin.c"
{
#line 1420 "table_builtin.c"
  {
#line 1422 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1425 "table_builtin.c"
    {
#line 1427 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_proc_table_info_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1430 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1432 "table_builtin.c"
  }
#line 1434 "table_builtin.c"
}

#line 1437 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
#line 1440 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1442 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1444 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1446 "table_builtin.c"
{
#line 1448 "table_builtin.c"
  {
#line 1450 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1453 "table_builtin.c"
    {
#line 1455 "table_builtin.c"
      mercury__table_builtin____Compare____ml_proc_table_info_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1458 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1460 "table_builtin.c"
  }
#line 1462 "table_builtin.c"
}

#line 1465 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
#line 1468 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1470 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1472 "table_builtin.c"
{
#line 1474 "table_builtin.c"
  {
#line 1476 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1479 "table_builtin.c"
    {
#line 1481 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_subgoal_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1484 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1486 "table_builtin.c"
  }
#line 1488 "table_builtin.c"
}

#line 1491 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
#line 1494 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1496 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1498 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1500 "table_builtin.c"
{
#line 1502 "table_builtin.c"
  {
#line 1504 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1507 "table_builtin.c"
    {
#line 1509 "table_builtin.c"
      mercury__table_builtin____Compare____ml_subgoal_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1512 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1514 "table_builtin.c"
  }
#line 1516 "table_builtin.c"
}

#line 1519 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
#line 1522 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1524 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1526 "table_builtin.c"
{
#line 1528 "table_builtin.c"
  {
#line 1530 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1533 "table_builtin.c"
    {
#line 1535 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____ml_trie_node_0_0(((MR_Box) mercury__table_builtin__wrapper_arg_1), ((MR_Box) mercury__table_builtin__wrapper_arg_2));
    }
#line 1538 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1540 "table_builtin.c"
  }
#line 1542 "table_builtin.c"
}

#line 1545 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
#line 1548 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1550 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1552 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1554 "table_builtin.c"
{
#line 1556 "table_builtin.c"
  {
#line 1558 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1561 "table_builtin.c"
    {
#line 1563 "table_builtin.c"
      mercury__table_builtin____Compare____ml_trie_node_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__table_builtin__wrapper_arg_2), ((MR_Box) mercury__table_builtin__wrapper_arg_3));
    }
#line 1566 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1568 "table_builtin.c"
  }
#line 1570 "table_builtin.c"
}

#line 1573 "table_builtin.c"
static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
#line 1576 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_1,
#line 1578 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2)
#line 1580 "table_builtin.c"
{
#line 1582 "table_builtin.c"
  {
#line 1584 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded;

#line 1587 "table_builtin.c"
    {
#line 1589 "table_builtin.c"
      mercury__table_builtin__succeeded = mercury__table_builtin____Unify____mm_status_0_0(((MR_Word) mercury__table_builtin__wrapper_arg_1), ((MR_Word) mercury__table_builtin__wrapper_arg_2));
    }
#line 1592 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1594 "table_builtin.c"
  }
#line 1596 "table_builtin.c"
}

#line 1599 "table_builtin.c"
static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
#line 1602 "table_builtin.c"
  MR_Box * mercury__table_builtin__wrapper_arg_1,
#line 1604 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_2,
#line 1606 "table_builtin.c"
  MR_Box mercury__table_builtin__wrapper_arg_3)
#line 1608 "table_builtin.c"
{
#line 1610 "table_builtin.c"
  {
#line 1612 "table_builtin.c"
    MR_Word mercury__table_builtin__conv0_HeadVar__1_1;

#line 1615 "table_builtin.c"
    {
#line 1617 "table_builtin.c"
      mercury__table_builtin____Compare____mm_status_0_0(&mercury__table_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__table_builtin__wrapper_arg_2), ((MR_Word) mercury__table_builtin__wrapper_arg_3));
    }
#line 1620 "table_builtin.c"
    *mercury__table_builtin__wrapper_arg_1 = ((MR_Box) (mercury__table_builtin__conv0_HeadVar__1_1));
#line 1622 "table_builtin.c"
  }
#line 1624 "table_builtin.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__table_builtin__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1040 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_p_0(void)
#line 1040 "table_builtin.m"
{
#line 1135 "table_builtin.m"
  {
#line 1135 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1135 "table_builtin.m"
  }
#line 1040 "table_builtin.m"
}

#line 864 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 864 "table_builtin.m"
{
#line 897 "table_builtin.m"
  {
#line 897 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 897 "table_builtin.m"
  }
#line 864 "table_builtin.m"
}

#line 365 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 365 "table_builtin.m"
{
#line 507 "table_builtin.m"
  {
#line 507 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 507 "table_builtin.m"
  }
#line 365 "table_builtin.m"
}

#line 336 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
#line 336 "table_builtin.m"
{
#line 470 "table_builtin.m"
  {
#line 470 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 470 "table_builtin.m"
  }
#line 336 "table_builtin.m"
}

#line 800 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0(
#line 800 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 800 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 800 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 800 "table_builtin.m"
{
#line 800 "table_builtin.m"
  {
#line 800 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 800 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 800 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 71 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 76 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 800 "table_builtin.m"
  }
#line 800 "table_builtin.m"
}

#line 800 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0(
#line 800 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 800 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 800 "table_builtin.m"
{
#line 1760 "table_builtin.c"
  {
#line 1762 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 1765 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 1767 "table_builtin.c"
  }
#line 800 "table_builtin.m"
}

#line 129 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0(
#line 129 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 129 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 129 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 129 "table_builtin.m"
{
#line 129 "table_builtin.m"
  {
#line 129 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 129 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 129 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 129 "table_builtin.m"
    {
#line 129 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 129 "table_builtin.m"
      return;
    }
#line 129 "table_builtin.m"
  }
#line 129 "table_builtin.m"
}

#line 129 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0(
#line 129 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 129 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 129 "table_builtin.m"
{
#line 129 "table_builtin.m"
  {
#line 129 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 129 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 129 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 129 "table_builtin.m"
    {
#line 129 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 129 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 129 "table_builtin.m"
  }
#line 129 "table_builtin.m"
}

#line 873 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0(
#line 873 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 873 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 873 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 873 "table_builtin.m"
{
#line 873 "table_builtin.m"
  {
#line 873 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 873 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 873 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 873 "table_builtin.m"
    {
#line 873 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 873 "table_builtin.m"
      return;
    }
#line 873 "table_builtin.m"
  }
#line 873 "table_builtin.m"
}

#line 873 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0(
#line 873 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 873 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 873 "table_builtin.m"
{
#line 873 "table_builtin.m"
  {
#line 873 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 873 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 873 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 873 "table_builtin.m"
    {
#line 873 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 873 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 873 "table_builtin.m"
  }
#line 873 "table_builtin.m"
}

#line 140 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0(
#line 140 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 140 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 140 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 140 "table_builtin.m"
{
#line 140 "table_builtin.m"
  {
#line 140 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 140 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 140 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 140 "table_builtin.m"
    {
#line 140 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 140 "table_builtin.m"
      return;
    }
#line 140 "table_builtin.m"
  }
#line 140 "table_builtin.m"
}

#line 140 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0(
#line 140 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 140 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 140 "table_builtin.m"
{
#line 140 "table_builtin.m"
  {
#line 140 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 140 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 140 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 140 "table_builtin.m"
    {
#line 140 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 140 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 140 "table_builtin.m"
  }
#line 140 "table_builtin.m"
}

#line 1078 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0(
#line 1078 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 1078 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1078 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1078 "table_builtin.m"
{
#line 1078 "table_builtin.m"
  {
#line 1078 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1078 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 1078 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 1078 "table_builtin.m"
    {
#line 1078 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 1078 "table_builtin.m"
      return;
    }
#line 1078 "table_builtin.m"
  }
#line 1078 "table_builtin.m"
}

#line 1078 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0(
#line 1078 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1078 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 1078 "table_builtin.m"
{
#line 1078 "table_builtin.m"
  {
#line 1078 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1078 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 1078 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 1078 "table_builtin.m"
    {
#line 1078 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 1078 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1078 "table_builtin.m"
  }
#line 1078 "table_builtin.m"
}

#line 1071 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0(
#line 1071 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 1071 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1071 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1071 "table_builtin.m"
{
#line 1071 "table_builtin.m"
  {
#line 1071 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1071 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 1071 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 1071 "table_builtin.m"
    {
#line 1071 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 1071 "table_builtin.m"
      return;
    }
#line 1071 "table_builtin.m"
  }
#line 1071 "table_builtin.m"
}

#line 1071 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0(
#line 1071 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1071 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 1071 "table_builtin.m"
{
#line 1071 "table_builtin.m"
  {
#line 1071 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1071 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 1071 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 1071 "table_builtin.m"
    {
#line 1071 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 1071 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1071 "table_builtin.m"
  }
#line 1071 "table_builtin.m"
}

#line 879 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0(
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
mercury__table_builtin____Unify____ml_answer_list_0_0(
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

#line 136 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0(
#line 136 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 136 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 136 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 136 "table_builtin.m"
{
#line 136 "table_builtin.m"
  {
#line 136 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 136 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 136 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 136 "table_builtin.m"
    {
#line 136 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 136 "table_builtin.m"
      return;
    }
#line 136 "table_builtin.m"
  }
#line 136 "table_builtin.m"
}

#line 136 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0(
#line 136 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 136 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 136 "table_builtin.m"
{
#line 136 "table_builtin.m"
  {
#line 136 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 136 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 136 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 136 "table_builtin.m"
    {
#line 136 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 136 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 136 "table_builtin.m"
  }
#line 136 "table_builtin.m"
}

#line 271 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0(
#line 271 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 271 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 271 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 271 "table_builtin.m"
{
#line 271 "table_builtin.m"
  {
#line 271 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 271 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 271 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 71 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 76 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 271 "table_builtin.m"
  }
#line 271 "table_builtin.m"
}

#line 271 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0(
#line 271 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 271 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 271 "table_builtin.m"
{
#line 2262 "table_builtin.c"
  {
#line 2264 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2267 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2269 "table_builtin.c"
  }
#line 271 "table_builtin.m"
}

#line 280 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0(
#line 280 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 280 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 280 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 280 "table_builtin.m"
{
#line 280 "table_builtin.m"
  {
#line 280 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 280 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 280 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 71 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 76 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 280 "table_builtin.m"
  }
#line 280 "table_builtin.m"
}

#line 280 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0(
#line 280 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 280 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 280 "table_builtin.m"
{
#line 2330 "table_builtin.c"
  {
#line 2332 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2335 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2337 "table_builtin.c"
  }
#line 280 "table_builtin.m"
}

#line 375 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0(
#line 375 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 375 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 375 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 375 "table_builtin.m"
{
#line 375 "table_builtin.m"
  {
#line 375 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 375 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;
#line 375 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__table_builtin__HeadVar__3_3;

#line 375 "table_builtin.m"
    {
#line 375 "table_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__table_builtin__HeadVar__1_1, mercury__table_builtin__Cast_HeadVar1_4, mercury__table_builtin__Cast_HeadVar2_5);
#line 375 "table_builtin.m"
      return;
    }
#line 375 "table_builtin.m"
  }
#line 375 "table_builtin.m"
}

#line 375 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0(
#line 375 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 375 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2)
#line 375 "table_builtin.m"
{
#line 375 "table_builtin.m"
  {
#line 375 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 375 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__table_builtin__HeadVar__1_1;
#line 375 "table_builtin.m"
    MR_Word mercury__table_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__table_builtin__HeadVar__2_2;

#line 375 "table_builtin.m"
    {
#line 375 "table_builtin.m"
      return mercury__table_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__table_builtin__Cast_HeadVar1_3, mercury__table_builtin__Cast_HeadVar2_4);
    }
#line 375 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 375 "table_builtin.m"
  }
#line 375 "table_builtin.m"
}

#line 263 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0(
#line 263 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 263 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 263 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 263 "table_builtin.m"
{
#line 263 "table_builtin.m"
  {
#line 263 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 263 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 263 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 71 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 76 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 263 "table_builtin.m"
  }
#line 263 "table_builtin.m"
}

#line 263 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0(
#line 263 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 263 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 263 "table_builtin.m"
{
#line 2460 "table_builtin.c"
  {
#line 2462 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2465 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2467 "table_builtin.c"
  }
#line 263 "table_builtin.m"
}

#line 154 "table_builtin.m"
void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0(
#line 154 "table_builtin.m"
  MR_Word * mercury__table_builtin__HeadVar__1_1,
#line 154 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2,
#line 154 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__3_3)
#line 154 "table_builtin.m"
{
#line 154 "table_builtin.m"
  {
#line 154 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 154 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar1_4 = (MR_Integer) mercury__table_builtin__HeadVar__2_2;
#line 154 "table_builtin.m"
    MR_Integer mercury__table_builtin__Cast_HeadVar2_5 = (MR_Integer) mercury__table_builtin__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 < mercury__table_builtin__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__table_builtin__succeeded)
#line 71 "private_builtin.opt"
      *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__table_builtin__succeeded = (mercury__table_builtin__Cast_HeadVar1_4 == mercury__table_builtin__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__table_builtin__succeeded)
#line 76 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__table_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 154 "table_builtin.m"
  }
#line 154 "table_builtin.m"
}

#line 154 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0(
#line 154 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_1,
#line 154 "table_builtin.m"
  MR_Word mercury__table_builtin__HeadVar__2_2)
#line 154 "table_builtin.m"
{
#line 2528 "table_builtin.c"
  {
#line 2530 "table_builtin.c"
    MR_bool mercury__table_builtin__succeeded = (mercury__table_builtin__HeadVar__2_1 == mercury__table_builtin__HeadVar__2_2);

#line 2533 "table_builtin.c"
    return mercury__table_builtin__succeeded;
#line 2535 "table_builtin.c"
  }
#line 154 "table_builtin.m"
}

#line 1379 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_report_statistics_0_p_0(void)
#line 1379 "table_builtin.m"
{
#line 1590 "table_builtin.m"
  {
#line 1590 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1593 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_report_statistics_0_p_0


		{
#line 1593 "table_builtin.m"

    MR_table_report_statistics(stderr);

#line 2560 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1593 "table_builtin.m"
}
#line 1590 "table_builtin.m"
  }
#line 1379 "table_builtin.m"
}

#line 1375 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_error_1_p_0(
#line 1375 "table_builtin.m"
  MR_String mercury__table_builtin__Message_2)
#line 1375 "table_builtin.m"
{
#line 1588 "table_builtin.m"
  {
#line 1588 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1588 "table_builtin.m"
    {
#line 1588 "table_builtin.m"
      mercury__require__error_1_p_0(mercury__table_builtin__Message_2);
#line 1588 "table_builtin.m"
      return;
    }
#line 1588 "table_builtin.m"
  }
#line 1375 "table_builtin.m"
}

#line 1370 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_any_answer_3_p_0(
#line 1370 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1370 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1370 "table_builtin.m"
  MR_Box * mercury__table_builtin__V_3)
#line 1370 "table_builtin.m"
{
#line 1580 "table_builtin.m"
  {
#line 1580 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1583 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_any_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1583 "table_builtin.m"

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2626 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = (MR_Box) V;
#line 1583 "table_builtin.m"
}
#line 1580 "table_builtin.m"
  }
#line 1370 "table_builtin.m"
}

#line 1364 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_io_state_answer_3_p_0(
#line 1364 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1364 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2)
#line 1364 "table_builtin.m"
{
#line 1573 "table_builtin.m"
  {
#line 1573 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1576 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1576 "table_builtin.m"

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2667 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1576 "table_builtin.m"
}
#line 1573 "table_builtin.m"
  }
#line 1364 "table_builtin.m"
}

#line 1359 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_float_answer_3_p_0(
#line 1359 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1359 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1359 "table_builtin.m"
  MR_Float * mercury__table_builtin__V_3)
#line 1359 "table_builtin.m"
{
#line 1566 "table_builtin.m"
  {
#line 1566 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1569 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1569 "table_builtin.m"

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2709 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1569 "table_builtin.m"
}
#line 1566 "table_builtin.m"
  }
#line 1359 "table_builtin.m"
}

#line 1353 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_string_answer_3_p_0(
#line 1353 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1353 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1353 "table_builtin.m"
  MR_String * mercury__table_builtin__V_3)
#line 1353 "table_builtin.m"
{
#line 1559 "table_builtin.m"
  {
#line 1559 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1562 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1562 "table_builtin.m"

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2752 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1562 "table_builtin.m"
}
#line 1559 "table_builtin.m"
  }
#line 1353 "table_builtin.m"
}

#line 1347 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_char_answer_3_p_0(
#line 1347 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1347 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1347 "table_builtin.m"
  MR_Char * mercury__table_builtin__V_3)
#line 1347 "table_builtin.m"
{
#line 1552 "table_builtin.m"
  {
#line 1552 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1555 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1555 "table_builtin.m"

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2795 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1555 "table_builtin.m"
}
#line 1552 "table_builtin.m"
  }
#line 1347 "table_builtin.m"
}

#line 1341 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_restore_int_answer_3_p_0(
#line 1341 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1341 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1341 "table_builtin.m"
  MR_Integer * mercury__table_builtin__V_3)
#line 1341 "table_builtin.m"
{
#line 1545 "table_builtin.m"
  {
#line 1545 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1548 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
		{
#line 1548 "table_builtin.m"

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2838 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__V_3  = V;
#line 1548 "table_builtin.m"
}
#line 1545 "table_builtin.m"
  }
#line 1341 "table_builtin.m"
}

#line 1335 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_any_answer_3_p_0(
#line 1335 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1335 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1335 "table_builtin.m"
  MR_Integer mercury__table_builtin__HeadVar__2_2,
#line 1335 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__3_3)
#line 1335 "table_builtin.m"
{
#line 1537 "table_builtin.m"
  {
#line 1537 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1540 "table_builtin.m"
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
#line 1540 "table_builtin.m"

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);

#line 2887 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1540 "table_builtin.m"
}
#line 1537 "table_builtin.m"
  }
#line 1335 "table_builtin.m"
}

#line 1329 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_io_state_answer_3_p_0(
#line 1329 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1329 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2)
#line 1329 "table_builtin.m"
{
#line 1530 "table_builtin.m"
  {
#line 1530 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1533 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V = (MR_Word) (MR_Integer) 0 ;
		{
#line 1533 "table_builtin.m"

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2928 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1533 "table_builtin.m"
}
#line 1530 "table_builtin.m"
  }
#line 1329 "table_builtin.m"
}

#line 1324 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_float_answer_3_p_0(
#line 1324 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1324 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1324 "table_builtin.m"
  MR_Float mercury__table_builtin__V_3)
#line 1324 "table_builtin.m"
{
#line 1523 "table_builtin.m"
  {
#line 1523 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1526 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1526 "table_builtin.m"

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 2971 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1526 "table_builtin.m"
}
#line 1523 "table_builtin.m"
  }
#line 1324 "table_builtin.m"
}

#line 1318 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_string_answer_3_p_0(
#line 1318 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1318 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1318 "table_builtin.m"
  MR_String mercury__table_builtin__V_3)
#line 1318 "table_builtin.m"
{
#line 1516 "table_builtin.m"
  {
#line 1516 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1519 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1519 "table_builtin.m"

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3014 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1519 "table_builtin.m"
}
#line 1516 "table_builtin.m"
  }
#line 1318 "table_builtin.m"
}

#line 1312 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_char_answer_3_p_0(
#line 1312 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1312 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1312 "table_builtin.m"
  MR_Char mercury__table_builtin__V_3)
#line 1312 "table_builtin.m"
{
#line 1509 "table_builtin.m"
  {
#line 1509 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1512 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1512 "table_builtin.m"

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3057 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1512 "table_builtin.m"
}
#line 1509 "table_builtin.m"
  }
#line 1312 "table_builtin.m"
}

#line 1306 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_save_int_answer_3_p_0(
#line 1306 "table_builtin.m"
  MR_Box mercury__table_builtin__AB_1,
#line 1306 "table_builtin.m"
  MR_Integer mercury__table_builtin__Offset_2,
#line 1306 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_3)
#line 1306 "table_builtin.m"
{
#line 1502 "table_builtin.m"
  {
#line 1502 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1505 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) mercury__table_builtin__AB_1 ;
	Offset =  mercury__table_builtin__Offset_2 ;
	V =  mercury__table_builtin__V_3 ;
		{
#line 1505 "table_builtin.m"

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);

#line 3100 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1505 "table_builtin.m"
}
#line 1502 "table_builtin.m"
  }
#line 1306 "table_builtin.m"
}

#line 1300 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0(
#line 1300 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1300 "table_builtin.m"
  MR_Word mercury__table_builtin__V_2,
#line 1300 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1300 "table_builtin.m"
{
#line 1492 "table_builtin.m"
  {
#line 1492 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1495 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1495 "table_builtin.m"

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);

#line 3143 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1495 "table_builtin.m"
}
#line 1492 "table_builtin.m"
  }
#line 1300 "table_builtin.m"
}

#line 1295 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0(
#line 1295 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1295 "table_builtin.m"
  MR_Word mercury__table_builtin__V_2,
#line 1295 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1295 "table_builtin.m"
{
#line 1484 "table_builtin.m"
  {
#line 1484 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1487 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1487 "table_builtin.m"

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);

#line 3187 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1487 "table_builtin.m"
}
#line 1484 "table_builtin.m"
  }
#line 1295 "table_builtin.m"
}

#line 1290 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0(
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
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1479 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly_addr(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, TypeInfo_for_T, V, T);

#line 3235 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1479 "table_builtin.m"
}
#line 1476 "table_builtin.m"
  }
#line 1290 "table_builtin.m"
}

#line 1282 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_3_p_0(
#line 1282 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1282 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1282 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1282 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1282 "table_builtin.m"
{
#line 1468 "table_builtin.m"
  {
#line 1468 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1471 "table_builtin.m"
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
#line 1471 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3283 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1471 "table_builtin.m"
}
#line 1468 "table_builtin.m"
  }
#line 1282 "table_builtin.m"
}

#line 1277 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0(
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
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  mercury__table_builtin__TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1463 "table_builtin.m"

    MR_tbl_lookup_insert_gen_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3331 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1463 "table_builtin.m"
}
#line 1460 "table_builtin.m"
  }
#line 1277 "table_builtin.m"
}

#line 1269 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_3_p_0(
#line 1269 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_8,
#line 1269 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1269 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1269 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1269 "table_builtin.m"
{
#line 1452 "table_builtin.m"
  {
#line 1452 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1455 "table_builtin.m"
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
#line 1455 "table_builtin.m"

    MR_tbl_lookup_insert_gen(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);

#line 3379 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1455 "table_builtin.m"
}
#line 1452 "table_builtin.m"
  }
#line 1269 "table_builtin.m"
}

#line 1264 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0(
#line 1264 "table_builtin.m"
  MR_Word mercury__table_builtin__TypeInfo_for_T_4,
#line 1264 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1264 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__2_2,
#line 1264 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__3_3)
#line 1264 "table_builtin.m"
{
#line 1444 "table_builtin.m"
  {
#line 1444 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;
#line 1444 "table_builtin.m"
    MR_Word mercury__table_builtin__TypeInfo_for_T_5;

#line 1447 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__HeadVar__1_1 ;
	V = (MR_Word) mercury__table_builtin__HeadVar__2_2 ;
		{
#line 1447 "table_builtin.m"

    MR_tbl_lookup_insert_foreign_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        V, T);

#line 3427 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__HeadVar__3_3  = (MR_Box) T;
#line 1447 "table_builtin.m"
}
#line 1444 "table_builtin.m"
  }
#line 1264 "table_builtin.m"
}

#line 1259 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_enum_4_p_0(
#line 1259 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1259 "table_builtin.m"
  MR_Integer mercury__table_builtin__R_2,
#line 1259 "table_builtin.m"
  MR_Box mercury__table_builtin__V_3,
#line 1259 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_4)
#line 1259 "table_builtin.m"
{
#line 1436 "table_builtin.m"
  {
#line 1436 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1439 "table_builtin.m"
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
#line 1439 "table_builtin.m"

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);

#line 3475 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_4  = (MR_Box) T;
#line 1439 "table_builtin.m"
}
#line 1436 "table_builtin.m"
  }
#line 1259 "table_builtin.m"
}

#line 1254 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_float_3_p_0(
#line 1254 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1254 "table_builtin.m"
  MR_Float mercury__table_builtin__V_2,
#line 1254 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1254 "table_builtin.m"
{
#line 1429 "table_builtin.m"
  {
#line 1429 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1432 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_float_3_p_0

	MR_TrieNode T0;
	MR_Float V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1432 "table_builtin.m"

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3518 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1432 "table_builtin.m"
}
#line 1429 "table_builtin.m"
  }
#line 1254 "table_builtin.m"
}

#line 1249 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_string_3_p_0(
#line 1249 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1249 "table_builtin.m"
  MR_String mercury__table_builtin__V_2,
#line 1249 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1249 "table_builtin.m"
{
#line 1422 "table_builtin.m"
  {
#line 1422 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1425 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_string_3_p_0

	MR_TrieNode T0;
	MR_String V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1425 "table_builtin.m"

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3561 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1425 "table_builtin.m"
}
#line 1422 "table_builtin.m"
  }
#line 1249 "table_builtin.m"
}

#line 1244 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_char_3_p_0(
#line 1244 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1244 "table_builtin.m"
  MR_Char mercury__table_builtin__V_2,
#line 1244 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1244 "table_builtin.m"
{
#line 1415 "table_builtin.m"
  {
#line 1415 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1418 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_char_3_p_0

	MR_TrieNode T0;
	MR_Char V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1418 "table_builtin.m"

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3604 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1418 "table_builtin.m"
}
#line 1415 "table_builtin.m"
  }
#line 1244 "table_builtin.m"
}

#line 1239 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_start_int_4_p_0(
#line 1239 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1239 "table_builtin.m"
  MR_Integer mercury__table_builtin__S_2,
#line 1239 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_3,
#line 1239 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_4)
#line 1239 "table_builtin.m"
{
#line 1407 "table_builtin.m"
  {
#line 1407 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1410 "table_builtin.m"
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
#line 1410 "table_builtin.m"

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);

#line 3652 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_4  = (MR_Box) T;
#line 1410 "table_builtin.m"
}
#line 1407 "table_builtin.m"
  }
#line 1239 "table_builtin.m"
}

#line 1234 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_lookup_insert_int_3_p_0(
#line 1234 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 1234 "table_builtin.m"
  MR_Integer mercury__table_builtin__V_2,
#line 1234 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_3)
#line 1234 "table_builtin.m"
{
#line 1400 "table_builtin.m"
  {
#line 1400 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1403 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int_3_p_0

	MR_TrieNode T0;
	MR_Integer V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
	V =  mercury__table_builtin__V_2 ;
		{
#line 1403 "table_builtin.m"

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);

#line 3695 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_3  = (MR_Box) T;
#line 1403 "table_builtin.m"
}
#line 1400 "table_builtin.m"
  }
#line 1234 "table_builtin.m"
}

#line 1063 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_completion_1_p_0(
#line 1063 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1)
#line 1063 "table_builtin.m"
{
#line 1180 "table_builtin.m"
  {
#line 1180 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1183 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_completion_1_p_0

	MR_GeneratorPtr Generator;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
		{
#line 1183 "table_builtin.m"

    /*
    MR_tbl_mmos_completion(Generator);
    */

#line 3733 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1183 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 1180 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1180 "table_builtin.m"
  }
#line 1063 "table_builtin.m"
}

#line 1055 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_return_answer_2_p_0(
#line 1055 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1,
#line 1055 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_2)
#line 1055 "table_builtin.m"
{
#line 1171 "table_builtin.m"
  {
#line 1171 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1174 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_return_answer_2_p_0

	MR_GeneratorPtr Generator;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
	AnswerBlock = (MR_AnswerBlock) mercury__table_builtin__AnswerBlock_2 ;
		{
#line 1174 "table_builtin.m"

    /*
    MR_tbl_mmos_return_answer(Generator, AnswerBlock);
    */

#line 3777 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1174 "table_builtin.m"
}
#line 1171 "table_builtin.m"
  }
#line 1055 "table_builtin.m"
}

#line 1050 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_create_answer_block_3_p_0(
#line 1050 "table_builtin.m"
  MR_Box mercury__table_builtin__Generator_1,
#line 1050 "table_builtin.m"
  MR_Integer mercury__table_builtin__BlockSize_2,
#line 1050 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 1050 "table_builtin.m"
{
#line 1161 "table_builtin.m"
  {
#line 1161 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1165 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_create_answer_block_3_p_0

	MR_GeneratorPtr Generator;
	MR_Integer BlockSize;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) mercury__table_builtin__Generator_1 ;
	BlockSize =  mercury__table_builtin__BlockSize_2 ;
		{
#line 1165 "table_builtin.m"

    /*
    MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);
    */

#line 3821 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 1165 "table_builtin.m"
}
#line 1161 "table_builtin.m"
  }
#line 1050 "table_builtin.m"
}

#line 1045 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_pickup_inputs_1_p_0(
#line 1045 "table_builtin.m"
  MR_Box * mercury__table_builtin__Generator_1)
#line 1045 "table_builtin.m"
{
#line 1148 "table_builtin.m"
  {
#line 1148 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1151 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_pickup_inputs_1_p_0

	MR_GeneratorPtr Generator;

		{
#line 1151 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Generator to shut up the warning */
    MR_fatal_error("table_mmos_pickup_inputs: direct call");

#line 3862 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Generator_1  = (MR_Box) Generator;
#line 1151 "table_builtin.m"
}
#line 1148 "table_builtin.m"
  }
#line 1045 "table_builtin.m"
}

#line 1040 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_restore_answers_1_p_0(
#line 1040 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_1)
#line 1040 "table_builtin.m"
{
#line 1135 "table_builtin.m"
  {
#line 1135 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1135 "table_builtin.m"
  }
#line 1040 "table_builtin.m"
}

#line 1034 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_multi_2_p_0(
#line 1034 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1034 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 1034 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 1034 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 1032 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_nondet_2_p_0(
#line 1032 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 1032 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 1032 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 1032 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 1025 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0(
#line 1025 "table_builtin.m"
  MR_Box mercury__table_builtin__G_1)
#line 1025 "table_builtin.m"
{
#line 1119 "table_builtin.m"
  {
#line 1119 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1122 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0

	MR_GeneratorPtr G;
	MR_bool SUCCESS_INDICATOR;

	G = (MR_GeneratorPtr) mercury__table_builtin__G_1 ;
		{
#line 1122 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention G to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate_shortcut: direct call");

#line 3946 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1122 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1119 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1119 "table_builtin.m"
  }
#line 1025 "table_builtin.m"
}

#line 1020 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0(
#line 1020 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 1020 "table_builtin.m"
{
#line 1106 "table_builtin.m"
  {
#line 1106 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1109 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 1109 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");

#line 3993 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1109 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 1106 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 1106 "table_builtin.m"
  }
#line 1020 "table_builtin.m"
}

#line 1012 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_setup_consumer_3_p_0(
#line 1012 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 1012 "table_builtin.m"
  MR_Word mercury__table_builtin__GeneratorPred_2,
#line 1012 "table_builtin.m"
  MR_Box * mercury__table_builtin__Consumer_3)
#line 1012 "table_builtin.m"
{
#line 1093 "table_builtin.m"
  {
#line 1093 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1096 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_setup_consumer_3_p_0

	MR_TrieNode T;
	MR_Word GeneratorPred;
	MR_ConsumerPtr Consumer;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
	GeneratorPred =  mercury__table_builtin__GeneratorPred_2 ;
		{
#line 1096 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T, GeneratorPred, Consumer to shut up the warning */
    MR_fatal_error("table_mmos_setup_consumer: direct call");

#line 4046 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Consumer_3  = (MR_Box) Consumer;
#line 1096 "table_builtin.m"
}
#line 1093 "table_builtin.m"
  }
#line 1012 "table_builtin.m"
}

#line 1004 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mmos_save_inputs_0_p_0(void)
#line 1004 "table_builtin.m"
{
#line 1081 "table_builtin.m"
  {
#line 1081 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 1084 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_save_inputs_0_p_0


		{
#line 1084 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    MR_fatal_error("table_mmos_save_inputs: direct call");

#line 4083 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1084 "table_builtin.m"
}
#line 1081 "table_builtin.m"
  }
#line 1004 "table_builtin.m"
}

#line 864 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_shortcut_1_p_0(
#line 864 "table_builtin.m"
  MR_Box mercury__table_builtin__AnswerBlock_1)
#line 864 "table_builtin.m"
{
#line 897 "table_builtin.m"
  {
#line 897 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 897 "table_builtin.m"
  }
#line 864 "table_builtin.m"
}

#line 862 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_multi_2_p_0(
#line 862 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 862 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 862 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 862 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 860 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_return_all_nondet_2_p_0(
#line 860 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 860 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 860 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 860 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 856 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0(
#line 856 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1)
#line 856 "table_builtin.m"
{
#line 940 "table_builtin.m"
  {
#line 940 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 943 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 943 "table_builtin.m"

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);

#line 4159 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 943 "table_builtin.m"
}
#line 940 "table_builtin.m"
  }
#line 856 "table_builtin.m"
}

#line 853 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_create_answer_block_3_p_0(
#line 853 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1,
#line 853 "table_builtin.m"
  MR_Integer mercury__table_builtin__Size_2,
#line 853 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 853 "table_builtin.m"
{
#line 932 "table_builtin.m"
  {
#line 932 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 935 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_create_answer_block_3_p_0

	MR_SubgoalPtr Subgoal;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
	Size =  mercury__table_builtin__Size_2 ;
		{
#line 935 "table_builtin.m"

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);

#line 4202 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 935 "table_builtin.m"
}
#line 932 "table_builtin.m"
  }
#line 853 "table_builtin.m"
}

#line 846 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0(
#line 846 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1)
#line 846 "table_builtin.m"
{
#line 919 "table_builtin.m"
  {
#line 919 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 922 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;
	MR_bool SUCCESS_INDICATOR;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 922 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Subgoal to shut up the warning */
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");

#line 4245 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 922 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 919 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 919 "table_builtin.m"
  }
#line 846 "table_builtin.m"
}

#line 845 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0(
#line 845 "table_builtin.m"
  MR_Box mercury__table_builtin__TrieNode_1)
#line 845 "table_builtin.m"
{
#line 911 "table_builtin.m"
  {
#line 911 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 914 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0

	MR_TrieNode TrieNode;
	MR_bool SUCCESS_INDICATOR;

	TrieNode = (MR_TrieNode) mercury__table_builtin__TrieNode_1 ;
		{
#line 914 "table_builtin.m"

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);

#line 4287 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 914 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 911 "table_builtin.m"
  }
#line 845 "table_builtin.m"
}

#line 837 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_get_answer_table_2_p_0(
#line 837 "table_builtin.m"
  MR_Box mercury__table_builtin__Subgoal_1,
#line 837 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerTable_2)
#line 837 "table_builtin.m"
{
#line 904 "table_builtin.m"
  {
#line 904 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 907 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_get_answer_table_2_p_0

	MR_SubgoalPtr Subgoal;
	MR_TrieNode AnswerTable;

	Subgoal = (MR_SubgoalPtr) mercury__table_builtin__Subgoal_1 ;
		{
#line 907 "table_builtin.m"

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);

#line 4330 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerTable_2  = (MR_Box) AnswerTable;
#line 907 "table_builtin.m"
}
#line 904 "table_builtin.m"
  }
#line 837 "table_builtin.m"
}

#line 832 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_completion_1_p_0(
#line 832 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1);

#line 824 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_suspend_consumer_2_p_0(
#line 824 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 824 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 824 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 824 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 816 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_mm_setup_3_p_0(
#line 816 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 816 "table_builtin.m"
  MR_Box * mercury__table_builtin__Subgoal_2,
#line 816 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 816 "table_builtin.m"
{
#line 882 "table_builtin.m"
  {
#line 882 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 885 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_setup_3_p_0

	MR_TrieNode T;
	MR_SubgoalPtr Subgoal;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 885 "table_builtin.m"

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);

#line 4390 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Subgoal_2  = (MR_Box) Subgoal;
	 *mercury__table_builtin__Status_3  = Status;
#line 885 "table_builtin.m"
}
#line 882 "table_builtin.m"
  }
#line 816 "table_builtin.m"
}

#line 679 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0(
#line 679 "table_builtin.m"
  MR_Integer mercury__table_builtin__TraceEnabled_1)
#line 679 "table_builtin.m"
{
#line 758 "table_builtin.m"
  {
#line 758 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 761 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

	TraceEnabled =  mercury__table_builtin__TraceEnabled_1 ;
		{
#line 761 "table_builtin.m"

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);

#line 4427 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 761 "table_builtin.m"
}
#line 758 "table_builtin.m"
  }
#line 679 "table_builtin.m"
}

#line 678 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0(
#line 678 "table_builtin.m"
  MR_Integer * mercury__table_builtin__TraceEnabled_1)
#line 678 "table_builtin.m"
{
#line 751 "table_builtin.m"
  {
#line 751 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 754 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

		{
#line 754 "table_builtin.m"

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);

#line 4461 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__TraceEnabled_1  = TraceEnabled;
#line 754 "table_builtin.m"
}
#line 751 "table_builtin.m"
  }
#line 678 "table_builtin.m"
}

#line 667 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_io_copy_io_state_2_p_0(void)
#line 667 "table_builtin.m"
{
#line 749 "table_builtin.m"
  {
#line 749 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 749 "table_builtin.m"
  }
#line 667 "table_builtin.m"
}

#line 660 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_io_has_occurred_1_p_0(
#line 660 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 660 "table_builtin.m"
{
#line 742 "table_builtin.m"
  {
#line 742 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 745 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_has_occurred_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 745 "table_builtin.m"

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);

#line 4513 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 745 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 742 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 742 "table_builtin.m"
  }
#line 660 "table_builtin.m"
}

#line 651 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_io_in_range_3_p_0(
#line 651 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_1,
#line 651 "table_builtin.m"
  MR_Integer * mercury__table_builtin__Counter_2,
#line 651 "table_builtin.m"
  MR_Integer * mercury__table_builtin__Start_3)
#line 651 "table_builtin.m"
{
#line 734 "table_builtin.m"
  {
#line 734 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 737 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_in_range_3_p_0

	MR_TrieNode T;
	MR_Integer Counter;
	MR_Integer Start;
	MR_bool SUCCESS_INDICATOR;

		{
#line 737 "table_builtin.m"

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);

#line 4560 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__table_builtin__T_1  = (MR_Box) T;
	 *mercury__table_builtin__Counter_2  = Counter;
	 *mercury__table_builtin__Start_3  = Start;
#line 737 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 734 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 734 "table_builtin.m"
  }
#line 651 "table_builtin.m"
}

#line 365 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_return_all_shortcut_1_p_0(
#line 365 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 365 "table_builtin.m"
{
#line 507 "table_builtin.m"
  {
#line 507 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 507 "table_builtin.m"
  }
#line 365 "table_builtin.m"
}

#line 363 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_multi_2_p_0(
#line 363 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 363 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 363 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 363 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 361 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_nondet_2_p_0(
#line 361 "table_builtin.m"
  MR_Box mercury__table_builtin__HeadVar__1_1,
#line 361 "table_builtin.m"
  MR_Box * mercury__table_builtin__HeadVar__2_2,
#line 361 "table_builtin.m"
  MR_Cont mercury__table_builtin__cont,
#line 361 "table_builtin.m"
  void * mercury__table_builtin__cont_env_ptr);

#line 356 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0(
#line 356 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 356 "table_builtin.m"
{
#line 500 "table_builtin.m"
  {
#line 500 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 503 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 503 "table_builtin.m"

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);

#line 4644 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 503 "table_builtin.m"
}
#line 500 "table_builtin.m"
  }
#line 356 "table_builtin.m"
}

#line 351 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0(
#line 351 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 351 "table_builtin.m"
{
#line 492 "table_builtin.m"
  {
#line 492 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 495 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0

	MR_MemoNonRecordPtr R;
	MR_bool SUCCESS_INDICATOR;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 495 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);

#line 4681 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 495 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 492 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 492 "table_builtin.m"
  }
#line 351 "table_builtin.m"
}

#line 349 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0(
#line 349 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 349 "table_builtin.m"
{
#line 484 "table_builtin.m"
  {
#line 484 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 487 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 487 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);

#line 4723 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 487 "table_builtin.m"
	}
mercury__table_builtin__succeeded  = SUCCESS_INDICATOR;
}
#line 484 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 484 "table_builtin.m"
  }
#line 349 "table_builtin.m"
}

#line 341 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_get_answer_table_2_p_0(
#line 341 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1,
#line 341 "table_builtin.m"
  MR_Box * mercury__table_builtin__AT_2)
#line 341 "table_builtin.m"
{
#line 477 "table_builtin.m"
  {
#line 477 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 480 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_get_answer_table_2_p_0

	MR_MemoNonRecordPtr R;
	MR_TrieNode AT;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 480 "table_builtin.m"

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);

#line 4766 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AT_2  = (MR_Box) AT;
#line 480 "table_builtin.m"
}
#line 477 "table_builtin.m"
  }
#line 341 "table_builtin.m"
}

#line 336 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_shortcut_1_p_0(
#line 336 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 336 "table_builtin.m"
{
#line 470 "table_builtin.m"
  {
#line 470 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 470 "table_builtin.m"
  }
#line 336 "table_builtin.m"
}

#line 334 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_2_p_0(
#line 334 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 334 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_2)
#line 334 "table_builtin.m"
{
#line 463 "table_builtin.m"
  {
#line 463 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 466 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_get_answer_block_2_p_0

	MR_TrieNode T;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 466 "table_builtin.m"

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);

#line 4822 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_2  = (MR_Box) AnswerBlock;
#line 466 "table_builtin.m"
}
#line 463 "table_builtin.m"
  }
#line 334 "table_builtin.m"
}

#line 330 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0(
#line 330 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 330 "table_builtin.m"
{
#line 456 "table_builtin.m"
  {
#line 456 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 459 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 459 "table_builtin.m"

    MR_tbl_memo_fill_answer_block_shortcut(T);

#line 4858 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 459 "table_builtin.m"
}
#line 456 "table_builtin.m"
  }
#line 330 "table_builtin.m"
}

#line 328 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_create_answer_block_3_p_0(
#line 328 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 328 "table_builtin.m"
  MR_Integer mercury__table_builtin__Size_2,
#line 328 "table_builtin.m"
  MR_Box * mercury__table_builtin__AnswerBlock_3)
#line 328 "table_builtin.m"
{
#line 448 "table_builtin.m"
  {
#line 448 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 451 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_create_answer_block_3_p_0

	MR_TrieNode T;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
	Size =  mercury__table_builtin__Size_2 ;
		{
#line 451 "table_builtin.m"

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);

#line 4901 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__AnswerBlock_3  = (MR_Box) AnswerBlock;
#line 451 "table_builtin.m"
}
#line 448 "table_builtin.m"
  }
#line 328 "table_builtin.m"
}

#line 322 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0(
#line 322 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 322 "table_builtin.m"
{
#line 441 "table_builtin.m"
  {
#line 441 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 444 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 444 "table_builtin.m"

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);

#line 4937 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 444 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 441 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 441 "table_builtin.m"
  }
#line 322 "table_builtin.m"
}

#line 317 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0(
#line 317 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 317 "table_builtin.m"
{
#line 434 "table_builtin.m"
  {
#line 434 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 437 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 437 "table_builtin.m"

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);

#line 4975 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 437 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 434 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 434 "table_builtin.m"
  }
#line 317 "table_builtin.m"
}

#line 313 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0(
#line 313 "table_builtin.m"
  MR_Box mercury__table_builtin__R_1)
#line 313 "table_builtin.m"
{
#line 427 "table_builtin.m"
  {
#line 427 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 430 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) mercury__table_builtin__R_1 ;
		{
#line 430 "table_builtin.m"

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);

#line 5013 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 430 "table_builtin.m"
}
#line 427 "table_builtin.m"
  }
#line 313 "table_builtin.m"
}

#line 309 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0(
#line 309 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 309 "table_builtin.m"
{
#line 420 "table_builtin.m"
  {
#line 420 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 423 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 423 "table_builtin.m"

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);

#line 5048 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 423 "table_builtin.m"
}
#line 420 "table_builtin.m"
  }
#line 309 "table_builtin.m"
}

#line 305 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_failed_1_p_0(
#line 305 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 305 "table_builtin.m"
{
#line 413 "table_builtin.m"
  {
#line 413 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 416 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_failed_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 416 "table_builtin.m"

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);

#line 5083 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 416 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 413 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 413 "table_builtin.m"
  }
#line 305 "table_builtin.m"
}

#line 300 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_non_setup_3_p_0(
#line 300 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 300 "table_builtin.m"
  MR_Box * mercury__table_builtin__Record_2,
#line 300 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 300 "table_builtin.m"
{
#line 406 "table_builtin.m"
  {
#line 406 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 409 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_setup_3_p_0

	MR_TrieNode T0;
	MR_MemoNonRecordPtr Record;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 409 "table_builtin.m"

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);

#line 5127 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Record_2  = (MR_Box) Record;
	 *mercury__table_builtin__Status_3  = Status;
#line 409 "table_builtin.m"
}
#line 406 "table_builtin.m"
  }
#line 300 "table_builtin.m"
}

#line 297 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0(
#line 297 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 297 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 297 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 297 "table_builtin.m"
{
#line 399 "table_builtin.m"
  {
#line 399 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 402 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 402 "table_builtin.m"

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);

#line 5170 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 402 "table_builtin.m"
}
#line 399 "table_builtin.m"
  }
#line 297 "table_builtin.m"
}

#line 294 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_2_p_0(
#line 294 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 294 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 294 "table_builtin.m"
{
#line 392 "table_builtin.m"
  {
#line 392 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 395 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 395 "table_builtin.m"

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5210 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 395 "table_builtin.m"
}
#line 392 "table_builtin.m"
  }
#line 294 "table_builtin.m"
}

#line 291 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0(
#line 291 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 291 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 291 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 291 "table_builtin.m"
{
#line 385 "table_builtin.m"
  {
#line 385 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 388 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 388 "table_builtin.m"

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);

#line 5252 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 388 "table_builtin.m"
}
#line 385 "table_builtin.m"
  }
#line 291 "table_builtin.m"
}

#line 288 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_memo_det_setup_2_p_0(
#line 288 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 288 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 288 "table_builtin.m"
{
#line 378 "table_builtin.m"
  {
#line 378 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 381 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 381 "table_builtin.m"

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5292 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 381 "table_builtin.m"
}
#line 378 "table_builtin.m"
  }
#line 288 "table_builtin.m"
}

#line 177 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0(
#line 177 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 177 "table_builtin.m"
{
#line 213 "table_builtin.m"
  {
#line 213 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 216 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 216 "table_builtin.m"

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);

#line 5328 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 216 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 213 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 213 "table_builtin.m"
  }
#line 177 "table_builtin.m"
}

#line 171 "table_builtin.m"
MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0(
#line 171 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 171 "table_builtin.m"
{
#line 206 "table_builtin.m"
  {
#line 206 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 209 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 209 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);

#line 5366 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 209 "table_builtin.m"
mercury__table_builtin__succeeded  = MR_FALSE;
}
#line 206 "table_builtin.m"
    return mercury__table_builtin__succeeded;
#line 206 "table_builtin.m"
  }
#line 171 "table_builtin.m"
}

#line 166 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_1_p_0(
#line 166 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1)
#line 166 "table_builtin.m"
{
#line 199 "table_builtin.m"
  {
#line 199 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 202 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 202 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);

#line 5404 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 202 "table_builtin.m"
}
#line 199 "table_builtin.m"
  }
#line 166 "table_builtin.m"
}

#line 160 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_setup_shortcut_3_p_0(
#line 160 "table_builtin.m"
  MR_Box mercury__table_builtin__T0_1,
#line 160 "table_builtin.m"
  MR_Box * mercury__table_builtin__T_2,
#line 160 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_3)
#line 160 "table_builtin.m"
{
#line 192 "table_builtin.m"
  {
#line 192 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 195 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) mercury__table_builtin__T0_1 ;
		{
#line 195 "table_builtin.m"

    MR_tbl_loop_setup_shortcut(T0, T, Status);

#line 5445 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__T_2  = (MR_Box) T;
	 *mercury__table_builtin__Status_3  = Status;
#line 195 "table_builtin.m"
}
#line 192 "table_builtin.m"
  }
#line 160 "table_builtin.m"
}

#line 158 "table_builtin.m"
void MR_CALL 
mercury__table_builtin__table_loop_setup_2_p_0(
#line 158 "table_builtin.m"
  MR_Box mercury__table_builtin__T_1,
#line 158 "table_builtin.m"
  MR_Word * mercury__table_builtin__Status_2)
#line 158 "table_builtin.m"
{
#line 185 "table_builtin.m"
  {
#line 185 "table_builtin.m"
    MR_bool mercury__table_builtin__succeeded;

#line 188 "table_builtin.m"
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) mercury__table_builtin__T_1 ;
		{
#line 188 "table_builtin.m"

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);

#line 5485 "table_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__table_builtin__Status_2  = Status;
#line 188 "table_builtin.m"
}
#line 185 "table_builtin.m"
  }
#line 158 "table_builtin.m"
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
