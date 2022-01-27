/*
** Automatically generated from `profiling_builtin.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module profiling_builtin. */
/* :- implementation. */

/*
INIT mercury__profiling_builtin__init
ENDINIT
*/

#include "profiling_builtin.mih"


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
#include "string.to_string.mih"




#line 89 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0[2];

#line 92 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0;

#line 95 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0[1];

#line 98 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0[1];

#line 101 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0[1];

#line 104 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0[1];

#line 107 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0[3];

#line 110 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0;

#line 113 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0[1];

#line 116 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0[1];

#line 119 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0[1];

#line 122 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0[1];

#line 125 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0[4];

#line 128 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0;

#line 131 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0[1];

#line 134 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0[1];

#line 137 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0[1];

#line 140 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0[1];

#line 143 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0[5];

#line 146 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0;

#line 149 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0[1];

#line 152 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0[1];

#line 155 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0[1];

#line 158 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0[1];

#line 161 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0[6];

#line 164 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0;

#line 167 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0[1];

#line 170 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0[1];

#line 173 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0[1];

#line 176 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0[1];

#line 179 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0[7];

#line 182 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0;

#line 185 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0[1];

#line 188 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0[1];

#line 191 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0[1];

#line 194 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0[1];

#line 197 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0[8];

#line 200 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0;

#line 203 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0[1];

#line 206 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0[1];

#line 209 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0[1];

#line 212 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0[1];

#line 215 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0[9];

#line 218 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0;

#line 221 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0[1];

#line 224 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0[1];

#line 227 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0[1];

#line 230 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0[1];

#line 233 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001(
#line 236 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 238 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 241 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001(
#line 244 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 246 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 248 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 251 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001(
#line 254 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 256 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 259 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001(
#line 262 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 264 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 266 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 269 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001(
#line 272 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 274 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 277 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001(
#line 280 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 282 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 284 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 287 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001(
#line 290 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 292 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 295 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001(
#line 298 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 300 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 302 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 305 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001(
#line 308 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 310 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 313 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001(
#line 316 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 318 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 320 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 323 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001(
#line 326 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 328 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 331 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001(
#line 334 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 336 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 338 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 341 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001(
#line 344 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 346 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 349 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001(
#line 352 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 354 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 356 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 359 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001(
#line 362 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 364 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 367 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001(
#line 370 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 372 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 374 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 377 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001(
#line 380 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 382 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 385 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001(
#line 388 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 390 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 392 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 395 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001(
#line 398 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 400 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 403 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001(
#line 406 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 408 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 410 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 413 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0_10001(
#line 416 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 418 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2);

#line 421 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0_10001(
#line 424 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 426 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 428 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__profiling_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__profiling_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__profiling_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__profiling_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "profiling_builtin.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 798 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_dynamic",
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

#line 819 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 825 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0 = {
  (MR_String) "call_site_nums_2",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0,
  NULL,
  NULL,
  NULL
};

#line 840 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0
};

#line 845 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0
  }
};

#line 854 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0
};

#line 859 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0[1] = {
  (MR_Integer) 0
};

#line 864 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_2_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_2",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0
};

#line 885 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 892 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0 = {
  (MR_String) "call_site_nums_3",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0,
  NULL,
  NULL,
  NULL
};

#line 907 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0
};

#line 912 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0
  }
};

#line 921 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0
};

#line 926 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0[1] = {
  (MR_Integer) 0
};

#line 931 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_3_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_3",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0
};

#line 952 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 960 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0 = {
  (MR_String) "call_site_nums_4",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0,
  NULL,
  NULL,
  NULL
};

#line 975 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0
};

#line 980 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0
  }
};

#line 989 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0
};

#line 994 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0[1] = {
  (MR_Integer) 0
};

#line 999 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_4_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_4",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0
};

#line 1020 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1029 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0 = {
  (MR_String) "call_site_nums_5",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0,
  NULL,
  NULL,
  NULL
};

#line 1044 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0
};

#line 1049 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0
  }
};

#line 1058 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0
};

#line 1063 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0[1] = {
  (MR_Integer) 0
};

#line 1068 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_5_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_5",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0
};

#line 1089 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1099 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0 = {
  (MR_String) "call_site_nums_6",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0,
  NULL,
  NULL,
  NULL
};

#line 1114 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0
};

#line 1119 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0
  }
};

#line 1128 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0
};

#line 1133 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0[1] = {
  (MR_Integer) 0
};

#line 1138 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_6_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_6",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0
};

#line 1159 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1170 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0 = {
  (MR_String) "call_site_nums_7",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0,
  NULL,
  NULL,
  NULL
};

#line 1185 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0
};

#line 1190 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0
  }
};

#line 1199 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0
};

#line 1204 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0[1] = {
  (MR_Integer) 0
};

#line 1209 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_7_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_7",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0
};

#line 1230 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1242 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0 = {
  (MR_String) "call_site_nums_8",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0,
  NULL,
  NULL,
  NULL
};

#line 1257 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0
};

#line 1262 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0
  }
};

#line 1271 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0
};

#line 1276 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0[1] = {
  (MR_Integer) 0
};

#line 1281 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_8_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_8",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0
};

#line 1302 "profiling_builtin.c"
static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1315 "profiling_builtin.c"
static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0 = {
  (MR_String) "call_site_nums_9",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0,
  NULL,
  NULL,
  NULL
};

#line 1330 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0
};

#line 1335 "profiling_builtin.c"
static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0
  }
};

#line 1344 "profiling_builtin.c"
static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0[1] = {
  &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0
};

#line 1349 "profiling_builtin.c"
static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0[1] = {
  (MR_Integer) 0
};

#line 1354 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_9_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_9",
  {
    mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0
  },
  {
    mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0
};

#line 1375 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_dynamic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "proc_dynamic",
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

#line 1396 "profiling_builtin.c"
const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____proc_layout_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____proc_layout_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "proc_layout",
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

