/*
** Automatically generated from `array2d.m'
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


/* :- module array2d. */
/* :- implementation. */

/*
INIT mercury__array2d__init
ENDINIT
*/

#include "array2d.mih"


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
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 54 "array2d.m"
struct mercury__array2d__array2d_2_f_0_env_0_s {
#line 54 "array2d.m"
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16;
#line 54 "array2d.m"
  MR_Word mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1;
#line 155 "array2d.m"
  MR_bool mercury__array2d__array2d_2_f_0_env_0__succeeded;
#line 156 "array2d.m"
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41;
#line 156 "array2d.m"
  MR_Integer mercury__array2d__array2d_2_f_0_env_0__N_11;
#line 160 "array2d.m"
  jmp_buf mercury__array2d__array2d_2_f_0_env_0__commit_0;
#line 160 "array2d.m"
  MR_Word mercury__array2d__array2d_2_f_0_env_0__Ys_13;
#line 160 "array2d.m"
  MR_Box mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13;
#line 54 "array2d.m"
};


#line 112 "array2d.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1;

#line 115 "array2d.c"
static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3];

#line 118 "array2d.c"
static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0;

#line 121 "array2d.c"
static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1];

#line 124 "array2d.c"
static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1];

#line 127 "array2d.c"
static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1];

#line 130 "array2d.c"
static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1];

#line 133 "array2d.c"
static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
#line 136 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_1,
#line 138 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_2,
#line 140 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_3);

#line 143 "array2d.c"
static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
#line 146 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_1,
#line 148 "array2d.c"
  MR_Box * mercury__array2d__wrapper_arg_2,
#line 150 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_3,
#line 152 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 213 "array2d.m"
static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
#line 213 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_26,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__IJ_8,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__J_9,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__N_10,
#line 213 "array2d.m"
  MR_ArrayPtr mercury__array2d__A_11,
#line 213 "array2d.m"
  MR_Word mercury__array2d__Xs_12,
#line 213 "array2d.m"
  MR_Word mercury__array2d__Xss_13);

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg);

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg);

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg);

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg);


static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "type_desc.mh"
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



#line 563 "array2d.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 571 "array2d.c"
static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__array2d__array__pti_array_1__pseudo_1
};

#line 578 "array2d.c"
static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0 = {
  (MR_String) "array2d",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__array2d__array2d__field_types_array2d_1_0,
  NULL,
  NULL,
  NULL
};

#line 593 "array2d.c"
static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

#line 598 "array2d.c"
static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__array2d__array2d__du_stag_ordered_array2d_1_0
  }
};

#line 607 "array2d.c"
static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

#line 612 "array2d.c"
static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1] = {
  (MR_Integer) 0
};

#line 617 "array2d.c"
const MR_TypeCtorInfo_Struct mercury__array2d__array2d__type_ctor_info_array2d_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__array2d____Unify____array2d_1_0_10001)),
  ((MR_Box) (mercury__array2d____Compare____array2d_1_0_10001)),
  (MR_String) "array2d",
  (MR_String) "array2d",
  {
    mercury__array2d__array2d__du_name_ordered_array2d_1
  },
  {
    mercury__array2d__array2d__du_ptag_ordered_array2d_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__array2d__array2d__functor_number_map_array2d_1
};

#line 638 "array2d.c"
static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
#line 641 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_1,
#line 643 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_2,
#line 645 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_3)
#line 647 "array2d.c"
{
#line 649 "array2d.c"
  {
#line 651 "array2d.c"
    MR_bool mercury__array2d__succeeded;

#line 654 "array2d.c"
    {
#line 656 "array2d.c"
      mercury__array2d__succeeded = mercury__array2d____Unify____array2d_1_0(((MR_Word) mercury__array2d__wrapper_arg_1), ((MR_Word) mercury__array2d__wrapper_arg_2), ((MR_Word) mercury__array2d__wrapper_arg_3));
    }
#line 659 "array2d.c"
    return mercury__array2d__succeeded;
#line 661 "array2d.c"
  }
#line 663 "array2d.c"
}

#line 666 "array2d.c"
static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
#line 669 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_1,
#line 671 "array2d.c"
  MR_Box * mercury__array2d__wrapper_arg_2,
#line 673 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_3,
#line 675 "array2d.c"
  MR_Box mercury__array2d__wrapper_arg_4)
