/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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



#line 75 "maybe.m"
struct mercury__maybe__map_maybe_3_p_3_env_0_s {
#line 75 "maybe.m"
  MR_Word * mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3;
#line 75 "maybe.m"
  MR_Cont mercury__maybe__map_maybe_3_p_3_env_0__cont;
#line 75 "maybe.m"
  void * mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr;
#line 178 "maybe.m"
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
#line 178 "maybe.m"
  MR_Box mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 74 "maybe.m"
};


#line 119 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0;

#line 122 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1];

#line 125 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1;

#line 128 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1];

#line 131 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1];

#line 134 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2];

#line 137 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2];

#line 140 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2];

#line 143 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1];

#line 146 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0;

#line 149 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1];

#line 152 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1;

#line 155 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1];

#line 158 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1];

#line 161 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2];

#line 164 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2];

#line 167 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2];

#line 170 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 173 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0;

#line 176 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1];

#line 179 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1;

#line 182 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1];

#line 185 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1];

#line 188 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2];

#line 191 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2];

#line 194 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2];

#line 197 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1];

#line 200 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0;

#line 203 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2;

#line 206 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2];

#line 209 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1;

#line 212 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1];

#line 215 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1];

#line 218 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2];

#line 221 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2];

#line 224 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2];

#line 227 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 230 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 233 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 235 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 237 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 240 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 243 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 245 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 247 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 249 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 252 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 255 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 257 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 259 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 261 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 264 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 267 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 269 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 271 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 273 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 275 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5);

#line 278 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 281 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 283 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 285 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 288 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 291 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 293 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 295 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 297 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 300 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 303 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 305 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2);

#line 308 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 311 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 313 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 315 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 318 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
#line 321 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 323 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 325 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 327 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 330 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
#line 333 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 335 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 337 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 339 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 341 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5);

#line 344 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
#line 347 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 349 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 351 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 354 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
#line 357 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 359 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 361 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 363 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 178 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 178 "maybe.m"
  void * mercury__maybe__env_ptr_arg);

#line 178 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 178 "maybe.m"
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



#line 744 "maybe.c"
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

#line 759 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 764 "maybe.c"
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

#line 779 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0
};

#line 784 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 789 "maybe.c"
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

#line 803 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0,
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 809 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 815 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe",
  {     mercury__maybe__maybe__du_name_ordered_maybe_1 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_1
};

#line 832 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 837 "maybe.c"
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

#line 852 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 857 "maybe.c"
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

#line 872 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 877 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1
};

#line 882 "maybe.c"
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

#line 896 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 902 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 908 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_2
};

#line 925 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 934 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 951 "maybe.c"
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

#line 966 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 971 "maybe.c"
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

#line 986 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 991 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1
};

#line 996 "maybe.c"
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

#line 1010 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 1016 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1022 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_0_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_0_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_0 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_0
};

#line 1039 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1044 "maybe.c"
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

#line 1059 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1067 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__maybe__list__pti_list_1__pseudo_2
};

#line 1073 "maybe.c"
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

#line 1088 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

#line 1093 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1
};

#line 1098 "maybe.c"
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

#line 1112 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

#line 1118 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1124 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     mercury__maybe__maybe__du_name_ordered_maybe_errors_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_errors_2
};

