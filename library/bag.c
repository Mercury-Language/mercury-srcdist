/*
** Automatically generated from `bag.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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



#line 72 "bag.m"
struct mercury__bag__member_3_p_0_env_0_s {
#line 72 "bag.m"
  MR_Word mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10;
#line 72 "bag.m"
  MR_Box * mercury__bag__member_3_p_0_env_0__X_4;
#line 72 "bag.m"
  MR_Word mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7;
#line 72 "bag.m"
  MR_Word * mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8;
#line 72 "bag.m"
  MR_Cont mercury__bag__member_3_p_0_env_0__cont;
#line 72 "bag.m"
  void * mercury__bag__member_3_p_0_env_0__cont_env_ptr;
#line 414 "bag.m"
  MR_bool mercury__bag__member_3_p_0_env_0__succeeded;
#line 72 "bag.m"
};


#line 113 "bag.c"
static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1];

#line 116 "bag.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 119 "bag.c"
static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1;

#line 122 "bag.c"
static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
#line 125 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 127 "bag.c"
  MR_Box mercury__bag__wrapper_arg_2,
#line 129 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3);

#line 132 "bag.c"
static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
#line 135 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 137 "bag.c"
  MR_Box * mercury__bag__wrapper_arg_2,
#line 139 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3,
#line 141 "bag.c"
  MR_Box mercury__bag__wrapper_arg_4);

#line 35 "tree234.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__bag__V_55_55,
#line 35 "tree234.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__bag__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__bag__HeadVar__4_4);

#line 99 "list.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__bag__HeadVar__3_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 865 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 865 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 865 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 865 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 864 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 864 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 864 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 864 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 785 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 785 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 785 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 785 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 784 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 784 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 784 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 784 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 705 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 705 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 705 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 705 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 704 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 704 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 704 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 704 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 623 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 623 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 623 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 623 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

#line 126 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 126 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 126 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4);

#line 1021 "bag.m"
static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
#line 1021 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 1021 "bag.m"
  MR_Word mercury__bag__AXNs_3,
#line 1021 "bag.m"
  MR_Word mercury__bag__BXNs_4);

#line 866 "bag.m"
static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
#line 866 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 866 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 866 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 866 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 866 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 786 "bag.m"
static void MR_CALL 
mercury__bag__union_loop_4_p_2(
#line 786 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 786 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 786 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 786 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 786 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 706 "bag.m"
static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
#line 706 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 706 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 706 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 706 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 706 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 624 "bag.m"
static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
#line 624 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 624 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 624 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 624 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 624 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

#line 414 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 414 "bag.m"
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



#line 395 "bag.c"
static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1] = {
  (MR_Integer) 0
};

#line 400 "bag.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 409 "bag.c"
static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1 = {
  (MR_String) "bag",
  (MR_PseudoTypeInfo) &mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  NULL
};

#line 416 "bag.c"
const MR_TypeCtorInfo_Struct mercury__bag__bag__type_ctor_info_bag_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bag____Unify____bag_1_0_10001)),
  ((MR_Box) (mercury__bag____Compare____bag_1_0_10001)),
  (MR_String) "bag",
  (MR_String) "bag",
  {     &mercury__bag__bag__notag_functor_desc_bag_1 },
  {     &mercury__bag__bag__notag_functor_desc_bag_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bag__bag__functor_number_map_bag_1
};

#line 433 "bag.c"
static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
#line 436 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 438 "bag.c"
  MR_Box mercury__bag__wrapper_arg_2,
#line 440 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3)
#line 442 "bag.c"
{
#line 444 "bag.c"
  {
#line 446 "bag.c"
    MR_bool mercury__bag__succeeded;

#line 449 "bag.c"
    {
#line 451 "bag.c"
      mercury__bag__succeeded = mercury__bag____Unify____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), ((MR_Word) mercury__bag__wrapper_arg_2), ((MR_Word) mercury__bag__wrapper_arg_3));
    }
#line 454 "bag.c"
    return mercury__bag__succeeded;
#line 456 "bag.c"
  }
#line 458 "bag.c"
}

#line 461 "bag.c"
static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
#line 464 "bag.c"
  MR_Box mercury__bag__wrapper_arg_1,
#line 466 "bag.c"
  MR_Box * mercury__bag__wrapper_arg_2,
#line 468 "bag.c"
  MR_Box mercury__bag__wrapper_arg_3,
#line 470 "bag.c"
  MR_Box mercury__bag__wrapper_arg_4)
#line 472 "bag.c"
{
#line 474 "bag.c"
  {
#line 476 "bag.c"
    MR_Word mercury__bag__conv0_HeadVar__1_1;

#line 479 "bag.c"
    {
#line 481 "bag.c"
      mercury__bag____Compare____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), &mercury__bag__conv0_HeadVar__1_1, ((MR_Word) mercury__bag__wrapper_arg_3), ((MR_Word) mercury__bag__wrapper_arg_4));
    }
#line 484 "bag.c"
    *mercury__bag__wrapper_arg_2 = ((MR_Box) (mercury__bag__conv0_HeadVar__1_1));
#line 486 "bag.c"
  }
#line 488 "bag.c"
}

#line 35 "tree234.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__bag__V_55_55,
#line 35 "tree234.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__bag__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__bag__HeadVar__4_4)
#line 35 "tree234.int"
{
#line 88 "tree234.opt"
  while (MR_TRUE)
#line 88 "tree234.opt"
    {
#line 88 "tree234.opt"
      /* tailcall optimized into a loop */
#line 88 "tree234.opt"
      {
#line 88 "tree234.opt"
        MR_bool mercury__bag__succeeded;

#line 88 "tree234.opt"
#line 88 "tree234.opt"
        switch (MR_tag((MR_Word) mercury__bag__HeadVar__2_2)) {
#line 88 "tree234.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 88 "tree234.opt"
          case (MR_Integer) 0:
#line 88 "tree234.opt"
            *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 1:
#line 90 "tree234.opt"
            {
#line 90 "tree234.opt"
              MR_Box mercury__bag__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
#line 90 "tree234.opt"
              MR_Integer mercury__bag__V_11_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 90 "tree234.opt"
              MR_Word mercury__bag__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 2)));
#line 90 "tree234.opt"
              MR_Word mercury__bag__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
#line 90 "tree234.opt"
              MR_Word mercury__bag__V_17_15;
#line 90 "tree234.opt"
              MR_Word mercury__bag__V_18_16;

#line 91 "tree234.opt"
              {
#line 91 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_12_11, mercury__bag__HeadVar__3_3, &mercury__bag__V_17_15);
              }
#line 92 "tree234.opt"
              {
#line 92 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_10_9, mercury__bag__V_11_10, mercury__bag__V_17_15, &mercury__bag__V_18_16);
              }
#line 93 "tree234.opt"
              /* direct tailcall eliminated */
#line 93 "tree234.opt"
              {
#line 93 "tree234.opt"
                MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_13_12;
#line 93 "tree234.opt"
                MR_Word mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_18_16;

#line 93 "tree234.opt"
                mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 93 "tree234.opt"
                mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 93 "tree234.opt"
              }
#line 93 "tree234.opt"
              continue;
#line 90 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 2:
#line 94 "tree234.opt"
            {
#line 94 "tree234.opt"
              MR_Box mercury__bag__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
#line 94 "tree234.opt"
              MR_Integer mercury__bag__V_22_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "tree234.opt"
              MR_Box mercury__bag__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 2));
#line 94 "tree234.opt"
              MR_Integer mercury__bag__V_24_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 5)));
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 6)));
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_31_27;
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_32_28;
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_33_29;
#line 94 "tree234.opt"
              MR_Word mercury__bag__V_34_30;

#line 95 "tree234.opt"
              {
#line 95 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_25_22, mercury__bag__HeadVar__3_3, &mercury__bag__V_31_27);
              }
#line 96 "tree234.opt"
              {
#line 96 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_21_18, mercury__bag__V_22_19, mercury__bag__V_31_27, &mercury__bag__V_32_28);
              }
#line 97 "tree234.opt"
              {
#line 97 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_26_23, mercury__bag__V_32_28, &mercury__bag__V_33_29);
              }
#line 98 "tree234.opt"
              {
#line 98 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_23_20, mercury__bag__V_24_21, mercury__bag__V_33_29, &mercury__bag__V_34_30);
              }
#line 99 "tree234.opt"
              /* direct tailcall eliminated */
#line 99 "tree234.opt"
              {
#line 99 "tree234.opt"
                MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_27_24;
#line 99 "tree234.opt"
                MR_Word mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_34_30;

#line 99 "tree234.opt"
                mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 99 "tree234.opt"
                mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 99 "tree234.opt"
              }
#line 99 "tree234.opt"
              continue;
#line 94 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 3:
#line 100 "tree234.opt"
            {
#line 100 "tree234.opt"
              MR_Box mercury__bag__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
#line 100 "tree234.opt"
              MR_Integer mercury__bag__V_38_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "tree234.opt"
              MR_Box mercury__bag__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 2));
#line 100 "tree234.opt"
              MR_Integer mercury__bag__V_40_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "tree234.opt"
              MR_Box mercury__bag__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 4));
#line 100 "tree234.opt"
              MR_Integer mercury__bag__V_42_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 6)));
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 7)));
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 8)));
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 9)));
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_50_44;
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_51_45;
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_52_46;
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_53_47;
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_54_48;
#line 100 "tree234.opt"
              MR_Word mercury__bag__V_55_49;

#line 101 "tree234.opt"
              {
#line 101 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_43_38, mercury__bag__HeadVar__3_3, &mercury__bag__V_50_44);
              }
#line 102 "tree234.opt"
              {
#line 102 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_37_32, mercury__bag__V_38_33, mercury__bag__V_50_44, &mercury__bag__V_51_45);
              }
#line 103 "tree234.opt"
              {
#line 103 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_44_39, mercury__bag__V_51_45, &mercury__bag__V_52_46);
              }
#line 104 "tree234.opt"
              {
#line 104 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_39_34, mercury__bag__V_40_35, mercury__bag__V_52_46, &mercury__bag__V_53_47);
              }
#line 105 "tree234.opt"
              {
#line 105 "tree234.opt"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__V_55_55, mercury__bag__V_45_40, mercury__bag__V_53_47, &mercury__bag__V_54_48);
              }
#line 106 "tree234.opt"
              {
#line 106 "tree234.opt"
                mercury__bag__prepend_n_xs_4_p_0(mercury__bag__V_55_55, mercury__bag__V_41_36, mercury__bag__V_42_37, mercury__bag__V_54_48, &mercury__bag__V_55_49);
              }
#line 107 "tree234.opt"
              /* direct tailcall eliminated */
#line 107 "tree234.opt"
              {
#line 107 "tree234.opt"
                MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_46_41;
#line 107 "tree234.opt"
                MR_Word mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_55_49;

#line 107 "tree234.opt"
                mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 107 "tree234.opt"
                mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 107 "tree234.opt"
              }
#line 107 "tree234.opt"
              continue;
#line 100 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
        }
#line 88 "tree234.opt"
      }
#line 88 "tree234.opt"
      break;
#line 88 "tree234.opt"
    }
#line 35 "tree234.int"
}

#line 99 "list.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 99 "list.int"
{
#line 195 "list.opt"
  while (MR_TRUE)
#line 195 "list.opt"
    {
#line 195 "list.opt"
      /* tailcall optimized into a loop */
#line 195 "list.opt"
      {
#line 195 "list.opt"
        MR_bool mercury__bag__succeeded;

#line 195 "list.opt"
        if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "list.opt"
          *mercury__bag__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "list.opt"
        else
#line 196 "list.opt"
          {
#line 196 "list.opt"
            MR_Word mercury__bag__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "list.opt"
            MR_Word mercury__bag__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
            MR_Box mercury__bag__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 0));
#line 596 "bag.m"
            MR_Integer mercury__bag__XN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 1)));

#line 597 "bag.m"
            mercury__bag__succeeded = (mercury__bag__XN_19 > (MR_Integer) 1);
#line 202 "list.opt"
            if (mercury__bag__succeeded)
#line 200 "list.opt"
              {
#line 200 "list.opt"
                MR_Word mercury__bag__V_10_10;

#line 200 "list.opt"
                {
#line 200 "list.opt"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__V_7_7, &mercury__bag__V_10_10);
                }
#line 201 "list.opt"
                {
#line 201 "list.opt"
                  MR_Word base;
#line 201 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "list.opt"
                  *mercury__bag__HeadVar__3_3 = base;
#line 201 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__bag__V_9_9;
#line 201 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bag__V_10_10));
#line 201 "list.opt"
                }
#line 200 "list.opt"
              }
#line 202 "list.opt"
            else
#line 203 "list.opt"
              {
#line 203 "list.opt"
                /* direct tailcall eliminated */
#line 203 "list.opt"
                {
#line 203 "list.opt"
                  MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_7_7;

#line 203 "list.opt"
                  mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 203 "list.opt"
                }
#line 203 "list.opt"
                continue;
#line 203 "list.opt"
              }
#line 196 "list.opt"
          }
#line 195 "list.opt"
      }
#line 195 "list.opt"
      break;
#line 195 "list.opt"
    }
#line 99 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__bag__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 865 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 865 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 865 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 865 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 865 "bag.m"
{
#line 872 "bag.m"
  while (MR_TRUE)
#line 872 "bag.m"
    {
#line 872 "bag.m"
      /* tailcall optimized into a loop */
#line 872 "bag.m"
      {
#line 872 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 872 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 872 "bag.m"
        else
#line 872 "bag.m"
          {
#line 872 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 878 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 880 "bag.m"
            /* direct tailcall eliminated */
#line 880 "bag.m"
            {
#line 880 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;

#line 880 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 880 "bag.m"
            }
#line 880 "bag.m"
            continue;
#line 872 "bag.m"
          }
#line 872 "bag.m"
      }
#line 872 "bag.m"
      break;
#line 872 "bag.m"
    }
#line 865 "bag.m"
}

#line 864 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 864 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 864 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 864 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 864 "bag.m"
{
#line 872 "bag.m"
  while (MR_TRUE)
#line 872 "bag.m"
    {
#line 872 "bag.m"
      /* tailcall optimized into a loop */
#line 872 "bag.m"
      {
#line 872 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 872 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 872 "bag.m"
        else
#line 873 "bag.m"
          {
#line 873 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 874 "bag.m"
            MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

#line 876 "bag.m"
            /* direct tailcall eliminated */
#line 876 "bag.m"
            {
#line 876 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;

#line 876 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 876 "bag.m"
            }
#line 876 "bag.m"
            continue;
#line 873 "bag.m"
          }
#line 872 "bag.m"
      }
#line 872 "bag.m"
      break;
#line 872 "bag.m"
    }
#line 864 "bag.m"
}

#line 785 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 785 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 785 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 785 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 785 "bag.m"
{
#line 792 "bag.m"
  while (MR_TRUE)
#line 792 "bag.m"
    {
#line 792 "bag.m"
      /* tailcall optimized into a loop */
#line 792 "bag.m"
      {
#line 792 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 792 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 792 "bag.m"
        else
#line 792 "bag.m"
          {
#line 792 "bag.m"
            MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 792 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 792 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 800 "bag.m"
            {
#line 800 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
#line 800 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 800 "bag.m"
            }
#line 801 "bag.m"
            /* direct tailcall eliminated */
#line 801 "bag.m"
            {
#line 801 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;
#line 801 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 801 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 801 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 801 "bag.m"
            }
#line 801 "bag.m"
            continue;
#line 792 "bag.m"
          }
#line 792 "bag.m"
      }
#line 792 "bag.m"
      break;
#line 792 "bag.m"
    }
#line 785 "bag.m"
}

#line 784 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 784 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 784 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 784 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 784 "bag.m"
{
#line 792 "bag.m"
  while (MR_TRUE)
#line 792 "bag.m"
    {
#line 792 "bag.m"
      /* tailcall optimized into a loop */
#line 792 "bag.m"
      {
#line 792 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 792 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 792 "bag.m"
        else
#line 793 "bag.m"
          {
#line 793 "bag.m"
            MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 793 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 793 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 795 "bag.m"
            {
#line 795 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 795 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 795 "bag.m"
            }
#line 796 "bag.m"
            /* direct tailcall eliminated */
#line 796 "bag.m"
            {
#line 796 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;
#line 796 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 796 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 796 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 796 "bag.m"
            }
#line 796 "bag.m"
            continue;
#line 793 "bag.m"
          }
#line 792 "bag.m"
      }
#line 792 "bag.m"
      break;
#line 792 "bag.m"
    }
#line 784 "bag.m"
}