#line 1417 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001(
#line 1420 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1422 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1424 "profiling_builtin.c"
{
#line 1426 "profiling_builtin.c"
  {
#line 1428 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1431 "profiling_builtin.c"
    {
#line 1433 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_dynamic_0_0(((MR_Box) mercury__profiling_builtin__wrapper_arg_1), ((MR_Box) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1436 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1438 "profiling_builtin.c"
  }
#line 1440 "profiling_builtin.c"
}

#line 1443 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001(
#line 1446 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1448 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1450 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1452 "profiling_builtin.c"
{
#line 1454 "profiling_builtin.c"
  {
#line 1456 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1459 "profiling_builtin.c"
    {
#line 1461 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_dynamic_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__profiling_builtin__wrapper_arg_2), ((MR_Box) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1464 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1466 "profiling_builtin.c"
  }
#line 1468 "profiling_builtin.c"
}

#line 1471 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001(
#line 1474 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1476 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1478 "profiling_builtin.c"
{
#line 1480 "profiling_builtin.c"
  {
#line 1482 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1485 "profiling_builtin.c"
    {
#line 1487 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_2_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1490 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1492 "profiling_builtin.c"
  }
#line 1494 "profiling_builtin.c"
}

#line 1497 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001(
#line 1500 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1502 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1504 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1506 "profiling_builtin.c"
{
#line 1508 "profiling_builtin.c"
  {
#line 1510 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1513 "profiling_builtin.c"
    {
#line 1515 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_2_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1518 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1520 "profiling_builtin.c"
  }
#line 1522 "profiling_builtin.c"
}

#line 1525 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001(
#line 1528 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1530 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1532 "profiling_builtin.c"
{
#line 1534 "profiling_builtin.c"
  {
#line 1536 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1539 "profiling_builtin.c"
    {
#line 1541 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_3_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1544 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1546 "profiling_builtin.c"
  }
#line 1548 "profiling_builtin.c"
}

#line 1551 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001(
#line 1554 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1556 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1558 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1560 "profiling_builtin.c"
{
#line 1562 "profiling_builtin.c"
  {
#line 1564 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1567 "profiling_builtin.c"
    {
#line 1569 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_3_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1572 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1574 "profiling_builtin.c"
  }
#line 1576 "profiling_builtin.c"
}

#line 1579 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001(
#line 1582 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1584 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1586 "profiling_builtin.c"
{
#line 1588 "profiling_builtin.c"
  {
#line 1590 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1593 "profiling_builtin.c"
    {
#line 1595 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_4_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1598 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1600 "profiling_builtin.c"
  }
#line 1602 "profiling_builtin.c"
}

#line 1605 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001(
#line 1608 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1610 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1612 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1614 "profiling_builtin.c"
{
#line 1616 "profiling_builtin.c"
  {
#line 1618 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1621 "profiling_builtin.c"
    {
#line 1623 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_4_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1626 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1628 "profiling_builtin.c"
  }
#line 1630 "profiling_builtin.c"
}

#line 1633 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001(
#line 1636 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1638 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1640 "profiling_builtin.c"
{
#line 1642 "profiling_builtin.c"
  {
#line 1644 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1647 "profiling_builtin.c"
    {
#line 1649 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_5_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1652 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1654 "profiling_builtin.c"
  }
#line 1656 "profiling_builtin.c"
}

#line 1659 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001(
#line 1662 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1664 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1666 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1668 "profiling_builtin.c"
{
#line 1670 "profiling_builtin.c"
  {
#line 1672 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1675 "profiling_builtin.c"
    {
#line 1677 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_5_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1680 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1682 "profiling_builtin.c"
  }
#line 1684 "profiling_builtin.c"
}

#line 1687 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001(
#line 1690 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1692 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1694 "profiling_builtin.c"
{
#line 1696 "profiling_builtin.c"
  {
#line 1698 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1701 "profiling_builtin.c"
    {
#line 1703 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_6_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1706 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1708 "profiling_builtin.c"
  }
#line 1710 "profiling_builtin.c"
}

#line 1713 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001(
#line 1716 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1718 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1720 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1722 "profiling_builtin.c"
{
#line 1724 "profiling_builtin.c"
  {
#line 1726 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1729 "profiling_builtin.c"
    {
#line 1731 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_6_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1734 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1736 "profiling_builtin.c"
  }
#line 1738 "profiling_builtin.c"
}

#line 1741 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001(
#line 1744 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1746 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1748 "profiling_builtin.c"
{
#line 1750 "profiling_builtin.c"
  {
#line 1752 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1755 "profiling_builtin.c"
    {
#line 1757 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_7_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1760 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1762 "profiling_builtin.c"
  }
#line 1764 "profiling_builtin.c"
}

#line 1767 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001(
#line 1770 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1772 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1774 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1776 "profiling_builtin.c"
{
#line 1778 "profiling_builtin.c"
  {
#line 1780 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1783 "profiling_builtin.c"
    {
#line 1785 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_7_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1788 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1790 "profiling_builtin.c"
  }
#line 1792 "profiling_builtin.c"
}

#line 1795 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001(
#line 1798 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1800 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1802 "profiling_builtin.c"
{
#line 1804 "profiling_builtin.c"
  {
#line 1806 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1809 "profiling_builtin.c"
    {
#line 1811 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_8_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1814 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1816 "profiling_builtin.c"
  }
#line 1818 "profiling_builtin.c"
}

#line 1821 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001(
#line 1824 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1826 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1828 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1830 "profiling_builtin.c"
{
#line 1832 "profiling_builtin.c"
  {
#line 1834 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1837 "profiling_builtin.c"
    {
#line 1839 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_8_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1842 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1844 "profiling_builtin.c"
  }
#line 1846 "profiling_builtin.c"
}

#line 1849 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001(
#line 1852 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1854 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1856 "profiling_builtin.c"
{
#line 1858 "profiling_builtin.c"
  {
#line 1860 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1863 "profiling_builtin.c"
    {
#line 1865 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____call_site_nums_9_0_0(((MR_Word) mercury__profiling_builtin__wrapper_arg_1), ((MR_Word) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1868 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1870 "profiling_builtin.c"
  }
#line 1872 "profiling_builtin.c"
}

#line 1875 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001(
#line 1878 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1880 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1882 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1884 "profiling_builtin.c"
{
#line 1886 "profiling_builtin.c"
  {
#line 1888 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1891 "profiling_builtin.c"
    {
#line 1893 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____call_site_nums_9_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Word) mercury__profiling_builtin__wrapper_arg_2), ((MR_Word) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1896 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1898 "profiling_builtin.c"
  }
#line 1900 "profiling_builtin.c"
}

#line 1903 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001(
#line 1906 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1908 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1910 "profiling_builtin.c"
{
#line 1912 "profiling_builtin.c"
  {
#line 1914 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1917 "profiling_builtin.c"
    {
#line 1919 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____proc_dynamic_0_0(((MR_Box) mercury__profiling_builtin__wrapper_arg_1), ((MR_Box) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1922 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1924 "profiling_builtin.c"
  }
#line 1926 "profiling_builtin.c"
}

#line 1929 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001(
#line 1932 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1934 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1936 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1938 "profiling_builtin.c"
{
#line 1940 "profiling_builtin.c"
  {
#line 1942 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1945 "profiling_builtin.c"
    {
#line 1947 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____proc_dynamic_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__profiling_builtin__wrapper_arg_2), ((MR_Box) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 1950 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 1952 "profiling_builtin.c"
  }
#line 1954 "profiling_builtin.c"
}

#line 1957 "profiling_builtin.c"
static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0_10001(
#line 1960 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_1,
#line 1962 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2)
#line 1964 "profiling_builtin.c"
{
#line 1966 "profiling_builtin.c"
  {
#line 1968 "profiling_builtin.c"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1971 "profiling_builtin.c"
    {
#line 1973 "profiling_builtin.c"
      mercury__profiling_builtin__succeeded = mercury__profiling_builtin____Unify____proc_layout_0_0(((MR_Box) mercury__profiling_builtin__wrapper_arg_1), ((MR_Box) mercury__profiling_builtin__wrapper_arg_2));
    }
#line 1976 "profiling_builtin.c"
    return mercury__profiling_builtin__succeeded;
#line 1978 "profiling_builtin.c"
  }
#line 1980 "profiling_builtin.c"
}

#line 1983 "profiling_builtin.c"
static void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0_10001(
#line 1986 "profiling_builtin.c"
  MR_Box * mercury__profiling_builtin__wrapper_arg_1,
#line 1988 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_2,
#line 1990 "profiling_builtin.c"
  MR_Box mercury__profiling_builtin__wrapper_arg_3)
#line 1992 "profiling_builtin.c"
{
#line 1994 "profiling_builtin.c"
  {
#line 1996 "profiling_builtin.c"
    MR_Word mercury__profiling_builtin__conv0_HeadVar__1_1;

#line 1999 "profiling_builtin.c"
    {
#line 2001 "profiling_builtin.c"
      mercury__profiling_builtin____Compare____proc_layout_0_0(&mercury__profiling_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__profiling_builtin__wrapper_arg_2), ((MR_Box) mercury__profiling_builtin__wrapper_arg_3));
    }
#line 2004 "profiling_builtin.c"
    *mercury__profiling_builtin__wrapper_arg_1 = ((MR_Box) (mercury__profiling_builtin__conv0_HeadVar__1_1));
#line 2006 "profiling_builtin.c"
  }
#line 2008 "profiling_builtin.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__profiling_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__profiling_builtin__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 256 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0(
#line 256 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 256 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2,
#line 256 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_3)
#line 256 "profiling_builtin.m"
{
#line 256 "profiling_builtin.m"
  {
#line 256 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 256 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;
#line 256 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__profiling_builtin__HeadVar__3_3;

#line 256 "profiling_builtin.m"
    {
#line 256 "profiling_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__profiling_builtin__HeadVar__1_1, mercury__profiling_builtin__Cast_HeadVar1_4, mercury__profiling_builtin__Cast_HeadVar2_5);
#line 256 "profiling_builtin.m"
      return;
    }
#line 256 "profiling_builtin.m"
  }
#line 256 "profiling_builtin.m"
}

#line 256 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0(
#line 256 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_1,
#line 256 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2)
#line 256 "profiling_builtin.m"
{
#line 256 "profiling_builtin.m"
  {
#line 256 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 256 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__profiling_builtin__HeadVar__1_1;
#line 256 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;

#line 256 "profiling_builtin.m"
    {
#line 256 "profiling_builtin.m"
      return mercury__profiling_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__profiling_builtin__Cast_HeadVar1_3, mercury__profiling_builtin__Cast_HeadVar2_4);
    }
#line 256 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 256 "profiling_builtin.m"
  }
#line 256 "profiling_builtin.m"
}

#line 257 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____proc_dynamic_0_0(
#line 257 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 257 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2,
#line 257 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_3)
#line 257 "profiling_builtin.m"
{
#line 257 "profiling_builtin.m"
  {
#line 257 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 257 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;
#line 257 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__profiling_builtin__HeadVar__3_3;

#line 257 "profiling_builtin.m"
    {
#line 257 "profiling_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__profiling_builtin__HeadVar__1_1, mercury__profiling_builtin__Cast_HeadVar1_4, mercury__profiling_builtin__Cast_HeadVar2_5);
#line 257 "profiling_builtin.m"
      return;
    }
#line 257 "profiling_builtin.m"
  }
#line 257 "profiling_builtin.m"
}

#line 257 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0(
#line 257 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_1,
#line 257 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2)
#line 257 "profiling_builtin.m"
{
#line 257 "profiling_builtin.m"
  {
#line 257 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 257 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__profiling_builtin__HeadVar__1_1;
#line 257 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;

#line 257 "profiling_builtin.m"
    {
#line 257 "profiling_builtin.m"
      return mercury__profiling_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__profiling_builtin__Cast_HeadVar1_3, mercury__profiling_builtin__Cast_HeadVar2_4);
    }
#line 257 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 257 "profiling_builtin.m"
  }
#line 257 "profiling_builtin.m"
}

#line 139 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_9_0_0(
#line 139 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 139 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 139 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 139 "profiling_builtin.m"
{
#line 139 "profiling_builtin.m"
  {
#line 139 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 139 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_30 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 139 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_31 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 139 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_30 == mercury__profiling_builtin__CastY_31);
#line 139 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 2176 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "profiling_builtin.m"
    else
#line 139 "profiling_builtin.m"
      {
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 7)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 8)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 4)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 5)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 6)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 7)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 8)));
#line 139 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_22_22;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_13_13);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_22_22 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_13_13);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_22_22 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_22_22 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 2243 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_22_22 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_22_22;
#line 139 "profiling_builtin.m"
        else
#line 139 "profiling_builtin.m"
          {
#line 139 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_23_23;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_14_14);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_23_23 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_14_14);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_23_23 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_23_23 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2280 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_23_23 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_23_23;
#line 139 "profiling_builtin.m"
            else
#line 139 "profiling_builtin.m"
              {
#line 139 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_24_24;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_15_15);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_24_24 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_15_15);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_24_24 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_24_24 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 2317 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_24_24 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_24_24;
#line 139 "profiling_builtin.m"
                else
#line 139 "profiling_builtin.m"
                  {
#line 139 "profiling_builtin.m"
                    MR_Word mercury__profiling_builtin__V_25_25;

#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_16_16);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      mercury__profiling_builtin__V_25_25 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_16_16);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          mercury__profiling_builtin__V_25_25 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__profiling_builtin__V_25_25 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 2354 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_25_25 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_25_25;
#line 139 "profiling_builtin.m"
                    else
#line 139 "profiling_builtin.m"
                      {
#line 139 "profiling_builtin.m"
                        MR_Word mercury__profiling_builtin__V_26_26;

#line 66 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 < mercury__profiling_builtin__V_17_17);
#line 69 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                          mercury__profiling_builtin__V_26_26 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_17_17);
#line 74 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                              mercury__profiling_builtin__V_26_26 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              mercury__profiling_builtin__V_26_26 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 2391 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_26_26 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_26_26;
#line 139 "profiling_builtin.m"
                        else
#line 139 "profiling_builtin.m"
                          {
#line 139 "profiling_builtin.m"
                            MR_Word mercury__profiling_builtin__V_27_27;

#line 66 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 < mercury__profiling_builtin__V_18_18);
#line 69 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                              mercury__profiling_builtin__V_27_27 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                            else
#line 74 "private_builtin.opt"
                              {
#line 71 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_18_18);
#line 74 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                  mercury__profiling_builtin__V_27_27 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                else
#line 75 "private_builtin.opt"
                                  mercury__profiling_builtin__V_27_27 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                              }
#line 2428 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_27_27 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_27_27;
#line 139 "profiling_builtin.m"
                            else
#line 139 "profiling_builtin.m"
                              {
#line 139 "profiling_builtin.m"
                                MR_Word mercury__profiling_builtin__V_28_28;

#line 66 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 < mercury__profiling_builtin__V_19_19);
#line 69 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                  mercury__profiling_builtin__V_28_28 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                else
#line 74 "private_builtin.opt"
                                  {
#line 71 "private_builtin.opt"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == mercury__profiling_builtin__V_19_19);
#line 74 "private_builtin.opt"
                                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                      mercury__profiling_builtin__V_28_28 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                    else
#line 75 "private_builtin.opt"
                                      mercury__profiling_builtin__V_28_28 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                  }
#line 2465 "profiling_builtin.c"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_28_28 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                                if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_28_28;
#line 139 "profiling_builtin.m"
                                else
#line 139 "profiling_builtin.m"
                                  {
#line 139 "profiling_builtin.m"
                                    MR_Word mercury__profiling_builtin__V_29_29;

#line 66 "private_builtin.opt"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 < mercury__profiling_builtin__V_20_20);
#line 69 "private_builtin.opt"
                                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                      mercury__profiling_builtin__V_29_29 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                    else
#line 74 "private_builtin.opt"
                                      {
#line 71 "private_builtin.opt"
                                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 == mercury__profiling_builtin__V_20_20);
#line 74 "private_builtin.opt"
                                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                          mercury__profiling_builtin__V_29_29 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                        else
#line 75 "private_builtin.opt"
                                          mercury__profiling_builtin__V_29_29 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                      }
#line 2502 "profiling_builtin.c"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_29_29 == (MR_Integer) 0);
#line 139 "profiling_builtin.m"
                                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 139 "profiling_builtin.m"
                                    if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_29_29;
#line 139 "profiling_builtin.m"
                                    else
#line 69 "private_builtin.opt"
                                      {
#line 66 "private_builtin.opt"
                                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_12_12 < mercury__profiling_builtin__V_21_21);
#line 69 "private_builtin.opt"
                                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                        else
#line 74 "private_builtin.opt"
                                          {
#line 71 "private_builtin.opt"
                                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_12_12 == mercury__profiling_builtin__V_21_21);
#line 74 "private_builtin.opt"
                                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                            else
#line 75 "private_builtin.opt"
                                              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                          }
#line 69 "private_builtin.opt"
                                      }
#line 139 "profiling_builtin.m"
                                  }
#line 139 "profiling_builtin.m"
                              }
#line 139 "profiling_builtin.m"
                          }
#line 139 "profiling_builtin.m"
                      }
#line 139 "profiling_builtin.m"
                  }
#line 139 "profiling_builtin.m"
              }
#line 139 "profiling_builtin.m"
          }
#line 139 "profiling_builtin.m"
      }
#line 139 "profiling_builtin.m"
  }
#line 139 "profiling_builtin.m"
}

#line 139 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0(
#line 139 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 139 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 139 "profiling_builtin.m"
{
#line 139 "profiling_builtin.m"
  {
#line 139 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 139 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_21 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 139 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_22 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 139 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_21 == mercury__profiling_builtin__CastY_22);
#line 139 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 139 "profiling_builtin.m"
    else
#line 139 "profiling_builtin.m"
      {
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 4)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 5)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 6)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 7)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 8)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 7)));
#line 139 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 8)));

#line 2624 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_12_12);
#line 139 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
          {
#line 2630 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_13_13);
#line 139 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
              {
#line 2636 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_14_14);
#line 139 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                  {
#line 2642 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_15_15);
#line 139 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                      {
#line 2648 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_16_16);
#line 139 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                          {
#line 2654 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_17_17);
#line 139 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                              {
#line 2660 "profiling_builtin.c"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_18_18);
#line 139 "profiling_builtin.m"
                                if (mercury__profiling_builtin__succeeded)
#line 139 "profiling_builtin.m"
                                  {
#line 2666 "profiling_builtin.c"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == mercury__profiling_builtin__V_19_19);
#line 139 "profiling_builtin.m"
                                    if (mercury__profiling_builtin__succeeded)
#line 2670 "profiling_builtin.c"
                                      mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 == mercury__profiling_builtin__V_20_20);
#line 139 "profiling_builtin.m"
                                  }
#line 139 "profiling_builtin.m"
                              }
#line 139 "profiling_builtin.m"
                          }
#line 139 "profiling_builtin.m"
                      }