#line 1141 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_errors_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1150 "maybe.c"
const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1167 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 1170 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1172 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1174 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1176 "maybe.c"
{
#line 1178 "maybe.c"
  {
#line 1180 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1183 "maybe.c"
    {
#line 1185 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1188 "maybe.c"
    return mercury__maybe__succeeded;
#line 1190 "maybe.c"
  }
#line 1192 "maybe.c"
}

#line 1195 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 1198 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1200 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1202 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1204 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1206 "maybe.c"
{
#line 1208 "maybe.c"
  {
#line 1210 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1213 "maybe.c"
    {
#line 1215 "maybe.c"
      mercury__maybe____Compare____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1218 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1220 "maybe.c"
  }
#line 1222 "maybe.c"
}

#line 1225 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 1228 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1230 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1232 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1234 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1236 "maybe.c"
{
#line 1238 "maybe.c"
  {
#line 1240 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1243 "maybe.c"
    {
#line 1245 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1248 "maybe.c"
    return mercury__maybe__succeeded;
#line 1250 "maybe.c"
  }
#line 1252 "maybe.c"
}

#line 1255 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 1258 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1260 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1262 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 1264 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 1266 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5)
#line 1268 "maybe.c"
{
#line 1270 "maybe.c"
  {
#line 1272 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1275 "maybe.c"
    {
#line 1277 "maybe.c"
      mercury__maybe____Compare____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
#line 1280 "maybe.c"
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1282 "maybe.c"
  }
#line 1284 "maybe.c"
}

#line 1287 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 1290 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1292 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1294 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1296 "maybe.c"
{
#line 1298 "maybe.c"
  {
#line 1300 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1303 "maybe.c"
    {
#line 1305 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1308 "maybe.c"
    return mercury__maybe__succeeded;
#line 1310 "maybe.c"
  }
#line 1312 "maybe.c"
}

#line 1315 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 1318 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1320 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1322 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1324 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1326 "maybe.c"
{
#line 1328 "maybe.c"
  {
#line 1330 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1333 "maybe.c"
    {
#line 1335 "maybe.c"
      mercury__maybe____Compare____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1338 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1340 "maybe.c"
  }
#line 1342 "maybe.c"
}

#line 1345 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 1348 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1350 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2)
#line 1352 "maybe.c"
{
#line 1354 "maybe.c"
  {
#line 1356 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1359 "maybe.c"
    {
#line 1361 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_0_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2));
    }
#line 1364 "maybe.c"
    return mercury__maybe__succeeded;
#line 1366 "maybe.c"
  }
#line 1368 "maybe.c"
}

#line 1371 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 1374 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 1376 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1378 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1380 "maybe.c"
{
#line 1382 "maybe.c"
  {
#line 1384 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1387 "maybe.c"
    {
#line 1389 "maybe.c"
      mercury__maybe____Compare____maybe_error_0_0(&mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1392 "maybe.c"
    *mercury__maybe__wrapper_arg_1 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1394 "maybe.c"
  }
#line 1396 "maybe.c"
}

#line 1399 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
#line 1402 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1404 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1406 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1408 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1410 "maybe.c"
{
#line 1412 "maybe.c"
  {
#line 1414 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1417 "maybe.c"
    {
#line 1419 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1422 "maybe.c"
    return mercury__maybe__succeeded;
#line 1424 "maybe.c"
  }
#line 1426 "maybe.c"
}

#line 1429 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
#line 1432 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1434 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1436 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 1438 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 1440 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5)
#line 1442 "maybe.c"
{
#line 1444 "maybe.c"
  {
#line 1446 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1449 "maybe.c"
    {
#line 1451 "maybe.c"
      mercury__maybe____Compare____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
#line 1454 "maybe.c"
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1456 "maybe.c"
  }
#line 1458 "maybe.c"
}

#line 1461 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
#line 1464 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1466 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1468 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1470 "maybe.c"
{
#line 1472 "maybe.c"
  {
#line 1474 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1477 "maybe.c"
    {
#line 1479 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1482 "maybe.c"
    return mercury__maybe__succeeded;
#line 1484 "maybe.c"
  }
#line 1486 "maybe.c"
}

#line 1489 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
#line 1492 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1494 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1496 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1498 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1500 "maybe.c"
{
#line 1502 "maybe.c"
  {
#line 1504 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1507 "maybe.c"
    {
#line 1509 "maybe.c"
      mercury__maybe____Compare____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1512 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1514 "maybe.c"
  }
#line 1516 "maybe.c"
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
#line 1564 "maybe.c"
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
#line 1593 "maybe.c"
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
#line 1614 "maybe.c"
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
#line 1627 "maybe.c"
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
#line 1705 "maybe.c"
            {
#line 1707 "maybe.c"
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_12, mercury__maybe__V_5_5, mercury__maybe__V_7_7);
            }
#line 57 "maybe.m"
            if (mercury__maybe__succeeded)
#line 1712 "maybe.c"
              {
#line 1714 "maybe.c"
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
#line 1738 "maybe.c"
            {
#line 1740 "maybe.c"
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
#line 1852 "maybe.c"
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
#line 1881 "maybe.c"
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
#line 1894 "maybe.c"
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
#line 1966 "maybe.c"
            {
#line 1968 "maybe.c"
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
#line 1992 "maybe.c"
            {
#line 1994 "maybe.c"
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
#line 2102 "maybe.c"
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
#line 2114 "maybe.c"
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "maybe.m"
    else
#line 36 "maybe.m"
      {
#line 36 "maybe.m"
        MR_String mercury__maybe__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2125 "maybe.c"
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

#line 2151 "maybe.c"

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
#line 2245 "maybe.c"
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
#line 2284 "maybe.c"
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
#line 2296 "maybe.c"
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 25 "maybe.m"
    else
#line 25 "maybe.m"
      {
#line 25 "maybe.m"
        MR_Box mercury__maybe__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 25 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2307 "maybe.c"
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
#line 2390 "maybe.c"
            {
#line 2392 "maybe.c"
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

#line 170 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__maybe_is_yes_2_p_0(
#line 170 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_4,
#line 170 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 170 "maybe.m"
  MR_Box * mercury__maybe__X_3)
#line 170 "maybe.m"
{
#line 206 "maybe.m"
  {
#line 206 "maybe.m"
    MR_bool mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 206 "maybe.m"
    if (mercury__maybe__succeeded)
#line 206 "maybe.m"
      *mercury__maybe__X_3 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 206 "maybe.m"
    return mercury__maybe__succeeded;
#line 206 "maybe.m"
  }
#line 170 "maybe.m"
}

#line 163 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_5(
#line 163 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 163 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 163 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 163 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 163 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 163 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 163 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 163 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 163 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 163 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 163 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 163 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 163 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 163 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 163 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        if (mercury__maybe__succeeded)
#line 203 "maybe.m"
          {
#line 203 "maybe.m"
            {
#line 203 "maybe.m"
              MR_Word base;
#line 203 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
            }
#line 203 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 203 "maybe.m"
          }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
    return mercury__maybe__succeeded;
#line 202 "maybe.m"
  }
#line 163 "maybe.m"
}

#line 161 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_4(
#line 161 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 161 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 161 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 161 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 161 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 161 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 161 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 161 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 161 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 161 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 161 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 161 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 161 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 161 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 161 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        if (mercury__maybe__succeeded)
#line 203 "maybe.m"
          {
#line 203 "maybe.m"
            {
#line 203 "maybe.m"
              MR_Word base;
#line 203 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
            }
#line 203 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 203 "maybe.m"
          }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
    return mercury__maybe__succeeded;
#line 202 "maybe.m"
  }
#line 161 "maybe.m"
}

#line 159 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_3(
#line 159 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 159 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 159 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 159 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 159 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 159 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 159 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 159 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 159 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 159 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 159 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 159 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 159 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 159 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 159 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        if (mercury__maybe__succeeded)
#line 203 "maybe.m"
          {
#line 203 "maybe.m"
            {
#line 203 "maybe.m"
              MR_Word base;
#line 203 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
            }
#line 203 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 203 "maybe.m"
          }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
    return mercury__maybe__succeeded;
#line 202 "maybe.m"
  }
#line 159 "maybe.m"
}

#line 157 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_2(
#line 157 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 157 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 157 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 157 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 157 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 157 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 157 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 157 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 157 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 157 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 157 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 157 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 157 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 157 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 157 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        {
#line 203 "maybe.m"
          MR_Word base;
#line 203 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
        }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
  }
#line 157 "maybe.m"
}

#line 155 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_1(
#line 155 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 155 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 155 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 155 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 155 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 155 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 155 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 155 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 155 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 155 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 155 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 155 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 155 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 155 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 155 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        {
#line 203 "maybe.m"
          MR_Word base;
#line 203 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
        }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
  }
#line 155 "maybe.m"
}

#line 153 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_0(
#line 153 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 153 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 153 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 153 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 153 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
#line 153 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 153 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 153 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 153 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 153 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 153 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 153 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 153 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 153 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 153 "maybe.m"
{
#line 202 "maybe.m"
  {
#line 202 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 202 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "maybe.m"
      {
#line 202 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 202 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 202 "maybe.m"
      }
#line 202 "maybe.m"
    else
#line 203 "maybe.m"
      {
#line 203 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 203 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 204 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 204 "maybe.m"
        {
#line 204 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 203 "maybe.m"
        {
#line 203 "maybe.m"
          MR_Word base;
#line 203 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 203 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 203 "maybe.m"
        }
#line 203 "maybe.m"
      }
#line 202 "maybe.m"
  }
#line 153 "maybe.m"
}

#line 146 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_5(
#line 146 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 146 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 146 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 146 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 146 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 146 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 146 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 146 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 146 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 146 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 146 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 146 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        if (mercury__maybe__succeeded)
#line 199 "maybe.m"
          {
#line 199 "maybe.m"
            {
#line 199 "maybe.m"
              MR_Word base;
#line 199 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
            }
#line 199 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 199 "maybe.m"
          }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
    return mercury__maybe__succeeded;
#line 198 "maybe.m"
  }
#line 146 "maybe.m"
}

#line 144 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_4(
#line 144 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 144 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 144 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 144 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 144 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 144 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 144 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 144 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 144 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 144 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 144 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 144 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        if (mercury__maybe__succeeded)
#line 199 "maybe.m"
          {
#line 199 "maybe.m"
            {
#line 199 "maybe.m"
              MR_Word base;
#line 199 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
            }
#line 199 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 199 "maybe.m"
          }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
    return mercury__maybe__succeeded;
#line 198 "maybe.m"
  }
#line 144 "maybe.m"
}

#line 142 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_3(
#line 142 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 142 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 142 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 142 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 142 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 142 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 142 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 142 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 142 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 142 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 142 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 142 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        if (mercury__maybe__succeeded)
#line 199 "maybe.m"
          {
#line 199 "maybe.m"
            {
#line 199 "maybe.m"
              MR_Word base;
#line 199 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
            }
#line 199 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 199 "maybe.m"
          }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
    return mercury__maybe__succeeded;
#line 198 "maybe.m"
  }
#line 142 "maybe.m"
}

#line 140 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_2(
#line 140 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 140 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 140 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 140 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 140 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 140 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 140 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 140 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 140 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 140 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 140 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 140 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        {
#line 199 "maybe.m"
          MR_Word base;
#line 199 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
        }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
  }
