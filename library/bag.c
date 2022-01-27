/*
** Automatically generated from `bag.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module bag. */
/* :- implementation. */

/*
INIT mercury__bag__init
ENDINIT
*/

#include "bag.mih"


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



#line 68 "bag.m"
struct mercury__bag__member_3_p_0_env_0_s {
#line 68 "bag.m"
  MR_Word mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8;
#line 68 "bag.m"
  MR_Box * mercury__bag__member_3_p_0_env_0__OutVal_4;
#line 68 "bag.m"
  MR_Word mercury__bag__member_3_p_0_env_0__InBag_5;
#line 68 "bag.m"
  MR_Word * mercury__bag__member_3_p_0_env_0__OutBag_6;
#line 68 "bag.m"
  MR_Cont mercury__bag__member_3_p_0_env_0__cont;
#line 68 "bag.m"
  void * mercury__bag__member_3_p_0_env_0__cont_env_ptr;
#line 326 "bag.m"
  MR_bool mercury__bag__member_3_p_0_env_0__succeeded;
#line 68 "bag.m"
};


#line 105 "bag.c"
static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1];

#line 108 "bag.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 111 "bag.c"
static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1;

#line 114 "bag.c"
static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
#line 117 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 119 "bag.c"
  MR_Box mercury__bag__wrapper_arg_2,
#line 121 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3);

#line 124 "bag.c"
static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
#line 127 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 129 "bag.c"
  MR_Box * mercury__bag__wrapper_arg_2,
#line 131 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3,
#line 133 "bag.c"
  MR_Box mercury__bag__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 130 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho7_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4);

#line 326 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 326 "bag.m"
  void * mercury__bag__env_ptr_arg);


static /* final */ const MR_Box mercury__bag_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bag_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bag_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bag_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bag_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bag_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bag_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bag_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bag_scalar_common_2[0])),
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



#line 518 "bag.c"
static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1] = {
  (MR_Integer) 0
};

#line 523 "bag.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 532 "bag.c"
static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1 = {
  (MR_String) "bag",
  (MR_PseudoTypeInfo) &mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  NULL
};

#line 539 "bag.c"
const MR_TypeCtorInfo_Struct mercury__bag__bag__type_ctor_info_bag_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bag____Unify____bag_1_0_10001)),
  ((MR_Box) (mercury__bag____Compare____bag_1_0_10001)),
  (MR_String) "bag",
  (MR_String) "bag",
  {
    &mercury__bag__bag__notag_functor_desc_bag_1
  },
  {
    &mercury__bag__bag__notag_functor_desc_bag_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bag__bag__functor_number_map_bag_1
};

#line 560 "bag.c"
static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
#line 563 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 565 "bag.c"
  MR_Box mercury__bag__wrapper_arg_2,
#line 567 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3)
#line 569 "bag.c"
{
#line 571 "bag.c"
  {
#line 573 "bag.c"
    MR_bool mercury__bag__succeeded;

#line 576 "bag.c"
    {
#line 578 "bag.c"
      mercury__bag__succeeded = mercury__bag____Unify____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), ((MR_Word) mercury__bag__wrapper_arg_2), ((MR_Word) mercury__bag__wrapper_arg_3));
    }
#line 581 "bag.c"
    return mercury__bag__succeeded;
#line 583 "bag.c"
  }
#line 585 "bag.c"
}

#line 588 "bag.c"
static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
#line 591 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 593 "bag.c"
  MR_Box * mercury__bag__wrapper_arg_2,
#line 595 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3,
#line 597 "bag.c"
  MR_Box mercury__bag__wrapper_arg_4)
#line 599 "bag.c"
{
#line 601 "bag.c"
  {
#line 603 "bag.c"
    MR_Word mercury__bag__conv0_HeadVar__1_1;

#line 606 "bag.c"
    {
#line 608 "bag.c"
      mercury__bag____Compare____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), &mercury__bag__conv0_HeadVar__1_1, ((MR_Word) mercury__bag__wrapper_arg_3), ((MR_Word) mercury__bag__wrapper_arg_4));
    }
#line 611 "bag.c"
    *mercury__bag__wrapper_arg_2 = ((MR_Box) (mercury__bag__conv0_HeadVar__1_1));
#line 613 "bag.c"
  }
#line 615 "bag.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bag__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 130 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho7_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4)
#line 130 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__bag__succeeded;

#line 332 "list.opt"
        if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Integer mercury__bag__H_10_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__bag__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Integer mercury__bag__STATE_VARIABLE_A_15_15_13 = (mercury__bag__H_10_9 + mercury__bag__HeadVar__3_3);

#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__T_11_10;
#line 336 "list.opt"
              MR_Integer mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 130 "list.int"
}

#line 46 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 46 "bag.m"
  MR_Word mercury__bag__V_16_16,
#line 46 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_12,
#line 46 "bag.m"
  MR_Word mercury__bag__Item_4,
#line 46 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 46 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 46 "bag.m"
{
#line 300 "bag.m"
  {
#line 300 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 300 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_14_14;
#line 300 "bag.m"
    MR_Integer mercury__bag__Count_7;
#line 300 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 300 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
#line 303 "bag.m"
    MR_Integer mercury__bag__Count0_6;
#line 301 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_6;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_12, mercury__bag__TypeCtorInfo_13_13, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__conv0_Count0_6);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_6 = ((MR_Integer) mercury__bag__conv0_Count0_6);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 303 "bag.m"
    if (mercury__bag__succeeded)
#line 302 "bag.m"
      {
#line 302 "bag.m"
        mercury__bag__Count_7 = (mercury__bag__Count0_6 + (MR_Integer) 1);
#line 302 "bag.m"
      }
#line 303 "bag.m"
    else
#line 304 "bag.m"
      mercury__bag__Count_7 = (MR_Integer) 1;
#line 761 "bag.c"
    mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 115 "map.opt"
    {
#line 115 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_12, mercury__bag__TypeCtorInfo_14_14, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Count_7)), mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_9);
    }
#line 300 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_9;
#line 300 "bag.m"
  }
#line 46 "bag.m"
}

#line 51 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 51 "bag.m"
  MR_Word mercury__bag__V_16_16,
#line 51 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 51 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 51 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 51 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 51 "bag.m"
{
#line 313 "bag.m"
  while (MR_TRUE)
#line 313 "bag.m"
    {
#line 313 "bag.m"
      /* tailcall optimized into a loop */
#line 313 "bag.m"
      {
#line 313 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 313 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "bag.m"
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 313 "bag.m"
        else
#line 314 "bag.m"
          {
#line 314 "bag.m"
            MR_Word mercury__bag__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 315 "bag.m"
            {
#line 315 "bag.m"
              mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 316 "bag.m"
            /* direct tailcall eliminated */
#line 316 "bag.m"
            {
#line 316 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
#line 316 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 316 "bag.m"
              mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 316 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 316 "bag.m"
            }
#line 316 "bag.m"
            continue;
#line 314 "bag.m"
          }
#line 313 "bag.m"
      }
#line 313 "bag.m"
      break;
#line 313 "bag.m"
    }
#line 51 "bag.m"
}

#line 56 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 56 "bag.m"
  MR_Word mercury__bag__V_12_12,
#line 56 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 56 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 56 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 56 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 56 "bag.m"
{
#line 318 "bag.m"
  {
#line 318 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 318 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 321 "bag.m"
    {
#line 321 "bag.m"
      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
#line 321 "bag.m"
      return;
    }
#line 318 "bag.m"
  }
#line 56 "bag.m"
}

#line 115 "bag.m"
MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 115 "bag.m"
  MR_Word mercury__bag__V_17_17,
#line 115 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 115 "bag.m"
  MR_Word mercury__bag__Item_4,
#line 115 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 115 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 115 "bag.m"
{
#line 412 "bag.m"
  {
#line 412 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 412 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 412 "bag.m"
    MR_Integer mercury__bag__Count0_6;
#line 412 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 412 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_6;
#line 414 "bag.m"
    MR_Integer mercury__bag__V_10_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_17_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__conv0_Count0_6);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_6 = ((MR_Integer) mercury__bag__conv0_Count0_6);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 412 "bag.m"
    if (mercury__bag__succeeded)
#line 412 "bag.m"
      {
#line 414 "bag.m"
        mercury__bag__V_10_10 = (MR_Integer) 1;
#line 414 "bag.m"
        mercury__bag__succeeded = (mercury__bag__Count0_6 > mercury__bag__V_10_10);
#line 417 "bag.m"
        if (mercury__bag__succeeded)
#line 415 "bag.m"
          {
#line 415 "bag.m"
            MR_Integer mercury__bag__Count_7 = (mercury__bag__Count0_6 - (MR_Integer) 1);

#line 115 "map.opt"
            {
#line 115 "map.opt"
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_17_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Count_7)), mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_9);
            }
#line 415 "bag.m"
          }
#line 417 "bag.m"
        else
#line 60 "tree234.opt"
          {
#line 60 "tree234.opt"
            MR_Word mercury__bag__V_7_33;
#line 60 "tree234.opt"
            MR_Word mercury__bag__conv1_STATE_VARIABLE_Bag_9;

#line 60 "tree234.opt"
            {
#line 60 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, (MR_Word) mercury__bag__STATE_VARIABLE_Bag_0_8, ((MR_Box) (mercury__bag__Item_4)), &mercury__bag__conv1_STATE_VARIABLE_Bag_9, &mercury__bag__V_7_33);
            }
#line 60 "tree234.opt"
            mercury__bag__STATE_VARIABLE_Bag_9 = (MR_Word) mercury__bag__conv1_STATE_VARIABLE_Bag_9;
#line 60 "tree234.opt"
          }
#line 412 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_9;
#line 412 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 412 "bag.m"
      }
#line 412 "bag.m"
    return mercury__bag__succeeded;
#line 412 "bag.m"
  }
#line 115 "bag.m"
}

#line 134 "bag.m"
MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 134 "bag.m"
  MR_Word mercury__bag__V_16_16,
#line 134 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 134 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 134 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 134 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 134 "bag.m"
{
#line 434 "bag.m"
  while (MR_TRUE)
#line 434 "bag.m"
    {
#line 434 "bag.m"
      /* tailcall optimized into a loop */
#line 434 "bag.m"
      {
#line 434 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 434 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "bag.m"
          {
#line 434 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 434 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 434 "bag.m"
          }
#line 434 "bag.m"
        else
#line 435 "bag.m"
          {
#line 435 "bag.m"
            MR_Word mercury__bag__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 436 "bag.m"
            {
#line 436 "bag.m"
              mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 435 "bag.m"
            if (mercury__bag__succeeded)
#line 437 "bag.m"
              {
#line 437 "bag.m"
                /* direct tailcall eliminated */
#line 437 "bag.m"
                {
#line 437 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 437 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 437 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 437 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 437 "bag.m"
                }
#line 437 "bag.m"
                continue;
#line 437 "bag.m"
              }
#line 435 "bag.m"
          }
#line 434 "bag.m"
        return mercury__bag__succeeded;
#line 434 "bag.m"
      }
#line 434 "bag.m"
      break;
#line 434 "bag.m"
    }
#line 134 "bag.m"
}

#line 141 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 141 "bag.m"
  MR_Word mercury__bag__V_13_13,
#line 141 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 141 "bag.m"
  MR_Word mercury__bag__List_4,
#line 141 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 141 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
#line 141 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_13_13, mercury__bag__TypeInfo_for_T_11, mercury__bag__List_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
#line 443 "bag.m"
          return;
        }
