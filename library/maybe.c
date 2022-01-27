/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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



#line 58 "maybe.m"
struct mercury__maybe__map_maybe_3_p_3_env_0_s {
#line 58 "maybe.m"
  MR_Word * mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3;
#line 58 "maybe.m"
  MR_Cont mercury__maybe__map_maybe_3_p_3_env_0__cont;
#line 58 "maybe.m"
  void * mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr;
#line 145 "maybe.m"
  MR_Box mercury__maybe__map_maybe_3_p_3_env_0__T_7;
#line 58 "maybe.m"
};

#line 57 "maybe.m"
struct mercury__maybe__map_maybe_3_p_2_env_0_s {
#line 57 "maybe.m"
  MR_Word * mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3;
#line 57 "maybe.m"
  MR_Cont mercury__maybe__map_maybe_3_p_2_env_0__cont;
#line 57 "maybe.m"
  void * mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr;
#line 145 "maybe.m"
  MR_Box mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 57 "maybe.m"
};


#line 111 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0;

#line 114 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1];

#line 117 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1;

#line 120 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1];

#line 123 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1];

#line 126 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2];

#line 129 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2];

#line 132 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2];

#line 135 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1];

#line 138 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0;

#line 141 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1];

#line 144 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1;

#line 147 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1];

#line 150 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1];

#line 153 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2];

#line 156 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2];

#line 159 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2];

#line 162 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 165 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0;

#line 168 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1];

#line 171 "maybe.c"
static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1;

#line 174 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1];

#line 177 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1];

#line 180 "maybe.c"
static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2];

#line 183 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2];

#line 186 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2];

#line 189 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 192 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 194 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 196 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 199 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 202 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 204 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 206 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 208 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 211 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 214 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 216 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 218 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 220 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 223 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 226 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 228 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 230 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 232 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 234 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5);

#line 237 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 240 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 242 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 244 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 247 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 250 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 252 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 254 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 256 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4);

#line 259 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 262 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 264 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2);

#line 267 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 270 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 272 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 274 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 145 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 145 "maybe.m"
  void * mercury__maybe__env_ptr_arg);

#line 145 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 145 "maybe.m"
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



#line 653 "maybe.c"
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

#line 668 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 673 "maybe.c"
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

#line 688 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0
};

#line 693 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 698 "maybe.c"
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

#line 712 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0,
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

#line 718 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 724 "maybe.c"
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

#line 745 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 750 "maybe.c"
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

#line 765 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 770 "maybe.c"
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

#line 785 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 790 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1
};

#line 795 "maybe.c"
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

#line 809 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

#line 815 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 821 "maybe.c"
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

#line 842 "maybe.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 851 "maybe.c"
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

#line 872 "maybe.c"
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

#line 887 "maybe.c"
static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 892 "maybe.c"
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

#line 907 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 912 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1
};

#line 917 "maybe.c"
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

#line 931 "maybe.c"
static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

#line 937 "maybe.c"
static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 943 "maybe.c"
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