#line 677 "array2d.c"
{
#line 679 "array2d.c"
  {
#line 681 "array2d.c"
    MR_Word mercury__array2d__conv0_HeadVar__1_1;

#line 684 "array2d.c"
    {
#line 686 "array2d.c"
      mercury__array2d____Compare____array2d_1_0(((MR_Word) mercury__array2d__wrapper_arg_1), &mercury__array2d__conv0_HeadVar__1_1, ((MR_Word) mercury__array2d__wrapper_arg_3), ((MR_Word) mercury__array2d__wrapper_arg_4));
    }
#line 689 "array2d.c"
    *mercury__array2d__wrapper_arg_2 = ((MR_Box) (mercury__array2d__conv0_HeadVar__1_1));
#line 691 "array2d.c"
  }
#line 693 "array2d.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__array2d__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 135 "array2d.m"
void MR_CALL 
mercury__array2d____Compare____array2d_1_0(
#line 135 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_14,
#line 135 "array2d.m"
  MR_Word * mercury__array2d__HeadVar__1_1,
#line 135 "array2d.m"
  MR_Word mercury__array2d__HeadVar__2_2,
#line 135 "array2d.m"
  MR_Word mercury__array2d__HeadVar__3_3)
#line 135 "array2d.m"
{
#line 135 "array2d.m"
  {
#line 135 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 135 "array2d.m"
    MR_Integer mercury__array2d__CastX_12 = (MR_Integer) mercury__array2d__HeadVar__2_2;
#line 135 "array2d.m"
    MR_Integer mercury__array2d__CastY_13 = (MR_Integer) mercury__array2d__HeadVar__3_3;

#line 135 "array2d.m"
    mercury__array2d__succeeded = (mercury__array2d__CastX_12 == mercury__array2d__CastY_13);
#line 135 "array2d.m"
    if (mercury__array2d__succeeded)
#line 739 "array2d.c"
      *mercury__array2d__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "array2d.m"
    else
#line 135 "array2d.m"
      {
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 2)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
#line 135 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
#line 135 "array2d.m"
        MR_Word mercury__array2d__V_10_10;

#line 66 "private_builtin.opt"
        mercury__array2d__succeeded = (mercury__array2d__V_4_4 < mercury__array2d__V_7_7);
#line 69 "private_builtin.opt"
        if (mercury__array2d__succeeded)
#line 68 "private_builtin.opt"
          mercury__array2d__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__array2d__succeeded = (mercury__array2d__V_4_4 == mercury__array2d__V_7_7);
#line 74 "private_builtin.opt"
            if (mercury__array2d__succeeded)
#line 73 "private_builtin.opt"
              mercury__array2d__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__array2d__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 782 "array2d.c"
        mercury__array2d__succeeded = (mercury__array2d__V_10_10 == (MR_Integer) 0);
#line 135 "array2d.m"
        mercury__array2d__succeeded = !(mercury__array2d__succeeded);
#line 135 "array2d.m"
        if (mercury__array2d__succeeded)
#line 135 "array2d.m"
          *mercury__array2d__HeadVar__1_1 = mercury__array2d__V_10_10;
#line 135 "array2d.m"
        else
#line 135 "array2d.m"
          {
#line 135 "array2d.m"
            MR_Word mercury__array2d__V_11_11;

#line 66 "private_builtin.opt"
            mercury__array2d__succeeded = (mercury__array2d__V_5_5 < mercury__array2d__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__array2d__succeeded)
#line 68 "private_builtin.opt"
              mercury__array2d__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__array2d__succeeded = (mercury__array2d__V_5_5 == mercury__array2d__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__array2d__succeeded)
#line 73 "private_builtin.opt"
                  mercury__array2d__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__array2d__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 819 "array2d.c"
            mercury__array2d__succeeded = (mercury__array2d__V_11_11 == (MR_Integer) 0);
#line 135 "array2d.m"
            mercury__array2d__succeeded = !(mercury__array2d__succeeded);
#line 135 "array2d.m"
            if (mercury__array2d__succeeded)
#line 135 "array2d.m"
              *mercury__array2d__HeadVar__1_1 = mercury__array2d__V_11_11;
#line 135 "array2d.m"
            else
#line 135 "array2d.m"
              {
#line 135 "array2d.m"
                mercury__array____Compare____array_1_0(mercury__array2d__TypeInfo_for_T_14, mercury__array2d__HeadVar__1_1, mercury__array2d__V_6_6, mercury__array2d__V_9_9);
#line 135 "array2d.m"
                return;
              }
#line 135 "array2d.m"
          }
#line 135 "array2d.m"
      }
#line 135 "array2d.m"
  }
#line 135 "array2d.m"
}

#line 135 "array2d.m"
MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0(
#line 135 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_11,
#line 135 "array2d.m"
  MR_Word mercury__array2d__HeadVar__1_1,
#line 135 "array2d.m"
  MR_Word mercury__array2d__HeadVar__2_2)
#line 135 "array2d.m"
{
#line 135 "array2d.m"
  {
#line 135 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 135 "array2d.m"
    MR_Integer mercury__array2d__CastX_9 = (MR_Integer) mercury__array2d__HeadVar__1_1;
#line 135 "array2d.m"
    MR_Integer mercury__array2d__CastY_10 = (MR_Integer) mercury__array2d__HeadVar__2_2;

#line 135 "array2d.m"
    mercury__array2d__succeeded = (mercury__array2d__CastX_9 == mercury__array2d__CastY_10);
#line 135 "array2d.m"
    if (mercury__array2d__succeeded)
#line 135 "array2d.m"
      mercury__array2d__succeeded = MR_TRUE;
#line 135 "array2d.m"
    else
#line 135 "array2d.m"
      {
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "array2d.m"
        MR_Integer mercury__array2d__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 2)));

#line 888 "array2d.c"
        mercury__array2d__succeeded = (mercury__array2d__V_3_3 == mercury__array2d__V_6_6);
#line 135 "array2d.m"
        if (mercury__array2d__succeeded)
#line 135 "array2d.m"
          {
#line 894 "array2d.c"
            mercury__array2d__succeeded = (mercury__array2d__V_4_4 == mercury__array2d__V_7_7);
#line 135 "array2d.m"
            if (mercury__array2d__succeeded)
#line 898 "array2d.c"
              {
#line 900 "array2d.c"
                return mercury__array2d__succeeded = mercury__array____Unify____array_1_0(mercury__array2d__TypeInfo_for_T_11, mercury__array2d__V_5_5, mercury__array2d__V_8_8);
              }
#line 135 "array2d.m"
          }
#line 135 "array2d.m"
      }
#line 135 "array2d.m"
    return mercury__array2d__succeeded;
#line 135 "array2d.m"
  }
#line 135 "array2d.m"
}

#line 213 "array2d.m"
static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
#line 213 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_26,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__IJ_8,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__J_9,
#line 213 "array2d.m"
  MR_Integer mercury__array2d__N_10,
#line 213 "array2d.m"
  MR_ArrayPtr mercury__array2d__A_11,
#line 213 "array2d.m"
  MR_Word mercury__array2d__Xs_12,
#line 213 "array2d.m"
  MR_Word mercury__array2d__Xss_13)