#line 140 "maybe.m"
}

#line 138 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_1(
#line 138 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 138 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 138 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 138 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 138 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 138 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 138 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 138 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 138 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 138 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 138 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 138 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        {
#line 199 "maybe.m"
          MR_Word base;
#line 199 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
        }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
  }
#line 138 "maybe.m"
}

#line 136 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_0(
#line 136 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 136 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 136 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 136 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 136 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 136 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 136 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 136 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 136 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 136 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 136 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 136 "maybe.m"
{
#line 198 "maybe.m"
  {
#line 198 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 198 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "maybe.m"
      {
#line 198 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 198 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 198 "maybe.m"
      }
#line 198 "maybe.m"
    else
#line 199 "maybe.m"
      {
#line 199 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 199 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 200 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 200 "maybe.m"
        {
#line 200 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 199 "maybe.m"
        {
#line 199 "maybe.m"
          MR_Word base;
#line 199 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 199 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 199 "maybe.m"
        }
#line 199 "maybe.m"
      }
#line 198 "maybe.m"
  }
#line 136 "maybe.m"
}

#line 129 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_5(
#line 129 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 129 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 129 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 129 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 129 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 129 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 129 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 129 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 129 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        if (mercury__maybe__succeeded)
#line 195 "maybe.m"
          {
#line 195 "maybe.m"
            {
#line 195 "maybe.m"
              MR_Word base;
#line 195 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
            }
#line 195 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 195 "maybe.m"
          }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
    return mercury__maybe__succeeded;
#line 194 "maybe.m"
  }
