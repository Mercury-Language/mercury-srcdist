/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module maybe. */
/* :- implementation. */

/*
INIT mercury__maybe__init
ENDINIT
*/

#include "maybe.mih"


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
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 75 "maybe.m"
struct mercury__maybe__map_maybe_3_p_3_env_0_s {
#line 75 "maybe.m"
  MR_Word * mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3;
#line 75 "maybe.m"
  MR_Cont mercury__maybe__map_maybe_3_p_3_env_0__cont;
#line 75 "maybe.m"
  void * mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr;
#line 162 "maybe.m"
  MR_Box mercury__maybe__map_maybe_3_p_3_env_0__T_7;
#line 75 "maybe.m"
};

#line 74 "maybe.m"
struct mercury__maybe__map_maybe_3_p_2_env_0_s {
#line 74 "maybe.m"
  MR_Word * mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3;
#line 74 "maybe.m"
  MR_Cont mercury__maybe__map_maybe_3_p_2_env_0__cont;
#line 74 "maybe.m"
  void * mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr;
#line 162 "maybe.m"
  MR_Box mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 74 "maybe.m"
};


#line 116 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0;

#line 119 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1];

#line 122 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1;

#line 125 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1];

#line 128 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1];

#line 131 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2];

#line 134 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2];

#line 137 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2];

#line 140 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1];

#line 143 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0;

#line 146 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1];

#line 149 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1;

#line 152 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1];

#line 155 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1];

#line 158 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2];

#line 161 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2];

#line 164 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2];

#line 167 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 170 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0;

#line 173 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1];

#line 176 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1;

#line 179 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1];

#line 182 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1];

#line 185 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2];

#line 188 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2];

#line 191 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2];

#line 194 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1];

#line 197 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0;

#line 200 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2;

#line 203 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2];

#line 206 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1;

#line 209 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1];

#line 212 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1];

#line 215 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2];

#line 218 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2];

#line 221 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2];

#line 224 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 227 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 230 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 232 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 234 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 237 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 240 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 242 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 244 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 246 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 249 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 252 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 254 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 256 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 258 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 261 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 264 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 266 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 268 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 270 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 272 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5);

#line 275 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 278 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 280 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 282 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 285 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 288 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 290 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 292 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 294 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 297 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 300 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 302 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2);

#line 305 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 308 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 310 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 312 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 315 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
#line 318 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 320 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 322 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 324 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 327 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
#line 330 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 332 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 334 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 336 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 338 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5);

#line 341 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
#line 344 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 346 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 348 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 351 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
#line 354 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 356 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 358 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 360 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 162 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 162 "maybe.m"
  void * mercury__maybe__env_ptr_arg);

#line 162 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 162 "maybe.m"
  void * mercury__maybe__env_ptr_arg);


static /* final */ const MR_Box mercury__maybe_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__maybe_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__maybe_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__maybe_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__maybe_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__maybe_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_2[0])),
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



#line 741 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0 = {
  (MR_String) "no",
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

#line 756 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 761 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1 = {
  (MR_String) "yes",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_1_1,
  NULL,
  NULL,
  NULL
};

#line 776 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0
};

#line 781 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 786 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_1
  }
};

#line 800 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0,
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 806 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 812 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe",
  {
    mercury__maybe__maybe__du_name_ordered_maybe_1
  },
  {
    mercury__maybe__maybe__du_ptag_ordered_maybe_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_1
};

#line 833 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 838 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__maybe__maybe__field_types_maybe_error_2_0,
  NULL,
  NULL,
  NULL
};

#line 853 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 858 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_error_2_1,
  NULL,
  NULL,
  NULL
};

#line 873 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 878 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1
};

#line 883 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1
  }
};

#line 897 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 903 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 909 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {
    mercury__maybe__maybe__du_name_ordered_maybe_error_2
  },
  {
    mercury__maybe__maybe__du_ptag_ordered_maybe_error_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_2
};

#line 930 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 939 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 960 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0 = {
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

#line 975 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 980 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_error_0_1,
  NULL,
  NULL,
  NULL
};

#line 995 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 1000 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1
};

#line 1005 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1
  }
};

#line 1019 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 1025 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1031 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_0_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_0_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {
    mercury__maybe__maybe__du_name_ordered_maybe_error_0
  },
  {
    mercury__maybe__maybe__du_ptag_ordered_maybe_error_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_0
};

#line 1052 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1057 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__maybe__maybe__field_types_maybe_errors_2_0,
  NULL,
  NULL,
  NULL
};

#line 1072 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1080 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__maybe__list__pti_list_1__pseudo_2
};

#line 1086 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_errors_2_1,
  NULL,
  NULL,
  NULL
};

#line 1101 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

#line 1106 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1
};

#line 1111 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1
  }
};

#line 1125 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

#line 1131 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1137 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {
    mercury__maybe__maybe__du_name_ordered_maybe_errors_2
  },
  {
    mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_errors_2
};