#line 139 "profiling_builtin.m"
                  }
#line 139 "profiling_builtin.m"
              }
#line 139 "profiling_builtin.m"
          }
#line 139 "profiling_builtin.m"
      }
#line 139 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 139 "profiling_builtin.m"
  }
#line 139 "profiling_builtin.m"
}

#line 136 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0(
#line 136 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 136 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 136 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 136 "profiling_builtin.m"
{
#line 136 "profiling_builtin.m"
  {
#line 136 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 136 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_27 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 136 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_28 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 136 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_27 == mercury__profiling_builtin__CastY_28);
#line 136 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 2719 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 136 "profiling_builtin.m"
    else
#line 136 "profiling_builtin.m"
      {
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 7)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 4)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 5)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 6)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 7)));
#line 136 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_20_20;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_12_12);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_20_20 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_12_12);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_20_20 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_20_20 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 2782 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_20_20 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_20_20;
#line 136 "profiling_builtin.m"
        else
#line 136 "profiling_builtin.m"
          {
#line 136 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_21_21;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_13_13);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_13_13);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2819 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_21_21 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_21_21;
#line 136 "profiling_builtin.m"
            else
#line 136 "profiling_builtin.m"
              {
#line 136 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_22_22;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_14_14);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_22_22 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_14_14);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_22_22 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_22_22 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 2856 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_22_22 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_22_22;
#line 136 "profiling_builtin.m"
                else
#line 136 "profiling_builtin.m"
                  {
#line 136 "profiling_builtin.m"
                    MR_Word mercury__profiling_builtin__V_23_23;

#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_15_15);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      mercury__profiling_builtin__V_23_23 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_15_15);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          mercury__profiling_builtin__V_23_23 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__profiling_builtin__V_23_23 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 2893 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_23_23 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_23_23;
#line 136 "profiling_builtin.m"
                    else
#line 136 "profiling_builtin.m"
                      {
#line 136 "profiling_builtin.m"
                        MR_Word mercury__profiling_builtin__V_24_24;

#line 66 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 < mercury__profiling_builtin__V_16_16);
#line 69 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                          mercury__profiling_builtin__V_24_24 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_16_16);
#line 74 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                              mercury__profiling_builtin__V_24_24 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              mercury__profiling_builtin__V_24_24 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 2930 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_24_24 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
                        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_24_24;
#line 136 "profiling_builtin.m"
                        else
#line 136 "profiling_builtin.m"
                          {
#line 136 "profiling_builtin.m"
                            MR_Word mercury__profiling_builtin__V_25_25;

#line 66 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 < mercury__profiling_builtin__V_17_17);
#line 69 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                              mercury__profiling_builtin__V_25_25 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                            else
#line 74 "private_builtin.opt"
                              {
#line 71 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_17_17);
#line 74 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                  mercury__profiling_builtin__V_25_25 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                else
#line 75 "private_builtin.opt"
                                  mercury__profiling_builtin__V_25_25 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                              }
#line 2967 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_25_25 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
                            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_25_25;
#line 136 "profiling_builtin.m"
                            else
#line 136 "profiling_builtin.m"
                              {
#line 136 "profiling_builtin.m"
                                MR_Word mercury__profiling_builtin__V_26_26;

#line 66 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 < mercury__profiling_builtin__V_18_18);
#line 69 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                  mercury__profiling_builtin__V_26_26 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                else
#line 74 "private_builtin.opt"
                                  {
#line 71 "private_builtin.opt"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == mercury__profiling_builtin__V_18_18);
#line 74 "private_builtin.opt"
                                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                      mercury__profiling_builtin__V_26_26 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                    else
#line 75 "private_builtin.opt"
                                      mercury__profiling_builtin__V_26_26 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                  }
#line 3004 "profiling_builtin.c"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_26_26 == (MR_Integer) 0);
#line 136 "profiling_builtin.m"
                                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 136 "profiling_builtin.m"
                                if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_26_26;
#line 136 "profiling_builtin.m"
                                else
#line 69 "private_builtin.opt"
                                  {
#line 66 "private_builtin.opt"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 < mercury__profiling_builtin__V_19_19);
#line 69 "private_builtin.opt"
                                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                    else
#line 74 "private_builtin.opt"
                                      {
#line 71 "private_builtin.opt"
                                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 == mercury__profiling_builtin__V_19_19);
#line 74 "private_builtin.opt"
                                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                        else
#line 75 "private_builtin.opt"
                                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                      }
#line 69 "private_builtin.opt"
                                  }
#line 136 "profiling_builtin.m"
                              }
#line 136 "profiling_builtin.m"
                          }
#line 136 "profiling_builtin.m"
                      }
#line 136 "profiling_builtin.m"
                  }
#line 136 "profiling_builtin.m"
              }
#line 136 "profiling_builtin.m"
          }
#line 136 "profiling_builtin.m"
      }
#line 136 "profiling_builtin.m"
  }
#line 136 "profiling_builtin.m"
}

#line 136 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0(
#line 136 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 136 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 136 "profiling_builtin.m"
{
#line 136 "profiling_builtin.m"
  {
#line 136 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 136 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_19 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 136 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_20 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 136 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_19 == mercury__profiling_builtin__CastY_20);
#line 136 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 136 "profiling_builtin.m"
    else
#line 136 "profiling_builtin.m"
      {
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 4)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 5)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 6)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 7)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));
#line 136 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 7)));

#line 3120 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_11_11);
#line 136 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
          {
#line 3126 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_12_12);
#line 136 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
              {
#line 3132 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_13_13);
#line 136 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                  {
#line 3138 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_14_14);
#line 136 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                      {
#line 3144 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_15_15);
#line 136 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                          {
#line 3150 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_16_16);
#line 136 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 136 "profiling_builtin.m"
                              {
#line 3156 "profiling_builtin.c"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_17_17);
#line 136 "profiling_builtin.m"
                                if (mercury__profiling_builtin__succeeded)
#line 3160 "profiling_builtin.c"
                                  mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == mercury__profiling_builtin__V_18_18);
#line 136 "profiling_builtin.m"
                              }
#line 136 "profiling_builtin.m"
                          }
#line 136 "profiling_builtin.m"
                      }
#line 136 "profiling_builtin.m"
                  }
#line 136 "profiling_builtin.m"
              }
#line 136 "profiling_builtin.m"
          }
#line 136 "profiling_builtin.m"
      }
#line 136 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 136 "profiling_builtin.m"
  }
#line 136 "profiling_builtin.m"
}

#line 133 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0(
#line 133 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 133 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 133 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 133 "profiling_builtin.m"
{
#line 133 "profiling_builtin.m"
  {
#line 133 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 133 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_24 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 133 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_25 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 133 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_24 == mercury__profiling_builtin__CastY_25);
#line 133 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 3207 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "profiling_builtin.m"
    else
#line 133 "profiling_builtin.m"
      {
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 4)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 5)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 6)));
#line 133 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_18_18;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_11_11);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_18_18 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_11_11);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_18_18 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_18_18 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 3266 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_18_18 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_18_18;
#line 133 "profiling_builtin.m"
        else
