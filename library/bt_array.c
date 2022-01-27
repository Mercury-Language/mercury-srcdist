/*
** Automatically generated from `bt_array.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module bt_array. */
/* :- implementation. */

/*
INIT mercury__bt_array__init
ENDINIT
*/

#include "bt_array.mih"


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




#line 94 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1;

#line 97 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3];

#line 100 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0;

#line 103 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1];

#line 106 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1];

#line 109 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1];

#line 112 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1];

#line 115 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0;

#line 118 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1;

#line 121 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3];

#line 124 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1;

#line 127 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1];

#line 130 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1];

#line 133 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2];

#line 136 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2];

#line 139 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2];

#line 142 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1];

#line 145 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0;

#line 148 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3];

#line 151 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1;

#line 154 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1];

#line 157 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1];

#line 160 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2];

#line 163 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2];

#line 166 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2];

#line 169 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
#line 172 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 174 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 176 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 179 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
#line 182 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 184 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 186 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 188 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 191 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
#line 194 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 196 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 198 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 201 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
#line 204 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 206 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 208 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 210 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 213 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
#line 216 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 218 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 220 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3);

#line 223 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
#line 226 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 228 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 230 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 232 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 618 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 618 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 618 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 618 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6);

#line 473 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 473 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 473 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 473 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6);

#line 372 "bt_array.m"
static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
#line 372 "bt_array.m"
  MR_Integer mercury__bt_array__I_5,
#line 372 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_6,
#line 372 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_7,
#line 372 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_8);

#line 331 "bt_array.m"
static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 331 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__2_2,
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3,
#line 331 "bt_array.m"
  MR_Word * mercury__bt_array__Array_4);


static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bt_array_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bt_array_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bt_array_scalar_common_2[0])),
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



#line 360 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 368 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_bt_array_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

#line 375 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0 = {
  (MR_String) "bt_array",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_bt_array_1_0,
  NULL,
  NULL,
  NULL
};

#line 390 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

#line 395 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_bt_array_1_0
  }
};

#line 404 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_bt_array_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_bt_array_1_0
};

#line 409 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_bt_array_1[1] = {
  (MR_Integer) 0
};

#line 414 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_bt_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____bt_array_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____bt_array_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "bt_array",
  {     mercury__bt_array__bt_array__du_name_ordered_bt_array_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_bt_array_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_bt_array_1
};

#line 431 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
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

#line 446 "bt_array.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 454 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_1__pseudo_1
};

#line 461 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL
};

#line 476 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

#line 481 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1
};

#line 486 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_1_1
  }
};

#line 500 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_1,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_1_0
};

#line 506 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 512 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_1
};

#line 529 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 534 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL
};

#line 549 "bt_array.c"
static const MR_PseudoTypeInfo mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bt_array__bt_array__pti_ra_list_bintree_1__pseudo_1
};

#line 556 "bt_array.c"
static const MR_DuFunctorDesc mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__bt_array__bt_array__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL
};

#line 571 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0
};

#line 576 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1[1] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

#line 581 "bt_array.c"
static const MR_DuPtagLayout mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bt_array__bt_array__du_stag_ordered_ra_list_bintree_1_1
  }
};

#line 595 "bt_array.c"
static const MR_DuFunctorDescPtr mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1[2] = {
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_0,
  &mercury__bt_array__bt_array__du_functor_desc_ra_list_bintree_1_1
};

#line 601 "bt_array.c"
static const MR_Integer mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 607 "bt_array.c"
const MR_TypeCtorInfo_Struct mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bt_array____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__bt_array____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "bt_array",
  (MR_String) "ra_list_bintree",
  {     mercury__bt_array__bt_array__du_name_ordered_ra_list_bintree_1 },
  {     mercury__bt_array__bt_array__du_ptag_ordered_ra_list_bintree_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bt_array__bt_array__functor_number_map_ra_list_bintree_1
};

#line 624 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0_10001(
#line 627 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 629 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 631 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 633 "bt_array.c"
{
#line 635 "bt_array.c"
  {
#line 637 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 640 "bt_array.c"
    {
#line 642 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 645 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 647 "bt_array.c"
  }
#line 649 "bt_array.c"
}

#line 652 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0_10001(
#line 655 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 657 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 659 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 661 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 663 "bt_array.c"
{
#line 665 "bt_array.c"
  {
#line 667 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 670 "bt_array.c"
    {
#line 672 "bt_array.c"
      mercury__bt_array____Compare____bt_array_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 675 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 677 "bt_array.c"
  }
#line 679 "bt_array.c"
}

#line 682 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0_10001(
#line 685 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 687 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 689 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 691 "bt_array.c"
{
#line 693 "bt_array.c"
  {
#line 695 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 698 "bt_array.c"
    {
#line 700 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 703 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 705 "bt_array.c"
  }
#line 707 "bt_array.c"
}

#line 710 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0_10001(
#line 713 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 715 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 717 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 719 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 721 "bt_array.c"
{
#line 723 "bt_array.c"
  {
#line 725 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 728 "bt_array.c"
    {
#line 730 "bt_array.c"
      mercury__bt_array____Compare____ra_list_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 733 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 735 "bt_array.c"
  }
#line 737 "bt_array.c"
}

#line 740 "bt_array.c"
static MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0_10001(
#line 743 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 745 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_2,
#line 747 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3)
#line 749 "bt_array.c"
{
#line 751 "bt_array.c"
  {
#line 753 "bt_array.c"
    MR_bool mercury__bt_array__succeeded;

#line 756 "bt_array.c"
    {
#line 758 "bt_array.c"
      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), ((MR_Word) mercury__bt_array__wrapper_arg_2), ((MR_Word) mercury__bt_array__wrapper_arg_3));
    }
#line 761 "bt_array.c"
    return mercury__bt_array__succeeded;
#line 763 "bt_array.c"
  }
#line 765 "bt_array.c"
}

#line 768 "bt_array.c"
static void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0_10001(
#line 771 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_1,
#line 773 "bt_array.c"
  MR_Box * mercury__bt_array__wrapper_arg_2,
#line 775 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_3,
#line 777 "bt_array.c"
  MR_Box mercury__bt_array__wrapper_arg_4)
#line 779 "bt_array.c"
{
#line 781 "bt_array.c"
  {
#line 783 "bt_array.c"
    MR_Word mercury__bt_array__conv0_HeadVar__1_1;

#line 786 "bt_array.c"
    {
#line 788 "bt_array.c"
      mercury__bt_array____Compare____ra_list_bintree_1_0(((MR_Word) mercury__bt_array__wrapper_arg_1), &mercury__bt_array__conv0_HeadVar__1_1, ((MR_Word) mercury__bt_array__wrapper_arg_3), ((MR_Word) mercury__bt_array__wrapper_arg_4));
    }
#line 791 "bt_array.c"
    *mercury__bt_array__wrapper_arg_2 = ((MR_Box) (mercury__bt_array__conv0_HeadVar__1_1));
#line 793 "bt_array.c"
  }
#line 795 "bt_array.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__bt_array__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 618 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 618 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 618 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 618 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6)
#line 618 "bt_array.m"
{
#line 625 "bt_array.m"
  while (MR_TRUE)
#line 625 "bt_array.m"
    {
#line 625 "bt_array.m"
      /* tailcall optimized into a loop */
#line 625 "bt_array.m"
      {
#line 625 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

#line 625 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 622 "bt_array.m"
          {
#line 622 "bt_array.m"
            MR_Integer mercury__bt_array__N1_7 = (mercury__bt_array__N_4 - (MR_Integer) 1);
#line 622 "bt_array.m"
            MR_Word mercury__bt_array__Cs_8;
#line 622 "bt_array.m"
            MR_Word mercury__bt_array__V_26_26;
#line 622 "bt_array.m"
            MR_Word mercury__bt_array__V_27_27;
#line 622 "bt_array.m"
            MR_Integer mercury__bt_array__V_28_28;

#line 514 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
#line 514 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 514 "bt_array.m"
              {
#line 514 "bt_array.m"
                mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
#line 514 "bt_array.m"
                mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
#line 514 "bt_array.m"
                mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
#line 514 "bt_array.m"
                if (((MR_tag((MR_Word) mercury__bt_array__V_27_27)) == (MR_mktag((MR_Integer) 0))))
#line 514 "bt_array.m"
                  mercury__bt_array__Cs_8 = mercury__bt_array__V_26_26;
#line 514 "bt_array.m"
                else
#line 515 "bt_array.m"
                  {
#line 515 "bt_array.m"
                    MR_Word mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 1)));
#line 515 "bt_array.m"
                    MR_Word mercury__bt_array__T2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 2)));
#line 515 "bt_array.m"
                    MR_Integer mercury__bt_array__Size2_22 = (mercury__bt_array__V_28_28 / (MR_Integer) 2);
#line 515 "bt_array.m"
                    MR_Word mercury__bt_array__V_25_25;
#line 515 "bt_array.m"
                    MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_27_27, (MR_Integer) 0));

#line 517 "bt_array.m"
                    {
#line 517 "bt_array.m"
                      mercury__bt_array__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 1) = ((MR_Box) (mercury__bt_array__T2_19));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__V_25_25, 2) = ((MR_Box) (mercury__bt_array__V_26_26));
#line 517 "bt_array.m"
                    }
#line 517 "bt_array.m"
                    {
#line 517 "bt_array.m"
                      mercury__bt_array__Cs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 0) = ((MR_Box) (mercury__bt_array__Size2_22));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 1) = ((MR_Box) (mercury__bt_array__T1_18));
#line 517 "bt_array.m"
                      MR_hl_field(MR_mktag(1), mercury__bt_array__Cs_8, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 517 "bt_array.m"
                    }
#line 515 "bt_array.m"
                  }
#line 624 "bt_array.m"
                {
#line 624 "bt_array.m"
                  /* direct tailcall eliminated */
#line 624 "bt_array.m"
                  {
#line 624 "bt_array.m"
                    MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_7;
#line 624 "bt_array.m"
                    MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_8;

#line 624 "bt_array.m"
                    mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
#line 624 "bt_array.m"
                    mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
#line 624 "bt_array.m"
                  }
#line 624 "bt_array.m"
                  continue;
#line 624 "bt_array.m"
                }
#line 514 "bt_array.m"
              }
#line 622 "bt_array.m"
          }
#line 625 "bt_array.m"
        else
#line 626 "bt_array.m"
          {
#line 626 "bt_array.m"
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
#line 626 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 626 "bt_array.m"
          }
#line 625 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 625 "bt_array.m"
      }
#line 625 "bt_array.m"
      break;
#line 625 "bt_array.m"
    }
#line 618 "bt_array.m"
}

#line 473 "bt_array.m"
static MR_bool MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
#line 473 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 473 "bt_array.m"
  MR_Word mercury__bt_array__As_5,
#line 473 "bt_array.m"
  MR_Word * mercury__bt_array__Bs_6)
#line 473 "bt_array.m"
{
#line 614 "bt_array.m"
  while (MR_TRUE)
#line 614 "bt_array.m"
    {
#line 614 "bt_array.m"
      /* tailcall optimized into a loop */
#line 614 "bt_array.m"
      {
#line 614 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__N_4 > (MR_Integer) 0);

#line 614 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 607 "bt_array.m"
          {
#line 607 "bt_array.m"
            MR_Integer mercury__bt_array__Size_7;
#line 607 "bt_array.m"
            MR_Word mercury__bt_array__Cs_9;
#line 607 "bt_array.m"
            MR_Word mercury__bt_array__V_8_8;

#line 607 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__As_5)) == (MR_mktag((MR_Integer) 1)));
#line 607 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 607 "bt_array.m"
              {
#line 607 "bt_array.m"
                mercury__bt_array__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 0)));
#line 607 "bt_array.m"
                mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 1)));
#line 607 "bt_array.m"
                mercury__bt_array__Cs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__As_5, (MR_Integer) 2)));
#line 608 "bt_array.m"
                mercury__bt_array__succeeded = (mercury__bt_array__Size_7 < mercury__bt_array__N_4);
#line 611 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 609 "bt_array.m"
                  {
#line 609 "bt_array.m"
                    MR_Integer mercury__bt_array__N1_10 = (mercury__bt_array__N_4 - mercury__bt_array__Size_7);

#line 610 "bt_array.m"
                    /* direct tailcall eliminated */
#line 610 "bt_array.m"
                    {
#line 610 "bt_array.m"
                      MR_Integer mercury__bt_array__N__tmp_copy_4 = mercury__bt_array__N1_10;
#line 610 "bt_array.m"
                      MR_Word mercury__bt_array__As__tmp_copy_5 = mercury__bt_array__Cs_9;

#line 610 "bt_array.m"
                      mercury__bt_array__As_5 = mercury__bt_array__As__tmp_copy_5;
#line 610 "bt_array.m"
                      mercury__bt_array__N_4 = mercury__bt_array__N__tmp_copy_4;
#line 610 "bt_array.m"
                    }
#line 610 "bt_array.m"
                    continue;
#line 609 "bt_array.m"
                  }
#line 611 "bt_array.m"
                else
#line 612 "bt_array.m"
                  {
#line 612 "bt_array.m"
                    return mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__N_4, mercury__bt_array__As_5, mercury__bt_array__Bs_6);
                  }
#line 607 "bt_array.m"
              }
#line 607 "bt_array.m"
          }
#line 614 "bt_array.m"
        else
#line 615 "bt_array.m"
          {
#line 615 "bt_array.m"
            *mercury__bt_array__Bs_6 = mercury__bt_array__As_5;
#line 615 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 615 "bt_array.m"
          }
#line 614 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 614 "bt_array.m"
      }
#line 614 "bt_array.m"
      break;
#line 614 "bt_array.m"
    }
#line 473 "bt_array.m"
}

#line 372 "bt_array.m"
static void MR_CALL 
mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(
#line 372 "bt_array.m"
  MR_Integer mercury__bt_array__I_5,
#line 372 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_6,
#line 372 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_7,
#line 372 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_8)
#line 372 "bt_array.m"
{
#line 382 "bt_array.m"
  while (MR_TRUE)
#line 382 "bt_array.m"
    {
#line 382 "bt_array.m"
      /* tailcall optimized into a loop */
#line 382 "bt_array.m"
      {
#line 382 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_6)) == (MR_mktag((MR_Integer) 1)));
#line 382 "bt_array.m"
        MR_Box mercury__bt_array__X_9;
#line 382 "bt_array.m"
        MR_Word mercury__bt_array__RaList1_10;
#line 377 "bt_array.m"
        MR_Integer mercury__bt_array__V_12_12;
#line 377 "bt_array.m"
        MR_Word mercury__bt_array__V_30_30;
#line 377 "bt_array.m"
        MR_Word mercury__bt_array__V_31_31;
#line 377 "bt_array.m"
        MR_Integer mercury__bt_array__V_32_32;

#line 521 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 521 "bt_array.m"
          {
#line 521 "bt_array.m"
            mercury__bt_array__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 0)));
#line 521 "bt_array.m"
            mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 1)));
#line 521 "bt_array.m"
            mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_6, (MR_Integer) 2)));
#line 521 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__V_31_31)) == (MR_mktag((MR_Integer) 0))))
#line 521 "bt_array.m"
              {
#line 521 "bt_array.m"
                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_31_31, (MR_Integer) 0));
#line 521 "bt_array.m"
                mercury__bt_array__RaList1_10 = mercury__bt_array__V_30_30;
#line 521 "bt_array.m"
              }
#line 521 "bt_array.m"
            else
#line 522 "bt_array.m"
              {
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__T1_22;
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__T2_23;
#line 522 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_26;
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__V_29_29;

#line 522 "bt_array.m"
                mercury__bt_array__X_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 0));
#line 522 "bt_array.m"
                mercury__bt_array__T1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 1)));
#line 522 "bt_array.m"
                mercury__bt_array__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_31_31, (MR_Integer) 2)));
#line 48 "int.opt"
                mercury__bt_array__Size2_26 = (mercury__bt_array__V_32_32 / (MR_Integer) 2);
#line 524 "bt_array.m"
                {
#line 524 "bt_array.m"
                  mercury__bt_array__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 1) = ((MR_Box) (mercury__bt_array__T2_23));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_29_29, 2) = ((MR_Box) (mercury__bt_array__V_30_30));
#line 524 "bt_array.m"
                }
#line 524 "bt_array.m"
                {
#line 524 "bt_array.m"
                  mercury__bt_array__RaList1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 0) = ((MR_Box) (mercury__bt_array__Size2_26));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 1) = ((MR_Box) (mercury__bt_array__T1_22));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_10, 2) = ((MR_Box) (mercury__bt_array__V_29_29));