#line 1158 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_errors_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1167 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1188 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 1191 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1193 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1195 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1197 "maybe.c"
{
#line 1199 "maybe.c"
  {
#line 1201 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1204 "maybe.c"
    {
#line 1206 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1209 "maybe.c"
    return mercury__maybe__succeeded;
#line 1211 "maybe.c"
  }
#line 1213 "maybe.c"
}

#line 1216 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 1219 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1221 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1223 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1225 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1227 "maybe.c"
{
#line 1229 "maybe.c"
  {
#line 1231 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1234 "maybe.c"
    {
#line 1236 "maybe.c"
      mercury__maybe____Compare____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1239 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1241 "maybe.c"
  }
#line 1243 "maybe.c"
}

#line 1246 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 1249 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1251 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1253 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1255 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1257 "maybe.c"
{
#line 1259 "maybe.c"
  {
#line 1261 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1264 "maybe.c"
    {
#line 1266 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1269 "maybe.c"
    return mercury__maybe__succeeded;
#line 1271 "maybe.c"
  }
#line 1273 "maybe.c"
}

#line 1276 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 1279 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1281 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1283 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 1285 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 1287 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5)
#line 1289 "maybe.c"
{
#line 1291 "maybe.c"
  {
#line 1293 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1296 "maybe.c"
    {
#line 1298 "maybe.c"
      mercury__maybe____Compare____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
#line 1301 "maybe.c"
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1303 "maybe.c"
  }
#line 1305 "maybe.c"
}

#line 1308 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 1311 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1313 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1315 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1317 "maybe.c"
{
#line 1319 "maybe.c"
  {
#line 1321 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1324 "maybe.c"
    {
#line 1326 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1329 "maybe.c"
    return mercury__maybe__succeeded;
#line 1331 "maybe.c"
  }
#line 1333 "maybe.c"
}

#line 1336 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 1339 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1341 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1343 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1345 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1347 "maybe.c"
{
#line 1349 "maybe.c"
  {
#line 1351 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1354 "maybe.c"
    {
#line 1356 "maybe.c"
      mercury__maybe____Compare____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1359 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1361 "maybe.c"
  }
#line 1363 "maybe.c"
}

#line 1366 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 1369 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1371 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2)
#line 1373 "maybe.c"
{
#line 1375 "maybe.c"
  {
#line 1377 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1380 "maybe.c"
    {
#line 1382 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_0_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2));
    }
#line 1385 "maybe.c"
    return mercury__maybe__succeeded;
#line 1387 "maybe.c"
  }
#line 1389 "maybe.c"
}

#line 1392 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 1395 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 1397 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1399 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1401 "maybe.c"
{
#line 1403 "maybe.c"
  {
#line 1405 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1408 "maybe.c"
    {
#line 1410 "maybe.c"
      mercury__maybe____Compare____maybe_error_0_0(&mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1413 "maybe.c"
    *mercury__maybe__wrapper_arg_1 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1415 "maybe.c"
  }
#line 1417 "maybe.c"
}

#line 1420 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
#line 1423 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1425 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1427 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1429 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1431 "maybe.c"
{
#line 1433 "maybe.c"
  {
#line 1435 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1438 "maybe.c"
    {
#line 1440 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1443 "maybe.c"
    return mercury__maybe__succeeded;
#line 1445 "maybe.c"
  }
#line 1447 "maybe.c"
}

#line 1450 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
#line 1453 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1455 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1457 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 1459 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 1461 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5)
#line 1463 "maybe.c"
{
#line 1465 "maybe.c"
  {
#line 1467 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1470 "maybe.c"
    {
#line 1472 "maybe.c"
      mercury__maybe____Compare____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
#line 1475 "maybe.c"
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1477 "maybe.c"
  }
#line 1479 "maybe.c"
}

#line 1482 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
#line 1485 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1487 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1489 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1491 "maybe.c"
{
#line 1493 "maybe.c"
  {
#line 1495 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1498 "maybe.c"
    {
#line 1500 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1503 "maybe.c"
    return mercury__maybe__succeeded;
#line 1505 "maybe.c"
  }
#line 1507 "maybe.c"
}

#line 1510 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
#line 1513 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1515 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1517 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1519 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1521 "maybe.c"
{
#line 1523 "maybe.c"
  {
#line 1525 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1528 "maybe.c"
    {
#line 1530 "maybe.c"
      mercury__maybe____Compare____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1533 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1535 "maybe.c"
  }
#line 1537 "maybe.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__maybe__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 57 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0(
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_19,
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_20,
#line 57 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 57 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 57 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 57 "maybe.m"
{
#line 57 "maybe.m"
  {
#line 57 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 57 "maybe.m"
    MR_Integer mercury__maybe__CastX_17 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 57 "maybe.m"
    MR_Integer mercury__maybe__CastY_18 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 57 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_17 == mercury__maybe__CastY_18);
#line 57 "maybe.m"
    if (mercury__maybe__succeeded)
#line 1585 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "maybe.m"
    else
#line 57 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 57 "maybe.m"
        {
#line 57 "maybe.m"
          MR_Word mercury__maybe__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_24_24 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 57 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 57 "maybe.m"
            {
#line 57 "maybe.m"
              MR_Box mercury__maybe__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));
#line 57 "maybe.m"
              MR_Word mercury__maybe__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "maybe.m"
              MR_Word mercury__maybe__V_16_16;

#line 57 "maybe.m"
              {
#line 57 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_E_20, &mercury__maybe__V_16_16, mercury__maybe__V_24_24, mercury__maybe__V_14_14);
              }
#line 1614 "maybe.c"
              mercury__maybe__succeeded = (mercury__maybe__V_16_16 == (MR_Integer) 0);
#line 57 "maybe.m"
              mercury__maybe__succeeded = !(mercury__maybe__succeeded);
#line 57 "maybe.m"
              if (mercury__maybe__succeeded)
#line 57 "maybe.m"
                *mercury__maybe__HeadVar__1_1 = mercury__maybe__V_16_16;
#line 57 "maybe.m"
              else
#line 57 "maybe.m"
                {
#line 57 "maybe.m"
                  mercury__list____Compare____list_1_0(mercury__maybe__TypeInfo_for_E_20, mercury__maybe__HeadVar__1_1, mercury__maybe__V_23_23, mercury__maybe__V_15_15);
#line 57 "maybe.m"
                  return;
                }
#line 57 "maybe.m"
            }
#line 57 "maybe.m"
          else
#line 1635 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "maybe.m"
        }
#line 57 "maybe.m"
      else
#line 57 "maybe.m"
        {
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_25_25 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 57 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1648 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "maybe.m"
          else
#line 57 "maybe.m"
            {
#line 57 "maybe.m"
              MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 57 "maybe.m"
              {
#line 57 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_19, mercury__maybe__HeadVar__1_1, mercury__maybe__V_25_25, mercury__maybe__V_5_5);
#line 57 "maybe.m"
                return;
              }
#line 57 "maybe.m"
            }
#line 57 "maybe.m"
        }
#line 57 "maybe.m"
  }
#line 57 "maybe.m"
}

#line 57 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0(
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_11,
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_12,
#line 57 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 57 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 57 "maybe.m"
{
#line 57 "maybe.m"
  {
#line 57 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 57 "maybe.m"
    MR_Integer mercury__maybe__CastX_9 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 57 "maybe.m"
    MR_Integer mercury__maybe__CastY_10 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 57 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_9 == mercury__maybe__CastY_10);
#line 57 "maybe.m"
    if (mercury__maybe__succeeded)
#line 57 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 57 "maybe.m"
    else
#line 57 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 57 "maybe.m"
        {
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 57 "maybe.m"
          MR_Word mercury__maybe__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_7_7;
#line 57 "maybe.m"
          MR_Word mercury__maybe__V_8_8;

#line 57 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 57 "maybe.m"
          if (mercury__maybe__succeeded)
#line 57 "maybe.m"
            {
#line 57 "maybe.m"
              mercury__maybe__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 57 "maybe.m"
              mercury__maybe__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 1)));
#line 1726 "maybe.c"
              {
#line 1728 "maybe.c"
                mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_12, mercury__maybe__V_5_5, mercury__maybe__V_7_7);
              }
#line 57 "maybe.m"
              if (mercury__maybe__succeeded)
#line 1733 "maybe.c"
                {
#line 1735 "maybe.c"
                  return mercury__maybe__succeeded = mercury__list____Unify____list_1_0(mercury__maybe__TypeInfo_for_E_12, mercury__maybe__V_6_6, mercury__maybe__V_8_8);
                }
#line 57 "maybe.m"
            }
#line 57 "maybe.m"
        }
#line 57 "maybe.m"
      else
#line 57 "maybe.m"
        {
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 57 "maybe.m"
          MR_Box mercury__maybe__V_4_4;

#line 57 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 57 "maybe.m"
          if (mercury__maybe__succeeded)
#line 57 "maybe.m"
            {
#line 57 "maybe.m"
              mercury__maybe__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 1759 "maybe.c"
              {
#line 1761 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_11, mercury__maybe__V_3_3, mercury__maybe__V_4_4);
              }
#line 57 "maybe.m"
            }
#line 57 "maybe.m"
        }
#line 57 "maybe.m"
    return mercury__maybe__succeeded;
#line 57 "maybe.m"
  }
#line 57 "maybe.m"
}

#line 54 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0(
#line 54 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_6,
#line 54 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 54 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 54 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 54 "maybe.m"
{
#line 54 "maybe.m"
  {
#line 54 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 54 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 54 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_4 = mercury__maybe__HeadVar__2_2;
#line 54 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_5 = mercury__maybe__HeadVar__3_3;

#line 54 "maybe.m"
    {
#line 54 "maybe.m"
      mercury__maybe____Compare____maybe_errors_2_0(mercury__maybe__TypeInfo_for_T_6, mercury__maybe__TypeCtorInfo_7_7, mercury__maybe__HeadVar__1_1, mercury__maybe__Cast_HeadVar1_4, mercury__maybe__Cast_HeadVar2_5);
#line 54 "maybe.m"
      return;
    }
#line 54 "maybe.m"
  }
#line 54 "maybe.m"
}

#line 54 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0(
#line 54 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_5,
#line 54 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 54 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 54 "maybe.m"
{
#line 54 "maybe.m"
  {
#line 54 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 54 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 54 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_3 = mercury__maybe__HeadVar__1_1;
#line 54 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_4 = mercury__maybe__HeadVar__2_2;

#line 54 "maybe.m"
    {
#line 54 "maybe.m"
      return mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_2_0(mercury__maybe__TypeInfo_for_T_5, mercury__maybe__TypeCtorInfo_6_6, mercury__maybe__Cast_HeadVar1_3, mercury__maybe__Cast_HeadVar2_4);
    }
#line 54 "maybe.m"
    return mercury__maybe__succeeded;
#line 54 "maybe.m"
  }
#line 54 "maybe.m"
}

#line 43 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0(
#line 43 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_14,
#line 43 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_15,
#line 43 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 43 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 43 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 43 "maybe.m"
{
#line 43 "maybe.m"
  {
#line 43 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 43 "maybe.m"
    MR_Integer mercury__maybe__CastX_12 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 43 "maybe.m"
    MR_Integer mercury__maybe__CastY_13 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 43 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_12 == mercury__maybe__CastY_13);
#line 43 "maybe.m"
    if (mercury__maybe__succeeded)
#line 1873 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "maybe.m"
    else
#line 43 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 43 "maybe.m"
        {
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 43 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 43 "maybe.m"
            {
#line 43 "maybe.m"
              MR_Box mercury__maybe__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 43 "maybe.m"
              {
#line 43 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_E_15, mercury__maybe__HeadVar__1_1, mercury__maybe__V_16_16, mercury__maybe__V_11_11);
#line 43 "maybe.m"
                return;
              }
#line 43 "maybe.m"
            }
#line 43 "maybe.m"
          else
#line 1902 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "maybe.m"
        }
#line 43 "maybe.m"
      else
#line 43 "maybe.m"
        {
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 43 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1915 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "maybe.m"
          else
#line 43 "maybe.m"
            {
#line 43 "maybe.m"
              MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 43 "maybe.m"
              {
#line 43 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_14, mercury__maybe__HeadVar__1_1, mercury__maybe__V_17_17, mercury__maybe__V_5_5);
#line 43 "maybe.m"
                return;
              }
#line 43 "maybe.m"
            }
#line 43 "maybe.m"
        }
#line 43 "maybe.m"
  }
#line 43 "maybe.m"
}

#line 43 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0(
#line 43 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_9,
#line 43 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_10,
#line 43 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 43 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 43 "maybe.m"
{
#line 43 "maybe.m"
  {
#line 43 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 43 "maybe.m"
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 43 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 43 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 43 "maybe.m"
    if (mercury__maybe__succeeded)
#line 43 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 43 "maybe.m"
    else
#line 43 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 43 "maybe.m"
        {
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_6_6;

#line 43 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 43 "maybe.m"
          if (mercury__maybe__succeeded)
#line 43 "maybe.m"
            {
#line 43 "maybe.m"
              mercury__maybe__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 1987 "maybe.c"
              {
#line 1989 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_10, mercury__maybe__V_5_5, mercury__maybe__V_6_6);
              }
#line 43 "maybe.m"
            }
#line 43 "maybe.m"
        }
#line 43 "maybe.m"
      else
#line 43 "maybe.m"
        {
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 43 "maybe.m"
          MR_Box mercury__maybe__V_4_4;

#line 43 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 43 "maybe.m"
          if (mercury__maybe__succeeded)
#line 43 "maybe.m"
            {
#line 43 "maybe.m"
              mercury__maybe__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 2013 "maybe.c"
              {
#line 2015 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__V_3_3, mercury__maybe__V_4_4);
              }
#line 43 "maybe.m"
            }
#line 43 "maybe.m"
        }
#line 43 "maybe.m"
    return mercury__maybe__succeeded;
#line 43 "maybe.m"
  }
#line 43 "maybe.m"
}

#line 40 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0(
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_6,
#line 40 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 40 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 40 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 40 "maybe.m"
{
#line 40 "maybe.m"
  {
#line 40 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 40 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 40 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_4 = mercury__maybe__HeadVar__2_2;
#line 40 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_5 = mercury__maybe__HeadVar__3_3;

#line 40 "maybe.m"
    {
#line 40 "maybe.m"
      mercury__maybe____Compare____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_6, mercury__maybe__TypeCtorInfo_7_7, mercury__maybe__HeadVar__1_1, mercury__maybe__Cast_HeadVar1_4, mercury__maybe__Cast_HeadVar2_5);
#line 40 "maybe.m"
      return;
    }
#line 40 "maybe.m"
  }
#line 40 "maybe.m"
}

#line 40 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0(
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_5,
#line 40 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 40 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 40 "maybe.m"
{
#line 40 "maybe.m"
  {
#line 40 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 40 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 40 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_3 = mercury__maybe__HeadVar__1_1;
#line 40 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_4 = mercury__maybe__HeadVar__2_2;

#line 40 "maybe.m"
    {
#line 40 "maybe.m"
      return mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_5, mercury__maybe__TypeCtorInfo_6_6, mercury__maybe__Cast_HeadVar1_3, mercury__maybe__Cast_HeadVar2_4);
    }
#line 40 "maybe.m"
    return mercury__maybe__succeeded;
#line 40 "maybe.m"
  }
#line 40 "maybe.m"
}

#line 36 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0(
#line 36 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 36 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 36 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 36 "maybe.m"
{
#line 36 "maybe.m"
  {
#line 36 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 36 "maybe.m"
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 36 "maybe.m"
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 36 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
#line 36 "maybe.m"
    if (mercury__maybe__succeeded)
#line 2123 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "maybe.m"
    else
#line 36 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "maybe.m"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "maybe.m"
        else
#line 2135 "maybe.c"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "maybe.m"
      else
#line 36 "maybe.m"
        {
#line 36 "maybe.m"
          MR_String mercury__maybe__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "maybe.m"
          if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "maybe.m"
          else
#line 36 "maybe.m"
            {
#line 36 "maybe.m"
              MR_String mercury__maybe__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "maybe.m"
              MR_Integer mercury__maybe__Res_7_15;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__maybe____Compare____maybe_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__maybe__V_11_11 ;
	S2 =  mercury__maybe__V_7_7 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2172 "maybe.c"

		;}
#undef MR_PROC_LABEL
	 mercury__maybe__Res_7_15  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__maybe__succeeded = (mercury__maybe__Res_7_15 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__maybe__succeeded)
#line 104 "private_builtin.opt"
                *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__maybe__succeeded = (mercury__maybe__Res_7_15 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__maybe__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 36 "maybe.m"
            }
#line 36 "maybe.m"
        }
#line 36 "maybe.m"
  }
#line 36 "maybe.m"
}

#line 36 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0(
#line 36 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 36 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 36 "maybe.m"
{
#line 36 "maybe.m"
  {
#line 36 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 36 "maybe.m"
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 36 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 36 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 36 "maybe.m"
    if (mercury__maybe__succeeded)
#line 36 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 36 "maybe.m"
    else
#line 36 "maybe.m"
      if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "maybe.m"
        {
#line 36 "maybe.m"
          MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 36 "maybe.m"
          MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 36 "maybe.m"
          mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
#line 36 "maybe.m"
        }
#line 36 "maybe.m"
      else
#line 36 "maybe.m"
        {
#line 36 "maybe.m"
          MR_String mercury__maybe__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "maybe.m"
          MR_String mercury__maybe__V_6_6;

#line 36 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "maybe.m"
          if (mercury__maybe__succeeded)
#line 36 "maybe.m"
            {
#line 36 "maybe.m"
              mercury__maybe__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));
#line 2266 "maybe.c"
              mercury__maybe__succeeded = (strcmp(mercury__maybe__V_5_5, mercury__maybe__V_6_6) == 0);
#line 36 "maybe.m"
            }
#line 36 "maybe.m"
        }
#line 36 "maybe.m"
    return mercury__maybe__succeeded;
#line 36 "maybe.m"
  }
#line 36 "maybe.m"
}