#line 213 "array2d.m"
{
#line 215 "array2d.m"
  while (MR_TRUE)
#line 215 "array2d.m"
    {
#line 215 "array2d.m"
      /* tailcall optimized into a loop */
#line 215 "array2d.m"
      {
#line 215 "array2d.m"
        MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__IJ_8);
#line 215 "array2d.m"
        MR_Word mercury__array2d__HeadVar__7_7;

#line 215 "array2d.m"
        if (mercury__array2d__succeeded)
#line 215 "array2d.m"
          {
#line 217 "array2d.m"
            mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__J_9);
#line 215 "array2d.m"
            if (mercury__array2d__succeeded)
#line 218 "array2d.m"
              {
#line 218 "array2d.m"
                MR_Integer mercury__array2d__V_16_16 = (mercury__array2d__IJ_8 - (MR_Integer) 1);
#line 218 "array2d.m"
                MR_Integer mercury__array2d__V_18_18 = (mercury__array2d__J_9 - (MR_Integer) 1);
#line 218 "array2d.m"
                MR_Word mercury__array2d__V_20_20;
#line 218 "array2d.m"
                MR_Box mercury__array2d__V_21_21;

#line 276 "array.opt"
                {
#line 276 "array.opt"
                  mercury__array__lookup_3_p_0(mercury__array2d__TypeInfo_for_T_26, mercury__array2d__A_11, mercury__array2d__IJ_8, &mercury__array2d__V_21_21);
                }
#line 218 "array2d.m"
                {
#line 218 "array2d.m"
                  mercury__array2d__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "array2d.m"
                  MR_hl_field(MR_mktag(1), mercury__array2d__V_20_20, 0) = mercury__array2d__V_21_21;
#line 218 "array2d.m"
                  MR_hl_field(MR_mktag(1), mercury__array2d__V_20_20, 1) = ((MR_Box) (mercury__array2d__Xs_12));
#line 218 "array2d.m"
                }
#line 218 "array2d.m"
                /* direct tailcall eliminated */
#line 218 "array2d.m"
                {
#line 218 "array2d.m"
                  MR_Integer mercury__array2d__IJ__tmp_copy_8 = mercury__array2d__V_16_16;
#line 218 "array2d.m"
                  MR_Integer mercury__array2d__J__tmp_copy_9 = mercury__array2d__V_18_18;
#line 218 "array2d.m"
                  MR_Word mercury__array2d__Xs__tmp_copy_12 = mercury__array2d__V_20_20;

#line 218 "array2d.m"
                  mercury__array2d__Xs_12 = mercury__array2d__Xs__tmp_copy_12;
#line 218 "array2d.m"
                  mercury__array2d__J_9 = mercury__array2d__J__tmp_copy_9;
#line 218 "array2d.m"
                  mercury__array2d__IJ_8 = mercury__array2d__IJ__tmp_copy_8;
#line 218 "array2d.m"
                }
#line 218 "array2d.m"
                continue;
#line 218 "array2d.m"
              }
#line 215 "array2d.m"
            else
#line 219 "array2d.m"
              {
#line 219 "array2d.m"
                MR_Integer mercury__array2d__V_22_22 = (mercury__array2d__N_10 - (MR_Integer) 1);
#line 219 "array2d.m"
                MR_Word mercury__array2d__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "array2d.m"
                MR_Word mercury__array2d__V_25_25;

#line 219 "array2d.m"
                {
#line 219 "array2d.m"
                  mercury__array2d__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "array2d.m"
                  MR_hl_field(MR_mktag(1), mercury__array2d__V_25_25, 0) = ((MR_Box) (mercury__array2d__Xs_12));
#line 219 "array2d.m"
                  MR_hl_field(MR_mktag(1), mercury__array2d__V_25_25, 1) = ((MR_Box) (mercury__array2d__Xss_13));
#line 219 "array2d.m"
                }
#line 219 "array2d.m"
                /* direct tailcall eliminated */
#line 219 "array2d.m"
                {
#line 219 "array2d.m"
                  MR_Integer mercury__array2d__J__tmp_copy_9 = mercury__array2d__V_22_22;
#line 219 "array2d.m"
                  MR_Word mercury__array2d__Xs__tmp_copy_12 = mercury__array2d__V_24_24;
#line 219 "array2d.m"
                  MR_Word mercury__array2d__Xss__tmp_copy_13 = mercury__array2d__V_25_25;

#line 219 "array2d.m"
                  mercury__array2d__Xss_13 = mercury__array2d__Xss__tmp_copy_13;
#line 219 "array2d.m"
                  mercury__array2d__Xs_12 = mercury__array2d__Xs__tmp_copy_12;
#line 219 "array2d.m"
                  mercury__array2d__J_9 = mercury__array2d__J__tmp_copy_9;
#line 219 "array2d.m"
                }
#line 219 "array2d.m"
                continue;
#line 219 "array2d.m"
              }
#line 215 "array2d.m"
          }
#line 215 "array2d.m"
        else
#line 222 "array2d.m"
          {
#line 222 "array2d.m"
            mercury__array2d__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "array2d.m"
            MR_hl_field(MR_mktag(1), mercury__array2d__HeadVar__7_7, 0) = ((MR_Box) (mercury__array2d__Xs_12));
#line 222 "array2d.m"
            MR_hl_field(MR_mktag(1), mercury__array2d__HeadVar__7_7, 1) = ((MR_Box) (mercury__array2d__Xss_13));
#line 222 "array2d.m"
          }
#line 215 "array2d.m"
        return mercury__array2d__HeadVar__7_7;
#line 215 "array2d.m"
      }
#line 215 "array2d.m"
      break;
#line 215 "array2d.m"
    }
#line 213 "array2d.m"
}

#line 121 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__lists_1_f_0(
#line 121 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_13,
#line 121 "array2d.m"
  MR_Word mercury__array2d__HeadVar__1_1)
#line 121 "array2d.m"
{
#line 208 "array2d.m"
  {
#line 208 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 208 "array2d.m"
    MR_Word mercury__array2d__HeadVar__2_2;
#line 208 "array2d.m"
    MR_Integer mercury__array2d__M_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "array2d.m"
    MR_Integer mercury__array2d__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "array2d.m"
    MR_ArrayPtr mercury__array2d__A_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
#line 208 "array2d.m"
    MR_Integer mercury__array2d__V_6_6;
#line 208 "array2d.m"
    MR_Integer mercury__array2d__V_7_7 = (mercury__array2d__M_3 * mercury__array2d__N_4);
#line 208 "array2d.m"
    MR_Integer mercury__array2d__V_9_9;
#line 208 "array2d.m"
    MR_Word mercury__array2d__V_11_11;
#line 208 "array2d.m"
    MR_Word mercury__array2d__V_12_12;

#line 208 "array2d.m"
    mercury__array2d__V_6_6 = (mercury__array2d__V_7_7 - (MR_Integer) 1);
#line 208 "array2d.m"
    mercury__array2d__V_9_9 = (mercury__array2d__N_4 - (MR_Integer) 1);
#line 208 "array2d.m"
    mercury__array2d__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "array2d.m"
    mercury__array2d__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "array2d.m"
    {
#line 208 "array2d.m"
      return mercury__array2d__HeadVar__2_2 = mercury__array2d__lists_2_6_f_0(mercury__array2d__TypeInfo_for_T_13, mercury__array2d__V_6_6, mercury__array2d__V_9_9, mercury__array2d__N_4, mercury__array2d__A_5, mercury__array2d__V_11_11, mercury__array2d__V_12_12);
    }
#line 208 "array2d.m"
    return mercury__array2d__HeadVar__2_2;
#line 208 "array2d.m"
  }
#line 121 "array2d.m"
}