#line 133 "profiling_builtin.m"
          {
#line 133 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_19_19;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_12_12);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_19_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_12_12);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_19_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_19_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 3303 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_19_19 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_19_19;
#line 133 "profiling_builtin.m"
            else
#line 133 "profiling_builtin.m"
              {
#line 133 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_20_20;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_13_13);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_20_20 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_13_13);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_20_20 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_20_20 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 3340 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_20_20 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_20_20;
#line 133 "profiling_builtin.m"
                else
#line 133 "profiling_builtin.m"
                  {
#line 133 "profiling_builtin.m"
                    MR_Word mercury__profiling_builtin__V_21_21;

#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_14_14);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      mercury__profiling_builtin__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_14_14);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          mercury__profiling_builtin__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__profiling_builtin__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 3377 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_21_21 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_21_21;
#line 133 "profiling_builtin.m"
                    else
#line 133 "profiling_builtin.m"
                      {
#line 133 "profiling_builtin.m"
                        MR_Word mercury__profiling_builtin__V_22_22;

#line 66 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 < mercury__profiling_builtin__V_15_15);
#line 69 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                          mercury__profiling_builtin__V_22_22 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_15_15);
#line 74 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                              mercury__profiling_builtin__V_22_22 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              mercury__profiling_builtin__V_22_22 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 3414 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_22_22 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
                        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_22_22;
#line 133 "profiling_builtin.m"
                        else
#line 133 "profiling_builtin.m"
                          {
#line 133 "profiling_builtin.m"
                            MR_Word mercury__profiling_builtin__V_23_23;

#line 66 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 < mercury__profiling_builtin__V_16_16);
#line 69 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                              mercury__profiling_builtin__V_23_23 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                            else
#line 74 "private_builtin.opt"
                              {
#line 71 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_16_16);
#line 74 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                  mercury__profiling_builtin__V_23_23 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                else
#line 75 "private_builtin.opt"
                                  mercury__profiling_builtin__V_23_23 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                              }
#line 3451 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_23_23 == (MR_Integer) 0);
#line 133 "profiling_builtin.m"
                            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 133 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_23_23;
#line 133 "profiling_builtin.m"
                            else
#line 69 "private_builtin.opt"
                              {
#line 66 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 < mercury__profiling_builtin__V_17_17);
#line 69 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                else
#line 74 "private_builtin.opt"
                                  {
#line 71 "private_builtin.opt"
                                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == mercury__profiling_builtin__V_17_17);
#line 74 "private_builtin.opt"
                                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                    else
#line 75 "private_builtin.opt"
                                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                  }
#line 69 "private_builtin.opt"
                              }
#line 133 "profiling_builtin.m"
                          }
#line 133 "profiling_builtin.m"
                      }
#line 133 "profiling_builtin.m"
                  }
#line 133 "profiling_builtin.m"
              }
#line 133 "profiling_builtin.m"
          }
#line 133 "profiling_builtin.m"
      }
#line 133 "profiling_builtin.m"
  }
#line 133 "profiling_builtin.m"
}

#line 133 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0(
#line 133 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 133 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 133 "profiling_builtin.m"
{
#line 133 "profiling_builtin.m"
  {
#line 133 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 133 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_17 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 133 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_18 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 133 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_17 == mercury__profiling_builtin__CastY_18);
#line 133 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 133 "profiling_builtin.m"
    else
#line 133 "profiling_builtin.m"
      {
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 4)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 5)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 6)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 133 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 6)));

#line 3561 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_10_10);
#line 133 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
          {
#line 3567 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_11_11);
#line 133 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
              {
#line 3573 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_12_12);
#line 133 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                  {
#line 3579 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_13_13);
#line 133 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                      {
#line 3585 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_14_14);
#line 133 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 133 "profiling_builtin.m"
                          {
#line 3591 "profiling_builtin.c"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_15_15);
#line 133 "profiling_builtin.m"
                            if (mercury__profiling_builtin__succeeded)
#line 3595 "profiling_builtin.c"
                              mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_16_16);
#line 133 "profiling_builtin.m"
                          }
#line 133 "profiling_builtin.m"
                      }
#line 133 "profiling_builtin.m"
                  }
#line 133 "profiling_builtin.m"
              }
#line 133 "profiling_builtin.m"
          }
#line 133 "profiling_builtin.m"
      }
#line 133 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 133 "profiling_builtin.m"
  }
#line 133 "profiling_builtin.m"
}

#line 130 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0(
#line 130 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 130 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 130 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 130 "profiling_builtin.m"
{
#line 130 "profiling_builtin.m"
  {
#line 130 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 130 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_21 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 130 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_22 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 130 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_21 == mercury__profiling_builtin__CastY_22);
#line 130 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 3640 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "profiling_builtin.m"
    else
#line 130 "profiling_builtin.m"
      {
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 4)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 5)));
#line 130 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_16_16;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_10_10);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_10_10);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 3695 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_16_16 == (MR_Integer) 0);
#line 130 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 130 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_16_16;
#line 130 "profiling_builtin.m"
        else
#line 130 "profiling_builtin.m"
          {
#line 130 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_17_17;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_11_11);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_17_17 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_11_11);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_17_17 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_17_17 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 3732 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_17_17 == (MR_Integer) 0);
#line 130 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 130 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_17_17;
#line 130 "profiling_builtin.m"
            else
#line 130 "profiling_builtin.m"
              {
#line 130 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_18_18;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_12_12);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_18_18 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_12_12);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_18_18 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_18_18 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 3769 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_18_18 == (MR_Integer) 0);
#line 130 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 130 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_18_18;
#line 130 "profiling_builtin.m"
                else
#line 130 "profiling_builtin.m"
                  {
#line 130 "profiling_builtin.m"
                    MR_Word mercury__profiling_builtin__V_19_19;

#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_13_13);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      mercury__profiling_builtin__V_19_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_13_13);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          mercury__profiling_builtin__V_19_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__profiling_builtin__V_19_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 3806 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_19_19 == (MR_Integer) 0);
#line 130 "profiling_builtin.m"
                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 130 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_19_19;
#line 130 "profiling_builtin.m"
                    else
#line 130 "profiling_builtin.m"
                      {
#line 130 "profiling_builtin.m"
                        MR_Word mercury__profiling_builtin__V_20_20;

#line 66 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 < mercury__profiling_builtin__V_14_14);
#line 69 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                          mercury__profiling_builtin__V_20_20 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_14_14);
#line 74 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                              mercury__profiling_builtin__V_20_20 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              mercury__profiling_builtin__V_20_20 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 3843 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_20_20 == (MR_Integer) 0);
#line 130 "profiling_builtin.m"
                        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 130 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
                          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_20_20;
#line 130 "profiling_builtin.m"
                        else
#line 69 "private_builtin.opt"
                          {
#line 66 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 < mercury__profiling_builtin__V_15_15);
#line 69 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                            else
#line 74 "private_builtin.opt"
                              {
#line 71 "private_builtin.opt"
                                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_9_9 == mercury__profiling_builtin__V_15_15);
#line 74 "private_builtin.opt"
                                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                else
#line 75 "private_builtin.opt"
                                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                              }
#line 69 "private_builtin.opt"
                          }
#line 130 "profiling_builtin.m"
                      }
#line 130 "profiling_builtin.m"
                  }
#line 130 "profiling_builtin.m"
              }
#line 130 "profiling_builtin.m"
          }
#line 130 "profiling_builtin.m"
      }
#line 130 "profiling_builtin.m"
  }
#line 130 "profiling_builtin.m"
}

#line 130 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0(
#line 130 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 130 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 130 "profiling_builtin.m"
{
#line 130 "profiling_builtin.m"
  {
#line 130 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 130 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_15 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 130 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_16 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 130 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_15 == mercury__profiling_builtin__CastY_16);
#line 130 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 130 "profiling_builtin.m"
    else
#line 130 "profiling_builtin.m"
      {
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 4)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 5)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 130 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 5)));

#line 3947 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_9_9);
#line 130 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
          {
#line 3953 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_10_10);
#line 130 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
              {
#line 3959 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_11_11);
#line 130 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
                  {
#line 3965 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_12_12);
#line 130 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 130 "profiling_builtin.m"
                      {
#line 3971 "profiling_builtin.c"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_13_13);
#line 130 "profiling_builtin.m"
                        if (mercury__profiling_builtin__succeeded)
#line 3975 "profiling_builtin.c"
                          mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_14_14);
#line 130 "profiling_builtin.m"
                      }
#line 130 "profiling_builtin.m"
                  }
#line 130 "profiling_builtin.m"
              }
#line 130 "profiling_builtin.m"
          }
#line 130 "profiling_builtin.m"
      }
#line 130 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 130 "profiling_builtin.m"
  }
#line 130 "profiling_builtin.m"
}

#line 127 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0(
#line 127 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 127 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 127 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 127 "profiling_builtin.m"
{
#line 127 "profiling_builtin.m"
  {
#line 127 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 127 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_18 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 127 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_19 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 127 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_18 == mercury__profiling_builtin__CastY_19);
#line 127 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 4018 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 127 "profiling_builtin.m"
    else
#line 127 "profiling_builtin.m"
      {
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 4)));
#line 127 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_14_14;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_9_9);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_9_9);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4069 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_14_14 == (MR_Integer) 0);
#line 127 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 127 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_14_14;
#line 127 "profiling_builtin.m"
        else
#line 127 "profiling_builtin.m"
          {
#line 127 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_15_15;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_10_10);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_15_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_10_10);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_15_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_15_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 4106 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_15_15 == (MR_Integer) 0);
#line 127 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 127 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_15_15;
#line 127 "profiling_builtin.m"
            else
#line 127 "profiling_builtin.m"
              {
#line 127 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_16_16;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_11_11);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_11_11);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 4143 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_16_16 == (MR_Integer) 0);
#line 127 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 127 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_16_16;
#line 127 "profiling_builtin.m"
                else
#line 127 "profiling_builtin.m"
                  {
#line 127 "profiling_builtin.m"
                    MR_Word mercury__profiling_builtin__V_17_17;

#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_12_12);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      mercury__profiling_builtin__V_17_17 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_12_12);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          mercury__profiling_builtin__V_17_17 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__profiling_builtin__V_17_17 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 4180 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_17_17 == (MR_Integer) 0);
#line 127 "profiling_builtin.m"
                    mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 127 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
                      *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_17_17;
#line 127 "profiling_builtin.m"
                    else
#line 69 "private_builtin.opt"
                      {
#line 66 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 < mercury__profiling_builtin__V_13_13);
#line 69 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == mercury__profiling_builtin__V_13_13);
#line 74 "private_builtin.opt"
                            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 69 "private_builtin.opt"
                      }
#line 127 "profiling_builtin.m"
                  }
#line 127 "profiling_builtin.m"
              }
#line 127 "profiling_builtin.m"
          }
#line 127 "profiling_builtin.m"
      }
#line 127 "profiling_builtin.m"
  }