#line 443 "bag.m"
      }
#line 442 "bag.m"
  }
#line 141 "bag.m"
}

#line 152 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 152 "bag.m"
  MR_Word mercury__bag__V_12_12,
#line 152 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 152 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 152 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 152 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 152 "bag.m"
{
#line 454 "bag.m"
  {
#line 454 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 454 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_20;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_20);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8_20;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
#line 443 "bag.m"
          return;
        }
#line 443 "bag.m"
      }
#line 454 "bag.m"
  }
#line 152 "bag.m"
}

#line 276 "bag.m"
void MR_CALL 
mercury__bag____Compare____bag_1_0(
#line 276 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 276 "bag.m"
  MR_Word * mercury__bag__HeadVar__1_1,
#line 276 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 276 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 276 "bag.m"
{
#line 276 "bag.m"
  {
#line 276 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 276 "bag.m"
    MR_Integer mercury__bag__CastX_6 = (MR_Integer) mercury__bag__HeadVar__2_2;
#line 276 "bag.m"
    MR_Integer mercury__bag__CastY_7 = (MR_Integer) mercury__bag__HeadVar__3_3;

#line 276 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_6 == mercury__bag__CastY_7);
#line 276 "bag.m"
    if (mercury__bag__succeeded)
#line 1197 "bag.c"
      *mercury__bag__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "bag.m"
    else
#line 276 "bag.m"
      {
#line 276 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 276 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 276 "bag.m"
        MR_Word mercury__bag__V_5_5 = (MR_Word) mercury__bag__HeadVar__3_3;

#line 276 "bag.m"
        {
#line 276 "bag.m"
          mercury__tree234____Compare____tree234_2_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__HeadVar__1_1, mercury__bag__V_4_4, mercury__bag__V_5_5);
#line 276 "bag.m"
          return;
        }
#line 276 "bag.m"
      }
#line 276 "bag.m"
  }
#line 276 "bag.m"
}

#line 276 "bag.m"
MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0(
#line 276 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 276 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 276 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 276 "bag.m"
{
#line 276 "bag.m"
  {
#line 276 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 276 "bag.m"
    MR_Integer mercury__bag__CastX_5 = (MR_Integer) mercury__bag__HeadVar__1_1;
#line 276 "bag.m"
    MR_Integer mercury__bag__CastY_6 = (MR_Integer) mercury__bag__HeadVar__2_2;

#line 276 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_5 == mercury__bag__CastY_6);
#line 276 "bag.m"
    if (mercury__bag__succeeded)
#line 276 "bag.m"
      mercury__bag__succeeded = MR_TRUE;
#line 276 "bag.m"
    else
#line 276 "bag.m"
      {
#line 276 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 276 "bag.m"
        MR_Word mercury__bag__V_3_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 276 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 1261 "bag.c"
        {
#line 1263 "bag.c"
          return mercury__bag__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__V_3_3, mercury__bag__V_4_4);
        }
#line 276 "bag.m"
      }
#line 276 "bag.m"
    return mercury__bag__succeeded;
#line 276 "bag.m"
  }
#line 276 "bag.m"
}

#line 530 "bag.m"
void MR_CALL 
mercury__bag__intersect_2_4_p_0(
#line 530 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_18,
#line 530 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 530 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 530 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3,
#line 530 "bag.m"
  MR_Word * mercury__bag__Out_8)
#line 530 "bag.m"
{
#line 533 "bag.m"
  while (MR_TRUE)
#line 533 "bag.m"
    {
#line 533 "bag.m"
      /* tailcall optimized into a loop */
#line 533 "bag.m"
      {
#line 533 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 533 "bag.m"
        MR_Word mercury__bag__A_5 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 533 "bag.m"
        MR_Word mercury__bag__B_6 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 533 "bag.m"
        MR_Word mercury__bag__Out0_7 = (MR_Word) mercury__bag__HeadVar__3_3;
#line 542 "bag.m"
        MR_Box mercury__bag__Key_9;
#line 542 "bag.m"
        MR_Integer mercury__bag__AVal_10;
#line 542 "bag.m"
        MR_Word mercury__bag__A0_11;
#line 534 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_30;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0_AVal_10;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_18, mercury__bag__TypeCtorInfo_19_19, mercury__bag__A_5, &mercury__bag__Key_9, &mercury__bag__conv0_AVal_10, &mercury__bag__A0_11, &mercury__bag__V_9_30);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag__AVal_10 = ((MR_Integer) mercury__bag__conv0_AVal_10);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 542 "bag.m"
        if (mercury__bag__succeeded)
#line 540 "bag.m"
          {
#line 540 "bag.m"
            MR_Word mercury__bag__Out1_14;
#line 540 "bag.m"
            MR_Word mercury__bag__V_15_15;
#line 540 "bag.m"
            MR_Word mercury__bag__V_17_17;
#line 538 "bag.m"
            MR_Integer mercury__bag__BVal_12;
#line 535 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
            MR_Box mercury__bag__conv1_BVal_12;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_18, mercury__bag__TypeCtorInfo_20_20, mercury__bag__B_6, mercury__bag__Key_9, &mercury__bag__conv1_BVal_12);
            }
#line 37 "map.opt"
            if (mercury__bag__succeeded)
#line 37 "map.opt"
              {
#line 37 "map.opt"
                mercury__bag__BVal_12 = ((MR_Integer) mercury__bag__conv1_BVal_12);
#line 37 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
              }
#line 538 "bag.m"
            if (mercury__bag__succeeded)
#line 536 "bag.m"
              {
#line 536 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_21_21;
#line 536 "bag.m"
                MR_Integer mercury__bag__Val_13;

#line 85 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AVal_10 < mercury__bag__BVal_12);
#line 88 "int.opt"
                if (mercury__bag__succeeded)
#line 87 "int.opt"
                  mercury__bag__Val_13 = mercury__bag__AVal_10;
#line 88 "int.opt"
                else
#line 89 "int.opt"
                  mercury__bag__Val_13 = mercury__bag__BVal_12;
#line 1385 "bag.c"
                mercury__bag__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 537 "bag.m"
                {
#line 537 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_18, mercury__bag__TypeCtorInfo_21_21, mercury__bag__Key_9, ((MR_Box) (mercury__bag__Val_13)), mercury__bag__Out0_7, &mercury__bag__Out1_14);
                }
#line 536 "bag.m"
              }
#line 538 "bag.m"
            else
#line 539 "bag.m"
              mercury__bag__Out1_14 = mercury__bag__Out0_7;
#line 541 "bag.m"
            mercury__bag__V_15_15 = (MR_Word) mercury__bag__A0_11;
#line 541 "bag.m"
            mercury__bag__V_17_17 = (MR_Word) mercury__bag__Out1_14;
#line 541 "bag.m"
            /* direct tailcall eliminated */
#line 541 "bag.m"
            {
#line 541 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_15_15;
#line 541 "bag.m"
              MR_Word mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_17_17;

#line 541 "bag.m"
              mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 541 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 541 "bag.m"
            }
#line 541 "bag.m"
            continue;
#line 540 "bag.m"
          }
#line 542 "bag.m"
        else
#line 543 "bag.m"
          *mercury__bag__Out_8 = mercury__bag__HeadVar__3_3;
#line 533 "bag.m"
      }
#line 533 "bag.m"
      break;
#line 533 "bag.m"
    }
#line 530 "bag.m"
}

#line 367 "bag.m"
void MR_CALL 
mercury__bag__to_list_2_2_p_0(
#line 367 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 367 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 367 "bag.m"
  MR_Word * mercury__bag__HeadVar__2_2)
#line 367 "bag.m"
{
#line 369 "bag.m"
  while (MR_TRUE)
#line 369 "bag.m"
    {
#line 369 "bag.m"
      /* tailcall optimized into a loop */
#line 369 "bag.m"
      {
#line 369 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 369 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "bag.m"
          *mercury__bag__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "bag.m"
        else
#line 370 "bag.m"
          {
#line 370 "bag.m"
            MR_Box mercury__bag__X_3;
#line 370 "bag.m"
            MR_Integer mercury__bag__Int_4;
#line 370 "bag.m"
            MR_Word mercury__bag__Xs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 370 "bag.m"
            MR_Word mercury__bag__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));

#line 370 "bag.m"
            mercury__bag__X_3 = (MR_hl_field(MR_mktag(0), mercury__bag__V_9_9, (MR_Integer) 0));
#line 370 "bag.m"
            mercury__bag__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_9_9, (MR_Integer) 1)));
#line 371 "bag.m"
            mercury__bag__succeeded = (mercury__bag__Int_4 <= (MR_Integer) 0);
#line 373 "bag.m"
            if (mercury__bag__succeeded)
#line 372 "bag.m"
              {
#line 372 "bag.m"
                /* direct tailcall eliminated */
#line 372 "bag.m"
                {
#line 372 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_5;

#line 372 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 372 "bag.m"
                }
#line 372 "bag.m"
                continue;
#line 372 "bag.m"
              }
#line 373 "bag.m"
            else
#line 374 "bag.m"
              {
#line 374 "bag.m"
                MR_Integer mercury__bag__NewInt_7 = (mercury__bag__Int_4 - (MR_Integer) 1);
#line 374 "bag.m"
                MR_Word mercury__bag__Out0_8;
#line 374 "bag.m"
                MR_Word mercury__bag__V_12_12;
#line 374 "bag.m"
                MR_Word mercury__bag__V_13_13;

#line 375 "bag.m"
                {
#line 375 "bag.m"
                  mercury__bag__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "bag.m"
                  MR_hl_field(MR_mktag(0), mercury__bag__V_13_13, 0) = mercury__bag__X_3;
#line 375 "bag.m"
                  MR_hl_field(MR_mktag(0), mercury__bag__V_13_13, 1) = ((MR_Box) (mercury__bag__NewInt_7));
#line 375 "bag.m"
                }
#line 375 "bag.m"
                {
#line 375 "bag.m"
                  mercury__bag__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__V_12_12, 0) = ((MR_Box) (mercury__bag__V_13_13));
#line 375 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__V_12_12, 1) = ((MR_Box) (mercury__bag__Xs_5));
#line 375 "bag.m"
                }
#line 375 "bag.m"
                {
#line 375 "bag.m"
                  mercury__bag__to_list_2_2_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__V_12_12, &mercury__bag__Out0_8);
                }
#line 376 "bag.m"
                {
#line 376 "bag.m"
                  MR_Word base;
#line 376 "bag.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "bag.m"
                  *mercury__bag__HeadVar__2_2 = base;
#line 376 "bag.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__bag__X_3;
#line 376 "bag.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bag__Out0_8));
#line 376 "bag.m"
                }
#line 374 "bag.m"
              }
#line 370 "bag.m"
          }
#line 369 "bag.m"
      }
#line 369 "bag.m"
      break;
#line 369 "bag.m"
    }
#line 367 "bag.m"
}