#line 524 "bt_array.m"
                }
#line 522 "bt_array.m"
              }
#line 378 "bt_array.m"
            mercury__bt_array__V_12_12 = (MR_Integer) 0;
#line 378 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__I_5 >= mercury__bt_array__V_12_12);
#line 521 "bt_array.m"
          }
#line 382 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 380 "bt_array.m"
          {
#line 380 "bt_array.m"
            MR_Integer mercury__bt_array__I1_11 = (mercury__bt_array__I_5 - (MR_Integer) 1);
#line 380 "bt_array.m"
            MR_Word mercury__bt_array__V_14_14;

#line 381 "bt_array.m"
            {
#line 381 "bt_array.m"
              mercury__bt_array__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 0) = mercury__bt_array__X_9;
#line 381 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_14_14, 1) = ((MR_Box) (mercury__bt_array__Xs0_7));
#line 381 "bt_array.m"
            }
#line 381 "bt_array.m"
            /* direct tailcall eliminated */
#line 381 "bt_array.m"
            {
#line 381 "bt_array.m"
              MR_Integer mercury__bt_array__I__tmp_copy_5 = mercury__bt_array__I1_11;
#line 381 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_6 = mercury__bt_array__RaList1_10;
#line 381 "bt_array.m"
              MR_Word mercury__bt_array__Xs0__tmp_copy_7 = mercury__bt_array__V_14_14;

#line 381 "bt_array.m"
              mercury__bt_array__Xs0_7 = mercury__bt_array__Xs0__tmp_copy_7;
#line 381 "bt_array.m"
              mercury__bt_array__RaList0_6 = mercury__bt_array__RaList0__tmp_copy_6;
#line 381 "bt_array.m"
              mercury__bt_array__I_5 = mercury__bt_array__I__tmp_copy_5;
#line 381 "bt_array.m"
            }
#line 381 "bt_array.m"
            continue;
#line 380 "bt_array.m"
          }
#line 382 "bt_array.m"
        else
#line 383 "bt_array.m"
          *mercury__bt_array__Xs_8 = mercury__bt_array__Xs0_7;
#line 382 "bt_array.m"
      }
#line 382 "bt_array.m"
      break;
#line 382 "bt_array.m"
    }
#line 372 "bt_array.m"
}

#line 484 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____ra_list_bintree_1_0(
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_24,
#line 484 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 484 "bt_array.m"
{
#line 484 "bt_array.m"
  while (MR_TRUE)
#line 484 "bt_array.m"
    {
#line 484 "bt_array.m"
      /* tailcall optimized into a loop */
#line 484 "bt_array.m"
      {
#line 484 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 484 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_22 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 484 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_23 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 484 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_22 == mercury__bt_array__CastY_23);
#line 484 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 1256 "bt_array.c"
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 484 "bt_array.m"
        else
#line 484 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 484 "bt_array.m"
          {
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

#line 484 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 484 "bt_array.m"
              {
#line 484 "bt_array.m"
                MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));

#line 484 "bt_array.m"
                {
#line 484 "bt_array.m"
                  mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_29_29, mercury__bt_array__V_5_5);
#line 484 "bt_array.m"
                  return;
                }
#line 484 "bt_array.m"
              }
#line 484 "bt_array.m"
            else
#line 1285 "bt_array.c"
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
#line 484 "bt_array.m"
          }
#line 484 "bt_array.m"
        else
#line 484 "bt_array.m"
          {
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));

#line 484 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1302 "bt_array.c"
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
#line 484 "bt_array.m"
            else
#line 484 "bt_array.m"
              {
#line 484 "bt_array.m"
                MR_Box mercury__bt_array__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
#line 484 "bt_array.m"
                MR_Word mercury__bt_array__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 484 "bt_array.m"
                MR_Word mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 484 "bt_array.m"
                MR_Word mercury__bt_array__V_20_20;

#line 484 "bt_array.m"
                {
#line 484 "bt_array.m"
                  mercury__builtin__compare_3_p_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_20_20, mercury__bt_array__V_32_32, mercury__bt_array__V_17_17);
                }
#line 1322 "bt_array.c"
                mercury__bt_array__succeeded = (mercury__bt_array__V_20_20 == (MR_Integer) 0);
#line 484 "bt_array.m"
                mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 484 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
                  *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_20_20;
#line 484 "bt_array.m"
                else
#line 484 "bt_array.m"
                  {
#line 484 "bt_array.m"
                    MR_Word mercury__bt_array__V_21_21;

#line 484 "bt_array.m"
                    {
#line 484 "bt_array.m"
                      mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_24, &mercury__bt_array__V_21_21, mercury__bt_array__V_31_31, mercury__bt_array__V_18_18);
                    }
#line 1342 "bt_array.c"
                    mercury__bt_array__succeeded = (mercury__bt_array__V_21_21 == (MR_Integer) 0);
#line 484 "bt_array.m"
                    mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 484 "bt_array.m"
                    if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
                      *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_21_21;
#line 484 "bt_array.m"
                    else
#line 484 "bt_array.m"
                      {
#line 484 "bt_array.m"
                        /* direct tailcall eliminated */
#line 484 "bt_array.m"
                        {
#line 484 "bt_array.m"
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_30_30;
#line 484 "bt_array.m"
                          MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_19_19;

#line 484 "bt_array.m"
                          mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 484 "bt_array.m"
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 484 "bt_array.m"
                        }
#line 484 "bt_array.m"
                        continue;
#line 484 "bt_array.m"
                      }
#line 484 "bt_array.m"
                  }
#line 484 "bt_array.m"
              }
#line 484 "bt_array.m"
          }
#line 484 "bt_array.m"
      }
#line 484 "bt_array.m"
      break;
#line 484 "bt_array.m"
    }
#line 484 "bt_array.m"
}

#line 484 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_bintree_1_0(
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 484 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 484 "bt_array.m"
{
#line 484 "bt_array.m"
  while (MR_TRUE)
#line 484 "bt_array.m"
    {
#line 484 "bt_array.m"
      /* tailcall optimized into a loop */
#line 484 "bt_array.m"
      {
#line 484 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 484 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 484 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 484 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
#line 484 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
          mercury__bt_array__succeeded = MR_TRUE;
#line 484 "bt_array.m"
        else
#line 484 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 484 "bt_array.m"
          {
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_4_4;

#line 484 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 484 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
              {
#line 484 "bt_array.m"
                mercury__bt_array__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 1439 "bt_array.c"
                {
#line 1441 "bt_array.c"
                  return mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_3_3, mercury__bt_array__V_4_4);
                }
#line 484 "bt_array.m"
              }
#line 484 "bt_array.m"
          }
#line 484 "bt_array.m"
        else
#line 484 "bt_array.m"
          {
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 484 "bt_array.m"
            MR_Box mercury__bt_array__V_8_8;
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_9_9;
#line 484 "bt_array.m"
            MR_Word mercury__bt_array__V_10_10;

#line 484 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 484 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
              {
#line 484 "bt_array.m"
                mercury__bt_array__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 484 "bt_array.m"
                mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 484 "bt_array.m"
                mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 1477 "bt_array.c"
                {
#line 1479 "bt_array.c"
                  mercury__bt_array__succeeded = mercury__builtin__unify_2_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
                }
#line 484 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 484 "bt_array.m"
                  {
#line 1486 "bt_array.c"
                    {
#line 1488 "bt_array.c"
                      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                    }
#line 484 "bt_array.m"
                    if (mercury__bt_array__succeeded)
#line 1493 "bt_array.c"
                      {
#line 1495 "bt_array.c"
                        /* direct tailcall eliminated */
#line 1497 "bt_array.c"
                        {
#line 1499 "bt_array.c"
                          MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
#line 1501 "bt_array.c"
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

#line 1504 "bt_array.c"
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 1506 "bt_array.c"
                          mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 1508 "bt_array.c"
                        }
#line 1510 "bt_array.c"
                        continue;
#line 1512 "bt_array.c"
                      }
#line 484 "bt_array.m"
                  }
#line 484 "bt_array.m"
              }
#line 484 "bt_array.m"
          }
#line 484 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 484 "bt_array.m"
      }
#line 484 "bt_array.m"
      break;
#line 484 "bt_array.m"
    }
#line 484 "bt_array.m"
}

#line 480 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____ra_list_1_0(
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
#line 480 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 480 "bt_array.m"
{
#line 480 "bt_array.m"
  while (MR_TRUE)
#line 480 "bt_array.m"
    {
#line 480 "bt_array.m"
      /* tailcall optimized into a loop */
#line 480 "bt_array.m"
      {
#line 480 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 480 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_18 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 480 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_19 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 480 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_18 == mercury__bt_array__CastY_19);
#line 480 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 1563 "bt_array.c"
          *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 480 "bt_array.m"
        else
#line 480 "bt_array.m"
        if ((mercury__bt_array__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "bt_array.m"
          if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "bt_array.m"
            *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 480 "bt_array.m"
          else
#line 1575 "bt_array.c"
            *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 1;
#line 480 "bt_array.m"
        else
#line 480 "bt_array.m"
          {
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 480 "bt_array.m"
            MR_Integer mercury__bt_array__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));

#line 480 "bt_array.m"
            if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1590 "bt_array.c"
              *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 2;
#line 480 "bt_array.m"
            else
#line 480 "bt_array.m"
              {
#line 480 "bt_array.m"
                MR_Integer mercury__bt_array__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
#line 480 "bt_array.m"
                MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 480 "bt_array.m"
                MR_Word mercury__bt_array__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 480 "bt_array.m"
                MR_Word mercury__bt_array__V_16_16;

#line 71 "private_builtin.opt"
                mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 < mercury__bt_array__V_13_13);
#line 74 "private_builtin.opt"
                if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
                  mercury__bt_array__V_16_16 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  {
#line 76 "private_builtin.opt"
                    mercury__bt_array__succeeded = (mercury__bt_array__V_28_28 == mercury__bt_array__V_13_13);
#line 79 "private_builtin.opt"
                    if (mercury__bt_array__succeeded)
#line 78 "private_builtin.opt"
                      mercury__bt_array__V_16_16 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                    else
#line 80 "private_builtin.opt"
                      mercury__bt_array__V_16_16 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                  }
#line 1627 "bt_array.c"
                mercury__bt_array__succeeded = (mercury__bt_array__V_16_16 == (MR_Integer) 0);
#line 480 "bt_array.m"
                mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 480 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 480 "bt_array.m"
                  *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_16_16;
#line 480 "bt_array.m"
                else
#line 480 "bt_array.m"
                  {
#line 480 "bt_array.m"
                    MR_Word mercury__bt_array__V_17_17;

#line 480 "bt_array.m"
                    {
#line 480 "bt_array.m"
                      mercury__bt_array____Compare____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_20, &mercury__bt_array__V_17_17, mercury__bt_array__V_27_27, mercury__bt_array__V_14_14);
                    }
#line 1647 "bt_array.c"
                    mercury__bt_array__succeeded = (mercury__bt_array__V_17_17 == (MR_Integer) 0);
#line 480 "bt_array.m"
                    mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 480 "bt_array.m"
                    if (mercury__bt_array__succeeded)
#line 480 "bt_array.m"
                      *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_17_17;
#line 480 "bt_array.m"
                    else
#line 480 "bt_array.m"
                      {
#line 480 "bt_array.m"
                        /* direct tailcall eliminated */
#line 480 "bt_array.m"
                        {
#line 480 "bt_array.m"
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_26_26;
#line 480 "bt_array.m"
                          MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__V_15_15;

#line 480 "bt_array.m"
                          mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 480 "bt_array.m"
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 480 "bt_array.m"
                        }
#line 480 "bt_array.m"
                        continue;
#line 480 "bt_array.m"
                      }
#line 480 "bt_array.m"
                  }
#line 480 "bt_array.m"
              }
#line 480 "bt_array.m"
          }
#line 480 "bt_array.m"
      }
#line 480 "bt_array.m"
      break;
#line 480 "bt_array.m"
    }
#line 480 "bt_array.m"
}

#line 480 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____ra_list_1_0(
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 480 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 480 "bt_array.m"
{
#line 480 "bt_array.m"
  while (MR_TRUE)
#line 480 "bt_array.m"
    {
#line 480 "bt_array.m"
      /* tailcall optimized into a loop */
#line 480 "bt_array.m"
      {
#line 480 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 480 "bt_array.m"
        MR_Integer mercury__bt_array__CastX_11 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 480 "bt_array.m"
        MR_Integer mercury__bt_array__CastY_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 480 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__CastX_11 == mercury__bt_array__CastY_12);
#line 480 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 480 "bt_array.m"
          mercury__bt_array__succeeded = MR_TRUE;
#line 480 "bt_array.m"
        else
#line 480 "bt_array.m"
        if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "bt_array.m"
          {
#line 480 "bt_array.m"
            MR_Integer mercury__bt_array__CastX_3 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 480 "bt_array.m"
            MR_Integer mercury__bt_array__CastY_4 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 480 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__CastY_4 == mercury__bt_array__CastX_3);
#line 480 "bt_array.m"
          }
#line 480 "bt_array.m"
        else
#line 480 "bt_array.m"
          {
#line 480 "bt_array.m"
            MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 480 "bt_array.m"
            MR_Integer mercury__bt_array__V_8_8;
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_9_9;
#line 480 "bt_array.m"
            MR_Word mercury__bt_array__V_10_10;

#line 480 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 480 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 480 "bt_array.m"
              {
#line 480 "bt_array.m"
                mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 480 "bt_array.m"
                mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 480 "bt_array.m"
                mercury__bt_array__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 1769 "bt_array.c"
                mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
#line 480 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 480 "bt_array.m"
                  {
#line 1775 "bt_array.c"
                    {
#line 1777 "bt_array.c"
                      mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_bintree_1_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
                    }
#line 480 "bt_array.m"
                    if (mercury__bt_array__succeeded)
#line 1782 "bt_array.c"
                      {
#line 1784 "bt_array.c"
                        /* direct tailcall eliminated */
#line 1786 "bt_array.c"
                        {
#line 1788 "bt_array.c"
                          MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__V_7_7;
#line 1790 "bt_array.c"
                          MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__V_10_10;

#line 1793 "bt_array.c"
                          mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 1795 "bt_array.c"
                          mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 1797 "bt_array.c"
                        }
#line 1799 "bt_array.c"
                        continue;
#line 1801 "bt_array.c"
                      }
#line 480 "bt_array.m"
                  }
#line 480 "bt_array.m"
              }
#line 480 "bt_array.m"
          }
#line 480 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 480 "bt_array.m"
      }
#line 480 "bt_array.m"
      break;
#line 480 "bt_array.m"
    }
#line 480 "bt_array.m"
}

#line 181 "bt_array.m"
void MR_CALL 
mercury__bt_array____Compare____bt_array_1_0(
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
#line 181 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1,
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3)
#line 181 "bt_array.m"
{
#line 181 "bt_array.m"
  {
#line 181 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 181 "bt_array.m"
    MR_Integer mercury__bt_array__CastX_12 = (MR_Integer) mercury__bt_array__HeadVar__2_2;
#line 181 "bt_array.m"
    MR_Integer mercury__bt_array__CastY_13 = (MR_Integer) mercury__bt_array__HeadVar__3_3;

#line 181 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__CastX_12 == mercury__bt_array__CastY_13);
#line 181 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 1846 "bt_array.c"
      *mercury__bt_array__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "bt_array.m"
    else
#line 181 "bt_array.m"
      {
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "bt_array.m"
        MR_Word mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "bt_array.m"
        MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__3_3, (MR_Integer) 2)));
#line 181 "bt_array.m"
        MR_Word mercury__bt_array__V_10_10;

#line 71 "private_builtin.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 < mercury__bt_array__V_7_7);
#line 74 "private_builtin.opt"
        if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
          mercury__bt_array__V_10_10 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
#line 79 "private_builtin.opt"
            if (mercury__bt_array__succeeded)
#line 78 "private_builtin.opt"
              mercury__bt_array__V_10_10 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__bt_array__V_10_10 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 1889 "bt_array.c"
        mercury__bt_array__succeeded = (mercury__bt_array__V_10_10 == (MR_Integer) 0);
#line 181 "bt_array.m"
        mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 181 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 181 "bt_array.m"
          *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_10_10;
#line 181 "bt_array.m"
        else