#line 127 "profiling_builtin.m"
}

#line 127 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0(
#line 127 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 127 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 127 "profiling_builtin.m"
{
#line 127 "profiling_builtin.m"
  {
#line 127 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 127 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_13 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 127 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_14 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 127 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_13 == mercury__profiling_builtin__CastY_14);
#line 127 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 127 "profiling_builtin.m"
    else
#line 127 "profiling_builtin.m"
      {
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 4)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 127 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 4)));

#line 4278 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_8_8);
#line 127 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
          {
#line 4284 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_9_9);
#line 127 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
              {
#line 4290 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_10_10);
#line 127 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 127 "profiling_builtin.m"
                  {
#line 4296 "profiling_builtin.c"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_11_11);
#line 127 "profiling_builtin.m"
                    if (mercury__profiling_builtin__succeeded)
#line 4300 "profiling_builtin.c"
                      mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_12_12);
#line 127 "profiling_builtin.m"
                  }
#line 127 "profiling_builtin.m"
              }
#line 127 "profiling_builtin.m"
          }
#line 127 "profiling_builtin.m"
      }
#line 127 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 127 "profiling_builtin.m"
  }
#line 127 "profiling_builtin.m"
}

#line 124 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0(
#line 124 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 124 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 124 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 124 "profiling_builtin.m"
{
#line 124 "profiling_builtin.m"
  {
#line 124 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 124 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_15 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 124 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_16 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 124 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_15 == mercury__profiling_builtin__CastY_16);
#line 124 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 4341 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "profiling_builtin.m"
    else
#line 124 "profiling_builtin.m"
      {
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 3)));
#line 124 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_12_12;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_8_8);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_12_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_12_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_12_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4388 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_12_12 == (MR_Integer) 0);
#line 124 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 124 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_12_12;
#line 124 "profiling_builtin.m"
        else
#line 124 "profiling_builtin.m"
          {
#line 124 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_13_13;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_9_9);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_13_13 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_9_9);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_13_13 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_13_13 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 4425 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_13_13 == (MR_Integer) 0);
#line 124 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 124 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_13_13;
#line 124 "profiling_builtin.m"
            else
#line 124 "profiling_builtin.m"
              {
#line 124 "profiling_builtin.m"
                MR_Word mercury__profiling_builtin__V_14_14;

#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_10_10);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  mercury__profiling_builtin__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_10_10);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      mercury__profiling_builtin__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__profiling_builtin__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 4462 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_14_14 == (MR_Integer) 0);
#line 124 "profiling_builtin.m"
                mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 124 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
                  *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_14_14;
#line 124 "profiling_builtin.m"
                else
#line 69 "private_builtin.opt"
                  {
#line 66 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 < mercury__profiling_builtin__V_11_11);
#line 69 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_7_7 == mercury__profiling_builtin__V_11_11);
#line 74 "private_builtin.opt"
                        if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 69 "private_builtin.opt"
                  }
#line 124 "profiling_builtin.m"
              }
#line 124 "profiling_builtin.m"
          }
#line 124 "profiling_builtin.m"
      }
#line 124 "profiling_builtin.m"
  }
#line 124 "profiling_builtin.m"
}

#line 124 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0(
#line 124 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 124 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 124 "profiling_builtin.m"
{
#line 124 "profiling_builtin.m"
  {
#line 124 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 124 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_11 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 124 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_12 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 124 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_11 == mercury__profiling_builtin__CastY_12);
#line 124 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 124 "profiling_builtin.m"
    else
#line 124 "profiling_builtin.m"
      {
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 3)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 124 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 3)));

#line 4554 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_7_7);
#line 124 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
          {
#line 4560 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_8_8);
#line 124 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 124 "profiling_builtin.m"
              {
#line 4566 "profiling_builtin.c"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_9_9);
#line 124 "profiling_builtin.m"
                if (mercury__profiling_builtin__succeeded)
#line 4570 "profiling_builtin.c"
                  mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_10_10);
#line 124 "profiling_builtin.m"
              }
#line 124 "profiling_builtin.m"
          }
#line 124 "profiling_builtin.m"
      }
#line 124 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 124 "profiling_builtin.m"
  }
#line 124 "profiling_builtin.m"
}

#line 121 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0(
#line 121 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 121 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 121 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 121 "profiling_builtin.m"
{
#line 121 "profiling_builtin.m"
  {
#line 121 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 121 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_12 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 121 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_13 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 121 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_12 == mercury__profiling_builtin__CastY_13);
#line 121 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 4609 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "profiling_builtin.m"
    else
#line 121 "profiling_builtin.m"
      {
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 2)));
#line 121 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_10_10;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_7_7);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_7_7);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4652 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_10_10 == (MR_Integer) 0);
#line 121 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 121 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 121 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_10_10;
#line 121 "profiling_builtin.m"
        else
#line 121 "profiling_builtin.m"
          {
#line 121 "profiling_builtin.m"
            MR_Word mercury__profiling_builtin__V_11_11;

#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              mercury__profiling_builtin__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  mercury__profiling_builtin__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__profiling_builtin__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 4689 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_11_11 == (MR_Integer) 0);
#line 121 "profiling_builtin.m"
            mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 121 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 121 "profiling_builtin.m"
              *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_11_11;
#line 121 "profiling_builtin.m"
            else
#line 69 "private_builtin.opt"
              {
#line 66 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 < mercury__profiling_builtin__V_9_9);
#line 69 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_6_6 == mercury__profiling_builtin__V_9_9);
#line 74 "private_builtin.opt"
                    if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 69 "private_builtin.opt"
              }
#line 121 "profiling_builtin.m"
          }
#line 121 "profiling_builtin.m"
      }
#line 121 "profiling_builtin.m"
  }
#line 121 "profiling_builtin.m"
}

#line 121 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0(
#line 121 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 121 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 121 "profiling_builtin.m"
{
#line 121 "profiling_builtin.m"
  {
#line 121 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 121 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_9 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 121 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_10 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 121 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_9 == mercury__profiling_builtin__CastY_10);
#line 121 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 121 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 121 "profiling_builtin.m"
    else
#line 121 "profiling_builtin.m"
      {
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 2)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 2)));

#line 4775 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_6_6);
#line 121 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 121 "profiling_builtin.m"
          {
#line 4781 "profiling_builtin.c"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_7_7);
#line 121 "profiling_builtin.m"
            if (mercury__profiling_builtin__succeeded)
#line 4785 "profiling_builtin.c"
              mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_8_8);
#line 121 "profiling_builtin.m"
          }
#line 121 "profiling_builtin.m"
      }
#line 121 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 121 "profiling_builtin.m"
  }
#line 121 "profiling_builtin.m"
}

#line 118 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0(
#line 118 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 118 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2,
#line 118 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__3_3)
#line 118 "profiling_builtin.m"
{
#line 118 "profiling_builtin.m"
  {
#line 118 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 118 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_9 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;
#line 118 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_10 = (MR_Integer) mercury__profiling_builtin__HeadVar__3_3;

#line 118 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_9 == mercury__profiling_builtin__CastY_10);
#line 118 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 4822 "profiling_builtin.c"
      *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "profiling_builtin.m"
    else
#line 118 "profiling_builtin.m"
      {
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 0)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "profiling_builtin.m"
        MR_Word mercury__profiling_builtin__V_8_8;

#line 66 "private_builtin.opt"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 < mercury__profiling_builtin__V_6_6);
#line 69 "private_builtin.opt"
        if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
          mercury__profiling_builtin__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_6_6);
#line 74 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
              mercury__profiling_builtin__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__profiling_builtin__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 4861 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_8_8 == (MR_Integer) 0);
#line 118 "profiling_builtin.m"
        mercury__profiling_builtin__succeeded = !(mercury__profiling_builtin__succeeded);
#line 118 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 118 "profiling_builtin.m"
          *mercury__profiling_builtin__HeadVar__1_1 = mercury__profiling_builtin__V_8_8;
#line 118 "profiling_builtin.m"
        else
#line 69 "private_builtin.opt"
          {
#line 66 "private_builtin.opt"
            mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 < mercury__profiling_builtin__V_7_7);
#line 69 "private_builtin.opt"
            if (mercury__profiling_builtin__succeeded)
#line 68 "private_builtin.opt"
              *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_5_5 == mercury__profiling_builtin__V_7_7);
#line 74 "private_builtin.opt"
                if (mercury__profiling_builtin__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__profiling_builtin__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 69 "private_builtin.opt"
          }
#line 118 "profiling_builtin.m"
      }
#line 118 "profiling_builtin.m"
  }
#line 118 "profiling_builtin.m"
}

#line 118 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0(
#line 118 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__1_1,
#line 118 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__HeadVar__2_2)
#line 118 "profiling_builtin.m"
{
#line 118 "profiling_builtin.m"
  {
#line 118 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 118 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastX_7 = (MR_Integer) mercury__profiling_builtin__HeadVar__1_1;
#line 118 "profiling_builtin.m"
    MR_Integer mercury__profiling_builtin__CastY_8 = (MR_Integer) mercury__profiling_builtin__HeadVar__2_2;

#line 118 "profiling_builtin.m"
    mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__CastX_7 == mercury__profiling_builtin__CastY_8);
#line 118 "profiling_builtin.m"
    if (mercury__profiling_builtin__succeeded)
#line 118 "profiling_builtin.m"
      mercury__profiling_builtin__succeeded = MR_TRUE;
#line 118 "profiling_builtin.m"
    else
#line 118 "profiling_builtin.m"
      {
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "profiling_builtin.m"
        MR_Integer mercury__profiling_builtin__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__profiling_builtin__HeadVar__2_2, (MR_Integer) 1)));

#line 4941 "profiling_builtin.c"
        mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_3_3 == mercury__profiling_builtin__V_5_5);
#line 118 "profiling_builtin.m"
        if (mercury__profiling_builtin__succeeded)
#line 4945 "profiling_builtin.c"
          mercury__profiling_builtin__succeeded = (mercury__profiling_builtin__V_4_4 == mercury__profiling_builtin__V_6_6);
#line 118 "profiling_builtin.m"
      }
#line 118 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 118 "profiling_builtin.m"
  }
#line 118 "profiling_builtin.m"
}

#line 258 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0(
#line 258 "profiling_builtin.m"
  MR_Word * mercury__profiling_builtin__HeadVar__1_1,
#line 258 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2,
#line 258 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_3)
#line 258 "profiling_builtin.m"
{
#line 258 "profiling_builtin.m"
  {
#line 258 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 258 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;
#line 258 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__profiling_builtin__HeadVar__3_3;

#line 258 "profiling_builtin.m"
    {
#line 258 "profiling_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__profiling_builtin__HeadVar__1_1, mercury__profiling_builtin__Cast_HeadVar1_4, mercury__profiling_builtin__Cast_HeadVar2_5);
#line 258 "profiling_builtin.m"
      return;
    }
#line 258 "profiling_builtin.m"
  }
#line 258 "profiling_builtin.m"
}