#line 964 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
#line 967 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 969 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 971 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 973 "maybe.c"
{
#line 975 "maybe.c"
  {
#line 977 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 980 "maybe.c"
    {
#line 982 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 985 "maybe.c"
    return mercury__maybe__succeeded;
#line 987 "maybe.c"
  }
#line 989 "maybe.c"
}

#line 992 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
#line 995 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 997 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 999 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1001 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1003 "maybe.c"
{
#line 1005 "maybe.c"
  {
#line 1007 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1010 "maybe.c"
    {
#line 1012 "maybe.c"
      mercury__maybe____Compare____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1015 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1017 "maybe.c"
  }
#line 1019 "maybe.c"
}

#line 1022 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
#line 1025 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1027 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1029 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1031 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1033 "maybe.c"
{
#line 1035 "maybe.c"
  {
#line 1037 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1040 "maybe.c"
    {
#line 1042 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1045 "maybe.c"
    return mercury__maybe__succeeded;
#line 1047 "maybe.c"
  }
#line 1049 "maybe.c"
}

#line 1052 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
#line 1055 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1057 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1059 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_3,
#line 1061 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4,
#line 1063 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_5)
#line 1065 "maybe.c"
{
#line 1067 "maybe.c"
  {
#line 1069 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1072 "maybe.c"
    {
#line 1074 "maybe.c"
      mercury__maybe____Compare____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
#line 1077 "maybe.c"
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1079 "maybe.c"
  }
#line 1081 "maybe.c"
}

#line 1084 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
#line 1087 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1089 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1091 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1093 "maybe.c"
{
#line 1095 "maybe.c"
  {
#line 1097 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1100 "maybe.c"
    {
#line 1102 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1105 "maybe.c"
    return mercury__maybe__succeeded;
#line 1107 "maybe.c"
  }
#line 1109 "maybe.c"
}

#line 1112 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
#line 1115 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1117 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_2,
#line 1119 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3,
#line 1121 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_4)
#line 1123 "maybe.c"
{
#line 1125 "maybe.c"
  {
#line 1127 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1130 "maybe.c"
    {
#line 1132 "maybe.c"
      mercury__maybe____Compare____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
#line 1135 "maybe.c"
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1137 "maybe.c"
  }
#line 1139 "maybe.c"
}

#line 1142 "maybe.c"
static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
#line 1145 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_1,
#line 1147 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2)
#line 1149 "maybe.c"
{
#line 1151 "maybe.c"
  {
#line 1153 "maybe.c"
    MR_bool mercury__maybe__succeeded;

#line 1156 "maybe.c"
    {
#line 1158 "maybe.c"
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_0_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2));
    }
#line 1161 "maybe.c"
    return mercury__maybe__succeeded;
#line 1163 "maybe.c"
  }
#line 1165 "maybe.c"
}

#line 1168 "maybe.c"
static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
#line 1171 "maybe.c"
  MR_Box * mercury__maybe__wrapper_arg_1,
#line 1173 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_2,
#line 1175 "maybe.c"
  MR_Box mercury__maybe__wrapper_arg_3)
#line 1177 "maybe.c"
{
#line 1179 "maybe.c"
  {
#line 1181 "maybe.c"
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

#line 1184 "maybe.c"
    {
#line 1186 "maybe.c"
      mercury__maybe____Compare____maybe_error_0_0(&mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
#line 1189 "maybe.c"
    *mercury__maybe__wrapper_arg_1 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
#line 1191 "maybe.c"
  }
#line 1193 "maybe.c"
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

#line 40 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0(
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_14,
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_15,
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
    MR_Integer mercury__maybe__CastX_12 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 40 "maybe.m"
    MR_Integer mercury__maybe__CastY_13 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 40 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_12 == mercury__maybe__CastY_13);
#line 40 "maybe.m"
    if (mercury__maybe__succeeded)
#line 1241 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "maybe.m"
    else
#line 40 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 40 "maybe.m"
        {
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 40 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 40 "maybe.m"
            {
#line 40 "maybe.m"
              MR_Box mercury__maybe__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 40 "maybe.m"
              {
#line 40 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_E_15, mercury__maybe__HeadVar__1_1, mercury__maybe__V_16_16, mercury__maybe__V_11_11);
#line 40 "maybe.m"
                return;
              }
#line 40 "maybe.m"
            }
#line 40 "maybe.m"
          else
#line 1270 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "maybe.m"
        }
#line 40 "maybe.m"
      else
#line 40 "maybe.m"
        {
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 40 "maybe.m"
          if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1283 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "maybe.m"
          else
#line 40 "maybe.m"
            {
#line 40 "maybe.m"
              MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 40 "maybe.m"
              {
#line 40 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_14, mercury__maybe__HeadVar__1_1, mercury__maybe__V_17_17, mercury__maybe__V_5_5);
#line 40 "maybe.m"
                return;
              }
#line 40 "maybe.m"
            }
#line 40 "maybe.m"
        }
#line 40 "maybe.m"
  }
#line 40 "maybe.m"
}

#line 40 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0(
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_9,
#line 40 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_E_10,
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
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 40 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 40 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 40 "maybe.m"
    if (mercury__maybe__succeeded)
#line 40 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 40 "maybe.m"
    else
#line 40 "maybe.m"
      if (((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 40 "maybe.m"
        {
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_6_6;

#line 40 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "maybe.m"
          if (mercury__maybe__succeeded)
#line 40 "maybe.m"
            {
#line 40 "maybe.m"
              mercury__maybe__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 1355 "maybe.c"
              {
#line 1357 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_10, mercury__maybe__V_5_5, mercury__maybe__V_6_6);
              }
#line 40 "maybe.m"
            }
#line 40 "maybe.m"
        }
#line 40 "maybe.m"
      else
#line 40 "maybe.m"
        {
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 40 "maybe.m"
          MR_Box mercury__maybe__V_4_4;

#line 40 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 40 "maybe.m"
          if (mercury__maybe__succeeded)
#line 40 "maybe.m"
            {
#line 40 "maybe.m"
              mercury__maybe__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 1381 "maybe.c"
              {
#line 1383 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__V_3_3, mercury__maybe__V_4_4);
              }
#line 40 "maybe.m"
            }
#line 40 "maybe.m"
        }
#line 40 "maybe.m"
    return mercury__maybe__succeeded;
#line 40 "maybe.m"
  }
#line 40 "maybe.m"
}

#line 38 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0(
#line 38 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_6,
#line 38 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 38 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 38 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 38 "maybe.m"
{
#line 38 "maybe.m"
  {
#line 38 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 38 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 38 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_4 = mercury__maybe__HeadVar__2_2;
#line 38 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_5 = mercury__maybe__HeadVar__3_3;

#line 38 "maybe.m"
    {
#line 38 "maybe.m"
      mercury__maybe____Compare____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_6, mercury__maybe__TypeCtorInfo_7_7, mercury__maybe__HeadVar__1_1, mercury__maybe__Cast_HeadVar1_4, mercury__maybe__Cast_HeadVar2_5);
#line 38 "maybe.m"
      return;
    }
#line 38 "maybe.m"
  }
#line 38 "maybe.m"
}

#line 38 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0(
#line 38 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_5,
#line 38 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 38 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 38 "maybe.m"
{
#line 38 "maybe.m"
  {
#line 38 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 38 "maybe.m"
    MR_Word mercury__maybe__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 38 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar1_3 = mercury__maybe__HeadVar__1_1;
#line 38 "maybe.m"
    MR_Word mercury__maybe__Cast_HeadVar2_4 = mercury__maybe__HeadVar__2_2;

#line 38 "maybe.m"
    {
#line 38 "maybe.m"
      return mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_5, mercury__maybe__TypeCtorInfo_6_6, mercury__maybe__Cast_HeadVar1_3, mercury__maybe__Cast_HeadVar2_4);
    }
#line 38 "maybe.m"
    return mercury__maybe__succeeded;
#line 38 "maybe.m"
  }
#line 38 "maybe.m"
}

#line 34 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0(
#line 34 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 34 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 34 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 34 "maybe.m"
{
#line 34 "maybe.m"
  {
#line 34 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 34 "maybe.m"
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 34 "maybe.m"
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 34 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
#line 34 "maybe.m"
    if (mercury__maybe__succeeded)
#line 1491 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "maybe.m"
    else
#line 34 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "maybe.m"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "maybe.m"
        else
#line 1503 "maybe.c"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "maybe.m"
      else
#line 34 "maybe.m"
        {
#line 34 "maybe.m"
          MR_String mercury__maybe__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "maybe.m"
          if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1514 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "maybe.m"
          else
#line 34 "maybe.m"
            {
#line 34 "maybe.m"
              MR_String mercury__maybe__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "maybe.m"
              MR_Integer mercury__maybe__Res_7_15;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__maybe____Compare____maybe_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__maybe__V_11_11 ;
	S2 =  mercury__maybe__V_7_7 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1540 "maybe.c"

		;}
#undef MR_PROC_LABEL
	 mercury__maybe__Res_7_15  = Res;
#line 134 "private_builtin.opt"
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
#line 34 "maybe.m"
            }
#line 34 "maybe.m"
        }
#line 34 "maybe.m"
  }
#line 34 "maybe.m"
}

#line 34 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0(
#line 34 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 34 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 34 "maybe.m"
{
#line 34 "maybe.m"
  {
#line 34 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 34 "maybe.m"
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 34 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 34 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 34 "maybe.m"
    if (mercury__maybe__succeeded)
#line 34 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 34 "maybe.m"
    else
#line 34 "maybe.m"
      if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "maybe.m"
        {
#line 34 "maybe.m"
          MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 34 "maybe.m"
          MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 34 "maybe.m"
          mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
#line 34 "maybe.m"
        }
#line 34 "maybe.m"
      else
#line 34 "maybe.m"
        {
#line 34 "maybe.m"
          MR_String mercury__maybe__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "maybe.m"
          MR_String mercury__maybe__V_6_6;

#line 34 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 34 "maybe.m"
          if (mercury__maybe__succeeded)
#line 34 "maybe.m"
            {
#line 34 "maybe.m"
              mercury__maybe__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));
#line 1634 "maybe.c"
              mercury__maybe__succeeded = (strcmp(mercury__maybe__V_5_5, mercury__maybe__V_6_6) == 0);
#line 34 "maybe.m"
            }
#line 34 "maybe.m"
        }
#line 34 "maybe.m"
    return mercury__maybe__succeeded;
#line 34 "maybe.m"
  }
