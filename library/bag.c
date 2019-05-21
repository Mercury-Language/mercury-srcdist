/*
** Automatically generated from `bag.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__bag__member_3_p_0_env_0_s {
  MR_Word mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10;
  MR_Box * mercury__bag__member_3_p_0_env_0__X_4;
  MR_Word mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7;
  MR_Word * mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8;
  MR_Cont mercury__bag__member_3_p_0_env_0__cont;
  void * mercury__bag__member_3_p_0_env_0__cont_env_ptr;
  MR_bool mercury__bag__member_3_p_0_env_0__succeeded;
};


static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1;

static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Integer mercury__bag__HeadVar__3_3,
  MR_Integer * mercury__bag__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_15,
  MR_Word mercury__bag__AXNs_3,
  MR_Word mercury__bag__BXNs_4);

static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_31,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__union_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_35,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_35,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
  MR_Word mercury__bag__TypeInfo_for_T_31,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3);

static void MR_CALL 
mercury__bag__member_3_p_0_1(
  void * mercury__bag__env_ptr_arg);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__bag__Var_55,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word mercury__bag__HeadVar__3_3,
  MR_Word * mercury__bag__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
  MR_Box mercury__bag__wrapper_arg_1,
  MR_Box mercury__bag__wrapper_arg_2,
  MR_Box mercury__bag__wrapper_arg_3);

static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
  MR_Box mercury__bag__wrapper_arg_1,
  MR_Box * mercury__bag__wrapper_arg_2,
  MR_Box mercury__bag__wrapper_arg_3,
  MR_Box mercury__bag__wrapper_arg_4);


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
#include "uint.mh"
#include "version_array.mh"



static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1 = {
  (MR_String) "bag",
  (MR_PseudoTypeInfo) &mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bag__bag__type_ctor_info_bag_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG,
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

static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_12,
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__Set_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
{
  {
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

    mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_16,
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
    else
    {
      MR_Word mercury__bag__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_HeadVar__1_1 = mercury__bag__Items_8;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

        mercury__bag__HeadVar__1_1 = mercury__bag__next_value_of_HeadVar__1_1;
        mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_19,
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__Item_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Integer mercury__bag__Count_6;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__bag__conv0_Count_6;

    mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__Item_4, &mercury__bag__conv0_Count_6);
    if (mercury__bag__succeeded)
    {
      mercury__bag__Count_6 = ((MR_Integer) mercury__bag__conv0_Count_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Integer mercury__bag__Var_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__Var_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Var_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
    }
    else
    {
      MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__Var_19, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
    }
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_12,
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__Set_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
{
  {
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

    mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_12, mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_15,
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Word mercury__bag__Xs_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

    mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_15, mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    if (mercury__bag__succeeded)
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_16,
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
        mercury__bag__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__bag__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

        mercury__bag__succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_16, mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
        if (mercury__bag__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__1_1 = mercury__bag__Xs_8;
            MR_Word mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

            mercury__bag__HeadVar__1_1 = mercury__bag__next_value_of_HeadVar__1_1;
            mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2;
          }
          continue;
        }
      }
      return mercury__bag__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__bag__Var_17,
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__bag__N_6;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Box mercury__bag__conv0_N_6;
    MR_Integer mercury__bag__Var_9;

    mercury__bag__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__bag__Var_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    if (mercury__bag__succeeded)
    {
      mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      mercury__bag__Var_9 = (MR_Integer) 1;
      mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__Var_9);
      if (mercury__bag__succeeded)
      {
        MR_Integer mercury__bag__Var_10 = (mercury__bag__N_6 - (MR_Integer) 1);

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__bag__Var_17, mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__Var_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word mercury__bag__V_7_28;
        MR_Word mercury__bag__conv1_STATE_VARIABLE_Map_8;

        mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, (MR_Word) mercury__bag__STATE_VARIABLE_Map_0_7, ((MR_Box) (mercury__bag__X_4)), &mercury__bag__conv1_STATE_VARIABLE_Map_8, &mercury__bag__V_7_28);
        mercury__bag__STATE_VARIABLE_Map_8 = (MR_Word) mercury__bag__conv1_STATE_VARIABLE_Map_8;
      }
      *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag____Compare____bag_1_0(
  MR_Word mercury__bag__TypeInfo_for_T_8,
  MR_Word * mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Integer mercury__bag__CastX_6 = (MR_Integer) mercury__bag__HeadVar__2_2;
    MR_Integer mercury__bag__CastY_7 = (MR_Integer) mercury__bag__HeadVar__3_3;

    mercury__bag__succeeded = (mercury__bag__CastX_6 == mercury__bag__CastY_7);
    if (mercury__bag__succeeded)
      *mercury__bag__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__ArgX1_4 = (MR_Word) mercury__bag__HeadVar__2_2;
      MR_Word mercury__bag__ArgY1_5 = (MR_Word) mercury__bag__HeadVar__3_3;

      mercury__tree234____Compare____tree234_2_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__HeadVar__1_1, mercury__bag__ArgX1_4, mercury__bag__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Integer mercury__bag__CastX_5 = (MR_Integer) mercury__bag__HeadVar__1_1;
    MR_Integer mercury__bag__CastY_6 = (MR_Integer) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = (mercury__bag__CastX_5 == mercury__bag__CastY_6);
    if (mercury__bag__succeeded)
      mercury__bag__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__ArgX1_3 = (MR_Word) mercury__bag__HeadVar__1_1;
      MR_Word mercury__bag__ArgY1_4 = (MR_Word) mercury__bag__HeadVar__2_2;

      mercury__bag__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__ArgX1_3, mercury__bag__ArgY1_4);
    }
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__is_duplicated_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Box * mercury__bag__X_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Integer mercury__bag__XN_4;

    *mercury__bag__X_3 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
    mercury__bag__XN_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
    mercury__bag__succeeded = (mercury__bag__XN_4 > (MR_Integer) 1);
    return mercury__bag__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_unique_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_4,
  MR_Word mercury__bag__HeadVar__1_1)
{
  {
    MR_Integer mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;

    mercury__tree234__count_2_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__TypeCtorInfo_5_5, mercury__bag__Map_3, &mercury__bag__HeadVar__2_2);
    return mercury__bag__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1)
{
  {
    MR_Integer mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__Var_5;
    MR_Word mercury__bag__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__values_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_18, &mercury__bag__Var_5);
    mercury__bag__foldl__ho9_4_p_in__list_0(mercury__bag__Var_5, (MR_Integer) 0, &mercury__bag__HeadVar__2_2);
    return mercury__bag__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Integer mercury__bag__HeadVar__3_3,
  MR_Integer * mercury__bag__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
    else
    {
      MR_Integer mercury__bag__V_10_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__bag__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__bag__V_15_13 = (mercury__bag__V_10_9 + mercury__bag__HeadVar__3_3);

      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_HeadVar__2_2 = mercury__bag__V_11_10;
        MR_Integer mercury__bag__next_value_of_HeadVar__3_3 = mercury__bag__V_15_13;

        mercury__bag__HeadVar__2_2 = mercury__bag__next_value_of_HeadVar__2_2;
        mercury__bag__HeadVar__3_3 = mercury__bag__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_5(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_4(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_3(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl2_6_p_2(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_1(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl2_6_p_1(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__TypeInfo_for_A_18,
  MR_Word mercury__bag__TypeInfo_for_B_19,
  MR_Word mercury__bag__Pred_7,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__bag__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_8 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl2_6_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__TypeInfo_for_A_18, mercury__bag__TypeInfo_for_B_19, mercury__bag__Pred_7, mercury__bag__Map_8, mercury__bag__STATE_VARIABLE_Acc1_0_11, mercury__bag__STATE_VARIABLE_Acc1_12, mercury__bag__STATE_VARIABLE_Acc2_0_13, mercury__bag__STATE_VARIABLE_Acc2_14);
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_5(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl_4_p_5(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_4(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl_4_p_4(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_3(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__bag__succeeded = mercury__tree234__foldl_4_p_3(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_1(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__TypeInfo_for_A_12,
  MR_Word mercury__bag__Pred_5,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Box mercury__bag__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__bag__STATE_VARIABLE_Acc_9)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_6 = (MR_Word) mercury__bag__HeadVar__2_2;

    mercury__tree234__foldl_4_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_13_13, mercury__bag__TypeInfo_for_A_12, mercury__bag__Pred_5, mercury__bag__Map_6, mercury__bag__STATE_VARIABLE_Acc_0_8, mercury__bag__STATE_VARIABLE_Acc_9);
  }
}

MR_bool MR_CALL 
mercury__bag__is_subbag_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Word mercury__bag__BagA_3,
  MR_Word mercury__bag__BagB_4)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__Res_5;

    mercury__bag__succeeded = mercury__bag__subset_compare_3_p_0(mercury__bag__TypeInfo_for_T_6, &mercury__bag__Res_5, mercury__bag__BagA_3, mercury__bag__BagB_4);
    if (mercury__bag__succeeded)
      switch (mercury__bag__Res_5) {
        default:
          mercury__bag__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          mercury__bag__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          mercury__bag__succeeded = MR_TRUE;
          break;
      }
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__subset_compare_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word * mercury__bag__Res_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__MapA_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapB_6 = (MR_Word) mercury__bag__HeadVar__3_3;
    MR_Word mercury__bag__AXNs_7;
    MR_Word mercury__bag__BXNs_8;
    MR_Word mercury__bag__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_5_22;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__MapA_5, mercury__bag__V_5_15, &mercury__bag__AXNs_7);
    mercury__bag__V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__MapB_6, mercury__bag__V_5_22, &mercury__bag__BXNs_8);
    mercury__bag__succeeded = mercury__bag__subset_compare_loop_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Res_4, mercury__bag__AXNs_7, mercury__bag__BXNs_8);
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__subset_compare_loop_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_21,
  MR_Word * mercury__bag__Res_4,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bag__Res_4 = (MR_Integer) 0;
        else
          *mercury__bag__Res_4 = (MR_Integer) 1;
        mercury__bag__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__bag__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
        MR_Word mercury__bag__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mercury__bag__Res_4 = (MR_Integer) 2;
          mercury__bag__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
          MR_Word mercury__bag__TailBXNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
          MR_Box mercury__bag__AX_15 = (MR_hl_field(MR_mktag(0), mercury__bag__Var_24, (MR_Integer) 0));
          MR_Integer mercury__bag__AXN_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__Var_24, (MR_Integer) 1)));
          MR_Box mercury__bag__BX_17 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
          MR_Integer mercury__bag__BXN_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
          MR_Word mercury__bag__XRes_19;

          mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_21, &mercury__bag__XRes_19, mercury__bag__AX_15, mercury__bag__BX_17);
          switch (mercury__bag__XRes_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__BXNs_6, mercury__bag__Var_23);
                if (mercury__bag__succeeded)
                {
                  *mercury__bag__Res_4 = (MR_Integer) 2;
                  mercury__bag__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word mercury__bag__XNRes_20;

                mercury__bag__succeeded = (mercury__bag__AXN_16 < mercury__bag__BXN_18);
                if (mercury__bag__succeeded)
                  mercury__bag__XNRes_20 = (MR_Integer) 1;
                else
                {
                  mercury__bag__succeeded = (mercury__bag__AXN_16 == mercury__bag__BXN_18);
                  if (mercury__bag__succeeded)
                    mercury__bag__XNRes_20 = (MR_Integer) 0;
                  else
                    mercury__bag__XNRes_20 = (MR_Integer) 2;
                }
                switch (mercury__bag__XNRes_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__Var_23, mercury__bag__TailBXNs_14);
                      if (mercury__bag__succeeded)
                      {
                        *mercury__bag__Res_4 = (MR_Integer) 1;
                        mercury__bag__succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_23;
                        MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_14;

                        mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                        mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__TailBXNs_14, mercury__bag__Var_23);
                      if (mercury__bag__succeeded)
                      {
                        *mercury__bag__Res_4 = (MR_Integer) 2;
                        mercury__bag__succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__bag__succeeded = mercury__bag__subset_compare_verify_le_2_p_0(mercury__bag__TypeInfo_for_T_21, mercury__bag__AXNs_5, mercury__bag__TailBXNs_14);
                if (mercury__bag__succeeded)
                {
                  *mercury__bag__Res_4 = (MR_Integer) 1;
                  mercury__bag__succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
      }
      return mercury__bag__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_15,
  MR_Word mercury__bag__AXNs_3,
  MR_Word mercury__bag__BXNs_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__AXNs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__bag__succeeded = MR_TRUE;
      else
      {
        MR_Word mercury__bag__HeadAXN_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 0)));
        MR_Word mercury__bag__TailAXNs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_3, (MR_Integer) 1)));
        MR_Word mercury__bag__HeadBXN_7;
        MR_Word mercury__bag__TailBXNs_8;
        MR_Box mercury__bag__AX_9;
        MR_Integer mercury__bag__AXN_10;
        MR_Box mercury__bag__BX_11;
        MR_Integer mercury__bag__BXN_12;
        MR_Word mercury__bag__XRes_13;

        mercury__bag__succeeded = ((MR_tag((MR_Word) mercury__bag__BXNs_4)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__bag__succeeded)
        {
          mercury__bag__HeadBXN_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 0)));
          mercury__bag__TailBXNs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_4, (MR_Integer) 1)));
          mercury__bag__AX_9 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 0));
          mercury__bag__AXN_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadAXN_5, (MR_Integer) 1)));
          mercury__bag__BX_11 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 0));
          mercury__bag__BXN_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_7, (MR_Integer) 1)));
          mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_15, &mercury__bag__XRes_13, mercury__bag__AX_9, mercury__bag__BX_11);
          switch (mercury__bag__XRes_13) {
            default:
              mercury__bag__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word mercury__bag__XNRes_14;

                mercury__bag__succeeded = (mercury__bag__AXN_10 < mercury__bag__BXN_12);
                if (mercury__bag__succeeded)
                  mercury__bag__XNRes_14 = (MR_Integer) 1;
                else
                {
                  mercury__bag__succeeded = (mercury__bag__AXN_10 == mercury__bag__BXN_12);
                  if (mercury__bag__succeeded)
                    mercury__bag__XNRes_14 = (MR_Integer) 0;
                  else
                    mercury__bag__XNRes_14 = (MR_Integer) 2;
                }
                switch (mercury__bag__XNRes_14) {
                  default:
                    mercury__bag__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__bag__next_value_of_AXNs_3 = mercury__bag__TailAXNs_6;
                        MR_Word mercury__bag__next_value_of_BXNs_4 = mercury__bag__TailBXNs_8;

                        mercury__bag__AXNs_3 = mercury__bag__next_value_of_AXNs_3;
                        mercury__bag__BXNs_4 = mercury__bag__next_value_of_BXNs_4;
                      }
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_BXNs_4 = mercury__bag__TailBXNs_8;

                  mercury__bag__BXNs_4 = mercury__bag__next_value_of_BXNs_4;
                }
                continue;
              }
              break;
          }
        }
      }
      return mercury__bag__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__intersect_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;
      MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__MapA_3 = (MR_Word) mercury__bag__HeadVar__1_1;
      MR_Word mercury__bag__MapB_4 = (MR_Word) mercury__bag__HeadVar__2_2;
      MR_Box mercury__bag__X_5;
      MR_Word mercury__bag__NextMapA_7;
      MR_Integer mercury__bag___N_6;
      MR_Word mercury__bag__V_9_20;
      MR_Box mercury__bag__conv0__N_6;
      MR_Integer mercury__bag__V_5_23;
      MR_Box mercury__bag__conv1_V_5_23;

      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__MapA_3, &mercury__bag__X_5, &mercury__bag__conv0__N_6, &mercury__bag__NextMapA_7, &mercury__bag__V_9_20);
      if (mercury__bag__succeeded)
      {
        mercury__bag___N_6 = ((MR_Integer) mercury__bag__conv0__N_6);
        mercury__bag__succeeded = MR_TRUE;
      }
      if (mercury__bag__succeeded)
      {
        mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__MapB_4, mercury__bag__X_5, &mercury__bag__conv1_V_5_23);
        if (mercury__bag__succeeded)
        {
          mercury__bag__V_5_23 = ((MR_Integer) mercury__bag__conv1_V_5_23);
          mercury__bag__succeeded = MR_TRUE;
        }
        if (mercury__bag__succeeded)
          mercury__bag__succeeded = MR_TRUE;
        else
        {
          MR_Word mercury__bag__Var_8 = (MR_Word) mercury__bag__NextMapA_7;

          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__1_1 = mercury__bag__Var_8;

            mercury__bag__HeadVar__1_1 = mercury__bag__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return mercury__bag__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__intersect_small_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_8,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAiB_6;
    MR_Word mercury__bag__MapAiB0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__MapA_4, mercury__bag__MapB_5, mercury__bag__MapAiB0_7, &mercury__bag__MapAiB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
  }
}

MR_Word MR_CALL 
mercury__bag__intersect_small_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAiB_6;
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
    MR_Word mercury__bag__MapAiB_10;
    MR_Word mercury__bag__MapAiB0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__intersect_small_loop_4_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, mercury__bag__MapAiB0_11, &mercury__bag__MapAiB_10);
    mercury__bag__BagAiB_6 = (MR_Word) mercury__bag__MapAiB_10;
    return mercury__bag__BagAiB_6;
  }
}

void MR_CALL 
mercury__bag__intersect_small_loop_4_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_17,
  MR_Word mercury__bag__MapA_5,
  MR_Word mercury__bag__MapB_6,
  MR_Word mercury__bag__STATE_VARIABLE_MapAiB_0_13,
  MR_Word * mercury__bag__STATE_VARIABLE_MapAiB_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;
      MR_Box mercury__bag__X_8;
      MR_Integer mercury__bag__AXN_9;
      MR_Word mercury__bag__NextMapA_10;
      MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__V_9_29;
      MR_Box mercury__bag__conv0_AXN_9;

      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_18_18, mercury__bag__MapA_5, &mercury__bag__X_8, &mercury__bag__conv0_AXN_9, &mercury__bag__NextMapA_10, &mercury__bag__V_9_29);
      if (mercury__bag__succeeded)
      {
        mercury__bag__AXN_9 = ((MR_Integer) mercury__bag__conv0_AXN_9);
        mercury__bag__succeeded = MR_TRUE;
      }
      if (mercury__bag__succeeded)
      {
        MR_Word mercury__bag__STATE_VARIABLE_MapAiB_15_15;
        MR_Integer mercury__bag__BXN_11;
        MR_Word mercury__bag__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__bag__conv1_BXN_11;

        mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_19_19, mercury__bag__MapB_6, mercury__bag__X_8, &mercury__bag__conv1_BXN_11);
        if (mercury__bag__succeeded)
        {
          mercury__bag__BXN_11 = ((MR_Integer) mercury__bag__conv1_BXN_11);
          mercury__bag__succeeded = MR_TRUE;
        }
        if (mercury__bag__succeeded)
        {
          MR_Word mercury__bag__TypeCtorInfo_20_20;
          MR_Integer mercury__bag__XN_12;

          mercury__bag__succeeded = (mercury__bag__AXN_9 < mercury__bag__BXN_11);
          if (mercury__bag__succeeded)
            mercury__bag__XN_12 = mercury__bag__AXN_9;
          else
            mercury__bag__XN_12 = mercury__bag__BXN_11;
          mercury__bag__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_17, mercury__bag__TypeCtorInfo_20_20, mercury__bag__X_8, ((MR_Box) (mercury__bag__XN_12)), mercury__bag__STATE_VARIABLE_MapAiB_0_13, &mercury__bag__STATE_VARIABLE_MapAiB_15_15);
        }
        else
          mercury__bag__STATE_VARIABLE_MapAiB_15_15 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__bag__next_value_of_MapA_5 = mercury__bag__NextMapA_10;
          MR_Word mercury__bag__next_value_of_STATE_VARIABLE_MapAiB_0_13 = mercury__bag__STATE_VARIABLE_MapAiB_15_15;

          mercury__bag__MapA_5 = mercury__bag__next_value_of_MapA_5;
          mercury__bag__STATE_VARIABLE_MapAiB_0_13 = mercury__bag__next_value_of_STATE_VARIABLE_MapAiB_0_13;
        }
        continue;
      }
      else
        *mercury__bag__STATE_VARIABLE_MapAiB_14 = mercury__bag__STATE_VARIABLE_MapAiB_0_13;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__intersect_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAiB_6;

    mercury__bag__intersect_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAiB_6);
    return mercury__bag__BagAiB_6;
  }
}

void MR_CALL 
mercury__bag__intersect_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAiB_6;
    MR_Word mercury__bag__AXNs_7;
    MR_Word mercury__bag__BXNs_8;
    MR_Word mercury__bag__RevAiBXNs_9;
    MR_Word mercury__bag__Var_10;
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_5_24;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    mercury__bag__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bag__intersect_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__Var_10, &mercury__bag__RevAiBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAiBXNs_9, &mercury__bag__MapAiB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAiB_6;
  }
}

static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_31,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
        else
        {
          MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
          MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
        }
      else
      {
        MR_Word mercury__bag__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
        MR_Word mercury__bag__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__Var_32, mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21, mercury__bag__STATE_VARIABLE_RevAuBXNs_22);
        else
        {
          MR_Word mercury__bag__HeadBXN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
          MR_Box mercury__bag__AX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__Var_33, (MR_Integer) 0));
          MR_Integer mercury__bag__AXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__Var_33, (MR_Integer) 1)));
          MR_Box mercury__bag__BX_16 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 0));
          MR_Integer mercury__bag__BXN_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_13, (MR_Integer) 1)));
          MR_Word mercury__bag__Res_18;
          MR_Word mercury__bag__TailBXNs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

          mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_18, mercury__bag__AX_14, mercury__bag__BX_16);
          switch (mercury__bag__Res_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_32;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer mercury__bag__XN_19;
                MR_Word mercury__bag__HeadXN_20;
                MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

                mercury__bag__succeeded = (mercury__bag__AXN_15 < mercury__bag__BXN_17);
                if (mercury__bag__succeeded)
                  mercury__bag__XN_19 = mercury__bag__AXN_15;
                else
                  mercury__bag__XN_19 = mercury__bag__BXN_17;
                {
                  mercury__bag__HeadXN_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 0) = mercury__bag__AX_14;
                  MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_20, 1) = ((MR_Box) (mercury__bag__XN_19));
                }
                {
                  mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 0) = ((MR_Box) (mercury__bag__HeadXN_20));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_32;
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_29;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_21 = mercury__bag__STATE_VARIABLE_RevAuBXNs_24_24;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                  mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_21;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_29;

                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
    else
    {
      MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
      MR_Word mercury__bag__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__TailAXNs_11;

        mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAuBXNs_22 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_21;
    else
    {
      MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
      MR_Word mercury__bag___HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));

      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_9;

        mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__union_small_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAuB_6;

    mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAuB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
  }
}

MR_Word MR_CALL 
mercury__bag__union_small_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAuB_6;
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
    MR_Word mercury__bag__MapAuB_10;

    mercury__bag__union_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAuB_10);
    mercury__bag__BagAuB_6 = (MR_Word) mercury__bag__MapAuB_10;
    return mercury__bag__BagAuB_6;
  }
}

void MR_CALL 
mercury__bag__union_small_loop_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Word mercury__bag__MapA_4,
  MR_Word mercury__bag__MapB_5,
  MR_Word * mercury__bag__MapAuB_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;
      MR_Box mercury__bag__X_7;
      MR_Integer mercury__bag__BXN_8;
      MR_Word mercury__bag__NextMapB_9;
      MR_Word mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__V_9_26;
      MR_Box mercury__bag__conv0_BXN_8;

      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_14_14, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_26);
      if (mercury__bag__succeeded)
      {
        mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
        mercury__bag__succeeded = MR_TRUE;
      }
      if (mercury__bag__succeeded)
      {
        MR_Word mercury__bag__NextMapA_12;
        MR_Integer mercury__bag__AXN_10;
        MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__bag__conv1_AXN_10;

        mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
        if (mercury__bag__succeeded)
        {
          mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
          mercury__bag__succeeded = MR_TRUE;
        }
        if (mercury__bag__succeeded)
        {
          MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 + mercury__bag__BXN_8);

          mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
        }
        else
        {
          MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

          mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__bag__next_value_of_MapA_4 = mercury__bag__NextMapA_12;
          MR_Word mercury__bag__next_value_of_MapB_5 = mercury__bag__NextMapB_9;

          mercury__bag__MapA_4 = mercury__bag__next_value_of_MapA_4;
          mercury__bag__MapB_5 = mercury__bag__next_value_of_MapB_5;
        }
        continue;
      }
      else
        *mercury__bag__MapAuB_6 = mercury__bag__MapA_4;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__union_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAuB_6;

    mercury__bag__union_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAuB_6);
    return mercury__bag__BagAuB_6;
  }
}

void MR_CALL 
mercury__bag__union_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAuB_6;
    MR_Word mercury__bag__AXNs_7;
    MR_Word mercury__bag__BXNs_8;
    MR_Word mercury__bag__RevAuBXNs_9;
    MR_Word mercury__bag__Var_10;
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_5_24;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    mercury__bag__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bag__union_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__Var_10, &mercury__bag__RevAuBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAuBXNs_9, &mercury__bag__MapAuB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAuB_6;
  }
}

static void MR_CALL 
mercury__bag__union_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_35,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
      else
      {
        MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
        MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

        {
          mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
      }
    else
    {
      MR_Word mercury__bag__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
      MR_Word mercury__bag__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

      if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

        {
          mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__Var_37));
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__Var_36, mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAuBXNs_20);
      }
      else
      {
        MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__Var_37, (MR_Integer) 0));
        MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__Var_37, (MR_Integer) 1)));
        MR_Box mercury__bag__BX_14;
        MR_Integer mercury__bag__BXN_15;
        MR_Word mercury__bag__Res_16;
        MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
        MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

        mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
        mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
        mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
        switch (mercury__bag__Res_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

              {
                mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 0) = ((MR_Box) (mercury__bag__Var_37));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_36;
                MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_25_25;

                mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 + mercury__bag__BXN_15);
              MR_Word mercury__bag__HeadXN_18;
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

              {
                mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
                MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
              }
              {
                mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_36;
                MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_32;
                MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_23_23;

                mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

              {
                mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
                MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_32;
                MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_21_21;

                mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
              }
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
    else
    {
      MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
      MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

      {
        mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__TailAXNs_11;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_27_27;

        mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAuBXNs_20 = mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19;
    else
    {
      MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
      MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

      {
        mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_9;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAuBXNs_29_29;

        mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
        mercury__bag__STATE_VARIABLE_RevAuBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_small_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAlubB_6;

    mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAlubB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
  }
}

MR_Word MR_CALL 
mercury__bag__least_upper_bound_small_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAlubB_6;
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
    MR_Word mercury__bag__MapAlubB_10;

    mercury__bag__least_upper_bound_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAlubB_10);
    mercury__bag__BagAlubB_6 = (MR_Word) mercury__bag__MapAlubB_10;
    return mercury__bag__BagAlubB_6;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_small_loop_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Word mercury__bag__MapA_4,
  MR_Word mercury__bag__MapB_5,
  MR_Word * mercury__bag__MapAlubB_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;
      MR_Box mercury__bag__X_7;
      MR_Integer mercury__bag__BXN_8;
      MR_Word mercury__bag__NextMapB_9;
      MR_Word mercury__bag__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__V_9_26;
      MR_Box mercury__bag__conv0_BXN_8;

      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_14_14, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_26);
      if (mercury__bag__succeeded)
      {
        mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
        mercury__bag__succeeded = MR_TRUE;
      }
      if (mercury__bag__succeeded)
      {
        MR_Word mercury__bag__NextMapA_12;
        MR_Integer mercury__bag__AXN_10;
        MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__bag__conv1_AXN_10;

        mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
        if (mercury__bag__succeeded)
        {
          mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
          mercury__bag__succeeded = MR_TRUE;
        }
        if (mercury__bag__succeeded)
        {
          MR_Word mercury__bag__TypeCtorInfo_16_16;
          MR_Integer mercury__bag__XN_11;

          mercury__bag__succeeded = (mercury__bag__AXN_10 > mercury__bag__BXN_8);
          if (mercury__bag__succeeded)
            mercury__bag__XN_11 = mercury__bag__AXN_10;
          else
            mercury__bag__XN_11 = mercury__bag__BXN_8;
          mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
        }
        else
        {
          MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

          mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__BXN_8)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__bag__next_value_of_MapA_4 = mercury__bag__NextMapA_12;
          MR_Word mercury__bag__next_value_of_MapB_5 = mercury__bag__NextMapB_9;

          mercury__bag__MapA_4 = mercury__bag__next_value_of_MapA_4;
          mercury__bag__MapB_5 = mercury__bag__next_value_of_MapB_5;
        }
        continue;
      }
      else
        *mercury__bag__MapAlubB_6 = mercury__bag__MapA_4;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__least_upper_bound_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAlubB_6;

    mercury__bag__least_upper_bound_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAlubB_6);
    return mercury__bag__BagAlubB_6;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAlubB_6;
    MR_Word mercury__bag__AXNs_7;
    MR_Word mercury__bag__BXNs_8;
    MR_Word mercury__bag__RevAlubBXNs_9;
    MR_Word mercury__bag__Var_10;
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_5_24;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    mercury__bag__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bag__least_upper_bound_loop_4_p_2(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__Var_10, &mercury__bag__RevAlubBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAlubBXNs_9, &mercury__bag__MapAlubB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAlubB_6;
  }
}

static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
  MR_Word mercury__bag__TypeInfo_for_T_35,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
        else
        {
          MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
          MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
          MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

          {
            mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
          }
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__bag__TailBXNs_9, mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
        }
      else
      {
        MR_Word mercury__bag__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
        MR_Word mercury__bag__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

          {
            mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__Var_37));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
          }
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(mercury__bag__Var_36, mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAlubBXNs_20);
        }
        else
        {
          MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__Var_37, (MR_Integer) 0));
          MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__Var_37, (MR_Integer) 1)));
          MR_Box mercury__bag__BX_14;
          MR_Integer mercury__bag__BXN_15;
          MR_Word mercury__bag__Res_16;
          MR_Word mercury__bag__HeadBXN_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
          MR_Word mercury__bag__TailBXNs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));

          mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 0));
          mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_31, (MR_Integer) 1)));
          mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_35, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
          switch (mercury__bag__Res_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

                {
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 0) = ((MR_Box) (mercury__bag__Var_37));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_36;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_25_25;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer mercury__bag__XN_17;
                MR_Word mercury__bag__HeadXN_18;
                MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

                mercury__bag__succeeded = (mercury__bag__AXN_13 > mercury__bag__BXN_15);
                if (mercury__bag__succeeded)
                  mercury__bag__XN_17 = mercury__bag__AXN_13;
                else
                  mercury__bag__XN_17 = mercury__bag__BXN_15;
                {
                  mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
                  MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
                }
                {
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_36;
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_32;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_23_23;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

                {
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 0) = ((MR_Box) (mercury__bag__HeadBXN_31));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_32;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_21_21;

                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                  mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
    else
    {
      MR_Word mercury__bag__HeadAXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
      MR_Word mercury__bag__TailAXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

      {
        mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_10));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__TailAXNs_11;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_27_27;

        mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAlubBXNs_20 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19;
    else
    {
      MR_Word mercury__bag__HeadBXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
      MR_Word mercury__bag__TailBXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

      {
        mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (mercury__bag__HeadBXN_8));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_9;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAlubBXNs_29_29;

        mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
        mercury__bag__STATE_VARIABLE_RevAlubBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__subtract_small_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAmB_6;

    mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_4, mercury__bag__MapB_5, &mercury__bag__MapAmB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
  }
}

MR_Word MR_CALL 
mercury__bag__subtract_small_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAmB_6;
    MR_Word mercury__bag__MapA_8 = (MR_Word) mercury__bag__BagA_4;
    MR_Word mercury__bag__MapB_9 = (MR_Word) mercury__bag__BagB_5;
    MR_Word mercury__bag__MapAmB_10;

    mercury__bag__subtract_small_loop_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__MapA_8, mercury__bag__MapB_9, &mercury__bag__MapAmB_10);
    mercury__bag__BagAmB_6 = (MR_Word) mercury__bag__MapAmB_10;
    return mercury__bag__BagAmB_6;
  }
}

void MR_CALL 
mercury__bag__subtract_small_loop_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__MapA_4,
  MR_Word mercury__bag__MapB_5,
  MR_Word * mercury__bag__MapAmB_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;
      MR_Box mercury__bag__X_7;
      MR_Integer mercury__bag__BXN_8;
      MR_Word mercury__bag__NextMapB_9;
      MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word mercury__bag__V_9_27;
      MR_Box mercury__bag__conv0_BXN_8;

      mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__MapB_5, &mercury__bag__X_7, &mercury__bag__conv0_BXN_8, &mercury__bag__NextMapB_9, &mercury__bag__V_9_27);
      if (mercury__bag__succeeded)
      {
        mercury__bag__BXN_8 = ((MR_Integer) mercury__bag__conv0_BXN_8);
        mercury__bag__succeeded = MR_TRUE;
      }
      if (mercury__bag__succeeded)
      {
        MR_Word mercury__bag__NextMapA_12;
        MR_Integer mercury__bag__AXN_10;
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__bag__conv1_AXN_10;

        mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__conv1_AXN_10);
        if (mercury__bag__succeeded)
        {
          mercury__bag__AXN_10 = ((MR_Integer) mercury__bag__conv1_AXN_10);
          mercury__bag__succeeded = MR_TRUE;
        }
        if (mercury__bag__succeeded)
        {
          MR_Integer mercury__bag__XN_11 = (mercury__bag__AXN_10 - mercury__bag__BXN_8);

          mercury__bag__succeeded = (mercury__bag__XN_11 > (MR_Integer) 0);
          if (mercury__bag__succeeded)
          {
            MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

            mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__X_7, ((MR_Box) (mercury__bag__XN_11)), mercury__bag__MapA_4, &mercury__bag__NextMapA_12);
          }
          else
          {
            MR_Word mercury__bag__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mercury__bag__V_7_37;

            mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_18_18, mercury__bag__MapA_4, mercury__bag__X_7, &mercury__bag__NextMapA_12, &mercury__bag__V_7_37);
          }
        }
        else
          mercury__bag__NextMapA_12 = mercury__bag__MapA_4;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__bag__next_value_of_MapA_4 = mercury__bag__NextMapA_12;
          MR_Word mercury__bag__next_value_of_MapB_5 = mercury__bag__NextMapB_9;

          mercury__bag__MapA_4 = mercury__bag__next_value_of_MapA_4;
          mercury__bag__MapB_5 = mercury__bag__next_value_of_MapB_5;
        }
        continue;
      }
      else
        *mercury__bag__MapAmB_6 = mercury__bag__MapA_4;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__subtract_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__BagA_4,
  MR_Word mercury__bag__BagB_5)
{
  {
    MR_Word mercury__bag__BagAmB_6;

    mercury__bag__subtract_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__BagA_4, mercury__bag__BagB_5, &mercury__bag__BagAmB_6);
    return mercury__bag__BagAmB_6;
  }
}

void MR_CALL 
mercury__bag__subtract_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__MapA_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__MapB_5 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__MapAmB_6;
    MR_Word mercury__bag__AXNs_7;
    MR_Word mercury__bag__BXNs_8;
    MR_Word mercury__bag__RevAmBXNs_9;
    MR_Word mercury__bag__Var_10;
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_5_24;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapA_4, mercury__bag__V_5_17, &mercury__bag__AXNs_7);
    mercury__bag__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__MapB_5, mercury__bag__V_5_24, &mercury__bag__BXNs_8);
    mercury__bag__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bag__subtract_loop_4_p_1(mercury__bag__TypeInfo_for_T_11, mercury__bag__AXNs_7, mercury__bag__BXNs_8, mercury__bag__Var_10, &mercury__bag__RevAmBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__TypeCtorInfo_12_12, mercury__bag__RevAmBXNs_9, &mercury__bag__MapAmB_6);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__MapAmB_6;
  }
}

static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
  MR_Word mercury__bag__TypeInfo_for_T_31,
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__BXNs_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
      else
      {
        MR_Word mercury__bag__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
        MR_Word mercury__bag__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));

        if ((mercury__bag__BXNs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

          {
            mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__Var_33));
            MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
          }
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(mercury__bag__Var_32, mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, mercury__bag__STATE_VARIABLE_RevAmBXNs_20);
        }
        else
        {
          MR_Word mercury__bag__HeadBXN_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 0)));
          MR_Word mercury__bag__TailBXNs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__BXNs_6, (MR_Integer) 1)));
          MR_Box mercury__bag__AX_12 = (MR_hl_field(MR_mktag(0), mercury__bag__Var_33, (MR_Integer) 0));
          MR_Integer mercury__bag__AXN_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__Var_33, (MR_Integer) 1)));
          MR_Box mercury__bag__BX_14 = (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 0));
          MR_Integer mercury__bag__BXN_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__HeadBXN_10, (MR_Integer) 1)));
          MR_Word mercury__bag__Res_16;

          mercury__builtin__compare_3_p_0(mercury__bag__TypeInfo_for_T_31, &mercury__bag__Res_16, mercury__bag__AX_12, mercury__bag__BX_14);
          switch (mercury__bag__Res_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

                {
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 0) = ((MR_Box) (mercury__bag__Var_33));
                  MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_32;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_25_25;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer mercury__bag__XN_17 = (mercury__bag__AXN_13 - mercury__bag__BXN_15);
                MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

                mercury__bag__succeeded = (mercury__bag__XN_17 > (MR_Integer) 0);
                if (mercury__bag__succeeded)
                {
                  MR_Word mercury__bag__HeadXN_18;

                  {
                    mercury__bag__HeadXN_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 0) = mercury__bag__AX_12;
                    MR_hl_field(MR_mktag(0), mercury__bag__HeadXN_18, 1) = ((MR_Box) (mercury__bag__XN_17));
                  }
                  {
                    mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 0) = ((MR_Box) (mercury__bag__HeadXN_18));
                    MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
                  }
                }
                else
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__Var_32;
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_11;
                  MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_23_23;

                  mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                  mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bag__next_value_of_BXNs_6 = mercury__bag__TailBXNs_11;

                  mercury__bag__BXNs_6 = mercury__bag__next_value_of_BXNs_6;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word mercury__bag__AXNs_5,
  MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * mercury__bag__STATE_VARIABLE_RevAmBXNs_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__AXNs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_RevAmBXNs_20 = mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19;
    else
    {
      MR_Word mercury__bag__HeadAXN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 0)));
      MR_Word mercury__bag__TailAXNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__AXNs_5, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

      {
        mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (mercury__bag__HeadAXN_8));
        MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_AXNs_5 = mercury__bag__TailAXNs_9;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__STATE_VARIABLE_RevAmBXNs_27_27;

        mercury__bag__AXNs_5 = mercury__bag__next_value_of_AXNs_5;
        mercury__bag__STATE_VARIABLE_RevAmBXNs_0_19 = mercury__bag__next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__to_set_without_duplicates_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Bag_3,
  MR_Word * mercury__bag__Set_4)
{
  *mercury__bag__Set_4 = mercury__bag__to_set_1_f_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3);
}

MR_Word MR_CALL 
mercury__bag__to_set_without_duplicates_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_4,
  MR_Word mercury__bag__Bag_3)
{
  {
    MR_Word mercury__bag__HeadVar__2_2;

    mercury__bag__HeadVar__2_2 = mercury__bag__to_set_1_f_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Bag_3);
    return mercury__bag__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bag__to_set_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Word mercury__bag__HeadVar__1_1)
{
  {
    MR_Word mercury__bag__Set_4;
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__Xs_5;
    MR_Word mercury__bag__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_4_17;

    mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Map_3, mercury__bag__V_5_12, &mercury__bag__Xs_5);
    if ((mercury__bag__Xs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__bag__V_4_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box mercury__bag__V_3_18 = (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 0));
      MR_Word mercury__bag__V_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__Xs_5, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__V_3_18, mercury__bag__V_4_19, &mercury__bag__V_4_17);
    }
    mercury__bag__Set_4 = (MR_Word) mercury__bag__V_4_17;
    return mercury__bag__Set_4;
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_only_duplicates_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Bag_3)
{
  {
    MR_Word mercury__bag__Xs_4;

    mercury__bag__to_list_only_duplicates_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    return mercury__bag__Xs_4;
  }
}

void MR_CALL 
mercury__bag__to_list_only_duplicates_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word * mercury__bag__DupXs_4)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__XNs_5;
    MR_Word mercury__bag__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_8_8, mercury__bag__Map_3, mercury__bag__V_5_17, &mercury__bag__XNs_5);
    mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__XNs_5, mercury__bag__DupXs_4);
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__bag__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word mercury__bag__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__bag__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__bag__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 0));
        MR_Integer mercury__bag__XN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bag__V_6_6, (MR_Integer) 1)));

        mercury__bag__succeeded = (mercury__bag__XN_19 > (MR_Integer) 1);
        if (mercury__bag__succeeded)
        {
          MR_Word mercury__bag__V_10_10;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__bag__V_7_7, &mercury__bag__V_10_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__bag__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__bag__V_9_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__bag__V_10_10));
          }
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__2_2 = mercury__bag__V_7_7;

            mercury__bag__HeadVar__2_2 = mercury__bag__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__bag__to_list_without_duplicates_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word * mercury__bag__Xs_4)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__Xs_4);
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_without_duplicates_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Bag_3)
{
  {
    MR_Word mercury__bag__Xs_4;
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__keys_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__Xs_4);
    return mercury__bag__Xs_4;
  }
}

void MR_CALL 
mercury__bag__to_assoc_list_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word * mercury__bag__XNs_4)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__V_5_11, mercury__bag__XNs_4);
  }
}

MR_Word MR_CALL 
mercury__bag__to_assoc_list_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Bag_3)
{
  {
    MR_Word mercury__bag__XNs_4;
    MR_Word mercury__bag__TypeCtorInfo_6_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_7 = (MR_Word) mercury__bag__Bag_3;
    MR_Word mercury__bag__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_8, mercury__bag__Map_7, mercury__bag__V_5_13, &mercury__bag__XNs_4);
    return mercury__bag__XNs_4;
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Bag_3)
{
  {
    MR_Word mercury__bag__Xs_4;

    mercury__bag__to_list_2_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Bag_3, &mercury__bag__Xs_4);
    return mercury__bag__Xs_4;
  }
}

void MR_CALL 
mercury__bag__from_set_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__Set_3,
  MR_Word * mercury__bag__Bag_4)
{
  {
    MR_Word mercury__bag__Xs_5 = (MR_Word) mercury__bag__Set_3;
    MR_Word mercury__bag__Bag0_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__Xs_5, mercury__bag__Bag0_6, mercury__bag__Bag_4);
  }
}

MR_Word MR_CALL 
mercury__bag__from_set_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Set_3)
{
  {
    MR_Word mercury__bag__Bag_4;
    MR_Word mercury__bag__Xs_8 = (MR_Word) mercury__bag__Set_3;
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_8, mercury__bag__Bag0_9, &mercury__bag__Bag_4);
    return mercury__bag__Bag_4;
  }
}

void MR_CALL 
mercury__bag__from_sorted_list_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Word mercury__bag__Xs_3,
  MR_Word * mercury__bag__Bag_4)
{
  {
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
  }
}

MR_Word MR_CALL 
mercury__bag__from_sorted_list_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Xs_3)
{
  {
    MR_Word mercury__bag__Bag_4;
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    return mercury__bag__Bag_4;
  }
}

void MR_CALL 
mercury__bag__from_list_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Word mercury__bag__Xs_3,
  MR_Word * mercury__bag__Bag_4)
{
  {
    MR_Word mercury__bag__Bag0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__Xs_3, mercury__bag__Bag0_5, mercury__bag__Bag_4);
  }
}

MR_Word MR_CALL 
mercury__bag__from_list_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__Xs_3)
{
  {
    MR_Word mercury__bag__Bag_4;
    MR_Word mercury__bag__Bag0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__Xs_3, mercury__bag__Bag0_8, &mercury__bag__Bag_4);
    return mercury__bag__Bag_4;
  }
}

MR_Word MR_CALL 
mercury__bag__bag_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_4,
  MR_Word mercury__bag__Xs_3)
{
  {
    MR_Word mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__Bag0_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_4, mercury__bag__Xs_3, mercury__bag__Bag0_9, &mercury__bag__HeadVar__2_2);
    return mercury__bag__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__bag__delete_all_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Box mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_Word mercury__bag__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_6 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_7;
    MR_Word mercury__bag__V_7_17;

    mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_10, mercury__bag__STATE_VARIABLE_Map_0_6, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_7, &mercury__bag__V_7_17);
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_7;
  }
}

MR_Word MR_CALL 
mercury__bag__delete_all_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Box mercury__bag__X_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
    MR_Word mercury__bag__TypeCtorInfo_10_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_12 = (MR_Word) mercury__bag__STATE_VARIABLE_Bag_0_6;
    MR_Word mercury__bag__STATE_VARIABLE_Map_13;
    MR_Word mercury__bag__V_7_22;

    mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__TypeCtorInfo_10_15, mercury__bag__STATE_VARIABLE_Map_0_12, mercury__bag__X_5, &mercury__bag__STATE_VARIABLE_Map_13, &mercury__bag__V_7_22);
    mercury__bag__STATE_VARIABLE_Bag_7 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_13;
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_all_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Box mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Integer mercury__bag___N_6;
    MR_Word mercury__bag__V_9_20;
    MR_Box mercury__bag__conv0__N_6;

    mercury__bag__succeeded = mercury__tree234__remove_2_5_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__TypeCtorInfo_11_11, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0__N_6, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_9_20);
    if (mercury__bag__succeeded)
    {
      mercury__bag___N_6 = ((MR_Integer) mercury__bag__conv0__N_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__delete_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Box mercury__bag__X_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

    mercury__bag__delete_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__delete_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Box mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Integer mercury__bag__N_6;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__bag__conv0_N_6;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    if (mercury__bag__succeeded)
    {
      mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      mercury__bag__succeeded = (mercury__bag__N_6 > (MR_Integer) 1);
      if (mercury__bag__succeeded)
      {
        MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer mercury__bag__Var_10 = (mercury__bag__N_6 - (MR_Integer) 1);

        mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__X_4, ((MR_Box) (mercury__bag__Var_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word mercury__bag__V_7_27;

        mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_7_27);
      }
    }
    else
      mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_0_7;
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_set_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word mercury__bag__Set_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

    mercury__bag__det_remove_set_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Set_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__det_remove_set_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__Set_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_18;

    mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_18);
    if (mercury__bag__succeeded)
      *mercury__bag__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8_18;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bag__remove_set_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__Set_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__Xs_6 = (MR_Word) mercury__bag__Set_4;

    mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__Xs_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag__det_remove_list_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Word mercury__bag__Xs_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

    mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__Xs_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    if (mercury__bag__succeeded)
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_list_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word mercury__bag__Xs_5)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

    mercury__bag__succeeded = mercury__bag__remove_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    if (mercury__bag__succeeded)
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
    }
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_list_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded;

      if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
        mercury__bag__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__bag__X_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__bag__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

        mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__X_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
        if (mercury__bag__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__1_1 = mercury__bag__Xs_8;
            MR_Word mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

            mercury__bag__HeadVar__1_1 = mercury__bag__next_value_of_HeadVar__1_1;
            mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2;
          }
          continue;
        }
      }
      return mercury__bag__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__det_remove_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Box mercury__bag__X_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_7)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_8;

    mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__X_4, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_8);
    if (mercury__bag__succeeded)
      *mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_8;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Box mercury__bag__X_5)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_8_14;

    mercury__bag__succeeded = mercury__bag__remove_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_8_14);
    if (mercury__bag__succeeded)
      mercury__bag__STATE_VARIABLE_Bag_7 = mercury__bag__STATE_VARIABLE_Bag_8_14;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
    }
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_smallest_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Box * mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__bag__N_6;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Word mercury__bag__STATE_VARIABLE_Map_9_9;
    MR_Word mercury__bag__V_9_24;
    MR_Box mercury__bag__conv0_N_6;
    MR_Integer mercury__bag__Var_10;

    mercury__bag__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6, &mercury__bag__STATE_VARIABLE_Map_9_9, &mercury__bag__V_9_24);
    if (mercury__bag__succeeded)
    {
      mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      mercury__bag__Var_10 = (MR_Integer) 1;
      mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__Var_10);
      if (mercury__bag__succeeded)
      {
        MR_Integer mercury__bag__Var_11 = (mercury__bag__N_6 - (MR_Integer) 1);

        mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, *mercury__bag__X_4, ((MR_Box) (mercury__bag__Var_11)), mercury__bag__STATE_VARIABLE_Map_9_9, &mercury__bag__STATE_VARIABLE_Map_8);
      }
      else
        mercury__bag__STATE_VARIABLE_Map_8 = mercury__bag__STATE_VARIABLE_Map_9_9;
      *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag__insert_set_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Word mercury__bag__Set_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8)
{
  {
    MR_Word mercury__bag__List_6 = (MR_Word) mercury__bag__Set_4;

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_10, mercury__bag__List_6, mercury__bag__STATE_VARIABLE_Bag_0_7, mercury__bag__STATE_VARIABLE_Bag_8);
  }
}

MR_Word MR_CALL 
mercury__bag__insert_set_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word mercury__bag__Xs_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;
    MR_Word mercury__bag__List_14 = (MR_Word) mercury__bag__Xs_5;

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__List_14, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__det_insert_duplicates_4_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_13,
  MR_Integer mercury__bag__N_5,
  MR_Box mercury__bag__Item_6,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_9)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_10_10;

    mercury__bag__succeeded = mercury__bag__insert_duplicates_4_p_0(mercury__bag__TypeInfo_for_T_13, mercury__bag__N_5, mercury__bag__Item_6, mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_10_10);
    if (mercury__bag__succeeded)
      *mercury__bag__STATE_VARIABLE_Bag_9 = mercury__bag__STATE_VARIABLE_Bag_10_10;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "bag.det_insert_duplicates: number of items is negative");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__bag__det_insert_duplicates_3_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_11,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_8,
  MR_Integer mercury__bag__N_6,
  MR_Box mercury__bag__Item_7)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_9;
    MR_Word mercury__bag__STATE_VARIABLE_Bag_10_17;

    mercury__bag__succeeded = mercury__bag__insert_duplicates_4_p_0(mercury__bag__TypeInfo_for_T_11, mercury__bag__N_6, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_8, &mercury__bag__STATE_VARIABLE_Bag_10_17);
    if (mercury__bag__succeeded)
      mercury__bag__STATE_VARIABLE_Bag_9 = mercury__bag__STATE_VARIABLE_Bag_10_17;
    else
    {
      mercury__require__error_1_p_0((MR_String) "bag.det_insert_duplicates: number of items is negative");
    }
    return mercury__bag__STATE_VARIABLE_Bag_9;
  }
}

MR_bool MR_CALL 
mercury__bag__insert_duplicates_4_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_16,
  MR_Integer mercury__bag__N_5,
  MR_Box mercury__bag__Item_6,
  MR_Word mercury__bag__HeadVar__3_3,
  MR_Word * mercury__bag__HeadVar__4_4)
{
  {
    MR_bool mercury__bag__succeeded = (mercury__bag__N_5 < (MR_Integer) 0);
    MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__CmpResult_8;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_10 = (MR_Word) mercury__bag__HeadVar__3_3;
    MR_Word mercury__bag__STATE_VARIABLE_Map_11;

    if (mercury__bag__succeeded)
      mercury__bag__CmpResult_8 = (MR_Integer) 1;
    else
    {
      mercury__bag__succeeded = (mercury__bag__N_5 == (MR_Integer) 0);
      if (mercury__bag__succeeded)
        mercury__bag__CmpResult_8 = (MR_Integer) 0;
      else
        mercury__bag__CmpResult_8 = (MR_Integer) 2;
    }
    switch (mercury__bag__CmpResult_8) {
      default:
        mercury__bag__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          mercury__bag__STATE_VARIABLE_Map_11 = mercury__bag__STATE_VARIABLE_Map_0_10;
          mercury__bag__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mercury__bag__Count_9;
          MR_Box mercury__bag__conv0_Count_9;

          mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_16, mercury__bag__TypeCtorInfo_17_17, mercury__bag__STATE_VARIABLE_Map_0_10, mercury__bag__Item_6, &mercury__bag__conv0_Count_9);
          if (mercury__bag__succeeded)
          {
            mercury__bag__Count_9 = ((MR_Integer) mercury__bag__conv0_Count_9);
            mercury__bag__succeeded = MR_TRUE;
          }
          if (mercury__bag__succeeded)
          {
            MR_Integer mercury__bag__Var_13 = (mercury__bag__Count_9 + mercury__bag__N_5);

            mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_16, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_6, ((MR_Box) (mercury__bag__Var_13)), mercury__bag__STATE_VARIABLE_Map_0_10, &mercury__bag__STATE_VARIABLE_Map_11);
          }
          else
            mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_16, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_6, ((MR_Box) (mercury__bag__N_5)), mercury__bag__STATE_VARIABLE_Map_0_10, &mercury__bag__STATE_VARIABLE_Map_11);
          mercury__bag__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__bag__succeeded)
    {
      *mercury__bag__HeadVar__4_4 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_11;
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__insert_list_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Word mercury__bag__Xs_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

    mercury__bag__insert_list_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__Xs_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__insert_list_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_2,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__bag__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__bag__STATE_VARIABLE_Bag_3 = mercury__bag__STATE_VARIABLE_Bag_0_2;
    else
    {
      MR_Box mercury__bag__Item_7 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__bag__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__bag__STATE_VARIABLE_Bag_12_12;

      mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__Item_7, mercury__bag__STATE_VARIABLE_Bag_0_2, &mercury__bag__STATE_VARIABLE_Bag_12_12);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__bag__next_value_of_HeadVar__1_1 = mercury__bag__Items_8;
        MR_Word mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2 = mercury__bag__STATE_VARIABLE_Bag_12_12;

        mercury__bag__HeadVar__1_1 = mercury__bag__next_value_of_HeadVar__1_1;
        mercury__bag__STATE_VARIABLE_Bag_0_2 = mercury__bag__next_value_of_STATE_VARIABLE_Bag_0_2;
      }
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__insert_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_9,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_6,
  MR_Box mercury__bag__X_5)
{
  {
    MR_Word mercury__bag__STATE_VARIABLE_Bag_7;

    mercury__bag__insert_3_p_0(mercury__bag__TypeInfo_for_T_9, mercury__bag__X_5, mercury__bag__STATE_VARIABLE_Bag_0_6, &mercury__bag__STATE_VARIABLE_Bag_7);
    return mercury__bag__STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__insert_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Box mercury__bag__Item_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Integer mercury__bag__Count_6;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__bag__conv0_Count_6;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__Item_4, &mercury__bag__conv0_Count_6);
    if (mercury__bag__succeeded)
    {
      mercury__bag__Count_6 = ((MR_Integer) mercury__bag__conv0_Count_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      MR_Word mercury__bag__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Integer mercury__bag__Var_9 = (mercury__bag__Count_6 + (MR_Integer) 1);

      mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_16_16, mercury__bag__Item_4, ((MR_Box) (mercury__bag__Var_9)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
    }
    else
    {
      MR_Word mercury__bag__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      mercury__map__det_insert_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_17_17, mercury__bag__Item_4, ((MR_Box) ((MR_Integer) 1)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
    }
    *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
  }
}

static void MR_CALL 
mercury__bag__member_3_p_0_1(
  void * mercury__bag__env_ptr_arg)
{
  {
    struct mercury__bag__member_3_p_0_env_0_s * mercury__bag__env_ptr = (struct mercury__bag__member_3_p_0_env_0_s *) mercury__bag__env_ptr_arg;

    {
      MR_Word mercury__bag__STATE_VARIABLE_Bag_8_17;

      (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded = mercury__bag__remove_3_p_0((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__X_4), (mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__STATE_VARIABLE_Bag_8_17);
      if ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded)
        *((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8) = mercury__bag__STATE_VARIABLE_Bag_8_17;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "bag", (MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
          return;
        }
      }
      ((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont)((mercury__bag__env_ptr)->mercury__bag__member_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__bag__member_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_10,
  MR_Box * mercury__bag__X_4,
  MR_Word mercury__bag__STATE_VARIABLE_Bag_0_7,
  MR_Word * mercury__bag__STATE_VARIABLE_Bag_8,
  MR_Cont mercury__bag__cont,
  void * mercury__bag__cont_env_ptr)
{
  {
    struct mercury__bag__member_3_p_0_env_0_s mercury__bag__env;

    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10 = mercury__bag__TypeInfo_for_T_10;
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__X_4 = mercury__bag__X_4;
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7 = mercury__bag__STATE_VARIABLE_Bag_0_7;
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8 = mercury__bag__STATE_VARIABLE_Bag_8;
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont = mercury__bag__cont;
    (mercury__bag__env).mercury__bag__member_3_p_0_env_0__cont_env_ptr = mercury__bag__cont_env_ptr;
    {
      MR_Word mercury__bag__Xs_6;

      mercury__bag__to_list_2_p_0((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &mercury__bag__Xs_6);
      mercury__list__member_2_p_1((mercury__bag__env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (mercury__bag__env).mercury__bag__member_3_p_0_env_0__X_4, mercury__bag__Xs_6, mercury__bag__member_3_p_0_1, &mercury__bag__env);
    }
  }
}

void MR_CALL 
mercury__bag__to_list_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_8,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Word * mercury__bag__Xs_4)
{
  {
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Word mercury__bag__RevXs_5;
    MR_Word mercury__bag__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__Map_3, mercury__bag__Var_7, &mercury__bag__RevXs_5);
    mercury__list__reverse_2_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__RevXs_5, mercury__bag__Xs_4);
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__bag__Var_55,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word mercury__bag__HeadVar__3_3,
  MR_Word * mercury__bag__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) mercury__bag__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__bag__HeadVar__4_4 = mercury__bag__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__bag__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
          MR_Integer mercury__bag__V_11_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__bag__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__bag__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
          MR_Word mercury__bag__V_17_15;
          MR_Word mercury__bag__V_18_16;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_12_11, mercury__bag__HeadVar__3_3, &mercury__bag__V_17_15);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_10_9, mercury__bag__V_11_10, mercury__bag__V_17_15, &mercury__bag__V_18_16);
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__2_2 = mercury__bag__V_13_12;
            MR_Word mercury__bag__next_value_of_HeadVar__3_3 = mercury__bag__V_18_16;

            mercury__bag__HeadVar__2_2 = mercury__bag__next_value_of_HeadVar__2_2;
            mercury__bag__HeadVar__3_3 = mercury__bag__next_value_of_HeadVar__3_3;
          }
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__bag__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
          MR_Integer mercury__bag__V_22_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__bag__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 2));
          MR_Integer mercury__bag__V_24_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
          MR_Word mercury__bag__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 4)));
          MR_Word mercury__bag__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__bag__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bag__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__bag__V_31_27;
          MR_Word mercury__bag__V_32_28;
          MR_Word mercury__bag__V_33_29;
          MR_Word mercury__bag__V_34_30;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_25_22, mercury__bag__HeadVar__3_3, &mercury__bag__V_31_27);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_21_18, mercury__bag__V_22_19, mercury__bag__V_31_27, &mercury__bag__V_32_28);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_26_23, mercury__bag__V_32_28, &mercury__bag__V_33_29);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_23_20, mercury__bag__V_24_21, mercury__bag__V_33_29, &mercury__bag__V_34_30);
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__2_2 = mercury__bag__V_27_24;
            MR_Word mercury__bag__next_value_of_HeadVar__3_3 = mercury__bag__V_34_30;

            mercury__bag__HeadVar__2_2 = mercury__bag__next_value_of_HeadVar__2_2;
            mercury__bag__HeadVar__3_3 = mercury__bag__next_value_of_HeadVar__3_3;
          }
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__bag__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 0));
          MR_Integer mercury__bag__V_38_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__bag__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 2));
          MR_Integer mercury__bag__V_40_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__bag__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 4));
          MR_Integer mercury__bag__V_42_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__bag__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__bag__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__bag__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 8)));
          MR_Word mercury__bag__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bag__HeadVar__2_2, (MR_Integer) 9)));
          MR_Word mercury__bag__V_50_44;
          MR_Word mercury__bag__V_51_45;
          MR_Word mercury__bag__V_52_46;
          MR_Word mercury__bag__V_53_47;
          MR_Word mercury__bag__V_54_48;
          MR_Word mercury__bag__V_55_49;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_43_38, mercury__bag__HeadVar__3_3, &mercury__bag__V_50_44);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_37_32, mercury__bag__V_38_33, mercury__bag__V_50_44, &mercury__bag__V_51_45);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_44_39, mercury__bag__V_51_45, &mercury__bag__V_52_46);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_39_34, mercury__bag__V_40_35, mercury__bag__V_52_46, &mercury__bag__V_53_47);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__bag__Var_55, mercury__bag__V_45_40, mercury__bag__V_53_47, &mercury__bag__V_54_48);
          mercury__bag__prepend_n_xs_4_p_0(mercury__bag__Var_55, mercury__bag__V_41_36, mercury__bag__V_42_37, mercury__bag__V_54_48, &mercury__bag__V_55_49);
          /* direct tailcall eliminated */
          {
            MR_Word mercury__bag__next_value_of_HeadVar__2_2 = mercury__bag__V_46_41;
            MR_Word mercury__bag__next_value_of_HeadVar__3_3 = mercury__bag__V_55_49;

            mercury__bag__HeadVar__2_2 = mercury__bag__next_value_of_HeadVar__2_2;
            mercury__bag__HeadVar__3_3 = mercury__bag__next_value_of_HeadVar__3_3;
          }
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__prepend_n_xs_4_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_15,
  MR_Box mercury__bag__X_5,
  MR_Integer mercury__bag__N_6,
  MR_Word mercury__bag__STATE_VARIABLE_RevXs_0_8,
  MR_Word * mercury__bag__STATE_VARIABLE_RevXs_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__bag__succeeded = (mercury__bag__N_6 <= (MR_Integer) 0);

      if (mercury__bag__succeeded)
        *mercury__bag__STATE_VARIABLE_RevXs_9 = mercury__bag__STATE_VARIABLE_RevXs_0_8;
      else
      {
        MR_Word mercury__bag__STATE_VARIABLE_RevXs_11_11;
        MR_Integer mercury__bag__Var_12;

        {
          mercury__bag__STATE_VARIABLE_RevXs_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 0) = mercury__bag__X_5;
          MR_hl_field(MR_mktag(1), mercury__bag__STATE_VARIABLE_RevXs_11_11, 1) = ((MR_Box) (mercury__bag__STATE_VARIABLE_RevXs_0_8));
        }
        mercury__bag__Var_12 = (mercury__bag__N_6 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__bag__next_value_of_N_6 = mercury__bag__Var_12;
          MR_Word mercury__bag__next_value_of_STATE_VARIABLE_RevXs_0_8 = mercury__bag__STATE_VARIABLE_RevXs_11_11;

          mercury__bag__N_6 = mercury__bag__next_value_of_N_6;
          mercury__bag__STATE_VARIABLE_RevXs_0_8 = mercury__bag__next_value_of_STATE_VARIABLE_RevXs_0_8;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_14,
  MR_Box mercury__bag__X_4,
  MR_Word mercury__bag__HeadVar__2_2,
  MR_Word * mercury__bag__HeadVar__3_3)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__bag__N_6;
    MR_Word mercury__bag__STATE_VARIABLE_Map_0_7 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__STATE_VARIABLE_Map_8;
    MR_Box mercury__bag__conv0_N_6;
    MR_Integer mercury__bag__Var_9;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__conv0_N_6);
    if (mercury__bag__succeeded)
    {
      mercury__bag__N_6 = ((MR_Integer) mercury__bag__conv0_N_6);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
    {
      mercury__bag__Var_9 = (MR_Integer) 1;
      mercury__bag__succeeded = (mercury__bag__N_6 > mercury__bag__Var_9);
      if (mercury__bag__succeeded)
      {
        MR_Integer mercury__bag__Var_10 = (mercury__bag__N_6 - (MR_Integer) 1);

        mercury__map__det_update_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__X_4, ((MR_Box) (mercury__bag__Var_10)), mercury__bag__STATE_VARIABLE_Map_0_7, &mercury__bag__STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word mercury__bag__V_7_25;

        mercury__tree234__delete_2_4_p_0(mercury__bag__TypeInfo_for_T_14, mercury__bag__TypeCtorInfo_15_15, mercury__bag__STATE_VARIABLE_Map_0_7, mercury__bag__X_4, &mercury__bag__STATE_VARIABLE_Map_8, &mercury__bag__V_7_25);
      }
      *mercury__bag__HeadVar__3_3 = (MR_Word) mercury__bag__STATE_VARIABLE_Map_8;
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__member_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Box mercury__bag__X_3,
  MR_Word mercury__bag__HeadVar__2_2)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_4 = (MR_Word) mercury__bag__HeadVar__2_2;
    MR_Integer mercury__bag___N_5;
    MR_Box mercury__bag__conv0__N_5;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_6, mercury__bag__TypeCtorInfo_7_7, mercury__bag__Map_4, mercury__bag__X_3, &mercury__bag__conv0__N_5);
    if (mercury__bag__succeeded)
    {
      mercury__bag___N_5 = ((MR_Integer) mercury__bag__conv0__N_5);
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

void MR_CALL 
mercury__bag__count_value_3_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_8,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Box mercury__bag__X_5,
  MR_Integer * mercury__bag__N_6)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__Map_4 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Integer mercury__bag__NPrime_7;
    MR_Word mercury__bag__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__bag__conv0_NPrime_7;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_8, mercury__bag__TypeCtorInfo_9_9, mercury__bag__Map_4, mercury__bag__X_5, &mercury__bag__conv0_NPrime_7);
    if (mercury__bag__succeeded)
    {
      mercury__bag__NPrime_7 = ((MR_Integer) mercury__bag__conv0_NPrime_7);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
      *mercury__bag__N_6 = mercury__bag__NPrime_7;
    else
      *mercury__bag__N_6 = (MR_Integer) 0;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_value_2_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_7,
  MR_Word mercury__bag__Bag_4,
  MR_Box mercury__bag__X_5)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Integer mercury__bag__N_6;
    MR_Word mercury__bag__Map_10 = (MR_Word) mercury__bag__Bag_4;
    MR_Integer mercury__bag__NPrime_11;
    MR_Word mercury__bag__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__bag__conv0_NPrime_11;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_7, mercury__bag__TypeCtorInfo_9_12, mercury__bag__Map_10, mercury__bag__X_5, &mercury__bag__conv0_NPrime_11);
    if (mercury__bag__succeeded)
    {
      mercury__bag__NPrime_11 = ((MR_Integer) mercury__bag__conv0_NPrime_11);
      mercury__bag__succeeded = MR_TRUE;
    }
    if (mercury__bag__succeeded)
      mercury__bag__N_6 = mercury__bag__NPrime_11;
    else
      mercury__bag__N_6 = (MR_Integer) 0;
    return mercury__bag__N_6;
  }
}