#line 25 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_1_0(
#line 25 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_10,
#line 25 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 25 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 25 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 25 "maybe.m"
{
#line 25 "maybe.m"
  {
#line 25 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 25 "maybe.m"
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 25 "maybe.m"
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 25 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
#line 25 "maybe.m"
    if (mercury__maybe__succeeded)
#line 2305 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 25 "maybe.m"
    else
#line 25 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 25 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 25 "maybe.m"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 25 "maybe.m"
        else
#line 2317 "maybe.c"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "maybe.m"
      else
#line 25 "maybe.m"
        {
#line 25 "maybe.m"
          MR_Box mercury__maybe__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 25 "maybe.m"
          if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2328 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 25 "maybe.m"
          else
#line 25 "maybe.m"
            {
#line 25 "maybe.m"
              MR_Box mercury__maybe__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 25 "maybe.m"
              {
#line 25 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_10, mercury__maybe__HeadVar__1_1, mercury__maybe__V_11_11, mercury__maybe__V_7_7);
#line 25 "maybe.m"
                return;
              }
#line 25 "maybe.m"
            }
#line 25 "maybe.m"
        }
#line 25 "maybe.m"
  }
#line 25 "maybe.m"
}

#line 25 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0(
#line 25 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_9,
#line 25 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 25 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 25 "maybe.m"
{
#line 25 "maybe.m"
  {
#line 25 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 25 "maybe.m"
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 25 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 25 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 25 "maybe.m"
    if (mercury__maybe__succeeded)
#line 25 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 25 "maybe.m"
    else
#line 25 "maybe.m"
      if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 25 "maybe.m"
        {
#line 25 "maybe.m"
          MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 25 "maybe.m"
          MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 25 "maybe.m"
          mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
#line 25 "maybe.m"
        }
#line 25 "maybe.m"
      else
#line 25 "maybe.m"
        {
#line 25 "maybe.m"
          MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 25 "maybe.m"
          MR_Box mercury__maybe__V_6_6;

#line 25 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 25 "maybe.m"
          if (mercury__maybe__succeeded)
#line 25 "maybe.m"
            {
#line 25 "maybe.m"
              mercury__maybe__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 2411 "maybe.c"
              {
#line 2413 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__V_5_5, mercury__maybe__V_6_6);
              }
#line 25 "maybe.m"
            }
#line 25 "maybe.m"
        }
#line 25 "maybe.m"
    return mercury__maybe__succeeded;
#line 25 "maybe.m"
  }
#line 25 "maybe.m"
}