#line 243 "bag.m"
MR_bool MR_CALL 
mercury__bag__subset_compare_3_p_0(
#line 243 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_19,
#line 243 "bag.m"
  MR_Word * mercury__bag__Res_4,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 243 "bag.m"
{
#line 601 "bag.m"
  while (MR_TRUE)
#line 601 "bag.m"
    {
#line 601 "bag.m"
      /* tailcall optimized into a loop */
#line 601 "bag.m"
      {
#line 601 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 601 "bag.m"
        MR_Word mercury__bag__A_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 601 "bag.m"
        MR_Word mercury__bag__B_6 = (MR_Word) mercury__bag__HeadVar__3_3;
#line 621 "bag.m"
        MR_Box mercury__bag__Key_7;
#line 621 "bag.m"
        MR_Integer mercury__bag__AVal_8;
#line 621 "bag.m"
        MR_Word mercury__bag__A0_9;
#line 602 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_32;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0_AVal_8;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_19, mercury__bag__TypeCtorInfo_20_20, mercury__bag__A_5, &mercury__bag__Key_7, &mercury__bag__conv0_AVal_8, &mercury__bag__A0_9, &mercury__bag__V_9_32);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag__AVal_8 = ((MR_Integer) mercury__bag__conv0_AVal_8);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 621 "bag.m"
        if (mercury__bag__succeeded)
#line 617 "bag.m"
          {
#line 617 "bag.m"
            MR_Integer mercury__bag__BVal_10;
#line 617 "bag.m"
            MR_Word mercury__bag__B0_11;
#line 603 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 62 "tree234.opt"
            MR_Word mercury__bag__V_9_41;
#line 62 "tree234.opt"
            MR_Box mercury__bag__conv1_BVal_10;

#line 62 "tree234.opt"
            {
#line 62 "tree234.opt"
              mercury__bag__succeeded = mercury__tree234__remove_2_5_p_0(mercury__bag__TypeInfo_for_T_19, mercury__bag__TypeCtorInfo_21_21, mercury__bag__B_6, mercury__bag__Key_7, &mercury__bag__conv1_BVal_10, &mercury__bag__B0_11, &mercury__bag__V_9_41);
            }
#line 62 "tree234.opt"
            if (mercury__bag__succeeded)
#line 62 "tree234.opt"
              {
#line 62 "tree234.opt"
                mercury__bag__BVal_10 = ((MR_Integer) mercury__bag__conv1_BVal_10);
#line 62 "tree234.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 62 "tree234.opt"
              }
#line 617 "bag.m"
            if (mercury__bag__succeeded)
#line 604 "bag.m"
              {
#line 604 "bag.m"
                MR_Word mercury__bag__ValRes_12;

#line 66 "private_builtin.opt"
                mercury__bag__succeeded = (mercury__bag__AVal_8 < mercury__bag__BVal_10);
#line 69 "private_builtin.opt"
                if (mercury__bag__succeeded)
#line 68 "private_builtin.opt"
                  mercury__bag__ValRes_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__bag__succeeded = (mercury__bag__AVal_8 == mercury__bag__BVal_10);
#line 74 "private_builtin.opt"
                    if (mercury__bag__succeeded)
#line 73 "private_builtin.opt"
                      mercury__bag__ValRes_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__bag__ValRes_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 609 "bag.m"
                if ((mercury__bag__ValRes_12 == (MR_Integer) 1))
#line 613 "bag.m"
                  {
#line 613 "bag.m"
                    MR_Word mercury__bag__V_13_13 = (MR_Word) mercury__bag__A0_9;
#line 613 "bag.m"
                    MR_Word mercury__bag__V_14_14 = (MR_Word) mercury__bag__B0_11;
#line 613 "bag.m"
                    MR_Word mercury__bag__SubBag0_47;
#line 613 "bag.m"
                    MR_Word mercury__bag__Bag_48;

#line 573 "bag.m"
                    {
#line 573 "bag.m"
                      mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_19, mercury__bag__V_13_13, mercury__bag__V_14_14, &mercury__bag__SubBag0_47);
                    }
#line 578 "bag.m"
                    mercury__bag__Bag_48 = (MR_Word) mercury__bag__SubBag0_47;
#line 52 "tree234.opt"
                    mercury__bag__succeeded = (mercury__bag__Bag_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "bag.m"
                    if (mercury__bag__succeeded)
#line 613 "bag.m"
                      {
#line 615 "bag.m"
                        *mercury__bag__Res_4 = (MR_Integer) 1;
#line 615 "bag.m"
                        mercury__bag__succeeded = MR_TRUE;
#line 613 "bag.m"
                      }
#line 613 "bag.m"
                  }
#line 609 "bag.m"
                else
#line 609 "bag.m"
                  if ((mercury__bag__ValRes_12 == (MR_Integer) 0))
#line 610 "bag.m"
                    {
#line 610 "bag.m"
                      MR_Word mercury__bag__V_15_15 = (MR_Word) mercury__bag__A0_9;
#line 610 "bag.m"
                      MR_Word mercury__bag__V_16_16 = (MR_Word) mercury__bag__B0_11;

#line 611 "bag.m"
                      /* direct tailcall eliminated */
#line 611 "bag.m"
                      {
#line 611 "bag.m"
                        MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_15_15;
#line 611 "bag.m"
                        MR_Word mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_16_16;

#line 611 "bag.m"
                        mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 611 "bag.m"
                        mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 611 "bag.m"
                      }
#line 611 "bag.m"
                      continue;
#line 610 "bag.m"
                    }
#line 609 "bag.m"
                  else
#line 606 "bag.m"
                    {
#line 606 "bag.m"
                      MR_Word mercury__bag__V_17_17 = (MR_Word) mercury__bag__B0_11;
#line 606 "bag.m"
                      MR_Word mercury__bag__V_18_18 = (MR_Word) mercury__bag__A0_9;
#line 606 "bag.m"
                      MR_Word mercury__bag__SubBag0_56;
#line 606 "bag.m"
                      MR_Word mercury__bag__Bag_57;

#line 573 "bag.m"
                      {
#line 573 "bag.m"
                        mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_19, mercury__bag__V_17_17, mercury__bag__V_18_18, &mercury__bag__SubBag0_56);
                      }
#line 578 "bag.m"
                      mercury__bag__Bag_57 = (MR_Word) mercury__bag__SubBag0_56;
#line 52 "tree234.opt"
                      mercury__bag__succeeded = (mercury__bag__Bag_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "bag.m"
                      if (mercury__bag__succeeded)
#line 606 "bag.m"
                        {
#line 608 "bag.m"
                          *mercury__bag__Res_4 = (MR_Integer) 2;
#line 608 "bag.m"
                          mercury__bag__succeeded = MR_TRUE;
#line 606 "bag.m"
                        }
#line 606 "bag.m"
                    }
#line 604 "bag.m"
              }
#line 617 "bag.m"
            else
#line 619 "bag.m"
              {
#line 619 "bag.m"
                *mercury__bag__Res_4 = (MR_Integer) 2;
#line 619 "bag.m"
                mercury__bag__succeeded = MR_TRUE;
#line 619 "bag.m"
              }
#line 617 "bag.m"
          }
#line 621 "bag.m"
        else
#line 625 "bag.m"
          {
#line 52 "tree234.opt"
            mercury__bag__succeeded = (mercury__bag__B_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "bag.m"
            if (mercury__bag__succeeded)
#line 624 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 0;
#line 625 "bag.m"
            else
#line 626 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 1;
#line 625 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 625 "bag.m"
          }
#line 601 "bag.m"
        return mercury__bag__succeeded;
#line 601 "bag.m"
      }
#line 601 "bag.m"
      break;
#line 601 "bag.m"
    }
#line 243 "bag.m"
}

#line 234 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_smallest_3_p_0(
#line 234 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 234 "bag.m"
  MR_Box * mercury__bag__Item_4,
#line 234 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 234 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 234 "bag.m"
{
#line 583 "bag.m"
  {
#line 583 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 583 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 583 "bag.m"
    MR_Integer mercury__bag__Val_6;
#line 583 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 583 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
#line 583 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_10_10;
#line 64 "tree234.opt"
    MR_Word mercury__bag__V_9_24;
#line 64 "tree234.opt"
    MR_Box mercury__bag__conv0_Val_6;
#line 585 "bag.m"
    MR_Integer mercury__bag__V_11_11;

#line 64 "tree234.opt"
    {
#line 64 "tree234.opt"
      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__conv0_Val_6, &mercury__bag__STATE_VARIABLE_Bag_10_10, &mercury__bag__V_9_24);
    }
#line 64 "tree234.opt"
    if (mercury__bag__succeeded)
#line 64 "tree234.opt"
      {
#line 64 "tree234.opt"
        mercury__bag__Val_6 = ((MR_Integer) mercury__bag__conv0_Val_6);
#line 64 "tree234.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
      }
#line 583 "bag.m"
    if (mercury__bag__succeeded)
#line 583 "bag.m"
      {
#line 585 "bag.m"
        mercury__bag__V_11_11 = (MR_Integer) 1;
#line 585 "bag.m"
        mercury__bag__succeeded = (mercury__bag__Val_6 > mercury__bag__V_11_11);
#line 588 "bag.m"
        if (mercury__bag__succeeded)
#line 586 "bag.m"
          {
#line 586 "bag.m"
            MR_Integer mercury__bag__NewVal_7 = (mercury__bag__Val_6 - (MR_Integer) 1);

#line 587 "bag.m"
            {
#line 587 "bag.m"
              mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, *mercury__bag__Item_4, ((MR_Box) (mercury__bag__NewVal_7)), mercury__bag__STATE_VARIABLE_Bag_10_10, &mercury__bag__STATE_VARIABLE_Bag_9);
            }
#line 586 "bag.m"
          }
#line 588 "bag.m"
        else
#line 587 "bag.m"
          mercury__bag__STATE_VARIABLE_Bag_9 = mercury__bag__STATE_VARIABLE_Bag_10_10;
#line 583 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_9;
#line 583 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 583 "bag.m"
      }
#line 583 "bag.m"
    return mercury__bag__succeeded;
#line 583 "bag.m"
  }
#line 234 "bag.m"
}

#line 230 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_empty_1_p_0(
#line 230 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3,
#line 230 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 230 "bag.m"
{
#line 578 "bag.m"
  {
#line 578 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 578 "bag.m"
    MR_Word mercury__bag__Bag_2 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 52 "tree234.opt"
    mercury__bag__succeeded = (mercury__bag__Bag_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "bag.m"
    return mercury__bag__succeeded;
#line 578 "bag.m"
  }
#line 230 "bag.m"
}

#line 226 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_subbag_2_p_0(
#line 226 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 226 "bag.m"
  MR_Word mercury__bag__SubBag_3,
#line 226 "bag.m"
  MR_Word mercury__bag__BigBag_4)
#line 226 "bag.m"
{
#line 572 "bag.m"
  {
#line 572 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 572 "bag.m"
    MR_Word mercury__bag__SubBag0_5;
#line 572 "bag.m"
    MR_Word mercury__bag__Bag_7;

#line 573 "bag.m"
    {
#line 573 "bag.m"
      mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__SubBag_3, mercury__bag__BigBag_4, &mercury__bag__SubBag0_5);
    }
#line 578 "bag.m"
    mercury__bag__Bag_7 = (MR_Word) mercury__bag__SubBag0_5;
#line 52 "tree234.opt"
    mercury__bag__succeeded = (mercury__bag__Bag_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "bag.m"
    return mercury__bag__succeeded;
#line 572 "bag.m"
  }
#line 226 "bag.m"
}

#line 217 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_3_p_0(
#line 217 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 217 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 217 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 217 "bag.m"
  MR_Word * mercury__bag__Out_6)