#line 705 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 705 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 705 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 705 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 705 "bag.m"
{
#line 712 "bag.m"
  while (MR_TRUE)
#line 712 "bag.m"
    {
#line 712 "bag.m"
      /* tailcall optimized into a loop */
#line 712 "bag.m"
      {
#line 712 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 712 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 712 "bag.m"
        else
#line 712 "bag.m"
          {
#line 712 "bag.m"
            MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 712 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 712 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 720 "bag.m"
            {
#line 720 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
#line 720 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 720 "bag.m"
            }
#line 721 "bag.m"
            /* direct tailcall eliminated */
#line 721 "bag.m"
            {
#line 721 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;
#line 721 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 721 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 721 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 721 "bag.m"
            }
#line 721 "bag.m"
            continue;
#line 712 "bag.m"
          }
#line 712 "bag.m"
      }
#line 712 "bag.m"
      break;
#line 712 "bag.m"
    }
#line 705 "bag.m"
}

#line 704 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 704 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 704 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 704 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 704 "bag.m"
{
#line 712 "bag.m"
  while (MR_TRUE)
#line 712 "bag.m"
    {
#line 712 "bag.m"
      /* tailcall optimized into a loop */
#line 712 "bag.m"
      {
#line 712 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 712 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 712 "bag.m"
        else
#line 713 "bag.m"
          {
#line 713 "bag.m"
            MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 713 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 713 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 715 "bag.m"
            {
#line 715 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 715 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 715 "bag.m"
            }
#line 716 "bag.m"
            /* direct tailcall eliminated */
#line 716 "bag.m"
            {
#line 716 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;
#line 716 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 716 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 716 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 716 "bag.m"
            }
#line 716 "bag.m"
            continue;
#line 713 "bag.m"
          }
#line 712 "bag.m"
      }
#line 712 "bag.m"
      break;
#line 712 "bag.m"
    }
#line 704 "bag.m"
}

#line 623 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 623 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 623 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 623 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
#line 623 "bag.m"
{
#line 630 "bag.m"
  while (MR_TRUE)
#line 630 "bag.m"
    {
#line 630 "bag.m"
      /* tailcall optimized into a loop */
#line 630 "bag.m"
      {
#line 630 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 630 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 630 "bag.m"
        else
#line 630 "bag.m"
          {
#line 630 "bag.m"
            MR_Word mercury__bag__HeadAXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 630 "bag.m"
            MR_Word mercury__bag__TailAXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 630 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 633 "bag.m"
            {
#line 633 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_8));
#line 633 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 633 "bag.m"
            }
#line 634 "bag.m"
            /* direct tailcall eliminated */
#line 634 "bag.m"
            {
#line 634 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_9;
#line 634 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 634 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 634 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 634 "bag.m"
            }
#line 634 "bag.m"
            continue;
#line 630 "bag.m"
          }
#line 630 "bag.m"
      }
#line 630 "bag.m"
      break;
#line 630 "bag.m"
    }
#line 623 "bag.m"
}

#line 126 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 126 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 126 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4)
#line 126 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__bag__succeeded;

#line 391 "list.opt"
        if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Integer mercury__bag__V_10_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__bag__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Integer mercury__bag__V_15_13 = (mercury__bag__V_10_9 + mercury__bag__HeadVar__3_3);

#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_11_10;
#line 395 "list.opt"
              MR_Integer mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_15_13;

#line 395 "list.opt"
              mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 126 "list.int"
}

#line 79 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 79 "bag.m"
  MR_Word mercury__bag__V_19_19,
#line 79 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 79 "bag.m"
  MR_Word mercury__bag__Item_4,
#line 79 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 79 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 79 "bag.m"
{
#line 424 "bag.m"
  {
#line 424 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 424 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 424 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 427 "bag.m"
    MR_Integer mercury__bag__Count_6;
#line 425 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_Count_6;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_19_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__Item_4, &mercury__bag__conv0_Count_6);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__Count_6 = ((MR_Integer) mercury__bag__conv0_Count_6);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 427 "bag.m"
    if (mercury__bag__succeeded)
#line 426 "bag.m"
      {
#line 426 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 426 "bag.m"
        MR_Integer mercury__bag__V_9_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

#line 426 "bag.m"
        {
#line 426 "bag.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_19_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__V_9_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 426 "bag.m"
      }
#line 427 "bag.m"
    else
#line 428 "bag.m"
      {
#line 428 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 428 "bag.m"
        {
#line 428 "bag.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_19_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 428 "bag.m"
      }
#line 424 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 424 "bag.m"
  }
#line 79 "bag.m"
}

#line 84 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 84 "bag.m"
  MR_Word mercury__bag__V_16_16,
#line 84 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 84 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 84 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 84 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 84 "bag.m"
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
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 434 "bag.m"
        else
#line 435 "bag.m"
          {
#line 435 "bag.m"
            MR_Word mercury__bag__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 436 "bag.m"
            {
#line 436 "bag.m"
              mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 437 "bag.m"
            /* direct tailcall eliminated */
#line 437 "bag.m"
            {
#line 437 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
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
#line 435 "bag.m"
          }
#line 434 "bag.m"
      }
#line 434 "bag.m"
      break;
#line 434 "bag.m"
    }
#line 84 "bag.m"
}

#line 89 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 89 "bag.m"
  MR_Word mercury__bag__V_12_12,
#line 89 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 89 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 89 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 89 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 89 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 445 "bag.m"
    {
#line 445 "bag.m"
      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
#line 445 "bag.m"
      return;
    }
#line 442 "bag.m"
  }
#line 89 "bag.m"
}

#line 101 "bag.m"
MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 101 "bag.m"
  MR_Word mercury__bag__V_17_17,
#line 101 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 101 "bag.m"
  MR_Word mercury__bag__X_4,
#line 101 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 101 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 101 "bag.m"
{
#line 457 "bag.m"
  {
#line 457 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 457 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 457 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 457 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 457 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 459 "bag.m"
    MR_Integer mercury__bag__V_9_9;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_17_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 457 "bag.m"
    if (mercury__bag__succeeded)
#line 457 "bag.m"
      {
#line 459 "bag.m"
        mercury__bag__V_9_9 = (MR_Integer) 1;
#line 459 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_9_9);
#line 461 "bag.m"
        if (mercury__bag__succeeded)
#line 460 "bag.m"
          {
#line 460 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 460 "bag.m"
            {
#line 460 "bag.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_17_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 460 "bag.m"
          }
#line 461 "bag.m"
        else
#line 79 "tree234.opt"
          {
#line 79 "tree234.opt"
            MR_Word mercury__bag__V_7_28;
#line 79 "tree234.opt"
            MR_Word mercury__bag__conv1_STATE_VARIABLE_Map_8;

#line 79 "tree234.opt"
            {
#line 79 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, (MR_Word) mercury__bag__STATE_VARIABLE_Map_0_7, ((MR_Box) (mercury__bag__X_4)), &mercury__bag__conv1_STATE_VARIABLE_Map_8, &mercury__bag__V_7_28);
            }
#line 79 "tree234.opt"
            mercury__bag__STATE_VARIABLE_Map_8 = (MR_Word) mercury__bag__conv1_STATE_VARIABLE_Map_8;
#line 79 "tree234.opt"
          }
#line 457 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 457 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 457 "bag.m"
      }
#line 457 "bag.m"
    return mercury__bag__succeeded;
#line 457 "bag.m"
  }
#line 101 "bag.m"
}

#line 120 "bag.m"
MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 120 "bag.m"
  MR_Word mercury__bag__V_16_16,
#line 120 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 120 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 120 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 120 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 120 "bag.m"
{
#line 475 "bag.m"
  while (MR_TRUE)
#line 475 "bag.m"
    {
#line 475 "bag.m"
      /* tailcall optimized into a loop */
#line 475 "bag.m"
      {
#line 475 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 475 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "bag.m"
          {
#line 475 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 475 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 475 "bag.m"
          }
#line 475 "bag.m"
        else
#line 476 "bag.m"
          {
#line 476 "bag.m"
            MR_Word mercury__bag__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 477 "bag.m"
            {
#line 477 "bag.m"
              mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 476 "bag.m"
            if (mercury__bag__succeeded)
#line 478 "bag.m"
              {
#line 478 "bag.m"
                /* direct tailcall eliminated */
#line 478 "bag.m"
                {
#line 478 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 478 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 478 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 478 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 478 "bag.m"
                }
#line 478 "bag.m"
                continue;
#line 478 "bag.m"
              }
#line 476 "bag.m"
          }
#line 475 "bag.m"
        return mercury__bag__succeeded;
#line 475 "bag.m"
      }
#line 475 "bag.m"
      break;
#line 475 "bag.m"
    }
#line 120 "bag.m"
}

#line 127 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 127 "bag.m"
  MR_Word mercury__bag__V_15_15,
#line 127 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 127 "bag.m"
  MR_Word mercury__bag__Xs_4,
#line 127 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 127 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
#line 127 "bag.m"
{
#line 486 "bag.m"
  {
#line 486 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 486 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 484 "bag.m"
    {
#line 484 "bag.m"
      mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_15_15, mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 486 "bag.m"
    if (mercury__bag__succeeded)
#line 486 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 486 "bag.m"
    else
#line 487 "bag.m"
      {
#line 487 "bag.m"
        {
#line 487 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 487 "bag.m"
          return;
        }
#line 487 "bag.m"
      }
#line 486 "bag.m"
  }
#line 127 "bag.m"
}

#line 138 "bag.m"
void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 138 "bag.m"
  MR_Word mercury__bag__V_12_12,
#line 138 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 138 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 138 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 138 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 138 "bag.m"
{
#line 498 "bag.m"
  {
#line 498 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 498 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

#line 501 "bag.m"
    {
#line 501 "bag.m"
      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
#line 501 "bag.m"
      return;
    }
#line 498 "bag.m"
  }
#line 138 "bag.m"
}

#line 377 "bag.m"
void MR_CALL 
mercury__bag____Compare____bag_1_0(
#line 377 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 377 "bag.m"
  MR_Word * mercury__bag__HeadVar__1_1,
#line 377 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 377 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 377 "bag.m"
{
#line 377 "bag.m"
  {
#line 377 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 377 "bag.m"
    MR_Integer mercury__bag__CastX_6 = (MR_Integer) mercury__bag__HeadVar__2_2;
#line 377 "bag.m"
    MR_Integer mercury__bag__CastY_7 = (MR_Integer) mercury__bag__HeadVar__3_3;

#line 377 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_6 == mercury__bag__CastY_7);
#line 377 "bag.m"
    if (mercury__bag__succeeded)
#line 1900 "bag.c"
      *mercury__bag__HeadVar__1_1 = (MR_Integer) 0;
#line 377 "bag.m"
    else
#line 377 "bag.m"
      {
#line 377 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 377 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 377 "bag.m"
        MR_Word mercury__bag__V_5_5 = (MR_Word) mercury__bag__HeadVar__3_3;

#line 377 "bag.m"
        {
#line 377 "bag.m"
          mercury__tree234____Compare____tree234_2_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__HeadVar__1_1, mercury__bag__V_4_4, mercury__bag__V_5_5);
#line 377 "bag.m"
          return;
        }
#line 377 "bag.m"
      }
#line 377 "bag.m"
  }
#line 377 "bag.m"
}

#line 377 "bag.m"
MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0(
#line 377 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 377 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 377 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 377 "bag.m"
{
#line 377 "bag.m"
  {
#line 377 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 377 "bag.m"
    MR_Integer mercury__bag__CastX_5 = (MR_Integer) mercury__bag__HeadVar__1_1;
#line 377 "bag.m"
    MR_Integer mercury__bag__CastY_6 = (MR_Integer) mercury__bag__HeadVar__2_2;

#line 377 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_5 == mercury__bag__CastY_6);
#line 377 "bag.m"
    if (mercury__bag__succeeded)
#line 377 "bag.m"
      mercury__bag__succeeded = MR_TRUE;
#line 377 "bag.m"
    else
#line 377 "bag.m"
      {
#line 377 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 377 "bag.m"
        MR_Word mercury__bag__V_3_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 377 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 1964 "bag.c"
        {
#line 1966 "bag.c"
          return mercury__bag__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__V_3_3, mercury__bag__V_4_4);
        }
#line 377 "bag.m"
      }
#line 377 "bag.m"
    return mercury__bag__succeeded;
#line 377 "bag.m"
  }
#line 377 "bag.m"
}

#line 1021 "bag.m"
static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
#line 1021 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 1021 "bag.m"
  MR_Word mercury__bag__AXNs_3,
#line 1021 "bag.m"
  MR_Word mercury__bag__BXNs_4)
#line 1021 "bag.m"
{
#line 1027 "bag.m"
  while (MR_TRUE)
#line 1027 "bag.m"
    {
#line 1027 "bag.m"
      /* tailcall optimized into a loop */
#line 1027 "bag.m"
      {
#line 1027 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 1027 "bag.m"
        if ((mercury__bag__AXNs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1026 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 1027 "bag.m"
        else
#line 1028 "bag.m"
          {
#line 1028 "bag.m"
            MR_Word mercury__bag__HeadAXN_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 0)));
#line 1028 "bag.m"
            MR_Word mercury__bag__TailAXNs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 1)));
#line 1028 "bag.m"
            MR_Word mercury__bag__HeadBXN_7;
#line 1028 "bag.m"
            MR_Word mercury__bag__TailBXNs_8;
#line 1028 "bag.m"
            MR_Box mercury__bag__AX_9;
#line 1028 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 1028 "bag.m"
            MR_Box mercury__bag__BX_11;
#line 1028 "bag.m"
            MR_Integer mercury__bag__BXN_12;
#line 1028 "bag.m"
            MR_Word mercury__bag__XRes_13;

#line 2027 "bag.c"
            mercury__bag__succeeded = ((MR_tag((MR_Word) mercury__bag__BXNs_4)) == (MR_mktag((MR_Integer) 1)));
#line 2029 "bag.c"
            if (mercury__bag__succeeded)
#line 2031 "bag.c"
              {
#line 2033 "bag.c"
                mercury__bag__HeadBXN_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 0)));
#line 2035 "bag.c"
                mercury__bag__TailBXNs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 1)));
#line 1034 "bag.m"
                mercury__bag__AX_9 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 0));
#line 1034 "bag.m"
                mercury__bag__AXN_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 1)));
#line 1035 "bag.m"
                mercury__bag__BX_11 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 0));
#line 1035 "bag.m"
                mercury__bag__BXN_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 1)));
#line 1036 "bag.m"
                {
#line 1036 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_15, &mercury__bag__XRes_13, mercury__bag__AX_9, mercury__bag__BX_11);
                }
