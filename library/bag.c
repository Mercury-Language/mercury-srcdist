/*
** Automatically generated from `bag.m'
** by the Mercury compiler,
** version DEV
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
#line 411 "bag.m"
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

#line 100 "list.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 100 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 100 "list.int"
  MR_Word * mercury__bag__HeadVar__3_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 862 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 862 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 862 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 862 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 861 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 861 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 861 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 861 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 782 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 782 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 782 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 782 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 781 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 781 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 781 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 781 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 702 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 702 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 702 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 702 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 701 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 701 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 701 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 701 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 620 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 620 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 620 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 620 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

#line 127 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4);

#line 1018 "bag.m"
static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
#line 1018 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 1018 "bag.m"
  MR_Word mercury__bag__AXNs_3,
#line 1018 "bag.m"
  MR_Word mercury__bag__BXNs_4);

#line 863 "bag.m"
static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
#line 863 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 863 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 863 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 863 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 863 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

#line 783 "bag.m"
static void MR_CALL 
mercury__bag__union_loop_4_p_2(
#line 783 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 783 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 783 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 783 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 783 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

#line 703 "bag.m"
static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
#line 703 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 703 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 703 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 703 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 703 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

#line 621 "bag.m"
static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
#line 621 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 621 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 621 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 621 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 621 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

#line 411 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 411 "bag.m"
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

#line 100 "list.int"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 100 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 100 "list.int"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 100 "list.int"
{
#line 197 "list.opt"
  while (MR_TRUE)
#line 197 "list.opt"
    {
#line 197 "list.opt"
      /* tailcall optimized into a loop */
#line 197 "list.opt"
      {
#line 197 "list.opt"
        MR_bool mercury__bag__succeeded;

#line 197 "list.opt"
        if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "list.opt"
          *mercury__bag__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "list.opt"
        else
#line 198 "list.opt"
          {
#line 198 "list.opt"
            MR_Word mercury__bag__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
#line 198 "list.opt"
            MR_Word mercury__bag__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "list.opt"
            MR_Box mercury__bag__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 0));
#line 593 "bag.m"
            MR_Integer mercury__bag__XN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 1)));

#line 594 "bag.m"
            mercury__bag__succeeded = (mercury__bag__XN_19 > (MR_Integer) 1);
#line 204 "list.opt"
            if (mercury__bag__succeeded)
#line 202 "list.opt"
              {
#line 202 "list.opt"
                MR_Word mercury__bag__V_10_10;

#line 202 "list.opt"
                {
#line 202 "list.opt"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__V_7_7, &mercury__bag__V_10_10);
                }
#line 203 "list.opt"
                {
#line 203 "list.opt"
                  MR_Word base;
#line 203 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "list.opt"
                  *mercury__bag__HeadVar__3_3 = base;
#line 203 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__bag__V_9_9;
#line 203 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bag__V_10_10));
#line 203 "list.opt"
                }
#line 202 "list.opt"
              }
#line 204 "list.opt"
            else
#line 205 "list.opt"
              {
#line 205 "list.opt"
                /* direct tailcall eliminated */
#line 205 "list.opt"
                {
#line 205 "list.opt"
                  MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_7_7;

#line 205 "list.opt"
                  mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 205 "list.opt"
                }
#line 205 "list.opt"
                continue;
#line 205 "list.opt"
              }
#line 198 "list.opt"
          }
#line 197 "list.opt"
      }
#line 197 "list.opt"
      break;
#line 197 "list.opt"
    }
#line 100 "list.int"
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

#line 862 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 862 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 862 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 862 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 862 "bag.m"
{
#line 869 "bag.m"
  while (MR_TRUE)
#line 869 "bag.m"
    {
#line 869 "bag.m"
      /* tailcall optimized into a loop */
#line 869 "bag.m"
      {
#line 869 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 869 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 869 "bag.m"
        else
#line 869 "bag.m"
          {
#line 869 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 875 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 877 "bag.m"
            /* direct tailcall eliminated */
#line 877 "bag.m"
            {
#line 877 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;

#line 877 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 877 "bag.m"
            }
#line 877 "bag.m"
            continue;
#line 869 "bag.m"
          }
#line 869 "bag.m"
      }
#line 869 "bag.m"
      break;
#line 869 "bag.m"
    }
#line 862 "bag.m"
}

#line 861 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 861 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 861 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 861 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 861 "bag.m"
{
#line 869 "bag.m"
  while (MR_TRUE)
#line 869 "bag.m"
    {
#line 869 "bag.m"
      /* tailcall optimized into a loop */
#line 869 "bag.m"
      {
#line 869 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 869 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 869 "bag.m"
        else
#line 870 "bag.m"
          {
#line 870 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 871 "bag.m"
            MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

#line 873 "bag.m"
            /* direct tailcall eliminated */
#line 873 "bag.m"
            {
#line 873 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;

#line 873 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 873 "bag.m"
            }
#line 873 "bag.m"
            continue;
#line 870 "bag.m"
          }
#line 869 "bag.m"
      }
#line 869 "bag.m"
      break;
#line 869 "bag.m"
    }
#line 861 "bag.m"
}

#line 782 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 782 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 782 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 782 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 782 "bag.m"
{
#line 789 "bag.m"
  while (MR_TRUE)
#line 789 "bag.m"
    {
#line 789 "bag.m"
      /* tailcall optimized into a loop */
#line 789 "bag.m"
      {
#line 789 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 789 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 789 "bag.m"
        else
#line 789 "bag.m"
          {
#line 789 "bag.m"
            MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 789 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 789 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 797 "bag.m"
            {
#line 797 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
#line 797 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 797 "bag.m"
            }
#line 798 "bag.m"
            /* direct tailcall eliminated */
#line 798 "bag.m"
            {
#line 798 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;
#line 798 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 798 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 798 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 798 "bag.m"
            }
#line 798 "bag.m"
            continue;
#line 789 "bag.m"
          }
#line 789 "bag.m"
      }
#line 789 "bag.m"
      break;
#line 789 "bag.m"
    }
#line 782 "bag.m"
}

#line 781 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 781 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 781 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 781 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 781 "bag.m"
{
#line 789 "bag.m"
  while (MR_TRUE)
#line 789 "bag.m"
    {
#line 789 "bag.m"
      /* tailcall optimized into a loop */
#line 789 "bag.m"
      {
#line 789 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 789 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 789 "bag.m"
        else
#line 790 "bag.m"
          {
#line 790 "bag.m"
            MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 790 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 790 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 792 "bag.m"
            {
#line 792 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 792 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 792 "bag.m"
            }
#line 793 "bag.m"
            /* direct tailcall eliminated */
#line 793 "bag.m"
            {
#line 793 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;
#line 793 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 793 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 793 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 793 "bag.m"
            }
#line 793 "bag.m"
            continue;
#line 790 "bag.m"
          }
#line 789 "bag.m"
      }
#line 789 "bag.m"
      break;
#line 789 "bag.m"
    }
#line 781 "bag.m"
}

#line 702 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
#line 702 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 702 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 702 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 702 "bag.m"
{
#line 709 "bag.m"
  while (MR_TRUE)
#line 709 "bag.m"
    {
#line 709 "bag.m"
      /* tailcall optimized into a loop */
#line 709 "bag.m"
      {
#line 709 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 709 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 709 "bag.m"
        else
#line 709 "bag.m"
          {
#line 709 "bag.m"
            MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 709 "bag.m"
            MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 709 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 717 "bag.m"
            {
#line 717 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
#line 717 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 717 "bag.m"
            }
#line 718 "bag.m"
            /* direct tailcall eliminated */
#line 718 "bag.m"
            {
#line 718 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_11;
#line 718 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 718 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 718 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 718 "bag.m"
            }
#line 718 "bag.m"
            continue;
#line 709 "bag.m"
          }
#line 709 "bag.m"
      }
#line 709 "bag.m"
      break;
#line 709 "bag.m"
    }
#line 702 "bag.m"
}

#line 701 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 701 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 701 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 701 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 701 "bag.m"
{
#line 709 "bag.m"
  while (MR_TRUE)
#line 709 "bag.m"
    {
#line 709 "bag.m"
      /* tailcall optimized into a loop */
#line 709 "bag.m"
      {
#line 709 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 709 "bag.m"
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 709 "bag.m"
        else
#line 710 "bag.m"
          {
#line 710 "bag.m"
            MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 710 "bag.m"
            MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 710 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 712 "bag.m"
            {
#line 712 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 712 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 712 "bag.m"
            }
#line 713 "bag.m"
            /* direct tailcall eliminated */
#line 713 "bag.m"
            {
#line 713 "bag.m"
              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_9;
#line 713 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 713 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 713 "bag.m"
              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 713 "bag.m"
            }
#line 713 "bag.m"
            continue;
#line 710 "bag.m"
          }
#line 709 "bag.m"
      }
#line 709 "bag.m"
      break;
#line 709 "bag.m"
    }
#line 701 "bag.m"
}