MR_bool MR_CALL 
mercury__bag__contains_2_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_5,
  MR_Word mercury__bag__HeadVar__1_1,
  MR_Box mercury__bag__X_4)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__bag__Map_3 = (MR_Word) mercury__bag__HeadVar__1_1;
    MR_Integer mercury__bag__V_5_9;
    MR_Box mercury__bag__conv0_V_5_9;

    mercury__bag__succeeded = mercury__tree234__search_3_p_0(mercury__bag__TypeInfo_for_T_5, mercury__bag__TypeCtorInfo_6_6, mercury__bag__Map_3, mercury__bag__X_4, &mercury__bag__conv0_V_5_9);
    if (mercury__bag__succeeded)
    {
      mercury__bag__V_5_9 = ((MR_Integer) mercury__bag__conv0_V_5_9);
      mercury__bag__succeeded = MR_TRUE;
    }
    return mercury__bag__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__is_empty_1_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_3,
  MR_Word mercury__bag__HeadVar__1_1)
{
  {
    MR_bool mercury__bag__succeeded;
    MR_Word mercury__bag__Map_2 = (MR_Word) mercury__bag__HeadVar__1_1;

    mercury__bag__succeeded = (mercury__bag__Map_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__bag__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__singleton_1_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_6,
  MR_Box mercury__bag__Item_3)
{
  {
    MR_Word mercury__bag__HeadVar__2_2;
    MR_Word mercury__bag__Map_4;
    MR_Word mercury__bag__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bag__V_7_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bag__Map_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__bag__Map_4, 0) = mercury__bag__Item_3;
      MR_hl_field(MR_mktag(1), mercury__bag__Map_4, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), mercury__bag__Map_4, 2) = ((MR_Box) (mercury__bag__V_6_13));
      MR_hl_field(MR_mktag(1), mercury__bag__Map_4, 3) = ((MR_Box) (mercury__bag__V_7_14));
    }
    mercury__bag__HeadVar__2_2 = (MR_Word) mercury__bag__Map_4;
    return mercury__bag__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__bag__init_1_p_0(
  MR_Word mercury__bag__TypeInfo_for_T_3,
  MR_Word * mercury__bag__HeadVar__1_1)
{
  {
    MR_Word mercury__bag__Map_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__bag__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

MR_Word MR_CALL 
mercury__bag__init_0_f_0(
  MR_Word mercury__bag__TypeInfo_for_T_3)
{
  {
    MR_Word mercury__bag__Bag_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__bag__Map_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__bag__Bag_2;
  }
}

static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
  MR_Box mercury__bag__wrapper_arg_1,
  MR_Box mercury__bag__wrapper_arg_2,
  MR_Box mercury__bag__wrapper_arg_3)
{
  {
    MR_bool mercury__bag__succeeded;

    mercury__bag__succeeded = mercury__bag____Unify____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), ((MR_Word) mercury__bag__wrapper_arg_2), ((MR_Word) mercury__bag__wrapper_arg_3));
    return mercury__bag__succeeded;
  }
}

static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
  MR_Box mercury__bag__wrapper_arg_1,
  MR_Box * mercury__bag__wrapper_arg_2,
  MR_Box mercury__bag__wrapper_arg_3,
  MR_Box mercury__bag__wrapper_arg_4)
{
  {
    MR_Word mercury__bag__conv0_HeadVar__1_1;

    mercury__bag____Compare____bag_1_0(((MR_Word) mercury__bag__wrapper_arg_1), &mercury__bag__conv0_HeadVar__1_1, ((MR_Word) mercury__bag__wrapper_arg_3), ((MR_Word) mercury__bag__wrapper_arg_4));
    *mercury__bag__wrapper_arg_2 = ((MR_Box) (mercury__bag__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__bag__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module bag. */