#line 181 "bt_array.m"
          {
#line 181 "bt_array.m"
            MR_Word mercury__bt_array__V_11_11;

#line 71 "private_builtin.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 < mercury__bt_array__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__bt_array__succeeded)
#line 73 "private_builtin.opt"
              mercury__bt_array__V_11_11 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              {
#line 76 "private_builtin.opt"
                mercury__bt_array__succeeded = (mercury__bt_array__V_5_5 == mercury__bt_array__V_8_8);
#line 79 "private_builtin.opt"
                if (mercury__bt_array__succeeded)
#line 78 "private_builtin.opt"
                  mercury__bt_array__V_11_11 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                else
#line 80 "private_builtin.opt"
                  mercury__bt_array__V_11_11 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
              }
#line 1926 "bt_array.c"
            mercury__bt_array__succeeded = (mercury__bt_array__V_11_11 == (MR_Integer) 0);
#line 181 "bt_array.m"
            mercury__bt_array__succeeded = !(mercury__bt_array__succeeded);
#line 181 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 181 "bt_array.m"
              *mercury__bt_array__HeadVar__1_1 = mercury__bt_array__V_11_11;
#line 181 "bt_array.m"
            else
#line 181 "bt_array.m"
              {
#line 181 "bt_array.m"
                mercury__bt_array____Compare____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__HeadVar__1_1, mercury__bt_array__V_6_6, mercury__bt_array__V_9_9);
#line 181 "bt_array.m"
                return;
              }
#line 181 "bt_array.m"
          }
#line 181 "bt_array.m"
      }
#line 181 "bt_array.m"
  }
#line 181 "bt_array.m"
}

#line 181 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array____Unify____bt_array_1_0(
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 181 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2)
#line 181 "bt_array.m"
{
#line 181 "bt_array.m"
  {
#line 181 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 181 "bt_array.m"
    MR_Integer mercury__bt_array__CastX_9 = (MR_Integer) mercury__bt_array__HeadVar__1_1;
#line 181 "bt_array.m"
    MR_Integer mercury__bt_array__CastY_10 = (MR_Integer) mercury__bt_array__HeadVar__2_2;

#line 181 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__CastX_9 == mercury__bt_array__CastY_10);
#line 181 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 181 "bt_array.m"
      mercury__bt_array__succeeded = MR_TRUE;
#line 181 "bt_array.m"
    else
#line 181 "bt_array.m"
      {
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "bt_array.m"
        MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "bt_array.m"
        MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "bt_array.m"
        MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 1995 "bt_array.c"
        mercury__bt_array__succeeded = (mercury__bt_array__V_3_3 == mercury__bt_array__V_6_6);
#line 181 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 181 "bt_array.m"
          {
#line 2001 "bt_array.c"
            mercury__bt_array__succeeded = (mercury__bt_array__V_4_4 == mercury__bt_array__V_7_7);
#line 181 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 2005 "bt_array.c"
              {
#line 2007 "bt_array.c"
                return mercury__bt_array__succeeded = mercury__bt_array____Unify____ra_list_1_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__V_5_5, mercury__bt_array__V_8_8);
              }
#line 181 "bt_array.m"
          }
#line 181 "bt_array.m"
      }
#line 181 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 181 "bt_array.m"
  }
#line 181 "bt_array.m"
}

#line 583 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_update_5_p_0(
#line 583 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_25,
#line 583 "bt_array.m"
  MR_Integer mercury__bt_array__Size_1,
#line 583 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 583 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__3_3,
#line 583 "bt_array.m"
  MR_Box mercury__bt_array__X_4,
#line 583 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__5_5)
#line 583 "bt_array.m"
{
#line 586 "bt_array.m"
  {
#line 586 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;

#line 586 "bt_array.m"
    if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 586 "bt_array.m"
      {
#line 586 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 586 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 586 "bt_array.m"
          {
#line 586 "bt_array.m"
            {
#line 586 "bt_array.m"
              MR_Word base;
#line 586 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 586 "bt_array.m"
              *mercury__bt_array__HeadVar__5_5 = base;
#line 586 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = mercury__bt_array__X_4;
#line 586 "bt_array.m"
            }
#line 586 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 586 "bt_array.m"
          }
#line 586 "bt_array.m"
      }
#line 586 "bt_array.m"
    else
#line 587 "bt_array.m"
      {
#line 587 "bt_array.m"
        MR_Box mercury__bt_array__X0_10 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 587 "bt_array.m"
        MR_Word mercury__bt_array__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 587 "bt_array.m"
        MR_Word mercury__bt_array__T2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 588 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 590 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 589 "bt_array.m"
          {
#line 589 "bt_array.m"
            {
#line 589 "bt_array.m"
              MR_Word base;
#line 589 "bt_array.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 589 "bt_array.m"
              *mercury__bt_array__HeadVar__5_5 = base;
#line 589 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X_4;
#line 589 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
#line 589 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
#line 589 "bt_array.m"
            }
#line 589 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 589 "bt_array.m"
          }
#line 590 "bt_array.m"
        else
#line 591 "bt_array.m"
          {
#line 591 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_16 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

#line 592 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_16);
#line 596 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 593 "bt_array.m"
              {
#line 593 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 593 "bt_array.m"
                MR_Word mercury__bt_array__T0_18;

#line 594 "bt_array.m"
                {
#line 594 "bt_array.m"
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T1_11, mercury__bt_array__NewI_17, mercury__bt_array__X_4, &mercury__bt_array__T0_18);
                }
#line 593 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 593 "bt_array.m"
                  {
#line 595 "bt_array.m"
                    {
#line 595 "bt_array.m"
                      MR_Word base;
#line 595 "bt_array.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "bt_array.m"
                      *mercury__bt_array__HeadVar__5_5 = base;
#line 595 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
#line 595 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_18));
#line 595 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T2_12));
#line 595 "bt_array.m"
                    }
#line 595 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 593 "bt_array.m"
                  }
#line 593 "bt_array.m"
              }
#line 596 "bt_array.m"
            else
#line 597 "bt_array.m"
              {
#line 597 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 597 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_23 = (mercury__bt_array__V_21_21 - mercury__bt_array__Size2_16);
#line 597 "bt_array.m"
                MR_Word mercury__bt_array__T0_24;

#line 598 "bt_array.m"
                {
#line 598 "bt_array.m"
                  mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_25, mercury__bt_array__Size2_16, mercury__bt_array__T2_12, mercury__bt_array__NewI_23, mercury__bt_array__X_4, &mercury__bt_array__T0_24);
                }
#line 597 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 597 "bt_array.m"
                  {
#line 599 "bt_array.m"
                    {
#line 599 "bt_array.m"
                      MR_Word base;
#line 599 "bt_array.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 599 "bt_array.m"
                      *mercury__bt_array__HeadVar__5_5 = base;
#line 599 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__bt_array__X0_10;
#line 599 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_11));
#line 599 "bt_array.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__T0_24));
#line 599 "bt_array.m"
                    }
#line 599 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 597 "bt_array.m"
                  }
#line 597 "bt_array.m"
              }
#line 591 "bt_array.m"
          }
#line 587 "bt_array.m"
      }
#line 586 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 586 "bt_array.m"
  }
#line 583 "bt_array.m"
}

#line 570 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_update_2_4_p_0(
#line 570 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_14,
#line 570 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 570 "bt_array.m"
  MR_Integer mercury__bt_array__I_8,
#line 570 "bt_array.m"
  MR_Box mercury__bt_array__X_9,
#line 570 "bt_array.m"
  MR_Word * mercury__bt_array__List_10)
#line 570 "bt_array.m"
{
#line 573 "bt_array.m"
  {
#line 573 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 573 "bt_array.m"
    MR_Integer mercury__bt_array__Size_5;
#line 573 "bt_array.m"
    MR_Word mercury__bt_array__T0_6;
#line 573 "bt_array.m"
    MR_Word mercury__bt_array__Rest_7;

#line 573 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 573 "bt_array.m"
      {
#line 573 "bt_array.m"
        mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 573 "bt_array.m"
        mercury__bt_array__T0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 573 "bt_array.m"
        mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 574 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__I_8 < mercury__bt_array__Size_5);
#line 577 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 575 "bt_array.m"
          {
#line 575 "bt_array.m"
            MR_Word mercury__bt_array__T_11;

#line 575 "bt_array.m"
            {
#line 575 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_update_5_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Size_5, mercury__bt_array__T0_6, mercury__bt_array__I_8, mercury__bt_array__X_9, &mercury__bt_array__T_11);
            }
#line 575 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 575 "bt_array.m"
              {
#line 576 "bt_array.m"
                {
#line 576 "bt_array.m"
                  MR_Word base;
#line 576 "bt_array.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 576 "bt_array.m"
                  *mercury__bt_array__List_10 = base;
#line 576 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
#line 576 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T_11));
#line 576 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_7));
#line 576 "bt_array.m"
                }
#line 576 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 575 "bt_array.m"
              }
#line 575 "bt_array.m"
          }
#line 577 "bt_array.m"
        else
#line 578 "bt_array.m"
          {
#line 578 "bt_array.m"
            MR_Integer mercury__bt_array__NewI_12 = (mercury__bt_array__I_8 - mercury__bt_array__Size_5);
#line 578 "bt_array.m"
            MR_Word mercury__bt_array__List0_13;

#line 579 "bt_array.m"
            {
#line 579 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_14, mercury__bt_array__Rest_7, mercury__bt_array__NewI_12, mercury__bt_array__X_9, &mercury__bt_array__List0_13);
            }
#line 578 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 578 "bt_array.m"
              {
#line 580 "bt_array.m"
                {
#line 580 "bt_array.m"
                  MR_Word base;
#line 580 "bt_array.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "bt_array.m"
                  *mercury__bt_array__List_10 = base;
#line 580 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size_5));
#line 580 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T0_6));
#line 580 "bt_array.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_13));
#line 580 "bt_array.m"
                }
#line 580 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 578 "bt_array.m"
              }
#line 578 "bt_array.m"
          }
#line 573 "bt_array.m"
      }
#line 573 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 573 "bt_array.m"
  }
#line 570 "bt_array.m"
}

#line 544 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_bintree_lookup_4_p_0(
#line 544 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_20,
#line 544 "bt_array.m"
  MR_Integer mercury__bt_array__Size_1,
#line 544 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 544 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__3_3,
#line 544 "bt_array.m"
  MR_Box * mercury__bt_array__X_4)
#line 544 "bt_array.m"
{
#line 547 "bt_array.m"
  while (MR_TRUE)
#line 547 "bt_array.m"
    {
#line 547 "bt_array.m"
      /* tailcall optimized into a loop */
#line 547 "bt_array.m"
      {
#line 547 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 547 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 547 "bt_array.m"
          {
#line 547 "bt_array.m"
            *mercury__bt_array__X_4 = (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 547 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 547 "bt_array.m"
          }
#line 547 "bt_array.m"
        else
#line 548 "bt_array.m"
          {
#line 548 "bt_array.m"
            MR_Box mercury__bt_array__X0_8 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0));
#line 548 "bt_array.m"
            MR_Word mercury__bt_array__T1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "bt_array.m"
            MR_Word mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));

#line 549 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 == (MR_Integer) 0);
#line 551 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 550 "bt_array.m"
              {
#line 550 "bt_array.m"
                *mercury__bt_array__X_4 = mercury__bt_array__X0_8;
#line 550 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 550 "bt_array.m"
              }
#line 551 "bt_array.m"
            else
#line 552 "bt_array.m"
              {
#line 552 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_13 = (mercury__bt_array__Size_1 / (MR_Integer) 2);

#line 553 "bt_array.m"
                mercury__bt_array__succeeded = (mercury__bt_array__HeadVar__3_3 <= mercury__bt_array__Size2_13);
#line 556 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 554 "bt_array.m"
                  {
#line 554 "bt_array.m"
                    MR_Integer mercury__bt_array__NewI_14 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);

#line 555 "bt_array.m"
                    /* direct tailcall eliminated */
#line 555 "bt_array.m"
                    {
#line 555 "bt_array.m"
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
#line 555 "bt_array.m"
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T1_9;
#line 555 "bt_array.m"
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_14;

#line 555 "bt_array.m"
                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 555 "bt_array.m"
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 555 "bt_array.m"
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
#line 555 "bt_array.m"
                    }
#line 555 "bt_array.m"
                    continue;
#line 554 "bt_array.m"
                  }
#line 556 "bt_array.m"
                else
#line 557 "bt_array.m"
                  {
#line 557 "bt_array.m"
                    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__HeadVar__3_3 - (MR_Integer) 1);
#line 557 "bt_array.m"
                    MR_Integer mercury__bt_array__NewI_19 = (mercury__bt_array__V_17_17 - mercury__bt_array__Size2_13);

#line 558 "bt_array.m"
                    /* direct tailcall eliminated */
#line 558 "bt_array.m"
                    {
#line 558 "bt_array.m"
                      MR_Integer mercury__bt_array__Size__tmp_copy_1 = mercury__bt_array__Size2_13;
#line 558 "bt_array.m"
                      MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__T2_10;
#line 558 "bt_array.m"
                      MR_Integer mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__NewI_19;

#line 558 "bt_array.m"
                      mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 558 "bt_array.m"
                      mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 558 "bt_array.m"
                      mercury__bt_array__Size_1 = mercury__bt_array__Size__tmp_copy_1;
#line 558 "bt_array.m"
                    }
#line 558 "bt_array.m"
                    continue;
#line 557 "bt_array.m"
                  }
#line 552 "bt_array.m"
              }
#line 548 "bt_array.m"
          }
#line 547 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 547 "bt_array.m"
      }
#line 547 "bt_array.m"
      break;
#line 547 "bt_array.m"
    }
#line 544 "bt_array.m"
}

#line 534 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_2_3_p_0(
#line 534 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 534 "bt_array.m"
  MR_Integer mercury__bt_array__I_4,
#line 534 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 534 "bt_array.m"
  MR_Box * mercury__bt_array__X_8)
#line 534 "bt_array.m"
{
#line 536 "bt_array.m"
  while (MR_TRUE)
#line 536 "bt_array.m"
    {
#line 536 "bt_array.m"
      /* tailcall optimized into a loop */
#line 536 "bt_array.m"
      {
#line 536 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 536 "bt_array.m"
        MR_Integer mercury__bt_array__Size_5;
#line 536 "bt_array.m"
        MR_Word mercury__bt_array__T_6;
#line 536 "bt_array.m"
        MR_Word mercury__bt_array__Rest_7;

#line 536 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 536 "bt_array.m"
          {
#line 536 "bt_array.m"
            mercury__bt_array__Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "bt_array.m"
            mercury__bt_array__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "bt_array.m"
            mercury__bt_array__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 537 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__I_4 < mercury__bt_array__Size_5);
#line 539 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 538 "bt_array.m"
              {
#line 538 "bt_array.m"
                return mercury__bt_array__succeeded = mercury__bt_array__ra_list_bintree_lookup_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Size_5, mercury__bt_array__T_6, mercury__bt_array__I_4, mercury__bt_array__X_8);
              }
#line 539 "bt_array.m"
            else
#line 540 "bt_array.m"
              {
#line 540 "bt_array.m"
                MR_Integer mercury__bt_array__NewI_9 = (mercury__bt_array__I_4 - mercury__bt_array__Size_5);

#line 541 "bt_array.m"
                /* direct tailcall eliminated */
#line 541 "bt_array.m"
                {
#line 541 "bt_array.m"
                  MR_Integer mercury__bt_array__I__tmp_copy_4 = mercury__bt_array__NewI_9;
#line 541 "bt_array.m"
                  MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__Rest_7;

#line 541 "bt_array.m"
                  mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 541 "bt_array.m"
                  mercury__bt_array__I_4 = mercury__bt_array__I__tmp_copy_4;
#line 541 "bt_array.m"
                }
#line 541 "bt_array.m"
                continue;
#line 540 "bt_array.m"
              }
#line 536 "bt_array.m"
          }
#line 536 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 536 "bt_array.m"
      }
#line 536 "bt_array.m"
      break;
#line 536 "bt_array.m"
    }
#line 534 "bt_array.m"
}

#line 468 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_update_4_p_0(
#line 468 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 468 "bt_array.m"
  MR_Word mercury__bt_array__List0_5,
#line 468 "bt_array.m"
  MR_Integer mercury__bt_array__I_6,
#line 468 "bt_array.m"
  MR_Box mercury__bt_array__X_7,
#line 468 "bt_array.m"
  MR_Word * mercury__bt_array__List_8)
#line 468 "bt_array.m"
{
#line 566 "bt_array.m"
  {
#line 566 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_6 >= (MR_Integer) 0);

#line 566 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 568 "bt_array.m"
      {
#line 568 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__List0_5, mercury__bt_array__I_6, mercury__bt_array__X_7, mercury__bt_array__List_8);
      }
#line 566 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 566 "bt_array.m"
  }
#line 468 "bt_array.m"
}

#line 466 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_lookup_3_p_0(
#line 466 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 466 "bt_array.m"
  MR_Integer mercury__bt_array__I_4,