#line 620 "bag.m"
static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 620 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 620 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 620 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
#line 620 "bag.m"
{
#line 627 "bag.m"
  while (MR_TRUE)
#line 627 "bag.m"
    {
#line 627 "bag.m"
      /* tailcall optimized into a loop */
#line 627 "bag.m"
      {
#line 627 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 627 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 627 "bag.m"
        else
#line 627 "bag.m"
          {
#line 627 "bag.m"
            MR_Word mercury__bag__HeadAXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
#line 627 "bag.m"
            MR_Word mercury__bag__TailAXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 627 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 630 "bag.m"
            {
#line 630 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_8));
#line 630 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 630 "bag.m"
            }
#line 631 "bag.m"
            /* direct tailcall eliminated */
#line 631 "bag.m"
            {
#line 631 "bag.m"
              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__TailAXNs_9;
#line 631 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 631 "bag.m"
              mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 631 "bag.m"
              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 631 "bag.m"
            }
#line 631 "bag.m"
            continue;
#line 627 "bag.m"
          }
#line 627 "bag.m"
      }
#line 627 "bag.m"
      break;
#line 627 "bag.m"
    }
#line 620 "bag.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__bag__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__bag__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__bag__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__bag__succeeded;

#line 393 "list.opt"
        if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Integer mercury__bag__V_10_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__bag__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Integer mercury__bag__V_15_13 = (mercury__bag__V_10_9 + mercury__bag__HeadVar__3_3);

#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__bag__HeadVar__2__tmp_copy_2 = mercury__bag__V_11_10;
#line 397 "list.opt"
              MR_Integer mercury__bag__HeadVar__3__tmp_copy_3 = mercury__bag__V_15_13;

#line 397 "list.opt"
              mercury__bag__HeadVar__3_3 = mercury__bag__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__bag__HeadVar__2_2 = mercury__bag__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
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
#line 421 "bag.m"
  {
#line 421 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 421 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 421 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 424 "bag.m"
    MR_Integer mercury__bag__Count_6;
#line 422 "bag.m"
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
#line 424 "bag.m"
    if (mercury__bag__succeeded)
#line 423 "bag.m"
      {
#line 423 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 423 "bag.m"
        MR_Integer mercury__bag__V_9_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

#line 423 "bag.m"
        {
#line 423 "bag.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_19_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__V_9_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 423 "bag.m"
      }
#line 424 "bag.m"
    else
#line 425 "bag.m"
      {
#line 425 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 425 "bag.m"
        {
#line 425 "bag.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_19_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 425 "bag.m"
      }
#line 421 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 421 "bag.m"
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
#line 431 "bag.m"
  while (MR_TRUE)
#line 431 "bag.m"
    {
#line 431 "bag.m"
      /* tailcall optimized into a loop */
#line 431 "bag.m"
      {
#line 431 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 431 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "bag.m"
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 431 "bag.m"
        else
#line 432 "bag.m"
          {
#line 432 "bag.m"
            MR_Word mercury__bag__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 433 "bag.m"
            {
#line 433 "bag.m"
              mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 434 "bag.m"
            /* direct tailcall eliminated */
#line 434 "bag.m"
            {
#line 434 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
#line 434 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 434 "bag.m"
              mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 434 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 434 "bag.m"
            }
#line 434 "bag.m"
            continue;
#line 432 "bag.m"
          }
#line 431 "bag.m"
      }
#line 431 "bag.m"
      break;
#line 431 "bag.m"
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
#line 439 "bag.m"
  {
#line 439 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 439 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 442 "bag.m"
    {
#line 442 "bag.m"
      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 439 "bag.m"
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
#line 454 "bag.m"
  {
#line 454 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 454 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 454 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 454 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 454 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 456 "bag.m"
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
#line 454 "bag.m"
    if (mercury__bag__succeeded)
#line 454 "bag.m"
      {
#line 456 "bag.m"
        mercury__bag__V_9_9 = (MR_Integer) 1;
#line 456 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_9_9);
#line 458 "bag.m"
        if (mercury__bag__succeeded)
#line 457 "bag.m"
          {
#line 457 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 457 "bag.m"
            {
#line 457 "bag.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__V_17_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 457 "bag.m"
          }
#line 458 "bag.m"
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
#line 454 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 454 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 454 "bag.m"
      }
#line 454 "bag.m"
    return mercury__bag__succeeded;
#line 454 "bag.m"
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
#line 472 "bag.m"
  while (MR_TRUE)
#line 472 "bag.m"
    {
#line 472 "bag.m"
      /* tailcall optimized into a loop */
#line 472 "bag.m"
      {
#line 472 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 472 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "bag.m"
          {
#line 472 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 472 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 472 "bag.m"
          }
#line 472 "bag.m"
        else
#line 473 "bag.m"
          {
#line 473 "bag.m"
            MR_Word mercury__bag__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 474 "bag.m"
            {
#line 474 "bag.m"
              mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_16_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 473 "bag.m"
            if (mercury__bag__succeeded)
#line 475 "bag.m"
              {
#line 475 "bag.m"
                /* direct tailcall eliminated */
#line 475 "bag.m"
                {
#line 475 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 475 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 475 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 475 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 475 "bag.m"
                }
#line 475 "bag.m"
                continue;
#line 475 "bag.m"
              }
#line 473 "bag.m"
          }
#line 472 "bag.m"
        return mercury__bag__succeeded;
#line 472 "bag.m"
      }
#line 472 "bag.m"
      break;
#line 472 "bag.m"
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
#line 483 "bag.m"
  {
#line 483 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 483 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 481 "bag.m"
    {
#line 481 "bag.m"
      mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_15_15, mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 483 "bag.m"
    if (mercury__bag__succeeded)
#line 483 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 483 "bag.m"
    else
#line 484 "bag.m"
      {
#line 484 "bag.m"
        {
#line 484 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 484 "bag.m"
          return;
        }
#line 484 "bag.m"
      }
#line 483 "bag.m"
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
#line 495 "bag.m"
  {
#line 495 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 495 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

#line 498 "bag.m"
    {
#line 498 "bag.m"
      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__V_12_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 495 "bag.m"
  }
#line 138 "bag.m"
}

#line 379 "bag.m"
void MR_CALL 
mercury__bag____Compare____bag_1_0(
#line 379 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 379 "bag.m"
  MR_Word * mercury__bag__HeadVar__1_1,
#line 379 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 379 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 379 "bag.m"
{
#line 379 "bag.m"
  {
#line 379 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 379 "bag.m"
    MR_Integer mercury__bag__CastX_6 = (MR_Integer) mercury__bag__HeadVar__2_2;
#line 379 "bag.m"
    MR_Integer mercury__bag__CastY_7 = (MR_Integer) mercury__bag__HeadVar__3_3;

#line 379 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_6 == mercury__bag__CastY_7);
#line 379 "bag.m"
    if (mercury__bag__succeeded)
#line 1896 "bag.c"
      *mercury__bag__HeadVar__1_1 = (MR_Integer) 0;
#line 379 "bag.m"
    else
#line 379 "bag.m"
      {
#line 379 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 379 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 379 "bag.m"
        MR_Word mercury__bag__V_5_5 = (MR_Word) mercury__bag__HeadVar__3_3;

#line 379 "bag.m"
        {
#line 379 "bag.m"
          mercury__tree234____Compare____tree234_2_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__HeadVar__1_1, mercury__bag__V_4_4, mercury__bag__V_5_5);
        }
#line 379 "bag.m"
      }
#line 379 "bag.m"
  }
#line 379 "bag.m"
}

#line 379 "bag.m"
MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0(
#line 379 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 379 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 379 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 379 "bag.m"
{
#line 379 "bag.m"
  {
#line 379 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 379 "bag.m"
    MR_Integer mercury__bag__CastX_5 = (MR_Integer) mercury__bag__HeadVar__1_1;
#line 379 "bag.m"
    MR_Integer mercury__bag__CastY_6 = (MR_Integer) mercury__bag__HeadVar__2_2;

#line 379 "bag.m"
    mercury__bag__succeeded = (mercury__bag__CastX_5 == mercury__bag__CastY_6);
#line 379 "bag.m"
    if (mercury__bag__succeeded)
#line 379 "bag.m"
      mercury__bag__succeeded = MR_TRUE;
#line 379 "bag.m"
    else
#line 379 "bag.m"
      {
#line 379 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 379 "bag.m"
        MR_Word mercury__bag__V_3_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 379 "bag.m"
        MR_Word mercury__bag__V_4_4 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 1958 "bag.c"
        {
#line 1960 "bag.c"
          mercury__bag__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__V_3_3, mercury__bag__V_4_4);
        }
#line 379 "bag.m"
      }
#line 379 "bag.m"
    return mercury__bag__succeeded;
#line 379 "bag.m"
  }
#line 379 "bag.m"
}

#line 1018 "bag.m"
static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
#line 1018 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 1018 "bag.m"
  MR_Word mercury__bag__AXNs_3,
#line 1018 "bag.m"
  MR_Word mercury__bag__BXNs_4)
#line 1018 "bag.m"
{
#line 1024 "bag.m"
  while (MR_TRUE)
#line 1024 "bag.m"
    {
#line 1024 "bag.m"
      /* tailcall optimized into a loop */
#line 1024 "bag.m"
      {
#line 1024 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 1024 "bag.m"
        if ((mercury__bag__AXNs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 1024 "bag.m"
        else
#line 1025 "bag.m"
          {
#line 1025 "bag.m"
            MR_Word mercury__bag__HeadAXN_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 0)));
#line 1025 "bag.m"
            MR_Word mercury__bag__TailAXNs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 1)));
#line 1025 "bag.m"
            MR_Word mercury__bag__HeadBXN_7;
#line 1025 "bag.m"
            MR_Word mercury__bag__TailBXNs_8;
#line 1025 "bag.m"
            MR_Box mercury__bag__AX_9;
#line 1025 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 1025 "bag.m"
            MR_Box mercury__bag__BX_11;
#line 1025 "bag.m"
            MR_Integer mercury__bag__BXN_12;
#line 1025 "bag.m"
            MR_Word mercury__bag__XRes_13;

#line 2021 "bag.c"
            mercury__bag__succeeded = ((MR_tag((MR_Word) mercury__bag__BXNs_4)) == (MR_mktag((MR_Integer) 1)));
#line 2023 "bag.c"
            if (mercury__bag__succeeded)
#line 2025 "bag.c"
              {
#line 2027 "bag.c"
                mercury__bag__HeadBXN_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 0)));
#line 2029 "bag.c"
                mercury__bag__TailBXNs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 1)));
#line 1031 "bag.m"
                mercury__bag__AX_9 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 0));
#line 1031 "bag.m"
                mercury__bag__AXN_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 1)));
#line 1032 "bag.m"
                mercury__bag__BX_11 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 0));
#line 1032 "bag.m"
                mercury__bag__BXN_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 1)));
#line 1033 "bag.m"
                {
#line 1033 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_15, &mercury__bag__XRes_13, mercury__bag__AX_9, mercury__bag__BX_11);
                }
#line 1038 "bag.m"
#line 1038 "bag.m"
                switch (mercury__bag__XRes_13) {
#line 1038 "bag.m"
                  default:
#line 1038 "bag.m"
                    mercury__bag__succeeded = MR_FALSE;
#line 1038 "bag.m"
                    break;
#line 1038 "bag.m"
                  case (MR_Integer) 0:
#line 1039 "bag.m"
                    {
#line 1039 "bag.m"
                      MR_Word mercury__bag__XNRes_14;

#line 69 "private_builtin.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_10 < mercury__bag__BXN_12);
#line 72 "private_builtin.opt"
                      if (mercury__bag__succeeded)
#line 71 "private_builtin.opt"
                        mercury__bag__XNRes_14 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                      else
#line 77 "private_builtin.opt"
                        {
#line 74 "private_builtin.opt"
                          mercury__bag__succeeded = (mercury__bag__AXN_10 == mercury__bag__BXN_12);
#line 77 "private_builtin.opt"
                          if (mercury__bag__succeeded)
#line 76 "private_builtin.opt"
                            mercury__bag__XNRes_14 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            mercury__bag__XNRes_14 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                        }
#line 1046 "bag.m"
#line 1046 "bag.m"
                      switch (mercury__bag__XNRes_14) {
#line 1046 "bag.m"
                        default:
#line 1046 "bag.m"
                          mercury__bag__succeeded = MR_FALSE;
#line 1046 "bag.m"
                          break;
#line 1046 "bag.m"
                        case (MR_Integer) 1:
#line 1046 "bag.m"
                        case (MR_Integer) 0:
#line 1045 "bag.m"
                          {
#line 1045 "bag.m"
                            /* direct tailcall eliminated */
#line 1045 "bag.m"
                            {
#line 1045 "bag.m"
                              MR_Word mercury__bag__AXNs__tmp_copy_3 = mercury__bag__TailAXNs_6;
#line 1045 "bag.m"
                              MR_Word mercury__bag__BXNs__tmp_copy_4 = mercury__bag__TailBXNs_8;

#line 1045 "bag.m"
                              mercury__bag__BXNs_4 = mercury__bag__BXNs__tmp_copy_4;
#line 1045 "bag.m"
                              mercury__bag__AXNs_3 = mercury__bag__AXNs__tmp_copy_3;
#line 1045 "bag.m"
                            }
#line 1045 "bag.m"
                            continue;
#line 1045 "bag.m"
                          }
#line 1046 "bag.m"
                          break;
#line 1046 "bag.m"
                      }
#line 1039 "bag.m"
                    }
#line 1038 "bag.m"
                    break;
#line 1038 "bag.m"
                  case (MR_Integer) 2:
#line 1054 "bag.m"
                    {
#line 1054 "bag.m"
                      /* direct tailcall eliminated */
#line 1054 "bag.m"
                      {
#line 1054 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_4 = mercury__bag__TailBXNs_8;

#line 1054 "bag.m"
                        mercury__bag__BXNs_4 = mercury__bag__BXNs__tmp_copy_4;
#line 1054 "bag.m"
                      }
#line 1054 "bag.m"
                      continue;
#line 1054 "bag.m"
                    }
#line 1038 "bag.m"
                    break;
#line 1038 "bag.m"
                }
#line 2147 "bag.c"
              }
#line 1025 "bag.m"
          }
#line 1024 "bag.m"
        return mercury__bag__succeeded;
#line 1024 "bag.m"
      }
#line 1024 "bag.m"
      break;
#line 1024 "bag.m"
    }
#line 1018 "bag.m"
}

#line 945 "bag.m"
MR_bool MR_CALL 
mercury__bag__subset_compare_loop_3_p_0(
#line 945 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_21,
#line 945 "bag.m"
  MR_Word * mercury__bag__Res_4,
#line 945 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 945 "bag.m"
  MR_Word mercury__bag__BXNs_6)
#line 945 "bag.m"
{
#line 957 "bag.m"
  while (MR_TRUE)
#line 957 "bag.m"
    {
#line 957 "bag.m"
      /* tailcall optimized into a loop */
#line 957 "bag.m"
      {
#line 957 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 957 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "bag.m"
          {
#line 957 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 0;
#line 957 "bag.m"
            else
#line 960 "bag.m"
              *mercury__bag__Res_4 = (MR_Integer) 1;
#line 957 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 957 "bag.m"
          }
#line 957 "bag.m"
        else
#line 957 "bag.m"
          {
#line 957 "bag.m"
            MR_Word mercury__bag__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 957 "bag.m"
            MR_Word mercury__bag__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 957 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "bag.m"
              {
#line 964 "bag.m"
                *mercury__bag__Res_4 = (MR_Integer) 2;
#line 964 "bag.m"
                mercury__bag__succeeded = MR_TRUE;
#line 964 "bag.m"
              }
#line 957 "bag.m"
            else
#line 966 "bag.m"
              {
#line 966 "bag.m"
                MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 966 "bag.m"
                MR_Word mercury__bag__TailBXNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 966 "bag.m"
                MR_Box mercury__bag__AX_15 = (MR_hl_field(MR_mktag(0), mercury__bag__V_24_24, (MR_Integer) 0));
#line 966 "bag.m"
                MR_Integer mercury__bag__AXN_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_24_24, (MR_Integer) 1)));
#line 966 "bag.m"
                MR_Box mercury__bag__BX_17 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
#line 966 "bag.m"
                MR_Integer mercury__bag__BXN_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
#line 966 "bag.m"
                MR_Word mercury__bag__XRes_19;

#line 970 "bag.m"
                {
#line 970 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_21, &mercury__bag__XRes_19, mercury__bag__AX_15, mercury__bag__BX_17);
                }
#line 979 "bag.m"
#line 979 "bag.m"
                switch (mercury__bag__XRes_19) {
#line 979 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 979 "bag.m"
                  case (MR_Integer) 1:
#line 972 "bag.m"
                    {
#line 974 "bag.m"
                      {
#line 974 "bag.m"
                        mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__BXNs_6, mercury__bag__V_23_23);
                      }
#line 972 "bag.m"
                      if (mercury__bag__succeeded)
#line 972 "bag.m"
                        {
#line 975 "bag.m"
                          *mercury__bag__Res_4 = (MR_Integer) 2;
#line 975 "bag.m"
                          mercury__bag__succeeded = MR_TRUE;
#line 972 "bag.m"
                        }
#line 972 "bag.m"
                    }
#line 979 "bag.m"
                    break;
#line 979 "bag.m"
                  case (MR_Integer) 0:
#line 980 "bag.m"
                    {
#line 980 "bag.m"
                      MR_Word mercury__bag__XNRes_20;

#line 69 "private_builtin.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_16 < mercury__bag__BXN_18);
#line 72 "private_builtin.opt"
                      if (mercury__bag__succeeded)
#line 71 "private_builtin.opt"
                        mercury__bag__XNRes_20 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                      else
#line 77 "private_builtin.opt"
                        {
#line 74 "private_builtin.opt"
                          mercury__bag__succeeded = (mercury__bag__AXN_16 == mercury__bag__BXN_18);
#line 77 "private_builtin.opt"
                          if (mercury__bag__succeeded)
#line 76 "private_builtin.opt"
                            mercury__bag__XNRes_20 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            mercury__bag__XNRes_20 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                        }
#line 990 "bag.m"
#line 990 "bag.m"
                      switch (mercury__bag__XNRes_20) {
#line 990 "bag.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 990 "bag.m"
                        case (MR_Integer) 1:
#line 983 "bag.m"
                          {
#line 985 "bag.m"
                            {
#line 985 "bag.m"
                              mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__V_23_23, mercury__bag__TailBXNs_14);
                            }
#line 983 "bag.m"
                            if (mercury__bag__succeeded)
#line 983 "bag.m"
                              {
#line 986 "bag.m"
                                *mercury__bag__Res_4 = (MR_Integer) 1;
#line 986 "bag.m"
                                mercury__bag__succeeded = MR_TRUE;
#line 983 "bag.m"
                              }
#line 983 "bag.m"
                          }
#line 990 "bag.m"
                          break;
#line 990 "bag.m"
                        case (MR_Integer) 0:
#line 991 "bag.m"
                          {
#line 991 "bag.m"
                            /* direct tailcall eliminated */
#line 991 "bag.m"
                            {
#line 991 "bag.m"
                              MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_23_23;
#line 991 "bag.m"
                              MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_14;

#line 991 "bag.m"
                              mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 991 "bag.m"
                              mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 991 "bag.m"
                            }
#line 991 "bag.m"
                            continue;
#line 991 "bag.m"
                          }
#line 990 "bag.m"
                          break;
#line 990 "bag.m"
                        case (MR_Integer) 2:
#line 994 "bag.m"
                          {
#line 996 "bag.m"
                            {
#line 996 "bag.m"
                              mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__TailBXNs_14, mercury__bag__V_23_23);
                            }
#line 994 "bag.m"
                            if (mercury__bag__succeeded)
#line 994 "bag.m"
                              {
#line 997 "bag.m"
                                *mercury__bag__Res_4 = (MR_Integer) 2;
#line 997 "bag.m"
                                mercury__bag__succeeded = MR_TRUE;
#line 994 "bag.m"
                              }
#line 994 "bag.m"
                          }
#line 990 "bag.m"
                          break;
#line 990 "bag.m"
                      }
#line 980 "bag.m"
                    }