#line 154 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__maybe_is_yes_2_p_0(
#line 154 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_4,
#line 154 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 154 "maybe.m"
  MR_Box * mercury__maybe__X_3)
#line 154 "maybe.m"
{
#line 185 "maybe.m"
  {
#line 185 "maybe.m"
    MR_bool mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 185 "maybe.m"
    if (mercury__maybe__succeeded)
#line 185 "maybe.m"
      *mercury__maybe__X_3 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 185 "maybe.m"
    return mercury__maybe__succeeded;
#line 185 "maybe.m"
  }
#line 154 "maybe.m"
}

#line 147 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_5(
#line 147 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 147 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 147 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 147 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 147 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 147 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 147 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 147 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 147 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 147 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 147 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 147 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 147 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 147 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 147 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        if (mercury__maybe__succeeded)
#line 182 "maybe.m"
          {
#line 182 "maybe.m"
            {
#line 182 "maybe.m"
              MR_Word base;
#line 182 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
            }
#line 182 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 182 "maybe.m"
          }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
    return mercury__maybe__succeeded;
#line 181 "maybe.m"
  }
#line 147 "maybe.m"
}

#line 145 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_4(
#line 145 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 145 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 145 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 145 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 145 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 145 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 145 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 145 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 145 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 145 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 145 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 145 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 145 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 145 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 145 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        if (mercury__maybe__succeeded)
#line 182 "maybe.m"
          {
#line 182 "maybe.m"
            {
#line 182 "maybe.m"
              MR_Word base;
#line 182 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
            }
#line 182 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 182 "maybe.m"
          }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
    return mercury__maybe__succeeded;