#line 466 "bt_array.m"
  MR_Word mercury__bt_array__List_5,
#line 466 "bt_array.m"
  MR_Box * mercury__bt_array__X_6)
#line 466 "bt_array.m"
{
#line 530 "bt_array.m"
  {
#line 530 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__I_4 >= (MR_Integer) 0);

#line 530 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 532 "bt_array.m"
      {
#line 532 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__I_4, mercury__bt_array__List_5, mercury__bt_array__X_6);
      }
#line 530 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 530 "bt_array.m"
  }
#line 466 "bt_array.m"
}

#line 462 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__ra_list_head_tail_3_p_0(
#line 462 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
#line 462 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 462 "bt_array.m"
  MR_Box * mercury__bt_array__X_2,
#line 462 "bt_array.m"
  MR_Word * mercury__bt_array__Tail_3)
#line 462 "bt_array.m"
{
#line 521 "bt_array.m"
  {
#line 521 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 521 "bt_array.m"
    MR_Word mercury__bt_array__V_19_19;
#line 521 "bt_array.m"
    MR_Word mercury__bt_array__V_20_20;
#line 521 "bt_array.m"
    MR_Integer mercury__bt_array__V_21_21;

#line 521 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 521 "bt_array.m"
      {
#line 521 "bt_array.m"
        mercury__bt_array__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "bt_array.m"
        mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "bt_array.m"
        mercury__bt_array__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 521 "bt_array.m"
        if (((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 0))))
#line 521 "bt_array.m"
          {
#line 521 "bt_array.m"
            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_20_20, (MR_Integer) 0));
#line 521 "bt_array.m"
            *mercury__bt_array__Tail_3 = mercury__bt_array__V_19_19;
#line 521 "bt_array.m"
          }
#line 521 "bt_array.m"
        else
#line 522 "bt_array.m"
          {
#line 522 "bt_array.m"
            MR_Word mercury__bt_array__T1_10;
#line 522 "bt_array.m"
            MR_Word mercury__bt_array__T2_11;
#line 522 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_14;
#line 522 "bt_array.m"
            MR_Word mercury__bt_array__V_17_17;

#line 522 "bt_array.m"
            *mercury__bt_array__X_2 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0));
#line 522 "bt_array.m"
            mercury__bt_array__T1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
#line 522 "bt_array.m"
            mercury__bt_array__T2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
#line 48 "int.opt"
            mercury__bt_array__Size2_14 = (mercury__bt_array__V_21_21 / (MR_Integer) 2);
#line 524 "bt_array.m"
            {
#line 524 "bt_array.m"
              mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 1) = ((MR_Box) (mercury__bt_array__T2_11));
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_17_17, 2) = ((MR_Box) (mercury__bt_array__V_19_19));
#line 524 "bt_array.m"
            }
#line 524 "bt_array.m"
            {
#line 524 "bt_array.m"
              MR_Word base;
#line 524 "bt_array.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
              *mercury__bt_array__Tail_3 = base;
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__Size2_14));
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__T1_10));
#line 524 "bt_array.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__V_17_17));
#line 524 "bt_array.m"
            }
#line 522 "bt_array.m"
          }
#line 521 "bt_array.m"
        mercury__bt_array__succeeded = MR_TRUE;
#line 521 "bt_array.m"
      }
#line 521 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 521 "bt_array.m"
  }
#line 462 "bt_array.m"
}

#line 456 "bt_array.m"
void MR_CALL 
mercury__bt_array__ra_list_cons_3_p_0(
#line 456 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_19,
#line 456 "bt_array.m"
  MR_Box mercury__bt_array__X_4,
#line 456 "bt_array.m"
  MR_Word mercury__bt_array__List0_5,
#line 456 "bt_array.m"
  MR_Word * mercury__bt_array__List_6)
#line 456 "bt_array.m"
{
#line 503 "bt_array.m"
  {
#line 503 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__List0_5)) == (MR_mktag((MR_Integer) 1)));
#line 503 "bt_array.m"
    MR_Integer mercury__bt_array__Size1_7;
#line 503 "bt_array.m"
    MR_Word mercury__bt_array__T1_8;
#line 503 "bt_array.m"
    MR_Integer mercury__bt_array__Size2_9;
#line 503 "bt_array.m"
    MR_Word mercury__bt_array__T2_10;
#line 503 "bt_array.m"
    MR_Word mercury__bt_array__Rest_11;
#line 498 "bt_array.m"
    MR_Word mercury__bt_array__V_13_13;

#line 498 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
      {
#line 498 "bt_array.m"
        mercury__bt_array__Size1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 0)));
#line 498 "bt_array.m"
        mercury__bt_array__T1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 1)));
#line 498 "bt_array.m"
        mercury__bt_array__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__List0_5, (MR_Integer) 2)));
#line 498 "bt_array.m"
        mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 498 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
          {
#line 498 "bt_array.m"
            mercury__bt_array__Size2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 0)));
#line 498 "bt_array.m"
            mercury__bt_array__T2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 1)));
#line 498 "bt_array.m"
            mercury__bt_array__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_13_13, (MR_Integer) 2)));
#line 499 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__Size1_7 == mercury__bt_array__Size2_9);
#line 498 "bt_array.m"
          }
#line 498 "bt_array.m"
      }
#line 503 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 501 "bt_array.m"
      {
#line 501 "bt_array.m"
        MR_Integer mercury__bt_array__NewSize_12;
#line 501 "bt_array.m"
        MR_Integer mercury__bt_array__V_14_14 = ((MR_Integer) 1 + mercury__bt_array__Size1_7);
#line 501 "bt_array.m"
        MR_Word mercury__bt_array__V_16_16;

#line 501 "bt_array.m"
        mercury__bt_array__NewSize_12 = (mercury__bt_array__V_14_14 + mercury__bt_array__Size2_9);
#line 502 "bt_array.m"
        {
#line 502 "bt_array.m"
          mercury__bt_array__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 0) = mercury__bt_array__X_4;
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 1) = ((MR_Box) (mercury__bt_array__T1_8));
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), mercury__bt_array__V_16_16, 2) = ((MR_Box) (mercury__bt_array__T2_10));
#line 502 "bt_array.m"
        }
#line 502 "bt_array.m"
        {
#line 502 "bt_array.m"
          MR_Word base;
#line 502 "bt_array.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
          *mercury__bt_array__List_6 = base;
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bt_array__NewSize_12));
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_16_16));
#line 502 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__Rest_11));
#line 502 "bt_array.m"
        }
#line 501 "bt_array.m"
      }
#line 503 "bt_array.m"
    else
#line 504 "bt_array.m"
      {
#line 504 "bt_array.m"
        MR_Word mercury__bt_array__V_18_18;

#line 504 "bt_array.m"
        {
#line 504 "bt_array.m"
          mercury__bt_array__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__V_18_18, 0) = mercury__bt_array__X_4;
#line 504 "bt_array.m"
        }
#line 504 "bt_array.m"
        {
#line 504 "bt_array.m"
          MR_Word base;
#line 504 "bt_array.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "bt_array.m"
          *mercury__bt_array__List_6 = base;
#line 504 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 504 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bt_array__V_18_18));
#line 504 "bt_array.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__bt_array__List0_5));
#line 504 "bt_array.m"
        }
#line 504 "bt_array.m"
      }
#line 503 "bt_array.m"
  }
#line 456 "bt_array.m"
}

#line 454 "bt_array.m"
void MR_CALL 
mercury__bt_array__ra_list_nil_1_p_0(
#line 454 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_2,
#line 454 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__1_1)
#line 454 "bt_array.m"
{
#line 492 "bt_array.m"
  {
#line 492 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;

#line 492 "bt_array.m"
    *mercury__bt_array__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "bt_array.m"
  }
#line 454 "bt_array.m"
}

#line 396 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__bsearch_loop_6_p_0(
#line 396 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_27,
#line 396 "bt_array.m"
  MR_Word mercury__bt_array__A_7,
#line 396 "bt_array.m"
  MR_Integer mercury__bt_array__Lo_8,
#line 396 "bt_array.m"
  MR_Integer mercury__bt_array__Hi_9,
#line 396 "bt_array.m"
  MR_Box mercury__bt_array__SearchX_10,
#line 396 "bt_array.m"
  MR_Word mercury__bt_array__Compare_11,
#line 396 "bt_array.m"
  MR_Integer * mercury__bt_array__I_12)
#line 396 "bt_array.m"
{
#line 400 "bt_array.m"
  while (MR_TRUE)
#line 400 "bt_array.m"
    {
#line 400 "bt_array.m"
      /* tailcall optimized into a loop */
#line 400 "bt_array.m"
      {
#line 400 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;
#line 400 "bt_array.m"
        MR_Integer mercury__bt_array__Width_13 = (mercury__bt_array__Hi_9 - mercury__bt_array__Lo_8);

#line 404 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__Width_13 >= (MR_Integer) 0);
#line 400 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 400 "bt_array.m"
          {
#line 408 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__Width_13 == (MR_Integer) 0);
#line 412 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 409 "bt_array.m"
              {
#line 409 "bt_array.m"
                MR_Box mercury__bt_array__LoX_14;
#line 409 "bt_array.m"
                MR_Word mercury__bt_array__V_28_28;
#line 410 "bt_array.m"
                void MR_CALL (* mercury__bt_array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 410 "bt_array.m"
                MR_Box mercury__bt_array__conv1_V_28_28;

#line 409 "bt_array.m"
                {
#line 409 "bt_array.m"
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_27, mercury__bt_array__A_7, mercury__bt_array__Lo_8, &mercury__bt_array__LoX_14);
                }
#line 410 "bt_array.m"
                mercury__bt_array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
#line 410 "bt_array.m"
                {
#line 410 "bt_array.m"
                  mercury__bt_array__func_0(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__SearchX_10, mercury__bt_array__LoX_14, &mercury__bt_array__conv1_V_28_28);
                }
#line 410 "bt_array.m"
                mercury__bt_array__V_28_28 = ((MR_Word) mercury__bt_array__conv1_V_28_28);
#line 410 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_Integer) 0 == mercury__bt_array__V_28_28);
#line 409 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 409 "bt_array.m"
                  {
#line 411 "bt_array.m"
                    *mercury__bt_array__I_12 = mercury__bt_array__Lo_8;
#line 411 "bt_array.m"
                    mercury__bt_array__succeeded = MR_TRUE;
#line 409 "bt_array.m"
                  }
#line 409 "bt_array.m"
              }
#line 412 "bt_array.m"
            else
#line 415 "bt_array.m"
              {
#line 415 "bt_array.m"
                MR_Integer mercury__bt_array__Mid_15;
#line 415 "bt_array.m"
                MR_Box mercury__bt_array__MidX_16;
#line 415 "bt_array.m"
                MR_Word mercury__bt_array__Comp_17;
#line 415 "bt_array.m"
                MR_Integer mercury__bt_array__V_20_20;
#line 415 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = (mercury__bt_array__Hi_9 - mercury__bt_array__Lo_8);
#line 419 "bt_array.m"
                void MR_CALL (* mercury__bt_array__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 419 "bt_array.m"
                MR_Box mercury__bt_array__conv3_Comp_17;

#line 415 "bt_array.m"
                mercury__bt_array__V_20_20 = (mercury__bt_array__V_21_21 >> (MR_Integer) 1);
#line 415 "bt_array.m"
                mercury__bt_array__Mid_15 = (mercury__bt_array__Lo_8 + mercury__bt_array__V_20_20);
#line 418 "bt_array.m"
                {
#line 418 "bt_array.m"
                  mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_27, mercury__bt_array__A_7, mercury__bt_array__Mid_15, &mercury__bt_array__MidX_16);
                }
#line 419 "bt_array.m"
                mercury__bt_array__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bt_array__Compare_11, (MR_Integer) 1)));
#line 419 "bt_array.m"
                {
#line 419 "bt_array.m"
                  mercury__bt_array__func_2(((MR_Box) mercury__bt_array__Compare_11), mercury__bt_array__MidX_16, mercury__bt_array__SearchX_10, &mercury__bt_array__conv3_Comp_17);
                }
#line 419 "bt_array.m"
                mercury__bt_array__Comp_17 = ((MR_Word) mercury__bt_array__conv3_Comp_17);
#line 423 "bt_array.m"
#line 423 "bt_array.m"
                switch (mercury__bt_array__Comp_17) {
#line 423 "bt_array.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 423 "bt_array.m"
                  case (MR_Integer) 1:
#line 421 "bt_array.m"
                    {
#line 421 "bt_array.m"
                      MR_Integer mercury__bt_array__V_25_25 = (mercury__bt_array__Mid_15 + (MR_Integer) 1);

#line 422 "bt_array.m"
                      /* direct tailcall eliminated */
#line 422 "bt_array.m"
                      {
#line 422 "bt_array.m"
                        MR_Integer mercury__bt_array__Lo__tmp_copy_8 = mercury__bt_array__V_25_25;

#line 422 "bt_array.m"
                        mercury__bt_array__Lo_8 = mercury__bt_array__Lo__tmp_copy_8;
#line 422 "bt_array.m"
                      }
#line 422 "bt_array.m"
                      continue;
#line 421 "bt_array.m"
                    }
#line 423 "bt_array.m"
                    break;
#line 423 "bt_array.m"
                  case (MR_Integer) 0:
#line 425 "bt_array.m"
                    {
#line 425 "bt_array.m"
                      /* direct tailcall eliminated */
#line 425 "bt_array.m"
                      {
#line 425 "bt_array.m"
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__Mid_15;

#line 425 "bt_array.m"
                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
#line 425 "bt_array.m"
                      }
#line 425 "bt_array.m"
                      continue;
#line 425 "bt_array.m"
                    }
#line 423 "bt_array.m"
                    break;
#line 423 "bt_array.m"
                  case (MR_Integer) 2:
#line 427 "bt_array.m"
                    {
#line 427 "bt_array.m"
                      MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__Mid_15 - (MR_Integer) 1);

#line 428 "bt_array.m"
                      /* direct tailcall eliminated */
#line 428 "bt_array.m"
                      {
#line 428 "bt_array.m"
                        MR_Integer mercury__bt_array__Hi__tmp_copy_9 = mercury__bt_array__V_23_23;

#line 428 "bt_array.m"
                        mercury__bt_array__Hi_9 = mercury__bt_array__Hi__tmp_copy_9;
#line 428 "bt_array.m"
                      }
#line 428 "bt_array.m"
                      continue;
#line 427 "bt_array.m"
                    }
#line 423 "bt_array.m"
                    break;
#line 423 "bt_array.m"
                }
#line 415 "bt_array.m"
              }
#line 400 "bt_array.m"
          }
#line 400 "bt_array.m"
        return mercury__bt_array__succeeded;
#line 400 "bt_array.m"
      }
#line 400 "bt_array.m"
      break;
#line 400 "bt_array.m"
    }
#line 396 "bt_array.m"
}

#line 345 "bt_array.m"
void MR_CALL 
mercury__bt_array__reverse_from_ra_list_3_p_0(
#line 345 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 345 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_4,
#line 345 "bt_array.m"
  MR_Word mercury__bt_array__Xs0_5,
#line 345 "bt_array.m"
  MR_Word * mercury__bt_array__Xs_6)
#line 345 "bt_array.m"
{
#line 350 "bt_array.m"
  while (MR_TRUE)
#line 350 "bt_array.m"
    {
#line 350 "bt_array.m"
      /* tailcall optimized into a loop */
#line 350 "bt_array.m"
      {
#line 350 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_4)) == (MR_mktag((MR_Integer) 1)));
#line 350 "bt_array.m"
        MR_Box mercury__bt_array__X_7;
#line 350 "bt_array.m"
        MR_Word mercury__bt_array__RaList1_8;
#line 521 "bt_array.m"
        MR_Word mercury__bt_array__V_25_25;
#line 521 "bt_array.m"
        MR_Word mercury__bt_array__V_26_26;
#line 521 "bt_array.m"
        MR_Integer mercury__bt_array__V_27_27;

#line 521 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 521 "bt_array.m"
          {
#line 521 "bt_array.m"
            mercury__bt_array__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 0)));
#line 521 "bt_array.m"
            mercury__bt_array__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 1)));
#line 521 "bt_array.m"
            mercury__bt_array__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_4, (MR_Integer) 2)));
#line 521 "bt_array.m"
            if (((MR_tag((MR_Word) mercury__bt_array__V_26_26)) == (MR_mktag((MR_Integer) 0))))
#line 521 "bt_array.m"
              {
#line 521 "bt_array.m"
                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_26_26, (MR_Integer) 0));