#line 1041 "bag.m"
#line 1041 "bag.m"
                switch (mercury__bag__XRes_13) {
#line 1041 "bag.m"
                  default:
#line 1041 "bag.m"
                    mercury__bag__succeeded = MR_FALSE;
#line 1041 "bag.m"
                    break;
#line 1041 "bag.m"
                  case (MR_Integer) 0:
#line 1042 "bag.m"
                    {
#line 1042 "bag.m"
                      MR_Word mercury__bag__XNRes_14;

#line 71 "private_builtin.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_10 < mercury__bag__BXN_12);
#line 74 "private_builtin.opt"
                      if (mercury__bag__succeeded)
#line 73 "private_builtin.opt"
                        mercury__bag__XNRes_14 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        {
#line 76 "private_builtin.opt"
                          mercury__bag__succeeded = (mercury__bag__AXN_10 == mercury__bag__BXN_12);
#line 79 "private_builtin.opt"
                          if (mercury__bag__succeeded)
#line 78 "private_builtin.opt"
                            mercury__bag__XNRes_14 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                          else
#line 80 "private_builtin.opt"
                            mercury__bag__XNRes_14 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                        }
#line 1049 "bag.m"
#line 1049 "bag.m"
                      switch (mercury__bag__XNRes_14) {
#line 1049 "bag.m"
                        default:
#line 1049 "bag.m"
                          mercury__bag__succeeded = MR_FALSE;
#line 1049 "bag.m"
                          break;
#line 1049 "bag.m"
                        case (MR_Integer) 1:
#line 1049 "bag.m"
                        case (MR_Integer) 0:
#line 1048 "bag.m"
                          {
#line 1048 "bag.m"
                            /* direct tailcall eliminated */
#line 1048 "bag.m"
                            {
#line 1048 "bag.m"
                              MR_Word mercury__bag__AXNs__tmp_copy_3 = mercury__bag__TailAXNs_6;
#line 1048 "bag.m"
                              MR_Word mercury__bag__BXNs__tmp_copy_4 = mercury__bag__TailBXNs_8;

#line 1048 "bag.m"
                              mercury__bag__BXNs_4 = mercury__bag__BXNs__tmp_copy_4;
#line 1048 "bag.m"
                              mercury__bag__AXNs_3 = mercury__bag__AXNs__tmp_copy_3;
#line 1048 "bag.m"
                            }
#line 1048 "bag.m"
                            continue;
#line 1048 "bag.m"
                          }
#line 1049 "bag.m"
                          break;
#line 1049 "bag.m"
                      }
#line 1042 "bag.m"
                    }
#line 1041 "bag.m"
                    break;
#line 1041 "bag.m"
                  case (MR_Integer) 2:
#line 1057 "bag.m"
                    {
#line 1057 "bag.m"
                      /* direct tailcall eliminated */
#line 1057 "bag.m"
                      {
#line 1057 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_4 = mercury__bag__TailBXNs_8;

#line 1057 "bag.m"
                        mercury__bag__BXNs_4 = mercury__bag__BXNs__tmp_copy_4;
#line 1057 "bag.m"
                      }
#line 1057 "bag.m"
                      continue;
#line 1057 "bag.m"
                    }
#line 1041 "bag.m"
                    break;
#line 1041 "bag.m"
                }
#line 2153 "bag.c"
              }
#line 1028 "bag.m"
          }
#line 1027 "bag.m"
        return mercury__bag__succeeded;
#line 1027 "bag.m"
      }
#line 1027 "bag.m"
      break;
#line 1027 "bag.m"
    }
#line 1021 "bag.m"
}

#line 948 "bag.m"
MR_bool MR_CALL 
mercury__bag__subset_compare_loop_3_p_0(
#line 948 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_21,
#line 948 "bag.m"
  MR_Word * mercury__bag__Res_4,
#line 948 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 948 "bag.m"
  MR_Word mercury__bag__BXNs_6)
#line 948 "bag.m"
{
#line 960 "bag.m"
  while (MR_TRUE)
#line 960 "bag.m"
    {
#line 960 "bag.m"
      /* tailcall optimized into a loop */
#line 960 "bag.m"
      {
#line 960 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 960 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "bag.m"
          {
#line 960 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 0;
#line 960 "bag.m"
            else
#line 963 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 1;
#line 960 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 960 "bag.m"
          }
#line 960 "bag.m"
        else
#line 960 "bag.m"
          {
#line 960 "bag.m"
            MR_Word mercury__bag__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 960 "bag.m"
            MR_Word mercury__bag__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 960 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "bag.m"
              {
#line 967 "bag.m"
                *mercury__bag__Res_4 = (MR_Integer) 2;
#line 967 "bag.m"
                mercury__bag__succeeded = MR_TRUE;
#line 967 "bag.m"
              }
#line 960 "bag.m"
            else
#line 969 "bag.m"
              {
#line 969 "bag.m"
                MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 969 "bag.m"
                MR_Word mercury__bag__TailBXNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 969 "bag.m"
                MR_Box mercury__bag__AX_15 = (MR_hl_field(MR_mktag(0), mercury__bag__V_24_24, (MR_Integer) 0));
#line 969 "bag.m"
                MR_Integer mercury__bag__AXN_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_24_24, (MR_Integer) 1)));
#line 969 "bag.m"
                MR_Box mercury__bag__BX_17 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
#line 969 "bag.m"
                MR_Integer mercury__bag__BXN_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
#line 969 "bag.m"
                MR_Word mercury__bag__XRes_19;

#line 973 "bag.m"
                {
#line 973 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_21, &mercury__bag__XRes_19, mercury__bag__AX_15, mercury__bag__BX_17);
                }
#line 982 "bag.m"
#line 982 "bag.m"
                switch (mercury__bag__XRes_19) {
#line 982 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 982 "bag.m"
                  case (MR_Integer) 1:
#line 975 "bag.m"
                    {
#line 977 "bag.m"
                      {
#line 977 "bag.m"
                        mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__BXNs_6, mercury__bag__V_23_23);
                      }
#line 975 "bag.m"
                      if (mercury__bag__succeeded)
#line 975 "bag.m"
                        {
#line 978 "bag.m"
                          *mercury__bag__Res_4 = (MR_Integer) 2;
#line 978 "bag.m"
                          mercury__bag__succeeded = MR_TRUE;
#line 975 "bag.m"
                        }
#line 975 "bag.m"
                    }
#line 982 "bag.m"
                    break;
#line 982 "bag.m"
                  case (MR_Integer) 0:
#line 983 "bag.m"
                    {
#line 983 "bag.m"
                      MR_Word mercury__bag__XNRes_20;

#line 71 "private_builtin.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_16 < mercury__bag__BXN_18);
#line 74 "private_builtin.opt"
                      if (mercury__bag__succeeded)
#line 73 "private_builtin.opt"
                        mercury__bag__XNRes_20 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        {
#line 76 "private_builtin.opt"
                          mercury__bag__succeeded = (mercury__bag__AXN_16 == mercury__bag__BXN_18);
#line 79 "private_builtin.opt"
                          if (mercury__bag__succeeded)
#line 78 "private_builtin.opt"
                            mercury__bag__XNRes_20 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                          else
#line 80 "private_builtin.opt"
                            mercury__bag__XNRes_20 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                        }
#line 993 "bag.m"
#line 993 "bag.m"
                      switch (mercury__bag__XNRes_20) {
#line 993 "bag.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 993 "bag.m"
                        case (MR_Integer) 1:
#line 986 "bag.m"
                          {
#line 988 "bag.m"
                            {
#line 988 "bag.m"
                              mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__V_23_23, mercury__bag__TailBXNs_14);
                            }
#line 986 "bag.m"
                            if (mercury__bag__succeeded)
#line 986 "bag.m"
                              {
#line 989 "bag.m"
                                *mercury__bag__Res_4 = (MR_Integer) 1;
#line 989 "bag.m"
                                mercury__bag__succeeded = MR_TRUE;
#line 986 "bag.m"
                              }
#line 986 "bag.m"
                          }
#line 993 "bag.m"
                          break;
#line 993 "bag.m"
                        case (MR_Integer) 0:
#line 994 "bag.m"
                          {
#line 994 "bag.m"
                            /* direct tailcall eliminated */
#line 994 "bag.m"
                            {
#line 994 "bag.m"
                              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_23_23;
#line 994 "bag.m"
                              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_14;

#line 994 "bag.m"
                              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 994 "bag.m"
                              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 994 "bag.m"
                            }
#line 994 "bag.m"
                            continue;
#line 994 "bag.m"
                          }
#line 993 "bag.m"
                          break;
#line 993 "bag.m"
                        case (MR_Integer) 2:
#line 997 "bag.m"
                          {
#line 999 "bag.m"
                            {
#line 999 "bag.m"
                              mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__TailBXNs_14, mercury__bag__V_23_23);
                            }
#line 997 "bag.m"
                            if (mercury__bag__succeeded)
#line 997 "bag.m"
                              {
#line 1000 "bag.m"
                                *mercury__bag__Res_4 = (MR_Integer) 2;
#line 1000 "bag.m"
                                mercury__bag__succeeded = MR_TRUE;
#line 997 "bag.m"
                              }
#line 997 "bag.m"
                          }
#line 993 "bag.m"
                          break;
#line 993 "bag.m"
                      }
#line 983 "bag.m"
                    }
#line 982 "bag.m"
                    break;
#line 982 "bag.m"
                  case (MR_Integer) 2:
#line 1006 "bag.m"
                    {
#line 1008 "bag.m"
                      {
#line 1008 "bag.m"
                        mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__AXNs_5, mercury__bag__TailBXNs_14);
                      }
#line 1006 "bag.m"
                      if (mercury__bag__succeeded)
#line 1006 "bag.m"
                        {
#line 1009 "bag.m"
                          *mercury__bag__Res_4 = (MR_Integer) 1;
#line 1009 "bag.m"
                          mercury__bag__succeeded = MR_TRUE;
#line 1006 "bag.m"
                        }
#line 1006 "bag.m"
                    }
#line 982 "bag.m"
                    break;
#line 982 "bag.m"
                }
#line 969 "bag.m"
              }
#line 960 "bag.m"
          }
#line 960 "bag.m"
        return mercury__bag__succeeded;
#line 960 "bag.m"
      }
#line 960 "bag.m"
      break;
#line 960 "bag.m"
    }
#line 948 "bag.m"
}

#line 911 "bag.m"
void MR_CALL 
mercury__bag__intersect_small_loop_4_p_0(
#line 911 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 911 "bag.m"
  MR_Word mercury__bag__MapA_5,
#line 911 "bag.m"
  MR_Word mercury__bag__MapB_6,
#line 911 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_MapAiB_0_13,
#line 911 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_MapAiB_14)
#line 911 "bag.m"
{
#line 923 "bag.m"
  while (MR_TRUE)
#line 923 "bag.m"
    {
#line 923 "bag.m"
      /* tailcall optimized into a loop */
#line 923 "bag.m"
      {
#line 923 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 923 "bag.m"
        MR_Box mercury__bag__X_8;
#line 923 "bag.m"
        MR_Integer mercury__bag__AXN_9;
#line 923 "bag.m"
        MR_Word mercury__bag__NextMapA_10;
#line 915 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "tree234.opt"
        MR_Word mercury__bag__V_9_29;
#line 398 "tree234.opt"
        MR_Box mercury__bag__conv0_AXN_9;

#line 398 "tree234.opt"
        {
#line 398 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_18_18, mercury__bag__MapA_5, &mercury__bag__X_8, &mercury__bag__conv0_AXN_9, &mercury__bag__NextMapA_10, &mercury__bag__V_9_29);
        }
#line 398 "tree234.opt"
        if (mercury__bag__succeeded)
#line 398 "tree234.opt"
          {
#line 398 "tree234.opt"
            mercury__bag__AXN_9 = ((MR_Integer) mercury__bag__conv0_AXN_9);
#line 398 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
          }
#line 923 "bag.m"
        if (mercury__bag__succeeded)
#line 921 "bag.m"
          {
#line 921 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_MapAiB_15_15;
#line 919 "bag.m"
            MR_Integer mercury__bag__BXN_11;
#line 916 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
            MR_Box mercury__bag__conv1_BXN_11;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_19_19, mercury__bag__MapB_6, mercury__bag__X_8, &mercury__bag__conv1_BXN_11);
            }
#line 452 "map.opt"
            if (mercury__bag__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__bag__BXN_11 = ((MR_Integer) mercury__bag__conv1_BXN_11);
#line 452 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 919 "bag.m"
            if (mercury__bag__succeeded)
#line 917 "bag.m"
              {
#line 917 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_20_20;
#line 917 "bag.m"
                MR_Integer mercury__bag__XN_12;

#line 242 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AXN_9 < mercury__bag__BXN_11);
#line 245 "int.opt"
                if (mercury__bag__succeeded)
#line 244 "int.opt"
                  mercury__bag__XN_12 = mercury__bag__AXN_9;
#line 245 "int.opt"
                else
#line 246 "int.opt"
                  mercury__bag__XN_12 = mercury__bag__BXN_11;
#line 2530 "bag.c"
                mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 918 "bag.m"
                {
#line 918 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__X_8, ((MR_Box) (mercury__bag__XN_12)), mercury__bag__STATE_VARIABLE_MapAiB_0_13, &mercury__bag__STATE_VARIABLE_MapAiB_15_15);
                }
#line 917 "bag.m"
              }
#line 919 "bag.m"
            else
#line 919 "bag.m"
              mercury__bag__STATE_VARIABLE_MapAiB_15_15 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
#line 922 "bag.m"
            /* direct tailcall eliminated */
#line 922 "bag.m"
            {
#line 922 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_5 = mercury__bag__NextMapA_10;
#line 922 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_MapAiB_0__tmp_copy_13 = mercury__bag__STATE_VARIABLE_MapAiB_15_15;

#line 922 "bag.m"
              mercury__bag__STATE_VARIABLE_MapAiB_0_13 = mercury__bag__STATE_VARIABLE_MapAiB_0__tmp_copy_13;
#line 922 "bag.m"
              mercury__bag__MapA_5 = mercury__bag__MapA__tmp_copy_5;
#line 922 "bag.m"
            }
#line 922 "bag.m"
            continue;
#line 921 "bag.m"
          }
#line 923 "bag.m"
        else
#line 923 "bag.m"
          *mercury__bag__STATE_VARIABLE_MapAiB_14 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
#line 923 "bag.m"
      }
#line 923 "bag.m"
      break;
#line 923 "bag.m"
    }
#line 911 "bag.m"
}

#line 866 "bag.m"
static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
#line 866 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 866 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 866 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 866 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 866 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 866 "bag.m"
{
#line 872 "bag.m"
  while (MR_TRUE)
#line 872 "bag.m"
    {
#line 872 "bag.m"
      /* tailcall optimized into a loop */
#line 872 "bag.m"
      {
#line 872 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 872 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 872 "bag.m"
          else
#line 873 "bag.m"
            {
#line 873 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 874 "bag.m"
              MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

#line 876 "bag.m"
              {
#line 876 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
#line 876 "bag.m"
                return;
              }
#line 873 "bag.m"
            }
#line 872 "bag.m"
        else
#line 872 "bag.m"
          {
#line 872 "bag.m"
            MR_Word mercury__bag__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 872 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 872 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "bag.m"
              {
#line 880 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_32_32, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
#line 880 "bag.m"
                return;
              }
#line 872 "bag.m"
            else
#line 882 "bag.m"
              {
#line 882 "bag.m"
                MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 882 "bag.m"
                MR_Box mercury__bag__AX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 0));
#line 882 "bag.m"
                MR_Integer mercury__bag__AXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 1)));
#line 882 "bag.m"
                MR_Box mercury__bag__BX_16 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
#line 882 "bag.m"
                MR_Integer mercury__bag__BXN_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
#line 882 "bag.m"
                MR_Word mercury__bag__Res_18;
#line 882 "bag.m"
                MR_Word mercury__bag__TailBXNs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 886 "bag.m"
                {
#line 886 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_18, mercury__bag__AX_14, mercury__bag__BX_16);
                }
#line 891 "bag.m"
#line 891 "bag.m"
                switch (mercury__bag__Res_18) {
#line 891 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 891 "bag.m"
                  case (MR_Integer) 1:
#line 888 "bag.m"
                    {
#line 888 "bag.m"
                      /* direct tailcall eliminated */
#line 888 "bag.m"
                      {
#line 888 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;

#line 888 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 888 "bag.m"
                      }
#line 888 "bag.m"
                      continue;
#line 888 "bag.m"
                    }
#line 891 "bag.m"
                    break;
#line 891 "bag.m"
                  case (MR_Integer) 0:
#line 892 "bag.m"
                    {
#line 892 "bag.m"
                      MR_Integer mercury__bag__XN_19;
#line 892 "bag.m"
                      MR_Word mercury__bag__HeadXN_20;
#line 892 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

#line 242 "int.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_15 < mercury__bag__BXN_17);
#line 245 "int.opt"
                      if (mercury__bag__succeeded)
#line 244 "int.opt"
                        mercury__bag__XN_19 = mercury__bag__AXN_15;
#line 245 "int.opt"
                      else
#line 246 "int.opt"
                        mercury__bag__XN_19 = mercury__bag__BXN_17;
#line 894 "bag.m"
                      {
#line 894 "bag.m"
                        mercury__bag__HeadXN_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 0) = mercury__bag__AX_14;
#line 894 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 1) = ((MR_Box) (mercury__bag__XN_19));
#line 894 "bag.m"
                      }
#line 895 "bag.m"
                      {
#line 895 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 0) = ((MR_Box) (mercury__bag__HeadXN_20));
#line 895 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21));
#line 895 "bag.m"
                      }
#line 896 "bag.m"
                      /* direct tailcall eliminated */
#line 896 "bag.m"
                      {
#line 896 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 896 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_29;
#line 896 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_21 = mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

#line 896 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_21;
#line 896 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 896 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 896 "bag.m"
                      }
#line 896 "bag.m"
                      continue;
#line 892 "bag.m"
                    }