#line 181 "maybe.m"
  }
#line 145 "maybe.m"
}

#line 143 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_3(
#line 143 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 143 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 143 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 143 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 143 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 143 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 143 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 143 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 143 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 143 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 143 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 143 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 143 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 143 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 143 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        if (mercury__maybe__succeeded)
#line 182 "maybe.m"
          {
#line 182 "maybe.m"
            {
#line 182 "maybe.m"
              MR_Word base;
#line 182 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
            }
#line 182 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 182 "maybe.m"
          }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
    return mercury__maybe__succeeded;
#line 181 "maybe.m"
  }
#line 143 "maybe.m"
}

#line 141 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_2(
#line 141 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 141 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 141 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 141 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 141 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 141 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 141 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 141 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 141 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 141 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 141 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 141 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 141 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 141 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 141 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        {
#line 182 "maybe.m"
          MR_Word base;
#line 182 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
        }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
  }
#line 141 "maybe.m"
}

#line 139 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_1(
#line 139 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 139 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 139 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 139 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 139 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 139 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 139 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 139 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 139 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 139 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 139 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 139 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 139 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 139 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 139 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        {
#line 182 "maybe.m"
          MR_Word base;
#line 182 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
        }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
  }
#line 139 "maybe.m"
}

#line 137 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_0(
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 137 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 137 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 137 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 137 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 137 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 137 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 137 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 137 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 137 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 137 "maybe.m"
{
#line 181 "maybe.m"
  {
#line 181 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 181 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 181 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 181 "maybe.m"
      }
#line 181 "maybe.m"
    else
#line 182 "maybe.m"
      {
#line 182 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 182 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 183 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 183 "maybe.m"
        {
#line 183 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 182 "maybe.m"
        {
#line 182 "maybe.m"
          MR_Word base;
#line 182 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 182 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 182 "maybe.m"
        }
#line 182 "maybe.m"
      }
#line 181 "maybe.m"
  }
#line 137 "maybe.m"
}