#line 114 "array2d.m"
MR_bool MR_CALL 
mercury__array2d__in_bounds_3_p_0(
#line 114 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_11,
#line 114 "array2d.m"
  MR_Word mercury__array2d__HeadVar__1_1,
#line 114 "array2d.m"
  MR_Integer mercury__array2d__I_7,
#line 114 "array2d.m"
  MR_Integer mercury__array2d__J_8)
#line 114 "array2d.m"
{
#line 173 "array2d.m"
  {
#line 173 "array2d.m"
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_7);
#line 173 "array2d.m"
    MR_Integer mercury__array2d__M_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "array2d.m"
    MR_Integer mercury__array2d__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "array2d.m"
    MR_Integer mercury__array2d__V_10_10;
#line 173 "array2d.m"
    MR_ArrayPtr mercury__array2d___A_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));

#line 173 "array2d.m"
    if (mercury__array2d__succeeded)
#line 173 "array2d.m"
      {
#line 174 "array2d.m"
        mercury__array2d__succeeded = (mercury__array2d__I_7 < mercury__array2d__M_4);
#line 173 "array2d.m"
        if (mercury__array2d__succeeded)
#line 173 "array2d.m"
          {
#line 175 "array2d.m"
            mercury__array2d__V_10_10 = (MR_Integer) 0;
#line 175 "array2d.m"
            mercury__array2d__succeeded = (mercury__array2d__V_10_10 <= mercury__array2d__J_8);
#line 173 "array2d.m"
            if (mercury__array2d__succeeded)
#line 175 "array2d.m"
              mercury__array2d__succeeded = (mercury__array2d__J_8 < mercury__array2d__N_5);
#line 173 "array2d.m"
          }
#line 173 "array2d.m"
      }
#line 173 "array2d.m"
    return mercury__array2d__succeeded;
#line 173 "array2d.m"
  }
#line 114 "array2d.m"
}

#line 107 "array2d.m"
void MR_CALL 
mercury__array2d__bounds_3_p_0(
#line 107 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_7,
#line 107 "array2d.m"
  MR_Word mercury__array2d__HeadVar__1_1,
#line 107 "array2d.m"
  MR_Integer * mercury__array2d__M_4,
#line 107 "array2d.m"
  MR_Integer * mercury__array2d__N_5)
#line 107 "array2d.m"
{
#line 169 "array2d.m"
  {
#line 169 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 169 "array2d.m"
    MR_ArrayPtr mercury__array2d___A_6;

#line 169 "array2d.m"
    *mercury__array2d__M_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "array2d.m"
    *mercury__array2d__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "array2d.m"
    mercury__array2d___A_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "array2d.m"
  }
#line 107 "array2d.m"
}

#line 101 "array2d.m"
void MR_CALL 
mercury__array2d__unsafe_set_5_p_0(
#line 101 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_10,
#line 101 "array2d.m"
  MR_Integer mercury__array2d__I_6,
#line 101 "array2d.m"
  MR_Integer mercury__array2d__J_7,
#line 101 "array2d.m"
  MR_Box mercury__array2d__X_8,
#line 101 "array2d.m"
  MR_Word mercury__array2d__A_9,
#line 101 "array2d.m"
  MR_Word * mercury__array2d__HeadVar__5_5)
#line 101 "array2d.m"
{
#line 201 "array2d.m"
  {
#line 201 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__M_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 0)));
#line 201 "array2d.m"
    MR_Integer mercury__array2d__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 1)));
#line 201 "array2d.m"
    MR_ArrayPtr mercury__array2d__A_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 2)));
#line 201 "array2d.m"
    MR_ArrayPtr mercury__array2d__V_17_17;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__V_18_18;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__V_19_19 = (mercury__array2d__I_6 * mercury__array2d__N_15);
#line 290 "array.opt"
    MR_Word mercury__array2d__TypeInfo_for_T_24;

#line 202 "array2d.m"
    mercury__array2d__V_18_18 = (mercury__array2d__V_19_19 + mercury__array2d__J_7);
#line 290 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__unsafe_set_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__V_18_18 ;
	Item = (MR_Word) mercury__array2d__X_8 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_16 , Array0);
		{
#line 290 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 1266 "array2d.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__V_17_17 );
#line 290 "array.opt"
}
#line 202 "array2d.m"
    {
#line 202 "array2d.m"
      MR_Word base;
#line 202 "array2d.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 202 "array2d.m"
      *mercury__array2d__HeadVar__5_5 = base;
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__array2d__M_14));
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__array2d__N_15));
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__array2d__V_17_17));
#line 202 "array2d.m"
    }
#line 201 "array2d.m"
  }
#line 101 "array2d.m"
}

#line 96 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0(
#line 96 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_15,
#line 96 "array2d.m"
  MR_Integer mercury__array2d__I_9,
#line 96 "array2d.m"
  MR_Integer mercury__array2d__J_10,
#line 96 "array2d.m"
  MR_Word mercury__array2d__HeadVar__3_3,
#line 96 "array2d.m"
  MR_Box mercury__array2d__X_11)