#line 34 "maybe.m"
}

#line 23 "maybe.m"
void MR_CALL 
mercury__maybe____Compare____maybe_1_0(
#line 23 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_10,
#line 23 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__1_1,
#line 23 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 23 "maybe.m"
  MR_Word mercury__maybe__HeadVar__3_3)
#line 23 "maybe.m"
{
#line 23 "maybe.m"
  {
#line 23 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 23 "maybe.m"
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
#line 23 "maybe.m"
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

#line 23 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
#line 23 "maybe.m"
    if (mercury__maybe__succeeded)
#line 1673 "maybe.c"
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 23 "maybe.m"
    else
#line 23 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 23 "maybe.m"
        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 23 "maybe.m"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
#line 23 "maybe.m"
        else
#line 1685 "maybe.c"
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
#line 23 "maybe.m"
      else
#line 23 "maybe.m"
        {
#line 23 "maybe.m"
          MR_Box mercury__maybe__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

#line 23 "maybe.m"
          if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1696 "maybe.c"
            *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
#line 23 "maybe.m"
          else
#line 23 "maybe.m"
            {
#line 23 "maybe.m"
              MR_Box mercury__maybe__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

#line 23 "maybe.m"
              {
#line 23 "maybe.m"
                mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_10, mercury__maybe__HeadVar__1_1, mercury__maybe__V_11_11, mercury__maybe__V_7_7);
#line 23 "maybe.m"
                return;
              }
#line 23 "maybe.m"
            }
#line 23 "maybe.m"
        }
#line 23 "maybe.m"
  }