#line 130 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_5(
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 130 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 130 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 130 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 130 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 130 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 130 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 130 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 130 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        if (mercury__maybe__succeeded)
#line 178 "maybe.m"
          {
#line 178 "maybe.m"
            {
#line 178 "maybe.m"
              MR_Word base;
#line 178 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
            }
#line 178 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 178 "maybe.m"
          }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
    return mercury__maybe__succeeded;
#line 177 "maybe.m"
  }
#line 130 "maybe.m"
}

#line 128 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_4(
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 128 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 128 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 128 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 128 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 128 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 128 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 128 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 128 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        if (mercury__maybe__succeeded)
#line 178 "maybe.m"
          {
#line 178 "maybe.m"
            {
#line 178 "maybe.m"
              MR_Word base;
#line 178 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
            }
#line 178 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 178 "maybe.m"
          }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
    return mercury__maybe__succeeded;
#line 177 "maybe.m"
  }
#line 128 "maybe.m"
}

#line 126 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_3(
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 126 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 126 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 126 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 126 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 126 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 126 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 126 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 126 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        if (mercury__maybe__succeeded)
#line 178 "maybe.m"
          {
#line 178 "maybe.m"
            {
#line 178 "maybe.m"
              MR_Word base;
#line 178 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
            }
#line 178 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 178 "maybe.m"
          }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
    return mercury__maybe__succeeded;
#line 177 "maybe.m"
  }
#line 126 "maybe.m"
}

#line 124 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_2(
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 124 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 124 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 124 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 124 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 124 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 124 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 124 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 124 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          MR_Word base;
#line 178 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
        }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
  }
#line 124 "maybe.m"
}

#line 122 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_1(
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 122 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 122 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 122 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 122 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 122 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 122 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 122 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 122 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          MR_Word base;
#line 178 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
        }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
  }
#line 122 "maybe.m"
}

#line 120 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_0(
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 120 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 120 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 120 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 120 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 120 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 120 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 120 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 120 "maybe.m"
{
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      {
#line 177 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 177 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 179 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 179 "maybe.m"
        {
#line 179 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          MR_Word base;
#line 178 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 178 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 178 "maybe.m"
        }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
  }
#line 120 "maybe.m"
}

#line 113 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_5(
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 113 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 113 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 113 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 113 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 113 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 113 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        if (mercury__maybe__succeeded)
#line 174 "maybe.m"
          {
#line 174 "maybe.m"
            {
#line 174 "maybe.m"
              MR_Word base;
#line 174 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
            }
#line 174 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 174 "maybe.m"
          }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
    return mercury__maybe__succeeded;