#line 258 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0(
#line 258 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_1,
#line 258 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_2)
#line 258 "profiling_builtin.m"
{
#line 258 "profiling_builtin.m"
  {
#line 258 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;
#line 258 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__profiling_builtin__HeadVar__1_1;
#line 258 "profiling_builtin.m"
    MR_Word mercury__profiling_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__profiling_builtin__HeadVar__2_2;

#line 258 "profiling_builtin.m"
    {
#line 258 "profiling_builtin.m"
      return mercury__profiling_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__profiling_builtin__Cast_HeadVar1_3, mercury__profiling_builtin__Cast_HeadVar2_4);
    }
#line 258 "profiling_builtin.m"
    return mercury__profiling_builtin__succeeded;
#line 258 "profiling_builtin.m"
  }
#line 258 "profiling_builtin.m"
}

#line 238 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_9_11_p_0(
#line 238 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 238 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount8_10,
#line 238 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount9_11)
#line 238 "profiling_builtin.m"
{
#line 1582 "profiling_builtin.m"
  {
#line 1582 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1588 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
	OuterCount8 =  mercury__profiling_builtin__OuterCount8_10 ;
	OuterCount9 =  mercury__profiling_builtin__OuterCount9_11 ;
		{
#line 1588 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "restore_recursion_depth_fail_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5108 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1588 "profiling_builtin.m"
}
#line 1582 "profiling_builtin.m"
  }
#line 238 "profiling_builtin.m"
}

#line 234 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_8_10_p_0(
#line 234 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 234 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9,
#line 234 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount8_10)
#line 234 "profiling_builtin.m"
{
#line 1548 "profiling_builtin.m"
  {
#line 1548 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1554 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
	OuterCount8 =  mercury__profiling_builtin__OuterCount8_10 ;
		{
#line 1554 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "restore_recursion_depth_fail_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5203 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1554 "profiling_builtin.m"
}
#line 1548 "profiling_builtin.m"
  }
#line 234 "profiling_builtin.m"
}

#line 230 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_7_9_p_0(
#line 230 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 230 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 230 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9)
#line 230 "profiling_builtin.m"
{
#line 1517 "profiling_builtin.m"
  {
#line 1517 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1523 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
		{
#line 1523 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "restore_recursion_depth_fail_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5291 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1523 "profiling_builtin.m"
}
#line 1517 "profiling_builtin.m"
  }
#line 230 "profiling_builtin.m"
}

#line 226 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_6_8_p_0(
#line 226 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 226 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 226 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8)
#line 226 "profiling_builtin.m"
{
#line 1489 "profiling_builtin.m"
  {
#line 1489 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1494 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
		{
#line 1494 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "restore_recursion_depth_fail_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5373 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1494 "profiling_builtin.m"
}
#line 1489 "profiling_builtin.m"
  }
#line 226 "profiling_builtin.m"
}

#line 222 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_5_7_p_0(
#line 222 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 222 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 222 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 222 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 222 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 222 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 222 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7)
#line 222 "profiling_builtin.m"
{
#line 1463 "profiling_builtin.m"
  {
#line 1463 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1468 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
		{
#line 1468 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "restore_recursion_depth_fail_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5449 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1468 "profiling_builtin.m"
}
#line 1463 "profiling_builtin.m"
  }
#line 222 "profiling_builtin.m"
}

#line 218 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_4_6_p_0(
#line 218 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 218 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 218 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 218 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 218 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 218 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6)
#line 218 "profiling_builtin.m"
{
#line 1439 "profiling_builtin.m"
  {
#line 1439 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1444 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
		{
#line 1444 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "restore_recursion_depth_fail_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5519 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1444 "profiling_builtin.m"
}
#line 1439 "profiling_builtin.m"
  }
#line 218 "profiling_builtin.m"
}

#line 214 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_3_5_p_0(
#line 214 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 214 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 214 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 214 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 214 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5)
#line 214 "profiling_builtin.m"
{
#line 1419 "profiling_builtin.m"
  {
#line 1419 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1423 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
		{
#line 1423 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "restore_recursion_depth_fail_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5582 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1423 "profiling_builtin.m"
}
#line 1419 "profiling_builtin.m"
  }
#line 214 "profiling_builtin.m"
}

#line 211 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_2_4_p_0(
#line 211 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 211 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 211 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 211 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4)
#line 211 "profiling_builtin.m"
{
#line 1401 "profiling_builtin.m"
  {
#line 1401 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1405 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
		{
#line 1405 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "restore_recursion_depth_fail_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5639 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1405 "profiling_builtin.m"
}
#line 1401 "profiling_builtin.m"
  }
#line 211 "profiling_builtin.m"
}

#line 208 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_1_3_p_0(
#line 208 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 208 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_2,
#line 208 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3)
#line 208 "profiling_builtin.m"
{
#line 1386 "profiling_builtin.m"
  {
#line 1386 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1390 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSN =  mercury__profiling_builtin__CSN_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
		{
#line 1390 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "restore_recursion_depth_fail_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5689 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1390 "profiling_builtin.m"
}
#line 1386 "profiling_builtin.m"
  }
#line 208 "profiling_builtin.m"
}

#line 204 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_9_11_p_0(
#line 204 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 204 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount8_10,
#line 204 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount9_11)
#line 204 "profiling_builtin.m"
{
#line 1346 "profiling_builtin.m"
  {
#line 1346 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1352 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
	OuterCount8 =  mercury__profiling_builtin__OuterCount8_10 ;
	OuterCount9 =  mercury__profiling_builtin__OuterCount9_11 ;
		{
#line 1352 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "restore_recursion_depth_exit_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5790 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1352 "profiling_builtin.m"
}
#line 1346 "profiling_builtin.m"
  }
#line 204 "profiling_builtin.m"
}

#line 200 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_8_10_p_0(
#line 200 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 200 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9,
#line 200 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount8_10)
#line 200 "profiling_builtin.m"
{
#line 1312 "profiling_builtin.m"
  {
#line 1312 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1318 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
	OuterCount8 =  mercury__profiling_builtin__OuterCount8_10 ;
		{
#line 1318 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "restore_recursion_depth_exit_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5885 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1318 "profiling_builtin.m"
}
#line 1312 "profiling_builtin.m"
  }
#line 200 "profiling_builtin.m"
}

#line 196 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_7_9_p_0(
#line 196 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 196 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8,
#line 196 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount7_9)
#line 196 "profiling_builtin.m"
{
#line 1281 "profiling_builtin.m"
  {
#line 1281 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1287 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
	OuterCount7 =  mercury__profiling_builtin__OuterCount7_9 ;
		{
#line 1287 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "restore_recursion_depth_exit_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 5973 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1287 "profiling_builtin.m"
}
#line 1281 "profiling_builtin.m"
  }
#line 196 "profiling_builtin.m"
}

#line 192 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_6_8_p_0(
#line 192 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 192 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7,
#line 192 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount6_8)
#line 192 "profiling_builtin.m"
{
#line 1253 "profiling_builtin.m"
  {
#line 1253 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1258 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
	OuterCount6 =  mercury__profiling_builtin__OuterCount6_8 ;
		{
#line 1258 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "restore_recursion_depth_exit_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6055 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1258 "profiling_builtin.m"
}
#line 1253 "profiling_builtin.m"
  }
#line 192 "profiling_builtin.m"
}

#line 188 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_5_7_p_0(
#line 188 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 188 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 188 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 188 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 188 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 188 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6,
#line 188 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount5_7)
#line 188 "profiling_builtin.m"
{
#line 1227 "profiling_builtin.m"
  {
#line 1227 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1232 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
	OuterCount5 =  mercury__profiling_builtin__OuterCount5_7 ;
		{
#line 1232 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "restore_recursion_depth_exit_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6131 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1232 "profiling_builtin.m"
}
#line 1227 "profiling_builtin.m"
  }
#line 188 "profiling_builtin.m"
}

#line 184 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_4_6_p_0(
#line 184 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 184 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 184 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 184 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 184 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5,
#line 184 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount4_6)
#line 184 "profiling_builtin.m"
{
#line 1203 "profiling_builtin.m"
  {
#line 1203 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1208 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
	OuterCount4 =  mercury__profiling_builtin__OuterCount4_6 ;
		{
#line 1208 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "restore_recursion_depth_exit_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6201 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1208 "profiling_builtin.m"
}
#line 1203 "profiling_builtin.m"
  }
#line 184 "profiling_builtin.m"
}

#line 180 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_3_5_p_0(
#line 180 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 180 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 180 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 180 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4,
#line 180 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount3_5)
#line 180 "profiling_builtin.m"
{
#line 1183 "profiling_builtin.m"
  {
#line 1183 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1187 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
	OuterCount3 =  mercury__profiling_builtin__OuterCount3_5 ;
		{
#line 1187 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "restore_recursion_depth_exit_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6264 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1187 "profiling_builtin.m"
}
#line 1183 "profiling_builtin.m"
  }
#line 180 "profiling_builtin.m"
}

#line 177 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_2_4_p_0(
#line 177 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 177 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 177 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3,
#line 177 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount2_4)
#line 177 "profiling_builtin.m"
{
#line 1165 "profiling_builtin.m"
  {
#line 1165 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1169 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
	OuterCount2 =  mercury__profiling_builtin__OuterCount2_4 ;
		{
#line 1169 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "restore_recursion_depth_exit_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6321 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1169 "profiling_builtin.m"
}
#line 1165 "profiling_builtin.m"
  }
#line 177 "profiling_builtin.m"
}

#line 174 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_1_3_p_0(
#line 174 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 174 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_2,
#line 174 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__OuterCount1_3)
#line 174 "profiling_builtin.m"
{
#line 1150 "profiling_builtin.m"
  {
#line 1150 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1154 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSN =  mercury__profiling_builtin__CSN_2 ;
	OuterCount1 =  mercury__profiling_builtin__OuterCount1_3 ;
		{
#line 1154 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "restore_recursion_depth_exit_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6371 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 1154 "profiling_builtin.m"
}
#line 1150 "profiling_builtin.m"
  }
#line 174 "profiling_builtin.m"
}