#line 891 "bag.m"
                    break;
#line 891 "bag.m"
                  case (MR_Integer) 2:
#line 898 "bag.m"
                    {
#line 898 "bag.m"
                      /* direct tailcall eliminated */
#line 898 "bag.m"
                      {
#line 898 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_29;

#line 898 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 898 "bag.m"
                      }
#line 898 "bag.m"
                      continue;
#line 898 "bag.m"
                    }
#line 891 "bag.m"
                    break;
#line 891 "bag.m"
                }
#line 882 "bag.m"
              }
#line 872 "bag.m"
          }
#line 872 "bag.m"
      }
#line 872 "bag.m"
      break;
#line 872 "bag.m"
    }
#line 866 "bag.m"
}

#line 833 "bag.m"
void MR_CALL 
mercury__bag__union_small_loop_3_p_0(
#line 833 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 833 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 833 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 833 "bag.m"
  MR_Word * mercury__bag__MapAuB_6)
#line 833 "bag.m"
{
#line 845 "bag.m"
  while (MR_TRUE)
#line 845 "bag.m"
    {
#line 845 "bag.m"
      /* tailcall optimized into a loop */
#line 845 "bag.m"
      {
#line 845 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 845 "bag.m"
        MR_Box mercury__bag__X_7;
#line 845 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 845 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 837 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "tree234.opt"
        MR_Word mercury__bag__V_9_26;
#line 398 "tree234.opt"
        MR_Box mercury__bag__conv0_BXN_8;

#line 398 "tree234.opt"
        {
#line 398 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_14_14, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_26);
        }
#line 398 "tree234.opt"
        if (mercury__bag__succeeded)
#line 398 "tree234.opt"
          {
#line 398 "tree234.opt"
            mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
#line 398 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
          }
#line 845 "bag.m"
        if (mercury__bag__succeeded)
#line 843 "bag.m"
          {
#line 843 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 841 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 838 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
            MR_Box mercury__bag__conv1_AXN_10;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
            }
#line 452 "map.opt"
            if (mercury__bag__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
#line 452 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 841 "bag.m"
            if (mercury__bag__succeeded)
#line 839 "bag.m"
              {
#line 839 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 839 "bag.m"
                MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 + mercury__bag__BXN_8);

#line 840 "bag.m"
                {
#line 840 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 839 "bag.m"
              }
#line 841 "bag.m"
            else
#line 842 "bag.m"
              {
#line 842 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 842 "bag.m"
                {
#line 842 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 842 "bag.m"
              }
#line 844 "bag.m"
            /* direct tailcall eliminated */
#line 844 "bag.m"
            {
#line 844 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 844 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 844 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 844 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 844 "bag.m"
            }
#line 844 "bag.m"
            continue;
#line 843 "bag.m"
          }
#line 845 "bag.m"
        else
#line 846 "bag.m"
          *mercury__bag__MapAuB_6 = mercury__bag__MapA_4;
#line 845 "bag.m"
      }
#line 845 "bag.m"
      break;
#line 845 "bag.m"
    }
#line 833 "bag.m"
}

#line 786 "bag.m"
static void MR_CALL 
mercury__bag__union_loop_4_p_2(
#line 786 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 786 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 786 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 786 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 786 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 786 "bag.m"
{
#line 792 "bag.m"
  while (MR_TRUE)
#line 792 "bag.m"
    {
#line 792 "bag.m"
      /* tailcall optimized into a loop */
#line 792 "bag.m"
      {
#line 792 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 792 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 792 "bag.m"
          else
#line 793 "bag.m"
            {
#line 793 "bag.m"
              MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 793 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 793 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 795 "bag.m"
              {
#line 795 "bag.m"
                mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 795 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 795 "bag.m"
              }
#line 796 "bag.m"
              {
#line 796 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
#line 796 "bag.m"
                return;
              }
#line 793 "bag.m"
            }
#line 792 "bag.m"
        else
#line 792 "bag.m"
          {
#line 792 "bag.m"
            MR_Word mercury__bag__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 792 "bag.m"
            MR_Word mercury__bag__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 792 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "bag.m"
              {
#line 798 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 800 "bag.m"
                {
#line 800 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 800 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 800 "bag.m"
                }
#line 801 "bag.m"
                {
#line 801 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_36_36, mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
#line 801 "bag.m"
                  return;
                }
#line 798 "bag.m"
              }
#line 792 "bag.m"
            else
#line 803 "bag.m"
              {
#line 803 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 0));
#line 803 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 1)));
#line 803 "bag.m"
                MR_Box mercury__bag__BX_14;
#line 803 "bag.m"
                MR_Integer mercury__bag__BXN_15;
#line 803 "bag.m"
                MR_Word mercury__bag__Res_16;
#line 803 "bag.m"
                MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 803 "bag.m"
                MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 806 "bag.m"
                mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
#line 806 "bag.m"
                mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
#line 807 "bag.m"
                {
#line 807 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 813 "bag.m"
#line 813 "bag.m"
                switch (mercury__bag__Res_16) {
#line 813 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 813 "bag.m"
                  case (MR_Integer) 1:
#line 809 "bag.m"
                    {
#line 809 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

#line 811 "bag.m"
                      {
#line 811 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 811 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 811 "bag.m"
                      }
#line 812 "bag.m"
                      /* direct tailcall eliminated */
#line 812 "bag.m"
                      {
#line 812 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 812 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

#line 812 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 812 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 812 "bag.m"
                      }
#line 812 "bag.m"
                      continue;
#line 809 "bag.m"
                    }
#line 813 "bag.m"
                    break;
#line 813 "bag.m"
                  case (MR_Integer) 0:
#line 814 "bag.m"
                    {
#line 814 "bag.m"
                      MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 + mercury__bag__BXN_15);
#line 814 "bag.m"
                      MR_Word mercury__bag__HeadXN_18;
#line 814 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

#line 816 "bag.m"
                      {
#line 816 "bag.m"
                        mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 816 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 816 "bag.m"
                      }
#line 817 "bag.m"
                      {
#line 817 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 817 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 817 "bag.m"
                      }
#line 818 "bag.m"
                      /* direct tailcall eliminated */
#line 818 "bag.m"
                      {
#line 818 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 818 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 818 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

#line 818 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 818 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 818 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 818 "bag.m"
                      }
#line 818 "bag.m"
                      continue;
#line 814 "bag.m"
                    }
#line 813 "bag.m"
                    break;
#line 813 "bag.m"
                  case (MR_Integer) 2:
#line 820 "bag.m"
                    {
#line 820 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

#line 822 "bag.m"
                      {
#line 822 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
#line 822 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 822 "bag.m"
                      }
#line 823 "bag.m"
                      /* direct tailcall eliminated */
#line 823 "bag.m"
                      {
#line 823 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 823 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

#line 823 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 823 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 823 "bag.m"
                      }
#line 823 "bag.m"
                      continue;
#line 820 "bag.m"
                    }
#line 813 "bag.m"
                    break;
#line 813 "bag.m"
                }
#line 803 "bag.m"
              }
#line 792 "bag.m"
          }
#line 792 "bag.m"
      }
#line 792 "bag.m"
      break;
#line 792 "bag.m"
    }
#line 786 "bag.m"
}

#line 753 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_small_loop_3_p_0(
#line 753 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 753 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 753 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 753 "bag.m"
  MR_Word * mercury__bag__MapAlubB_6)
#line 753 "bag.m"
{
#line 765 "bag.m"
  while (MR_TRUE)
#line 765 "bag.m"
    {
#line 765 "bag.m"
      /* tailcall optimized into a loop */
#line 765 "bag.m"
      {
#line 765 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 765 "bag.m"
        MR_Box mercury__bag__X_7;
#line 765 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 765 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 757 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "tree234.opt"
        MR_Word mercury__bag__V_9_26;
#line 398 "tree234.opt"
        MR_Box mercury__bag__conv0_BXN_8;

#line 398 "tree234.opt"
        {
#line 398 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_14_14, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_26);
        }
#line 398 "tree234.opt"
        if (mercury__bag__succeeded)
#line 398 "tree234.opt"
          {
#line 398 "tree234.opt"
            mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
#line 398 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
          }
#line 765 "bag.m"
        if (mercury__bag__succeeded)
#line 763 "bag.m"
          {
#line 763 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 761 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 758 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
            MR_Box mercury__bag__conv1_AXN_10;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
            }
#line 452 "map.opt"
            if (mercury__bag__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
#line 452 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 761 "bag.m"
            if (mercury__bag__succeeded)
#line 759 "bag.m"
              {
#line 759 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_16_16;
#line 759 "bag.m"
                MR_Integer mercury__bag__XN_11;

#line 213 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AXN_10 > mercury__bag__BXN_8);
#line 216 "int.opt"
                if (mercury__bag__succeeded)
#line 215 "int.opt"
                  mercury__bag__XN_11 = mercury__bag__AXN_10;
#line 216 "int.opt"
                else
#line 217 "int.opt"
                  mercury__bag__XN_11 = mercury__bag__BXN_8;
#line 3311 "bag.c"
                mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 760 "bag.m"
                {
#line 760 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 759 "bag.m"
              }
#line 761 "bag.m"
            else
#line 762 "bag.m"
              {
#line 762 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 762 "bag.m"
                {
#line 762 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 762 "bag.m"
              }
#line 764 "bag.m"
            /* direct tailcall eliminated */
#line 764 "bag.m"
            {
#line 764 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 764 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 764 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 764 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 764 "bag.m"
            }
#line 764 "bag.m"
            continue;
#line 763 "bag.m"
          }
#line 765 "bag.m"
        else
#line 766 "bag.m"
          *mercury__bag__MapAlubB_6 = mercury__bag__MapA_4;
#line 765 "bag.m"
      }
#line 765 "bag.m"
      break;
#line 765 "bag.m"
    }
#line 753 "bag.m"
}

#line 706 "bag.m"
static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
#line 706 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 706 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 706 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 706 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 706 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 706 "bag.m"
{
#line 712 "bag.m"
  while (MR_TRUE)
#line 712 "bag.m"
    {
#line 712 "bag.m"
      /* tailcall optimized into a loop */
#line 712 "bag.m"
      {
#line 712 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 712 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 712 "bag.m"
          else
#line 713 "bag.m"
            {
#line 713 "bag.m"
              MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 713 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 713 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 715 "bag.m"
              {
#line 715 "bag.m"
                mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 715 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 715 "bag.m"
              }
#line 716 "bag.m"
              {
#line 716 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
#line 716 "bag.m"
                return;
              }
#line 713 "bag.m"
            }
#line 712 "bag.m"
        else
#line 712 "bag.m"
          {
#line 712 "bag.m"
            MR_Word mercury__bag__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 712 "bag.m"
            MR_Word mercury__bag__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 712 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "bag.m"
              {
#line 718 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 720 "bag.m"
                {
#line 720 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 720 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 720 "bag.m"
                }
#line 721 "bag.m"
                {
#line 721 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_36_36, mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
#line 721 "bag.m"
                  return;
                }
#line 718 "bag.m"
              }
#line 712 "bag.m"
            else
#line 723 "bag.m"
              {
#line 723 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 0));
#line 723 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 1)));
#line 723 "bag.m"
                MR_Box mercury__bag__BX_14;
#line 723 "bag.m"
                MR_Integer mercury__bag__BXN_15;
#line 723 "bag.m"
                MR_Word mercury__bag__Res_16;
#line 723 "bag.m"
                MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 723 "bag.m"
                MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 726 "bag.m"
                mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
#line 726 "bag.m"
                mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
#line 727 "bag.m"
                {
#line 727 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 733 "bag.m"
#line 733 "bag.m"
                switch (mercury__bag__Res_16) {
#line 733 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 733 "bag.m"
                  case (MR_Integer) 1:
#line 729 "bag.m"
                    {
#line 729 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

#line 731 "bag.m"
                      {
#line 731 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 731 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 731 "bag.m"
                      }
#line 732 "bag.m"
                      /* direct tailcall eliminated */
#line 732 "bag.m"
                      {
#line 732 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 732 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

#line 732 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 732 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 732 "bag.m"
                      }
#line 732 "bag.m"
                      continue;
#line 729 "bag.m"
                    }
#line 733 "bag.m"
                    break;
#line 733 "bag.m"
                  case (MR_Integer) 0:
#line 734 "bag.m"
                    {
#line 734 "bag.m"
                      MR_Integer mercury__bag__XN_17;
#line 734 "bag.m"
                      MR_Word mercury__bag__HeadXN_18;
#line 734 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

#line 213 "int.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_13 > mercury__bag__BXN_15);
#line 216 "int.opt"
                      if (mercury__bag__succeeded)
#line 215 "int.opt"
                        mercury__bag__XN_17 = mercury__bag__AXN_13;
#line 216 "int.opt"
                      else
#line 217 "int.opt"
                        mercury__bag__XN_17 = mercury__bag__BXN_15;
#line 736 "bag.m"
                      {
#line 736 "bag.m"
                        mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 736 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 736 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 736 "bag.m"
                      }
#line 737 "bag.m"
                      {
#line 737 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 737 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 737 "bag.m"
                      }
#line 738 "bag.m"
                      /* direct tailcall eliminated */
#line 738 "bag.m"
                      {
#line 738 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 738 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 738 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

#line 738 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 738 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 738 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 738 "bag.m"
                      }
#line 738 "bag.m"
                      continue;
#line 734 "bag.m"
                    }
#line 733 "bag.m"
                    break;
#line 733 "bag.m"
                  case (MR_Integer) 2:
#line 740 "bag.m"
                    {
#line 740 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

#line 742 "bag.m"
                      {
#line 742 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
#line 742 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 742 "bag.m"
                      }
#line 743 "bag.m"
                      /* direct tailcall eliminated */
#line 743 "bag.m"
                      {
#line 743 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 743 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

#line 743 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 743 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 743 "bag.m"
                      }
#line 743 "bag.m"
                      continue;
#line 740 "bag.m"
                    }
#line 733 "bag.m"
                    break;
#line 733 "bag.m"
                }
#line 723 "bag.m"
              }
#line 712 "bag.m"
          }
#line 712 "bag.m"
      }
#line 712 "bag.m"
      break;
#line 712 "bag.m"
    }
#line 706 "bag.m"
}

#line 669 "bag.m"
void MR_CALL 
mercury__bag__subtract_small_loop_3_p_0(
#line 669 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 669 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 669 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 669 "bag.m"
  MR_Word * mercury__bag__MapAmB_6)
#line 669 "bag.m"
{
#line 685 "bag.m"
  while (MR_TRUE)
#line 685 "bag.m"
    {
#line 685 "bag.m"
      /* tailcall optimized into a loop */
#line 685 "bag.m"
      {
#line 685 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 685 "bag.m"
        MR_Box mercury__bag__X_7;
#line 685 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 685 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 673 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "tree234.opt"
        MR_Word mercury__bag__V_9_27;
#line 398 "tree234.opt"
        MR_Box mercury__bag__conv0_BXN_8;

#line 398 "tree234.opt"
        {
#line 398 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_27);
        }
#line 398 "tree234.opt"
        if (mercury__bag__succeeded)
#line 398 "tree234.opt"
          {
#line 398 "tree234.opt"
            mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
#line 398 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
          }
#line 685 "bag.m"
        if (mercury__bag__succeeded)
#line 683 "bag.m"
          {
#line 683 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 681 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 674 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
            MR_Box mercury__bag__conv1_AXN_10;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
            }
#line 452 "map.opt"
            if (mercury__bag__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
#line 452 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 681 "bag.m"
            if (mercury__bag__succeeded)
#line 675 "bag.m"
              {
#line 675 "bag.m"
                MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 - mercury__bag__BXN_8);

#line 676 "bag.m"
                mercury__bag__succeeded = (mercury__bag__XN_11 > (MR_Integer) 0);
#line 678 "bag.m"
                if (mercury__bag__succeeded)
#line 677 "bag.m"
                  {
#line 677 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 677 "bag.m"
                    {
#line 677 "bag.m"
                      mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                    }
#line 677 "bag.m"
                  }
#line 678 "bag.m"
                else
#line 679 "bag.m"
                  {
#line 679 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 79 "tree234.opt"
                    MR_Word mercury__bag__V_7_37;

#line 79 "tree234.opt"
                    {
#line 79 "tree234.opt"
                      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_18_18, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__NextMapA_12, &mercury__bag__V_7_37);
                    }
#line 679 "bag.m"
                  }
#line 675 "bag.m"
              }
#line 681 "bag.m"
            else
#line 682 "bag.m"
              mercury__bag__NextMapA_12 = mercury__bag__MapA_4;
#line 684 "bag.m"
            /* direct tailcall eliminated */
#line 684 "bag.m"
            {
#line 684 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 684 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 684 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 684 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 684 "bag.m"
            }
#line 684 "bag.m"
            continue;
#line 683 "bag.m"
          }
#line 685 "bag.m"
        else
#line 686 "bag.m"
          *mercury__bag__MapAmB_6 = mercury__bag__MapA_4;
#line 685 "bag.m"
      }
#line 685 "bag.m"
      break;
#line 685 "bag.m"
    }
#line 669 "bag.m"
}

#line 624 "bag.m"
static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
#line 624 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 624 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 624 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 624 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 624 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
#line 624 "bag.m"
{
#line 630 "bag.m"
  while (MR_TRUE)
#line 630 "bag.m"
    {
#line 630 "bag.m"
      /* tailcall optimized into a loop */
#line 630 "bag.m"
      {
#line 630 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 630 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 630 "bag.m"
        else
#line 630 "bag.m"
          {
#line 630 "bag.m"
            MR_Word mercury__bag__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 630 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 630 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "bag.m"
              {
#line 631 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 633 "bag.m"
                {
#line 633 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_33_33));
#line 633 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 633 "bag.m"
                }
#line 634 "bag.m"
                {
#line 634 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(mercury__bag__V_32_32, mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAmBXNs_20);
#line 634 "bag.m"
                  return;
                }
#line 631 "bag.m"
              }
#line 630 "bag.m"
            else
#line 636 "bag.m"
              {
#line 636 "bag.m"
                MR_Word mercury__bag__HeadBXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 636 "bag.m"
                MR_Word mercury__bag__TailBXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 636 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 0));
#line 636 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 1)));
#line 636 "bag.m"
                MR_Box mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 0));
#line 636 "bag.m"
                MR_Integer mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 1)));