#line 521 "bt_array.m"
                mercury__bt_array__RaList1_8 = mercury__bt_array__V_25_25;
#line 521 "bt_array.m"
              }
#line 521 "bt_array.m"
            else
#line 522 "bt_array.m"
              {
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__T1_17;
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__T2_18;
#line 522 "bt_array.m"
                MR_Integer mercury__bt_array__Size2_21;
#line 522 "bt_array.m"
                MR_Word mercury__bt_array__V_24_24;

#line 522 "bt_array.m"
                mercury__bt_array__X_7 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 0));
#line 522 "bt_array.m"
                mercury__bt_array__T1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 1)));
#line 522 "bt_array.m"
                mercury__bt_array__T2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, (MR_Integer) 2)));
#line 48 "int.opt"
                mercury__bt_array__Size2_21 = (mercury__bt_array__V_27_27 / (MR_Integer) 2);
#line 524 "bt_array.m"
                {
#line 524 "bt_array.m"
                  mercury__bt_array__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 1) = ((MR_Box) (mercury__bt_array__T2_18));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_24_24, 2) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 524 "bt_array.m"
                }
#line 524 "bt_array.m"
                {
#line 524 "bt_array.m"
                  mercury__bt_array__RaList1_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 0) = ((MR_Box) (mercury__bt_array__Size2_21));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 1) = ((MR_Box) (mercury__bt_array__T1_17));
#line 524 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_8, 2) = ((MR_Box) (mercury__bt_array__V_24_24));
#line 524 "bt_array.m"
                }
#line 522 "bt_array.m"
              }
#line 521 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 521 "bt_array.m"
          }
#line 350 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 349 "bt_array.m"
          {
#line 349 "bt_array.m"
            MR_Word mercury__bt_array__V_9_9;

#line 349 "bt_array.m"
            {
#line 349 "bt_array.m"
              mercury__bt_array__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 0) = mercury__bt_array__X_7;
#line 349 "bt_array.m"
              MR_hl_field(MR_mktag(1), mercury__bt_array__V_9_9, 1) = ((MR_Box) (mercury__bt_array__Xs0_5));
#line 349 "bt_array.m"
            }
#line 349 "bt_array.m"
            /* direct tailcall eliminated */
#line 349 "bt_array.m"
            {
#line 349 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_4 = mercury__bt_array__RaList1_8;
#line 349 "bt_array.m"
              MR_Word mercury__bt_array__Xs0__tmp_copy_5 = mercury__bt_array__V_9_9;

#line 349 "bt_array.m"
              mercury__bt_array__Xs0_5 = mercury__bt_array__Xs0__tmp_copy_5;
#line 349 "bt_array.m"
              mercury__bt_array__RaList0_4 = mercury__bt_array__RaList0__tmp_copy_4;
#line 349 "bt_array.m"
            }
#line 349 "bt_array.m"
            continue;
#line 349 "bt_array.m"
          }
#line 350 "bt_array.m"
        else
#line 351 "bt_array.m"
          *mercury__bt_array__Xs_6 = mercury__bt_array__Xs0_5;
#line 350 "bt_array.m"
      }
#line 350 "bt_array.m"
      break;
#line 350 "bt_array.m"
    }
#line 345 "bt_array.m"
}

#line 331 "bt_array.m"
static void MR_CALL 
mercury__bt_array__insert_items_4_p_0(
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_15,
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 331 "bt_array.m"
  MR_Integer mercury__bt_array__HeadVar__2_2,
#line 331 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__3_3,
#line 331 "bt_array.m"
  MR_Word * mercury__bt_array__Array_4)
#line 331 "bt_array.m"
{
#line 334 "bt_array.m"
  while (MR_TRUE)
#line 334 "bt_array.m"
    {
#line 334 "bt_array.m"
      /* tailcall optimized into a loop */
#line 334 "bt_array.m"
      {
#line 334 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 334 "bt_array.m"
        if ((mercury__bt_array__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "bt_array.m"
          *mercury__bt_array__Array_4 = mercury__bt_array__HeadVar__1_1;
#line 334 "bt_array.m"
        else
#line 335 "bt_array.m"
          {
#line 335 "bt_array.m"
            MR_Box mercury__bt_array__Head_9 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 0));
#line 335 "bt_array.m"
            MR_Word mercury__bt_array__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "bt_array.m"
            MR_Word mercury__bt_array__Array1_12;
#line 335 "bt_array.m"
            MR_Integer mercury__bt_array__N1_13;

#line 336 "bt_array.m"
            {
#line 336 "bt_array.m"
              mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_15, mercury__bt_array__HeadVar__1_1, mercury__bt_array__HeadVar__2_2, mercury__bt_array__Head_9, &mercury__bt_array__Array1_12);
            }
#line 337 "bt_array.m"
            mercury__bt_array__N1_13 = (mercury__bt_array__HeadVar__2_2 + (MR_Integer) 1);
#line 338 "bt_array.m"
            /* direct tailcall eliminated */
#line 338 "bt_array.m"
            {
#line 338 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Array1_12;
#line 338 "bt_array.m"
              MR_Integer mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__N1_13;
#line 338 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__3__tmp_copy_3 = mercury__bt_array__Tail_10;

#line 338 "bt_array.m"
              mercury__bt_array__HeadVar__3_3 = mercury__bt_array__HeadVar__3__tmp_copy_3;
#line 338 "bt_array.m"
              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 338 "bt_array.m"
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 338 "bt_array.m"
            }
#line 338 "bt_array.m"
            continue;
#line 335 "bt_array.m"
          }
#line 334 "bt_array.m"
      }
#line 334 "bt_array.m"
      break;
#line 334 "bt_array.m"
    }
#line 331 "bt_array.m"
}

#line 321 "bt_array.m"
void MR_CALL 
mercury__bt_array__reverse_into_ra_list_3_p_0(
#line 321 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 321 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 321 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__2_2,
#line 321 "bt_array.m"
  MR_Word * mercury__bt_array__RaList_3)
#line 321 "bt_array.m"
{
#line 324 "bt_array.m"
  while (MR_TRUE)
#line 324 "bt_array.m"
    {
#line 324 "bt_array.m"
      /* tailcall optimized into a loop */
#line 324 "bt_array.m"
      {
#line 324 "bt_array.m"
        MR_bool mercury__bt_array__succeeded;

#line 324 "bt_array.m"
        if ((mercury__bt_array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "bt_array.m"
          *mercury__bt_array__RaList_3 = mercury__bt_array__HeadVar__2_2;
#line 324 "bt_array.m"
        else
#line 325 "bt_array.m"
          {
#line 325 "bt_array.m"
            MR_Box mercury__bt_array__X_5 = (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0));
#line 325 "bt_array.m"
            MR_Word mercury__bt_array__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_9;
#line 503 "bt_array.m"
            MR_Integer mercury__bt_array__Size1_14;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__T1_15;
#line 503 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_16;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__T2_17;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__Rest_18;
#line 498 "bt_array.m"
            MR_Word mercury__bt_array__V_20_20;

#line 498 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 498 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
              {
#line 498 "bt_array.m"
                mercury__bt_array__Size1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 0)));
#line 498 "bt_array.m"
                mercury__bt_array__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 1)));
#line 498 "bt_array.m"
                mercury__bt_array__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__HeadVar__2_2, (MR_Integer) 2)));
#line 498 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 498 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
                  {
#line 498 "bt_array.m"
                    mercury__bt_array__Size2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 0)));
#line 498 "bt_array.m"
                    mercury__bt_array__T2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 1)));
#line 498 "bt_array.m"
                    mercury__bt_array__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_20_20, (MR_Integer) 2)));
#line 499 "bt_array.m"
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_14 == mercury__bt_array__Size2_16);
#line 498 "bt_array.m"
                  }
#line 498 "bt_array.m"
              }
#line 503 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 501 "bt_array.m"
              {
#line 501 "bt_array.m"
                MR_Integer mercury__bt_array__NewSize_19;
#line 501 "bt_array.m"
                MR_Integer mercury__bt_array__V_21_21 = ((MR_Integer) 1 + mercury__bt_array__Size1_14);
#line 501 "bt_array.m"
                MR_Word mercury__bt_array__V_23_23;

#line 501 "bt_array.m"
                mercury__bt_array__NewSize_19 = (mercury__bt_array__V_21_21 + mercury__bt_array__Size2_16);
#line 502 "bt_array.m"
                {
#line 502 "bt_array.m"
                  mercury__bt_array__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 0) = mercury__bt_array__X_5;
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 1) = ((MR_Box) (mercury__bt_array__T1_15));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, 2) = ((MR_Box) (mercury__bt_array__T2_17));
#line 502 "bt_array.m"
                }
#line 502 "bt_array.m"
                {
#line 502 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_19));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_23_23));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_18));
#line 502 "bt_array.m"
                }
#line 501 "bt_array.m"
              }
#line 503 "bt_array.m"
            else
#line 504 "bt_array.m"
              {
#line 504 "bt_array.m"
                MR_Word mercury__bt_array__V_25_25;

#line 504 "bt_array.m"
                {
#line 504 "bt_array.m"
                  mercury__bt_array__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_25_25, 0) = mercury__bt_array__X_5;
#line 504 "bt_array.m"
                }
#line 504 "bt_array.m"
                {
#line 504 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_25_25));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__HeadVar__2_2));
#line 504 "bt_array.m"
                }
#line 504 "bt_array.m"
              }
#line 327 "bt_array.m"
            /* direct tailcall eliminated */
#line 327 "bt_array.m"
            {
#line 327 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__1__tmp_copy_1 = mercury__bt_array__Xs_6;
#line 327 "bt_array.m"
              MR_Word mercury__bt_array__HeadVar__2__tmp_copy_2 = mercury__bt_array__RaList1_9;

#line 327 "bt_array.m"
              mercury__bt_array__HeadVar__2_2 = mercury__bt_array__HeadVar__2__tmp_copy_2;
#line 327 "bt_array.m"
              mercury__bt_array__HeadVar__1_1 = mercury__bt_array__HeadVar__1__tmp_copy_1;
#line 327 "bt_array.m"
            }
#line 327 "bt_array.m"
            continue;
#line 325 "bt_array.m"
          }
#line 324 "bt_array.m"
      }
#line 324 "bt_array.m"
      break;
#line 324 "bt_array.m"
    }
#line 321 "bt_array.m"
}

#line 223 "bt_array.m"
void MR_CALL 
mercury__bt_array__actual_position_4_p_0(
#line 223 "bt_array.m"
  MR_Integer mercury__bt_array__Low_5,
#line 223 "bt_array.m"
  MR_Integer mercury__bt_array__High_6,
#line 223 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 223 "bt_array.m"
  MR_Integer * mercury__bt_array__Pos_8)
#line 223 "bt_array.m"
{
#line 225 "bt_array.m"
  {
#line 225 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 225 "bt_array.m"
    MR_Integer mercury__bt_array__V_9_9 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 226 "bt_array.m"
    *mercury__bt_array__Pos_8 = (mercury__bt_array__V_9_9 - mercury__bt_array__Index_7);
#line 225 "bt_array.m"
  }
#line 223 "bt_array.m"
}

#line 195 "bt_array.m"
void MR_CALL 
mercury__bt_array__add_elements_4_p_0(
#line 195 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 195 "bt_array.m"
  MR_Integer mercury__bt_array__ElemsToAdd_5,
#line 195 "bt_array.m"
  MR_Box mercury__bt_array__Item_6,
#line 195 "bt_array.m"
  MR_Word mercury__bt_array__RaList0_7,
#line 195 "bt_array.m"
  MR_Word * mercury__bt_array__RaList_8)
#line 195 "bt_array.m"
{
#line 200 "bt_array.m"
  while (MR_TRUE)
#line 200 "bt_array.m"
    {
#line 200 "bt_array.m"
      /* tailcall optimized into a loop */
#line 200 "bt_array.m"
      {
#line 200 "bt_array.m"
        MR_bool mercury__bt_array__succeeded = (mercury__bt_array__ElemsToAdd_5 <= (MR_Integer) 0);

#line 200 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 199 "bt_array.m"
          *mercury__bt_array__RaList_8 = mercury__bt_array__RaList0_7;
#line 200 "bt_array.m"
        else
#line 201 "bt_array.m"
          {
#line 201 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_9;
#line 201 "bt_array.m"
            MR_Integer mercury__bt_array__ElemsToAdd1_10;
#line 503 "bt_array.m"
            MR_Integer mercury__bt_array__Size1_17;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__T1_18;
#line 503 "bt_array.m"
            MR_Integer mercury__bt_array__Size2_19;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__T2_20;
#line 503 "bt_array.m"
            MR_Word mercury__bt_array__Rest_21;
#line 498 "bt_array.m"
            MR_Word mercury__bt_array__V_23_23;

#line 498 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_7)) == (MR_mktag((MR_Integer) 1)));
#line 498 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
              {
#line 498 "bt_array.m"
                mercury__bt_array__Size1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 0)));
#line 498 "bt_array.m"
                mercury__bt_array__T1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 1)));
#line 498 "bt_array.m"
                mercury__bt_array__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_7, (MR_Integer) 2)));
#line 498 "bt_array.m"
                mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 498 "bt_array.m"
                if (mercury__bt_array__succeeded)
#line 498 "bt_array.m"
                  {
#line 498 "bt_array.m"
                    mercury__bt_array__Size2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 0)));
#line 498 "bt_array.m"
                    mercury__bt_array__T2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 1)));
#line 498 "bt_array.m"
                    mercury__bt_array__Rest_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_23_23, (MR_Integer) 2)));
#line 499 "bt_array.m"
                    mercury__bt_array__succeeded = (mercury__bt_array__Size1_17 == mercury__bt_array__Size2_19);
#line 498 "bt_array.m"
                  }
#line 498 "bt_array.m"
              }
#line 503 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 501 "bt_array.m"
              {
#line 501 "bt_array.m"
                MR_Integer mercury__bt_array__NewSize_22;
#line 501 "bt_array.m"
                MR_Integer mercury__bt_array__V_24_24 = ((MR_Integer) 1 + mercury__bt_array__Size1_17);
#line 501 "bt_array.m"
                MR_Word mercury__bt_array__V_26_26;

#line 501 "bt_array.m"
                mercury__bt_array__NewSize_22 = (mercury__bt_array__V_24_24 + mercury__bt_array__Size2_19);
#line 502 "bt_array.m"
                {
#line 502 "bt_array.m"
                  mercury__bt_array__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 0) = mercury__bt_array__Item_6;
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 1) = ((MR_Box) (mercury__bt_array__T1_18));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__V_26_26, 2) = ((MR_Box) (mercury__bt_array__T2_20));
#line 502 "bt_array.m"
                }
#line 502 "bt_array.m"
                {
#line 502 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) (mercury__bt_array__NewSize_22));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_26_26));
#line 502 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__Rest_21));
#line 502 "bt_array.m"
                }
#line 501 "bt_array.m"
              }
#line 503 "bt_array.m"
            else
#line 504 "bt_array.m"
              {
#line 504 "bt_array.m"
                MR_Word mercury__bt_array__V_28_28;

#line 504 "bt_array.m"
                {
#line 504 "bt_array.m"
                  mercury__bt_array__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(0), mercury__bt_array__V_28_28, 0) = mercury__bt_array__Item_6;
#line 504 "bt_array.m"
                }
#line 504 "bt_array.m"
                {
#line 504 "bt_array.m"
                  mercury__bt_array__RaList1_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 0) = ((MR_Box) ((MR_Integer) 1));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 1) = ((MR_Box) (mercury__bt_array__V_28_28));
#line 504 "bt_array.m"
                  MR_hl_field(MR_mktag(1), mercury__bt_array__RaList1_9, 2) = ((MR_Box) (mercury__bt_array__RaList0_7));
#line 504 "bt_array.m"
                }
#line 504 "bt_array.m"
              }
#line 202 "bt_array.m"
            mercury__bt_array__ElemsToAdd1_10 = (mercury__bt_array__ElemsToAdd_5 - (MR_Integer) 1);
#line 203 "bt_array.m"
            /* direct tailcall eliminated */
#line 203 "bt_array.m"
            {
#line 203 "bt_array.m"
              MR_Integer mercury__bt_array__ElemsToAdd__tmp_copy_5 = mercury__bt_array__ElemsToAdd1_10;
#line 203 "bt_array.m"
              MR_Word mercury__bt_array__RaList0__tmp_copy_7 = mercury__bt_array__RaList1_9;

#line 203 "bt_array.m"
              mercury__bt_array__RaList0_7 = mercury__bt_array__RaList0__tmp_copy_7;
#line 203 "bt_array.m"
              mercury__bt_array__ElemsToAdd_5 = mercury__bt_array__ElemsToAdd__tmp_copy_5;
#line 203 "bt_array.m"
            }