#line 979 "bag.m"
                    break;
#line 979 "bag.m"
                  case (MR_Integer) 2:
#line 1003 "bag.m"
                    {
#line 1005 "bag.m"
                      {
#line 1005 "bag.m"
                        mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__AXNs_5, mercury__bag__TailBXNs_14);
                      }
#line 1003 "bag.m"
                      if (mercury__bag__succeeded)
#line 1003 "bag.m"
                        {
#line 1006 "bag.m"
                          *mercury__bag__Res_4 = (MR_Integer) 1;
#line 1006 "bag.m"
                          mercury__bag__succeeded = MR_TRUE;
#line 1003 "bag.m"
                        }
#line 1003 "bag.m"
                    }
#line 979 "bag.m"
                    break;
#line 979 "bag.m"
                }
#line 966 "bag.m"
              }
#line 957 "bag.m"
          }
#line 957 "bag.m"
        return mercury__bag__succeeded;
#line 957 "bag.m"
      }
#line 957 "bag.m"
      break;
#line 957 "bag.m"
    }
#line 945 "bag.m"
}

#line 908 "bag.m"
void MR_CALL 
mercury__bag__intersect_small_loop_4_p_0(
#line 908 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 908 "bag.m"
  MR_Word mercury__bag__MapA_5,
#line 908 "bag.m"
  MR_Word mercury__bag__MapB_6,
#line 908 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_MapAiB_0_13,
#line 908 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_MapAiB_14)
#line 908 "bag.m"
{
#line 920 "bag.m"
  while (MR_TRUE)
#line 920 "bag.m"
    {
#line 920 "bag.m"
      /* tailcall optimized into a loop */
#line 920 "bag.m"
      {
#line 920 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 920 "bag.m"
        MR_Box mercury__bag__X_8;
#line 920 "bag.m"
        MR_Integer mercury__bag__AXN_9;
#line 920 "bag.m"
        MR_Word mercury__bag__NextMapA_10;
#line 912 "bag.m"
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
#line 920 "bag.m"
        if (mercury__bag__succeeded)
#line 918 "bag.m"
          {
#line 918 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_MapAiB_15_15;
#line 916 "bag.m"
            MR_Integer mercury__bag__BXN_11;
#line 913 "bag.m"
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
#line 916 "bag.m"
            if (mercury__bag__succeeded)
#line 914 "bag.m"
              {
#line 914 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_20_20;
#line 914 "bag.m"
                MR_Integer mercury__bag__XN_12;

#line 240 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AXN_9 < mercury__bag__BXN_11);
#line 243 "int.opt"
                if (mercury__bag__succeeded)
#line 242 "int.opt"
                  mercury__bag__XN_12 = mercury__bag__AXN_9;
#line 243 "int.opt"
                else
#line 244 "int.opt"
                  mercury__bag__XN_12 = mercury__bag__BXN_11;
#line 2524 "bag.c"
                mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 915 "bag.m"
                {
#line 915 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__X_8, ((MR_Box) (mercury__bag__XN_12)), mercury__bag__STATE_VARIABLE_MapAiB_0_13, &mercury__bag__STATE_VARIABLE_MapAiB_15_15);
                }
#line 914 "bag.m"
              }
#line 916 "bag.m"
            else
#line 916 "bag.m"
              mercury__bag__STATE_VARIABLE_MapAiB_15_15 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
#line 919 "bag.m"
            /* direct tailcall eliminated */
#line 919 "bag.m"
            {
#line 919 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_5 = mercury__bag__NextMapA_10;
#line 919 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_MapAiB_0__tmp_copy_13 = mercury__bag__STATE_VARIABLE_MapAiB_15_15;

#line 919 "bag.m"
              mercury__bag__STATE_VARIABLE_MapAiB_0_13 = mercury__bag__STATE_VARIABLE_MapAiB_0__tmp_copy_13;
#line 919 "bag.m"
              mercury__bag__MapA_5 = mercury__bag__MapA__tmp_copy_5;
#line 919 "bag.m"
            }
#line 919 "bag.m"
            continue;
#line 918 "bag.m"
          }
#line 920 "bag.m"
        else
#line 920 "bag.m"
          *mercury__bag__STATE_VARIABLE_MapAiB_14 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
#line 920 "bag.m"
      }
#line 920 "bag.m"
      break;
#line 920 "bag.m"
    }
#line 908 "bag.m"
}

#line 863 "bag.m"
static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
#line 863 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 863 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 863 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 863 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
#line 863 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
#line 863 "bag.m"
{
#line 869 "bag.m"
  while (MR_TRUE)
#line 869 "bag.m"
    {
#line 869 "bag.m"
      /* tailcall optimized into a loop */
#line 869 "bag.m"
      {
#line 869 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 869 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
#line 869 "bag.m"
          else
#line 870 "bag.m"
            {
#line 870 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 871 "bag.m"
              MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

#line 873 "bag.m"
              {
#line 873 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
              }
#line 870 "bag.m"
            }
#line 869 "bag.m"
        else
#line 869 "bag.m"
          {
#line 869 "bag.m"
            MR_Word mercury__bag__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 869 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 869 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "bag.m"
              {
#line 877 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_32_32, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
              }
#line 869 "bag.m"
            else
#line 879 "bag.m"
              {
#line 879 "bag.m"
                MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 879 "bag.m"
                MR_Box mercury__bag__AX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 0));
#line 879 "bag.m"
                MR_Integer mercury__bag__AXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 1)));
#line 879 "bag.m"
                MR_Box mercury__bag__BX_16 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
#line 879 "bag.m"
                MR_Integer mercury__bag__BXN_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
#line 879 "bag.m"
                MR_Word mercury__bag__Res_18;
#line 879 "bag.m"
                MR_Word mercury__bag__TailBXNs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 883 "bag.m"
                {
#line 883 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_18, mercury__bag__AX_14, mercury__bag__BX_16);
                }
#line 888 "bag.m"
#line 888 "bag.m"
                switch (mercury__bag__Res_18) {
#line 888 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 888 "bag.m"
                  case (MR_Integer) 1:
#line 885 "bag.m"
                    {
#line 885 "bag.m"
                      /* direct tailcall eliminated */
#line 885 "bag.m"
                      {
#line 885 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;

#line 885 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 885 "bag.m"
                      }
#line 885 "bag.m"
                      continue;
#line 885 "bag.m"
                    }
#line 888 "bag.m"
                    break;
#line 888 "bag.m"
                  case (MR_Integer) 0:
#line 889 "bag.m"
                    {
#line 889 "bag.m"
                      MR_Integer mercury__bag__XN_19;
#line 889 "bag.m"
                      MR_Word mercury__bag__HeadXN_20;
#line 889 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

#line 240 "int.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_15 < mercury__bag__BXN_17);
#line 243 "int.opt"
                      if (mercury__bag__succeeded)
#line 242 "int.opt"
                        mercury__bag__XN_19 = mercury__bag__AXN_15;
#line 243 "int.opt"
                      else
#line 244 "int.opt"
                        mercury__bag__XN_19 = mercury__bag__BXN_17;
#line 891 "bag.m"
                      {
#line 891 "bag.m"
                        mercury__bag__HeadXN_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 0) = mercury__bag__AX_14;
#line 891 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 1) = ((MR_Box) (mercury__bag__XN_19));
#line 891 "bag.m"
                      }
#line 892 "bag.m"
                      {
#line 892 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 0) = ((MR_Box) (mercury__bag__HeadXN_20));
#line 892 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21));
#line 892 "bag.m"
                      }
#line 893 "bag.m"
                      /* direct tailcall eliminated */
#line 893 "bag.m"
                      {
#line 893 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 893 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_29;
#line 893 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_21 = mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

#line 893 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_21;
#line 893 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 893 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 893 "bag.m"
                      }
#line 893 "bag.m"
                      continue;
#line 889 "bag.m"
                    }
#line 888 "bag.m"
                    break;
#line 888 "bag.m"
                  case (MR_Integer) 2:
#line 895 "bag.m"
                    {
#line 895 "bag.m"
                      /* direct tailcall eliminated */
#line 895 "bag.m"
                      {
#line 895 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_29;

#line 895 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 895 "bag.m"
                      }
#line 895 "bag.m"
                      continue;
#line 895 "bag.m"
                    }
#line 888 "bag.m"
                    break;
#line 888 "bag.m"
                }
#line 879 "bag.m"
              }
#line 869 "bag.m"
          }
#line 869 "bag.m"
      }
#line 869 "bag.m"
      break;
#line 869 "bag.m"
    }
#line 863 "bag.m"
}

#line 830 "bag.m"
void MR_CALL 
mercury__bag__union_small_loop_3_p_0(
#line 830 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 830 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 830 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 830 "bag.m"
  MR_Word * mercury__bag__MapAuB_6)