#line 636 "bag.m"
                MR_Word mercury__bag__Res_16;

#line 640 "bag.m"
                {
#line 640 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 646 "bag.m"
#line 646 "bag.m"
                switch (mercury__bag__Res_16) {
#line 646 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 646 "bag.m"
                  case (MR_Integer) 1:
#line 642 "bag.m"
                    {
#line 642 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

#line 644 "bag.m"
                      {
#line 644 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_33_33));
#line 644 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 644 "bag.m"
                      }
#line 645 "bag.m"
                      /* direct tailcall eliminated */
#line 645 "bag.m"
                      {
#line 645 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 645 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

#line 645 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 645 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 645 "bag.m"
                      }
#line 645 "bag.m"
                      continue;
#line 642 "bag.m"
                    }
#line 646 "bag.m"
                    break;
#line 646 "bag.m"
                  case (MR_Integer) 0:
#line 647 "bag.m"
                    {
#line 647 "bag.m"
                      MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 - mercury__bag__BXN_15);
#line 647 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

#line 649 "bag.m"
                      mercury__bag__succeeded = (mercury__bag__XN_17 > (MR_Integer) 0);
#line 652 "bag.m"
                      if (mercury__bag__succeeded)
#line 650 "bag.m"
                        {
#line 650 "bag.m"
                          MR_Word mercury__bag__HeadXN_18;

#line 650 "bag.m"
                          {
#line 650 "bag.m"
                            mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "bag.m"
                            MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 650 "bag.m"
                            MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 650 "bag.m"
                          }
#line 651 "bag.m"
                          {
#line 651 "bag.m"
                            mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "bag.m"
                            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 651 "bag.m"
                            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 651 "bag.m"
                          }
#line 650 "bag.m"
                        }
#line 652 "bag.m"
                      else
#line 652 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 655 "bag.m"
                      /* direct tailcall eliminated */
#line 655 "bag.m"
                      {
#line 655 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 655 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_11;
#line 655 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

#line 655 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 655 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 655 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 655 "bag.m"
                      }
#line 655 "bag.m"
                      continue;
#line 647 "bag.m"
                    }
#line 646 "bag.m"
                    break;
#line 646 "bag.m"
                  case (MR_Integer) 2:
#line 657 "bag.m"
                    {
#line 657 "bag.m"
                      /* direct tailcall eliminated */
#line 657 "bag.m"
                      {
#line 657 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_11;

#line 657 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 657 "bag.m"
                      }
#line 657 "bag.m"
                      continue;
#line 657 "bag.m"
                    }
#line 646 "bag.m"
                    break;
#line 646 "bag.m"
                }
#line 636 "bag.m"
              }
#line 630 "bag.m"
          }
#line 630 "bag.m"
      }
#line 630 "bag.m"
      break;
#line 630 "bag.m"
    }
#line 624 "bag.m"
}

#line 594 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_duplicated_2_p_0(
#line 594 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 594 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 594 "bag.m"
  MR_Box * mercury__bag__X_3)
#line 594 "bag.m"
{
#line 596 "bag.m"
  {
#line 596 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 596 "bag.m"
    MR_Integer mercury__bag__XN_4;

#line 596 "bag.m"
    *mercury__bag__X_3 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 596 "bag.m"
    mercury__bag__XN_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "bag.m"
    mercury__bag__succeeded = (mercury__bag__XN_4 > (MR_Integer) 1);
#line 596 "bag.m"
    return mercury__bag__succeeded;
#line 596 "bag.m"
  }
#line 594 "bag.m"
}

#line 565 "bag.m"
void MR_CALL 
mercury__bag__prepend_n_xs_4_p_0(
#line 565 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 565 "bag.m"
  MR_Box mercury__bag__X_5,
#line 565 "bag.m"
  MR_Integer mercury__bag__N_6,
#line 565 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevXs_0_8,
#line 565 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevXs_9)
#line 565 "bag.m"
{
#line 570 "bag.m"
  while (MR_TRUE)
#line 570 "bag.m"
    {
#line 570 "bag.m"
      /* tailcall optimized into a loop */
#line 570 "bag.m"
      {
#line 570 "bag.m"
        MR_bool mercury__bag__succeeded = (mercury__bag__N_6 <= (MR_Integer) 0);

#line 570 "bag.m"
        if (mercury__bag__succeeded)
#line 570 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevXs_9 = mercury__bag__STATE_VARIABLE_RevXs_0_8;
#line 570 "bag.m"
        else
#line 571 "bag.m"
          {
#line 571 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevXs_11_11;
#line 571 "bag.m"
            MR_Integer mercury__bag__V_12_12;

#line 571 "bag.m"
            {
#line 571 "bag.m"
              mercury__bag__STATE_VARIABLE_RevXs_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 0) = mercury__bag__X_5;
#line 571 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevXs_0_8));
#line 571 "bag.m"
            }
#line 572 "bag.m"
            mercury__bag__V_12_12 = (mercury__bag__N_6 - (MR_Integer) 1);
#line 572 "bag.m"
            /* direct tailcall eliminated */
#line 572 "bag.m"
            {
#line 572 "bag.m"
              MR_Integer mercury__bag__N__tmp_copy_6 = mercury__bag__V_12_12;
#line 572 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevXs_0__tmp_copy_8 = mercury__bag__STATE_VARIABLE_RevXs_11_11;

#line 572 "bag.m"
              mercury__bag__STATE_VARIABLE_RevXs_0_8 = mercury__bag__STATE_VARIABLE_RevXs_0__tmp_copy_8;
#line 572 "bag.m"
              mercury__bag__N_6 = mercury__bag__N__tmp_copy_6;
#line 572 "bag.m"
            }
#line 572 "bag.m"
            continue;
#line 571 "bag.m"
          }
#line 570 "bag.m"
      }
#line 570 "bag.m"
      break;
#line 570 "bag.m"
    }
#line 565 "bag.m"
}

#line 345 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_unique_1_f_0(
#line 345 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 345 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 345 "bag.m"
{
#line 1074 "bag.m"
  {
#line 1074 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1074 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 1074 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1074 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 43 "map.opt"
    {
#line 43 "map.opt"
      mercury__tree234__count_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__TypeCtorInfo_5_5, mercury__bag__Map_3, &mercury__bag__HeadVar__2_2);
    }
#line 1074 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 1074 "bag.m"
  }
#line 345 "bag.m"
}

#line 340 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_1_f_0(
#line 340 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 340 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 340 "bag.m"
{
#line 1072 "bag.m"
  {
#line 1072 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1072 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 1072 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1072 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 1072 "bag.m"
    MR_Word mercury__bag__V_5_5;
#line 1072 "bag.m"
    MR_Word mercury__bag__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 416 "tree234.opt"
    {
#line 416 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_18, &mercury__bag__V_5_5);
    }
#line 407 "list.opt"
    {
#line 407 "list.opt"
      mercury__bag__foldl__ho9_4_p_in__list_0(mercury__bag__V_5_5, (MR_Integer) 0, &mercury__bag__HeadVar__2_2);
    }
#line 1072 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 1072 "bag.m"
  }
#line 340 "bag.m"
}

#line 332 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_5(
#line 332 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 332 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 332 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 332 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 332 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 332 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 332 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 332 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 332 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 332 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1067 "bag.m"
    return mercury__bag__succeeded;
#line 1067 "bag.m"
  }
#line 332 "bag.m"
}

#line 330 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_4(
#line 330 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 330 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 330 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 330 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 330 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 330 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 330 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 330 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 330 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 330 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1067 "bag.m"
    return mercury__bag__succeeded;
#line 1067 "bag.m"
  }
#line 330 "bag.m"
}

#line 328 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_3(
#line 328 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 328 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 328 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 328 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 328 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 328 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 328 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 328 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 328 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 328 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1067 "bag.m"
    return mercury__bag__succeeded;
#line 1067 "bag.m"
  }
#line 328 "bag.m"
}

#line 326 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_2(
#line 326 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 326 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 326 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 326 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 326 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 326 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 326 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 326 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 326 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 326 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_2(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
#line 190 "map.opt"
      return;
    }
#line 1067 "bag.m"
  }
#line 326 "bag.m"
}

#line 324 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_1(
#line 324 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 324 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 324 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 324 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 324 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 324 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 324 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 324 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 324 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 324 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_1(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
#line 190 "map.opt"
      return;
    }
#line 1067 "bag.m"
  }
#line 324 "bag.m"
}

#line 322 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_0(
#line 322 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 322 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 322 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 322 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 322 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 322 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 322 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 322 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 322 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 322 "bag.m"
{
#line 1067 "bag.m"
  {
#line 1067 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1067 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1067 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
#line 190 "map.opt"
      return;
    }
#line 1067 "bag.m"
  }
#line 322 "bag.m"
}

#line 317 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_5(
#line 317 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 317 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 317 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 317 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 317 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 317 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 317 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl_4_p_5(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 317 "bag.m"
}

#line 316 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_4(
#line 316 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 316 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 316 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 316 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 316 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 316 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 316 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl_4_p_4(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 316 "bag.m"
}

#line 315 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_3(
#line 315 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 315 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 315 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 315 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 315 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 315 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 315 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      return mercury__bag__succeeded = mercury__tree234__foldl_4_p_3(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 315 "bag.m"
}

#line 314 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_2(
#line 314 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 314 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 314 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 314 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 314 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 314 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 314 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
#line 174 "map.opt"
      return;
    }
#line 1064 "bag.m"
  }
#line 314 "bag.m"
}

#line 313 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_1(
#line 313 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 313 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 313 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 313 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 313 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 313 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 313 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
#line 174 "map.opt"
      return;
    }
#line 1064 "bag.m"
  }
#line 313 "bag.m"
}

#line 312 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_0(
#line 312 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 312 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 312 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 312 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 312 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 312 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 312 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
#line 174 "map.opt"
      return;
    }
#line 1064 "bag.m"
  }
#line 312 "bag.m"
}

#line 303 "bag.m"
MR_bool MR_CALL 
mercury__bag__subset_compare_3_p_0(
#line 303 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 303 "bag.m"
  MR_Word * mercury__bag__Res_4,
#line 303 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 303 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 303 "bag.m"
{
#line 943 "bag.m"
  {
#line 943 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 943 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 943 "bag.m"
    MR_Word mercury__bag__MapA_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 943 "bag.m"
    MR_Word mercury__bag__MapB_6 = (MR_Word) mercury__bag__HeadVar__3_3;
#line 943 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 943 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 943 "bag.m"
    MR_Word mercury__bag__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 943 "bag.m"
    MR_Word mercury__bag__V_5_22;

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__MapA_5, mercury__bag__V_5_15, &mercury__bag__AXNs_7);
    }
#line 408 "tree234.opt"
    mercury__bag__V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__MapB_6, mercury__bag__V_5_22, &mercury__bag__BXNs_8);
    }
#line 946 "bag.m"
    {
#line 946 "bag.m"
      return mercury__bag__succeeded = mercury__bag__subset_compare_loop_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Res_4, mercury__bag__AXNs_7, mercury__bag__BXNs_8);
    }
#line 943 "bag.m"
    return mercury__bag__succeeded;
#line 943 "bag.m"
  }
#line 303 "bag.m"
}

#line 291 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_subbag_2_p_0(
#line 291 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 291 "bag.m"
  MR_Word mercury__bag__BagA_3,
#line 291 "bag.m"
  MR_Word mercury__bag__BagB_4)
#line 291 "bag.m"
{
#line 937 "bag.m"
  {
#line 937 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 937 "bag.m"
    MR_Word mercury__bag__Res_5;

#line 938 "bag.m"
    {
#line 938 "bag.m"
      mercury__bag__succeeded = mercury__bag__subset_compare_3_p_0(mercury__bag__TypeInfo_for_T_6, &mercury__bag__Res_5, mercury__bag__BagA_3, mercury__bag__BagB_4);
    }
#line 937 "bag.m"
    if (mercury__bag__succeeded)
#line 940 "bag.m"
#line 940 "bag.m"
      switch (mercury__bag__Res_5) {
#line 940 "bag.m"
        default:
#line 940 "bag.m"
          mercury__bag__succeeded = MR_FALSE;
#line 940 "bag.m"
          break;
#line 940 "bag.m"
        case (MR_Integer) 1:
#line 939 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 940 "bag.m"
          break;
#line 940 "bag.m"
        case (MR_Integer) 0:
#line 940 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 940 "bag.m"
          break;
#line 940 "bag.m"
      }
#line 937 "bag.m"
    return mercury__bag__succeeded;
#line 937 "bag.m"
  }
#line 291 "bag.m"
}