#line 203 "bt_array.m"
            continue;
#line 201 "bt_array.m"
          }
#line 200 "bt_array.m"
      }
#line 200 "bt_array.m"
      break;
#line 200 "bt_array.m"
    }
#line 195 "bt_array.m"
}

#line 171 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__f_101_108_101_109_32_58_61_3_f_0(
#line 171 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 171 "bt_array.m"
  MR_Integer mercury__bt_array__Index_5,
#line 171 "bt_array.m"
  MR_Word mercury__bt_array__Array_6,
#line 171 "bt_array.m"
  MR_Box mercury__bt_array__Value_7)
#line 171 "bt_array.m"
{
#line 653 "bt_array.m"
  {
#line 653 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 653 "bt_array.m"
    MR_Word mercury__bt_array__HeadVar__4_4;

#line 653 "bt_array.m"
    {
#line 653 "bt_array.m"
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__Array_6, mercury__bt_array__Index_5, mercury__bt_array__Value_7, &mercury__bt_array__HeadVar__4_4);
    }
#line 653 "bt_array.m"
    return mercury__bt_array__HeadVar__4_4;
#line 653 "bt_array.m"
  }
#line 171 "bt_array.m"
}

#line 166 "bt_array.m"
MR_Box MR_CALL 
mercury__bt_array__elem_2_f_0(
#line 166 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_6,
#line 166 "bt_array.m"
  MR_Integer mercury__bt_array__Index_4,
#line 166 "bt_array.m"
  MR_Word mercury__bt_array__Array_5)
#line 166 "bt_array.m"
{
#line 650 "bt_array.m"
  {
#line 650 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 650 "bt_array.m"
    MR_Box mercury__bt_array__HeadVar__3_3;

#line 650 "bt_array.m"
    {
#line 650 "bt_array.m"
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_6, mercury__bt_array__Array_5, mercury__bt_array__Index_4, &mercury__bt_array__HeadVar__3_3);
    }
#line 650 "bt_array.m"
    return mercury__bt_array__HeadVar__3_3;
#line 650 "bt_array.m"
  }
#line 166 "bt_array.m"
}

#line 160 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__bsearch_4_p_0(
#line 160 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 160 "bt_array.m"
  MR_Word mercury__bt_array__A_5,
#line 160 "bt_array.m"
  MR_Box mercury__bt_array__SearchX_6,
#line 160 "bt_array.m"
  MR_Word mercury__bt_array__Compare_7,
#line 160 "bt_array.m"
  MR_Integer * mercury__bt_array__I_8)
#line 160 "bt_array.m"
{
#line 388 "bt_array.m"
  {
#line 388 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 388 "bt_array.m"
    MR_Integer mercury__bt_array__Lo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 0)));
#line 388 "bt_array.m"
    MR_Integer mercury__bt_array__Hi_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 1)));
#line 215 "bt_array.m"
    MR_Word mercury__bt_array__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__A_5, (MR_Integer) 2)));

#line 390 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Lo_9 <= mercury__bt_array__Hi_10);
#line 388 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 391 "bt_array.m"
      {
#line 391 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__bsearch_loop_6_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__A_5, mercury__bt_array__Lo_9, mercury__bt_array__Hi_10, mercury__bt_array__SearchX_6, mercury__bt_array__Compare_7, mercury__bt_array__I_8);
      }
#line 388 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 388 "bt_array.m"
  }
#line 160 "bt_array.m"
}

#line 152 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__fetch_items_3_f_0(
#line 152 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 152 "bt_array.m"
  MR_Word mercury__bt_array__BTA_5,
#line 152 "bt_array.m"
  MR_Integer mercury__bt_array__N1_6,
#line 152 "bt_array.m"
  MR_Integer mercury__bt_array__N2_7)
#line 152 "bt_array.m"
{
#line 668 "bt_array.m"
  {
#line 668 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 668 "bt_array.m"
    MR_Word mercury__bt_array__Xs_8;

#line 668 "bt_array.m"
    {
#line 668 "bt_array.m"
      mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BTA_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__Xs_8);
    }
#line 668 "bt_array.m"
    return mercury__bt_array__Xs_8;
#line 668 "bt_array.m"
  }
#line 152 "bt_array.m"
}

#line 150 "bt_array.m"
void MR_CALL 
mercury__bt_array__fetch_items_4_p_0(
#line 150 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_18,
#line 150 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 150 "bt_array.m"
  MR_Integer mercury__bt_array__Low_8,
#line 150 "bt_array.m"
  MR_Integer mercury__bt_array__High_9,
#line 150 "bt_array.m"
  MR_Word * mercury__bt_array__List_10)
#line 150 "bt_array.m"
{
#line 356 "bt_array.m"
  {
#line 356 "bt_array.m"
    MR_bool mercury__bt_array__succeeded = (mercury__bt_array__Low_8 > mercury__bt_array__High_9);
#line 356 "bt_array.m"
    MR_Integer mercury__bt_array__ALow_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "bt_array.m"
    MR_Integer mercury__bt_array__AHigh_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 361 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 360 "bt_array.m"
      *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "bt_array.m"
    else
#line 368 "bt_array.m"
      {
#line 368 "bt_array.m"
        MR_Word mercury__bt_array__List0_14;
#line 362 "bt_array.m"
        MR_Integer mercury__bt_array__Drop_11;
#line 362 "bt_array.m"
        MR_Word mercury__bt_array__RaList_12;
#line 362 "bt_array.m"
        MR_Integer mercury__bt_array__Take_13;
#line 362 "bt_array.m"
        MR_Integer mercury__bt_array__V_15_15;
#line 362 "bt_array.m"
        MR_Integer mercury__bt_array__V_16_16;
#line 362 "bt_array.m"
        MR_Word mercury__bt_array__V_17_17;
#line 362 "bt_array.m"
        MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__AHigh_6 - mercury__bt_array__ALow_5);

#line 226 "bt_array.m"
        mercury__bt_array__Drop_11 = (mercury__bt_array__V_23_23 - mercury__bt_array__High_9);
#line 363 "bt_array.m"
        {
#line 363 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__Drop_11, mercury__bt_array__RaList0_7, &mercury__bt_array__RaList_12);
        }
#line 362 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 362 "bt_array.m"
          {
#line 364 "bt_array.m"
            mercury__bt_array__V_15_15 = (mercury__bt_array__High_9 - mercury__bt_array__Low_8);
#line 364 "bt_array.m"
            mercury__bt_array__V_16_16 = (MR_Integer) 1;
#line 364 "bt_array.m"
            mercury__bt_array__Take_13 = (mercury__bt_array__V_15_15 + mercury__bt_array__V_16_16);
#line 365 "bt_array.m"
            mercury__bt_array__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "bt_array.m"
            {
#line 365 "bt_array.m"
              mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_p_0(mercury__bt_array__Take_13, mercury__bt_array__RaList_12, mercury__bt_array__V_17_17, &mercury__bt_array__List0_14);
            }
#line 365 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 362 "bt_array.m"
          }
#line 368 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 367 "bt_array.m"
          *mercury__bt_array__List_10 = mercury__bt_array__List0_14;
#line 368 "bt_array.m"
        else
#line 369 "bt_array.m"
          *mercury__bt_array__List_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "bt_array.m"
      }
#line 356 "bt_array.m"
  }
#line 150 "bt_array.m"
}

#line 144 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__to_list_1_f_0(
#line 144 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
#line 144 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 144 "bt_array.m"
{
#line 342 "bt_array.m"
  {
#line 342 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 342 "bt_array.m"
    MR_Word mercury__bt_array__Xs_4;
#line 342 "bt_array.m"
    MR_Word mercury__bt_array__RaList_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));
#line 342 "bt_array.m"
    MR_Word mercury__bt_array__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 342 "bt_array.m"
    MR_Integer mercury__bt_array__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));

#line 343 "bt_array.m"
    {
#line 343 "bt_array.m"
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_5, mercury__bt_array__RaList_9, mercury__bt_array__V_10_10, &mercury__bt_array__Xs_4);
    }
#line 342 "bt_array.m"
    return mercury__bt_array__Xs_4;
#line 342 "bt_array.m"
  }
#line 144 "bt_array.m"
}

#line 143 "bt_array.m"
void MR_CALL 
mercury__bt_array__to_list_2_p_0(
#line 143 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_8,
#line 143 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 143 "bt_array.m"
  MR_Word * mercury__bt_array__List_6)
#line 143 "bt_array.m"
{
#line 342 "bt_array.m"
  {
#line 342 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 342 "bt_array.m"
    MR_Word mercury__bt_array__RaList_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 342 "bt_array.m"
    MR_Word mercury__bt_array__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "bt_array.m"
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 342 "bt_array.m"
    MR_Integer mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));

#line 343 "bt_array.m"
    {
#line 343 "bt_array.m"
      mercury__bt_array__reverse_from_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_8, mercury__bt_array__RaList_5, mercury__bt_array__V_7_7, mercury__bt_array__List_6);
#line 343 "bt_array.m"
      return;
    }
#line 342 "bt_array.m"
  }
#line 143 "bt_array.m"
}

#line 137 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__from_list_2_f_0(
#line 137 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 137 "bt_array.m"
  MR_Integer mercury__bt_array__N_4,
#line 137 "bt_array.m"
  MR_Word mercury__bt_array__Xs_5)
#line 137 "bt_array.m"
{
#line 662 "bt_array.m"
  {
#line 662 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 662 "bt_array.m"
    MR_Word mercury__bt_array__BTA_6;

#line 662 "bt_array.m"
    {
#line 662 "bt_array.m"
      mercury__bt_array__from_list_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__N_4, mercury__bt_array__Xs_5, &mercury__bt_array__BTA_6);
    }
#line 662 "bt_array.m"
    return mercury__bt_array__BTA_6;
#line 662 "bt_array.m"
  }
#line 137 "bt_array.m"
}

#line 136 "bt_array.m"
void MR_CALL 
mercury__bt_array__from_list_3_p_0(
#line 136 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 136 "bt_array.m"
  MR_Integer mercury__bt_array__Low_4,
#line 136 "bt_array.m"
  MR_Word mercury__bt_array__List_5,
#line 136 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__3_3)
#line 136 "bt_array.m"
{
#line 315 "bt_array.m"
  {
#line 315 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 315 "bt_array.m"
    MR_Integer mercury__bt_array__High_6;
#line 315 "bt_array.m"
    MR_Word mercury__bt_array__RaList_7;
#line 315 "bt_array.m"
    MR_Integer mercury__bt_array__Len_8;
#line 315 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_9;
#line 315 "bt_array.m"
    MR_Integer mercury__bt_array__V_10_10;

#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, (MR_Integer) 0, &mercury__bt_array__Len_8);
    }
#line 317 "bt_array.m"
    mercury__bt_array__V_10_10 = (mercury__bt_array__Low_4 + mercury__bt_array__Len_8);
#line 317 "bt_array.m"
    mercury__bt_array__High_6 = (mercury__bt_array__V_10_10 - (MR_Integer) 1);
#line 492 "bt_array.m"
    mercury__bt_array__RaList0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 319 "bt_array.m"
    {
#line 319 "bt_array.m"
      mercury__bt_array__reverse_into_ra_list_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__List_5, mercury__bt_array__RaList0_9, &mercury__bt_array__RaList_7);
    }
#line 315 "bt_array.m"
    {
#line 315 "bt_array.m"
      MR_Word base;
#line 315 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "bt_array.m"
      *mercury__bt_array__HeadVar__3_3 = base;
#line 315 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_4));
#line 315 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 315 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_7));
#line 315 "bt_array.m"
    }
#line 315 "bt_array.m"
  }
#line 136 "bt_array.m"
}

#line 130 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__shrink_3_f_0(
#line 130 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 130 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_5,
#line 130 "bt_array.m"
  MR_Integer mercury__bt_array__N1_6,
#line 130 "bt_array.m"
  MR_Integer mercury__bt_array__N2_7)
#line 130 "bt_array.m"
{
#line 659 "bt_array.m"
  {
#line 659 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 659 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_8;

#line 659 "bt_array.m"
    {
#line 659 "bt_array.m"
      mercury__bt_array__shrink_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N1_6, mercury__bt_array__N2_7, &mercury__bt_array__BTA2_8);
    }
#line 659 "bt_array.m"
    return mercury__bt_array__BTA2_8;
#line 659 "bt_array.m"
  }
#line 130 "bt_array.m"
}

#line 128 "bt_array.m"
void MR_CALL 
mercury__bt_array__shrink_4_p_0(
#line 128 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_24,
#line 128 "bt_array.m"
  MR_Word mercury__bt_array__Array0_5,
#line 128 "bt_array.m"
  MR_Integer mercury__bt_array__L_6,
#line 128 "bt_array.m"
  MR_Integer mercury__bt_array__H_7,
#line 128 "bt_array.m"
  MR_Word * mercury__bt_array__Array_8)
#line 128 "bt_array.m"
{
#line 286 "bt_array.m"
  {
#line 286 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 286 "bt_array.m"
    MR_Integer mercury__bt_array__L0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 0)));
#line 286 "bt_array.m"
    MR_Integer mercury__bt_array__H0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 1)));
#line 286 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_5, (MR_Integer) 2)));

#line 288 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__L_6 < mercury__bt_array__L0_9);
#line 288 "bt_array.m"
    if (!(mercury__bt_array__succeeded))
#line 288 "bt_array.m"
      mercury__bt_array__succeeded = (mercury__bt_array__H_7 > mercury__bt_array__H0_10);
#line 290 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 289 "bt_array.m"
      {
#line 289 "bt_array.m"
        {
#line 289 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.shrink: New bounds are larger than old ones");
#line 289 "bt_array.m"
          return;
        }
#line 289 "bt_array.m"
      }
#line 290 "bt_array.m"
    else
#line 300 "bt_array.m"
      {
#line 290 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__L_6 == mercury__bt_array__L0_9);
#line 300 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 293 "bt_array.m"
          {
#line 293 "bt_array.m"
            MR_Integer mercury__bt_array__SizeDiff_12 = (mercury__bt_array__H0_10 - mercury__bt_array__H_7);
#line 293 "bt_array.m"
            MR_Word mercury__bt_array__RaList_14;
#line 296 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_13;

#line 294 "bt_array.m"
            {
#line 294 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_12, mercury__bt_array__RaList0_11, &mercury__bt_array__RaList1_13);
            }
#line 296 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 295 "bt_array.m"
              mercury__bt_array__RaList_14 = mercury__bt_array__RaList1_13;
#line 296 "bt_array.m"
            else
#line 297 "bt_array.m"
              {
#line 297 "bt_array.m"
                {
#line 297 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.shrink: Can\'t resize to a less-than-empty array");
#line 297 "bt_array.m"
                  return;
                }
#line 297 "bt_array.m"
              }
#line 299 "bt_array.m"
            {
#line 299 "bt_array.m"
              MR_Word base;
#line 299 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "bt_array.m"
              *mercury__bt_array__Array_8 = base;
#line 299 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_6));
#line 299 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_7));
#line 299 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_14));
#line 299 "bt_array.m"
            }
#line 293 "bt_array.m"
          }
#line 300 "bt_array.m"
        else
#line 305 "bt_array.m"
          {
#line 305 "bt_array.m"
            MR_Box mercury__bt_array__Item_16;
#line 305 "bt_array.m"
            MR_Integer mercury__bt_array__L1_17;
#line 305 "bt_array.m"
            MR_Integer mercury__bt_array__H1_18;
#line 305 "bt_array.m"
            MR_Word mercury__bt_array__Items_19;
#line 305 "bt_array.m"
            MR_Word mercury__bt_array__Array1_20;
#line 305 "bt_array.m"
            MR_Word mercury__bt_array__ListOut_47;
#line 305 "bt_array.m"
            MR_Word mercury__bt_array__ListIn_48;
#line 305 "bt_array.m"
            MR_Integer mercury__bt_array__ElemsToAdd_49;
#line 305 "bt_array.m"
            MR_Integer mercury__bt_array__V_50_50;
#line 303 "bt_array.m"
            MR_Box mercury__bt_array__Item0_15;
#line 509 "bt_array.m"
            MR_Word mercury__bt_array__V_36_36;
#line 509 "bt_array.m"
            MR_Word mercury__bt_array__V_35_35;
#line 509 "bt_array.m"
            MR_Integer mercury__bt_array__V_37_37;

#line 509 "bt_array.m"
            mercury__bt_array__succeeded = ((MR_tag((MR_Word) mercury__bt_array__RaList0_11)) == (MR_mktag((MR_Integer) 1)));
#line 509 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 509 "bt_array.m"
              {
#line 509 "bt_array.m"
                mercury__bt_array__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 0)));