#line 830 "bag.m"
{
#line 842 "bag.m"
  while (MR_TRUE)
#line 842 "bag.m"
    {
#line 842 "bag.m"
      /* tailcall optimized into a loop */
#line 842 "bag.m"
      {
#line 842 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 842 "bag.m"
        MR_Box mercury__bag__X_7;
#line 842 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 842 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 834 "bag.m"
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
#line 842 "bag.m"
        if (mercury__bag__succeeded)
#line 840 "bag.m"
          {
#line 840 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 838 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 835 "bag.m"
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
#line 838 "bag.m"
            if (mercury__bag__succeeded)
#line 836 "bag.m"
              {
#line 836 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 836 "bag.m"
                MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 + mercury__bag__BXN_8);

#line 837 "bag.m"
                {
#line 837 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 836 "bag.m"
              }
#line 838 "bag.m"
            else
#line 839 "bag.m"
              {
#line 839 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 839 "bag.m"
                {
#line 839 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 839 "bag.m"
              }
#line 841 "bag.m"
            /* direct tailcall eliminated */
#line 841 "bag.m"
            {
#line 841 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 841 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 841 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 841 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 841 "bag.m"
            }
#line 841 "bag.m"
            continue;
#line 840 "bag.m"
          }
#line 842 "bag.m"
        else
#line 843 "bag.m"
          *mercury__bag__MapAuB_6 = mercury__bag__MapA_4;
#line 842 "bag.m"
      }
#line 842 "bag.m"
      break;
#line 842 "bag.m"
    }
#line 830 "bag.m"
}

#line 783 "bag.m"
static void MR_CALL 
mercury__bag__union_loop_4_p_2(
#line 783 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 783 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 783 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 783 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
#line 783 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
#line 783 "bag.m"
{
#line 789 "bag.m"
  while (MR_TRUE)
#line 789 "bag.m"
    {
#line 789 "bag.m"
      /* tailcall optimized into a loop */
#line 789 "bag.m"
      {
#line 789 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 789 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
#line 789 "bag.m"
          else
#line 790 "bag.m"
            {
#line 790 "bag.m"
              MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 790 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 790 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

#line 792 "bag.m"
              {
#line 792 "bag.m"
                mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 792 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 792 "bag.m"
              }
#line 793 "bag.m"
              {
#line 793 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
              }
#line 790 "bag.m"
            }
#line 789 "bag.m"
        else
#line 789 "bag.m"
          {
#line 789 "bag.m"
            MR_Word mercury__bag__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 789 "bag.m"
            MR_Word mercury__bag__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 789 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "bag.m"
              {
#line 795 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

#line 797 "bag.m"
                {
#line 797 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 797 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 797 "bag.m"
                }
#line 798 "bag.m"
                {
#line 798 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_36_36, mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
                }
#line 795 "bag.m"
              }
#line 789 "bag.m"
            else
#line 800 "bag.m"
              {
#line 800 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 0));
#line 800 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 1)));
#line 800 "bag.m"
                MR_Box mercury__bag__BX_14;
#line 800 "bag.m"
                MR_Integer mercury__bag__BXN_15;
#line 800 "bag.m"
                MR_Word mercury__bag__Res_16;
#line 800 "bag.m"
                MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 800 "bag.m"
                MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 803 "bag.m"
                mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
#line 803 "bag.m"
                mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
#line 804 "bag.m"
                {
#line 804 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 810 "bag.m"
#line 810 "bag.m"
                switch (mercury__bag__Res_16) {
#line 810 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 810 "bag.m"
                  case (MR_Integer) 1:
#line 806 "bag.m"
                    {
#line 806 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

#line 808 "bag.m"
                      {
#line 808 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 808 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 808 "bag.m"
                      }
#line 809 "bag.m"
                      /* direct tailcall eliminated */
#line 809 "bag.m"
                      {
#line 809 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 809 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

#line 809 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 809 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 809 "bag.m"
                      }
#line 809 "bag.m"
                      continue;
#line 806 "bag.m"
                    }
#line 810 "bag.m"
                    break;
#line 810 "bag.m"
                  case (MR_Integer) 0:
#line 811 "bag.m"
                    {
#line 811 "bag.m"
                      MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 + mercury__bag__BXN_15);
#line 811 "bag.m"
                      MR_Word mercury__bag__HeadXN_18;
#line 811 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

#line 813 "bag.m"
                      {
#line 813 "bag.m"
                        mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 813 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 813 "bag.m"
                      }
#line 814 "bag.m"
                      {
#line 814 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 814 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 814 "bag.m"
                      }
#line 815 "bag.m"
                      /* direct tailcall eliminated */
#line 815 "bag.m"
                      {
#line 815 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 815 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 815 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

#line 815 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 815 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 815 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 815 "bag.m"
                      }
#line 815 "bag.m"
                      continue;
#line 811 "bag.m"
                    }
#line 810 "bag.m"
                    break;
#line 810 "bag.m"
                  case (MR_Integer) 2:
#line 817 "bag.m"
                    {
#line 817 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

#line 819 "bag.m"
                      {
#line 819 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
#line 819 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
#line 819 "bag.m"
                      }
#line 820 "bag.m"
                      /* direct tailcall eliminated */
#line 820 "bag.m"
                      {
#line 820 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 820 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

#line 820 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0__tmp_copy_19;
#line 820 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 820 "bag.m"
                      }
#line 820 "bag.m"
                      continue;
#line 817 "bag.m"
                    }
#line 810 "bag.m"
                    break;
#line 810 "bag.m"
                }
#line 800 "bag.m"
              }
#line 789 "bag.m"
          }
#line 789 "bag.m"
      }
#line 789 "bag.m"
      break;
#line 789 "bag.m"
    }
#line 783 "bag.m"
}

#line 750 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_small_loop_3_p_0(
#line 750 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_13,
#line 750 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 750 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 750 "bag.m"
  MR_Word * mercury__bag__MapAlubB_6)
#line 750 "bag.m"
{
#line 762 "bag.m"
  while (MR_TRUE)
#line 762 "bag.m"
    {
#line 762 "bag.m"
      /* tailcall optimized into a loop */
#line 762 "bag.m"
      {
#line 762 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 762 "bag.m"
        MR_Box mercury__bag__X_7;
#line 762 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 762 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 754 "bag.m"
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
#line 762 "bag.m"
        if (mercury__bag__succeeded)
#line 760 "bag.m"
          {
#line 760 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 758 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 755 "bag.m"
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
#line 758 "bag.m"
            if (mercury__bag__succeeded)
#line 756 "bag.m"
              {
#line 756 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_16_16;
#line 756 "bag.m"
                MR_Integer mercury__bag__XN_11;

#line 211 "int.opt"
                mercury__bag__succeeded = (mercury__bag__AXN_10 > mercury__bag__BXN_8);
#line 214 "int.opt"
                if (mercury__bag__succeeded)
#line 213 "int.opt"
                  mercury__bag__XN_11 = mercury__bag__AXN_10;
#line 214 "int.opt"
                else
#line 215 "int.opt"
                  mercury__bag__XN_11 = mercury__bag__BXN_8;
#line 3297 "bag.c"
                mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 757 "bag.m"
                {
#line 757 "bag.m"
                  mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 756 "bag.m"
              }
#line 758 "bag.m"
            else
#line 759 "bag.m"
              {
#line 759 "bag.m"
                MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 759 "bag.m"
                {
#line 759 "bag.m"
                  mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                }
#line 759 "bag.m"
              }
#line 761 "bag.m"
            /* direct tailcall eliminated */
#line 761 "bag.m"
            {
#line 761 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 761 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 761 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 761 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 761 "bag.m"
            }
#line 761 "bag.m"
            continue;
#line 760 "bag.m"
          }
#line 762 "bag.m"
        else
#line 763 "bag.m"
          *mercury__bag__MapAlubB_6 = mercury__bag__MapA_4;
#line 762 "bag.m"
      }
#line 762 "bag.m"
      break;
#line 762 "bag.m"
    }
#line 750 "bag.m"
}

#line 703 "bag.m"
static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
#line 703 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_35,
#line 703 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 703 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 703 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
#line 703 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
#line 703 "bag.m"
{
#line 709 "bag.m"
  while (MR_TRUE)
#line 709 "bag.m"
    {
#line 709 "bag.m"
      /* tailcall optimized into a loop */
#line 709 "bag.m"
      {
#line 709 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 709 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "bag.m"
          if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "bag.m"
            *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
#line 709 "bag.m"
          else
#line 710 "bag.m"
            {
#line 710 "bag.m"
              MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 710 "bag.m"
              MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 710 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

#line 712 "bag.m"
              {
#line 712 "bag.m"
                mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
#line 712 "bag.m"
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 712 "bag.m"
              }
#line 713 "bag.m"
              {
#line 713 "bag.m"
                mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
              }
#line 710 "bag.m"
            }
#line 709 "bag.m"
        else
#line 709 "bag.m"
          {
#line 709 "bag.m"
            MR_Word mercury__bag__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 709 "bag.m"
            MR_Word mercury__bag__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 709 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "bag.m"
              {
#line 715 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

#line 717 "bag.m"
                {
#line 717 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 717 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 717 "bag.m"
                }
#line 718 "bag.m"
                {
#line 718 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__V_36_36, mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
                }
#line 715 "bag.m"
              }
#line 709 "bag.m"
            else
#line 720 "bag.m"
              {
#line 720 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 0));
#line 720 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_37_37, (MR_Integer) 1)));
#line 720 "bag.m"
                MR_Box mercury__bag__BX_14;
#line 720 "bag.m"
                MR_Integer mercury__bag__BXN_15;
#line 720 "bag.m"
                MR_Word mercury__bag__Res_16;
#line 720 "bag.m"
                MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 720 "bag.m"
                MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

#line 723 "bag.m"
                mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
#line 723 "bag.m"
                mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
#line 724 "bag.m"
                {
#line 724 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 730 "bag.m"
#line 730 "bag.m"
                switch (mercury__bag__Res_16) {
#line 730 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 730 "bag.m"
                  case (MR_Integer) 1:
#line 726 "bag.m"
                    {
#line 726 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

#line 728 "bag.m"
                      {
#line 728 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_37_37));
#line 728 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 728 "bag.m"
                      }
#line 729 "bag.m"
                      /* direct tailcall eliminated */
#line 729 "bag.m"
                      {
#line 729 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 729 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

#line 729 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 729 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 729 "bag.m"
                      }
#line 729 "bag.m"
                      continue;
#line 726 "bag.m"
                    }
#line 730 "bag.m"
                    break;
#line 730 "bag.m"
                  case (MR_Integer) 0:
#line 731 "bag.m"
                    {
#line 731 "bag.m"
                      MR_Integer mercury__bag__XN_17;
#line 731 "bag.m"
                      MR_Word mercury__bag__HeadXN_18;
#line 731 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

#line 211 "int.opt"
                      mercury__bag__succeeded = (mercury__bag__AXN_13 > mercury__bag__BXN_15);
#line 214 "int.opt"
                      if (mercury__bag__succeeded)
#line 213 "int.opt"
                        mercury__bag__XN_17 = mercury__bag__AXN_13;
#line 214 "int.opt"
                      else
#line 215 "int.opt"
                        mercury__bag__XN_17 = mercury__bag__BXN_15;
#line 733 "bag.m"
                      {
#line 733 "bag.m"
                        mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 733 "bag.m"
                        MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 733 "bag.m"
                      }
#line 734 "bag.m"
                      {
#line 734 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 734 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 734 "bag.m"
                      }
#line 735 "bag.m"
                      /* direct tailcall eliminated */
#line 735 "bag.m"
                      {
#line 735 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_36_36;
#line 735 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 735 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

#line 735 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 735 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 735 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 735 "bag.m"
                      }
#line 735 "bag.m"
                      continue;
#line 731 "bag.m"
                    }
#line 730 "bag.m"
                    break;
#line 730 "bag.m"
                  case (MR_Integer) 2:
#line 737 "bag.m"
                    {
#line 737 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

#line 739 "bag.m"
                      {
#line 739 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
#line 739 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
#line 739 "bag.m"
                      }
#line 740 "bag.m"
                      /* direct tailcall eliminated */
#line 740 "bag.m"
                      {
#line 740 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_32;
#line 740 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

#line 740 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0__tmp_copy_19;
#line 740 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 740 "bag.m"
                      }
#line 740 "bag.m"
                      continue;
#line 737 "bag.m"
                    }
#line 730 "bag.m"
                    break;
#line 730 "bag.m"
                }
#line 720 "bag.m"
              }
#line 709 "bag.m"
          }
#line 709 "bag.m"
      }
#line 709 "bag.m"
      break;
#line 709 "bag.m"
    }
#line 703 "bag.m"
}

#line 666 "bag.m"
void MR_CALL 
mercury__bag__subtract_small_loop_3_p_0(
#line 666 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_14,
#line 666 "bag.m"
  MR_Word mercury__bag__MapA_4,
#line 666 "bag.m"
  MR_Word mercury__bag__MapB_5,
#line 666 "bag.m"
  MR_Word * mercury__bag__MapAmB_6)
#line 666 "bag.m"
{
#line 682 "bag.m"
  while (MR_TRUE)
#line 682 "bag.m"
    {
#line 682 "bag.m"
      /* tailcall optimized into a loop */
#line 682 "bag.m"
      {
#line 682 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 682 "bag.m"
        MR_Box mercury__bag__X_7;
#line 682 "bag.m"
        MR_Integer mercury__bag__BXN_8;
#line 682 "bag.m"
        MR_Word mercury__bag__NextMapB_9;
#line 670 "bag.m"
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
#line 682 "bag.m"
        if (mercury__bag__succeeded)
#line 680 "bag.m"
          {
#line 680 "bag.m"
            MR_Word mercury__bag__NextMapA_12;
#line 678 "bag.m"
            MR_Integer mercury__bag__AXN_10;
#line 671 "bag.m"
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
#line 678 "bag.m"
            if (mercury__bag__succeeded)
#line 672 "bag.m"
              {
#line 672 "bag.m"
                MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 - mercury__bag__BXN_8);

#line 673 "bag.m"
                mercury__bag__succeeded = (mercury__bag__XN_11 > (MR_Integer) 0);
#line 675 "bag.m"
                if (mercury__bag__succeeded)
#line 674 "bag.m"
                  {
#line 674 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 674 "bag.m"
                    {
#line 674 "bag.m"
                      mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
                    }
#line 674 "bag.m"
                  }
#line 675 "bag.m"
                else
#line 676 "bag.m"
                  {
#line 676 "bag.m"
                    MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 79 "tree234.opt"
                    MR_Word mercury__bag__V_7_37;

#line 79 "tree234.opt"
                    {
#line 79 "tree234.opt"
                      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_18_18, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__NextMapA_12, &mercury__bag__V_7_37);
                    }
#line 676 "bag.m"
                  }
#line 672 "bag.m"
              }
#line 678 "bag.m"
            else
#line 679 "bag.m"
              mercury__bag__NextMapA_12 = mercury__bag__MapA_4;
#line 681 "bag.m"
            /* direct tailcall eliminated */
#line 681 "bag.m"
            {
#line 681 "bag.m"
              MR_Word mercury__bag__MapA__tmp_copy_4 = mercury__bag__NextMapA_12;
#line 681 "bag.m"
              MR_Word mercury__bag__MapB__tmp_copy_5 = mercury__bag__NextMapB_9;

#line 681 "bag.m"
              mercury__bag__MapB_5 = mercury__bag__MapB__tmp_copy_5;
#line 681 "bag.m"
              mercury__bag__MapA_4 = mercury__bag__MapA__tmp_copy_4;
#line 681 "bag.m"
            }
#line 681 "bag.m"
            continue;
#line 680 "bag.m"
          }
#line 682 "bag.m"
        else
#line 683 "bag.m"
          *mercury__bag__MapAmB_6 = mercury__bag__MapA_4;
#line 682 "bag.m"
      }
#line 682 "bag.m"
      break;
#line 682 "bag.m"
    }
#line 666 "bag.m"
}

#line 621 "bag.m"
static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
#line 621 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_31,
#line 621 "bag.m"
  MR_Word mercury__bag__AXNs_5,
#line 621 "bag.m"
  MR_Word mercury__bag__BXNs_6,
#line 621 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
#line 621 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
#line 621 "bag.m"
{
#line 627 "bag.m"
  while (MR_TRUE)
#line 627 "bag.m"
    {
#line 627 "bag.m"
      /* tailcall optimized into a loop */
#line 627 "bag.m"
      {
#line 627 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 627 "bag.m"
        if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 627 "bag.m"
        else
#line 627 "bag.m"
          {
#line 627 "bag.m"
            MR_Word mercury__bag__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
#line 627 "bag.m"
            MR_Word mercury__bag__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

#line 627 "bag.m"
            if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "bag.m"
              {
#line 628 "bag.m"
                MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

#line 630 "bag.m"
                {
#line 630 "bag.m"
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__V_33_33));
#line 630 "bag.m"
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 630 "bag.m"
                }
#line 631 "bag.m"
                {
#line 631 "bag.m"
                  mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(mercury__bag__V_32_32, mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAmBXNs_20);
                }
#line 628 "bag.m"
              }
#line 627 "bag.m"
            else
#line 633 "bag.m"
              {
#line 633 "bag.m"
                MR_Word mercury__bag__HeadBXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
#line 633 "bag.m"
                MR_Word mercury__bag__TailBXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
#line 633 "bag.m"
                MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 0));
#line 633 "bag.m"
                MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_33_33, (MR_Integer) 1)));