#line 129 "maybe.m"
}

#line 127 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_4(
#line 127 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 127 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 127 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 127 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 127 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 127 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 127 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 127 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 127 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        if (mercury__maybe__succeeded)
#line 195 "maybe.m"
          {
#line 195 "maybe.m"
            {
#line 195 "maybe.m"
              MR_Word base;
#line 195 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
            }
#line 195 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 195 "maybe.m"
          }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
    return mercury__maybe__succeeded;
#line 194 "maybe.m"
  }
#line 127 "maybe.m"
}

#line 125 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_3(
#line 125 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 125 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 125 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 125 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 125 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 125 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 125 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 125 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 125 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        if (mercury__maybe__succeeded)
#line 195 "maybe.m"
          {
#line 195 "maybe.m"
            {
#line 195 "maybe.m"
              MR_Word base;
#line 195 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
            }
#line 195 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 195 "maybe.m"
          }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
    return mercury__maybe__succeeded;
#line 194 "maybe.m"
  }
#line 125 "maybe.m"
}

#line 123 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_2(
#line 123 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 123 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 123 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 123 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 123 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 123 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 123 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 123 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 123 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        {
#line 195 "maybe.m"
          MR_Word base;
#line 195 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
        }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
  }
#line 123 "maybe.m"
}

#line 121 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_1(
#line 121 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 121 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 121 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 121 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 121 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 121 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 121 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 121 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 121 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        {
#line 195 "maybe.m"
          MR_Word base;