#line 280 "bag.m"
MR_bool MR_CALL 
mercury__bag__intersect_2_p_0(
#line 280 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 280 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 280 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 280 "bag.m"
{
#line 927 "bag.m"
  while (MR_TRUE)
#line 927 "bag.m"
    {
#line 927 "bag.m"
      /* tailcall optimized into a loop */
#line 927 "bag.m"
      {
#line 927 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 927 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 927 "bag.m"
        MR_Word mercury__bag__MapA_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 927 "bag.m"
        MR_Word mercury__bag__MapB_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 927 "bag.m"
        MR_Box mercury__bag__X_5;
#line 927 "bag.m"
        MR_Word mercury__bag__NextMapA_7;
#line 398 "tree234.opt"
        MR_Integer mercury__bag___N_6;
#line 398 "tree234.opt"
        MR_Word mercury__bag__V_9_20;
#line 398 "tree234.opt"
        MR_Box mercury__bag__conv0__N_6;
#line 452 "map.opt"
        MR_Integer mercury__bag__V_5_23;
#line 452 "map.opt"
        MR_Box mercury__bag__conv1_V_5_23;

#line 398 "tree234.opt"
        {
#line 398 "tree234.opt"
          mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__MapA_3, &mercury__bag__X_5, &mercury__bag__conv0__N_6, &mercury__bag__NextMapA_7, &mercury__bag__V_9_20);
        }
#line 398 "tree234.opt"
        if (mercury__bag__succeeded)
#line 398 "tree234.opt"
          {
#line 398 "tree234.opt"
            mercury__bag___N_6 = ((MR_Integer) mercury__bag__conv0__N_6);
#line 398 "tree234.opt"
            mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
          }
#line 927 "bag.m"
        if (mercury__bag__succeeded)
#line 927 "bag.m"
          {
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__MapB_4, mercury__bag__X_5, &mercury__bag__conv1_V_5_23);
            }
#line 452 "map.opt"
            if (mercury__bag__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__bag__V_5_23 = ((MR_Integer) mercury__bag__conv1_V_5_23);
#line 452 "map.opt"
                mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 931 "bag.m"
            if (mercury__bag__succeeded)
#line 930 "bag.m"
              mercury__bag__succeeded = MR_TRUE;
#line 931 "bag.m"
            else
#line 932 "bag.m"
              {
#line 932 "bag.m"
                MR_Word mercury__bag__V_8_8 = (MR_Word) mercury__bag__NextMapA_7;

#line 932 "bag.m"
                /* direct tailcall eliminated */
#line 932 "bag.m"
                {
#line 932 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_8_8;

#line 932 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 932 "bag.m"
                }
#line 932 "bag.m"
                continue;
#line 932 "bag.m"
              }
#line 927 "bag.m"
          }
#line 927 "bag.m"
        return mercury__bag__succeeded;
#line 927 "bag.m"
      }
#line 927 "bag.m"
      break;
#line 927 "bag.m"
    }
#line 280 "bag.m"
}

#line 275 "bag.m"
void MR_CALL 
mercury__bag__intersect_small_3_p_0(
#line 275 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 275 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 275 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 275 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 275 "bag.m"
{
#line 907 "bag.m"
  {
#line 907 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 907 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 907 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 907 "bag.m"
    MR_Word mercury__bag__MapAiB_6;
#line 907 "bag.m"
    MR_Word mercury__bag__MapAiB0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 909 "bag.m"
    {
#line 909 "bag.m"
      mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__MapA_4, mercury__bag__MapB_5, mercury__bag__MapAiB0_7, &mercury__bag__MapAiB_6);
    }
#line 907 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
#line 907 "bag.m"
  }
#line 275 "bag.m"
}

#line 274 "bag.m"
MR_Word MR_CALL 
mercury__bag__intersect_small_2_f_0(
#line 274 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 274 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 274 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 274 "bag.m"
{
#line 907 "bag.m"
  {
#line 907 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 907 "bag.m"
    MR_Word mercury__bag__BagAiB_6;
#line 907 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 907 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 907 "bag.m"
    MR_Word mercury__bag__MapAiB_10;
#line 907 "bag.m"
    MR_Word mercury__bag__MapAiB0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 909 "bag.m"
    {
#line 909 "bag.m"
      mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, mercury__bag__MapAiB0_11, &mercury__bag__MapAiB_10);
    }
#line 907 "bag.m"
    mercury__bag__BagAiB_6 = (MR_Word) mercury__bag__MapAiB_10;
#line 907 "bag.m"
    return mercury__bag__BagAiB_6;
#line 907 "bag.m"
  }
#line 274 "bag.m"
}

#line 273 "bag.m"
void MR_CALL 
mercury__bag__intersect_3_p_0(
#line 273 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 273 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 273 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 273 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 273 "bag.m"
{
#line 854 "bag.m"
  {
#line 854 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 854 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 854 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 854 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 854 "bag.m"
    MR_Word mercury__bag__MapAiB_6;
#line 854 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 854 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 854 "bag.m"
    MR_Word mercury__bag__RevAiBXNs_9;
#line 854 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 854 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "bag.m"
    MR_Word mercury__bag__V_5_24;

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    }
#line 408 "tree234.opt"
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    }
#line 857 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "bag.m"
    {
#line 857 "bag.m"
      mercury__bag__intersect_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAiBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAiBXNs_9, &mercury__bag__MapAiB_6);
    }
#line 854 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
#line 854 "bag.m"
  }
#line 273 "bag.m"
}

#line 272 "bag.m"
MR_Word MR_CALL 
mercury__bag__intersect_2_f_0(
#line 272 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 272 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 272 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 272 "bag.m"
{
#line 852 "bag.m"
  {
#line 852 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 852 "bag.m"
    MR_Word mercury__bag__BagAiB_6;

#line 852 "bag.m"
    {
#line 852 "bag.m"
      mercury__bag__intersect_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAiB_6);
    }
#line 852 "bag.m"
    return mercury__bag__BagAiB_6;
#line 852 "bag.m"
  }
#line 272 "bag.m"
}

#line 259 "bag.m"
void MR_CALL 
mercury__bag__union_small_3_p_0(
#line 259 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 259 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 259 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 259 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 259 "bag.m"
{
#line 830 "bag.m"
  {
#line 830 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 830 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 830 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 830 "bag.m"
    MR_Word mercury__bag__MapAuB_6;

#line 831 "bag.m"
    {
#line 831 "bag.m"
      mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAuB_6);
    }
#line 830 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
#line 830 "bag.m"
  }
#line 259 "bag.m"
}

#line 258 "bag.m"
MR_Word MR_CALL 
mercury__bag__union_small_2_f_0(
#line 258 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 258 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 258 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 258 "bag.m"
{
#line 830 "bag.m"
  {
#line 830 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 830 "bag.m"
    MR_Word mercury__bag__BagAuB_6;
#line 830 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 830 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 830 "bag.m"
    MR_Word mercury__bag__MapAuB_10;

#line 831 "bag.m"
    {
#line 831 "bag.m"
      mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAuB_10);
    }
#line 830 "bag.m"
    mercury__bag__BagAuB_6 = (MR_Word) mercury__bag__MapAuB_10;
#line 830 "bag.m"
    return mercury__bag__BagAuB_6;
#line 830 "bag.m"
  }
#line 258 "bag.m"
}

#line 257 "bag.m"
void MR_CALL 
mercury__bag__union_3_p_0(
#line 257 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 257 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 257 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 257 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 257 "bag.m"
{
#line 774 "bag.m"
  {
#line 774 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 774 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 774 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 774 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 774 "bag.m"
    MR_Word mercury__bag__MapAuB_6;
#line 774 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 774 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 774 "bag.m"
    MR_Word mercury__bag__RevAuBXNs_9;
#line 774 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 774 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "bag.m"
    MR_Word mercury__bag__V_5_24;

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    }
#line 408 "tree234.opt"
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    }
#line 777 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "bag.m"
    {
#line 777 "bag.m"
      mercury__bag__union_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAuBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAuBXNs_9, &mercury__bag__MapAuB_6);
    }
#line 774 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
#line 774 "bag.m"
  }
#line 257 "bag.m"
}

#line 256 "bag.m"
MR_Word MR_CALL 
mercury__bag__union_2_f_0(
#line 256 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 256 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 256 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 256 "bag.m"
{
#line 772 "bag.m"
  {
#line 772 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 772 "bag.m"
    MR_Word mercury__bag__BagAuB_6;

#line 772 "bag.m"
    {
#line 772 "bag.m"
      mercury__bag__union_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAuB_6);
    }
#line 772 "bag.m"
    return mercury__bag__BagAuB_6;
#line 772 "bag.m"
  }
#line 256 "bag.m"
}

#line 243 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_small_3_p_0(
#line 243 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 243 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 243 "bag.m"
{
#line 750 "bag.m"
  {
#line 750 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 750 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 750 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 750 "bag.m"
    MR_Word mercury__bag__MapAlubB_6;

#line 751 "bag.m"
    {
#line 751 "bag.m"
      mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAlubB_6);
    }
#line 750 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
#line 750 "bag.m"
  }
#line 243 "bag.m"
}

#line 242 "bag.m"
MR_Word MR_CALL 
mercury__bag__least_upper_bound_small_2_f_0(
#line 242 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 242 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 242 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 242 "bag.m"
{
#line 750 "bag.m"
  {
#line 750 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 750 "bag.m"
    MR_Word mercury__bag__BagAlubB_6;
#line 750 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 750 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 750 "bag.m"
    MR_Word mercury__bag__MapAlubB_10;

#line 751 "bag.m"
    {
#line 751 "bag.m"
      mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAlubB_10);
    }
#line 750 "bag.m"
    mercury__bag__BagAlubB_6 = (MR_Word) mercury__bag__MapAlubB_10;
#line 750 "bag.m"
    return mercury__bag__BagAlubB_6;
#line 750 "bag.m"
  }
#line 242 "bag.m"
}

#line 241 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_3_p_0(
#line 241 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 241 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 241 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 241 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 241 "bag.m"
{
#line 694 "bag.m"
  {
#line 694 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 694 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 694 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 694 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 694 "bag.m"
    MR_Word mercury__bag__MapAlubB_6;
#line 694 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 694 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 694 "bag.m"
    MR_Word mercury__bag__RevAlubBXNs_9;
#line 694 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 694 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "bag.m"
    MR_Word mercury__bag__V_5_24;

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    }
#line 408 "tree234.opt"
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    }
#line 697 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "bag.m"
    {
#line 697 "bag.m"
      mercury__bag__least_upper_bound_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAlubBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAlubBXNs_9, &mercury__bag__MapAlubB_6);
    }
#line 694 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
#line 694 "bag.m"
  }
#line 241 "bag.m"
}

#line 240 "bag.m"
MR_Word MR_CALL 
mercury__bag__least_upper_bound_2_f_0(
#line 240 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 240 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 240 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 240 "bag.m"
{
#line 692 "bag.m"
  {
#line 692 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 692 "bag.m"
    MR_Word mercury__bag__BagAlubB_6;

#line 692 "bag.m"
    {
#line 692 "bag.m"
      mercury__bag__least_upper_bound_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAlubB_6);
    }
#line 692 "bag.m"
    return mercury__bag__BagAlubB_6;
#line 692 "bag.m"
  }
#line 240 "bag.m"
}

#line 223 "bag.m"
void MR_CALL 
mercury__bag__subtract_small_3_p_0(
#line 223 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 223 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 223 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 223 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 223 "bag.m"
{
#line 666 "bag.m"
  {
#line 666 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 666 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 666 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 666 "bag.m"
    MR_Word mercury__bag__MapAmB_6;

#line 667 "bag.m"
    {
#line 667 "bag.m"
      mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAmB_6);
    }
#line 666 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
#line 666 "bag.m"
  }
#line 223 "bag.m"
}

#line 222 "bag.m"
MR_Word MR_CALL 
mercury__bag__subtract_small_2_f_0(
#line 222 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 222 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 222 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 222 "bag.m"
{
#line 666 "bag.m"
  {
#line 666 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 666 "bag.m"
    MR_Word mercury__bag__BagAmB_6;
#line 666 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 666 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 666 "bag.m"
    MR_Word mercury__bag__MapAmB_10;

#line 667 "bag.m"
    {
#line 667 "bag.m"
      mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAmB_10);
    }
#line 666 "bag.m"
    mercury__bag__BagAmB_6 = (MR_Word) mercury__bag__MapAmB_10;
#line 666 "bag.m"
    return mercury__bag__BagAmB_6;
#line 666 "bag.m"
  }
#line 222 "bag.m"
}

#line 221 "bag.m"
void MR_CALL 
mercury__bag__subtract_3_p_0(
#line 221 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 221 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 221 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 221 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 221 "bag.m"
{
#line 613 "bag.m"
  {
#line 613 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 613 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 613 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 613 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 613 "bag.m"
    MR_Word mercury__bag__MapAmB_6;
#line 613 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 613 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 613 "bag.m"
    MR_Word mercury__bag__RevAmBXNs_9;
#line 613 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 613 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "bag.m"
    MR_Word mercury__bag__V_5_24;

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    }
#line 408 "tree234.opt"
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    }
#line 616 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "bag.m"
    {
#line 616 "bag.m"
      mercury__bag__subtract_loop_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAmBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAmBXNs_9, &mercury__bag__MapAmB_6);
    }
#line 613 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
#line 613 "bag.m"
  }
#line 221 "bag.m"
}

#line 220 "bag.m"
MR_Word MR_CALL 
mercury__bag__subtract_2_f_0(
#line 220 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 220 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 220 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 220 "bag.m"
{
#line 611 "bag.m"
  {
#line 611 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 611 "bag.m"
    MR_Word mercury__bag__BagAmB_6;

#line 611 "bag.m"
    {
#line 611 "bag.m"
      mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAmB_6);
    }
#line 611 "bag.m"
    return mercury__bag__BagAmB_6;
#line 611 "bag.m"
  }
#line 220 "bag.m"
}

#line 205 "bag.m"
void MR_CALL 
mercury__bag__to_set_without_duplicates_2_p_0(
#line 205 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 205 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 205 "bag.m"
  MR_Word * mercury__bag__Set_4)
#line 205 "bag.m"
{
#line 604 "bag.m"
  {
#line 604 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 604 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 604 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 604 "bag.m"
    MR_Word mercury__bag__Xs_5;
#line 604 "bag.m"
    MR_Word mercury__bag__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "bag.m"
    MR_Word mercury__bag__V_4_17;

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Map_3, mercury__bag__V_5_12, &mercury__bag__Xs_5);
    }
#line 994 "list.opt"
    if ((mercury__bag__Xs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "list.opt"
      mercury__bag__V_4_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "list.opt"
    else
#line 995 "list.opt"
      {
#line 995 "list.opt"
        MR_Box mercury__bag__V_3_18 = (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 0));
#line 995 "list.opt"
        MR_Word mercury__bag__V_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 1)));

#line 996 "list.opt"
        {
#line 996 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__V_3_18, mercury__bag__V_4_19, &mercury__bag__V_4_17);
        }
#line 995 "list.opt"
      }
#line 258 "set_ordlist.opt"
    *mercury__bag__Set_4 = (MR_Word) mercury__bag__V_4_17;
#line 604 "bag.m"
  }
#line 205 "bag.m"
}

#line 204 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_without_duplicates_1_f_0(
#line 204 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 204 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 204 "bag.m"
{
#line 602 "bag.m"
  {
#line 602 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 602 "bag.m"
    MR_Word mercury__bag__Set_4;

#line 602 "bag.m"
    {
#line 602 "bag.m"
      mercury__bag__to_set_without_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Set_4);
    }
#line 602 "bag.m"
    return mercury__bag__Set_4;
#line 602 "bag.m"
  }
#line 204 "bag.m"
}

#line 203 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_1_f_0(
#line 203 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 203 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 203 "bag.m"
{
#line 602 "bag.m"
  {
#line 602 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 602 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;

#line 602 "bag.m"
    {
#line 602 "bag.m"
      mercury__bag__to_set_without_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Bag_3, &mercury__bag__HeadVar__2_2);
    }
#line 602 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 602 "bag.m"
  }
#line 203 "bag.m"
}

#line 198 "bag.m"
void MR_CALL 
mercury__bag__to_list_only_duplicates_2_p_0(
#line 198 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 198 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 198 "bag.m"
  MR_Word * mercury__bag__DupXs_4)