#line 23 "maybe.m"
}

#line 23 "maybe.m"
MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0(
#line 23 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_9,
#line 23 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 23 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 23 "maybe.m"
{
#line 23 "maybe.m"
  {
#line 23 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 23 "maybe.m"
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 23 "maybe.m"
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 23 "maybe.m"
    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
#line 23 "maybe.m"
    if (mercury__maybe__succeeded)
#line 23 "maybe.m"
      mercury__maybe__succeeded = MR_TRUE;
#line 23 "maybe.m"
    else
#line 23 "maybe.m"
      if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 23 "maybe.m"
        {
#line 23 "maybe.m"
          MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
#line 23 "maybe.m"
          MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

#line 23 "maybe.m"
          mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
#line 23 "maybe.m"
        }
#line 23 "maybe.m"
      else
#line 23 "maybe.m"
        {
#line 23 "maybe.m"
          MR_Box mercury__maybe__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 23 "maybe.m"
          MR_Box mercury__maybe__V_6_6;

#line 23 "maybe.m"
          mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 23 "maybe.m"
          if (mercury__maybe__succeeded)
#line 23 "maybe.m"
            {
#line 23 "maybe.m"
              mercury__maybe__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 1779 "maybe.c"
              {
#line 1781 "maybe.c"
                return mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__V_5_5, mercury__maybe__V_6_6);
              }
#line 23 "maybe.m"
            }
#line 23 "maybe.m"
        }
#line 23 "maybe.m"
    return mercury__maybe__succeeded;
#line 23 "maybe.m"
  }
#line 23 "maybe.m"
}

#line 137 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__maybe_is_yes_2_p_0(
#line 137 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_4,
#line 137 "maybe.m"
  MR_Word mercury__maybe__HeadVar__1_1,
#line 137 "maybe.m"
  MR_Box * mercury__maybe__X_3)
#line 137 "maybe.m"
{
#line 168 "maybe.m"
  {
#line 168 "maybe.m"
    MR_bool mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 168 "maybe.m"
    if (mercury__maybe__succeeded)
#line 168 "maybe.m"
      *mercury__maybe__X_3 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
#line 168 "maybe.m"
    return mercury__maybe__succeeded;
#line 168 "maybe.m"
  }
#line 137 "maybe.m"
}

#line 130 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_5(
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 130 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 130 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 130 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 130 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        if (mercury__maybe__succeeded)
#line 165 "maybe.m"
          {
#line 165 "maybe.m"
            {
#line 165 "maybe.m"
              MR_Word base;
#line 165 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
            }
#line 165 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 165 "maybe.m"
          }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
    return mercury__maybe__succeeded;
#line 164 "maybe.m"
  }
#line 130 "maybe.m"
}

#line 128 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_4(
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 128 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 128 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 128 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 128 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        if (mercury__maybe__succeeded)
#line 165 "maybe.m"
          {
#line 165 "maybe.m"
            {
#line 165 "maybe.m"
              MR_Word base;
#line 165 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
            }
#line 165 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 165 "maybe.m"
          }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
    return mercury__maybe__succeeded;
#line 164 "maybe.m"
  }
#line 128 "maybe.m"
}

#line 126 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_3(
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 126 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 126 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 126 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 126 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        if (mercury__maybe__succeeded)
#line 165 "maybe.m"
          {
#line 165 "maybe.m"
            {
#line 165 "maybe.m"
              MR_Word base;
#line 165 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
            }
#line 165 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 165 "maybe.m"
          }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
    return mercury__maybe__succeeded;