#line 96 "array2d.m"
{
#line 201 "array2d.m"
  {
#line 201 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 201 "array2d.m"
    MR_Word mercury__array2d__HeadVar__5_5;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__M_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "array2d.m"
    MR_Integer mercury__array2d__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "array2d.m"
    MR_ArrayPtr mercury__array2d__A_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
#line 201 "array2d.m"
    MR_ArrayPtr mercury__array2d__V_12_12;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__V_13_13;
#line 201 "array2d.m"
    MR_Integer mercury__array2d__V_14_14 = (mercury__array2d__I_9 * mercury__array2d__N_7);
#line 290 "array.opt"
    MR_Word mercury__array2d__TypeInfo_for_T_20;

#line 202 "array2d.m"
    mercury__array2d__V_13_13 = (mercury__array2d__V_14_14 + mercury__array2d__J_10);
#line 290 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__V_13_13 ;
	Item = (MR_Word) mercury__array2d__X_11 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_8 , Array0);
		{
#line 290 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 1350 "array2d.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__V_12_12 );
#line 290 "array.opt"
}
#line 202 "array2d.m"
    {
#line 202 "array2d.m"
      mercury__array2d__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 0) = ((MR_Box) (mercury__array2d__M_6));
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 1) = ((MR_Box) (mercury__array2d__N_7));
#line 202 "array2d.m"
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 2) = ((MR_Box) (mercury__array2d__V_12_12));
#line 202 "array2d.m"
    }
#line 201 "array2d.m"
    return mercury__array2d__HeadVar__5_5;
#line 201 "array2d.m"
  }
#line 96 "array2d.m"
}

#line 90 "array2d.m"
void MR_CALL 
mercury__array2d__set_5_p_0(
#line 90 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_10,
#line 90 "array2d.m"
  MR_Integer mercury__array2d__I_6,
#line 90 "array2d.m"
  MR_Integer mercury__array2d__J_7,
#line 90 "array2d.m"
  MR_Box mercury__array2d__X_8,
#line 90 "array2d.m"
  MR_Word mercury__array2d__A_9,
#line 90 "array2d.m"
  MR_Word * mercury__array2d__HeadVar__5_5)
#line 90 "array2d.m"
{
#line 197 "array2d.m"
  {
#line 197 "array2d.m"
    MR_bool mercury__array2d__succeeded;

#line 197 "array2d.m"
    {
#line 197 "array2d.m"
      *mercury__array2d__HeadVar__5_5 = mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(mercury__array2d__TypeInfo_for_T_10, mercury__array2d__I_6, mercury__array2d__J_7, mercury__array2d__A_9, mercury__array2d__X_8);
    }
#line 197 "array2d.m"
  }
#line 90 "array2d.m"
}

#line 85 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(
#line 85 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_11,
#line 85 "array2d.m"
  MR_Integer mercury__array2d__I_7,
#line 85 "array2d.m"
  MR_Integer mercury__array2d__J_8,
#line 85 "array2d.m"
  MR_Word mercury__array2d__T_6,
#line 85 "array2d.m"
  MR_Box mercury__array2d__X_9)
#line 85 "array2d.m"
{
#line 191 "array2d.m"
  {
#line 191 "array2d.m"
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_7);
#line 191 "array2d.m"
    MR_Word mercury__array2d__HeadVar__5_5;
#line 191 "array2d.m"
    MR_Integer mercury__array2d__M_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 0)));
#line 191 "array2d.m"
    MR_Integer mercury__array2d__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 1)));
#line 191 "array2d.m"
    MR_ArrayPtr mercury__array2d___A_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 2)));
#line 173 "array2d.m"
    MR_Integer mercury__array2d__V_20_20;

#line 173 "array2d.m"
    if (mercury__array2d__succeeded)
#line 173 "array2d.m"
      {
#line 174 "array2d.m"
        mercury__array2d__succeeded = (mercury__array2d__I_7 < mercury__array2d__M_16);
#line 173 "array2d.m"
        if (mercury__array2d__succeeded)
#line 173 "array2d.m"
          {
#line 175 "array2d.m"
            mercury__array2d__V_20_20 = (MR_Integer) 0;
#line 175 "array2d.m"
            mercury__array2d__succeeded = (mercury__array2d__V_20_20 <= mercury__array2d__J_8);
#line 173 "array2d.m"
            if (mercury__array2d__succeeded)
#line 175 "array2d.m"
              mercury__array2d__succeeded = (mercury__array2d__J_8 < mercury__array2d__N_17);
#line 173 "array2d.m"
          }
#line 173 "array2d.m"
      }
#line 191 "array2d.m"
    if (mercury__array2d__succeeded)
#line 201 "array2d.m"
      {
#line 201 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_27_27;
#line 201 "array2d.m"
        MR_Integer mercury__array2d__V_28_28;
#line 201 "array2d.m"
        MR_Integer mercury__array2d__V_29_29 = (mercury__array2d__I_7 * mercury__array2d__N_17);
#line 290 "array.opt"
        MR_Word mercury__array2d__TypeInfo_for_T_34;

#line 202 "array2d.m"
        mercury__array2d__V_28_28 = (mercury__array2d__V_29_29 + mercury__array2d__J_8);
#line 290 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__f_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__V_28_28 ;
	Item = (MR_Word) mercury__array2d__X_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d___A_18 , Array0);
		{
#line 290 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 1493 "array2d.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__V_27_27 );
#line 290 "array.opt"
}
#line 202 "array2d.m"
        {
#line 202 "array2d.m"
          mercury__array2d__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 202 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 0) = ((MR_Box) (mercury__array2d__M_16));
#line 202 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 1) = ((MR_Box) (mercury__array2d__N_17));
#line 202 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 2) = ((MR_Box) (mercury__array2d__V_27_27));
#line 202 "array2d.m"
        }
#line 201 "array2d.m"
      }
#line 191 "array2d.m"
    else
#line 194 "array2d.m"
      {
#line 194 "array2d.m"
        MR_Word mercury__array2d__TypeCtorInfo_12_12 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
#line 194 "array2d.m"
        MR_Word mercury__array2d__TypeInfo_13_13;
#line 194 "array2d.m"
        MR_Box mercury__array2d__conv0_HeadVar__5_5;

#line 1525 "array2d.c"
        {
#line 1527 "array2d.c"
          mercury__array2d__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "array2d.c"
          MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_13_13, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_12_12));
#line 1531 "array2d.c"
          MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_13_13, 1) = ((MR_Box) (mercury__array2d__TypeInfo_for_T_11));
#line 1533 "array2d.c"
        }
#line 194 "array2d.m"
        {
#line 194 "array2d.m"
          mercury__array2d__conv0_HeadVar__5_5 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_13_13, (MR_String) "array2d.\'elem :=\': indices out of bounds");
        }