#line 170 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_9_11_p_0(
#line 170 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 170 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount5_7,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount6_8,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount7_9,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount8_10,
#line 170 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount9_11)
#line 170 "profiling_builtin.m"
{
#line 1110 "profiling_builtin.m"
  {
#line 1110 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1116 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 1116 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "save_recursion_depth_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_SAVE_DEPTH_ACTION(OuterCount9,                       \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6463 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
	 *mercury__profiling_builtin__OuterCount5_7  = OuterCount5;
	 *mercury__profiling_builtin__OuterCount6_8  = OuterCount6;
	 *mercury__profiling_builtin__OuterCount7_9  = OuterCount7;
	 *mercury__profiling_builtin__OuterCount8_10  = OuterCount8;
	 *mercury__profiling_builtin__OuterCount9_11  = OuterCount9;
#line 1116 "profiling_builtin.m"
}
#line 1110 "profiling_builtin.m"
  }
#line 170 "profiling_builtin.m"
}

#line 166 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_8_10_p_0(
#line 166 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 166 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount5_7,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount6_8,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount7_9,
#line 166 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount8_10)
#line 166 "profiling_builtin.m"
{
#line 1076 "profiling_builtin.m"
  {
#line 1076 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1082 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 1082 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "save_recursion_depth_8"
#define MR_REC_DEPTH_BODY   {                                       \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6559 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
	 *mercury__profiling_builtin__OuterCount5_7  = OuterCount5;
	 *mercury__profiling_builtin__OuterCount6_8  = OuterCount6;
	 *mercury__profiling_builtin__OuterCount7_9  = OuterCount7;
	 *mercury__profiling_builtin__OuterCount8_10  = OuterCount8;
#line 1082 "profiling_builtin.m"
}
#line 1076 "profiling_builtin.m"
  }
#line 166 "profiling_builtin.m"
}

#line 162 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_7_9_p_0(
#line 162 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 162 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount5_7,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount6_8,
#line 162 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount7_9)
#line 162 "profiling_builtin.m"
{
#line 1045 "profiling_builtin.m"
  {
#line 1045 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1051 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 1051 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "save_recursion_depth_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6648 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
	 *mercury__profiling_builtin__OuterCount5_7  = OuterCount5;
	 *mercury__profiling_builtin__OuterCount6_8  = OuterCount6;
	 *mercury__profiling_builtin__OuterCount7_9  = OuterCount7;
#line 1051 "profiling_builtin.m"
}
#line 1045 "profiling_builtin.m"
  }
#line 162 "profiling_builtin.m"
}

#line 158 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_6_8_p_0(
#line 158 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 158 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount5_7,
#line 158 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount6_8)
#line 158 "profiling_builtin.m"
{
#line 1017 "profiling_builtin.m"
  {
#line 1017 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 1022 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 1022 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "save_recursion_depth_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6731 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
	 *mercury__profiling_builtin__OuterCount5_7  = OuterCount5;
	 *mercury__profiling_builtin__OuterCount6_8  = OuterCount6;
#line 1022 "profiling_builtin.m"
}
#line 1017 "profiling_builtin.m"
  }
#line 158 "profiling_builtin.m"
}

#line 154 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_5_7_p_0(
#line 154 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 154 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 154 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 154 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 154 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 154 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6,
#line 154 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount5_7)
#line 154 "profiling_builtin.m"
{
#line 991 "profiling_builtin.m"
  {
#line 991 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 996 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 996 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "save_recursion_depth_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6808 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
	 *mercury__profiling_builtin__OuterCount5_7  = OuterCount5;
#line 996 "profiling_builtin.m"
}
#line 991 "profiling_builtin.m"
  }
#line 154 "profiling_builtin.m"
}

#line 151 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_4_6_p_0(
#line 151 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 151 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 151 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 151 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 151 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5,
#line 151 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount4_6)
#line 151 "profiling_builtin.m"
{
#line 967 "profiling_builtin.m"
  {
#line 967 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 972 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 972 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "save_recursion_depth_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6879 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
	 *mercury__profiling_builtin__OuterCount4_6  = OuterCount4;
#line 972 "profiling_builtin.m"
}
#line 967 "profiling_builtin.m"
  }
#line 151 "profiling_builtin.m"
}

#line 148 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_3_5_p_0(
#line 148 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 148 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 148 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 148 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4,
#line 148 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount3_5)
#line 148 "profiling_builtin.m"
{
#line 947 "profiling_builtin.m"
  {
#line 947 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 951 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 951 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "save_recursion_depth_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 6943 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
	 *mercury__profiling_builtin__OuterCount3_5  = OuterCount3;
#line 951 "profiling_builtin.m"
}
#line 947 "profiling_builtin.m"
  }
#line 148 "profiling_builtin.m"
}

#line 145 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_2_4_p_0(
#line 145 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 145 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__CSNsVector_2,
#line 145 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3,
#line 145 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount2_4)
#line 145 "profiling_builtin.m"
{
#line 929 "profiling_builtin.m"
  {
#line 929 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 933 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSNsVector =  mercury__profiling_builtin__CSNsVector_2 ;
		{
#line 933 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "save_recursion_depth_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 7001 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
	 *mercury__profiling_builtin__OuterCount2_4  = OuterCount2;
#line 933 "profiling_builtin.m"
}
#line 929 "profiling_builtin.m"
  }
#line 145 "profiling_builtin.m"
}

#line 142 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_1_3_p_0(
#line 142 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__CSD_1,
#line 142 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_2,
#line 142 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__OuterCount1_3)
#line 142 "profiling_builtin.m"
{
#line 914 "profiling_builtin.m"
  {
#line 914 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 918 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, mercury__profiling_builtin__CSD_1 , CSD);
	CSN =  mercury__profiling_builtin__CSN_2 ;
		{
#line 918 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "save_recursion_depth_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1, CSN);                 \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}
#line 7052 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__OuterCount1_3  = OuterCount1;
#line 918 "profiling_builtin.m"
}
#line 914 "profiling_builtin.m"
  }
#line 142 "profiling_builtin.m"
}

#line 116 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_p_0(
#line 116 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CPIndex_1)
#line 116 "profiling_builtin.m"
{
#line 855 "profiling_builtin.m"
  {
#line 855 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 860 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_p_0

	MR_Integer CPIndex;

	CPIndex =  mercury__profiling_builtin__CPIndex_1 ;
		{
#line 860 "profiling_builtin.m"

#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC
    const MR_CallSiteDynamic *csd;
    const MR_ProcDynamic *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", CallSiteDynamic: 0x%x, CPIndex: %d\n", 
            MR_current_call_site_dynamic, CPIndex);
    }
  #endif

    csd = MR_current_call_site_dynamic;

    MR_deep_assert(NULL, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;

    MR_deep_assert(csd, NULL, NULL, pd != NULL);

#ifdef MR_DEEP_CHECKS
    /*
    ** Check that CPIndex is within bounds.
    */
    {
        const MR_ProcLayout *pl;
        const MR_ProcStatic *ps;

        pl = pd->MR_pd_proc_layout;
        MR_deep_assert(csd, NULL, NULL, pl != NULL);
        ps = pl->MR_sle_proc_static;
        MR_deep_assert(csd, pl, NULL, ps != NULL);
        MR_deep_assert(csd, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    }
#endif

    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);

    pd->MR_pd_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_dynamic_coverage_point_count:  "
            "dynamic deep profiling not enabled");
#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */

#line 7134 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 860 "profiling_builtin.m"
}
#line 855 "profiling_builtin.m"
  }
#line 116 "profiling_builtin.m"
}

#line 113 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__increment_static_coverage_point_count_2_p_0(
#line 113 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__ProcLayout_1,
#line 113 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CPIndex_2)
#line 113 "profiling_builtin.m"
{
#line 817 "profiling_builtin.m"
  {
#line 817 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 822 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__increment_static_coverage_point_count_2_p_0

	MR_ProcLayout * ProcLayout;
	MR_Integer CPIndex;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcLayout *, mercury__profiling_builtin__ProcLayout_1 , ProcLayout);
	CPIndex =  mercury__profiling_builtin__CPIndex_2 ;
		{
#line 822 "profiling_builtin.m"

#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC
    const MR_ProcLayout *pl;
    MR_ProcStatic       *ps;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", ProcLayout: 0x%x, CPIndex: %d\n", ProcLayout, CPIndex);
    }
  #endif

    pl = (const MR_ProcLayout *) ProcLayout;

    MR_deep_assert(NULL, NULL, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(NULL, pl, NULL, ps != NULL);

    MR_deep_assert(NULL, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);

    ps->MR_ps_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_static_coverage_point_count:  "
            "static coverage profiling not enabled");
#endif /* MR_DEEP_PROFILING_COVERAGE_STATIC */

#line 7202 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 822 "profiling_builtin.m"
}
#line 817 "profiling_builtin.m"
  }
#line 113 "profiling_builtin.m"
}

#line 108 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__reset_activation_info_sr_1_p_0(
#line 108 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__Ptr_1)
#line 108 "profiling_builtin.m"
{
#line 782 "profiling_builtin.m"
  {
#line 782 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 785 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__reset_activation_info_sr_1_p_0

	MR_ProcDynamic * Ptr;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, mercury__profiling_builtin__Ptr_1 , Ptr);
		{
#line 785 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_sr: deep profiling not enabled");
#endif
}
#line 7261 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 785 "profiling_builtin.m"
}
#line 782 "profiling_builtin.m"
  }
#line 108 "profiling_builtin.m"
}

#line 106 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__reset_activation_info_ac_2_p_0(
#line 106 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__Count_1,
#line 106 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__Ptr_2)
#line 106 "profiling_builtin.m"
{
#line 750 "profiling_builtin.m"
  {
#line 750 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 753 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__reset_activation_info_ac_2_p_0

	MR_Integer Count;
	MR_ProcDynamic * Ptr;

	Count =  mercury__profiling_builtin__Count_1 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, mercury__profiling_builtin__Ptr_2 , Ptr);
		{
#line 753 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = Count;
    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_ac: deep profiling not enabled");
#endif
}
#line 7325 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 753 "profiling_builtin.m"
}
#line 750 "profiling_builtin.m"
  }
#line 106 "profiling_builtin.m"
}

#line 104 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__rezero_activation_info_sr_0_p_0(void)
#line 104 "profiling_builtin.m"
{
#line 719 "profiling_builtin.m"
  {
#line 719 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 722 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__rezero_activation_info_sr_0_p_0


		{
#line 722 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_sr: deep profiling not enabled");
#endif
}
#line 7380 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 722 "profiling_builtin.m"
}
#line 719 "profiling_builtin.m"
  }
#line 104 "profiling_builtin.m"
}

#line 102 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__rezero_activation_info_ac_0_p_0(void)
#line 102 "profiling_builtin.m"
{
#line 687 "profiling_builtin.m"
  {
#line 687 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 690 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__rezero_activation_info_ac_0_p_0


		{
#line 690 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = 0;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_ac: deep profiling not enabled");
#endif
}
#line 7436 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 690 "profiling_builtin.m"
}
#line 687 "profiling_builtin.m"
  }