#line 195 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
        }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
  }
#line 121 "maybe.m"
}

#line 119 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_0(
#line 119 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 119 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 119 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 119 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 119 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 119 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 119 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 119 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 119 "maybe.m"
{
#line 194 "maybe.m"
  {
#line 194 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 194 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "maybe.m"
      {
#line 194 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 194 "maybe.m"
      }
#line 194 "maybe.m"
    else
#line 195 "maybe.m"
      {
#line 195 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 195 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 196 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 196 "maybe.m"
        {
#line 196 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 195 "maybe.m"
        {
#line 195 "maybe.m"
          MR_Word base;
#line 195 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 195 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 195 "maybe.m"
        }
#line 195 "maybe.m"
      }
#line 194 "maybe.m"
  }
#line 119 "maybe.m"
}

#line 111 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_5(
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 111 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 111 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 111 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 111 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 111 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 111 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 111 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
    return mercury__maybe__succeeded;
#line 190 "maybe.m"
  }
#line 111 "maybe.m"
}

#line 109 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_4(
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 109 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 109 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 109 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 109 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 109 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 109 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 109 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
    return mercury__maybe__succeeded;
#line 190 "maybe.m"
  }
#line 109 "maybe.m"
}

#line 107 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_3(
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 107 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 107 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 107 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 107 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 107 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 107 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 107 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
    return mercury__maybe__succeeded;
#line 190 "maybe.m"
  }
#line 107 "maybe.m"
}

#line 105 "maybe.m"
void MR_CALL 
mercury__maybe__fold2_maybe_6_p_2(
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 105 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 105 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 105 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 105 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 105 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 105 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 105 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
#line 192 "maybe.m"
          return;
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
  }