#line 217 "bag.m"
{
#line 557 "bag.m"
  while (MR_TRUE)
#line 557 "bag.m"
    {
#line 557 "bag.m"
      /* tailcall optimized into a loop */
#line 557 "bag.m"
      {
#line 557 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 557 "bag.m"
        MR_Word mercury__bag__A_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 557 "bag.m"
        MR_Word mercury__bag__B_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 566 "bag.m"
        MR_Box mercury__bag__Key_7;
#line 566 "bag.m"
        MR_Integer mercury__bag__BVal_8;
#line 566 "bag.m"
        MR_Word mercury__bag__B0_9;
#line 558 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_28;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0_BVal_8;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_16_16, mercury__bag__B_5, &mercury__bag__Key_7, &mercury__bag__conv0_BVal_8, &mercury__bag__B0_9, &mercury__bag__V_9_28);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag__BVal_8 = ((MR_Integer) mercury__bag__conv0_BVal_8);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 566 "bag.m"
        if (mercury__bag__succeeded)
#line 564 "bag.m"
          {
#line 564 "bag.m"
            MR_Word mercury__bag__A0_12;
#line 564 "bag.m"
            MR_Word mercury__bag__V_13_13;
#line 564 "bag.m"
            MR_Word mercury__bag__V_14_14;
#line 562 "bag.m"
            MR_Integer mercury__bag__AVal_10;
#line 559 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
            MR_Box mercury__bag__conv1_AVal_10;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_17_17, mercury__bag__A_4, mercury__bag__Key_7, &mercury__bag__conv1_AVal_10);
            }
#line 37 "map.opt"
            if (mercury__bag__succeeded)
#line 37 "map.opt"
              {
#line 37 "map.opt"
                mercury__bag__AVal_10 = ((MR_Integer) mercury__bag__conv1_AVal_10);
#line 37 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
              }
#line 562 "bag.m"
            if (mercury__bag__succeeded)
#line 560 "bag.m"
              {
#line 560 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_18_18;
#line 560 "bag.m"
                MR_Integer mercury__bag__NewVal_11;

#line 75 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AVal_10 > mercury__bag__BVal_8);
#line 78 "int.opt"
                if (mercury__bag__succeeded)
#line 77 "int.opt"
                  mercury__bag__NewVal_11 = mercury__bag__AVal_10;
#line 78 "int.opt"
                else
#line 79 "int.opt"
                  mercury__bag__NewVal_11 = mercury__bag__BVal_8;
#line 2073 "bag.c"
                mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 561 "bag.m"
                {
#line 561 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_18_18, mercury__bag__Key_7, ((MR_Box) (mercury__bag__NewVal_11)), mercury__bag__A_4, &mercury__bag__A0_12);
                }
#line 560 "bag.m"
              }
#line 562 "bag.m"
            else
#line 563 "bag.m"
              {
#line 563 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 563 "bag.m"
                {
#line 563 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_19_19, mercury__bag__Key_7, ((MR_Box) (mercury__bag__BVal_8)), mercury__bag__A_4, &mercury__bag__A0_12);
                }
#line 563 "bag.m"
              }
#line 565 "bag.m"
            mercury__bag__V_13_13 = (MR_Word) mercury__bag__A0_12;
#line 565 "bag.m"
            mercury__bag__V_14_14 = (MR_Word) mercury__bag__B0_9;
#line 565 "bag.m"
            /* direct tailcall eliminated */
#line 565 "bag.m"
            {
#line 565 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_13_13;
#line 565 "bag.m"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_14_14;

#line 565 "bag.m"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 565 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 565 "bag.m"
            }
#line 565 "bag.m"
            continue;
#line 564 "bag.m"
          }
#line 566 "bag.m"
        else
#line 567 "bag.m"
          *mercury__bag__Out_6 = mercury__bag__HeadVar__1_1;
#line 557 "bag.m"
      }
#line 557 "bag.m"
      break;
#line 557 "bag.m"
    }
#line 217 "bag.m"
}

#line 216 "bag.m"
MR_Word MR_CALL 
mercury__bag__least_upper_bound_2_f_0(
#line 216 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 216 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 216 "bag.m"
  MR_Word mercury__bag__B2_5)
#line 216 "bag.m"
{
#line 555 "bag.m"
  {
#line 555 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 555 "bag.m"
    MR_Word mercury__bag__B3_6;

#line 555 "bag.m"
    {
#line 555 "bag.m"
      mercury__bag__least_upper_bound_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__B1_4, mercury__bag__B2_5, &mercury__bag__B3_6);
    }
#line 555 "bag.m"
    return mercury__bag__B3_6;
#line 555 "bag.m"
  }
#line 216 "bag.m"
}

#line 207 "bag.m"
MR_bool MR_CALL 
mercury__bag__intersect_2_p_0(
#line 207 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 207 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 207 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 207 "bag.m"
{
#line 546 "bag.m"
  while (MR_TRUE)
#line 546 "bag.m"
    {
#line 546 "bag.m"
      /* tailcall optimized into a loop */
#line 546 "bag.m"
      {
#line 546 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 546 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 546 "bag.m"
        MR_Word mercury__bag__A_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 546 "bag.m"
        MR_Word mercury__bag__B_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 546 "bag.m"
        MR_Box mercury__bag__Key_5;
#line 546 "bag.m"
        MR_Word mercury__bag__A0_7;
#line 64 "tree234.opt"
        MR_Integer mercury__bag___AVal_6;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_20;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0__AVal_6;
#line 37 "map.opt"
        MR_Integer mercury__bag__V_5_23;
#line 37 "map.opt"
        MR_Box mercury__bag__conv1_V_5_23;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__A_3, &mercury__bag__Key_5, &mercury__bag__conv0__AVal_6, &mercury__bag__A0_7, &mercury__bag__V_9_20);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag___AVal_6 = ((MR_Integer) mercury__bag__conv0__AVal_6);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 546 "bag.m"
        if (mercury__bag__succeeded)
#line 546 "bag.m"
          {
#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__B_4, mercury__bag__Key_5, &mercury__bag__conv1_V_5_23);
            }
#line 37 "map.opt"
            if (mercury__bag__succeeded)
#line 37 "map.opt"
              {
#line 37 "map.opt"
                mercury__bag__V_5_23 = ((MR_Integer) mercury__bag__conv1_V_5_23);
#line 37 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
              }
#line 550 "bag.m"
            if (mercury__bag__succeeded)
#line 549 "bag.m"
              mercury__bag__succeeded = MR_TRUE;
#line 550 "bag.m"
            else
#line 551 "bag.m"
              {
#line 551 "bag.m"
                MR_Word mercury__bag__V_8_8 = (MR_Word) mercury__bag__A0_7;

#line 551 "bag.m"
                /* direct tailcall eliminated */
#line 551 "bag.m"
                {
#line 551 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_8_8;

#line 551 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 551 "bag.m"
                }
#line 551 "bag.m"
                continue;
#line 551 "bag.m"
              }
#line 546 "bag.m"
          }
#line 546 "bag.m"
        return mercury__bag__succeeded;
#line 546 "bag.m"
      }
#line 546 "bag.m"
      break;
#line 546 "bag.m"
    }
#line 207 "bag.m"
}

#line 202 "bag.m"
void MR_CALL 
mercury__bag__intersect_3_p_0(
#line 202 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 202 "bag.m"
  MR_Word mercury__bag__A_4,
#line 202 "bag.m"
  MR_Word mercury__bag__B_5,
#line 202 "bag.m"
  MR_Word * mercury__bag__Out_6)
#line 202 "bag.m"
{
#line 526 "bag.m"
  {
#line 526 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 526 "bag.m"
    MR_Word mercury__bag__Out0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "bag.m"
    MR_Word mercury__bag__Bag_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 528 "bag.m"
    {
#line 528 "bag.m"
      mercury__bag__intersect_2_4_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__A_4, mercury__bag__B_5, mercury__bag__Out0_7, mercury__bag__Out_6);
#line 528 "bag.m"
      return;
    }
#line 526 "bag.m"
  }
#line 202 "bag.m"
}

#line 201 "bag.m"
MR_Word MR_CALL 
mercury__bag__intersect_2_f_0(
#line 201 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 201 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 201 "bag.m"
  MR_Word mercury__bag__B2_5)
#line 201 "bag.m"
{
#line 526 "bag.m"
  {
#line 526 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 526 "bag.m"
    MR_Word mercury__bag__B3_6;
#line 526 "bag.m"
    MR_Word mercury__bag__Out0_11 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "bag.m"
    MR_Word mercury__bag__Bag_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 528 "bag.m"
    {
#line 528 "bag.m"
      mercury__bag__intersect_2_4_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__B1_4, mercury__bag__B2_5, mercury__bag__Out0_11, &mercury__bag__B3_6);
    }
#line 526 "bag.m"
    return mercury__bag__B3_6;
#line 526 "bag.m"
  }
#line 201 "bag.m"
}

#line 195 "bag.m"
void MR_CALL 
mercury__bag__union_3_p_0(
#line 195 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 195 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 195 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 195 "bag.m"
  MR_Word * mercury__bag__Out_6)
#line 195 "bag.m"
{
#line 510 "bag.m"
  while (MR_TRUE)
#line 510 "bag.m"
    {
#line 510 "bag.m"
      /* tailcall optimized into a loop */
#line 510 "bag.m"
      {
#line 510 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 510 "bag.m"
        MR_Word mercury__bag__A_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 510 "bag.m"
        MR_Word mercury__bag__B_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 519 "bag.m"
        MR_Box mercury__bag__Key_7;
#line 519 "bag.m"
        MR_Integer mercury__bag__BVal_8;
#line 519 "bag.m"
        MR_Word mercury__bag__B0_9;
#line 511 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_28;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0_BVal_8;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_16_16, mercury__bag__B_5, &mercury__bag__Key_7, &mercury__bag__conv0_BVal_8, &mercury__bag__B0_9, &mercury__bag__V_9_28);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag__BVal_8 = ((MR_Integer) mercury__bag__conv0_BVal_8);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 519 "bag.m"
        if (mercury__bag__succeeded)
#line 517 "bag.m"
          {
#line 517 "bag.m"
            MR_Word mercury__bag__A0_12;
#line 517 "bag.m"
            MR_Word mercury__bag__V_13_13;
#line 517 "bag.m"
            MR_Word mercury__bag__V_14_14;
#line 515 "bag.m"
            MR_Integer mercury__bag__AVal_10;
#line 512 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
            MR_Box mercury__bag__conv1_AVal_10;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_17_17, mercury__bag__A_4, mercury__bag__Key_7, &mercury__bag__conv1_AVal_10);
            }
#line 37 "map.opt"
            if (mercury__bag__succeeded)
#line 37 "map.opt"
              {
#line 37 "map.opt"
                mercury__bag__AVal_10 = ((MR_Integer) mercury__bag__conv1_AVal_10);
#line 37 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
              }
#line 515 "bag.m"
            if (mercury__bag__succeeded)
#line 513 "bag.m"
              {
#line 513 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 513 "bag.m"
                MR_Integer mercury__bag__NewVal_11 = (mercury__bag__AVal_10 + mercury__bag__BVal_8);

#line 514 "bag.m"
                {
#line 514 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_18_18, mercury__bag__Key_7, ((MR_Box) (mercury__bag__NewVal_11)), mercury__bag__A_4, &mercury__bag__A0_12);
                }
#line 513 "bag.m"
              }
#line 515 "bag.m"
            else
#line 516 "bag.m"
              {
#line 516 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 516 "bag.m"
                {
#line 516 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_15, mercury__bag__TypeCtorInfo_19_19, mercury__bag__Key_7, ((MR_Box) (mercury__bag__BVal_8)), mercury__bag__A_4, &mercury__bag__A0_12);
                }
#line 516 "bag.m"
              }
#line 518 "bag.m"
            mercury__bag__V_13_13 = (MR_Word) mercury__bag__A0_12;
#line 518 "bag.m"
            mercury__bag__V_14_14 = (MR_Word) mercury__bag__B0_9;
#line 518 "bag.m"
            /* direct tailcall eliminated */
#line 518 "bag.m"
            {
#line 518 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_13_13;
#line 518 "bag.m"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_14_14;

#line 518 "bag.m"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 518 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 518 "bag.m"
            }
#line 518 "bag.m"
            continue;
#line 517 "bag.m"
          }
#line 519 "bag.m"
        else
#line 520 "bag.m"
          *mercury__bag__Out_6 = mercury__bag__HeadVar__1_1;
#line 510 "bag.m"
      }