#line 633 "bag.m"
                MR_Box mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 0));
#line 633 "bag.m"
                MR_Integer mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 1)));
#line 633 "bag.m"
                MR_Word mercury__bag__Res_16;

#line 637 "bag.m"
                {
#line 637 "bag.m"
                  mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
                }
#line 643 "bag.m"
#line 643 "bag.m"
                switch (mercury__bag__Res_16) {
#line 643 "bag.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 643 "bag.m"
                  case (MR_Integer) 1:
#line 639 "bag.m"
                    {
#line 639 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

#line 641 "bag.m"
                      {
#line 641 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 0) = ((MR_Box) (mercury__bag__V_33_33));
#line 641 "bag.m"
                        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 641 "bag.m"
                      }
#line 642 "bag.m"
                      /* direct tailcall eliminated */
#line 642 "bag.m"
                      {
#line 642 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 642 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

#line 642 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 642 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 642 "bag.m"
                      }
#line 642 "bag.m"
                      continue;
#line 639 "bag.m"
                    }
#line 643 "bag.m"
                    break;
#line 643 "bag.m"
                  case (MR_Integer) 0:
#line 644 "bag.m"
                    {
#line 644 "bag.m"
                      MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 - mercury__bag__BXN_15);
#line 644 "bag.m"
                      MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

#line 646 "bag.m"
                      mercury__bag__succeeded = (mercury__bag__XN_17 > (MR_Integer) 0);
#line 649 "bag.m"
                      if (mercury__bag__succeeded)
#line 647 "bag.m"
                        {
#line 647 "bag.m"
                          MR_Word mercury__bag__HeadXN_18;

#line 647 "bag.m"
                          {
#line 647 "bag.m"
                            mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "bag.m"
                            MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
#line 647 "bag.m"
                            MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
#line 647 "bag.m"
                          }
#line 648 "bag.m"
                          {
#line 648 "bag.m"
                            mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "bag.m"
                            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
#line 648 "bag.m"
                            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
#line 648 "bag.m"
                          }
#line 647 "bag.m"
                        }
#line 649 "bag.m"
                      else
#line 649 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
#line 652 "bag.m"
                      /* direct tailcall eliminated */
#line 652 "bag.m"
                      {
#line 652 "bag.m"
                        MR_Word mercury__bag__AXNs__tmp_copy_5 = mercury__bag__V_32_32;
#line 652 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_11;
#line 652 "bag.m"
                        MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

#line 652 "bag.m"
                        mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0__tmp_copy_19;
#line 652 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 652 "bag.m"
                        mercury__bag__AXNs_5 = mercury__bag__AXNs__tmp_copy_5;
#line 652 "bag.m"
                      }
#line 652 "bag.m"
                      continue;
#line 644 "bag.m"
                    }
#line 643 "bag.m"
                    break;
#line 643 "bag.m"
                  case (MR_Integer) 2:
#line 654 "bag.m"
                    {
#line 654 "bag.m"
                      /* direct tailcall eliminated */
#line 654 "bag.m"
                      {
#line 654 "bag.m"
                        MR_Word mercury__bag__BXNs__tmp_copy_6 = mercury__bag__TailBXNs_11;

#line 654 "bag.m"
                        mercury__bag__BXNs_6 = mercury__bag__BXNs__tmp_copy_6;
#line 654 "bag.m"
                      }
#line 654 "bag.m"
                      continue;
#line 654 "bag.m"
                    }
#line 643 "bag.m"
                    break;
#line 643 "bag.m"
                }
#line 633 "bag.m"
              }
#line 627 "bag.m"
          }
#line 627 "bag.m"
      }
#line 627 "bag.m"
      break;
#line 627 "bag.m"
    }
#line 621 "bag.m"
}

#line 591 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_duplicated_2_p_0(
#line 591 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 591 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 591 "bag.m"
  MR_Box * mercury__bag__X_3)
#line 591 "bag.m"
{
#line 593 "bag.m"
  {
#line 593 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 593 "bag.m"
    MR_Integer mercury__bag__XN_4;

#line 593 "bag.m"
    *mercury__bag__X_3 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 593 "bag.m"
    mercury__bag__XN_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 594 "bag.m"
    mercury__bag__succeeded = (mercury__bag__XN_4 > (MR_Integer) 1);
#line 593 "bag.m"
    return mercury__bag__succeeded;
#line 593 "bag.m"
  }
#line 591 "bag.m"
}

#line 562 "bag.m"
void MR_CALL 
mercury__bag__prepend_n_xs_4_p_0(
#line 562 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_15,
#line 562 "bag.m"
  MR_Box mercury__bag__X_5,
#line 562 "bag.m"
  MR_Integer mercury__bag__N_6,
#line 562 "bag.m"
  MR_Word mercury__bag__STATE_VARIABLE_RevXs_0_8,
#line 562 "bag.m"
  MR_Word * mercury__bag__STATE_VARIABLE_RevXs_9)
#line 562 "bag.m"
{
#line 567 "bag.m"
  while (MR_TRUE)
#line 567 "bag.m"
    {
#line 567 "bag.m"
      /* tailcall optimized into a loop */
#line 567 "bag.m"
      {
#line 567 "bag.m"
        MR_bool mercury__bag__succeeded = (mercury__bag__N_6 <= (MR_Integer) 0);

#line 567 "bag.m"
        if (mercury__bag__succeeded)
#line 567 "bag.m"
          *mercury__bag__STATE_VARIABLE_RevXs_9 = mercury__bag__STATE_VARIABLE_RevXs_0_8;
#line 567 "bag.m"
        else
#line 568 "bag.m"
          {
#line 568 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_RevXs_11_11;
#line 568 "bag.m"
            MR_Integer mercury__bag__V_12_12;

#line 568 "bag.m"
            {
#line 568 "bag.m"
              mercury__bag__STATE_VARIABLE_RevXs_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 0) = mercury__bag__X_5;
#line 568 "bag.m"
              MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevXs_0_8));
#line 568 "bag.m"
            }
#line 569 "bag.m"
            mercury__bag__V_12_12 = (mercury__bag__N_6 - (MR_Integer) 1);
#line 569 "bag.m"
            /* direct tailcall eliminated */
#line 569 "bag.m"
            {
#line 569 "bag.m"
              MR_Integer mercury__bag__N__tmp_copy_6 = mercury__bag__V_12_12;
#line 569 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_RevXs_0__tmp_copy_8 = mercury__bag__STATE_VARIABLE_RevXs_11_11;

#line 569 "bag.m"
              mercury__bag__STATE_VARIABLE_RevXs_0_8 = mercury__bag__STATE_VARIABLE_RevXs_0__tmp_copy_8;
#line 569 "bag.m"
              mercury__bag__N_6 = mercury__bag__N__tmp_copy_6;
#line 569 "bag.m"
            }
#line 569 "bag.m"
            continue;
#line 568 "bag.m"
          }
#line 567 "bag.m"
      }
#line 567 "bag.m"
      break;
#line 567 "bag.m"
    }
#line 562 "bag.m"
}

#line 347 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_unique_1_f_0(
#line 347 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 347 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 347 "bag.m"
{
#line 1071 "bag.m"
  {
#line 1071 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1071 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 1071 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1071 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 43 "map.opt"
    {
#line 43 "map.opt"
      mercury__tree234__count_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__TypeCtorInfo_5_5, mercury__bag__Map_3, &mercury__bag__HeadVar__2_2);
    }
#line 1071 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 1071 "bag.m"
  }
#line 347 "bag.m"
}

#line 342 "bag.m"
MR_Integer MR_CALL 
mercury__bag__count_1_f_0(
#line 342 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 342 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 342 "bag.m"
{
#line 1069 "bag.m"
  {
#line 1069 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1069 "bag.m"
    MR_Integer mercury__bag__HeadVar__2_2;
#line 1069 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1069 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 1069 "bag.m"
    MR_Word mercury__bag__V_5_5;
#line 1069 "bag.m"
    MR_Word mercury__bag__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 416 "tree234.opt"
    {
#line 416 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_18, &mercury__bag__V_5_5);
    }
#line 409 "list.opt"
    {
#line 409 "list.opt"
      mercury__bag__foldl__ho9_4_p_in__list_0(mercury__bag__V_5_5, (MR_Integer) 0, &mercury__bag__HeadVar__2_2);
    }
#line 1069 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 1069 "bag.m"
  }
#line 342 "bag.m"
}

#line 334 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_5(
#line 334 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_17,
#line 334 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_18,
#line 334 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_B_19,
#line 334 "bag.m"
  MR_Word mercury__bag__Pred_7,
#line 334 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 334 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
#line 334 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
#line 334 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
#line 334 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
#line 334 "bag.m"
{
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 334 "bag.m"
}

#line 332 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_4(
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
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 332 "bag.m"
}

#line 330 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl2_6_p_3(
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
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
    return mercury__bag__succeeded;
#line 1064 "bag.m"
  }
#line 330 "bag.m"
}

#line 328 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_2(
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
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_2(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
  }
#line 328 "bag.m"
}

#line 326 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_1(
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
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_1(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
  }
#line 326 "bag.m"
}

#line 324 "bag.m"
void MR_CALL 
mercury__bag__foldl2_6_p_0(
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
#line 1064 "bag.m"
  {
#line 1064 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1064 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "bag.m"
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 190 "map.opt"
    {
#line 190 "map.opt"
      mercury__tree234__foldl2_6_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    }
#line 1064 "bag.m"
  }
#line 324 "bag.m"
}

#line 319 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_5(
#line 319 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 319 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 319 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 319 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 319 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 319 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 319 "bag.m"
{
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl_4_p_5(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
    return mercury__bag__succeeded;
#line 1061 "bag.m"
  }
#line 319 "bag.m"
}

#line 318 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_4(
#line 318 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 318 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_A_12,
#line 318 "bag.m"
  MR_Word mercury__bag__Pred_5,
#line 318 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 318 "bag.m"
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
#line 318 "bag.m"
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
#line 318 "bag.m"
{
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl_4_p_4(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
    return mercury__bag__succeeded;
#line 1061 "bag.m"
  }
#line 318 "bag.m"
}

#line 317 "bag.m"
MR_bool MR_CALL 
mercury__bag__foldl_4_p_3(
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
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__bag__succeeded = mercury__tree234__foldl_4_p_3(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
    return mercury__bag__succeeded;
#line 1061 "bag.m"
  }
#line 317 "bag.m"
}

#line 316 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_2(
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
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
  }
#line 316 "bag.m"
}

#line 315 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_1(
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
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
  }
#line 315 "bag.m"
}

#line 314 "bag.m"
void MR_CALL 
mercury__bag__foldl_4_p_0(
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
#line 1061 "bag.m"
  {
#line 1061 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 1061 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1061 "bag.m"
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__tree234__foldl_4_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    }
#line 1061 "bag.m"
  }
#line 314 "bag.m"
}

#line 305 "bag.m"
MR_bool MR_CALL 
mercury__bag__subset_compare_3_p_0(
#line 305 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_9,
#line 305 "bag.m"
  MR_Word * mercury__bag__Res_4,
#line 305 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 305 "bag.m"
  MR_Word mercury__bag__HeadVar__3_3)