#line 194 "array2d.m"
        mercury__array2d__HeadVar__5_5 = ((MR_Word) mercury__array2d__conv0_HeadVar__5_5);
#line 194 "array2d.m"
      }
#line 191 "array2d.m"
    return mercury__array2d__HeadVar__5_5;
#line 191 "array2d.m"
  }
#line 85 "array2d.m"
}

#line 76 "array2d.m"
MR_Box MR_CALL 
mercury__array2d__unsafe_elem_3_f_0(
#line 76 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_12,
#line 76 "array2d.m"
  MR_Integer mercury__array2d__I_8,
#line 76 "array2d.m"
  MR_Integer mercury__array2d__J_9,
#line 76 "array2d.m"
  MR_Word mercury__array2d__HeadVar__3_3)
#line 76 "array2d.m"
{
#line 187 "array2d.m"
  {
#line 187 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 187 "array2d.m"
    MR_Box mercury__array2d__HeadVar__4_4;
#line 187 "array2d.m"
    MR_Integer mercury__array2d__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
#line 187 "array2d.m"
    MR_ArrayPtr mercury__array2d__A_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
#line 187 "array2d.m"
    MR_Integer mercury__array2d__V_10_10;
#line 187 "array2d.m"
    MR_Integer mercury__array2d__V_11_11 = (mercury__array2d__I_8 * mercury__array2d__N_6);
#line 187 "array2d.m"
    MR_Integer mercury__array2d___M_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
#line 285 "array.opt"
    MR_Word mercury__array2d__TypeInfo_for_T_16;

#line 187 "array2d.m"
    mercury__array2d__V_10_10 = (mercury__array2d__V_11_11 + mercury__array2d__J_9);
#line 285 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__unsafe_elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_7 , Array);
	Index =  mercury__array2d__V_10_10 ;
		{
#line 285 "array.opt"

    Item = Array->elements[Index];

#line 1600 "array2d.c"

		;}
#undef MR_PROC_LABEL
	 mercury__array2d__HeadVar__4_4  = (MR_Box) Item;
#line 285 "array.opt"
}
#line 187 "array2d.m"
    return mercury__array2d__HeadVar__4_4;
#line 187 "array2d.m"
  }
#line 76 "array2d.m"
}

#line 69 "array2d.m"
MR_Box MR_CALL 
mercury__array2d__elem_3_f_0(
#line 69 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_9,
#line 69 "array2d.m"
  MR_Integer mercury__array2d__I_6,
#line 69 "array2d.m"
  MR_Integer mercury__array2d__J_7,
#line 69 "array2d.m"
  MR_Word mercury__array2d__T_5)
#line 69 "array2d.m"
{
#line 179 "array2d.m"
  {
#line 179 "array2d.m"
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_6);
#line 179 "array2d.m"
    MR_Box mercury__array2d__HeadVar__4_4;
#line 179 "array2d.m"
    MR_Integer mercury__array2d__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 1)));
#line 179 "array2d.m"
    MR_ArrayPtr mercury__array2d___A_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 2)));
#line 173 "array2d.m"
    MR_Integer mercury__array2d__M_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 0)));
#line 173 "array2d.m"
    MR_Integer mercury__array2d__V_16_16;

#line 173 "array2d.m"
    if (mercury__array2d__succeeded)
#line 173 "array2d.m"
      {
#line 174 "array2d.m"
        mercury__array2d__succeeded = (mercury__array2d__I_6 < mercury__array2d__M_12);
#line 173 "array2d.m"
        if (mercury__array2d__succeeded)
#line 173 "array2d.m"
          {
#line 175 "array2d.m"
            mercury__array2d__V_16_16 = (MR_Integer) 0;
#line 175 "array2d.m"
            mercury__array2d__succeeded = (mercury__array2d__V_16_16 <= mercury__array2d__J_7);
#line 173 "array2d.m"
            if (mercury__array2d__succeeded)
#line 175 "array2d.m"
              mercury__array2d__succeeded = (mercury__array2d__J_7 < mercury__array2d__N_13);
#line 173 "array2d.m"
          }
#line 173 "array2d.m"
      }
#line 179 "array2d.m"
    if (mercury__array2d__succeeded)
#line 187 "array2d.m"
      {
#line 187 "array2d.m"
        MR_Integer mercury__array2d__V_22_22;
#line 187 "array2d.m"
        MR_Integer mercury__array2d__V_23_23 = (mercury__array2d__I_6 * mercury__array2d__N_13);
#line 285 "array.opt"
        MR_Word mercury__array2d__TypeInfo_for_T_27;

#line 187 "array2d.m"
        mercury__array2d__V_22_22 = (mercury__array2d__V_23_23 + mercury__array2d__J_7);
#line 285 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d___A_14 , Array);
	Index =  mercury__array2d__V_22_22 ;
		{
#line 285 "array.opt"

    Item = Array->elements[Index];

#line 1692 "array2d.c"

		;}
#undef MR_PROC_LABEL
	 mercury__array2d__HeadVar__4_4  = (MR_Box) Item;
#line 285 "array.opt"
}
#line 187 "array2d.m"
      }
#line 179 "array2d.m"
    else
#line 182 "array2d.m"
      {
#line 182 "array2d.m"
        {
#line 182 "array2d.m"
          return mercury__array2d__HeadVar__4_4 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_for_T_9, (MR_String) "array2d.elem: indices out of bounds");
        }
#line 182 "array2d.m"
      }
#line 179 "array2d.m"
    return mercury__array2d__HeadVar__4_4;
#line 179 "array2d.m"
  }
#line 69 "array2d.m"
}

#line 59 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__from_lists_1_f_0(
#line 59 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_4,
#line 59 "array2d.m"
  MR_Word mercury__array2d__Xss_3)