#line 510 "bag.m"
      break;
#line 510 "bag.m"
    }
#line 195 "bag.m"
}

#line 194 "bag.m"
MR_Word MR_CALL 
mercury__bag__union_2_f_0(
#line 194 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 194 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 194 "bag.m"
  MR_Word mercury__bag__B2_5)
#line 194 "bag.m"
{
#line 508 "bag.m"
  {
#line 508 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 508 "bag.m"
    MR_Word mercury__bag__B3_6;

#line 508 "bag.m"
    {
#line 508 "bag.m"
      mercury__bag__union_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__B1_4, mercury__bag__B2_5, &mercury__bag__B3_6);
    }
#line 508 "bag.m"
    return mercury__bag__B3_6;
#line 508 "bag.m"
  }
#line 194 "bag.m"
}

#line 187 "bag.m"
void MR_CALL 
mercury__bag__subtract_3_p_0(
#line 187 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 187 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 187 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 187 "bag.m"
  MR_Word * mercury__bag__Bag_6)
#line 187 "bag.m"
{
#line 490 "bag.m"
  while (MR_TRUE)
#line 490 "bag.m"
    {
#line 490 "bag.m"
      /* tailcall optimized into a loop */
#line 490 "bag.m"
      {
#line 490 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 490 "bag.m"
        MR_Word mercury__bag__Bag0_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 490 "bag.m"
        MR_Word mercury__bag__SubBag_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 503 "bag.m"
        MR_Box mercury__bag__SubKey_7;
#line 503 "bag.m"
        MR_Integer mercury__bag__SubVal_8;
#line 503 "bag.m"
        MR_Word mercury__bag__SubBag0_9;
#line 491 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 64 "tree234.opt"
        MR_Word mercury__bag__V_9_30;
#line 64 "tree234.opt"
        MR_Box mercury__bag__conv0_SubVal_8;

#line 64 "tree234.opt"
        {
#line 64 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_18_18, mercury__bag__SubBag_5, &mercury__bag__SubKey_7, &mercury__bag__conv0_SubVal_8, &mercury__bag__SubBag0_9, &mercury__bag__V_9_30);
        }
#line 64 "tree234.opt"
        if (mercury__bag__succeeded)
#line 64 "tree234.opt"
          {
#line 64 "tree234.opt"
            mercury__bag__SubVal_8 = ((MR_Integer) mercury__bag__conv0_SubVal_8);
#line 64 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 64 "tree234.opt"
          }
#line 503 "bag.m"
        if (mercury__bag__succeeded)
#line 501 "bag.m"
          {
#line 501 "bag.m"
            MR_Word mercury__bag__Bag1_12;
#line 501 "bag.m"
            MR_Word mercury__bag__V_15_15;
#line 501 "bag.m"
            MR_Word mercury__bag__V_16_16;
#line 499 "bag.m"
            MR_Integer mercury__bag__Val_10;
#line 492 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
            MR_Box mercury__bag__conv1_Val_10;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_19_19, mercury__bag__Bag0_4, mercury__bag__SubKey_7, &mercury__bag__conv1_Val_10);
            }
#line 37 "map.opt"
            if (mercury__bag__succeeded)
#line 37 "map.opt"
              {
#line 37 "map.opt"
                mercury__bag__Val_10 = ((MR_Integer) mercury__bag__conv1_Val_10);
#line 37 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
              }
#line 499 "bag.m"
            if (mercury__bag__succeeded)
#line 493 "bag.m"
              {
#line 493 "bag.m"
                MR_Integer mercury__bag__NewVal_11 = (mercury__bag__Val_10 - mercury__bag__SubVal_8);

#line 494 "bag.m"
                mercury__bag__succeeded = (mercury__bag__NewVal_11 > (MR_Integer) 0);
#line 496 "bag.m"
                if (mercury__bag__succeeded)
#line 495 "bag.m"
                  {
#line 495 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 495 "bag.m"
                    {
#line 495 "bag.m"
                      mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__SubKey_7, ((MR_Box) (mercury__bag__NewVal_11)), mercury__bag__Bag0_4, &mercury__bag__Bag1_12);
                    }
#line 495 "bag.m"
                  }
#line 496 "bag.m"
                else
#line 497 "bag.m"
                  {
#line 497 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 497 "bag.m"
                    MR_Integer mercury__bag___Val_13;
#line 497 "bag.m"
                    MR_Box mercury__bag__conv2__Val_13;

#line 497 "bag.m"
                    {
#line 497 "bag.m"
                      mercury__map__det_remove_4_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_21_21, mercury__bag__SubKey_7, &mercury__bag__conv2__Val_13, mercury__bag__Bag0_4, &mercury__bag__Bag1_12);
                    }
#line 497 "bag.m"
                    mercury__bag___Val_13 = ((MR_Integer) mercury__bag__conv2__Val_13);
#line 497 "bag.m"
                  }
#line 493 "bag.m"
              }
#line 499 "bag.m"
            else
#line 500 "bag.m"
              mercury__bag__Bag1_12 = mercury__bag__Bag0_4;
#line 502 "bag.m"
            mercury__bag__V_15_15 = (MR_Word) mercury__bag__Bag1_12;
#line 502 "bag.m"
            mercury__bag__V_16_16 = (MR_Word) mercury__bag__SubBag0_9;
#line 502 "bag.m"
            /* direct tailcall eliminated */
#line 502 "bag.m"
            {
#line 502 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_15_15;
#line 502 "bag.m"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_16_16;

#line 502 "bag.m"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 502 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 502 "bag.m"
            }
#line 502 "bag.m"
            continue;
#line 501 "bag.m"
          }
#line 503 "bag.m"
        else
#line 504 "bag.m"
          *mercury__bag__Bag_6 = mercury__bag__HeadVar__1_1;
#line 490 "bag.m"
      }
#line 490 "bag.m"
      break;
#line 490 "bag.m"
    }
#line 187 "bag.m"
}

#line 186 "bag.m"
MR_Word MR_CALL 
mercury__bag__subtract_2_f_0(
#line 186 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 186 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 186 "bag.m"
  MR_Word mercury__bag__B2_5)
#line 186 "bag.m"
{
#line 488 "bag.m"
  {
#line 488 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 488 "bag.m"
    MR_Word mercury__bag__B3_6;

#line 488 "bag.m"
    {
#line 488 "bag.m"
      mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__B1_4, mercury__bag__B2_5, &mercury__bag__B3_6);
    }
#line 488 "bag.m"
    return mercury__bag__B3_6;
#line 488 "bag.m"
  }
#line 186 "bag.m"
}

#line 177 "bag.m"
void MR_CALL 
mercury__bag__count_value_3_p_0(
#line 177 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 177 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 177 "bag.m"
  MR_Box mercury__bag__Item_5,
#line 177 "bag.m"
  MR_Integer * mercury__bag__Count_6)
#line 177 "bag.m"
{
#line 478 "bag.m"
  {
#line 478 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 478 "bag.m"
    MR_Word mercury__bag__Bag_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 481 "bag.m"
    MR_Integer mercury__bag__Count0_7;
#line 479 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_7;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__Bag_4, mercury__bag__Item_5, &mercury__bag__conv0_Count0_7);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_7 = ((MR_Integer) mercury__bag__conv0_Count0_7);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 481 "bag.m"
    if (mercury__bag__succeeded)
#line 480 "bag.m"
      *mercury__bag__Count_6 = mercury__bag__Count0_7;
#line 481 "bag.m"
    else
#line 482 "bag.m"
      *mercury__bag__Count_6 = (MR_Integer) 0;
#line 478 "bag.m"
  }
#line 177 "bag.m"
}

#line 176 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_value_2_f_0(
#line 176 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 176 "bag.m"
  MR_Word mercury__bag__B_4,
#line 176 "bag.m"
  MR_Box mercury__bag__X_5)
#line 176 "bag.m"
{
#line 478 "bag.m"
  {
#line 478 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 478 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 478 "bag.m"
    MR_Word mercury__bag__Bag_10 = (MR_Word) mercury__bag__B_4;
#line 481 "bag.m"
    MR_Integer mercury__bag__Count0_11;
#line 479 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_11;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_9_12, mercury__bag__Bag_10, mercury__bag__X_5, &mercury__bag__conv0_Count0_11);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_11 = ((MR_Integer) mercury__bag__conv0_Count0_11);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 481 "bag.m"
    if (mercury__bag__succeeded)
#line 480 "bag.m"
      mercury__bag__N_6 = mercury__bag__Count0_11;
#line 481 "bag.m"
    else
#line 482 "bag.m"
      mercury__bag__N_6 = (MR_Integer) 0;
#line 478 "bag.m"
    return mercury__bag__N_6;
#line 478 "bag.m"
  }
#line 176 "bag.m"
}

#line 172 "bag.m"
MR_bool MR_CALL 
mercury__bag__contains_2_p_0(
#line 172 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 172 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 172 "bag.m"
  MR_Box mercury__bag__Item_4)
#line 172 "bag.m"
{
#line 470 "bag.m"
  {
#line 470 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 470 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 470 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 37 "map.opt"
    MR_Integer mercury__bag__V_5_9;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_V_5_9;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Bag_3, mercury__bag__Item_4, &mercury__bag__conv0_V_5_9);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__V_5_9 = ((MR_Integer) mercury__bag__conv0_V_5_9);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 470 "bag.m"
    return mercury__bag__succeeded;
#line 470 "bag.m"
  }
#line 172 "bag.m"
}