#line 164 "maybe.m"
  }
#line 126 "maybe.m"
}

#line 124 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_2(
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 124 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 124 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 124 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 124 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        {
#line 165 "maybe.m"
          MR_Word base;
#line 165 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
        }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
  }
#line 124 "maybe.m"
}

#line 122 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_1(
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 122 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 122 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 122 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 122 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        {
#line 165 "maybe.m"
          MR_Word base;
#line 165 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
        }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
  }
#line 122 "maybe.m"
}

#line 120 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_0(
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_35,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_36,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
#line 120 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
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
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
#line 120 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
#line 120 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
#line 120 "maybe.m"
{
#line 164 "maybe.m"
  {
#line 164 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 164 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "maybe.m"
      {
#line 164 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 164 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 164 "maybe.m"
      }
#line 164 "maybe.m"
    else
#line 165 "maybe.m"
      {
#line 165 "maybe.m"
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 165 "maybe.m"
        MR_Box mercury__maybe__T_22;
#line 166 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 166 "maybe.m"
        {
#line 166 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
#line 165 "maybe.m"
        {
#line 165 "maybe.m"
          MR_Word base;
#line 165 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 165 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
#line 165 "maybe.m"
        }
#line 165 "maybe.m"
      }
#line 164 "maybe.m"
  }
#line 120 "maybe.m"
}

#line 113 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_5(
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 113 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 113 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 113 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 113 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 113 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 113 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 113 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 113 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 113 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        if (mercury__maybe__succeeded)
#line 161 "maybe.m"
          {
#line 161 "maybe.m"
            {
#line 161 "maybe.m"
              MR_Word base;
#line 161 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
            }
#line 161 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 161 "maybe.m"
          }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
    return mercury__maybe__succeeded;
#line 160 "maybe.m"
  }
#line 113 "maybe.m"
}

#line 111 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_4(
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 111 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 111 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 111 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 111 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 111 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 111 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 111 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 111 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 111 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        if (mercury__maybe__succeeded)
#line 161 "maybe.m"
          {
#line 161 "maybe.m"
            {
#line 161 "maybe.m"
              MR_Word base;
#line 161 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
            }
#line 161 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 161 "maybe.m"
          }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
    return mercury__maybe__succeeded;
#line 160 "maybe.m"
  }
#line 111 "maybe.m"
}

#line 109 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_3(
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 109 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 109 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 109 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 109 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 109 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 109 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 109 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 109 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 109 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        if (mercury__maybe__succeeded)
#line 161 "maybe.m"
          {
#line 161 "maybe.m"
            {
#line 161 "maybe.m"
              MR_Word base;
#line 161 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
            }
#line 161 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 161 "maybe.m"
          }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
    return mercury__maybe__succeeded;
#line 160 "maybe.m"
  }
#line 109 "maybe.m"
}

#line 107 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_2(
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 107 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 107 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 107 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 107 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 107 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 107 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 107 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 107 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 107 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        {
#line 161 "maybe.m"
          MR_Word base;
#line 161 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
        }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
  }
#line 107 "maybe.m"
}

#line 105 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_1(
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 105 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 105 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 105 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 105 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 105 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 105 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 105 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 105 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 105 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        {
#line 161 "maybe.m"
          MR_Word base;
#line 161 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
        }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
  }
#line 105 "maybe.m"
}

#line 103 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_0(
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_26,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_27,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
#line 103 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
#line 103 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 103 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 103 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 103 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
#line 103 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
#line 103 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
#line 103 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
#line 103 "maybe.m"
{
#line 160 "maybe.m"
  {
#line 160 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 160 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "maybe.m"
      {
#line 160 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
#line 160 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
#line 160 "maybe.m"
      }
#line 160 "maybe.m"
    else
#line 161 "maybe.m"
      {
#line 161 "maybe.m"
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 161 "maybe.m"
        MR_Box mercury__maybe__T_17;
#line 162 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 162 "maybe.m"
        {
#line 162 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
#line 161 "maybe.m"
        {
#line 161 "maybe.m"
          MR_Word base;
#line 161 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 161 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
#line 161 "maybe.m"
        }
#line 161 "maybe.m"
      }
#line 160 "maybe.m"
  }
#line 103 "maybe.m"
}

#line 96 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_5(
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 96 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 96 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 96 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 96 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 96 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 96 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 96 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        if (mercury__maybe__succeeded)
#line 157 "maybe.m"
          {
#line 157 "maybe.m"
            {
#line 157 "maybe.m"
              MR_Word base;
#line 157 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
            }
#line 157 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 157 "maybe.m"
          }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
    return mercury__maybe__succeeded;
#line 156 "maybe.m"
  }