#line 509 "bt_array.m"
                mercury__bt_array__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 1)));
#line 509 "bt_array.m"
                mercury__bt_array__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__RaList0_11, (MR_Integer) 2)));
#line 509 "bt_array.m"
                if (((MR_tag((MR_Word) mercury__bt_array__V_36_36)) == (MR_mktag((MR_Integer) 0))))
#line 509 "bt_array.m"
                  mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(0), mercury__bt_array__V_36_36, (MR_Integer) 0));
#line 509 "bt_array.m"
                else
#line 510 "bt_array.m"
                  {
#line 510 "bt_array.m"
                    MR_Word mercury__bt_array__V_31_31;
#line 510 "bt_array.m"
                    MR_Word mercury__bt_array__V_32_32;

#line 510 "bt_array.m"
                    mercury__bt_array__Item0_15 = (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 0));
#line 510 "bt_array.m"
                    mercury__bt_array__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 1)));
#line 510 "bt_array.m"
                    mercury__bt_array__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bt_array__V_36_36, (MR_Integer) 2)));
#line 510 "bt_array.m"
                  }
#line 509 "bt_array.m"
                mercury__bt_array__succeeded = MR_TRUE;
#line 509 "bt_array.m"
              }
#line 303 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 302 "bt_array.m"
              mercury__bt_array__Item_16 = mercury__bt_array__Item0_15;
#line 303 "bt_array.m"
            else
#line 304 "bt_array.m"
              {
#line 304 "bt_array.m"
                {
#line 304 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.shrink: Can\'t shrink an empty array");
#line 304 "bt_array.m"
                  return;
                }
#line 304 "bt_array.m"
              }
#line 213 "int.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__L_6 > mercury__bt_array__L0_9);
#line 216 "int.opt"
            if (mercury__bt_array__succeeded)
#line 215 "int.opt"
              mercury__bt_array__L1_17 = mercury__bt_array__L_6;
#line 216 "int.opt"
            else
#line 217 "int.opt"
              mercury__bt_array__L1_17 = mercury__bt_array__L0_9;
#line 242 "int.opt"
            mercury__bt_array__succeeded = (mercury__bt_array__H_7 < mercury__bt_array__H0_10);
#line 245 "int.opt"
            if (mercury__bt_array__succeeded)
#line 244 "int.opt"
              mercury__bt_array__H1_18 = mercury__bt_array__H_7;
#line 245 "int.opt"
            else
#line 246 "int.opt"
              mercury__bt_array__H1_18 = mercury__bt_array__H0_10;
#line 308 "bt_array.m"
            {
#line 308 "bt_array.m"
              mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__Array0_5, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
            }
#line 492 "bt_array.m"
            mercury__bt_array__ListIn_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "bt_array.m"
            mercury__bt_array__V_50_50 = (mercury__bt_array__H_7 - mercury__bt_array__L_6);
#line 192 "bt_array.m"
            mercury__bt_array__ElemsToAdd_49 = (mercury__bt_array__V_50_50 + (MR_Integer) 1);
#line 193 "bt_array.m"
            {
#line 193 "bt_array.m"
              mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__ElemsToAdd_49, mercury__bt_array__Item_16, mercury__bt_array__ListIn_48, &mercury__bt_array__ListOut_47);
            }
#line 190 "bt_array.m"
            {
#line 190 "bt_array.m"
              mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_6));
#line 190 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_7));
#line 190 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_47));
#line 190 "bt_array.m"
            }
#line 310 "bt_array.m"
            {
#line 310 "bt_array.m"
              mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_24, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_8);
#line 310 "bt_array.m"
              return;
            }
#line 305 "bt_array.m"
          }
#line 300 "bt_array.m"
      }
#line 286 "bt_array.m"
  }
#line 128 "bt_array.m"
}

#line 115 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__resize_4_f_0(
#line 115 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 115 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_6,
#line 115 "bt_array.m"
  MR_Integer mercury__bt_array__N1_7,
#line 115 "bt_array.m"
  MR_Integer mercury__bt_array__N2_8,
#line 115 "bt_array.m"
  MR_Box mercury__bt_array__T_9)
#line 115 "bt_array.m"
{
#line 656 "bt_array.m"
  {
#line 656 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 656 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_10;

#line 656 "bt_array.m"
    {
#line 656 "bt_array.m"
      mercury__bt_array__resize_5_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__BT1A_6, mercury__bt_array__N1_7, mercury__bt_array__N2_8, mercury__bt_array__T_9, &mercury__bt_array__BTA2_10);
    }
#line 656 "bt_array.m"
    return mercury__bt_array__BTA2_10;
#line 656 "bt_array.m"
  }
#line 115 "bt_array.m"
}

#line 113 "bt_array.m"
void MR_CALL 
mercury__bt_array__resize_5_p_0(
#line 113 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_28,
#line 113 "bt_array.m"
  MR_Word mercury__bt_array__Array0_6,
#line 113 "bt_array.m"
  MR_Integer mercury__bt_array__L_7,
#line 113 "bt_array.m"
  MR_Integer mercury__bt_array__H_8,
#line 113 "bt_array.m"
  MR_Box mercury__bt_array__Item_9,
#line 113 "bt_array.m"
  MR_Word * mercury__bt_array__Array_10)
#line 113 "bt_array.m"
{
#line 256 "bt_array.m"
  {
#line 256 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 256 "bt_array.m"
    MR_Integer mercury__bt_array__L0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 0)));
#line 256 "bt_array.m"
    MR_Integer mercury__bt_array__H0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 1)));
#line 256 "bt_array.m"
    MR_Word mercury__bt_array__RaList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__Array0_6, (MR_Integer) 2)));

#line 258 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__L_7 == mercury__bt_array__L0_11);
#line 278 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 271 "bt_array.m"
      {
#line 262 "bt_array.m"
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
#line 271 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 263 "bt_array.m"
          {
#line 263 "bt_array.m"
            MR_Integer mercury__bt_array__SizeDiff_14 = (mercury__bt_array__H0_12 - mercury__bt_array__H_8);
#line 263 "bt_array.m"
            MR_Word mercury__bt_array__RaList_16;
#line 266 "bt_array.m"
            MR_Word mercury__bt_array__RaList1_15;

#line 264 "bt_array.m"
            {
#line 264 "bt_array.m"
              mercury__bt_array__succeeded = mercury__bt_array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(mercury__bt_array__SizeDiff_14, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList1_15);
            }
#line 266 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 265 "bt_array.m"
              mercury__bt_array__RaList_16 = mercury__bt_array__RaList1_15;
#line 266 "bt_array.m"
            else
#line 267 "bt_array.m"
              {
#line 267 "bt_array.m"
                {
#line 267 "bt_array.m"
                  mercury__require__error_1_p_0((MR_String) "bt_array.resize: Can\'t resize to a less-than-empty array");
#line 267 "bt_array.m"
                  return;
                }
#line 267 "bt_array.m"
              }
#line 270 "bt_array.m"
            {
#line 270 "bt_array.m"
              MR_Word base;
#line 270 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 270 "bt_array.m"
              *mercury__bt_array__Array_10 = base;
#line 270 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 270 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 270 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_16));
#line 270 "bt_array.m"
            }
#line 263 "bt_array.m"
          }
#line 271 "bt_array.m"
        else
#line 275 "bt_array.m"
          {
#line 271 "bt_array.m"
            mercury__bt_array__succeeded = (mercury__bt_array__H_8 > mercury__bt_array__H0_12);
#line 275 "bt_array.m"
            if (mercury__bt_array__succeeded)
#line 272 "bt_array.m"
              {
#line 272 "bt_array.m"
                MR_Integer mercury__bt_array__SizeDiff_24 = (mercury__bt_array__H_8 - mercury__bt_array__H0_12);
#line 272 "bt_array.m"
                MR_Word mercury__bt_array__RaList_25;

#line 273 "bt_array.m"
                {
#line 273 "bt_array.m"
                  mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__SizeDiff_24, mercury__bt_array__Item_9, mercury__bt_array__RaList0_13, &mercury__bt_array__RaList_25);
                }
#line 274 "bt_array.m"
                {
#line 274 "bt_array.m"
                  MR_Word base;
#line 274 "bt_array.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "bt_array.m"
                  *mercury__bt_array__Array_10 = base;
#line 274 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 274 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 274 "bt_array.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaList_25));
#line 274 "bt_array.m"
                }
#line 272 "bt_array.m"
              }
#line 275 "bt_array.m"
            else
#line 276 "bt_array.m"
              *mercury__bt_array__Array_10 = mercury__bt_array__Array0_6;
#line 275 "bt_array.m"
          }
#line 271 "bt_array.m"
      }
#line 278 "bt_array.m"
    else
#line 279 "bt_array.m"
      {
#line 279 "bt_array.m"
        MR_Integer mercury__bt_array__L1_17;
#line 279 "bt_array.m"
        MR_Integer mercury__bt_array__H1_18;
#line 279 "bt_array.m"
        MR_Word mercury__bt_array__Items_19;
#line 279 "bt_array.m"
        MR_Word mercury__bt_array__Array1_20;
#line 279 "bt_array.m"
        MR_Word mercury__bt_array__ListOut_38;
#line 279 "bt_array.m"
        MR_Word mercury__bt_array__ListIn_39;
#line 279 "bt_array.m"
        MR_Integer mercury__bt_array__ElemsToAdd_40;
#line 279 "bt_array.m"
        MR_Integer mercury__bt_array__V_41_41;

#line 213 "int.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__L_7 > mercury__bt_array__L0_11);
#line 216 "int.opt"
        if (mercury__bt_array__succeeded)
#line 215 "int.opt"
          mercury__bt_array__L1_17 = mercury__bt_array__L_7;
#line 216 "int.opt"
        else
#line 217 "int.opt"
          mercury__bt_array__L1_17 = mercury__bt_array__L0_11;
#line 242 "int.opt"
        mercury__bt_array__succeeded = (mercury__bt_array__H_8 < mercury__bt_array__H0_12);
#line 245 "int.opt"
        if (mercury__bt_array__succeeded)
#line 244 "int.opt"
          mercury__bt_array__H1_18 = mercury__bt_array__H_8;
#line 245 "int.opt"
        else
#line 246 "int.opt"
          mercury__bt_array__H1_18 = mercury__bt_array__H0_12;
#line 281 "bt_array.m"
        {
#line 281 "bt_array.m"
          mercury__bt_array__fetch_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array0_6, mercury__bt_array__L1_17, mercury__bt_array__H1_18, &mercury__bt_array__Items_19);
        }
#line 492 "bt_array.m"
        mercury__bt_array__ListIn_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "bt_array.m"
        mercury__bt_array__V_41_41 = (mercury__bt_array__H_8 - mercury__bt_array__L_7);
#line 192 "bt_array.m"
        mercury__bt_array__ElemsToAdd_40 = (mercury__bt_array__V_41_41 + (MR_Integer) 1);
#line 193 "bt_array.m"
        {
#line 193 "bt_array.m"
          mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__ElemsToAdd_40, mercury__bt_array__Item_9, mercury__bt_array__ListIn_39, &mercury__bt_array__ListOut_38);
        }
#line 190 "bt_array.m"
        {
#line 190 "bt_array.m"
          mercury__bt_array__Array1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 0) = ((MR_Box) (mercury__bt_array__L_7));
#line 190 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 1) = ((MR_Box) (mercury__bt_array__H_8));
#line 190 "bt_array.m"
          MR_hl_field(MR_mktag(0), mercury__bt_array__Array1_20, 2) = ((MR_Box) (mercury__bt_array__ListOut_38));
#line 190 "bt_array.m"
        }
#line 283 "bt_array.m"
        {
#line 283 "bt_array.m"
          mercury__bt_array__insert_items_4_p_0(mercury__bt_array__TypeInfo_for_T_28, mercury__bt_array__Array1_20, mercury__bt_array__L1_17, mercury__bt_array__Items_19, mercury__bt_array__Array_10);
#line 283 "bt_array.m"
          return;
        }
#line 279 "bt_array.m"
      }
#line 256 "bt_array.m"
  }
#line 113 "bt_array.m"
}

#line 99 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__semidet_set_4_p_0(
#line 99 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 99 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 99 "bt_array.m"
  MR_Integer mercury__bt_array__Index_8,
#line 99 "bt_array.m"
  MR_Box mercury__bt_array__Item_9,
#line 99 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__4_4)
#line 99 "bt_array.m"
{
#line 250 "bt_array.m"
  {
#line 250 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__Low_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__High_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "bt_array.m"
    MR_Word mercury__bt_array__RaListIn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 250 "bt_array.m"
    MR_Word mercury__bt_array__RaListOut_10;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_11;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 226 "bt_array.m"
    mercury__bt_array__Pos_11 = (mercury__bt_array__V_17_17 - mercury__bt_array__Index_8);
#line 567 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_11 >= (MR_Integer) 0);
#line 250 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 250 "bt_array.m"
      {
#line 568 "bt_array.m"
        {
#line 568 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__RaListIn_7, mercury__bt_array__Pos_11, mercury__bt_array__Item_9, &mercury__bt_array__RaListOut_10);
        }
#line 250 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 250 "bt_array.m"
          {
#line 250 "bt_array.m"
            {
#line 250 "bt_array.m"
              MR_Word base;
#line 250 "bt_array.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 250 "bt_array.m"
              *mercury__bt_array__HeadVar__4_4 = base;
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__RaListOut_10));
#line 250 "bt_array.m"
            }
#line 250 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 250 "bt_array.m"
          }
#line 250 "bt_array.m"
      }
#line 250 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 250 "bt_array.m"
  }
#line 99 "bt_array.m"
}

#line 93 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__set_3_f_0(
#line 93 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 93 "bt_array.m"
  MR_Word mercury__bt_array__BT1A_5,
#line 93 "bt_array.m"
  MR_Integer mercury__bt_array__N_6,
#line 93 "bt_array.m"
  MR_Box mercury__bt_array__T_7)
#line 93 "bt_array.m"
{
#line 653 "bt_array.m"
  {
#line 653 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 653 "bt_array.m"
    MR_Word mercury__bt_array__BTA2_8;

#line 653 "bt_array.m"
    {
#line 653 "bt_array.m"
      mercury__bt_array__set_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__BT1A_5, mercury__bt_array__N_6, mercury__bt_array__T_7, &mercury__bt_array__BTA2_8);
    }
#line 653 "bt_array.m"
    return mercury__bt_array__BTA2_8;
#line 653 "bt_array.m"
  }
#line 93 "bt_array.m"
}

#line 92 "bt_array.m"
void MR_CALL 
mercury__bt_array__set_4_p_0(
#line 92 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_11,
#line 92 "bt_array.m"
  MR_Word mercury__bt_array__BtArray0_5,
#line 92 "bt_array.m"
  MR_Integer mercury__bt_array__Index_6,
#line 92 "bt_array.m"
  MR_Box mercury__bt_array__Item_7,
#line 92 "bt_array.m"
  MR_Word * mercury__bt_array__BtArray_8)
#line 92 "bt_array.m"
{
#line 245 "bt_array.m"
  {
#line 245 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 245 "bt_array.m"
    MR_Word mercury__bt_array__BtArray1_9;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__Low_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 0)));
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__High_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 1)));
#line 250 "bt_array.m"
    MR_Word mercury__bt_array__RaListIn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray0_5, (MR_Integer) 2)));
#line 250 "bt_array.m"
    MR_Word mercury__bt_array__RaListOut_17;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_18;
#line 250 "bt_array.m"
    MR_Integer mercury__bt_array__V_23_23 = (mercury__bt_array__High_15 - mercury__bt_array__Low_14);

#line 226 "bt_array.m"
    mercury__bt_array__Pos_18 = (mercury__bt_array__V_23_23 - mercury__bt_array__Index_6);
#line 567 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_18 >= (MR_Integer) 0);
#line 250 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 250 "bt_array.m"
      {
#line 568 "bt_array.m"
        {
#line 568 "bt_array.m"
          mercury__bt_array__succeeded = mercury__bt_array__ra_list_update_2_4_p_0(mercury__bt_array__TypeInfo_for_T_11, mercury__bt_array__RaListIn_16, mercury__bt_array__Pos_18, mercury__bt_array__Item_7, &mercury__bt_array__RaListOut_17);
        }
#line 250 "bt_array.m"
        if (mercury__bt_array__succeeded)
#line 250 "bt_array.m"
          {
#line 250 "bt_array.m"
            {
#line 250 "bt_array.m"
              mercury__bt_array__BtArray1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 0) = ((MR_Box) (mercury__bt_array__Low_14));
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 1) = ((MR_Box) (mercury__bt_array__High_15));
#line 250 "bt_array.m"
              MR_hl_field(MR_mktag(0), mercury__bt_array__BtArray1_9, 2) = ((MR_Box) (mercury__bt_array__RaListOut_17));
#line 250 "bt_array.m"
            }