#line 198 "bag.m"
{
#line 590 "bag.m"
  {
#line 590 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 590 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 590 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 590 "bag.m"
    MR_Word mercury__bag__XNs_5;
#line 590 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_17, &mercury__bag__XNs_5);
    }
#line 592 "bag.m"
    {
#line 592 "bag.m"
      mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__XNs_5, mercury__bag__DupXs_4);
#line 592 "bag.m"
      return;
    }
#line 590 "bag.m"
  }
#line 198 "bag.m"
}

#line 197 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_list_only_duplicates_1_f_0(
#line 197 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 197 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 197 "bag.m"
{
#line 588 "bag.m"
  {
#line 588 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 588 "bag.m"
    MR_Word mercury__bag__Xs_4;

#line 588 "bag.m"
    {
#line 588 "bag.m"
      mercury__bag__to_list_only_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    }
#line 588 "bag.m"
    return mercury__bag__Xs_4;
#line 588 "bag.m"
  }
#line 197 "bag.m"
}

#line 192 "bag.m"
void MR_CALL 
mercury__bag__to_list_without_duplicates_2_p_0(
#line 192 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 192 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 192 "bag.m"
  MR_Word * mercury__bag__Xs_4)
#line 192 "bag.m"
{
#line 584 "bag.m"
  {
#line 584 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 584 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 584 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 584 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__Xs_4);
#line 252 "tree234.opt"
      return;
    }
#line 584 "bag.m"
  }
#line 192 "bag.m"
}

#line 191 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_list_without_duplicates_1_f_0(
#line 191 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 191 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 191 "bag.m"
{
#line 584 "bag.m"
  {
#line 584 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 584 "bag.m"
    MR_Word mercury__bag__Xs_4;
#line 584 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 584 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
#line 584 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__Xs_4);
    }
#line 584 "bag.m"
    return mercury__bag__Xs_4;
#line 584 "bag.m"
  }
#line 191 "bag.m"
}

#line 186 "bag.m"
void MR_CALL 
mercury__bag__to_assoc_list_2_p_0(
#line 186 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 186 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 186 "bag.m"
  MR_Word * mercury__bag__XNs_4)
#line 186 "bag.m"
{
#line 578 "bag.m"
  {
#line 578 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 578 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 578 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 578 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__XNs_4);
#line 409 "tree234.opt"
      return;
    }
#line 578 "bag.m"
  }
#line 186 "bag.m"
}

#line 185 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_assoc_list_1_f_0(
#line 185 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 185 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 185 "bag.m"
{
#line 578 "bag.m"
  {
#line 578 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 578 "bag.m"
    MR_Word mercury__bag__XNs_4;
#line 578 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 578 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
#line 578 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__XNs_4);
    }
#line 578 "bag.m"
    return mercury__bag__XNs_4;
#line 578 "bag.m"
  }
#line 185 "bag.m"
}

#line 179 "bag.m"
void MR_CALL 
mercury__bag__to_list_2_p_0(
#line 179 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 179 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 179 "bag.m"
  MR_Word * mercury__bag__Xs_4)
#line 179 "bag.m"
{
#line 561 "bag.m"
  {
#line 561 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 561 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 561 "bag.m"
    MR_Word mercury__bag__RevXs_5;
#line 561 "bag.m"
    MR_Word mercury__bag__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__Map_3, mercury__bag__V_7_7, &mercury__bag__RevXs_5);
    }
#line 563 "bag.m"
    {
#line 563 "bag.m"
      mercury__list__reverse_2_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__RevXs_5, mercury__bag__Xs_4);
#line 563 "bag.m"
      return;
    }
#line 561 "bag.m"
  }
#line 179 "bag.m"
}

#line 178 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_list_1_f_0(
#line 178 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 178 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 178 "bag.m"
{
#line 559 "bag.m"
  {
#line 559 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 559 "bag.m"
    MR_Word mercury__bag__Xs_4;

#line 559 "bag.m"
    {
#line 559 "bag.m"
      mercury__bag__to_list_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    }
#line 559 "bag.m"
    return mercury__bag__Xs_4;
#line 559 "bag.m"
  }
#line 178 "bag.m"
}

#line 172 "bag.m"
void MR_CALL 
mercury__bag__from_set_2_p_0(
#line 172 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 172 "bag.m"
  MR_Word mercury__bag__Set_3,
#line 172 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 172 "bag.m"
{
#line 550 "bag.m"
  {
#line 550 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 550 "bag.m"
    MR_Word mercury__bag__Xs_5 = (MR_Word) mercury__bag__Set_3;
#line 550 "bag.m"
    MR_Word mercury__bag__Bag0_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "bag.m"
    MR_Word mercury__bag__Map_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 554 "bag.m"
    {
#line 554 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__Xs_5, mercury__bag__Bag0_6, mercury__bag__Bag_4);
#line 554 "bag.m"
      return;
    }
#line 550 "bag.m"
  }
#line 172 "bag.m"
}

#line 171 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_set_1_f_0(
#line 171 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 171 "bag.m"
  MR_Word mercury__bag__Set_3)
#line 171 "bag.m"
{
#line 550 "bag.m"
  {
#line 550 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 550 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 550 "bag.m"
    MR_Word mercury__bag__Xs_8 = (MR_Word) mercury__bag__Set_3;
#line 550 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "bag.m"
    MR_Word mercury__bag__Map_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 554 "bag.m"
    {
#line 554 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_8, mercury__bag__Bag0_9, &mercury__bag__Bag_4);
    }
#line 550 "bag.m"
    return mercury__bag__Bag_4;
#line 550 "bag.m"
  }
#line 171 "bag.m"
}