#line 96 "maybe.m"
}

#line 94 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_4(
#line 94 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 94 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 94 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 94 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 94 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 94 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 94 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 94 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 94 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        if (mercury__maybe__succeeded)
#line 157 "maybe.m"
          {
#line 157 "maybe.m"
            {
#line 157 "maybe.m"
              MR_Word base;
#line 157 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
            }
#line 157 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 157 "maybe.m"
          }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
    return mercury__maybe__succeeded;
#line 156 "maybe.m"
  }
#line 94 "maybe.m"
}

#line 92 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_3(
#line 92 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 92 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 92 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 92 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 92 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 92 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 92 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 92 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 92 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        if (mercury__maybe__succeeded)
#line 157 "maybe.m"
          {
#line 157 "maybe.m"
            {
#line 157 "maybe.m"
              MR_Word base;
#line 157 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
            }
#line 157 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 157 "maybe.m"
          }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
    return mercury__maybe__succeeded;
#line 156 "maybe.m"
  }
#line 92 "maybe.m"
}

#line 90 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_2(
#line 90 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 90 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 90 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 90 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 90 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 90 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 90 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 90 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 90 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        {
#line 157 "maybe.m"
          MR_Word base;
#line 157 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
        }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
  }
#line 90 "maybe.m"
}

#line 88 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_1(
#line 88 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 88 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 88 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 88 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 88 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 88 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 88 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 88 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 88 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        {
#line 157 "maybe.m"
          MR_Word base;
#line 157 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
        }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
  }
#line 88 "maybe.m"
}

#line 86 "maybe.m"
void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_0(
#line 86 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_13,
#line 86 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_14,
#line 86 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
#line 86 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 86 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 86 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 86 "maybe.m"
  MR_Box mercury__maybe__HeadVar__4_4,
#line 86 "maybe.m"
  MR_Box * mercury__maybe__Acc_5)
#line 86 "maybe.m"
{
#line 156 "maybe.m"
  {
#line 156 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 156 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "maybe.m"
      {
#line 156 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "maybe.m"
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
#line 156 "maybe.m"
      }
#line 156 "maybe.m"
    else
#line 157 "maybe.m"
      {
#line 157 "maybe.m"
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 157 "maybe.m"
        MR_Box mercury__maybe__T_10;
#line 158 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 158 "maybe.m"
        {
#line 158 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
#line 157 "maybe.m"
        {
#line 157 "maybe.m"
          MR_Word base;
#line 157 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 157 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
#line 157 "maybe.m"
        }
#line 157 "maybe.m"
      }
#line 156 "maybe.m"
  }
#line 86 "maybe.m"
}

#line 79 "maybe.m"
MR_Box MR_CALL 
mercury__maybe__fold_maybe_3_f_0(
#line 79 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_10,
#line 79 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_11,
#line 79 "maybe.m"
  MR_Word mercury__maybe__F_1,
#line 79 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 79 "maybe.m"
  MR_Box mercury__maybe__HeadVar__3_3)
#line 79 "maybe.m"
{
#line 153 "maybe.m"
  {
#line 153 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 153 "maybe.m"
    MR_Box mercury__maybe__HeadVar__4_4;

#line 153 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "maybe.m"
      mercury__maybe__HeadVar__4_4 = mercury__maybe__HeadVar__3_3;
#line 153 "maybe.m"
    else
#line 154 "maybe.m"
      {
#line 154 "maybe.m"
        MR_Box mercury__maybe__Value_8 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 154 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 154 "maybe.m"
        {
#line 154 "maybe.m"
          mercury__maybe__HeadVar__4_4 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__Value_8, mercury__maybe__HeadVar__3_3);
        }
#line 154 "maybe.m"
      }
#line 153 "maybe.m"
    return mercury__maybe__HeadVar__4_4;
#line 153 "maybe.m"
  }
#line 79 "maybe.m"
}

#line 74 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_5(
#line 74 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 74 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 74 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 74 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 74 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 74 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 74 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      {
#line 150 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 150 "maybe.m"
      }
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
    return mercury__maybe__succeeded;
#line 150 "maybe.m"
  }
#line 74 "maybe.m"
}

#line 73 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_4(
#line 73 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 73 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 73 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 73 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 73 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 73 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 73 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      {
#line 150 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 150 "maybe.m"
      }
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
    return mercury__maybe__succeeded;
#line 150 "maybe.m"
  }
#line 73 "maybe.m"
}

#line 72 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_3(
#line 72 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 72 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 72 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 72 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 72 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 72 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 72 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      {
#line 150 "maybe.m"
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 150 "maybe.m"
      }
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          return mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
    return mercury__maybe__succeeded;