#line 173 "maybe.m"
  }
#line 113 "maybe.m"
}

#line 111 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_4(
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 111 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 111 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 111 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 111 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 111 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 111 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        if (mercury__maybe__succeeded)
#line 174 "maybe.m"
          {
#line 174 "maybe.m"
            {
#line 174 "maybe.m"
              MR_Word base;
#line 174 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
            }
#line 174 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 174 "maybe.m"
          }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
    return mercury__maybe__succeeded;
#line 173 "maybe.m"
  }
#line 111 "maybe.m"
}

#line 109 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_3(
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 109 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 109 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 109 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 109 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 109 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 109 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        if (mercury__maybe__succeeded)
#line 174 "maybe.m"
          {
#line 174 "maybe.m"
            {
#line 174 "maybe.m"
              MR_Word base;
#line 174 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
            }
#line 174 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 174 "maybe.m"
          }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
    return mercury__maybe__succeeded;
#line 173 "maybe.m"
  }
#line 109 "maybe.m"
}

#line 107 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_2(
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 107 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 107 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 107 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 107 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 107 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 107 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        {
#line 174 "maybe.m"
          MR_Word base;
#line 174 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
        }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
  }
#line 107 "maybe.m"
}

#line 105 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_1(
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 105 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 105 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 105 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 105 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 105 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 105 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        {
#line 174 "maybe.m"
          MR_Word base;
#line 174 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
        }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
  }
#line 105 "maybe.m"
}

#line 103 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_0(
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 103 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 103 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 103 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 103 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 103 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 103 "maybe.m"
{
#line 173 "maybe.m"
  {
#line 173 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 173 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "maybe.m"
      {
#line 173 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 173 "maybe.m"
      }
#line 173 "maybe.m"
    else
#line 174 "maybe.m"
      {
#line 174 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 174 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 175 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 175 "maybe.m"
        {
#line 175 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 174 "maybe.m"
        {
#line 174 "maybe.m"
          MR_Word base;
#line 174 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 174 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 174 "maybe.m"
        }
#line 174 "maybe.m"
      }
#line 173 "maybe.m"
  }
#line 103 "maybe.m"
}

#line 96 "maybe.m"
MR_Box MR_CALL 
mercury__maybe__fold_maybe_3_f_0(
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_10,
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_11,
#line 96 "maybe.m"
  MR_Word mercury__maybe__F_1,
#line 96 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 96 "maybe.m"
  MR_Box mercury__maybe__HeadVar__3_3)
#line 96 "maybe.m"
{
#line 170 "maybe.m"
  {
#line 170 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 170 "maybe.m"
    MR_Box mercury__maybe__HeadVar__4_4;

#line 170 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "maybe.m"
      mercury__maybe__HeadVar__4_4 = mercury__maybe__HeadVar__3_3;
#line 170 "maybe.m"
    else
#line 171 "maybe.m"
      {
#line 171 "maybe.m"
        MR_Box mercury__maybe__Value_8 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 171 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 171 "maybe.m"
        {
#line 171 "maybe.m"
          mercury__maybe__HeadVar__4_4 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__Value_8, mercury__maybe__HeadVar__3_3);
        }
#line 171 "maybe.m"
      }
#line 170 "maybe.m"
    return mercury__maybe__HeadVar__4_4;
#line 170 "maybe.m"
  }
#line 96 "maybe.m"
}

#line 91 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_5(
#line 91 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 91 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 91 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 91 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 91 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 91 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 91 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      {
#line 167 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 167 "maybe.m"
      }
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
    return mercury__maybe__succeeded;
#line 167 "maybe.m"
  }
#line 91 "maybe.m"
}

#line 90 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_4(
#line 90 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 90 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 90 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 90 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 90 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 90 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 90 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      {
#line 167 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 167 "maybe.m"
      }
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
    return mercury__maybe__succeeded;
#line 167 "maybe.m"
  }
#line 90 "maybe.m"
}

#line 89 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_3(
#line 89 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 89 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 89 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 89 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 89 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 89 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 89 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      {
#line 167 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 167 "maybe.m"
      }
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
    return mercury__maybe__succeeded;
#line 167 "maybe.m"
  }
#line 89 "maybe.m"
}

#line 88 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_2(
#line 88 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 88 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 88 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 88 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 88 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 88 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 88 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 168 "maybe.m"
          return;
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
  }
#line 88 "maybe.m"
}

#line 87 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_1(
#line 87 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 87 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 87 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 87 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 87 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 87 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 87 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 168 "maybe.m"
          return;
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
  }
#line 87 "maybe.m"
}

#line 86 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_0(
#line 86 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 86 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 86 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 86 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 86 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 86 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 86 "maybe.m"
{
#line 167 "maybe.m"
  {
#line 167 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 167 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 167 "maybe.m"
    else
#line 168 "maybe.m"
      {
#line 168 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 168 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 168 "maybe.m"
        {
#line 168 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 168 "maybe.m"
          return;
        }
#line 168 "maybe.m"
      }
#line 167 "maybe.m"
  }
#line 86 "maybe.m"
}

#line 80 "maybe.m"
MR_Word MR_CALL 
mercury__maybe__map_maybe_2_f_0(
#line 80 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 80 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 80 "maybe.m"
  MR_Word mercury__maybe__F_1,
#line 80 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 80 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 164 "maybe.m"
    MR_Word mercury__maybe__HeadVar__3_3;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__V_7_7;
#line 165 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 165 "maybe.m"
        {
#line 165 "maybe.m"
          mercury__maybe__V_7_7 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__T_6);
        }