#line 59 "array2d.m"
{
#line 165 "array2d.m"
  {
#line 165 "array2d.m"
    MR_bool mercury__array2d__succeeded;
#line 165 "array2d.m"
    MR_Word mercury__array2d__HeadVar__2_2;

#line 165 "array2d.m"
    {
#line 165 "array2d.m"
      return mercury__array2d__HeadVar__2_2 = mercury__array2d__array2d_1_f_0(mercury__array2d__TypeInfo_for_T_4, mercury__array2d__Xss_3);
    }
#line 165 "array2d.m"
    return mercury__array2d__HeadVar__2_2;
#line 165 "array2d.m"
  }
#line 59 "array2d.m"
}

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg)
#line 160 "array2d.m"
{
#line 160 "array2d.m"
  {
#line 160 "array2d.m"
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

#line 160 "array2d.m"
    MR_builtin_longjmp((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0, 1);
#line 160 "array2d.m"
  }
#line 160 "array2d.m"
}

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg)
#line 160 "array2d.m"
{
#line 160 "array2d.m"
  {
#line 160 "array2d.m"
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

#line 160 "array2d.m"
    (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13 = ((MR_Word) (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13);
#line 160 "array2d.m"
    {
#line 160 "array2d.m"
      mercury__array2d__array2d_1_f_0_2(mercury__array2d__env_ptr);
#line 160 "array2d.m"
      return;
    }
#line 160 "array2d.m"
  }
#line 160 "array2d.m"
}

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg)
#line 160 "array2d.m"
{
#line 160 "array2d.m"
  {
#line 160 "array2d.m"
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

#line 160 "array2d.m"
    {
#line 160 "array2d.m"
      MR_Integer mercury__array2d__V_21_21;

#line 78 "list.opt"
      {
#line 78 "list.opt"
        mercury__list__length_2_3_p_0((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13, (MR_Integer) 0, &mercury__array2d__V_21_21);
      }
#line 160 "array2d.m"
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = ((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__N_11 == mercury__array2d__V_21_21);
#line 160 "array2d.m"
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = !((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded);
#line 160 "array2d.m"
      if ((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded)
#line 160 "array2d.m"
        {
#line 160 "array2d.m"
          mercury__array2d__array2d_1_f_0_1(mercury__array2d__env_ptr);
#line 160 "array2d.m"
          return;
        }
#line 160 "array2d.m"
    }
#line 160 "array2d.m"
  }
#line 160 "array2d.m"
}

#line 160 "array2d.m"
static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
#line 160 "array2d.m"
  void * mercury__array2d__env_ptr_arg)
#line 160 "array2d.m"
{
#line 160 "array2d.m"
  {
#line 160 "array2d.m"
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

#line 160 "array2d.m"
    if (MR_builtin_setjmp((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0) == 0)
#line 160 "array2d.m"
      {
#line 160 "array2d.m"
        {
#line 160 "array2d.m"
          mercury__list__member_2_p_1((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, &(mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13, (MR_Word) (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, mercury__array2d__array2d_1_f_0_3, mercury__array2d__env_ptr);
        }
#line 160 "array2d.m"
        (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_FALSE;
#line 160 "array2d.m"
      }
#line 160 "array2d.m"
    else
#line 160 "array2d.m"
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_TRUE;
#line 160 "array2d.m"
  }
#line 160 "array2d.m"
}

#line 54 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__array2d_1_f_0(
#line 54 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_16,
#line 54 "array2d.m"
  MR_Word mercury__array2d__HeadVar__1_1)
#line 54 "array2d.m"
{
#line 54 "array2d.m"
  {
#line 54 "array2d.m"
    struct mercury__array2d__array2d_2_f_0_env_0_s mercury__array2d__env;

#line 54 "array2d.m"
    (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16 = mercury__array2d__TypeInfo_for_T_16;
#line 54 "array2d.m"
    (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 = mercury__array2d__HeadVar__1_1;
#line 155 "array2d.m"
    {
#line 155 "array2d.m"
      MR_Word mercury__array2d__HeadVar__2_2;

#line 155 "array2d.m"
      if (((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "array2d.m"
        {
#line 155 "array2d.m"
          MR_ArrayPtr mercury__array2d__V_5_5;
#line 195 "array.opt"
          MR_Word mercury__array2d__TypeInfo_for_T_49;

#line 195 "array.opt"
{
#define MR_PROC_LABEL mercury__array2d__array2d_1_f_0

	MR_ArrayPtr Array;

		{
#line 195 "array.opt"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);

#line 1912 "array2d.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__V_5_5 );
#line 195 "array.opt"
}
#line 155 "array2d.m"
          {
#line 155 "array2d.m"
            mercury__array2d__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 155 "array2d.m"
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 0) = ((MR_Box) ((MR_Integer) 0));
#line 155 "array2d.m"
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 155 "array2d.m"
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 2) = ((MR_Box) (mercury__array2d__V_5_5));
#line 155 "array2d.m"
          }
#line 155 "array2d.m"
        }
#line 155 "array2d.m"
      else
#line 156 "array2d.m"
        {
#line 156 "array2d.m"
          MR_Word mercury__array2d__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 156 "array2d.m"
          MR_Word mercury__array2d__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "array2d.m"
          MR_Integer mercury__array2d__M_10;
#line 156 "array2d.m"
          MR_ArrayPtr mercury__array2d__A_12;
#line 156 "array2d.m"
          MR_Word mercury__array2d__V_14_14;
#line 156 "array2d.m"
          MR_Word mercury__array2d__RevXss_5_37;
#line 156 "array2d.m"
          MR_Word mercury__array2d__V_6_38;
#line 156 "array2d.m"
          MR_Word mercury__array2d__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "list.opt"
          MR_Word mercury__array2d__conv0_RevXss_5_37;

#line 1956 "array2d.c"
          {
#line 1958 "array2d.c"
            MR_Word base;
#line 1960 "array2d.c"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1962 "array2d.c"
            (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41 = base;
#line 1964 "array2d.c"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_17_17));
#line 1966 "array2d.c"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
#line 1968 "array2d.c"
          }
#line 78 "list.opt"
          {
#line 78 "list.opt"
            mercury__list__length_2_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0, &mercury__array2d__M_10);
          }
#line 78 "list.opt"
          {
#line 78 "list.opt"
            mercury__list__length_2_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__Xs_7, (MR_Integer) 0, &(mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__N_11);
          }
#line 150 "list.opt"
          {
#line 150 "list.opt"
            mercury__list__reverse_2_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, &mercury__array2d__conv0_RevXss_5_37);
          }
#line 150 "list.opt"
          mercury__array2d__RevXss_5_37 = (MR_Word) mercury__array2d__conv0_RevXss_5_37;
#line 151 "list.opt"
          mercury__array2d__V_6_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "list.opt"
          {
#line 152 "list.opt"
            mercury__list__condense_2_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__RevXss_5_37, mercury__array2d__V_6_38, &mercury__array2d__V_14_14);
          }
#line 204 "array.opt"
          {
#line 204 "array.opt"
            mercury__array__from_list_2_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__V_14_14, &mercury__array2d__A_12);
          }
#line 160 "array2d.m"
          {
#line 160 "array2d.m"
            mercury__array2d__array2d_1_f_0_4(&mercury__array2d__env);
          }
#line 160 "array2d.m"
          (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded = !((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded);
#line 160 "array2d.m"
          if ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded)
#line 161 "array2d.m"
            {
#line 161 "array2d.m"
              mercury__array2d__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 161 "array2d.m"
              MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 0) = ((MR_Box) (mercury__array2d__M_10));
#line 161 "array2d.m"
              MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__N_11));
#line 161 "array2d.m"
              MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 2) = ((MR_Box) (mercury__array2d__A_12));
#line 161 "array2d.m"
            }
#line 160 "array2d.m"
          else
#line 162 "array2d.m"
            {
#line 162 "array2d.m"
              MR_Word mercury__array2d__TypeCtorInfo_19_19 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
#line 162 "array2d.m"
              MR_Word mercury__array2d__TypeInfo_20_20;
#line 162 "array2d.m"
              MR_Box mercury__array2d__conv2_HeadVar__2_2;

#line 2031 "array2d.c"
              {
#line 2033 "array2d.c"
                mercury__array2d__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2035 "array2d.c"
                MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_20_20, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_19_19));
#line 2037 "array2d.c"
                MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_20_20, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
#line 2039 "array2d.c"
              }
#line 162 "array2d.m"
              {
#line 162 "array2d.m"
                mercury__array2d__conv2_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_20_20, (MR_String) "array2d.array2d/1: non-rectangular list of lists");
              }
#line 162 "array2d.m"
              mercury__array2d__HeadVar__2_2 = ((MR_Word) mercury__array2d__conv2_HeadVar__2_2);
#line 162 "array2d.m"
            }
#line 156 "array2d.m"
        }
#line 155 "array2d.m"
      return mercury__array2d__HeadVar__2_2;
#line 155 "array2d.m"
    }
#line 54 "array2d.m"
  }
#line 54 "array2d.m"
}

#line 46 "array2d.m"
MR_Word MR_CALL 
mercury__array2d__init_3_f_0(
#line 46 "array2d.m"
  MR_Word mercury__array2d__TypeInfo_for_T_13,
#line 46 "array2d.m"
  MR_Integer mercury__array2d__M_5,
#line 46 "array2d.m"
  MR_Integer mercury__array2d__N_6,
#line 46 "array2d.m"
  MR_Box mercury__array2d__X_7)
#line 46 "array2d.m"
{
#line 147 "array2d.m"
  {
#line 147 "array2d.m"
    MR_bool mercury__array2d__succeeded = (mercury__array2d__M_5 >= (MR_Integer) 0);
#line 147 "array2d.m"
    MR_Word mercury__array2d__HeadVar__4_4;
#line 148 "array2d.m"
    MR_Integer mercury__array2d__V_9_9;

#line 148 "array2d.m"
    if (mercury__array2d__succeeded)
#line 148 "array2d.m"
      {
#line 148 "array2d.m"
        mercury__array2d__V_9_9 = (MR_Integer) 0;
#line 148 "array2d.m"
        mercury__array2d__succeeded = (mercury__array2d__N_6 >= mercury__array2d__V_9_9);
#line 148 "array2d.m"
      }
#line 147 "array2d.m"
    if (mercury__array2d__succeeded)
#line 149 "array2d.m"
      {
#line 149 "array2d.m"
        MR_ArrayPtr mercury__array2d__V_10_10;
#line 149 "array2d.m"
        MR_Integer mercury__array2d__V_11_11 = (mercury__array2d__M_5 * mercury__array2d__N_6);

#line 202 "array.opt"
        {
#line 202 "array.opt"
          mercury__array__init_3_p_0(mercury__array2d__TypeInfo_for_T_13, mercury__array2d__V_11_11, mercury__array2d__X_7, &mercury__array2d__V_10_10);
        }
#line 149 "array2d.m"
        {
#line 149 "array2d.m"
          mercury__array2d__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 0) = ((MR_Box) (mercury__array2d__M_5));
#line 149 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 1) = ((MR_Box) (mercury__array2d__N_6));
#line 149 "array2d.m"
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 2) = ((MR_Box) (mercury__array2d__V_10_10));
#line 149 "array2d.m"
        }
#line 149 "array2d.m"
      }
#line 147 "array2d.m"
    else
#line 150 "array2d.m"
      {
#line 150 "array2d.m"
        MR_Word mercury__array2d__TypeCtorInfo_14_14 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
#line 150 "array2d.m"
        MR_Word mercury__array2d__TypeInfo_15_15;
#line 150 "array2d.m"
        MR_Box mercury__array2d__conv0_HeadVar__4_4;

#line 2132 "array2d.c"
        {
#line 2134 "array2d.c"
          mercury__array2d__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2136 "array2d.c"
          MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_15_15, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_14_14));
#line 2138 "array2d.c"
          MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_15_15, 1) = ((MR_Box) (mercury__array2d__TypeInfo_for_T_13));
#line 2140 "array2d.c"
        }
#line 150 "array2d.m"
        {
#line 150 "array2d.m"
          mercury__array2d__conv0_HeadVar__4_4 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_15_15, (MR_String) "array2d.init: bounds must be non-negative");
        }
#line 150 "array2d.m"
        mercury__array2d__HeadVar__4_4 = ((MR_Word) mercury__array2d__conv0_HeadVar__4_4);
#line 150 "array2d.m"
      }
#line 147 "array2d.m"
    return mercury__array2d__HeadVar__4_4;
#line 147 "array2d.m"
  }
#line 46 "array2d.m"
}

void mercury__array2d__init(void)
{
}

void mercury__array2d__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__array2d__array2d__type_ctor_info_array2d_1);
}

void mercury__array2d__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module array2d. */