#line 168 "bag.m"
void MR_CALL 
mercury__bag__delete_all_3_p_0(
#line 168 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 168 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 168 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 168 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 168 "bag.m"
{
#line 465 "bag.m"
  {
#line 465 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 465 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 465 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 465 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 60 "tree234.opt"
    MR_Word mercury__bag__V_7_17;

#line 60 "tree234.opt"
    {
#line 60 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__STATE_VARIABLE_Bag_0_6, mercury__bag__Item_4, &mercury__bag__STATE_VARIABLE_Bag_7, &mercury__bag__V_7_17);
    }
#line 465 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_7;
#line 465 "bag.m"
  }
#line 168 "bag.m"
}

#line 167 "bag.m"
MR_Word MR_CALL 
mercury__bag__delete_all_2_f_0(
#line 167 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 167 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 167 "bag.m"
  MR_Box mercury__bag__X_5)
#line 167 "bag.m"
{
#line 465 "bag.m"
  {
#line 465 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 465 "bag.m"
    MR_Word mercury__bag__B2_6;
#line 465 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 465 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_10 = (MR_Word) mercury__bag__B1_4;
#line 465 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_11;
#line 60 "tree234.opt"
    MR_Word mercury__bag__V_7_20;

#line 60 "tree234.opt"
    {
#line 60 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_10_13, mercury__bag__STATE_VARIABLE_Bag_0_10, mercury__bag__X_5, &mercury__bag__STATE_VARIABLE_Bag_11, &mercury__bag__V_7_20);
    }
#line 465 "bag.m"
    mercury__bag__B2_6 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_11;
#line 465 "bag.m"
    return mercury__bag__B2_6;
#line 465 "bag.m"
  }
#line 167 "bag.m"
}

#line 163 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_all_3_p_0(
#line 163 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 163 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 163 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 163 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 163 "bag.m"
{
#line 459 "bag.m"
  {
#line 459 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 459 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 459 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 459 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8;
#line 62 "tree234.opt"
    MR_Integer mercury__bag___Val_6;
#line 62 "tree234.opt"
    MR_Word mercury__bag__V_9_20;
#line 62 "tree234.opt"
    MR_Box mercury__bag__conv0__Val_6;

#line 62 "tree234.opt"
    {
#line 62 "tree234.opt"
      mercury__bag__succeeded = mercury__tree234__remove_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__Item_4, &mercury__bag__conv0__Val_6, &mercury__bag__STATE_VARIABLE_Bag_8, &mercury__bag__V_9_20);
    }
#line 62 "tree234.opt"
    if (mercury__bag__succeeded)
#line 62 "tree234.opt"
      {
#line 62 "tree234.opt"
        mercury__bag___Val_6 = ((MR_Integer) mercury__bag__conv0__Val_6);
#line 62 "tree234.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 62 "tree234.opt"
      }
#line 459 "bag.m"
    if (mercury__bag__succeeded)
#line 459 "bag.m"
      {
#line 459 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_8;
#line 459 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 459 "bag.m"
      }
#line 459 "bag.m"
    return mercury__bag__succeeded;
#line 459 "bag.m"
  }
#line 163 "bag.m"
}

#line 158 "bag.m"
void MR_CALL 
mercury__bag__delete_3_p_0(
#line 158 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 158 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 158 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 158 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 158 "bag.m"
{
#line 408 "bag.m"
  {
#line 408 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 408 "bag.m"
    MR_Word mercury__bag__NewBag_6;

#line 406 "bag.m"
    {
#line 406 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Item_4, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__NewBag_6);
    }
#line 408 "bag.m"
    if (mercury__bag__succeeded)
#line 407 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__NewBag_6;
#line 408 "bag.m"
    else
#line 407 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_0_7;
#line 408 "bag.m"
  }
#line 158 "bag.m"
}

#line 157 "bag.m"
MR_Word MR_CALL 
mercury__bag__delete_2_f_0(
#line 157 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 157 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 157 "bag.m"
  MR_Box mercury__bag__X_5)
#line 157 "bag.m"
{
#line 408 "bag.m"
  {
#line 408 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 408 "bag.m"
    MR_Word mercury__bag__B2_6;
#line 408 "bag.m"
    MR_Word mercury__bag__NewBag_12;

#line 406 "bag.m"
    {
#line 406 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__X_5, mercury__bag__B1_4, &mercury__bag__NewBag_12);
    }
#line 408 "bag.m"
    if (mercury__bag__succeeded)
#line 407 "bag.m"
      mercury__bag__B2_6 = mercury__bag__NewBag_12;
#line 408 "bag.m"
    else
#line 407 "bag.m"
      mercury__bag__B2_6 = mercury__bag__B1_4;
#line 408 "bag.m"
    return mercury__bag__B2_6;
#line 408 "bag.m"
  }
#line 157 "bag.m"
}

#line 152 "bag.m"
void MR_CALL 
mercury__bag__det_remove_set_3_p_0(
#line 152 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 152 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 152 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 152 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 152 "bag.m"
{
#line 454 "bag.m"
  {
#line 454 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 454 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_18;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_18);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8_18;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
#line 443 "bag.m"
          return;
        }
#line 443 "bag.m"
      }
#line 454 "bag.m"
  }
#line 152 "bag.m"
}

#line 151 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_set_2_f_0(
#line 151 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 151 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 151 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 151 "bag.m"
{
#line 454 "bag.m"
  {
#line 454 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 454 "bag.m"
    MR_Word mercury__bag__B2_6;
#line 454 "bag.m"
    MR_Word mercury__bag__List_12 = (MR_Word) mercury__bag__Xs_5;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_21;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__List_12, mercury__bag__B1_4, &mercury__bag__STATE_VARIABLE_Bag_8_21);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      mercury__bag__B2_6 = mercury__bag__STATE_VARIABLE_Bag_8_21;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
        }
#line 443 "bag.m"
      }
#line 454 "bag.m"
    return mercury__bag__B2_6;
#line 454 "bag.m"
  }
#line 151 "bag.m"
}

#line 146 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_set_3_p_0(
#line 146 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 146 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 146 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 146 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 146 "bag.m"
{
#line 446 "bag.m"
  {
#line 446 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 446 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 449 "bag.m"
    {
#line 449 "bag.m"
      return mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 446 "bag.m"
    return mercury__bag__succeeded;
#line 446 "bag.m"
  }
#line 146 "bag.m"
}

#line 141 "bag.m"
void MR_CALL 
mercury__bag__det_remove_list_3_p_0(
#line 141 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 141 "bag.m"
  MR_Word mercury__bag__List_4,
#line 141 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 141 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
#line 141 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__List_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
#line 443 "bag.m"
          return;
        }
#line 443 "bag.m"
      }
#line 442 "bag.m"
  }
#line 141 "bag.m"
}

#line 140 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_list_2_f_0(
#line 140 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 140 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 140 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 140 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__B2_6;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_12;

#line 440 "bag.m"
    {
#line 440 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__Xs_5, mercury__bag__B1_4, &mercury__bag__STATE_VARIABLE_Bag_8_12);
    }
#line 442 "bag.m"
    if (mercury__bag__succeeded)
#line 440 "bag.m"
      mercury__bag__B2_6 = mercury__bag__STATE_VARIABLE_Bag_8_12;
#line 442 "bag.m"
    else
#line 443 "bag.m"
      {
#line 443 "bag.m"
        {
#line 443 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove_list: Missing item in bag.");
        }
#line 443 "bag.m"
      }
#line 442 "bag.m"
    return mercury__bag__B2_6;
#line 442 "bag.m"
  }
#line 140 "bag.m"
}

#line 134 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_list_3_p_0(
#line 134 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 134 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 134 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 134 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 134 "bag.m"
{
#line 434 "bag.m"
  while (MR_TRUE)
#line 434 "bag.m"
    {
#line 434 "bag.m"
      /* tailcall optimized into a loop */
#line 434 "bag.m"
      {
#line 434 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 434 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "bag.m"
          {
#line 434 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 434 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 434 "bag.m"
          }
#line 434 "bag.m"
        else
#line 435 "bag.m"
          {
#line 435 "bag.m"
            MR_Box mercury__bag__X_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 435 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 436 "bag.m"
            {
#line 436 "bag.m"
              mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 435 "bag.m"
            if (mercury__bag__succeeded)
#line 437 "bag.m"
              {
#line 437 "bag.m"
                /* direct tailcall eliminated */
#line 437 "bag.m"
                {
#line 437 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 437 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 437 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 437 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 437 "bag.m"
                }
#line 437 "bag.m"
                continue;
#line 437 "bag.m"
              }
#line 435 "bag.m"
          }
#line 434 "bag.m"
        return mercury__bag__succeeded;
#line 434 "bag.m"
      }
#line 434 "bag.m"
      break;
#line 434 "bag.m"
    }
#line 134 "bag.m"
}

#line 121 "bag.m"
void MR_CALL 
mercury__bag__det_remove_3_p_0(
#line 121 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 121 "bag.m"
  MR_Box mercury__bag__Bag0_4,
#line 121 "bag.m"
  MR_Word mercury__bag__Item_5,
#line 121 "bag.m"
  MR_Word * mercury__bag__Bag_6)
#line 121 "bag.m"
{
#line 427 "bag.m"
  {
#line 427 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 427 "bag.m"
    MR_Word mercury__bag__Bag1_7;

#line 425 "bag.m"
    {
#line 425 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Bag0_4, mercury__bag__Item_5, &mercury__bag__Bag1_7);
    }
#line 427 "bag.m"
    if (mercury__bag__succeeded)
#line 426 "bag.m"
      *mercury__bag__Bag_6 = mercury__bag__Bag1_7;
#line 427 "bag.m"
    else
#line 428 "bag.m"
      {
#line 428 "bag.m"
        {
#line 428 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove: Missing item in bag.");
#line 428 "bag.m"
          return;
        }
#line 428 "bag.m"
      }
#line 427 "bag.m"
  }
#line 121 "bag.m"
}

#line 120 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_2_f_0(
#line 120 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 120 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 120 "bag.m"
  MR_Box mercury__bag__X_5)
#line 120 "bag.m"
{
#line 427 "bag.m"
  {
#line 427 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 427 "bag.m"
    MR_Word mercury__bag__B2_6;
#line 427 "bag.m"
    MR_Word mercury__bag__Bag1_11;

#line 425 "bag.m"
    {
#line 425 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__X_5, mercury__bag__B1_4, &mercury__bag__Bag1_11);
    }
#line 427 "bag.m"
    if (mercury__bag__succeeded)
#line 426 "bag.m"
      mercury__bag__B2_6 = mercury__bag__Bag1_11;
#line 427 "bag.m"
    else
#line 428 "bag.m"
      {
#line 428 "bag.m"
        {
#line 428 "bag.m"
          mercury__require__error_1_p_0((MR_String) "bag.det_remove: Missing item in bag.");
        }
#line 428 "bag.m"
      }
#line 427 "bag.m"
    return mercury__bag__B2_6;
#line 427 "bag.m"
  }
#line 120 "bag.m"
}

#line 115 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_3_p_0(
#line 115 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 115 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 115 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 115 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 115 "bag.m"
{
#line 412 "bag.m"
  {
#line 412 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 412 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 412 "bag.m"
    MR_Integer mercury__bag__Count0_6;
#line 412 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 412 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_6;
#line 414 "bag.m"
    MR_Integer mercury__bag__V_10_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__conv0_Count0_6);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_6 = ((MR_Integer) mercury__bag__conv0_Count0_6);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 412 "bag.m"
    if (mercury__bag__succeeded)
#line 412 "bag.m"
      {
#line 414 "bag.m"
        mercury__bag__V_10_10 = (MR_Integer) 1;
#line 414 "bag.m"
        mercury__bag__succeeded = (mercury__bag__Count0_6 > mercury__bag__V_10_10);
#line 417 "bag.m"
        if (mercury__bag__succeeded)
#line 415 "bag.m"
          {
#line 415 "bag.m"
            MR_Integer mercury__bag__Count_7 = (mercury__bag__Count0_6 - (MR_Integer) 1);

#line 115 "map.opt"
            {
#line 115 "map.opt"
              mercury__tree234__set_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Count_7)), mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_9);
            }
#line 415 "bag.m"
          }
#line 417 "bag.m"
        else