#line 250 "bt_array.m"
            mercury__bt_array__succeeded = MR_TRUE;
#line 250 "bt_array.m"
          }
#line 250 "bt_array.m"
      }
#line 245 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 244 "bt_array.m"
      *mercury__bt_array__BtArray_8 = mercury__bt_array__BtArray1_9;
#line 245 "bt_array.m"
    else
#line 246 "bt_array.m"
      {
#line 246 "bt_array.m"
        {
#line 246 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.set: index out of bounds");
#line 246 "bt_array.m"
          return;
        }
#line 246 "bt_array.m"
      }
#line 245 "bt_array.m"
  }
#line 92 "bt_array.m"
}

#line 87 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__semidet_lookup_3_p_0(
#line 87 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_10,
#line 87 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 87 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 87 "bt_array.m"
  MR_Box * mercury__bt_array__Item_8)
#line 87 "bt_array.m"
{
#line 236 "bt_array.m"
  {
#line 236 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 236 "bt_array.m"
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "bt_array.m"
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "bt_array.m"
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 236 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_9;
#line 236 "bt_array.m"
    MR_Integer mercury__bt_array__V_15_15 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);

#line 226 "bt_array.m"
    mercury__bt_array__Pos_9 = (mercury__bt_array__V_15_15 - mercury__bt_array__Index_7);
#line 531 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
#line 236 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 532 "bt_array.m"
      {
#line 532 "bt_array.m"
        return mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_10, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, mercury__bt_array__Item_8);
      }
#line 236 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 236 "bt_array.m"
  }
#line 87 "bt_array.m"
}

#line 82 "bt_array.m"
MR_Box MR_CALL 
mercury__bt_array__lookup_2_f_0(
#line 82 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 82 "bt_array.m"
  MR_Word mercury__bt_array__BTA_4,
#line 82 "bt_array.m"
  MR_Integer mercury__bt_array__N_5)
#line 82 "bt_array.m"
{
#line 650 "bt_array.m"
  {
#line 650 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 650 "bt_array.m"
    MR_Box mercury__bt_array__T_6;

#line 650 "bt_array.m"
    {
#line 650 "bt_array.m"
      mercury__bt_array__lookup_3_p_0(mercury__bt_array__TypeInfo_for_T_7, mercury__bt_array__BTA_4, mercury__bt_array__N_5, &mercury__bt_array__T_6);
    }
#line 650 "bt_array.m"
    return mercury__bt_array__T_6;
#line 650 "bt_array.m"
  }
#line 82 "bt_array.m"
}

#line 81 "bt_array.m"
void MR_CALL 
mercury__bt_array__lookup_3_p_0(
#line 81 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_12,
#line 81 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 81 "bt_array.m"
  MR_Integer mercury__bt_array__Index_7,
#line 81 "bt_array.m"
  MR_Box * mercury__bt_array__Item_8)
#line 81 "bt_array.m"
{
#line 228 "bt_array.m"
  {
#line 228 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 228 "bt_array.m"
    MR_Integer mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "bt_array.m"
    MR_Integer mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "bt_array.m"
    MR_Word mercury__bt_array__RaList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 228 "bt_array.m"
    MR_Integer mercury__bt_array__Pos_9;
#line 228 "bt_array.m"
    MR_Integer mercury__bt_array__V_17_17 = (mercury__bt_array__High_5 - mercury__bt_array__Low_4);
#line 232 "bt_array.m"
    MR_Box mercury__bt_array__Item0_10;

#line 226 "bt_array.m"
    mercury__bt_array__Pos_9 = (mercury__bt_array__V_17_17 - mercury__bt_array__Index_7);
#line 531 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Pos_9 >= (MR_Integer) 0);
#line 530 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 532 "bt_array.m"
      {
#line 532 "bt_array.m"
        mercury__bt_array__succeeded = mercury__bt_array__ra_list_lookup_2_3_p_0(mercury__bt_array__TypeInfo_for_T_12, mercury__bt_array__Pos_9, mercury__bt_array__RaList_6, &mercury__bt_array__Item0_10);
      }
#line 232 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 231 "bt_array.m"
      *mercury__bt_array__Item_8 = mercury__bt_array__Item0_10;
#line 232 "bt_array.m"
    else
#line 233 "bt_array.m"
      {
#line 233 "bt_array.m"
        {
#line 233 "bt_array.m"
          mercury__require__error_1_p_0((MR_String) "bt_array.lookup: Array subscript out of bounds");
#line 233 "bt_array.m"
          return;
        }
#line 233 "bt_array.m"
      }
#line 228 "bt_array.m"
  }
#line 81 "bt_array.m"
}

#line 74 "bt_array.m"
MR_bool MR_CALL 
mercury__bt_array__in_bounds_2_p_0(
#line 74 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
#line 74 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 74 "bt_array.m"
  MR_Integer mercury__bt_array__Index_6)
#line 74 "bt_array.m"
{
#line 217 "bt_array.m"
  {
#line 217 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 217 "bt_array.m"
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 218 "bt_array.m"
    mercury__bt_array__succeeded = (mercury__bt_array__Low_3 <= mercury__bt_array__Index_6);
#line 217 "bt_array.m"
    if (mercury__bt_array__succeeded)
#line 218 "bt_array.m"
      mercury__bt_array__succeeded = (mercury__bt_array__Index_6 <= mercury__bt_array__High_4);
#line 217 "bt_array.m"
    return mercury__bt_array__succeeded;
#line 217 "bt_array.m"
  }
#line 74 "bt_array.m"
}

#line 69 "bt_array.m"
void MR_CALL 
mercury__bt_array__bounds_3_p_0(
#line 69 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_7,
#line 69 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 69 "bt_array.m"
  MR_Integer * mercury__bt_array__Low_4,
#line 69 "bt_array.m"
  MR_Integer * mercury__bt_array__High_5)
#line 69 "bt_array.m"
{
#line 215 "bt_array.m"
  {
#line 215 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 215 "bt_array.m"
    MR_Word mercury__bt_array__V_6_6;

#line 215 "bt_array.m"
    *mercury__bt_array__Low_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "bt_array.m"
    *mercury__bt_array__High_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "bt_array.m"
    mercury__bt_array__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 215 "bt_array.m"
  }
#line 69 "bt_array.m"
}

#line 65 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__size_1_f_0(
#line 65 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 65 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 65 "bt_array.m"
{
#line 212 "bt_array.m"
  {
#line 212 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__N_4;
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__Low_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__High_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__V_10_10 = (mercury__bt_array__High_8 - mercury__bt_array__Low_7);
#line 212 "bt_array.m"
    MR_Word mercury__bt_array__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 213 "bt_array.m"
    mercury__bt_array__N_4 = (mercury__bt_array__V_10_10 + (MR_Integer) 1);
#line 212 "bt_array.m"
    return mercury__bt_array__N_4;
#line 212 "bt_array.m"
  }
#line 65 "bt_array.m"
}

#line 64 "bt_array.m"
void MR_CALL 
mercury__bt_array__size_2_p_0(
#line 64 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_9,
#line 64 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 64 "bt_array.m"
  MR_Integer * mercury__bt_array__Size_6)
#line 64 "bt_array.m"
{
#line 212 "bt_array.m"
  {
#line 212 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = (mercury__bt_array__High_4 - mercury__bt_array__Low_3);
#line 212 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));

#line 213 "bt_array.m"
    *mercury__bt_array__Size_6 = (mercury__bt_array__V_7_7 + (MR_Integer) 1);
#line 212 "bt_array.m"
  }
#line 64 "bt_array.m"
}

#line 59 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__max_1_f_0(
#line 59 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 59 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 59 "bt_array.m"
{
#line 210 "bt_array.m"
  {
#line 210 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 210 "bt_array.m"
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 210 "bt_array.m"
    return mercury__bt_array__N_4;
#line 210 "bt_array.m"
  }
#line 59 "bt_array.m"
}

#line 58 "bt_array.m"
void MR_CALL 
mercury__bt_array__max_2_p_0(
#line 58 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
#line 58 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 58 "bt_array.m"
  MR_Integer * mercury__bt_array__High_4)
#line 58 "bt_array.m"
{
#line 210 "bt_array.m"
  {
#line 210 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 210 "bt_array.m"
    MR_Integer mercury__bt_array__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5;

#line 210 "bt_array.m"
    *mercury__bt_array__High_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "bt_array.m"
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 210 "bt_array.m"
  }
#line 58 "bt_array.m"
}

#line 54 "bt_array.m"
MR_Integer MR_CALL 
mercury__bt_array__min_1_f_0(
#line 54 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_5,
#line 54 "bt_array.m"
  MR_Word mercury__bt_array__BTA_3)
#line 54 "bt_array.m"
{
#line 208 "bt_array.m"
  {
#line 208 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 208 "bt_array.m"
    MR_Integer mercury__bt_array__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 0)));
#line 208 "bt_array.m"
    MR_Integer mercury__bt_array__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 1)));
#line 208 "bt_array.m"
    MR_Word mercury__bt_array__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_3, (MR_Integer) 2)));

#line 208 "bt_array.m"
    return mercury__bt_array__N_4;
#line 208 "bt_array.m"
  }
#line 54 "bt_array.m"
}

#line 53 "bt_array.m"
void MR_CALL 
mercury__bt_array__min_2_p_0(
#line 53 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for__T_6,
#line 53 "bt_array.m"
  MR_Word mercury__bt_array__HeadVar__1_1,
#line 53 "bt_array.m"
  MR_Integer * mercury__bt_array__Low_3)
#line 53 "bt_array.m"
{
#line 208 "bt_array.m"
  {
#line 208 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 208 "bt_array.m"
    MR_Integer mercury__bt_array__V_4_4;
#line 208 "bt_array.m"
    MR_Word mercury__bt_array__V_5_5;

#line 208 "bt_array.m"
    *mercury__bt_array__Low_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "bt_array.m"
    mercury__bt_array__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "bt_array.m"
    mercury__bt_array__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bt_array__HeadVar__1_1, (MR_Integer) 2)));
#line 208 "bt_array.m"
  }
#line 53 "bt_array.m"
}

#line 47 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__init_3_f_0(
#line 47 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_9,
#line 47 "bt_array.m"
  MR_Integer mercury__bt_array__N1_5,
#line 47 "bt_array.m"
  MR_Integer mercury__bt_array__N2_6,
#line 47 "bt_array.m"
  MR_Box mercury__bt_array__T_7)
#line 47 "bt_array.m"
{
#line 190 "bt_array.m"
  {
#line 190 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 190 "bt_array.m"
    MR_Word mercury__bt_array__BTA_8;
#line 190 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_13;
#line 190 "bt_array.m"
    MR_Word mercury__bt_array__ListIn_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "bt_array.m"
    MR_Integer mercury__bt_array__ElemsToAdd_15;
#line 190 "bt_array.m"
    MR_Integer mercury__bt_array__V_16_16 = (mercury__bt_array__N2_6 - mercury__bt_array__N1_5);

#line 192 "bt_array.m"
    mercury__bt_array__ElemsToAdd_15 = (mercury__bt_array__V_16_16 + (MR_Integer) 1);
#line 193 "bt_array.m"
    {
#line 193 "bt_array.m"
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_9, mercury__bt_array__ElemsToAdd_15, mercury__bt_array__T_7, mercury__bt_array__ListIn_14, &mercury__bt_array__ListOut_13);
    }
#line 190 "bt_array.m"
    {
#line 190 "bt_array.m"
      mercury__bt_array__BTA_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 0) = ((MR_Box) (mercury__bt_array__N1_5));
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 1) = ((MR_Box) (mercury__bt_array__N2_6));
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_8, 2) = ((MR_Box) (mercury__bt_array__ListOut_13));
#line 190 "bt_array.m"
    }
#line 190 "bt_array.m"
    return mercury__bt_array__BTA_8;
#line 190 "bt_array.m"
  }
#line 47 "bt_array.m"
}

#line 46 "bt_array.m"
void MR_CALL 
mercury__bt_array__init_4_p_0(
#line 46 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_13,
#line 46 "bt_array.m"
  MR_Integer mercury__bt_array__Low_5,
#line 46 "bt_array.m"
  MR_Integer mercury__bt_array__High_6,
#line 46 "bt_array.m"
  MR_Box mercury__bt_array__Item_7,
#line 46 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__4_4)
#line 46 "bt_array.m"
{
#line 190 "bt_array.m"
  {
#line 190 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 190 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_8;
#line 190 "bt_array.m"
    MR_Word mercury__bt_array__ListIn_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "bt_array.m"
    MR_Integer mercury__bt_array__ElemsToAdd_10;
#line 190 "bt_array.m"
    MR_Integer mercury__bt_array__V_11_11 = (mercury__bt_array__High_6 - mercury__bt_array__Low_5);

#line 192 "bt_array.m"
    mercury__bt_array__ElemsToAdd_10 = (mercury__bt_array__V_11_11 + (MR_Integer) 1);
#line 193 "bt_array.m"
    {
#line 193 "bt_array.m"
      mercury__bt_array__add_elements_4_p_0(mercury__bt_array__TypeInfo_for_T_13, mercury__bt_array__ElemsToAdd_10, mercury__bt_array__Item_7, mercury__bt_array__ListIn_9, &mercury__bt_array__ListOut_8);
    }
#line 190 "bt_array.m"
    {
#line 190 "bt_array.m"
      MR_Word base;
#line 190 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "bt_array.m"
      *mercury__bt_array__HeadVar__4_4 = base;
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_5));
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_6));
#line 190 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
#line 190 "bt_array.m"
    }
#line 190 "bt_array.m"
  }
#line 46 "bt_array.m"
}

#line 41 "bt_array.m"
MR_Word MR_CALL 
mercury__bt_array__make_empty_array_1_f_0(
#line 41 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_5,
#line 41 "bt_array.m"
  MR_Integer mercury__bt_array__N_3)
#line 41 "bt_array.m"
{
#line 186 "bt_array.m"
  {
#line 186 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 186 "bt_array.m"
    MR_Word mercury__bt_array__BTA_4;
#line 186 "bt_array.m"
    MR_Integer mercury__bt_array__High_7 = (mercury__bt_array__N_3 - (MR_Integer) 1);
#line 186 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 186 "bt_array.m"
    {
#line 186 "bt_array.m"
      mercury__bt_array__BTA_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 0) = ((MR_Box) (mercury__bt_array__N_3));
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 1) = ((MR_Box) (mercury__bt_array__High_7));
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), mercury__bt_array__BTA_4, 2) = ((MR_Box) (mercury__bt_array__ListOut_8));
#line 186 "bt_array.m"
    }
#line 186 "bt_array.m"
    return mercury__bt_array__BTA_4;
#line 186 "bt_array.m"
  }
#line 41 "bt_array.m"
}

#line 40 "bt_array.m"
void MR_CALL 
mercury__bt_array__make_empty_array_2_p_0(
#line 40 "bt_array.m"
  MR_Word mercury__bt_array__TypeInfo_for_T_7,
#line 40 "bt_array.m"
  MR_Integer mercury__bt_array__Low_3,
#line 40 "bt_array.m"
  MR_Word * mercury__bt_array__HeadVar__2_2)
#line 40 "bt_array.m"
{
#line 186 "bt_array.m"
  {
#line 186 "bt_array.m"
    MR_bool mercury__bt_array__succeeded;
#line 186 "bt_array.m"
    MR_Integer mercury__bt_array__High_4 = (mercury__bt_array__Low_3 - (MR_Integer) 1);
#line 186 "bt_array.m"
    MR_Word mercury__bt_array__ListOut_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 186 "bt_array.m"
    {
#line 186 "bt_array.m"
      MR_Word base;
#line 186 "bt_array.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 186 "bt_array.m"
      *mercury__bt_array__HeadVar__2_2 = base;
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bt_array__Low_3));
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bt_array__High_4));
#line 186 "bt_array.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__bt_array__ListOut_5));
#line 186 "bt_array.m"
    }
#line 186 "bt_array.m"
  }
#line 40 "bt_array.m"
}

void mercury__bt_array__init(void)
{
}

void mercury__bt_array__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_bt_array_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_1);
	MR_register_type_ctor_info(&mercury__bt_array__bt_array__type_ctor_info_ra_list_bintree_1);
}

void mercury__bt_array__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bt_array. */