#line 150 "maybe.m"
  }
#line 72 "maybe.m"
}

#line 71 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_2(
#line 71 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 71 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 71 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 71 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 71 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 71 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 71 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 151 "maybe.m"
          return;
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
  }
#line 71 "maybe.m"
}

#line 70 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_1(
#line 70 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 70 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 70 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 70 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 70 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 70 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 70 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 151 "maybe.m"
          return;
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
  }
#line 70 "maybe.m"
}

#line 69 "maybe.m"
void MR_CALL 
mercury__maybe__fold_maybe_4_p_0(
#line 69 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_15,
#line 69 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_16,
#line 69 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 69 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 69 "maybe.m"
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
#line 69 "maybe.m"
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
#line 69 "maybe.m"
{
#line 150 "maybe.m"
  {
#line 150 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 150 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "maybe.m"
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
#line 150 "maybe.m"
    else
#line 151 "maybe.m"
      {
#line 151 "maybe.m"
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 151 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 151 "maybe.m"
        {
#line 151 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
#line 151 "maybe.m"
          return;
        }
#line 151 "maybe.m"
      }
#line 150 "maybe.m"
  }
#line 69 "maybe.m"
}

#line 63 "maybe.m"
MR_Word MR_CALL 
mercury__maybe__map_maybe_2_f_0(
#line 63 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 63 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 63 "maybe.m"
  MR_Word mercury__maybe__F_1,
#line 63 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2)
#line 63 "maybe.m"
{
#line 147 "maybe.m"
  {
#line 147 "maybe.m"
    MR_bool mercury__maybe__succeeded;
#line 147 "maybe.m"
    MR_Word mercury__maybe__HeadVar__3_3;

#line 147 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "maybe.m"
      mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 147 "maybe.m"
    else
#line 148 "maybe.m"
      {
#line 148 "maybe.m"
        MR_Box mercury__maybe__T_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 148 "maybe.m"
        MR_Box mercury__maybe__V_7_7;
#line 148 "maybe.m"
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

#line 148 "maybe.m"
        {
#line 148 "maybe.m"
          mercury__maybe__V_7_7 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__T_6);
        }
#line 148 "maybe.m"
        {
#line 148 "maybe.m"
          mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 148 "maybe.m"
          MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, 0) = mercury__maybe__V_7_7;
#line 148 "maybe.m"
        }
#line 148 "maybe.m"
      }
#line 147 "maybe.m"
    return mercury__maybe__HeadVar__3_3;
#line 147 "maybe.m"
  }
#line 63 "maybe.m"
}

#line 145 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
#line 145 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 145 "maybe.m"
{
#line 145 "maybe.m"
  {
#line 145 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_3_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_3_env_0_s *) mercury__maybe__env_ptr_arg;

#line 145 "maybe.m"
    {
#line 145 "maybe.m"
      MR_Word base;
#line 145 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = base;
#line 145 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__T_7;
#line 145 "maybe.m"
    }
#line 145 "maybe.m"
    {
#line 145 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 145 "maybe.m"
      return;
    }
#line 145 "maybe.m"
  }
#line 145 "maybe.m"
}

#line 58 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_3(
#line 58 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 58 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 58 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 58 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 58 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 58 "maybe.m"
  MR_Cont mercury__maybe__cont,
#line 58 "maybe.m"
  void * mercury__maybe__cont_env_ptr)
#line 58 "maybe.m"
{
#line 58 "maybe.m"
  {
#line 58 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_3_env_0_s mercury__maybe__env;

#line 58 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
#line 58 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont = mercury__maybe__cont;
#line 58 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
#line 144 "maybe.m"
    {
#line 144 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 144 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "maybe.m"
        {
#line 144 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "maybe.m"
          {
#line 144 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
#line 144 "maybe.m"
            return;
          }
#line 144 "maybe.m"
        }
#line 144 "maybe.m"
      else
#line 145 "maybe.m"
        {
#line 145 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 145 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 145 "maybe.m"
          {
#line 145 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__T_7, mercury__maybe__map_maybe_3_p_3_1, &mercury__maybe__env);
          }
#line 145 "maybe.m"
        }
#line 144 "maybe.m"
    }
#line 58 "maybe.m"
  }
#line 58 "maybe.m"
}

#line 145 "maybe.m"
static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
#line 145 "maybe.m"
  void * mercury__maybe__env_ptr_arg)