#line 105 "maybe.m"
}

#line 103 "maybe.m"
void MR_CALL 
mercury__maybe__fold2_maybe_6_p_1(
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 103 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 103 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 103 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 103 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 103 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 103 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 103 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
#line 192 "maybe.m"
          return;
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
  }
#line 103 "maybe.m"
}

#line 101 "maybe.m"
void MR_CALL 
mercury__maybe__fold2_maybe_6_p_0(
#line 101 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_24,
#line 101 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_25,
#line 101 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_V_26,
#line 101 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 101 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 101 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
#line 101 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
#line 101 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
#line 101 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
#line 101 "maybe.m"
{
#line 190 "maybe.m"
  {
#line 190 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 190 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "maybe.m"
      {
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
#line 190 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
#line 190 "maybe.m"
      }
#line 190 "maybe.m"
    else
#line 191 "maybe.m"
      {
#line 191 "maybe.m"
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 192 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 192 "maybe.m"
        {
#line 192 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
#line 192 "maybe.m"
          return;
        }
#line 191 "maybe.m"
      }
#line 190 "maybe.m"
  }
#line 101 "maybe.m"
}

#line 96 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_5(
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 96 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 96 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 96 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 96 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 96 "maybe.m"
{
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      {
#line 186 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 186 "maybe.m"
      }
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
    return mercury__maybe__succeeded;
#line 186 "maybe.m"
  }
#line 96 "maybe.m"
}

#line 95 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_4(
#line 95 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 95 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 95 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 95 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 95 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 95 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 95 "maybe.m"
{
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      {
#line 186 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 186 "maybe.m"
      }
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
    return mercury__maybe__succeeded;
#line 186 "maybe.m"
  }
#line 95 "maybe.m"
}

#line 94 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_3(
#line 94 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 94 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 94 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 94 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 94 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 94 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 94 "maybe.m"
{
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      {
#line 186 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 186 "maybe.m"
      }
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
    return mercury__maybe__succeeded;
#line 186 "maybe.m"
  }
#line 94 "maybe.m"
}

#line 93 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_2(
#line 93 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 93 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 93 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 93 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 93 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 93 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 93 "maybe.m"
{
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 188 "maybe.m"
          return;
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
  }
#line 93 "maybe.m"
}

#line 92 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_1(
#line 92 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 92 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 92 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 92 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 92 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 92 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 92 "maybe.m"
{
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 188 "maybe.m"
          return;
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
  }
#line 92 "maybe.m"
}

#line 91 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_0(
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
#line 186 "maybe.m"
  {
#line 186 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 186 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 186 "maybe.m"
    else
#line 187 "maybe.m"
      {
#line 187 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 188 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 188 "maybe.m"
        {
#line 188 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 188 "maybe.m"
          return;
        }
#line 187 "maybe.m"
      }
#line 186 "maybe.m"
  }
#line 91 "maybe.m"
}

#line 85 "maybe.m"
MR_Box MR_CALL 
mercury__maybe__fold_maybe_3_f_0(
#line 85 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_10,
#line 85 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_11,
#line 85 "maybe.m"
  MR_Word mercury__maybe__F_1,
#line 85 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 85 "maybe.m"
  MR_Box mercury__maybe__HeadVar__3_3)
#line 85 "maybe.m"
{
#line 183 "maybe.m"
  {
#line 183 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 183 "maybe.m"
    MR_Box mercury__maybe__HeadVar__4_4;

#line 183 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "maybe.m"
      mercury__maybe__HeadVar__4_4 = mercury__maybe__HeadVar__3_3;
#line 183 "maybe.m"
    else
#line 184 "maybe.m"
      {
#line 184 "maybe.m"
        MR_Box mercury__maybe__Value_8 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 184 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 184 "maybe.m"
        {
#line 184 "maybe.m"
          mercury__maybe__HeadVar__4_4 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__Value_8, mercury__maybe__HeadVar__3_3);
        }
#line 184 "maybe.m"
      }
#line 183 "maybe.m"
    return mercury__maybe__HeadVar__4_4;
#line 183 "maybe.m"
  }