#line 167 "bag.m"
void MR_CALL 
mercury__bag__from_sorted_list_2_p_0(
#line 167 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 167 "bag.m"
  MR_Word mercury__bag__Xs_3,
#line 167 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 167 "bag.m"
{
#line 542 "bag.m"
  {
#line 542 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 542 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 545 "bag.m"
    {
#line 545 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
#line 545 "bag.m"
      return;
    }
#line 542 "bag.m"
  }
#line 167 "bag.m"
}

#line 166 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_sorted_list_1_f_0(
#line 166 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 166 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 166 "bag.m"
{
#line 542 "bag.m"
  {
#line 542 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 542 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 542 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "bag.m"
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 545 "bag.m"
    {
#line 545 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    }
#line 542 "bag.m"
    return mercury__bag__Bag_4;
#line 542 "bag.m"
  }
#line 166 "bag.m"
}

#line 162 "bag.m"
void MR_CALL 
mercury__bag__from_list_2_p_0(
#line 162 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 162 "bag.m"
  MR_Word mercury__bag__Xs_3,
#line 162 "bag.m"
  MR_Word * mercury__bag__Bag_4)
#line 162 "bag.m"
{
#line 535 "bag.m"
  {
#line 535 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 535 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 537 "bag.m"
    {
#line 537 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
#line 537 "bag.m"
      return;
    }
#line 535 "bag.m"
  }
#line 162 "bag.m"
}

#line 161 "bag.m"
MR_Word MR_CALL 
mercury__bag__from_list_1_f_0(
#line 161 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 161 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 161 "bag.m"
{
#line 535 "bag.m"
  {
#line 535 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 535 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 535 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "bag.m"
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 537 "bag.m"
    {
#line 537 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    }
#line 535 "bag.m"
    return mercury__bag__Bag_4;
#line 535 "bag.m"
  }
#line 161 "bag.m"
}

#line 160 "bag.m"
MR_Word MR_CALL 
mercury__bag__bag_1_f_0(
#line 160 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 160 "bag.m"
  MR_Word mercury__bag__Xs_3)
#line 160 "bag.m"
{
#line 535 "bag.m"
  {
#line 535 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 535 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;
#line 535 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "bag.m"
    MR_Word mercury__bag__Map_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 537 "bag.m"
    {
#line 537 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Xs_3, mercury__bag__Bag0_9, &mercury__bag__HeadVar__2_2);
    }
#line 535 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 535 "bag.m"
  }
#line 160 "bag.m"
}

#line 154 "bag.m"
void MR_CALL 
mercury__bag__delete_all_3_p_0(
#line 154 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 154 "bag.m"
  MR_Box mercury__bag__X_4,
#line 154 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 154 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 154 "bag.m"
{
#line 524 "bag.m"
  {
#line 524 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 524 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 524 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_6 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 524 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_7;
#line 79 "tree234.opt"
    MR_Word mercury__bag__V_7_17;

#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__STATE_VARIABLE_Map_0_6, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_7, &mercury__bag__V_7_17);
    }
#line 524 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_7;
#line 524 "bag.m"
  }
#line 154 "bag.m"
}

#line 153 "bag.m"
MR_Word MR_CALL 
mercury__bag__delete_all_2_f_0(
#line 153 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 153 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 153 "bag.m"
  MR_Box mercury__bag__X_5)
#line 153 "bag.m"
{
#line 524 "bag.m"
  {
#line 524 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 524 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 524 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 524 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_12 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_0_6;
#line 524 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_13;
#line 79 "tree234.opt"
    MR_Word mercury__bag__V_7_22;

#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_15, mercury__bag__STATE_VARIABLE_Map_0_12, mercury__bag__X_5, &mercury__bag__STATE_VARIABLE_Map_13, &mercury__bag__V_7_22);
    }
#line 524 "bag.m"
    mercury__bag__STATE_VARIABLE_Bag_7 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_13;
#line 524 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 524 "bag.m"
  }
#line 153 "bag.m"
}

#line 149 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_all_3_p_0(
#line 149 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 149 "bag.m"
  MR_Box mercury__bag__X_4,
#line 149 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 149 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 149 "bag.m"
{
#line 517 "bag.m"
  {
#line 517 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 517 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 517 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 517 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 395 "tree234.opt"
    MR_Integer mercury__bag___N_6;
#line 395 "tree234.opt"
    MR_Word mercury__bag__V_9_20;
#line 395 "tree234.opt"
    MR_Box mercury__bag__conv0__N_6;

#line 395 "tree234.opt"
    {
#line 395 "tree234.opt"
      mercury__bag__succeeded = mercury__tree234__remove_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0__N_6, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_9_20);
    }
#line 395 "tree234.opt"
    if (mercury__bag__succeeded)
#line 395 "tree234.opt"
      {
#line 395 "tree234.opt"
        mercury__bag___N_6 = ((MR_Integer) mercury__bag__conv0__N_6);
#line 395 "tree234.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 395 "tree234.opt"
      }
#line 517 "bag.m"
    if (mercury__bag__succeeded)
#line 517 "bag.m"
      {
#line 517 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 517 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 517 "bag.m"
      }
#line 517 "bag.m"
    return mercury__bag__succeeded;
#line 517 "bag.m"
  }
#line 149 "bag.m"
}

#line 144 "bag.m"
void MR_CALL 
mercury__bag__delete_3_p_0(
#line 144 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 144 "bag.m"
  MR_Box mercury__bag__X_4,
#line 144 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 144 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 144 "bag.m"
{
#line 506 "bag.m"
  {
#line 506 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 506 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 506 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 513 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 507 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_N_6;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 513 "bag.m"
    if (mercury__bag__succeeded)
#line 510 "bag.m"
      {
#line 508 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > (MR_Integer) 1);
#line 510 "bag.m"
        if (mercury__bag__succeeded)
#line 509 "bag.m"
          {
#line 509 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 509 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 509 "bag.m"
            {
#line 509 "bag.m"
              mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 509 "bag.m"
          }
#line 510 "bag.m"
        else
#line 511 "bag.m"
          {
#line 511 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 79 "tree234.opt"
            MR_Word mercury__bag__V_7_27;

#line 79 "tree234.opt"
            {
#line 79 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_7_27);
            }
#line 511 "bag.m"
          }
#line 510 "bag.m"
      }
#line 513 "bag.m"
    else
#line 513 "bag.m"
      mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_0_7;
#line 506 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 506 "bag.m"
  }
#line 144 "bag.m"
}

#line 143 "bag.m"
MR_Word MR_CALL 
mercury__bag__delete_2_f_0(
#line 143 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 143 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 143 "bag.m"
  MR_Box mercury__bag__X_5)
#line 143 "bag.m"
{
#line 504 "bag.m"
  {
#line 504 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 504 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 504 "bag.m"
    {
#line 504 "bag.m"
      mercury__bag__delete_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 504 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 504 "bag.m"
  }
#line 143 "bag.m"
}

#line 138 "bag.m"
void MR_CALL 
mercury__bag__det_remove_set_3_p_0(
#line 138 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 138 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 138 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 138 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 138 "bag.m"
{
#line 498 "bag.m"
  {
#line 498 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 498 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;
#line 486 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_18;

#line 484 "bag.m"
    {
#line 484 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_18);
    }
#line 486 "bag.m"
    if (mercury__bag__succeeded)
#line 486 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8_18;
#line 486 "bag.m"
    else
#line 487 "bag.m"
      {
#line 487 "bag.m"
        {
#line 487 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 487 "bag.m"
          return;
        }
#line 487 "bag.m"
      }
#line 498 "bag.m"
  }
#line 138 "bag.m"
}

#line 137 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_set_2_f_0(
#line 137 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 137 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 137 "bag.m"
  MR_Word mercury__bag__Set_5)
#line 137 "bag.m"
{
#line 496 "bag.m"
  {
#line 496 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 496 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 496 "bag.m"
    {
#line 496 "bag.m"
      mercury__bag__det_remove_set_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Set_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 496 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 496 "bag.m"
  }
#line 137 "bag.m"
}

#line 132 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_set_3_p_0(
#line 132 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 132 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 132 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 132 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 132 "bag.m"
{
#line 490 "bag.m"
  {
#line 490 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 490 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

#line 493 "bag.m"
    {
#line 493 "bag.m"
      return mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 490 "bag.m"
    return mercury__bag__succeeded;
#line 490 "bag.m"
  }
#line 132 "bag.m"
}

#line 127 "bag.m"
void MR_CALL 
mercury__bag__det_remove_list_3_p_0(
#line 127 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 127 "bag.m"
  MR_Word mercury__bag__Xs_4,
#line 127 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 127 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
#line 127 "bag.m"
{
#line 486 "bag.m"
  {
#line 486 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 486 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 484 "bag.m"
    {
#line 484 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 486 "bag.m"
    if (mercury__bag__succeeded)
#line 486 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 486 "bag.m"
    else
#line 487 "bag.m"
      {
#line 487 "bag.m"
        {
#line 487 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 487 "bag.m"
          return;
        }
#line 487 "bag.m"
      }
#line 486 "bag.m"
  }
#line 127 "bag.m"
}

#line 126 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_list_2_f_0(
#line 126 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 126 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 126 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 126 "bag.m"
{
#line 486 "bag.m"
  {
#line 486 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 486 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 486 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

#line 484 "bag.m"
    {
#line 484 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    }
#line 486 "bag.m"
    if (mercury__bag__succeeded)
#line 486 "bag.m"
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
#line 486 "bag.m"
    else
#line 487 "bag.m"
      {
#line 487 "bag.m"
        {
#line 487 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        }
#line 487 "bag.m"
      }
#line 486 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 486 "bag.m"
  }
#line 126 "bag.m"
}

#line 120 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_list_3_p_0(
#line 120 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 120 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 120 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 120 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 120 "bag.m"
{
#line 475 "bag.m"
  while (MR_TRUE)
#line 475 "bag.m"
    {
#line 475 "bag.m"
      /* tailcall optimized into a loop */
#line 475 "bag.m"
      {
#line 475 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 475 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "bag.m"
          {
#line 475 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 475 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 475 "bag.m"
          }
#line 475 "bag.m"
        else
#line 476 "bag.m"
          {
#line 476 "bag.m"
            MR_Box mercury__bag__X_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 476 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 477 "bag.m"
            {
#line 477 "bag.m"
              mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 476 "bag.m"
            if (mercury__bag__succeeded)
#line 478 "bag.m"
              {
#line 478 "bag.m"
                /* direct tailcall eliminated */
#line 478 "bag.m"
                {
#line 478 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 478 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 478 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 478 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 478 "bag.m"
                }
#line 478 "bag.m"
                continue;
#line 478 "bag.m"
              }
#line 476 "bag.m"
          }
#line 475 "bag.m"
        return mercury__bag__succeeded;
#line 475 "bag.m"
      }
#line 475 "bag.m"
      break;
#line 475 "bag.m"
    }
#line 120 "bag.m"
}

#line 107 "bag.m"
void MR_CALL 
mercury__bag__det_remove_3_p_0(
#line 107 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 107 "bag.m"
  MR_Box mercury__bag__X_4,
#line 107 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 107 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
#line 107 "bag.m"
{
#line 471 "bag.m"
  {
#line 471 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 471 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 469 "bag.m"
    {
#line 469 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__X_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 471 "bag.m"
    if (mercury__bag__succeeded)
#line 471 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 471 "bag.m"
    else
#line 472 "bag.m"
      {
#line 472 "bag.m"
        {
#line 472 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
#line 472 "bag.m"
          return;
        }
#line 472 "bag.m"
      }
#line 471 "bag.m"
  }
#line 107 "bag.m"
}

#line 106 "bag.m"
MR_Word MR_CALL 
mercury__bag__det_remove_2_f_0(
#line 106 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 106 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 106 "bag.m"
  MR_Box mercury__bag__X_5)
#line 106 "bag.m"
{
#line 471 "bag.m"
  {
#line 471 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 471 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 471 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

#line 469 "bag.m"
    {
#line 469 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    }
#line 471 "bag.m"
    if (mercury__bag__succeeded)
#line 471 "bag.m"
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
#line 471 "bag.m"
    else
#line 472 "bag.m"
      {
#line 472 "bag.m"
        {
#line 472 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
        }
#line 472 "bag.m"
      }
#line 471 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 471 "bag.m"
  }
#line 106 "bag.m"
}

#line 101 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_3_p_0(
#line 101 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 101 "bag.m"
  MR_Box mercury__bag__X_4,
#line 101 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 101 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 101 "bag.m"
{
#line 457 "bag.m"
  {
#line 457 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 457 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 457 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 457 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 457 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 459 "bag.m"
    MR_Integer mercury__bag__V_9_9;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 457 "bag.m"
    if (mercury__bag__succeeded)
#line 457 "bag.m"
      {
#line 459 "bag.m"
        mercury__bag__V_9_9 = (MR_Integer) 1;
#line 459 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_9_9);
#line 461 "bag.m"
        if (mercury__bag__succeeded)
#line 460 "bag.m"
          {
#line 460 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 460 "bag.m"
            {
#line 460 "bag.m"
              mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 460 "bag.m"
          }
#line 461 "bag.m"
        else
#line 79 "tree234.opt"
          {
#line 79 "tree234.opt"
            MR_Word mercury__bag__V_7_25;

#line 79 "tree234.opt"
            {
#line 79 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_7_25);
            }
#line 79 "tree234.opt"
          }
#line 457 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 457 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 457 "bag.m"
      }
#line 457 "bag.m"
    return mercury__bag__succeeded;
#line 457 "bag.m"
  }
#line 101 "bag.m"
}

#line 96 "bag.m"
MR_bool MR_CALL 
mercury__bag__remove_smallest_3_p_0(
#line 96 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 96 "bag.m"
  MR_Box * mercury__bag__X_4,
#line 96 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 96 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 96 "bag.m"
{
#line 449 "bag.m"
  {
#line 449 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 449 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 449 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 449 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 449 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 449 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_9_9;
#line 398 "tree234.opt"
    MR_Word mercury__bag__V_9_24;
#line 398 "tree234.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 451 "bag.m"
    MR_Integer mercury__bag__V_10_10;

#line 398 "tree234.opt"
    {
#line 398 "tree234.opt"
      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6, &mercury__bag__STATE_VARIABLE_Map_9_9, &mercury__bag__V_9_24);
    }
#line 398 "tree234.opt"
    if (mercury__bag__succeeded)
#line 398 "tree234.opt"
      {
#line 398 "tree234.opt"
        mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
#line 398 "tree234.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 398 "tree234.opt"
      }
#line 449 "bag.m"
    if (mercury__bag__succeeded)
#line 449 "bag.m"
      {
#line 451 "bag.m"
        mercury__bag__V_10_10 = (MR_Integer) 1;
#line 451 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_10_10);
#line 453 "bag.m"
        if (mercury__bag__succeeded)
#line 452 "bag.m"
          {
#line 452 "bag.m"
            MR_Integer mercury__bag__V_11_11 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 452 "bag.m"
            {
#line 452 "bag.m"
              mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, *mercury__bag__X_4, ((MR_Box) (mercury__bag__V_11_11)), mercury__bag__STATE_VARIABLE_Map_9_9, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 452 "bag.m"
          }
#line 453 "bag.m"
        else
#line 453 "bag.m"
          mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_9_9;
#line 449 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 449 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 449 "bag.m"
      }
#line 449 "bag.m"
    return mercury__bag__succeeded;
#line 449 "bag.m"
  }
#line 96 "bag.m"
}

#line 89 "bag.m"
void MR_CALL 
mercury__bag__insert_set_3_p_0(
#line 89 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 89 "bag.m"
  MR_Word mercury__bag__Set_4,
#line 89 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 89 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
#line 89 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 445 "bag.m"
    {
#line 445 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
#line 445 "bag.m"
      return;
    }
#line 442 "bag.m"
  }
#line 89 "bag.m"
}

#line 88 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_set_2_f_0(
#line 88 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 88 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 88 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 88 "bag.m"
{
#line 442 "bag.m"
  {
#line 442 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 442 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 442 "bag.m"
    MR_Word mercury__bag__List_14 = (MR_Word) mercury__bag__Xs_5;

#line 445 "bag.m"
    {
#line 445 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__List_14, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 442 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 442 "bag.m"
  }
#line 88 "bag.m"
}

#line 84 "bag.m"
void MR_CALL 
mercury__bag__insert_list_3_p_0(
#line 84 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 84 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 84 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
#line 84 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
#line 84 "bag.m"
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
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 434 "bag.m"
        else
#line 435 "bag.m"
          {
#line 435 "bag.m"
            MR_Box mercury__bag__Item_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 435 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 436 "bag.m"
            {
#line 436 "bag.m"
              mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 437 "bag.m"
            /* direct tailcall eliminated */
#line 437 "bag.m"
            {
#line 437 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
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
#line 435 "bag.m"
          }
#line 434 "bag.m"
      }
#line 434 "bag.m"
      break;
#line 434 "bag.m"
    }
#line 84 "bag.m"
}

#line 83 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_list_2_f_0(
#line 83 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 83 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 83 "bag.m"
  MR_Word mercury__bag__Xs_5)
#line 83 "bag.m"
{
#line 432 "bag.m"
  {
#line 432 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 432 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 432 "bag.m"
    {
#line 432 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 432 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 432 "bag.m"
  }
#line 83 "bag.m"
}

#line 79 "bag.m"
void MR_CALL 
mercury__bag__insert_3_p_0(
#line 79 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 79 "bag.m"
  MR_Box mercury__bag__Item_4,
#line 79 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 79 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 79 "bag.m"
{
#line 424 "bag.m"
  {
#line 424 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 424 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 424 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 427 "bag.m"
    MR_Integer mercury__bag__Count_6;
#line 425 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_Count_6;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__Item_4, &mercury__bag__conv0_Count_6);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__Count_6 = ((MR_Integer) mercury__bag__conv0_Count_6);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 427 "bag.m"
    if (mercury__bag__succeeded)
#line 426 "bag.m"
      {
#line 426 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 426 "bag.m"
        MR_Integer mercury__bag__V_9_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

#line 426 "bag.m"
        {
#line 426 "bag.m"
          mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__V_9_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 426 "bag.m"
      }
#line 427 "bag.m"
    else
#line 428 "bag.m"
      {
#line 428 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 428 "bag.m"
        {
#line 428 "bag.m"
          mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 428 "bag.m"
      }
#line 424 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 424 "bag.m"
  }
#line 79 "bag.m"
}

#line 78 "bag.m"
MR_Word MR_CALL 
mercury__bag__insert_2_f_0(
#line 78 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 78 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
#line 78 "bag.m"
  MR_Box mercury__bag__X_5)
#line 78 "bag.m"
{
#line 422 "bag.m"
  {
#line 422 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 422 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 422 "bag.m"
    {
#line 422 "bag.m"
      mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 422 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 422 "bag.m"
  }
#line 78 "bag.m"
}

#line 414 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 414 "bag.m"
  void * mercury__bag__env_ptr_arg)
#line 414 "bag.m"
{
#line 414 "bag.m"
  {
#line 414 "bag.m"
    struct mercury__bag__member_3_p_0_env_0_s * mercury__bag__env_ptr = (struct mercury__bag__member_3_p_0_env_0_s *) mercury__bag__env_ptr_arg;

#line 414 "bag.m"
    {
#line 471 "bag.m"
      MR_Word mercury__bag__STATE_VARIABLE_Bag_8_17;

#line 469 "bag.m"
      {
#line 469 "bag.m"
        (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded = mercury__bag__remove_3_p_0((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__X_4), (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_17);
      }
#line 471 "bag.m"
      if ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded)
#line 471 "bag.m"
        *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8) = mercury__bag__STATE_VARIABLE_Bag_8_17;
#line 471 "bag.m"
      else
#line 472 "bag.m"
        {
#line 472 "bag.m"
          {
#line 472 "bag.m"
            mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
#line 472 "bag.m"
            return;
          }
#line 472 "bag.m"
        }
#line 471 "bag.m"
      {
#line 471 "bag.m"
        ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont)((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont_env_ptr);
#line 471 "bag.m"
        return;
      }
#line 414 "bag.m"
    }
#line 414 "bag.m"
  }
#line 414 "bag.m"
}

#line 72 "bag.m"
void MR_CALL 
mercury__bag__member_3_p_0(
#line 72 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 72 "bag.m"
  MR_Box * mercury__bag__X_4,
#line 72 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
#line 72 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8,
#line 72 "bag.m"
  MR_Cont mercury__bag__cont,
#line 72 "bag.m"
  void * mercury__bag__cont_env_ptr)
#line 72 "bag.m"
{
#line 72 "bag.m"
  {
#line 72 "bag.m"
    struct mercury__bag__member_3_p_0_env_0_s mercury__bag__env;

#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10 = mercury__bag__TypeInfo_for_T_10;
#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__X_4 = mercury__bag__X_4;
#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7 = mercury__bag__STATE_VARIABLE_Bag_0_7;
#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8;
#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont = mercury__bag__cont;
#line 72 "bag.m"
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont_env_ptr = mercury__bag__cont_env_ptr;
#line 414 "bag.m"
    {
#line 414 "bag.m"
      MR_Word mercury__bag__Xs_6;

#line 559 "bag.m"
      {
#line 559 "bag.m"
        mercury__bag__to_list_2_p_0((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__Xs_6);
      }
#line 416 "bag.m"
      {
#line 416 "bag.m"
        mercury__list__member_2_p_1((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__X_4, mercury__bag__Xs_6, mercury__bag__member_3_p_0_1, &mercury__bag__env);
      }
#line 414 "bag.m"
    }
#line 72 "bag.m"
  }
#line 72 "bag.m"
}

#line 60 "bag.m"
MR_bool MR_CALL 
mercury__bag__member_2_p_0(
#line 60 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 60 "bag.m"
  MR_Box mercury__bag__X_3,
#line 60 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 60 "bag.m"
{
#line 411 "bag.m"
  {
#line 411 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 411 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 411 "bag.m"
    MR_Word mercury__bag__Map_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 452 "map.opt"
    MR_Integer mercury__bag___N_5;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0__N_5;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Map_4, mercury__bag__X_3, &mercury__bag__conv0__N_5);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag___N_5 = ((MR_Integer) mercury__bag__conv0__N_5);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 411 "bag.m"
    return mercury__bag__succeeded;
#line 411 "bag.m"
  }
#line 60 "bag.m"
}

#line 54 "bag.m"
void MR_CALL 
mercury__bag__count_value_3_p_0(
#line 54 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 54 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 54 "bag.m"
  MR_Box mercury__bag__X_5,
#line 54 "bag.m"
  MR_Integer * mercury__bag__N_6)
#line 54 "bag.m"
{
#line 404 "bag.m"
  {
#line 404 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 404 "bag.m"
    MR_Word mercury__bag__Map_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 407 "bag.m"
    MR_Integer mercury__bag__NPrime_7;
#line 405 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_NPrime_7;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__Map_4, mercury__bag__X_5, &mercury__bag__conv0_NPrime_7);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__NPrime_7 = ((MR_Integer) mercury__bag__conv0_NPrime_7);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 407 "bag.m"
    if (mercury__bag__succeeded)
#line 406 "bag.m"
      *mercury__bag__N_6 = mercury__bag__NPrime_7;
#line 407 "bag.m"
    else
#line 408 "bag.m"
      *mercury__bag__N_6 = (MR_Integer) 0;
#line 404 "bag.m"
  }
#line 54 "bag.m"
}

#line 53 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_value_2_f_0(
#line 53 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 53 "bag.m"
  MR_Word mercury__bag__Bag_4,
#line 53 "bag.m"
  MR_Box mercury__bag__X_5)
#line 53 "bag.m"
{
#line 404 "bag.m"
  {
#line 404 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 404 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 404 "bag.m"
    MR_Word mercury__bag__Map_10 = (MR_Word) mercury__bag__Bag_4;
#line 407 "bag.m"
    MR_Integer mercury__bag__NPrime_11;
#line 405 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_NPrime_11;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_9_12, mercury__bag__Map_10, mercury__bag__X_5, &mercury__bag__conv0_NPrime_11);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__NPrime_11 = ((MR_Integer) mercury__bag__conv0_NPrime_11);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 407 "bag.m"
    if (mercury__bag__succeeded)
#line 406 "bag.m"
      mercury__bag__N_6 = mercury__bag__NPrime_11;
#line 407 "bag.m"
    else
#line 408 "bag.m"
      mercury__bag__N_6 = (MR_Integer) 0;
#line 404 "bag.m"
    return mercury__bag__N_6;
#line 404 "bag.m"
  }
#line 53 "bag.m"
}

#line 46 "bag.m"
MR_bool MR_CALL 
mercury__bag__contains_2_p_0(
#line 46 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 46 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 46 "bag.m"
  MR_Box mercury__bag__X_4)
#line 46 "bag.m"
{
#line 398 "bag.m"
  {
#line 398 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 398 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 452 "map.opt"
    MR_Integer mercury__bag__V_5_9;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_V_5_9;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__X_4, &mercury__bag__conv0_V_5_9);
    }
#line 452 "map.opt"
    if (mercury__bag__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__bag__V_5_9 = ((MR_Integer) mercury__bag__conv0_V_5_9);
#line 452 "map.opt"
        mercury__bag__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 398 "bag.m"
    return mercury__bag__succeeded;
#line 398 "bag.m"
  }
#line 46 "bag.m"
}

#line 38 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_empty_1_p_0(
#line 38 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3,
#line 38 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 38 "bag.m"
{
#line 393 "bag.m"
  {
#line 393 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 393 "bag.m"
    MR_Word mercury__bag__Map_2 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 248 "tree234.opt"
    mercury__bag__succeeded = (mercury__bag__Map_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "bag.m"
    return mercury__bag__succeeded;
#line 393 "bag.m"
  }
#line 38 "bag.m"
}

#line 34 "bag.m"
void MR_CALL 
mercury__bag__init_1_p_0(
#line 34 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3,
#line 34 "bag.m"
  MR_Word * mercury__bag__HeadVar__1_1)
#line 34 "bag.m"
{
#line 390 "bag.m"
  {
#line 390 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 390 "bag.m"
    MR_Word mercury__bag__Map_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 390 "bag.m"
    *mercury__bag__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "bag.m"
  }
#line 34 "bag.m"
}

#line 33 "bag.m"
MR_Word MR_CALL 
mercury__bag__init_0_f_0(
#line 33 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_3)
#line 33 "bag.m"
{
#line 390 "bag.m"
  {
#line 390 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 390 "bag.m"
    MR_Word mercury__bag__Bag_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "bag.m"
    MR_Word mercury__bag__Map_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 390 "bag.m"
    return mercury__bag__Bag_2;
#line 390 "bag.m"
  }
#line 33 "bag.m"
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