#line 305 "bag.m"
{
#line 940 "bag.m"
  {
#line 940 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 940 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 940 "bag.m"
    MR_Word mercury__bag__MapA_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 940 "bag.m"
    MR_Word mercury__bag__MapB_6 = (MR_Word) mercury__bag__HeadVar__3_3;
#line 940 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 940 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 940 "bag.m"
    MR_Word mercury__bag__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "bag.m"
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
#line 943 "bag.m"
    {
#line 943 "bag.m"
      mercury__bag__succeeded = mercury__bag__subset_compare_loop_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Res_4, mercury__bag__AXNs_7, mercury__bag__BXNs_8);
    }
#line 940 "bag.m"
    return mercury__bag__succeeded;
#line 940 "bag.m"
  }
#line 305 "bag.m"
}

#line 293 "bag.m"
MR_bool MR_CALL 
mercury__bag__is_subbag_2_p_0(
#line 293 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 293 "bag.m"
  MR_Word mercury__bag__BagA_3,
#line 293 "bag.m"
  MR_Word mercury__bag__BagB_4)
#line 293 "bag.m"
{
#line 934 "bag.m"
  {
#line 934 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 934 "bag.m"
    MR_Word mercury__bag__Res_5;

#line 935 "bag.m"
    {
#line 935 "bag.m"
      mercury__bag__succeeded = mercury__bag__subset_compare_3_p_0(mercury__bag__TypeInfo_for_T_6, &mercury__bag__Res_5, mercury__bag__BagA_3, mercury__bag__BagB_4);
    }
#line 934 "bag.m"
    if (mercury__bag__succeeded)
#line 937 "bag.m"
#line 937 "bag.m"
      switch (mercury__bag__Res_5) {
#line 937 "bag.m"
        default:
#line 937 "bag.m"
          mercury__bag__succeeded = MR_FALSE;
#line 937 "bag.m"
          break;
#line 937 "bag.m"
        case (MR_Integer) 1:
#line 936 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 937 "bag.m"
          break;
#line 937 "bag.m"
        case (MR_Integer) 0:
#line 937 "bag.m"
          mercury__bag__succeeded = MR_TRUE;
#line 937 "bag.m"
          break;
#line 937 "bag.m"
      }
#line 934 "bag.m"
    return mercury__bag__succeeded;
#line 934 "bag.m"
  }
#line 293 "bag.m"
}

#line 282 "bag.m"
MR_bool MR_CALL 
mercury__bag__intersect_2_p_0(
#line 282 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_10,
#line 282 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 282 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2)
#line 282 "bag.m"
{
#line 924 "bag.m"
  while (MR_TRUE)
#line 924 "bag.m"
    {
#line 924 "bag.m"
      /* tailcall optimized into a loop */
#line 924 "bag.m"
      {
#line 924 "bag.m"
        MR_bool mercury__bag__succeeded;
#line 924 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 924 "bag.m"
        MR_Word mercury__bag__MapA_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 924 "bag.m"
        MR_Word mercury__bag__MapB_4 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 924 "bag.m"
        MR_Box mercury__bag__X_5;
#line 924 "bag.m"
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
#line 924 "bag.m"
        if (mercury__bag__succeeded)
#line 924 "bag.m"
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
#line 928 "bag.m"
            if (mercury__bag__succeeded)
#line 927 "bag.m"
              mercury__bag__succeeded = MR_TRUE;
#line 928 "bag.m"
            else
#line 929 "bag.m"
              {
#line 929 "bag.m"
                MR_Word mercury__bag__V_8_8 = (MR_Word) mercury__bag__NextMapA_7;

#line 929 "bag.m"
                /* direct tailcall eliminated */
#line 929 "bag.m"
                {
#line 929 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__V_8_8;

#line 929 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 929 "bag.m"
                }
#line 929 "bag.m"
                continue;
#line 929 "bag.m"
              }
#line 924 "bag.m"
          }
#line 924 "bag.m"
        return mercury__bag__succeeded;
#line 924 "bag.m"
      }
#line 924 "bag.m"
      break;
#line 924 "bag.m"
    }
#line 282 "bag.m"
}

#line 277 "bag.m"
void MR_CALL 
mercury__bag__intersect_small_3_p_0(
#line 277 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_8,
#line 277 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 277 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 277 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 277 "bag.m"
{
#line 904 "bag.m"
  {
#line 904 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 904 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 904 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 904 "bag.m"
    MR_Word mercury__bag__MapAiB_6;
#line 904 "bag.m"
    MR_Word mercury__bag__MapAiB0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 906 "bag.m"
    {
#line 906 "bag.m"
      mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__MapA_4, mercury__bag__MapB_5, mercury__bag__MapAiB0_7, &mercury__bag__MapAiB_6);
    }
#line 904 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
#line 904 "bag.m"
  }
#line 277 "bag.m"
}

#line 276 "bag.m"
MR_Word MR_CALL 
mercury__bag__intersect_small_2_f_0(
#line 276 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 276 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 276 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 276 "bag.m"
{
#line 904 "bag.m"
  {
#line 904 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 904 "bag.m"
    MR_Word mercury__bag__BagAiB_6;
#line 904 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 904 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 904 "bag.m"
    MR_Word mercury__bag__MapAiB_10;
#line 904 "bag.m"
    MR_Word mercury__bag__MapAiB0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 906 "bag.m"
    {
#line 906 "bag.m"
      mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, mercury__bag__MapAiB0_11, &mercury__bag__MapAiB_10);
    }
#line 904 "bag.m"
    mercury__bag__BagAiB_6 = (MR_Word) mercury__bag__MapAiB_10;
#line 904 "bag.m"
    return mercury__bag__BagAiB_6;
#line 904 "bag.m"
  }
#line 276 "bag.m"
}

#line 275 "bag.m"
void MR_CALL 
mercury__bag__intersect_3_p_0(
#line 275 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 275 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 275 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 275 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 275 "bag.m"
{
#line 851 "bag.m"
  {
#line 851 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 851 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 851 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 851 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 851 "bag.m"
    MR_Word mercury__bag__MapAiB_6;
#line 851 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 851 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 851 "bag.m"
    MR_Word mercury__bag__RevAiBXNs_9;
#line 851 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 851 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "bag.m"
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
#line 854 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "bag.m"
    {
#line 854 "bag.m"
      mercury__bag__intersect_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAiBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAiBXNs_9, &mercury__bag__MapAiB_6);
    }
#line 851 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
#line 851 "bag.m"
  }
#line 275 "bag.m"
}

#line 274 "bag.m"
MR_Word MR_CALL 
mercury__bag__intersect_2_f_0(
#line 274 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 274 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 274 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 274 "bag.m"
{
#line 849 "bag.m"
  {
#line 849 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 849 "bag.m"
    MR_Word mercury__bag__BagAiB_6;

#line 849 "bag.m"
    {
#line 849 "bag.m"
      mercury__bag__intersect_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAiB_6);
    }
#line 849 "bag.m"
    return mercury__bag__BagAiB_6;
#line 849 "bag.m"
  }
#line 274 "bag.m"
}

#line 261 "bag.m"
void MR_CALL 
mercury__bag__union_small_3_p_0(
#line 261 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 261 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 261 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 261 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 261 "bag.m"
{
#line 827 "bag.m"
  {
#line 827 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 827 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 827 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 827 "bag.m"
    MR_Word mercury__bag__MapAuB_6;

#line 828 "bag.m"
    {
#line 828 "bag.m"
      mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAuB_6);
    }
#line 827 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
#line 827 "bag.m"
  }
#line 261 "bag.m"
}

#line 260 "bag.m"
MR_Word MR_CALL 
mercury__bag__union_small_2_f_0(
#line 260 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 260 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 260 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 260 "bag.m"
{
#line 827 "bag.m"
  {
#line 827 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 827 "bag.m"
    MR_Word mercury__bag__BagAuB_6;
#line 827 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 827 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 827 "bag.m"
    MR_Word mercury__bag__MapAuB_10;

#line 828 "bag.m"
    {
#line 828 "bag.m"
      mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAuB_10);
    }
#line 827 "bag.m"
    mercury__bag__BagAuB_6 = (MR_Word) mercury__bag__MapAuB_10;
#line 827 "bag.m"
    return mercury__bag__BagAuB_6;
#line 827 "bag.m"
  }
#line 260 "bag.m"
}

#line 259 "bag.m"
void MR_CALL 
mercury__bag__union_3_p_0(
#line 259 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 259 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 259 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 259 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 259 "bag.m"
{
#line 771 "bag.m"
  {
#line 771 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 771 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 771 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 771 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 771 "bag.m"
    MR_Word mercury__bag__MapAuB_6;
#line 771 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 771 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 771 "bag.m"
    MR_Word mercury__bag__RevAuBXNs_9;
#line 771 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 771 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "bag.m"
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
#line 774 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "bag.m"
    {
#line 774 "bag.m"
      mercury__bag__union_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAuBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAuBXNs_9, &mercury__bag__MapAuB_6);
    }
#line 771 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
#line 771 "bag.m"
  }
#line 259 "bag.m"
}

#line 258 "bag.m"
MR_Word MR_CALL 
mercury__bag__union_2_f_0(
#line 258 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 258 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 258 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 258 "bag.m"
{
#line 769 "bag.m"
  {
#line 769 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 769 "bag.m"
    MR_Word mercury__bag__BagAuB_6;

#line 769 "bag.m"
    {
#line 769 "bag.m"
      mercury__bag__union_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAuB_6);
    }
#line 769 "bag.m"
    return mercury__bag__BagAuB_6;
#line 769 "bag.m"
  }
#line 258 "bag.m"
}

#line 245 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_small_3_p_0(
#line 245 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 245 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 245 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 245 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 245 "bag.m"
{
#line 747 "bag.m"
  {
#line 747 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 747 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 747 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 747 "bag.m"
    MR_Word mercury__bag__MapAlubB_6;

#line 748 "bag.m"
    {
#line 748 "bag.m"
      mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAlubB_6);
    }
#line 747 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
#line 747 "bag.m"
  }
#line 245 "bag.m"
}

#line 244 "bag.m"
MR_Word MR_CALL 
mercury__bag__least_upper_bound_small_2_f_0(
#line 244 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 244 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 244 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 244 "bag.m"
{
#line 747 "bag.m"
  {
#line 747 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 747 "bag.m"
    MR_Word mercury__bag__BagAlubB_6;
#line 747 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 747 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 747 "bag.m"
    MR_Word mercury__bag__MapAlubB_10;

#line 748 "bag.m"
    {
#line 748 "bag.m"
      mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAlubB_10);
    }
#line 747 "bag.m"
    mercury__bag__BagAlubB_6 = (MR_Word) mercury__bag__MapAlubB_10;
#line 747 "bag.m"
    return mercury__bag__BagAlubB_6;
#line 747 "bag.m"
  }
#line 244 "bag.m"
}

#line 243 "bag.m"
void MR_CALL 
mercury__bag__least_upper_bound_3_p_0(
#line 243 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 243 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 243 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 243 "bag.m"
{
#line 691 "bag.m"
  {
#line 691 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 691 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 691 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 691 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 691 "bag.m"
    MR_Word mercury__bag__MapAlubB_6;
#line 691 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 691 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 691 "bag.m"
    MR_Word mercury__bag__RevAlubBXNs_9;
#line 691 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 691 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "bag.m"
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
#line 694 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "bag.m"
    {
#line 694 "bag.m"
      mercury__bag__least_upper_bound_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAlubBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAlubBXNs_9, &mercury__bag__MapAlubB_6);
    }
#line 691 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
#line 691 "bag.m"
  }
#line 243 "bag.m"
}

#line 242 "bag.m"
MR_Word MR_CALL 
mercury__bag__least_upper_bound_2_f_0(
#line 242 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 242 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 242 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 242 "bag.m"
{
#line 689 "bag.m"
  {
#line 689 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 689 "bag.m"
    MR_Word mercury__bag__BagAlubB_6;

#line 689 "bag.m"
    {
#line 689 "bag.m"
      mercury__bag__least_upper_bound_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAlubB_6);
    }
#line 689 "bag.m"
    return mercury__bag__BagAlubB_6;
#line 689 "bag.m"
  }
#line 242 "bag.m"
}

#line 225 "bag.m"
void MR_CALL 
mercury__bag__subtract_small_3_p_0(
#line 225 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 225 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 225 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 225 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 225 "bag.m"
{
#line 663 "bag.m"
  {
#line 663 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 663 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 663 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 663 "bag.m"
    MR_Word mercury__bag__MapAmB_6;

#line 664 "bag.m"
    {
#line 664 "bag.m"
      mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAmB_6);
    }
#line 663 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
#line 663 "bag.m"
  }
#line 225 "bag.m"
}

#line 224 "bag.m"
MR_Word MR_CALL 
mercury__bag__subtract_small_2_f_0(
#line 224 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 224 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 224 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 224 "bag.m"
{
#line 663 "bag.m"
  {
#line 663 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 663 "bag.m"
    MR_Word mercury__bag__BagAmB_6;
#line 663 "bag.m"
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
#line 663 "bag.m"
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
#line 663 "bag.m"
    MR_Word mercury__bag__MapAmB_10;

#line 664 "bag.m"
    {
#line 664 "bag.m"
      mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAmB_10);
    }
#line 663 "bag.m"
    mercury__bag__BagAmB_6 = (MR_Word) mercury__bag__MapAmB_10;
#line 663 "bag.m"
    return mercury__bag__BagAmB_6;
#line 663 "bag.m"
  }
#line 224 "bag.m"
}