#line 60 "tree234.opt"
          {
#line 60 "tree234.opt"
            MR_Word mercury__bag__V_7_29;

#line 60 "tree234.opt"
            {
#line 60 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__STATE_VARIABLE_Bag_9, &mercury__bag__V_7_29);
            }
#line 60 "tree234.opt"
          }
#line 412 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_9;
#line 412 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 412 "bag.m"
      }
#line 412 "bag.m"
    return mercury__bag__succeeded;
#line 412 "bag.m"
  }
#line 115 "bag.m"
}

#line 110 "bag.m"
void MR_CALL 
mercury__bag__to_set_without_duplicates_2_p_0(
#line 110 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 110 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 110 "bag.m"
  MR_Word * mercury__bag__Set_4)
#line 110 "bag.m"
{
#line 396 "bag.m"
  {
#line 396 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 396 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 396 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 396 "bag.m"
    MR_Word mercury__bag__List_5;
#line 396 "bag.m"
    MR_Word mercury__bag__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "bag.m"
    MR_Word mercury__bag__List_4_17;

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Bag_3, mercury__bag__V_5_12, &mercury__bag__List_5);
    }
#line 58 "list.opt"
    if ((mercury__bag__List_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__bag__List_4_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__bag__X_3_18 = (MR_hl_field(MR_mktag(1), mercury__bag__List_5, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__bag__Xs_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__List_5, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_4_19, mercury__bag__X_3_18, &mercury__bag__List_4_17);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__bag__Set_4 = (MR_Word) mercury__bag__List_4_17;
#line 396 "bag.m"
  }
#line 110 "bag.m"
}

#line 109 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_without_duplicates_1_f_0(
#line 109 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 109 "bag.m"
  MR_Word mercury__bag__B_3)
#line 109 "bag.m"
{
#line 394 "bag.m"
  {
#line 394 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 394 "bag.m"
    MR_Word mercury__bag__Xs_4;

#line 394 "bag.m"
    {
#line 394 "bag.m"
      mercury__bag__to_set_without_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__B_3, &mercury__bag__Xs_4);
    }
#line 394 "bag.m"
    return mercury__bag__Xs_4;
#line 394 "bag.m"
  }
#line 109 "bag.m"
}

#line 108 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_1_f_0(
#line 108 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 108 "bag.m"
  MR_Word mercury__bag__B_3)
#line 108 "bag.m"
{
#line 394 "bag.m"
  {
#line 394 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 394 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;

#line 394 "bag.m"
    {
#line 394 "bag.m"
      mercury__bag__to_set_without_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__B_3, &mercury__bag__HeadVar__2_2);
    }
#line 394 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 394 "bag.m"
  }
#line 108 "bag.m"
}

#line 104 "bag.m"
void MR_CALL 
mercury__bag__to_list_without_duplicates_2_p_0(
#line 104 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 104 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 104 "bag.m"
  MR_Word * mercury__bag__List_4)
#line 104 "bag.m"
{
#line 388 "bag.m"
  {
#line 388 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 388 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 388 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 388 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Bag_3, mercury__bag__V_5_11, mercury__bag__List_4);
#line 69 "tree234.opt"
      return;
    }
#line 388 "bag.m"
  }
#line 104 "bag.m"
}

#line 103 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_list_without_duplicates_1_f_0(
#line 103 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 103 "bag.m"
  MR_Word mercury__bag__B_3)
#line 103 "bag.m"
{
#line 388 "bag.m"
  {
#line 388 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 388 "bag.m"
    MR_Word mercury__bag__Xs_4;
#line 388 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 388 "bag.m"
    MR_Word mercury__bag__Bag_7 = (MR_Word) mercury__bag__B_3;
#line 388 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Bag_7, mercury__bag__V_5_13, &mercury__bag__Xs_4);
    }
#line 388 "bag.m"
    return mercury__bag__Xs_4;
#line 388 "bag.m"
  }
#line 103 "bag.m"
}

#line 98 "bag.m"
void MR_CALL 
mercury__bag__to_assoc_list_2_p_0(
#line 98 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 98 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 98 "bag.m"
  MR_Word * mercury__bag__AssocList_4)
#line 98 "bag.m"
{
#line 382 "bag.m"
  {
#line 382 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 382 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 382 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 382 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Bag_3, mercury__bag__V_5_11, mercury__bag__AssocList_4);
#line 85 "tree234.opt"
      return;
    }
#line 382 "bag.m"
  }
#line 98 "bag.m"
}

#line 97 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_assoc_list_1_f_0(
#line 97 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 97 "bag.m"
  MR_Word mercury__bag__B_3)
#line 97 "bag.m"
{
#line 382 "bag.m"
  {
#line 382 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 382 "bag.m"
    MR_Word mercury__bag__AL_4;
#line 382 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 382 "bag.m"
    MR_Word mercury__bag__Bag_7 = (MR_Word) mercury__bag__B_3;
#line 382 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Bag_7, mercury__bag__V_5_13, &mercury__bag__AL_4);
    }
#line 382 "bag.m"
    return mercury__bag__AL_4;
#line 382 "bag.m"
  }
#line 97 "bag.m"
}

#line 91 "bag.m"
void MR_CALL 
mercury__bag__to_list_2_p_0(
#line 91 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 91 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 91 "bag.m"
  MR_Word * mercury__bag__List_4)
#line 91 "bag.m"
{
#line 363 "bag.m"
  {
#line 363 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 363 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 363 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 363 "bag.m"
    MR_Word mercury__bag__AssocList_5;
#line 363 "bag.m"
    MR_Word mercury__bag__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Bag_3, mercury__bag__V_5_12, &mercury__bag__AssocList_5);
    }
#line 365 "bag.m"
    {
#line 365 "bag.m"
      mercury__bag__to_list_2_2_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__AssocList_5, mercury__bag__List_4);
#line 365 "bag.m"
      return;
    }
#line 363 "bag.m"
  }
#line 91 "bag.m"
}

#line 90 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_list_1_f_0(
#line 90 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 90 "bag.m"
  MR_Word mercury__bag__B_3)
#line 90 "bag.m"
{
#line 363 "bag.m"
  {
#line 363 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 363 "bag.m"
    MR_Word mercury__bag__Xs_4;
#line 363 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 363 "bag.m"
    MR_Word mercury__bag__Bag_7 = (MR_Word) mercury__bag__B_3;
#line 363 "bag.m"
    MR_Word mercury__bag__AssocList_8;
#line 363 "bag.m"
    MR_Word mercury__bag__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_7_9, mercury__bag__Bag_7, mercury__bag__V_5_14, &mercury__bag__AssocList_8);
    }
#line 365 "bag.m"
    {
#line 365 "bag.m"
      mercury__bag__to_list_2_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__AssocList_8, &mercury__bag__Xs_4);
    }
#line 363 "bag.m"
    return mercury__bag__Xs_4;
#line 363 "bag.m"
  }
#line 90 "bag.m"
}