#line 165 "maybe.m"
        {
#line 165 "maybe.m"
          mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
          MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, 0) = mercury__maybe__V_7_7;
#line 165 "maybe.m"
        }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
    return mercury__maybe__HeadVar__3_3;
#line 164 "maybe.m"
  }
#line 80 "maybe.m"
}

#line 162 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 162 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 162 "maybe.m"
{
#line 162 "maybe.m"
  {
#line 162 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_3_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_3_env_0_s *) mercury__maybe__env_ptr_arg;

#line 162 "maybe.m"
    {
#line 162 "maybe.m"
      MR_Word base;
#line 162 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = base;
#line 162 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__T_7;
#line 162 "maybe.m"
    }
#line 162 "maybe.m"
    {
#line 162 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 162 "maybe.m"
      return;
    }
#line 162 "maybe.m"
  }
#line 162 "maybe.m"
}

#line 75 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_3(
#line 75 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 75 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 75 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 75 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 75 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 75 "maybe.m"
  MR_Cont mercury__maybe__cont,
#line 75 "maybe.m"
  void * mercury__maybe__cont_env_ptr)
#line 75 "maybe.m"
{
#line 75 "maybe.m"
  {
#line 75 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_3_env_0_s mercury__maybe__env;

#line 75 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
#line 75 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont = mercury__maybe__cont;
#line 75 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
#line 161 "maybe.m"
    {
#line 161 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 161 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "maybe.m"
        {
#line 161 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "maybe.m"
          {
#line 161 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 161 "maybe.m"
            return;
          }
#line 161 "maybe.m"
        }
#line 161 "maybe.m"
      else
#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 162 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
          {
#line 162 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__T_7, mercury__maybe__map_maybe_3_p_3_1, &mercury__maybe__env);
          }
#line 162 "maybe.m"
        }
#line 161 "maybe.m"
    }
#line 75 "maybe.m"
  }
#line 75 "maybe.m"
}

#line 162 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 162 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 162 "maybe.m"
{
#line 162 "maybe.m"
  {
#line 162 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_2_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_2_env_0_s *) mercury__maybe__env_ptr_arg;

#line 162 "maybe.m"
    {
#line 162 "maybe.m"
      MR_Word base;
#line 162 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = base;
#line 162 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 162 "maybe.m"
    }
#line 162 "maybe.m"
    {
#line 162 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 162 "maybe.m"
      return;
    }
#line 162 "maybe.m"
  }
#line 162 "maybe.m"
}

#line 74 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_2(
#line 74 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 74 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 74 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 74 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 74 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 74 "maybe.m"
  MR_Cont mercury__maybe__cont,
#line 74 "maybe.m"
  void * mercury__maybe__cont_env_ptr)
#line 74 "maybe.m"
{
#line 74 "maybe.m"
  {
#line 74 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_2_env_0_s mercury__maybe__env;

#line 74 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
#line 74 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont = mercury__maybe__cont;
#line 74 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
#line 161 "maybe.m"
    {
#line 161 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 161 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "maybe.m"
        {
#line 161 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "maybe.m"
          {
#line 161 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 161 "maybe.m"
            return;
          }
#line 161 "maybe.m"
        }
#line 161 "maybe.m"
      else
#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 162 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
          {
#line 162 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__T_7, mercury__maybe__map_maybe_3_p_2_1, &mercury__maybe__env);
          }
#line 162 "maybe.m"
        }
#line 161 "maybe.m"
    }
#line 74 "maybe.m"
  }
#line 74 "maybe.m"
}

#line 73 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_maybe_3_p_1(
#line 73 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 73 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 73 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 73 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 73 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3)
#line 73 "maybe.m"
{
#line 161 "maybe.m"
  {
#line 161 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 161 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 161 "maybe.m"
      }
#line 161 "maybe.m"
    else
#line 162 "maybe.m"
      {
#line 162 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 162 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 162 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
#line 162 "maybe.m"
        if (mercury__maybe__succeeded)
#line 162 "maybe.m"
          {
#line 162 "maybe.m"
            {
#line 162 "maybe.m"
              MR_Word base;
#line 162 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 162 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
#line 162 "maybe.m"
            }
#line 162 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 162 "maybe.m"
          }
#line 162 "maybe.m"
      }
#line 161 "maybe.m"
    return mercury__maybe__succeeded;
#line 161 "maybe.m"
  }
#line 73 "maybe.m"
}

#line 72 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_0(
#line 72 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 72 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 72 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 72 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 72 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3)
#line 72 "maybe.m"
{
#line 161 "maybe.m"
  {
#line 161 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 161 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "maybe.m"
      *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "maybe.m"
    else
#line 162 "maybe.m"
      {
#line 162 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 162 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 162 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          MR_Word base;
#line 162 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 162 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
#line 162 "maybe.m"
        }
#line 162 "maybe.m"
      }
#line 161 "maybe.m"
  }
#line 72 "maybe.m"
}

void mercury__maybe__init(void)
{
}

void mercury__maybe__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_1);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_2);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_1);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_0);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_errors_2);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_errors_1);
}

void mercury__maybe__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module maybe. */