#line 102 "profiling_builtin.m"
}

#line 100 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_and_zero_activation_info_sr_1_p_0(
#line 100 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__Ptr_1)
#line 100 "profiling_builtin.m"
{
#line 655 "profiling_builtin.m"
  {
#line 655 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 658 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_and_zero_activation_info_sr_1_p_0

	MR_ProcDynamic * Ptr;

		{
#line 658 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_sr: deep profiling not enabled");
#endif
}
#line 7495 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, *mercury__profiling_builtin__Ptr_1 );
#line 658 "profiling_builtin.m"
}
#line 655 "profiling_builtin.m"
  }
#line 100 "profiling_builtin.m"
}

#line 97 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__save_and_zero_activation_info_ac_2_p_0(
#line 97 "profiling_builtin.m"
  MR_Integer * mercury__profiling_builtin__Count_1,
#line 97 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__Ptr_2)
#line 97 "profiling_builtin.m"
{
#line 621 "profiling_builtin.m"
  {
#line 621 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 624 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_and_zero_activation_info_ac_2_p_0

	MR_Integer Count;
	MR_ProcDynamic * Ptr;

		{
#line 624 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Count = ps->MR_ps_activation_count;
    ps->MR_ps_activation_count = 0;
    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_ac: deep profiling not enabled");
#endif
}
#line 7560 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__profiling_builtin__Count_1  = Count;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, *mercury__profiling_builtin__Ptr_2 );
#line 624 "profiling_builtin.m"
}
#line 621 "profiling_builtin.m"
  }
#line 97 "profiling_builtin.m"
}

#line 94 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__non_fail_port_code_sr_3_p_0(
#line 94 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 94 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_5,
#line 94 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_6);

#line 91 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__non_fail_port_code_ac_2_p_0(
#line 91 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 91 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 88 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__non_redo_port_code_sr_2_p_0(
#line 88 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 88 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 85 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__non_redo_port_code_ac_2_p_0(
#line 85 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 85 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 82 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__non_exit_port_code_sr_3_p_0(
#line 82 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 82 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_5,
#line 82 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_6);

#line 79 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__non_exit_port_code_ac_2_p_0(
#line 79 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 79 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 76 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__non_call_port_code_sr_5_p_0(
#line 76 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_6,
#line 76 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_7,
#line 76 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_8,
#line 76 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__4_9,
#line 76 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__5_10);

#line 73 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__non_call_port_code_ac_4_p_0(
#line 73 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_5,
#line 73 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_6,
#line 73 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_7,
#line 73 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__4_8);

#line 70 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__semi_fail_port_code_sr_3_p_0(
#line 70 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 70 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_5,
#line 70 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_6);

#line 67 "profiling_builtin.m"
MR_bool MR_CALL 
mercury__profiling_builtin__semi_fail_port_code_ac_2_p_0(
#line 67 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 67 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 64 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__semi_exit_port_code_sr_3_p_0(
#line 64 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 64 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_5,
#line 64 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_6);

#line 61 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__semi_exit_port_code_ac_2_p_0(
#line 61 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 61 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 58 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__semi_call_port_code_sr_4_p_0(
#line 58 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_5,
#line 58 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_6,
#line 58 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_7,
#line 58 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__4_8);

#line 55 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__semi_call_port_code_ac_3_p_0(
#line 55 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 55 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_5,
#line 55 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_6);

#line 52 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__det_exit_port_code_sr_3_p_0(
#line 52 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 52 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_5,
#line 52 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__3_6);

#line 49 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__det_exit_port_code_ac_2_p_0(
#line 49 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_3,
#line 49 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__2_4);

#line 46 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__det_call_port_code_sr_4_p_0(
#line 46 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_5,
#line 46 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_6,
#line 46 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_7,
#line 46 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__4_8);

#line 43 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__det_call_port_code_ac_3_p_0(
#line 43 "profiling_builtin.m"
  MR_Box mercury__profiling_builtin__HeadVar__1_4,
#line 43 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__2_5,
#line 43 "profiling_builtin.m"
  MR_Box * mercury__profiling_builtin__HeadVar__3_6);

#line 41 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_tail_call_1_p_0(
#line 41 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1)
#line 41 "profiling_builtin.m"
{
#line 574 "profiling_builtin.m"
  {
#line 574 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 577 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_tail_call_1_p_0

	MR_Integer CSN;

	CSN =  mercury__profiling_builtin__CSN_1 ;
		{
#line 577 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *child_csd;
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_tail_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_tail_new++;
    } else {
        MR_deep_prof_prep_tail_old++;
    }
  #endif
    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        child_csd->MR_csd_callee_ptr = pd;
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    child_csd->MR_csd_depth_count++;
    MR_current_call_site_dynamic = child_csd;

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_tail_call: deep profiling not enabled");
#endif
}
#line 7813 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 577 "profiling_builtin.m"
}
#line 574 "profiling_builtin.m"
  }
#line 41 "profiling_builtin.m"
}

#line 39 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_callback_1_p_0(
#line 39 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1)
#line 39 "profiling_builtin.m"
{
#line 540 "profiling_builtin.m"
  {
#line 540 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 543 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_callback_1_p_0

	MR_Integer CSN;

	CSN =  mercury__profiling_builtin__CSN_1 ;
		{
#line 543 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_callback");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    MR_current_callback_site = (MR_CallSiteDynList **)
        &(pd->MR_pd_call_site_ptr_ptrs[CSN]);
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_callback: deep profiling not enabled");
#endif
}
#line 7871 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 543 "profiling_builtin.m"
}
#line 540 "profiling_builtin.m"
  }
#line 39 "profiling_builtin.m"
}

#line 37 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_method_call_3_p_0(
#line 37 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1,
#line 37 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__TypeClassInfo_2,
#line 37 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__MethodNum_3)
#line 37 "profiling_builtin.m"
{
#line 484 "profiling_builtin.m"
  {
#line 484 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 487 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_method_call_3_p_0

	MR_Integer CSN;
	MR_Word TypeClassInfo;
	MR_Integer MethodNum;

	CSN =  mercury__profiling_builtin__CSN_1 ;
	TypeClassInfo =  mercury__profiling_builtin__TypeClassInfo_2 ;
	MethodNum =  mercury__profiling_builtin__MethodNum_3 ;
		{
#line 487 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_method_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    void_key = (void *)
        MR_typeclass_info_class_method(TypeClassInfo, MethodNum);
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_method_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_method_old++;
    } else {
        MR_deep_prof_prep_method_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_method_call: deep profiling not enabled");
#endif
}
#line 7963 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 487 "profiling_builtin.m"
}
#line 484 "profiling_builtin.m"
  }
#line 37 "profiling_builtin.m"
}

#line 35 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_ho_call_2_p_0(
#line 35 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1,
#line 35 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__Closure_2)
#line 35 "profiling_builtin.m"
{
#line 418 "profiling_builtin.m"
  {
#line 418 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 421 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_ho_call_2_p_0

	MR_Integer CSN;
	MR_Word Closure;

	CSN =  mercury__profiling_builtin__CSN_1 ;
	Closure =  mercury__profiling_builtin__Closure_2 ;
		{
#line 421 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_Closure          *closure;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_ho_call");
        printf("call site number: %d\n", CSN);
        closure = (MR_Closure *) Closure;
        printf("closure: layout %p, code %p\n",
            (void *) closure->MR_closure_layout,
            (void *) closure->MR_closure_code);
    }
  #endif

    closure = (MR_Closure *) Closure;
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

  #ifdef MR_DEEP_PROFILING_KEY_USES_ID
    void_key = (void *) (closure->MR_closure_layout);
  #else
    void_key = (void *) (closure->MR_closure_code);
  #endif

    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_closure_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_ho_old++;
    } else {
        MR_deep_prof_prep_ho_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_ho_call: deep profiling not enabled");
#endif
}
#line 8061 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 421 "profiling_builtin.m"
}
#line 418 "profiling_builtin.m"
  }
#line 35 "profiling_builtin.m"
}

#line 33 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_special_call_2_p_0(
#line 33 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1,
#line 33 "profiling_builtin.m"
  MR_Word mercury__profiling_builtin__TypeInfo_2)
#line 33 "profiling_builtin.m"
{
#line 351 "profiling_builtin.m"
  {
#line 351 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 354 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_special_call_2_p_0

	MR_Integer CSN;
	MR_Word TypeInfo;

	CSN =  mercury__profiling_builtin__CSN_1 ;
	TypeInfo =  mercury__profiling_builtin__TypeInfo_2 ;
		{
#line 354 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif
    MR_TypeCtorInfo     type_ctor_info;
    MR_TypeInfo         type_info;
    void                *void_key;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_special_call");
        printf("call site number: %d\n", CSN);
        type_info = (MR_TypeInfo) TypeInfo;
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
        printf("type constructor: %s:%s/%d\n",
            type_ctor_info->MR_type_ctor_module_name,
            type_ctor_info->MR_type_ctor_name,
            type_ctor_info->MR_type_ctor_arity);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    type_info = (MR_TypeInfo) TypeInfo;
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

    void_key = (void *) type_ctor_info;
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_special_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_special_old++;
    } else {
        MR_deep_prof_prep_special_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "prepare_for_special_call: deep profiling not enabled");
#endif
}
#line 8160 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 354 "profiling_builtin.m"
}
#line 351 "profiling_builtin.m"
  }
#line 33 "profiling_builtin.m"
}

#line 31 "profiling_builtin.m"
void MR_CALL 
mercury__profiling_builtin__prepare_for_normal_call_1_p_0(
#line 31 "profiling_builtin.m"
  MR_Integer mercury__profiling_builtin__CSN_1)
#line 31 "profiling_builtin.m"
{
#line 306 "profiling_builtin.m"
  {
#line 306 "profiling_builtin.m"
    MR_bool mercury__profiling_builtin__succeeded;

#line 309 "profiling_builtin.m"
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_normal_call_1_p_0

	MR_Integer CSN;

	CSN =  mercury__profiling_builtin__CSN_1 ;
		{
#line 309 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynamic  *child_csd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_normal_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_normal_new++;
    } else {
        MR_deep_prof_prep_normal_old++;
    }
  #endif

    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    MR_next_call_site_dynamic = child_csd;
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_normal_call: deep profiling not enabled");
#endif
}
#line 8233 "profiling_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 309 "profiling_builtin.m"
}
#line 306 "profiling_builtin.m"
  }
#line 31 "profiling_builtin.m"
}

void mercury__profiling_builtin__init(void)
{
}

void mercury__profiling_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_dynamic_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_2_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_3_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_4_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_5_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_6_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_7_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_8_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_9_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_dynamic_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_layout_0);
}

void mercury__profiling_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module profiling_builtin. */