#line 223 "bag.m"
void MR_CALL 
mercury__bag__subtract_3_p_0(
#line 223 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_11,
#line 223 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1,
#line 223 "bag.m"
  MR_Word mercury__bag__HeadVar__2_2,
#line 223 "bag.m"
  MR_Word * mercury__bag__HeadVar__3_3)
#line 223 "bag.m"
{
#line 610 "bag.m"
  {
#line 610 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 610 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 610 "bag.m"
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 610 "bag.m"
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 610 "bag.m"
    MR_Word mercury__bag__MapAmB_6;
#line 610 "bag.m"
    MR_Word mercury__bag__AXNs_7;
#line 610 "bag.m"
    MR_Word mercury__bag__BXNs_8;
#line 610 "bag.m"
    MR_Word mercury__bag__RevAmBXNs_9;
#line 610 "bag.m"
    MR_Word mercury__bag__V_10_10;
#line 610 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "bag.m"
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
#line 613 "bag.m"
    mercury__bag__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "bag.m"
    {
#line 613 "bag.m"
      mercury__bag__subtract_loop_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__V_10_10, &mercury__bag__RevAmBXNs_9);
    }
#line 252 "map.opt"
    {
#line 252 "map.opt"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAmBXNs_9, &mercury__bag__MapAmB_6);
    }
#line 610 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
#line 610 "bag.m"
  }
#line 223 "bag.m"
}

#line 222 "bag.m"
MR_Word MR_CALL 
mercury__bag__subtract_2_f_0(
#line 222 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_7,
#line 222 "bag.m"
  MR_Word mercury__bag__BagA_4,
#line 222 "bag.m"
  MR_Word mercury__bag__BagB_5)
#line 222 "bag.m"
{
#line 608 "bag.m"
  {
#line 608 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 608 "bag.m"
    MR_Word mercury__bag__BagAmB_6;

#line 608 "bag.m"
    {
#line 608 "bag.m"
      mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAmB_6);
    }
#line 608 "bag.m"
    return mercury__bag__BagAmB_6;
#line 608 "bag.m"
  }
#line 222 "bag.m"
}

#line 205 "bag.m"
void MR_CALL 
mercury__bag__to_set_without_duplicates_2_p_0(
#line 205 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_5,
#line 205 "bag.m"
  MR_Word mercury__bag__Bag_3,
#line 205 "bag.m"
  MR_Word * mercury__bag__Set_4)
#line 205 "bag.m"
{
#line 603 "bag.m"
  {
#line 603 "bag.m"
    MR_bool mercury__bag__succeeded;

#line 603 "bag.m"
    {
#line 603 "bag.m"
      *mercury__bag__Set_4 = mercury__bag__to_set_1_f_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3);
    }
#line 603 "bag.m"
  }
#line 205 "bag.m"
}

#line 204 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_without_duplicates_1_f_0(
#line 204 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_4,
#line 204 "bag.m"
  MR_Word mercury__bag__Bag_3)
#line 204 "bag.m"
{
#line 600 "bag.m"
  {
#line 600 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 600 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;

#line 600 "bag.m"
    {
#line 600 "bag.m"
      mercury__bag__HeadVar__2_2 = mercury__bag__to_set_1_f_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Bag_3);
    }
#line 600 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 600 "bag.m"
  }
#line 204 "bag.m"
}

#line 203 "bag.m"
MR_Word MR_CALL 
mercury__bag__to_set_1_f_0(
#line 203 "bag.m"
  MR_Word mercury__bag__TypeInfo_for_T_6,
#line 203 "bag.m"
  MR_Word mercury__bag__HeadVar__1_1)
#line 203 "bag.m"
{
#line 596 "bag.m"
  {
#line 596 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 596 "bag.m"
    MR_Word mercury__bag__Set_4;
#line 596 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 596 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 596 "bag.m"
    MR_Word mercury__bag__Xs_5;
#line 596 "bag.m"
    MR_Word mercury__bag__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "bag.m"
    MR_Word mercury__bag__V_4_17;

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Map_3, mercury__bag__V_5_12, &mercury__bag__Xs_5);
    }
#line 1000 "list.opt"
    if ((mercury__bag__Xs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "list.opt"
      mercury__bag__V_4_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "list.opt"
    else
#line 1001 "list.opt"
      {
#line 1001 "list.opt"
        MR_Box mercury__bag__V_3_18 = (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 0));
#line 1001 "list.opt"
        MR_Word mercury__bag__V_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 1)));

#line 1002 "list.opt"
        {
#line 1002 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__V_3_18, mercury__bag__V_4_19, &mercury__bag__V_4_17);
        }
#line 1001 "list.opt"
      }
#line 258 "set_ordlist.opt"
    mercury__bag__Set_4 = (MR_Word) mercury__bag__V_4_17;
#line 596 "bag.m"
    return mercury__bag__Set_4;
#line 596 "bag.m"
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
#line 587 "bag.m"
  {
#line 587 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 587 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 587 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 587 "bag.m"
    MR_Word mercury__bag__XNs_5;
#line 587 "bag.m"
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_17, &mercury__bag__XNs_5);
    }
#line 589 "bag.m"
    {
#line 589 "bag.m"
      mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__XNs_5, mercury__bag__DupXs_4);
    }
#line 587 "bag.m"
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
#line 585 "bag.m"
  {
#line 585 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 585 "bag.m"
    MR_Word mercury__bag__Xs_4;

#line 585 "bag.m"
    {
#line 585 "bag.m"
      mercury__bag__to_list_only_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    }
#line 585 "bag.m"
    return mercury__bag__Xs_4;
#line 585 "bag.m"
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
#line 581 "bag.m"
  {
#line 581 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 581 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 581 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 581 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__Xs_4);
    }
#line 581 "bag.m"
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
#line 581 "bag.m"
  {
#line 581 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 581 "bag.m"
    MR_Word mercury__bag__Xs_4;
#line 581 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 581 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
#line 581 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__Xs_4);
    }
#line 581 "bag.m"
    return mercury__bag__Xs_4;
#line 581 "bag.m"
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
#line 575 "bag.m"
  {
#line 575 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 575 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 575 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 575 "bag.m"
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__XNs_4);
    }
#line 575 "bag.m"
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
#line 575 "bag.m"
  {
#line 575 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 575 "bag.m"
    MR_Word mercury__bag__XNs_4;
#line 575 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 575 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
#line 575 "bag.m"
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__XNs_4);
    }
#line 575 "bag.m"
    return mercury__bag__XNs_4;
#line 575 "bag.m"
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
#line 558 "bag.m"
  {
#line 558 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 558 "bag.m"
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 558 "bag.m"
    MR_Word mercury__bag__RevXs_5;
#line 558 "bag.m"
    MR_Word mercury__bag__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__Map_3, mercury__bag__V_7_7, &mercury__bag__RevXs_5);
    }
#line 560 "bag.m"
    {
#line 560 "bag.m"
      mercury__list__reverse_2_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__RevXs_5, mercury__bag__Xs_4);
    }