#line 145 "maybe.m"
{
#line 145 "maybe.m"
  {
#line 145 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_2_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_2_env_0_s *) mercury__maybe__env_ptr_arg;

#line 145 "maybe.m"
    {
#line 145 "maybe.m"
      MR_Word base;
#line 145 "maybe.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "maybe.m"
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = base;
#line 145 "maybe.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__T_7;
#line 145 "maybe.m"
    }
#line 145 "maybe.m"
    {
#line 145 "maybe.m"
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 145 "maybe.m"
      return;
    }
#line 145 "maybe.m"
  }
#line 145 "maybe.m"
}

#line 57 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_2(
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 57 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 57 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 57 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 57 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3,
#line 57 "maybe.m"
  MR_Cont mercury__maybe__cont,
#line 57 "maybe.m"
  void * mercury__maybe__cont_env_ptr)
#line 57 "maybe.m"
{
#line 57 "maybe.m"
  {
#line 57 "maybe.m"
    struct mercury__maybe__map_maybe_3_p_2_env_0_s mercury__maybe__env;

#line 57 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
#line 57 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont = mercury__maybe__cont;
#line 57 "maybe.m"
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
#line 144 "maybe.m"
    {
#line 144 "maybe.m"
      MR_bool mercury__maybe__succeeded;

#line 144 "maybe.m"
      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "maybe.m"
        {
#line 144 "maybe.m"
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "maybe.m"
          {
#line 144 "maybe.m"
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
#line 144 "maybe.m"
            return;
          }
#line 144 "maybe.m"
        }
#line 144 "maybe.m"
      else
#line 145 "maybe.m"
        {
#line 145 "maybe.m"
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 145 "maybe.m"
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 145 "maybe.m"
          {
#line 145 "maybe.m"
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__T_7, mercury__maybe__map_maybe_3_p_2_1, &mercury__maybe__env);
          }
#line 145 "maybe.m"
        }
#line 144 "maybe.m"
    }
#line 57 "maybe.m"
  }
#line 57 "maybe.m"
}

#line 56 "maybe.m"
MR_bool MR_CALL 
mercury__maybe__map_maybe_3_p_1(
#line 56 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 56 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 56 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 56 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 56 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3)
#line 56 "maybe.m"
{
#line 144 "maybe.m"
  {
#line 144 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 144 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "maybe.m"
      {
#line 144 "maybe.m"
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "maybe.m"
        mercury__maybe__succeeded = MR_TRUE;
#line 144 "maybe.m"
      }
#line 144 "maybe.m"
    else
#line 145 "maybe.m"
      {
#line 145 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 145 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 145 "maybe.m"
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 145 "maybe.m"
        {
#line 145 "maybe.m"
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
#line 145 "maybe.m"
        if (mercury__maybe__succeeded)
#line 145 "maybe.m"
          {
#line 145 "maybe.m"
            {
#line 145 "maybe.m"
              MR_Word base;
#line 145 "maybe.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "maybe.m"
              *mercury__maybe__HeadVar__3_3 = base;
#line 145 "maybe.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
#line 145 "maybe.m"
            }
#line 145 "maybe.m"
            mercury__maybe__succeeded = MR_TRUE;
#line 145 "maybe.m"
          }
#line 145 "maybe.m"
      }
#line 144 "maybe.m"
    return mercury__maybe__succeeded;
#line 144 "maybe.m"
  }
#line 56 "maybe.m"
}

#line 55 "maybe.m"
void MR_CALL 
mercury__maybe__map_maybe_3_p_0(
#line 55 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_T_8,
#line 55 "maybe.m"
  MR_Word mercury__maybe__TypeInfo_for_U_9,
#line 55 "maybe.m"
  MR_Word mercury__maybe__P_1,
#line 55 "maybe.m"
  MR_Word mercury__maybe__HeadVar__2_2,
#line 55 "maybe.m"
  MR_Word * mercury__maybe__HeadVar__3_3)
#line 55 "maybe.m"
{
#line 144 "maybe.m"
  {
#line 144 "maybe.m"
    MR_bool mercury__maybe__succeeded;

#line 144 "maybe.m"
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "maybe.m"
      *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "maybe.m"
    else
#line 145 "maybe.m"
      {
#line 145 "maybe.m"
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
#line 145 "maybe.m"
        MR_Box mercury__maybe__T_7;
#line 145 "maybe.m"
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

#line 145 "maybe.m"
        {
#line 145 "maybe.m"
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
#line 145 "maybe.m"
        {
#line 145 "maybe.m"
          MR_Word base;
#line 145 "maybe.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "maybe.m"
          *mercury__maybe__HeadVar__3_3 = base;
#line 145 "maybe.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
#line 145 "maybe.m"
        }
#line 145 "maybe.m"
      }
#line 144 "maybe.m"
  }
#line 55 "maybe.m"
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
}

void mercury__maybe__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module maybe. */