#line 84 "bag.m"
void MR_CALL 
mercury__bag__from_sorted_list_2_p_0(
#line 84 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 84 "bag.m"
  MR_Word mercury__bag__List_3,
#line 84 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 84 "bag.m"
{
#line 355 "bag.m"
  {
#line 355 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 355 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "bag.m"
    MR_Word mercury__bag__Bag_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 358 "bag.m"
    {
#line 358 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__List_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
#line 358 "bag.m"
      return;
    }
#line 355 "bag.m"
  }
#line 84 "bag.m"
}

#line 83 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_sorted_list_1_f_0(
#line 83 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 83 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 83 "bag.m"
{
#line 355 "bag.m"
  {
#line 355 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 355 "bag.m"
    MR_Word mercury__bag__B_4;
#line 355 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "bag.m"
    MR_Word mercury__bag__Bag_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 358 "bag.m"
    {
#line 358 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__B_4);
    }
#line 355 "bag.m"
    return mercury__bag__B_4;
#line 355 "bag.m"
  }
#line 83 "bag.m"
}

#line 79 "bag.m"
void MR_CALL 
mercury__bag__from_set_2_p_0(
#line 79 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 79 "bag.m"
  MR_Word mercury__bag__Set_3,
#line 79 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 79 "bag.m"
{
#line 346 "bag.m"
  {
#line 346 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 346 "bag.m"
    MR_Word mercury__bag__List_5 = (MR_Word) mercury__bag__Set_3;
#line 346 "bag.m"
    MR_Word mercury__bag__Bag0_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "bag.m"
    MR_Word mercury__bag__Bag_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 350 "bag.m"
    {
#line 350 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__List_5, mercury__bag__Bag0_6, mercury__bag__Bag_4);
#line 350 "bag.m"
      return;
    }
#line 346 "bag.m"
  }
#line 79 "bag.m"
}

#line 78 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_set_1_f_0(
#line 78 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 78 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 78 "bag.m"
{
#line 346 "bag.m"
  {
#line 346 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 346 "bag.m"
    MR_Word mercury__bag__B_4;
#line 346 "bag.m"
    MR_Word mercury__bag__List_8 = (MR_Word) mercury__bag__Xs_3;
#line 346 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "bag.m"
    MR_Word mercury__bag__Bag_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 350 "bag.m"
    {
#line 350 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__List_8, mercury__bag__Bag0_9, &mercury__bag__B_4);
    }
#line 346 "bag.m"
    return mercury__bag__B_4;
#line 346 "bag.m"
  }
#line 78 "bag.m"
}

#line 74 "bag.m"
void MR_CALL 
mercury__bag__from_list_2_p_0(
#line 74 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 74 "bag.m"
  MR_Word mercury__bag__List_3,
#line 74 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 74 "bag.m"
{
#line 336 "bag.m"
  {
#line 336 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 336 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "bag.m"
    MR_Word mercury__bag__Bag_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 338 "bag.m"
    {
#line 338 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__List_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
#line 338 "bag.m"
      return;
    }
#line 336 "bag.m"
  }
#line 74 "bag.m"
}

#line 73 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_list_1_f_0(
#line 73 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 73 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 73 "bag.m"
{
#line 336 "bag.m"
  {
#line 336 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 336 "bag.m"
    MR_Word mercury__bag__B_4;
#line 336 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "bag.m"
    MR_Word mercury__bag__Bag_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 338 "bag.m"
    {
#line 338 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__B_4);
    }
#line 336 "bag.m"
    return mercury__bag__B_4;
#line 336 "bag.m"
  }
#line 73 "bag.m"
}

#line 72 "bag.m"
MR_Word MR_CALL 
mercury__bag__bag_1_f_0(
#line 72 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 72 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 72 "bag.m"
{
#line 336 "bag.m"
  {
#line 336 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 336 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;
#line 336 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "bag.m"
    MR_Word mercury__bag__Bag_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 338 "bag.m"
    {
#line 338 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Xs_3, mercury__bag__Bag0_9, &mercury__bag__HeadVar__2_2);
    }
#line 336 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 336 "bag.m"
  }
#line 72 "bag.m"
}

#line 326 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 326 "bag.m"
  void * mercury__bag__env_ptr_arg)
#line 326 "bag.m"
{
#line 326 "bag.m"
  {
#line 326 "bag.m"
    struct mercury__bag__member_3_p_0_env_0_s * mercury__bag__env_ptr = (struct mercury__bag__member_3_p_0_env_0_s *) mercury__bag__env_ptr_arg;

#line 326 "bag.m"
    {
#line 427 "bag.m"
      MR_Word mercury__bag__Bag1_28;

#line 425 "bag.m"
      {
#line 425 "bag.m"
        (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded = mercury__bag__remove_3_p_0((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8, *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__OutVal_4), (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__InBag_5, &mercury__bag__Bag1_28);
      }
#line 427 "bag.m"
      if ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded)
#line 426 "bag.m"
        *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__OutBag_6) = mercury__bag__Bag1_28;
#line 427 "bag.m"
      else
#line 428 "bag.m"
        {
#line 428 "bag.m"
          {
#line 428 "bag.m"
            mercury__require__error_1_p_0((MR_String) "bag.det_remove: Missing item in bag.");
#line 428 "bag.m"
            return;
          }
#line 428 "bag.m"
        }
#line 427 "bag.m"
      {
#line 427 "bag.m"
        ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont)((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont_env_ptr);
#line 427 "bag.m"
        return;
      }
#line 326 "bag.m"
    }
#line 326 "bag.m"
  }
#line 326 "bag.m"
}

#line 68 "bag.m"
void MR_CALL 
mercury__bag__member_3_p_0(
#line 68 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 68 "bag.m"
  MR_Box * mercury__bag__OutVal_4,
#line 68 "bag.m"
  MR_Word mercury__bag__InBag_5,
#line 68 "bag.m"
  MR_Word * mercury__bag__OutBag_6,
#line 68 "bag.m"
  MR_Cont mercury__bag__cont,
#line 68 "bag.m"
  void * mercury__bag__cont_env_ptr)
#line 68 "bag.m"
{
#line 68 "bag.m"
  {
#line 68 "bag.m"
    struct mercury__bag__member_3_p_0_env_0_s mercury__bag__env;

#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8 = mercury__bag__TypeInfo_for_T_8;
#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__OutVal_4 = mercury__bag__OutVal_4;
#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__InBag_5 = mercury__bag__InBag_5;
#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__OutBag_6 = mercury__bag__OutBag_6;
#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont = mercury__bag__cont;
#line 68 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont_env_ptr = mercury__bag__cont_env_ptr;
#line 326 "bag.m"
    {
#line 326 "bag.m"
      MR_Word mercury__bag__TypeCtorInfo_7_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 326 "bag.m"
      MR_Word mercury__bag__Vals_7;
#line 326 "bag.m"
      MR_Word mercury__bag__Bag_12 = (MR_Word) (mercury__bag__env).mercury__bag__member_3_p_0_env_0__InBag_5;
#line 326 "bag.m"
      MR_Word mercury__bag__AssocList_13;
#line 326 "bag.m"
      MR_Word mercury__bag__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "tree234.opt"
      {
#line 85 "tree234.opt"
        mercury__tree234__tree234_to_assoc_list_acc_3_p_0((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_7_14, mercury__bag__Bag_12, mercury__bag__V_5_19, &mercury__bag__AssocList_13);
      }
#line 365 "bag.m"
      {
#line 365 "bag.m"
        mercury__bag__to_list_2_2_p_0((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8, mercury__bag__AssocList_13, &mercury__bag__Vals_7);
      }
#line 328 "bag.m"
      {
#line 328 "bag.m"
        mercury__list__member_2_p_1((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_8, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__OutVal_4, mercury__bag__Vals_7, mercury__bag__member_3_p_0_1, &mercury__bag__env);
      }
#line 326 "bag.m"
    }
#line 68 "bag.m"
  }
#line 68 "bag.m"
}

#line 61 "bag.m"
MR_bool MR_CALL 
mercury__bag__member_2_p_0(
#line 61 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 61 "bag.m"
  MR_Box mercury__bag__M_3,
#line 61 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 61 "bag.m"
{
#line 323 "bag.m"
  {
#line 323 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 323 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 323 "bag.m"
    MR_Word mercury__bag__Bag_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 37 "map.opt"
    MR_Integer mercury__bag___Occurrences_5;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0__Occurrences_5;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Bag_4, mercury__bag__M_3, &mercury__bag__conv0__Occurrences_5);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag___Occurrences_5 = ((MR_Integer) mercury__bag__conv0__Occurrences_5);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 323 "bag.m"
    return mercury__bag__succeeded;
#line 323 "bag.m"
  }
#line 61 "bag.m"
}

#line 56 "bag.m"
void MR_CALL 
mercury__bag__insert_set_3_p_0(
#line 56 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 56 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 56 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 56 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 56 "bag.m"
{
#line 318 "bag.m"
  {
#line 318 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 318 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 321 "bag.m"
    {
#line 321 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
#line 321 "bag.m"
      return;
    }
#line 318 "bag.m"
  }
#line 56 "bag.m"
}

#line 55 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_set_2_f_0(
#line 55 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 55 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_B_0_6,
#line 55 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 55 "bag.m"
{
#line 318 "bag.m"
  {
#line 318 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 318 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_B_7;
#line 318 "bag.m"
    MR_Word mercury__bag__List_14 = (MR_Word) mercury__bag__Xs_5;

#line 321 "bag.m"
    {
#line 321 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__List_14, mercury__bag__STATE_VARIABLE_B_0_6, &mercury__bag__STATE_VARIABLE_B_7);
    }
#line 318 "bag.m"
    return mercury__bag__STATE_VARIABLE_B_7;
#line 318 "bag.m"
  }
#line 55 "bag.m"
}

#line 51 "bag.m"
void MR_CALL 
mercury__bag__insert_list_3_p_0(
#line 51 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 51 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 51 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 51 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 51 "bag.m"
{
#line 313 "bag.m"
  while (MR_TRUE)
#line 313 "bag.m"
    {
#line 313 "bag.m"
      /* tailcall optimized into a loop */
#line 313 "bag.m"
      {
#line 313 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 313 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "bag.m"
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 313 "bag.m"
        else
#line 314 "bag.m"
          {
#line 314 "bag.m"
            MR_Box mercury__bag__Item_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 314 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 315 "bag.m"
            {
#line 315 "bag.m"
              mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 316 "bag.m"
            /* direct tailcall eliminated */
#line 316 "bag.m"
            {
#line 316 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
#line 316 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 316 "bag.m"
              mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 316 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 316 "bag.m"
            }
#line 316 "bag.m"
            continue;
#line 314 "bag.m"
          }
#line 313 "bag.m"
      }
#line 313 "bag.m"
      break;
#line 313 "bag.m"
    }
#line 51 "bag.m"
}

#line 50 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_list_2_f_0(
#line 50 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 50 "bag.m"
  MR_Word mercury__bag__B1_4,
#line 50 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 50 "bag.m"
{
#line 311 "bag.m"
  {
#line 311 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 311 "bag.m"
    MR_Word mercury__bag__B2_6;

#line 311 "bag.m"
    {
#line 311 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__Xs_5, mercury__bag__B1_4, &mercury__bag__B2_6);
    }
#line 311 "bag.m"
    return mercury__bag__B2_6;
#line 311 "bag.m"
  }
#line 50 "bag.m"
}

#line 46 "bag.m"
void MR_CALL 
mercury__bag__insert_3_p_0(
#line 46 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_12,
#line 46 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 46 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 46 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 46 "bag.m"
{
#line 300 "bag.m"
  {
#line 300 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 300 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_14_14;
#line 300 "bag.m"
    MR_Integer mercury__bag__Count_7;
#line 300 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 300 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
#line 303 "bag.m"
    MR_Integer mercury__bag__Count0_6;
#line 301 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 37 "map.opt"
    MR_Box mercury__bag__conv0_Count0_6;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_12, mercury__bag__TypeCtorInfo_13_13, mercury__bag__STATE_VARIABLE_Bag_0_8, mercury__bag__Item_4, &mercury__bag__conv0_Count0_6);
    }
#line 37 "map.opt"
    if (mercury__bag__succeeded)
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__bag__Count0_6 = ((MR_Integer) mercury__bag__conv0_Count0_6);
#line 37 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 37 "map.opt"
      }
#line 303 "bag.m"
    if (mercury__bag__succeeded)
#line 302 "bag.m"
      {
#line 302 "bag.m"
        mercury__bag__Count_7 = (mercury__bag__Count0_6 + (MR_Integer) 1);
#line 302 "bag.m"
      }
#line 303 "bag.m"
    else
#line 304 "bag.m"
      mercury__bag__Count_7 = (MR_Integer) 1;
#line 4555 "bag.c"
    mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 115 "map.opt"
    {
#line 115 "map.opt"
      mercury__tree234__set_4_p_0(mercury__bag__TypeInfo_for_T_12, mercury__bag__TypeCtorInfo_14_14, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Count_7)), mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_9);
    }
#line 300 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_9;
#line 300 "bag.m"
  }
#line 46 "bag.m"
}

#line 45 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_2_f_0(
#line 45 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 45 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_B_0_6,
#line 45 "bag.m"
  MR_Box mercury__bag__X_5)
#line 45 "bag.m"
{
#line 298 "bag.m"
  {
#line 298 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 298 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_B_7;

#line 298 "bag.m"
    {
#line 298 "bag.m"
      mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_B_0_6, &mercury__bag__STATE_VARIABLE_B_7);
    }
#line 298 "bag.m"
    return mercury__bag__STATE_VARIABLE_B_7;
#line 298 "bag.m"
  }
#line 45 "bag.m"
}

#line 41 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_unique_1_f_0(
#line 41 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 41 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 41 "bag.m"
{
#line 293 "bag.m"
  {
#line 293 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 293 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 293 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 293 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 163 "map.opt"
    {
#line 163 "map.opt"
      mercury__tree234__count_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__TypeCtorInfo_5_5, mercury__bag__Bag_3, &mercury__bag__HeadVar__2_2);
    }
#line 293 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 293 "bag.m"
  }
#line 41 "bag.m"
}

#line 36 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_1_f_0(
#line 36 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 36 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 36 "bag.m"
{
#line 289 "bag.m"
  {
#line 289 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 289 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 289 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 289 "bag.m"
    MR_Word mercury__bag__Bag_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 289 "bag.m"
    MR_Word mercury__bag__V_5_5;
#line 289 "bag.m"
    MR_Word mercury__bag__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 74 "tree234.opt"
    {
#line 74 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Bag_3, mercury__bag__V_5_18, &mercury__bag__V_5_5);
    }
#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__bag__foldl__ho7_4_p_in__list_0(mercury__bag__V_5_5, (MR_Integer) 0, &mercury__bag__HeadVar__2_2);
    }
#line 289 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 289 "bag.m"
  }
#line 36 "bag.m"
}

#line 32 "bag.m"
void MR_CALL 
mercury__bag__init_1_p_0(
#line 32 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3,
#line 32 "bag.m"
  MR_Word * mercury__bag__HeadVar__1_1)
#line 32 "bag.m"
{
#line 284 "bag.m"
  {
#line 284 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 284 "bag.m"
    MR_Word mercury__bag__Bag_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 284 "bag.m"
    *mercury__bag__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "bag.m"
  }
#line 32 "bag.m"
}

#line 31 "bag.m"
MR_Word MR_CALL 
mercury__bag__init_0_f_0(
#line 31 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3)
#line 31 "bag.m"
{
#line 284 "bag.m"
  {
#line 284 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 284 "bag.m"
    MR_Word mercury__bag__B_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "bag.m"
    MR_Word mercury__bag__Bag_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 284 "bag.m"
    return mercury__bag__B_2;
#line 284 "bag.m"
  }
#line 31 "bag.m"
}

void mercury__bag__init(void)
{
}

void mercury__bag__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bag__bag__type_ctor_info_bag_1);
}

void mercury__bag__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bag. */