#line 85 "maybe.m"
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
#line 180 "maybe.m"
  {
#line 180 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 180 "maybe.m"
    MR_Word mercury__maybe__HeadVar__3_3;

#line 180 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "maybe.m"
      mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "maybe.m"
    else
#line 181 "maybe.m"
      {
#line 181 "maybe.m"
        MR_Box mercury__maybe__T_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 181 "maybe.m"
        MR_Box mercury__maybe__V_7_7;
#line 181 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 181 "maybe.m"
        {
#line 181 "maybe.m"
          mercury__maybe__V_7_7 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__T_6);
        }
#line 181 "maybe.m"
        {
#line 181 "maybe.m"
          mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 181 "maybe.m"
          MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, 0) = mercury__maybe__V_7_7;
#line 181 "maybe.m"
        }
#line 181 "maybe.m"
      }
#line 180 "maybe.m"
    return mercury__maybe__HeadVar__3_3;
#line 180 "maybe.m"
  }
#line 80 "maybe.m"
}

#line 178 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 178 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 178 "maybe.m"
{
#line 178 "maybe.m"
  {
#line 178 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_3_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_3_env_0_s *) mercury__maybe__env_ptr_arg;

#line 178 "maybe.m"
    {
#line 178 "maybe.m"
      MR_Word base;
#line 178 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = base;
#line 178 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__T_7;
#line 178 "maybe.m"
    }
#line 178 "maybe.m"
    {
#line 178 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 178 "maybe.m"
      return;
    }
#line 178 "maybe.m"
  }
#line 178 "maybe.m"
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
#line 177 "maybe.m"
    {
#line 177 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
        {
#line 177 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
          {
#line 177 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 177 "maybe.m"
            return;
          }
#line 177 "maybe.m"
        }
#line 177 "maybe.m"
      else
#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 178 "maybe.m"
          {
#line 178 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__T_7, mercury__maybe__map_maybe_3_p_3_1, &mercury__maybe__env);
          }
#line 178 "maybe.m"
        }
#line 177 "maybe.m"
    }
#line 75 "maybe.m"
  }
#line 75 "maybe.m"
}

#line 178 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 178 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 178 "maybe.m"
{
#line 178 "maybe.m"
  {
#line 178 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_2_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_2_env_0_s *) mercury__maybe__env_ptr_arg;

#line 178 "maybe.m"
    {
#line 178 "maybe.m"
      MR_Word base;
#line 178 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = base;
#line 178 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 178 "maybe.m"
    }
#line 178 "maybe.m"
    {
#line 178 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 178 "maybe.m"
      return;
    }
#line 178 "maybe.m"
  }
#line 178 "maybe.m"
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
#line 177 "maybe.m"
    {
#line 177 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
        {
#line 177 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
          {
#line 177 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 177 "maybe.m"
            return;
          }
#line 177 "maybe.m"
        }
#line 177 "maybe.m"
      else
#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 178 "maybe.m"
          {
#line 178 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__T_7, mercury__maybe__map_maybe_3_p_2_1, &mercury__maybe__env);
          }
#line 178 "maybe.m"
        }
#line 177 "maybe.m"
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
        mercury__maybe__succeeded = MR_TRUE;
#line 177 "maybe.m"
      }
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 178 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
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
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
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
#line 177 "maybe.m"
  {
#line 177 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 177 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "maybe.m"
      *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "maybe.m"
    else
#line 178 "maybe.m"
      {
#line 178 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 178 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 178 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 178 "maybe.m"
        {
#line 178 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
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
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
#line 178 "maybe.m"
        }
#line 178 "maybe.m"
      }
#line 177 "maybe.m"
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