#line 558 "bag.m"
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
#line 556 "bag.m"
  {
#line 556 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 556 "bag.m"
    MR_Word mercury__bag__Xs_4;

#line 556 "bag.m"
    {
#line 556 "bag.m"
      mercury__bag__to_list_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    }
#line 556 "bag.m"
    return mercury__bag__Xs_4;
#line 556 "bag.m"
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
#line 547 "bag.m"
  {
#line 547 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 547 "bag.m"
    MR_Word mercury__bag__Xs_5 = (MR_Word) mercury__bag__Set_3;
#line 547 "bag.m"
    MR_Word mercury__bag__Bag0_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "bag.m"
    MR_Word mercury__bag__Map_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 551 "bag.m"
    {
#line 551 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__Xs_5, mercury__bag__Bag0_6, mercury__bag__Bag_4);
    }
#line 547 "bag.m"
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
#line 547 "bag.m"
  {
#line 547 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 547 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 547 "bag.m"
    MR_Word mercury__bag__Xs_8 = (MR_Word) mercury__bag__Set_3;
#line 547 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "bag.m"
    MR_Word mercury__bag__Map_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 551 "bag.m"
    {
#line 551 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_8, mercury__bag__Bag0_9, &mercury__bag__Bag_4);
    }
#line 547 "bag.m"
    return mercury__bag__Bag_4;
#line 547 "bag.m"
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
#line 539 "bag.m"
  {
#line 539 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 539 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 542 "bag.m"
    {
#line 542 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
    }
#line 539 "bag.m"
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
#line 539 "bag.m"
  {
#line 539 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 539 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 539 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "bag.m"
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 542 "bag.m"
    {
#line 542 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    }
#line 539 "bag.m"
    return mercury__bag__Bag_4;
#line 539 "bag.m"
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
#line 532 "bag.m"
  {
#line 532 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 532 "bag.m"
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "bag.m"
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 534 "bag.m"
    {
#line 534 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
    }
#line 532 "bag.m"
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
#line 532 "bag.m"
  {
#line 532 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 532 "bag.m"
    MR_Word mercury__bag__Bag_4;
#line 532 "bag.m"
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "bag.m"
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 534 "bag.m"
    {
#line 534 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    }
#line 532 "bag.m"
    return mercury__bag__Bag_4;
#line 532 "bag.m"
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
#line 532 "bag.m"
  {
#line 532 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 532 "bag.m"
    MR_Word mercury__bag__HeadVar__2_2;
#line 532 "bag.m"
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "bag.m"
    MR_Word mercury__bag__Map_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 534 "bag.m"
    {
#line 534 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Xs_3, mercury__bag__Bag0_9, &mercury__bag__HeadVar__2_2);
    }
#line 532 "bag.m"
    return mercury__bag__HeadVar__2_2;
#line 532 "bag.m"
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
#line 521 "bag.m"
  {
#line 521 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 521 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 521 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_6 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 521 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_7;
#line 79 "tree234.opt"
    MR_Word mercury__bag__V_7_17;

#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__STATE_VARIABLE_Map_0_6, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_7, &mercury__bag__V_7_17);
    }
#line 521 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_7;
#line 521 "bag.m"
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
#line 521 "bag.m"
  {
#line 521 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 521 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 521 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_10_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 521 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_12 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_0_6;
#line 521 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_13;
#line 79 "tree234.opt"
    MR_Word mercury__bag__V_7_22;

#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_15, mercury__bag__STATE_VARIABLE_Map_0_12, mercury__bag__X_5, &mercury__bag__STATE_VARIABLE_Map_13, &mercury__bag__V_7_22);
    }
#line 521 "bag.m"
    mercury__bag__STATE_VARIABLE_Bag_7 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_13;
#line 521 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 521 "bag.m"
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
#line 514 "bag.m"
  {
#line 514 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 514 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 514 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 514 "bag.m"
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
#line 514 "bag.m"
    if (mercury__bag__succeeded)
#line 514 "bag.m"
      {
#line 514 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 514 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 514 "bag.m"
      }
#line 514 "bag.m"
    return mercury__bag__succeeded;
#line 514 "bag.m"
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
#line 503 "bag.m"
  {
#line 503 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 503 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 503 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 510 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 504 "bag.m"
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
#line 510 "bag.m"
    if (mercury__bag__succeeded)
#line 507 "bag.m"
      {
#line 505 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > (MR_Integer) 1);
#line 507 "bag.m"
        if (mercury__bag__succeeded)
#line 506 "bag.m"
          {
#line 506 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 506 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 506 "bag.m"
            {
#line 506 "bag.m"
              mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 506 "bag.m"
          }
#line 507 "bag.m"
        else
#line 508 "bag.m"
          {
#line 508 "bag.m"
            MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 79 "tree234.opt"
            MR_Word mercury__bag__V_7_27;

#line 79 "tree234.opt"
            {
#line 79 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_7_27);
            }
#line 508 "bag.m"
          }
#line 507 "bag.m"
      }
#line 510 "bag.m"
    else
#line 510 "bag.m"
      mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_0_7;
#line 503 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 503 "bag.m"
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
#line 501 "bag.m"
  {
#line 501 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 501 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 501 "bag.m"
    {
#line 501 "bag.m"
      mercury__bag__delete_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 501 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 501 "bag.m"
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
#line 495 "bag.m"
  {
#line 495 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 495 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;
#line 483 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_18;

#line 481 "bag.m"
    {
#line 481 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_18);
    }
#line 483 "bag.m"
    if (mercury__bag__succeeded)
#line 483 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8_18;
#line 483 "bag.m"
    else
#line 484 "bag.m"
      {
#line 484 "bag.m"
        {
#line 484 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 484 "bag.m"
          return;
        }
#line 484 "bag.m"
      }
#line 495 "bag.m"
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
#line 493 "bag.m"
  {
#line 493 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 493 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 493 "bag.m"
    {
#line 493 "bag.m"
      mercury__bag__det_remove_set_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Set_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 493 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 493 "bag.m"
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
#line 487 "bag.m"
  {
#line 487 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 487 "bag.m"
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

#line 490 "bag.m"
    {
#line 490 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 487 "bag.m"
    return mercury__bag__succeeded;
#line 487 "bag.m"
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
#line 483 "bag.m"
  {
#line 483 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 483 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 481 "bag.m"
    {
#line 481 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 483 "bag.m"
    if (mercury__bag__succeeded)
#line 483 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 483 "bag.m"
    else
#line 484 "bag.m"
      {
#line 484 "bag.m"
        {
#line 484 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
#line 484 "bag.m"
          return;
        }
#line 484 "bag.m"
      }
#line 483 "bag.m"
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
#line 483 "bag.m"
  {
#line 483 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 483 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 483 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

#line 481 "bag.m"
    {
#line 481 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    }
#line 483 "bag.m"
    if (mercury__bag__succeeded)
#line 483 "bag.m"
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
#line 483 "bag.m"
    else
#line 484 "bag.m"
      {
#line 484 "bag.m"
        {
#line 484 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        }
#line 484 "bag.m"
      }
#line 483 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 483 "bag.m"
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
#line 472 "bag.m"
  while (MR_TRUE)
#line 472 "bag.m"
    {
#line 472 "bag.m"
      /* tailcall optimized into a loop */
#line 472 "bag.m"
      {
#line 472 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 472 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "bag.m"
          {
#line 472 "bag.m"
            *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 472 "bag.m"
            mercury__bag__succeeded = MR_TRUE;
#line 472 "bag.m"
          }
#line 472 "bag.m"
        else
#line 473 "bag.m"
          {
#line 473 "bag.m"
            MR_Box mercury__bag__X_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 473 "bag.m"
            MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 474 "bag.m"
            {
#line 474 "bag.m"
              mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 473 "bag.m"
            if (mercury__bag__succeeded)
#line 475 "bag.m"
              {
#line 475 "bag.m"
                /* direct tailcall eliminated */
#line 475 "bag.m"
                {
#line 475 "bag.m"
                  MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Xs_8;
#line 475 "bag.m"
                  MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 475 "bag.m"
                  mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 475 "bag.m"
                  mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 475 "bag.m"
                }
#line 475 "bag.m"
                continue;
#line 475 "bag.m"
              }
#line 473 "bag.m"
          }
#line 472 "bag.m"
        return mercury__bag__succeeded;
#line 472 "bag.m"
      }
#line 472 "bag.m"
      break;
#line 472 "bag.m"
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
#line 468 "bag.m"
  {
#line 468 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 468 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

#line 466 "bag.m"
    {
#line 466 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__X_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    }
#line 468 "bag.m"
    if (mercury__bag__succeeded)
#line 468 "bag.m"
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
#line 468 "bag.m"
    else
#line 469 "bag.m"
      {
#line 469 "bag.m"
        {
#line 469 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
#line 469 "bag.m"
          return;
        }
#line 469 "bag.m"
      }
#line 468 "bag.m"
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
#line 468 "bag.m"
  {
#line 468 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 468 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 468 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

#line 466 "bag.m"
    {
#line 466 "bag.m"
      mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    }
#line 468 "bag.m"
    if (mercury__bag__succeeded)
#line 468 "bag.m"
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
#line 468 "bag.m"
    else
#line 469 "bag.m"
      {
#line 469 "bag.m"
        {
#line 469 "bag.m"
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
        }
#line 469 "bag.m"
      }
#line 468 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 468 "bag.m"
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
#line 454 "bag.m"
  {
#line 454 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 454 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 454 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 454 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 454 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 452 "map.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 456 "bag.m"
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
#line 454 "bag.m"
    if (mercury__bag__succeeded)
#line 454 "bag.m"
      {
#line 456 "bag.m"
        mercury__bag__V_9_9 = (MR_Integer) 1;
#line 456 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_9_9);
#line 458 "bag.m"
        if (mercury__bag__succeeded)
#line 457 "bag.m"
          {
#line 457 "bag.m"
            MR_Integer mercury__bag__V_10_10 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 457 "bag.m"
            {
#line 457 "bag.m"
              mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__V_10_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 457 "bag.m"
          }
#line 458 "bag.m"
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
#line 454 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 454 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 454 "bag.m"
      }
#line 454 "bag.m"
    return mercury__bag__succeeded;
#line 454 "bag.m"
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
#line 446 "bag.m"
  {
#line 446 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 446 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 446 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 446 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 446 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 446 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_9_9;
#line 398 "tree234.opt"
    MR_Word mercury__bag__V_9_24;
#line 398 "tree234.opt"
    MR_Box mercury__bag__conv0_N_6;
#line 448 "bag.m"
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
#line 446 "bag.m"
    if (mercury__bag__succeeded)
#line 446 "bag.m"
      {
#line 448 "bag.m"
        mercury__bag__V_10_10 = (MR_Integer) 1;
#line 448 "bag.m"
        mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__V_10_10);
#line 450 "bag.m"
        if (mercury__bag__succeeded)
#line 449 "bag.m"
          {
#line 449 "bag.m"
            MR_Integer mercury__bag__V_11_11 = (mercury__bag__N_6 - (MR_Integer) 1);

#line 449 "bag.m"
            {
#line 449 "bag.m"
              mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, *mercury__bag__X_4, ((MR_Box) (mercury__bag__V_11_11)), mercury__bag__STATE_VARIABLE_Map_9_9, &mercury__bag__STATE_VARIABLE_Map_8);
            }
#line 449 "bag.m"
          }
#line 450 "bag.m"
        else
#line 450 "bag.m"
          mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_9_9;
#line 446 "bag.m"
        *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 446 "bag.m"
        mercury__bag__succeeded = MR_TRUE;
#line 446 "bag.m"
      }
#line 446 "bag.m"
    return mercury__bag__succeeded;
#line 446 "bag.m"
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
#line 439 "bag.m"
  {
#line 439 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 439 "bag.m"
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

#line 442 "bag.m"
    {
#line 442 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    }
#line 439 "bag.m"
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
#line 439 "bag.m"
  {
#line 439 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 439 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
#line 439 "bag.m"
    MR_Word mercury__bag__List_14 = (MR_Word) mercury__bag__Xs_5;

#line 442 "bag.m"
    {
#line 442 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__List_14, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 439 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 439 "bag.m"
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
#line 431 "bag.m"
  while (MR_TRUE)
#line 431 "bag.m"
    {
#line 431 "bag.m"
      /* tailcall optimized into a loop */
#line 431 "bag.m"
      {
#line 431 "bag.m"
        MR_bool mercury__bag__succeeded;

#line 431 "bag.m"
        if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "bag.m"
          *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
#line 431 "bag.m"
        else
#line 432 "bag.m"
          {
#line 432 "bag.m"
            MR_Box mercury__bag__Item_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
#line 432 "bag.m"
            MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "bag.m"
            MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 433 "bag.m"
            {
#line 433 "bag.m"
              mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
            }
#line 434 "bag.m"
            /* direct tailcall eliminated */
#line 434 "bag.m"
            {
#line 434 "bag.m"
              MR_Word mercury__bag__HeadVar__1__tmp_copy_1 = mercury__bag__Items_8;
#line 434 "bag.m"
              MR_Word mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

#line 434 "bag.m"
              mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_0__tmp_copy_2;
#line 434 "bag.m"
              mercury__bag__HeadVar__1_1 = mercury__bag__HeadVar__1__tmp_copy_1;
#line 434 "bag.m"
            }
#line 434 "bag.m"
            continue;
#line 432 "bag.m"
          }
#line 431 "bag.m"
      }
#line 431 "bag.m"
      break;
#line 431 "bag.m"
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
#line 429 "bag.m"
  {
#line 429 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 429 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 429 "bag.m"
    {
#line 429 "bag.m"
      mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 429 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 429 "bag.m"
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
#line 421 "bag.m"
  {
#line 421 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 421 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
#line 421 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
#line 424 "bag.m"
    MR_Integer mercury__bag__Count_6;
#line 422 "bag.m"
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
#line 424 "bag.m"
    if (mercury__bag__succeeded)
#line 423 "bag.m"
      {
#line 423 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 423 "bag.m"
        MR_Integer mercury__bag__V_9_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

#line 423 "bag.m"
        {
#line 423 "bag.m"
          mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__V_9_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 423 "bag.m"
      }
#line 424 "bag.m"
    else
#line 425 "bag.m"
      {
#line 425 "bag.m"
        MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 425 "bag.m"
        {
#line 425 "bag.m"
          mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
        }
#line 425 "bag.m"
      }
#line 421 "bag.m"
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
#line 421 "bag.m"
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
#line 419 "bag.m"
  {
#line 419 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 419 "bag.m"
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

#line 419 "bag.m"
    {
#line 419 "bag.m"
      mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    }
#line 419 "bag.m"
    return mercury__bag__STATE_VARIABLE_Bag_7;
#line 419 "bag.m"
  }
#line 78 "bag.m"
}

#line 411 "bag.m"
static void MR_CALL 
mercury__bag__member_3_p_0_1(
#line 411 "bag.m"
  void * mercury__bag__env_ptr_arg)
#line 411 "bag.m"
{
#line 411 "bag.m"
  {
#line 411 "bag.m"
    struct mercury__bag__member_3_p_0_env_0_s * mercury__bag__env_ptr = (struct mercury__bag__member_3_p_0_env_0_s *) mercury__bag__env_ptr_arg;

#line 411 "bag.m"
    {
#line 468 "bag.m"
      MR_Word mercury__bag__STATE_VARIABLE_Bag_8_17;

#line 466 "bag.m"
      {
#line 466 "bag.m"
        (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded = mercury__bag__remove_3_p_0((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__X_4), (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_17);
      }
#line 468 "bag.m"
      if ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded)
#line 468 "bag.m"
        *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8) = mercury__bag__STATE_VARIABLE_Bag_8_17;
#line 468 "bag.m"
      else
#line 469 "bag.m"
        {
#line 469 "bag.m"
          {
#line 469 "bag.m"
            mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
#line 469 "bag.m"
            return;
          }
#line 469 "bag.m"
        }
#line 468 "bag.m"
      {
#line 468 "bag.m"
        ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont)((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont_env_ptr);
      }
#line 411 "bag.m"
    }
#line 411 "bag.m"
  }
#line 411 "bag.m"
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
#line 411 "bag.m"
    {
#line 411 "bag.m"
      MR_Word mercury__bag__Xs_6;

#line 556 "bag.m"
      {
#line 556 "bag.m"
        mercury__bag__to_list_2_p_0((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__Xs_6);
      }
#line 413 "bag.m"
      {
#line 413 "bag.m"
        mercury__list__member_2_p_1((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__X_4, mercury__bag__Xs_6, mercury__bag__member_3_p_0_1, &mercury__bag__env);
      }
#line 411 "bag.m"
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
#line 408 "bag.m"
  {
#line 408 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 408 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 408 "bag.m"
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
#line 408 "bag.m"
    return mercury__bag__succeeded;
#line 408 "bag.m"
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
#line 401 "bag.m"
  {
#line 401 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 401 "bag.m"
    MR_Word mercury__bag__Map_4 = (MR_Word) mercury__bag__HeadVar__1_1;
#line 404 "bag.m"
    MR_Integer mercury__bag__NPrime_7;
#line 402 "bag.m"
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
#line 404 "bag.m"
    if (mercury__bag__succeeded)
#line 403 "bag.m"
      *mercury__bag__N_6 = mercury__bag__NPrime_7;
#line 404 "bag.m"
    else
#line 405 "bag.m"
      *mercury__bag__N_6 = (MR_Integer) 0;
#line 401 "bag.m"
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
#line 401 "bag.m"
  {
#line 401 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 401 "bag.m"
    MR_Integer mercury__bag__N_6;
#line 401 "bag.m"
    MR_Word mercury__bag__Map_10 = (MR_Word) mercury__bag__Bag_4;
#line 404 "bag.m"
    MR_Integer mercury__bag__NPrime_11;
#line 402 "bag.m"
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
#line 404 "bag.m"
    if (mercury__bag__succeeded)
#line 403 "bag.m"
      mercury__bag__N_6 = mercury__bag__NPrime_11;
#line 404 "bag.m"
    else
#line 405 "bag.m"
      mercury__bag__N_6 = (MR_Integer) 0;
#line 401 "bag.m"
    return mercury__bag__N_6;
#line 401 "bag.m"
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
#line 395 "bag.m"
  {
#line 395 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 395 "bag.m"
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 395 "bag.m"
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
#line 395 "bag.m"
    return mercury__bag__succeeded;
#line 395 "bag.m"
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
#line 390 "bag.m"
  {
#line 390 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 390 "bag.m"
    MR_Word mercury__bag__Map_2 = (MR_Word) mercury__bag__HeadVar__1_1;

#line 248 "tree234.opt"
    mercury__bag__succeeded = (mercury__bag__Map_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "bag.m"
    return mercury__bag__succeeded;
#line 390 "bag.m"
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
#line 387 "bag.m"
  {
#line 387 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 387 "bag.m"
    MR_Word mercury__bag__Map_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 387 "bag.m"
    *mercury__bag__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "bag.m"
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
#line 387 "bag.m"
  {
#line 387 "bag.m"
    MR_bool mercury__bag__succeeded;
#line 387 "bag.m"
    MR_Word mercury__bag__Bag_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "bag.m"
    MR_Word mercury__bag__Map_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 387 "bag.m"
    return mercury__bag__Bag_2;
#line 387 "bag.m"
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
