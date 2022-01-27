/*
** Automatically generated from `bag.m'
** by the Mercury compiler,
** version rotd-2021-01-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module bag.
// :- implementation.

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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
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
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word AXNs_3,
  MR_Word BXNs_4);

static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
  MR_Word TypeInfo_for_T_31,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22);

static void MR_CALL 
mercury__bag__union_loop_4_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20);

static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20);

static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
  MR_Word TypeInfo_for_T_31,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAmBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAmBXNs_20);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__bag__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_95_49_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_22);

static void MR_CALL 
mercury__bag__member_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_Integer mercury__bag__bag__functor_number_map_bag_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_NotagFunctorDesc mercury__bag__bag__notag_functor_desc_bag_1 = {
  (MR_String) "bag",
  (MR_PseudoTypeInfo) (&mercury__bag__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bag__bag__type_ctor_info_bag_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bag____Unify____bag_1_0_10001)),
  ((MR_Box) (mercury__bag____Compare____bag_1_0_10001)),
  (MR_String) "bag",
  (MR_String) "bag",
  {     &mercury__bag__bag__notag_functor_desc_bag_1 },
  {     &mercury__bag__bag__notag_functor_desc_bag_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bag__bag__functor_number_map_bag_1
};

static MR_Integer MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_T_10,
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8)
{
  {
    MR_Word List_6 = (MR_Word) (Set_4);

    mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_T_10, List_6, STATE_VARIABLE_Bag_0_7, STATE_VARIABLE_Bag_8);
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_16,
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Bag_0_2,
  MR_Word * STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Bag_3 = STATE_VARIABLE_Bag_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bag_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bag_0_2;

      mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_16, TypeInfo_for_T_14, Item_7, STATE_VARIABLE_Bag_0_2, &STATE_VARIABLE_Bag_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_Bag_0_2 = STATE_VARIABLE_Bag_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Bag_0_2 = next_value_of_STATE_VARIABLE_Bag_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_19,
  MR_Word TypeInfo_for_T_14,
  MR_Word Item_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Integer Count_6;
    MR_Box conv0_Count_6;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_19, TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, Item_4, &conv0_Count_6);
    if (succeeded)
    {
      Count_6 = ((MR_Integer) (conv0_Count_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Count_6 + (MR_Unsigned) 1);

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_19, TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_4, ((MR_Box) (Var_9)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
    }
    else
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_19, TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_4, ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
    *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_14,
  MR_Word TypeInfo_for_T_12,
  MR_Word Xs_4,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word * STATE_VARIABLE_Bag_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_8_8;

    succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_14, TypeInfo_for_T_12, Xs_4, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_8);
    if (succeeded)
      *STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_8;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
  }
}

void MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_114_101_109_111_118_101_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_T_10,
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8)
{
  {
    MR_bool succeeded;
    MR_Word Xs_6 = (MR_Word) (Set_4);
    MR_Word STATE_VARIABLE_Bag_8_20;

    succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_T_10, Xs_6, STATE_VARIABLE_Bag_0_7, &STATE_VARIABLE_Bag_8_20);
    if (succeeded)
      *STATE_VARIABLE_Bag_8 = STATE_VARIABLE_Bag_8_20;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_16,
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Bag_0_2,
  MR_Word * STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Bag_3 = STATE_VARIABLE_Bag_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bag_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bag_0_2;

      succeeded = mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_16, TypeInfo_for_T_14, X_7, STATE_VARIABLE_Bag_0_2, &STATE_VARIABLE_Bag_12_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Xs_8;
        next_value_of_STATE_VARIABLE_Bag_0_2 = STATE_VARIABLE_Bag_12_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Bag_0_2 = next_value_of_STATE_VARIABLE_Bag_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_17,
  MR_Word TypeInfo_for_T_14,
  MR_Word X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Box conv0_N_6;
    MR_Integer Var_9;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_17, TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &conv0_N_6);
    if (succeeded)
    {
      N_6 = ((MR_Integer) (conv0_N_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_9 = (MR_Integer) 1;
      succeeded = (N_6 > Var_9);
      if (succeeded)
      {
        MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_17, TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_4, ((MR_Box) (Var_10)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word Var_28;
        MR_Word conv1_STATE_VARIABLE_Map_8;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (STATE_VARIABLE_Map_0_7), ((MR_Box) (X_4)), &conv1_STATE_VARIABLE_Map_8, &Var_28);
        STATE_VARIABLE_Map_8 = (MR_Word) (conv1_STATE_VARIABLE_Map_8);
      }
      *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bag____Compare____bag_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_8, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_7, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__is_duplicated_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_Box * X_3)
{
  {
    MR_bool succeeded;
    MR_Integer XN_4;

    *X_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    XN_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = (XN_4 > (MR_Integer) 1);
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_unique_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);

    mercury__tree234__count_2_p_0(TypeInfo_for_T_4, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    mercury__tree234__values_acc_3_p_0(TypeInfo_for_T_7, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, (MR_Word) ((MR_Unsigned) 0U), &Var_5);
    mercury__bag__foldl__ho9_4_p_in__list_0(Var_5, (MR_Integer) 0, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__bag__foldl__ho9_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Var_9 + (MR_Unsigned) HeadVar__3_3);
      MR_Word next_value_of_HeadVar__2_2 = Var_10;
      MR_Integer next_value_of_HeadVar__3_3 = Var_13;

      // direct tailcall eliminated
      ;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_5(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool succeeded;
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl2_6_p_6(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool succeeded;
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl2_6_p_5(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl2_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool succeeded;
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl2_6_p_4(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl2_6_p_2(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl2_6_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__bag__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  {
    MR_Word Map_8 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl2_6_p_0(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_18, TypeInfo_for_B_19, Pred_7, Map_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_5(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_bool succeeded;
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl_4_p_5(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_4(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_bool succeeded;
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl_4_p_4(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__foldl_4_p_3(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_bool succeeded;
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__tree234__foldl_4_p_3(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl_4_p_2(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl_4_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__bag__foldl_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_Word Map_6 = (MR_Word) (HeadVar__2_2);

    mercury__tree234__foldl_4_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  }
}

MR_bool MR_CALL 
mercury__bag__is_subbag_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word BagA_3,
  MR_Word BagB_4)
{
  {
    MR_bool succeeded;
    MR_Word Res_5;

    succeeded = mercury__bag__subset_compare_3_p_0(TypeInfo_for_T_6, &Res_5, BagA_3, BagB_4);
    if (succeeded)
      switch (Res_5) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__subset_compare_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Res_4,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word MapA_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapB_6 = (MR_Word) (HeadVar__3_3);
    MR_Word AXNs_7;
    MR_Word BXNs_8;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_5, (MR_Word) ((MR_Unsigned) 0U), &AXNs_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_6, (MR_Word) ((MR_Unsigned) 0U), &BXNs_8);
    succeeded = mercury__bag__subset_compare_loop_3_p_0(TypeInfo_for_T_9, Res_4, AXNs_7, BXNs_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__subset_compare_loop_3_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word * Res_4,
  MR_Word AXNs_5,
  MR_Word BXNs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *Res_4 = (MR_Integer) 0;
      else
        *Res_4 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));

      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Res_4 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word HeadBXN_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
        MR_Box AX_15 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
        MR_Integer AXN_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
        MR_Box BX_17 = (MR_hl_field(MR_mktag(0), HeadBXN_13, (MR_Integer) 0));
        MR_Integer BXN_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_13, (MR_Integer) 1))));
        MR_Word XRes_19;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_21, &XRes_19, AX_15, BX_17);
        switch (XRes_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              succeeded = mercury__bag__subset_compare_verify_le_2_p_0(TypeInfo_for_T_21, BXNs_6, Var_23);
              if (succeeded)
              {
                *Res_4 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word XNRes_20;

              succeeded = (AXN_16 < BXN_18);
              if (succeeded)
                XNRes_20 = (MR_Integer) 1;
              else
              {
                succeeded = (AXN_16 == BXN_18);
                if (succeeded)
                  XNRes_20 = (MR_Integer) 0;
                else
                  XNRes_20 = (MR_Integer) 2;
              }
              switch (XNRes_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = mercury__bag__subset_compare_verify_le_2_p_0(TypeInfo_for_T_21, Var_23, TailBXNs_14);
                    if (succeeded)
                    {
                      *Res_4 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_AXNs_5 = Var_23;
                    MR_Word next_value_of_BXNs_6 = TailBXNs_14;

                    // direct tailcall eliminated
                    ;
                    AXNs_5 = next_value_of_AXNs_5;
                    BXNs_6 = next_value_of_BXNs_6;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = mercury__bag__subset_compare_verify_le_2_p_0(TypeInfo_for_T_21, TailBXNs_14, Var_23);
                    if (succeeded)
                    {
                      *Res_4 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = mercury__bag__subset_compare_verify_le_2_p_0(TypeInfo_for_T_21, AXNs_5, TailBXNs_14);
              if (succeeded)
              {
                *Res_4 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__bag__subset_compare_verify_le_2_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word AXNs_3,
  MR_Word BXNs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AXNs_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word HeadAXN_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_3, (MR_Integer) 0))));
      MR_Word TailAXNs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_3, (MR_Integer) 1))));
      MR_Word HeadBXN_7;
      MR_Word TailBXNs_8;
      MR_Box AX_9;
      MR_Integer AXN_10;
      MR_Box BX_11;
      MR_Integer BXN_12;
      MR_Word XRes_13;

      succeeded = (BXNs_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadBXN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_4, (MR_Integer) 0))));
        TailBXNs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_4, (MR_Integer) 1))));
        AX_9 = (MR_hl_field(MR_mktag(0), HeadAXN_5, (MR_Integer) 0));
        AXN_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadAXN_5, (MR_Integer) 1))));
        BX_11 = (MR_hl_field(MR_mktag(0), HeadBXN_7, (MR_Integer) 0));
        BXN_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_7, (MR_Integer) 1))));
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_15, &XRes_13, AX_9, BX_11);
        switch (XRes_13) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word XNRes_14;

              succeeded = (AXN_10 < BXN_12);
              if (succeeded)
                XNRes_14 = (MR_Integer) 1;
              else
              {
                succeeded = (AXN_10 == BXN_12);
                if (succeeded)
                  XNRes_14 = (MR_Integer) 0;
                else
                  XNRes_14 = (MR_Integer) 2;
              }
              switch (XNRes_14) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_AXNs_3 = TailAXNs_6;
                    MR_Word next_value_of_BXNs_4 = TailBXNs_8;

                    // direct tailcall eliminated
                    ;
                    AXNs_3 = next_value_of_AXNs_3;
                    BXNs_4 = next_value_of_BXNs_4;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_BXNs_4 = TailBXNs_8;

              // direct tailcall eliminated
              ;
              BXNs_4 = next_value_of_BXNs_4;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__intersect_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MapA_3 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_4 = (MR_Word) (HeadVar__2_2);
    MR_Box X_5;
    MR_Word NextMapA_7;
    MR_Word Var_20;
    MR_Box conv0__N_6;
    MR_Box conv1_Var_23;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_3, &X_5, &conv0__N_6, &NextMapA_7, &Var_20);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_4, X_5, &conv1_Var_23);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word Var_8 = (MR_Word) (NextMapA_7);
        MR_Word next_value_of_HeadVar__1_1 = Var_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__bag__intersect_small_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAiB_6;

    mercury__bag__intersect_small_loop_4_p_0(TypeInfo_for_T_8, MapA_4, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &MapAiB_6);
    *HeadVar__3_3 = (MR_Word) (MapAiB_6);
  }
}

MR_Word MR_CALL 
mercury__bag__intersect_small_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAiB_6;
    MR_Word MapA_8 = (MR_Word) (BagA_4);
    MR_Word MapB_9 = (MR_Word) (BagB_5);
    MR_Word MapAiB_10;

    mercury__bag__intersect_small_loop_4_p_0(TypeInfo_for_T_7, MapA_8, MapB_9, (MR_Word) ((MR_Unsigned) 0U), &MapAiB_10);
    BagAiB_6 = (MR_Word) (MapAiB_10);
    return BagAiB_6;
  }
}

void MR_CALL 
mercury__bag__intersect_small_loop_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word MapA_5,
  MR_Word MapB_6,
  MR_Word STATE_VARIABLE_MapAiB_0_13,
  MR_Word * STATE_VARIABLE_MapAiB_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_8;
    MR_Integer AXN_9;
    MR_Word NextMapA_10;
    MR_Word Var_29;
    MR_Box conv0_AXN_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_5, &X_8, &conv0_AXN_9, &NextMapA_10, &Var_29);
    if (succeeded)
    {
      AXN_9 = ((MR_Integer) (conv0_AXN_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_MapAiB_15_15;
      MR_Integer BXN_11;
      MR_Box conv1_BXN_11;
      MR_Word next_value_of_MapA_5;
      MR_Word next_value_of_STATE_VARIABLE_MapAiB_0_13;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_6, X_8, &conv1_BXN_11);
      if (succeeded)
      {
        BXN_11 = ((MR_Integer) (conv1_BXN_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer XN_12;

        succeeded = (AXN_9 < BXN_11);
        if (succeeded)
          XN_12 = AXN_9;
        else
          XN_12 = BXN_11;
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_8, ((MR_Box) (XN_12)), STATE_VARIABLE_MapAiB_0_13, &STATE_VARIABLE_MapAiB_15_15);
      }
      else
        STATE_VARIABLE_MapAiB_15_15 = STATE_VARIABLE_MapAiB_0_13;
      // direct tailcall eliminated
      ;
      next_value_of_MapA_5 = NextMapA_10;
      next_value_of_STATE_VARIABLE_MapAiB_0_13 = STATE_VARIABLE_MapAiB_15_15;
      MapA_5 = next_value_of_MapA_5;
      STATE_VARIABLE_MapAiB_0_13 = next_value_of_STATE_VARIABLE_MapAiB_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_MapAiB_14 = STATE_VARIABLE_MapAiB_0_13;
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAiB_6;

    mercury__bag__intersect_3_p_0(TypeInfo_for_T_7, BagA_4, BagB_5, &BagAiB_6);
    return BagAiB_6;
  }
}

void MR_CALL 
mercury__bag__intersect_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAiB_6;
    MR_Word AXNs_7;
    MR_Word BXNs_8;
    MR_Word RevAiBXNs_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AXNs_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, (MR_Word) ((MR_Unsigned) 0U), &BXNs_8);
    mercury__bag__intersect_loop_4_p_2(TypeInfo_for_T_11, AXNs_7, BXNs_8, (MR_Word) ((MR_Unsigned) 0U), &RevAiBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevAiBXNs_9, &MapAiB_6);
    *HeadVar__3_3 = (MR_Word) (MapAiB_6);
  }
}

static void MR_CALL 
mercury__bag__intersect_loop_4_p_2(
  MR_Word TypeInfo_for_T_31,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevAuBXNs_22 = STATE_VARIABLE_RevAuBXNs_0_21;
      else
      {
        MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));

        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(TailBXNs_9, STATE_VARIABLE_RevAuBXNs_0_21, STATE_VARIABLE_RevAuBXNs_22);
      }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));

      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(Var_32, STATE_VARIABLE_RevAuBXNs_0_21, STATE_VARIABLE_RevAuBXNs_22);
      else
      {
        MR_Word HeadBXN_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Box AX_14 = (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0));
        MR_Integer AXN_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
        MR_Box BX_16 = (MR_hl_field(MR_mktag(0), HeadBXN_13, (MR_Integer) 0));
        MR_Integer BXN_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_13, (MR_Integer) 1))));
        MR_Word Res_18;
        MR_Word TailBXNs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, &Res_18, AX_14, BX_16);
        switch (Res_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_AXNs_5 = Var_32;

              // direct tailcall eliminated
              ;
              AXNs_5 = next_value_of_AXNs_5;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer XN_19;
              MR_Word HeadXN_20;
              MR_Word STATE_VARIABLE_RevAuBXNs_24_24;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_21;

              succeeded = (AXN_15 < BXN_17);
              if (succeeded)
                XN_19 = AXN_15;
              else
                XN_19 = BXN_17;
              {
                HeadXN_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadXN_20, 0) = AX_14;
                MR_hl_field(MR_mktag(0), HeadXN_20, 1) = ((MR_Box) (XN_19));
              }
              {
                STATE_VARIABLE_RevAuBXNs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_24_24, 0) = ((MR_Box) (HeadXN_20));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_21));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_32;
              next_value_of_BXNs_6 = TailBXNs_29;
              next_value_of_STATE_VARIABLE_RevAuBXNs_0_21 = STATE_VARIABLE_RevAuBXNs_24_24;
              AXNs_5 = next_value_of_AXNs_5;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAuBXNs_0_21 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_21;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_BXNs_6 = TailBXNs_29;

              // direct tailcall eliminated
              ;
              BXNs_6 = next_value_of_BXNs_6;
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
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAuBXNs_22 = STATE_VARIABLE_RevAuBXNs_0_21;
    else
    {
      MR_Word TailAXNs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word next_value_of_AXNs_5 = TailAXNs_11;

      // direct tailcall eliminated
      ;
      AXNs_5 = next_value_of_AXNs_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_21,
  MR_Word * STATE_VARIABLE_RevAuBXNs_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAuBXNs_22 = STATE_VARIABLE_RevAuBXNs_0_21;
    else
    {
      MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
      MR_Word next_value_of_BXNs_6 = TailBXNs_9;

      // direct tailcall eliminated
      ;
      BXNs_6 = next_value_of_BXNs_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__union_small_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAuB_6;

    mercury__bag__union_small_loop_3_p_0(TypeInfo_for_T_7, MapA_4, MapB_5, &MapAuB_6);
    *HeadVar__3_3 = (MR_Word) (MapAuB_6);
  }
}

MR_Word MR_CALL 
mercury__bag__union_small_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAuB_6;
    MR_Word MapA_8 = (MR_Word) (BagA_4);
    MR_Word MapB_9 = (MR_Word) (BagB_5);
    MR_Word MapAuB_10;

    mercury__bag__union_small_loop_3_p_0(TypeInfo_for_T_7, MapA_8, MapB_9, &MapAuB_10);
    BagAuB_6 = (MR_Word) (MapAuB_10);
    return BagAuB_6;
  }
}

void MR_CALL 
mercury__bag__union_small_loop_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * MapAuB_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_7;
    MR_Integer BXN_8;
    MR_Word NextMapB_9;
    MR_Word Var_26;
    MR_Box conv0_BXN_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, &X_7, &conv0_BXN_8, &NextMapB_9, &Var_26);
    if (succeeded)
    {
      BXN_8 = ((MR_Integer) (conv0_BXN_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NextMapA_12;
      MR_Integer AXN_10;
      MR_Box conv1_AXN_10;
      MR_Word next_value_of_MapA_4;
      MR_Word next_value_of_MapB_5;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, X_7, &conv1_AXN_10);
      if (succeeded)
      {
        AXN_10 = ((MR_Integer) (conv1_AXN_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer XN_11 = (MR_Integer) ((MR_Unsigned) AXN_10 + (MR_Unsigned) BXN_8);

        mercury__map__det_update_4_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_7, ((MR_Box) (XN_11)), MapA_4, &NextMapA_12);
      }
      else
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_7, ((MR_Box) (BXN_8)), MapA_4, &NextMapA_12);
      // direct tailcall eliminated
      ;
      next_value_of_MapA_4 = NextMapA_12;
      next_value_of_MapB_5 = NextMapB_9;
      MapA_4 = next_value_of_MapA_4;
      MapB_5 = next_value_of_MapB_5;
      continue;
    }
    else
      *MapAuB_6 = MapA_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAuB_6;

    mercury__bag__union_3_p_0(TypeInfo_for_T_7, BagA_4, BagB_5, &BagAuB_6);
    return BagAuB_6;
  }
}

void MR_CALL 
mercury__bag__union_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAuB_6;
    MR_Word AXNs_7;
    MR_Word BXNs_8;
    MR_Word RevAuBXNs_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AXNs_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, (MR_Word) ((MR_Unsigned) 0U), &BXNs_8);
    mercury__bag__union_loop_4_p_2(TypeInfo_for_T_11, AXNs_7, BXNs_8, (MR_Word) ((MR_Unsigned) 0U), &RevAuBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevAuBXNs_9, &MapAuB_6);
    *HeadVar__3_3 = (MR_Word) (MapAuB_6);
  }
}

static void MR_CALL 
mercury__bag__union_loop_4_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevAuBXNs_20 = STATE_VARIABLE_RevAuBXNs_0_19;
      else
      {
        MR_Word HeadBXN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevAuBXNs_29_29;

        {
          STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (HeadBXN_8));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(TailBXNs_9, STATE_VARIABLE_RevAuBXNs_29_29, STATE_VARIABLE_RevAuBXNs_20);
      }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));

      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevAuBXNs_27_27;

        {
          STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(Var_36, STATE_VARIABLE_RevAuBXNs_27_27, STATE_VARIABLE_RevAuBXNs_20);
      }
      else
      {
        MR_Box AX_12 = (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0));
        MR_Integer AXN_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
        MR_Box BX_14;
        MR_Integer BXN_15;
        MR_Word Res_16;
        MR_Word HeadBXN_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));

        BX_14 = (MR_hl_field(MR_mktag(0), HeadBXN_31, (MR_Integer) 0));
        BXN_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_31, (MR_Integer) 1))));
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_35, &Res_16, AX_12, BX_14);
        switch (Res_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevAuBXNs_25_25;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;

              {
                STATE_VARIABLE_RevAuBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_25_25, 0) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_36;
              next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = STATE_VARIABLE_RevAuBXNs_25_25;
              AXNs_5 = next_value_of_AXNs_5;
              STATE_VARIABLE_RevAuBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer XN_17 = (MR_Integer) ((MR_Unsigned) AXN_13 + (MR_Unsigned) BXN_15);
              MR_Word HeadXN_18;
              MR_Word STATE_VARIABLE_RevAuBXNs_23_23;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;

              {
                HeadXN_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadXN_18, 0) = AX_12;
                MR_hl_field(MR_mktag(0), HeadXN_18, 1) = ((MR_Box) (XN_17));
              }
              {
                STATE_VARIABLE_RevAuBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_23_23, 0) = ((MR_Box) (HeadXN_18));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_36;
              next_value_of_BXNs_6 = TailBXNs_32;
              next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = STATE_VARIABLE_RevAuBXNs_23_23;
              AXNs_5 = next_value_of_AXNs_5;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAuBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevAuBXNs_21_21;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;

              {
                STATE_VARIABLE_RevAuBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_21_21, 0) = ((MR_Box) (HeadBXN_31));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_BXNs_6 = TailBXNs_32;
              next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = STATE_VARIABLE_RevAuBXNs_21_21;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAuBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
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
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAuBXNs_20 = STATE_VARIABLE_RevAuBXNs_0_19;
    else
    {
      MR_Word HeadAXN_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));
      MR_Word TailAXNs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAuBXNs_27_27;
      MR_Word next_value_of_AXNs_5;
      MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;

      {
        STATE_VARIABLE_RevAuBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_27_27, 0) = ((MR_Box) (HeadAXN_10));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AXNs_5 = TailAXNs_11;
      next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = STATE_VARIABLE_RevAuBXNs_27_27;
      AXNs_5 = next_value_of_AXNs_5;
      STATE_VARIABLE_RevAuBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAuBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAuBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAuBXNs_20 = STATE_VARIABLE_RevAuBXNs_0_19;
    else
    {
      MR_Word HeadBXN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
      MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAuBXNs_29_29;
      MR_Word next_value_of_BXNs_6;
      MR_Word next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;

      {
        STATE_VARIABLE_RevAuBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_29_29, 0) = ((MR_Box) (HeadBXN_8));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAuBXNs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevAuBXNs_0_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_BXNs_6 = TailBXNs_9;
      next_value_of_STATE_VARIABLE_RevAuBXNs_0_19 = STATE_VARIABLE_RevAuBXNs_29_29;
      BXNs_6 = next_value_of_BXNs_6;
      STATE_VARIABLE_RevAuBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAuBXNs_0_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_small_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAlubB_6;

    mercury__bag__least_upper_bound_small_loop_3_p_0(TypeInfo_for_T_7, MapA_4, MapB_5, &MapAlubB_6);
    *HeadVar__3_3 = (MR_Word) (MapAlubB_6);
  }
}

MR_Word MR_CALL 
mercury__bag__least_upper_bound_small_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAlubB_6;
    MR_Word MapA_8 = (MR_Word) (BagA_4);
    MR_Word MapB_9 = (MR_Word) (BagB_5);
    MR_Word MapAlubB_10;

    mercury__bag__least_upper_bound_small_loop_3_p_0(TypeInfo_for_T_7, MapA_8, MapB_9, &MapAlubB_10);
    BagAlubB_6 = (MR_Word) (MapAlubB_10);
    return BagAlubB_6;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_small_loop_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * MapAlubB_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_7;
    MR_Integer BXN_8;
    MR_Word NextMapB_9;
    MR_Word Var_26;
    MR_Box conv0_BXN_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, &X_7, &conv0_BXN_8, &NextMapB_9, &Var_26);
    if (succeeded)
    {
      BXN_8 = ((MR_Integer) (conv0_BXN_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NextMapA_12;
      MR_Integer AXN_10;
      MR_Box conv1_AXN_10;
      MR_Word next_value_of_MapA_4;
      MR_Word next_value_of_MapB_5;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, X_7, &conv1_AXN_10);
      if (succeeded)
      {
        AXN_10 = ((MR_Integer) (conv1_AXN_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer XN_11;

        succeeded = (AXN_10 > BXN_8);
        if (succeeded)
          XN_11 = AXN_10;
        else
          XN_11 = BXN_8;
        mercury__map__det_update_4_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_7, ((MR_Box) (XN_11)), MapA_4, &NextMapA_12);
      }
      else
        mercury__map__det_insert_4_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_7, ((MR_Box) (BXN_8)), MapA_4, &NextMapA_12);
      // direct tailcall eliminated
      ;
      next_value_of_MapA_4 = NextMapA_12;
      next_value_of_MapB_5 = NextMapB_9;
      MapA_4 = next_value_of_MapA_4;
      MapB_5 = next_value_of_MapB_5;
      continue;
    }
    else
      *MapAlubB_6 = MapA_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__least_upper_bound_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAlubB_6;

    mercury__bag__least_upper_bound_3_p_0(TypeInfo_for_T_7, BagA_4, BagB_5, &BagAlubB_6);
    return BagAlubB_6;
  }
}

void MR_CALL 
mercury__bag__least_upper_bound_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAlubB_6;
    MR_Word AXNs_7;
    MR_Word BXNs_8;
    MR_Word RevAlubBXNs_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AXNs_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, (MR_Word) ((MR_Unsigned) 0U), &BXNs_8);
    mercury__bag__least_upper_bound_loop_4_p_2(TypeInfo_for_T_11, AXNs_7, BXNs_8, (MR_Word) ((MR_Unsigned) 0U), &RevAlubBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevAlubBXNs_9, &MapAlubB_6);
    *HeadVar__3_3 = (MR_Word) (MapAlubB_6);
  }
}

static void MR_CALL 
mercury__bag__least_upper_bound_loop_4_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevAlubBXNs_20 = STATE_VARIABLE_RevAlubBXNs_0_19;
      else
      {
        MR_Word HeadBXN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevAlubBXNs_29_29;

        {
          STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (HeadBXN_8));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(TailBXNs_9, STATE_VARIABLE_RevAlubBXNs_29_29, STATE_VARIABLE_RevAlubBXNs_20);
      }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));

      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevAlubBXNs_27_27;

        {
          STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(Var_36, STATE_VARIABLE_RevAlubBXNs_27_27, STATE_VARIABLE_RevAlubBXNs_20);
      }
      else
      {
        MR_Box AX_12 = (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0));
        MR_Integer AXN_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
        MR_Box BX_14;
        MR_Integer BXN_15;
        MR_Word Res_16;
        MR_Word HeadBXN_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));

        BX_14 = (MR_hl_field(MR_mktag(0), HeadBXN_31, (MR_Integer) 0));
        BXN_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_31, (MR_Integer) 1))));
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_35, &Res_16, AX_12, BX_14);
        switch (Res_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevAlubBXNs_25_25;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;

              {
                STATE_VARIABLE_RevAlubBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_25_25, 0) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_36;
              next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = STATE_VARIABLE_RevAlubBXNs_25_25;
              AXNs_5 = next_value_of_AXNs_5;
              STATE_VARIABLE_RevAlubBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer XN_17;
              MR_Word HeadXN_18;
              MR_Word STATE_VARIABLE_RevAlubBXNs_23_23;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;

              succeeded = (AXN_13 > BXN_15);
              if (succeeded)
                XN_17 = AXN_13;
              else
                XN_17 = BXN_15;
              {
                HeadXN_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadXN_18, 0) = AX_12;
                MR_hl_field(MR_mktag(0), HeadXN_18, 1) = ((MR_Box) (XN_17));
              }
              {
                STATE_VARIABLE_RevAlubBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_23_23, 0) = ((MR_Box) (HeadXN_18));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_36;
              next_value_of_BXNs_6 = TailBXNs_32;
              next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = STATE_VARIABLE_RevAlubBXNs_23_23;
              AXNs_5 = next_value_of_AXNs_5;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAlubBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevAlubBXNs_21_21;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;

              {
                STATE_VARIABLE_RevAlubBXNs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_21_21, 0) = ((MR_Box) (HeadBXN_31));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_BXNs_6 = TailBXNs_32;
              next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = STATE_VARIABLE_RevAlubBXNs_21_21;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAlubBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
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
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_51_93_95_49_4_p_1(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAlubBXNs_20 = STATE_VARIABLE_RevAlubBXNs_0_19;
    else
    {
      MR_Word HeadAXN_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));
      MR_Word TailAXNs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAlubBXNs_27_27;
      MR_Word next_value_of_AXNs_5;
      MR_Word next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;

      {
        STATE_VARIABLE_RevAlubBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_27_27, 0) = ((MR_Box) (HeadAXN_10));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AXNs_5 = TailAXNs_11;
      next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = STATE_VARIABLE_RevAlubBXNs_27_27;
      AXNs_5 = next_value_of_AXNs_5;
      STATE_VARIABLE_RevAlubBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_115_116_95_117_112_112_101_114_95_98_111_117_110_100_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAlubBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAlubBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAlubBXNs_20 = STATE_VARIABLE_RevAlubBXNs_0_19;
    else
    {
      MR_Word HeadBXN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
      MR_Word TailBXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAlubBXNs_29_29;
      MR_Word next_value_of_BXNs_6;
      MR_Word next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;

      {
        STATE_VARIABLE_RevAlubBXNs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_29_29, 0) = ((MR_Box) (HeadBXN_8));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAlubBXNs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_RevAlubBXNs_0_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_BXNs_6 = TailBXNs_9;
      next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19 = STATE_VARIABLE_RevAlubBXNs_29_29;
      BXNs_6 = next_value_of_BXNs_6;
      STATE_VARIABLE_RevAlubBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAlubBXNs_0_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__subtract_small_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAmB_6;

    mercury__bag__subtract_small_loop_3_p_0(TypeInfo_for_T_7, MapA_4, MapB_5, &MapAmB_6);
    *HeadVar__3_3 = (MR_Word) (MapAmB_6);
  }
}

MR_Word MR_CALL 
mercury__bag__subtract_small_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAmB_6;
    MR_Word MapA_8 = (MR_Word) (BagA_4);
    MR_Word MapB_9 = (MR_Word) (BagB_5);
    MR_Word MapAmB_10;

    mercury__bag__subtract_small_loop_3_p_0(TypeInfo_for_T_7, MapA_8, MapB_9, &MapAmB_10);
    BagAmB_6 = (MR_Word) (MapAmB_10);
    return BagAmB_6;
  }
}

void MR_CALL 
mercury__bag__subtract_small_loop_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * MapAmB_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_7;
    MR_Integer BXN_8;
    MR_Word NextMapB_9;
    MR_Word Var_27;
    MR_Box conv0_BXN_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, &X_7, &conv0_BXN_8, &NextMapB_9, &Var_27);
    if (succeeded)
    {
      BXN_8 = ((MR_Integer) (conv0_BXN_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NextMapA_12;
      MR_Integer AXN_10;
      MR_Box conv1_AXN_10;
      MR_Word next_value_of_MapA_4;
      MR_Word next_value_of_MapB_5;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, X_7, &conv1_AXN_10);
      if (succeeded)
      {
        AXN_10 = ((MR_Integer) (conv1_AXN_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer XN_11 = (MR_Integer) ((MR_Unsigned) AXN_10 - (MR_Unsigned) BXN_8);

        succeeded = (XN_11 > (MR_Integer) 0);
        if (succeeded)
          mercury__map__det_update_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_7, ((MR_Box) (XN_11)), MapA_4, &NextMapA_12);
        else
        {
          MR_Word Var_37;

          mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, X_7, &NextMapA_12, &Var_37);
        }
      }
      else
        NextMapA_12 = MapA_4;
      // direct tailcall eliminated
      ;
      next_value_of_MapA_4 = NextMapA_12;
      next_value_of_MapB_5 = NextMapB_9;
      MapA_4 = next_value_of_MapA_4;
      MapB_5 = next_value_of_MapB_5;
      continue;
    }
    else
      *MapAmB_6 = MapA_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__subtract_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word BagA_4,
  MR_Word BagB_5)
{
  {
    MR_Word BagAmB_6;

    mercury__bag__subtract_3_p_0(TypeInfo_for_T_7, BagA_4, BagB_5, &BagAmB_6);
    return BagAmB_6;
  }
}

void MR_CALL 
mercury__bag__subtract_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word MapA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word MapB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word MapAmB_6;
    MR_Word AXNs_7;
    MR_Word BXNs_8;
    MR_Word RevAmBXNs_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AXNs_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MapB_5, (MR_Word) ((MR_Unsigned) 0U), &BXNs_8);
    mercury__bag__subtract_loop_4_p_1(TypeInfo_for_T_11, AXNs_7, BXNs_8, (MR_Word) ((MR_Unsigned) 0U), &RevAmBXNs_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevAmBXNs_9, &MapAmB_6);
    *HeadVar__3_3 = (MR_Word) (MapAmB_6);
  }
}

static void MR_CALL 
mercury__bag__subtract_loop_4_p_1(
  MR_Word TypeInfo_for_T_31,
  MR_Word AXNs_5,
  MR_Word BXNs_6,
  MR_Word STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAmBXNs_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAmBXNs_20 = STATE_VARIABLE_RevAmBXNs_0_19;
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));

      if ((BXNs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevAmBXNs_27_27;

        {
          STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAmBXNs_0_19));
        }
        mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(Var_32, STATE_VARIABLE_RevAmBXNs_27_27, STATE_VARIABLE_RevAmBXNs_20);
      }
      else
      {
        MR_Word HeadBXN_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 0))));
        MR_Word TailBXNs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BXNs_6, (MR_Integer) 1))));
        MR_Box AX_12 = (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0));
        MR_Integer AXN_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
        MR_Box BX_14 = (MR_hl_field(MR_mktag(0), HeadBXN_10, (MR_Integer) 0));
        MR_Integer BXN_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBXN_10, (MR_Integer) 1))));
        MR_Word Res_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, &Res_16, AX_12, BX_14);
        switch (Res_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevAmBXNs_25_25;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;

              {
                STATE_VARIABLE_RevAmBXNs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_25_25, 0) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevAmBXNs_0_19));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_32;
              next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = STATE_VARIABLE_RevAmBXNs_25_25;
              AXNs_5 = next_value_of_AXNs_5;
              STATE_VARIABLE_RevAmBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer XN_17 = (MR_Integer) ((MR_Unsigned) AXN_13 - (MR_Unsigned) BXN_15);
              MR_Word STATE_VARIABLE_RevAmBXNs_23_23;
              MR_Word next_value_of_AXNs_5;
              MR_Word next_value_of_BXNs_6;
              MR_Word next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;

              succeeded = (XN_17 > (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word HeadXN_18;

                {
                  HeadXN_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadXN_18, 0) = AX_12;
                  MR_hl_field(MR_mktag(0), HeadXN_18, 1) = ((MR_Box) (XN_17));
                }
                {
                  STATE_VARIABLE_RevAmBXNs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_23_23, 0) = ((MR_Box) (HeadXN_18));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevAmBXNs_0_19));
                }
              }
              else
                STATE_VARIABLE_RevAmBXNs_23_23 = STATE_VARIABLE_RevAmBXNs_0_19;
              // direct tailcall eliminated
              ;
              next_value_of_AXNs_5 = Var_32;
              next_value_of_BXNs_6 = TailBXNs_11;
              next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = STATE_VARIABLE_RevAmBXNs_23_23;
              AXNs_5 = next_value_of_AXNs_5;
              BXNs_6 = next_value_of_BXNs_6;
              STATE_VARIABLE_RevAmBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_BXNs_6 = TailBXNs_11;

              // direct tailcall eliminated
              ;
              BXNs_6 = next_value_of_BXNs_6;
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
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_116_114_97_99_116_95_108_111_111_112_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word AXNs_5,
  MR_Word STATE_VARIABLE_RevAmBXNs_0_19,
  MR_Word * STATE_VARIABLE_RevAmBXNs_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AXNs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAmBXNs_20 = STATE_VARIABLE_RevAmBXNs_0_19;
    else
    {
      MR_Word HeadAXN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 0))));
      MR_Word TailAXNs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AXNs_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAmBXNs_27_27;
      MR_Word next_value_of_AXNs_5;
      MR_Word next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;

      {
        STATE_VARIABLE_RevAmBXNs_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_27_27, 0) = ((MR_Box) (HeadAXN_8));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevAmBXNs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevAmBXNs_0_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AXNs_5 = TailAXNs_9;
      next_value_of_STATE_VARIABLE_RevAmBXNs_0_19 = STATE_VARIABLE_RevAmBXNs_27_27;
      AXNs_5 = next_value_of_AXNs_5;
      STATE_VARIABLE_RevAmBXNs_0_19 = next_value_of_STATE_VARIABLE_RevAmBXNs_0_19;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__to_set_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Set_4;
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Xs_5;
    MR_Word Var_17;

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_T_6, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, (MR_Word) ((MR_Unsigned) 0U), &Xs_5);
    if ((Xs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_18 = (MR_hl_field(MR_mktag(1), Xs_5, (MR_Integer) 0));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_5, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_6, Var_18, Var_19, &Var_17);
    }
    Set_4 = (MR_Word) (Var_17);
    return Set_4;
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_only_duplicates_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Bag_3)
{
  {
    MR_Word Xs_4;

    mercury__bag__to_list_only_duplicates_2_p_0(TypeInfo_for_T_5, Bag_3, &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__bag__to_list_only_duplicates_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * DupXs_4)
{
  {
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);
    MR_Word XNs_5;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_7, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, (MR_Word) ((MR_Unsigned) 0U), &XNs_5);
    mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(XNs_5, DupXs_4);
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0));
      MR_Integer XN_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));

      succeeded = (XN_19 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg10_21;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_9;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg10_21 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__bag__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_95_49_3_p_in__list_0(Var_7, AddrSCCcallarg10_21);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__bag__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_95_49_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0));
      MR_Integer XN_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));

      succeeded = (XN_19 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg10_21;
        MR_Word HeadVar__3_23;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_22;

        {
          HeadVar__3_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_23, 0) = Var_9;
          MR_hl_field(MR_mktag(1), HeadVar__3_23, 1) = NULL;
        }
        AddrSCCcallarg10_21 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_23, (MR_Integer) 1)));
        *AddrOfHeadVar__3_22 = HeadVar__3_23;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_22 = AddrSCCcallarg10_21;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_22 = next_value_of_AddrOfHeadVar__3_22;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__bag__to_list_without_duplicates_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * Xs_4)
{
  {
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, (MR_Word) ((MR_Unsigned) 0U), Xs_4);
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_without_duplicates_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Bag_3)
{
  {
    MR_Word Xs_4;
    MR_Word Map_7 = (MR_Word) (Bag_3);

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_7, (MR_Word) ((MR_Unsigned) 0U), &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__bag__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * XNs_4)
{
  {
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, (MR_Word) ((MR_Unsigned) 0U), XNs_4);
  }
}

MR_Word MR_CALL 
mercury__bag__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Bag_3)
{
  {
    MR_Word XNs_4;
    MR_Word Map_7 = (MR_Word) (Bag_3);

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_7, (MR_Word) ((MR_Unsigned) 0U), &XNs_4);
    return XNs_4;
  }
}

MR_Word MR_CALL 
mercury__bag__to_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Bag_3)
{
  {
    MR_Word Xs_4;

    mercury__bag__to_list_2_p_0(TypeInfo_for_T_5, Bag_3, &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__bag__from_set_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Set_3,
  MR_Word * Bag_4)
{
  {
    MR_Word Xs_5 = (MR_Word) (Set_3);

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_7, Xs_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Bag_4);
  }
}

MR_Word MR_CALL 
mercury__bag__from_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  {
    MR_Word Bag_4;
    MR_Word Xs_8 = (MR_Word) (Set_3);

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_5, Xs_8, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Bag_4);
    return Bag_4;
  }
}

void MR_CALL 
mercury__bag__from_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Xs_3,
  MR_Word * Bag_4)
{
  mercury__bag__insert_list_3_p_0(TypeInfo_for_T_6, Xs_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Bag_4);
}

MR_Word MR_CALL 
mercury__bag__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word Bag_4;

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_5, Xs_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Bag_4);
    return Bag_4;
  }
}

void MR_CALL 
mercury__bag__from_list_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Xs_3,
  MR_Word * Bag_4)
{
  mercury__bag__insert_list_3_p_0(TypeInfo_for_T_6, Xs_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Bag_4);
}

MR_Word MR_CALL 
mercury__bag__from_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word Bag_4;

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_5, Xs_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Bag_4);
    return Bag_4;
  }
}

MR_Word MR_CALL 
mercury__bag__bag_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Xs_3)
{
  {
    MR_Word HeadVar__2_2;

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_4, Xs_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__bag__delete_all_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word STATE_VARIABLE_Map_0_6 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_7;
    MR_Word Var_17;

    mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_6, X_4, &STATE_VARIABLE_Map_7, &Var_17);
    *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_7);
  }
}

MR_Word MR_CALL 
mercury__bag__delete_all_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Box X_5)
{
  {
    MR_Word STATE_VARIABLE_Bag_7;
    MR_Word STATE_VARIABLE_Map_0_12 = (MR_Word) (STATE_VARIABLE_Bag_0_6);
    MR_Word STATE_VARIABLE_Map_13;
    MR_Word Var_22;

    mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_9, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_12, X_5, &STATE_VARIABLE_Map_13, &Var_22);
    STATE_VARIABLE_Bag_7 = (MR_Word) (STATE_VARIABLE_Map_13);
    return STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_all_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Word Var_20;
    MR_Box conv0__N_6;

    succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &conv0__N_6, &STATE_VARIABLE_Map_8, &Var_20);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__delete_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Box X_5)
{
  {
    MR_Word STATE_VARIABLE_Bag_7;

    mercury__bag__delete_3_p_0(TypeInfo_for_T_9, X_5, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_7);
    return STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__delete_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Integer N_6;
    MR_Box conv0_N_6;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &conv0_N_6);
    if (succeeded)
    {
      N_6 = ((MR_Integer) (conv0_N_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (N_6 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        mercury__map__det_update_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_4, ((MR_Box) (Var_10)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word Var_27;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &STATE_VARIABLE_Map_8, &Var_27);
      }
    }
    else
      STATE_VARIABLE_Map_8 = STATE_VARIABLE_Map_0_7;
    *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
  }
}

void MR_CALL 
mercury__bag__det_remove_set_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8)
{
  {
    MR_bool succeeded;
    MR_Word Xs_6 = (MR_Word) (Set_4);
    MR_Word STATE_VARIABLE_Bag_8_18;

    succeeded = mercury__bag__remove_list_3_p_0(TypeInfo_for_T_10, Xs_6, STATE_VARIABLE_Bag_0_7, &STATE_VARIABLE_Bag_8_18);
    if (succeeded)
      *STATE_VARIABLE_Bag_8 = STATE_VARIABLE_Bag_8_18;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_set_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word Set_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_7;
    MR_Word Xs_14 = (MR_Word) (Set_5);
    MR_Word STATE_VARIABLE_Bag_8_23;

    succeeded = mercury__bag__remove_list_3_p_0(TypeInfo_for_T_9, Xs_14, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_23);
    if (succeeded)
      STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_23;
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
    return STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_set_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8)
{
  {
    MR_bool succeeded;
    MR_Word Xs_6 = (MR_Word) (Set_4);

    succeeded = mercury__bag__remove_list_3_p_0(TypeInfo_for_T_10, Xs_6, STATE_VARIABLE_Bag_0_7, STATE_VARIABLE_Bag_8);
    return succeeded;
  }
}

void MR_CALL 
mercury__bag__det_remove_list_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Xs_4,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word * STATE_VARIABLE_Bag_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_8_8;

    succeeded = mercury__bag__remove_list_3_p_0(TypeInfo_for_T_12, Xs_4, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_8);
    if (succeeded)
      *STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_8;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word Xs_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_7;
    MR_Word STATE_VARIABLE_Bag_8_14;

    succeeded = mercury__bag__remove_list_3_p_0(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_14);
    if (succeeded)
      STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_14;
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove_list\'/3", (MR_String) "some item not in bag");
    return STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Bag_0_2,
  MR_Word * STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Bag_3 = STATE_VARIABLE_Bag_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bag_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bag_0_2;

      succeeded = mercury__bag__remove_3_p_0(TypeInfo_for_T_14, X_7, STATE_VARIABLE_Bag_0_2, &STATE_VARIABLE_Bag_12_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Xs_8;
        next_value_of_STATE_VARIABLE_Bag_0_2 = STATE_VARIABLE_Bag_12_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Bag_0_2 = next_value_of_STATE_VARIABLE_Bag_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__bag__det_remove_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word * STATE_VARIABLE_Bag_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_8_8;

    succeeded = mercury__bag__remove_3_p_0(TypeInfo_for_T_12, X_4, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_8);
    if (succeeded)
      *STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_8;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__bag__det_remove_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Box X_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_7;
    MR_Word STATE_VARIABLE_Bag_8_14;

    succeeded = mercury__bag__remove_3_p_0(TypeInfo_for_T_9, X_5, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_8_14);
    if (succeeded)
      STATE_VARIABLE_Bag_7 = STATE_VARIABLE_Bag_8_14;
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
    return STATE_VARIABLE_Bag_7;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_smallest_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box * X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Word STATE_VARIABLE_Map_9_9;
    MR_Word Var_24;
    MR_Box conv0_N_6;
    MR_Integer Var_10;

    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &conv0_N_6, &STATE_VARIABLE_Map_9_9, &Var_24);
    if (succeeded)
    {
      N_6 = ((MR_Integer) (conv0_N_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_10 = (MR_Integer) 1;
      succeeded = (N_6 > Var_10);
      if (succeeded)
      {
        MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        mercury__map__det_insert_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), *X_4, ((MR_Box) (Var_11)), STATE_VARIABLE_Map_9_9, &STATE_VARIABLE_Map_8);
      }
      else
        STATE_VARIABLE_Map_8 = STATE_VARIABLE_Map_9_9;
      *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bag__insert_set_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Set_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8)
{
  {
    MR_Word List_6 = (MR_Word) (Set_4);

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_10, List_6, STATE_VARIABLE_Bag_0_7, STATE_VARIABLE_Bag_8);
  }
}

MR_Word MR_CALL 
mercury__bag__insert_set_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_Bag_7;
    MR_Word List_14 = (MR_Word) (Xs_5);

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_9, List_14, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_7);
    return STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__det_insert_duplicates_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer N_5,
  MR_Box Item_6,
  MR_Word STATE_VARIABLE_Bag_0_8,
  MR_Word * STATE_VARIABLE_Bag_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_10_10;

    succeeded = mercury__bag__insert_duplicates_4_p_0(TypeInfo_for_T_14, N_5, Item_6, STATE_VARIABLE_Bag_0_8, &STATE_VARIABLE_Bag_10_10);
    if (succeeded)
      *STATE_VARIABLE_Bag_9 = STATE_VARIABLE_Bag_10_10;
    else
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140bag.det_insert_duplicates\'/4", (MR_String) "number of items is negative");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__bag__det_insert_duplicates_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word STATE_VARIABLE_Bag_0_8,
  MR_Integer N_6,
  MR_Box Item_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Bag_9;
    MR_Word STATE_VARIABLE_Bag_10_17;

    succeeded = mercury__bag__insert_duplicates_4_p_0(TypeInfo_for_T_11, N_6, Item_7, STATE_VARIABLE_Bag_0_8, &STATE_VARIABLE_Bag_10_17);
    if (succeeded)
      STATE_VARIABLE_Bag_9 = STATE_VARIABLE_Bag_10_17;
    else
      mercury__require__error_2_p_0((MR_String) "predicate \140bag.det_insert_duplicates\'/4", (MR_String) "number of items is negative");
    return STATE_VARIABLE_Bag_9;
  }
}

MR_bool MR_CALL 
mercury__bag__insert_duplicates_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer N_5,
  MR_Box Item_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded = (N_5 < (MR_Integer) 0);
    MR_Word CmpResult_8;
    MR_Word STATE_VARIABLE_Map_0_10 = (MR_Word) (HeadVar__3_3);
    MR_Word STATE_VARIABLE_Map_11;

    if (succeeded)
      CmpResult_8 = (MR_Integer) 1;
    else
    {
      succeeded = (N_5 == (MR_Integer) 0);
      if (succeeded)
        CmpResult_8 = (MR_Integer) 0;
      else
        CmpResult_8 = (MR_Integer) 2;
    }
    switch (CmpResult_8) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Map_11 = STATE_VARIABLE_Map_0_10;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Count_9;
          MR_Box conv0_Count_9;

          succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_10, Item_6, &conv0_Count_9);
          if (succeeded)
          {
            Count_9 = ((MR_Integer) (conv0_Count_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Count_9 + (MR_Unsigned) N_5);

            mercury__map__det_update_4_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_6, ((MR_Box) (Var_13)), STATE_VARIABLE_Map_0_10, &STATE_VARIABLE_Map_11);
          }
          else
            mercury__map__det_insert_4_p_0(TypeInfo_for_T_16, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_6, ((MR_Box) (N_5)), STATE_VARIABLE_Map_0_10, &STATE_VARIABLE_Map_11);
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Word) (STATE_VARIABLE_Map_11);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_Bag_7;

    mercury__bag__insert_list_3_p_0(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_7);
    return STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Bag_0_2,
  MR_Word * STATE_VARIABLE_Bag_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Bag_3 = STATE_VARIABLE_Bag_0_2;
    else
    {
      MR_Box Item_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Bag_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Bag_0_2;

      mercury__bag__insert_3_p_0(TypeInfo_for_T_14, Item_7, STATE_VARIABLE_Bag_0_2, &STATE_VARIABLE_Bag_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_Bag_0_2 = STATE_VARIABLE_Bag_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Bag_0_2 = next_value_of_STATE_VARIABLE_Bag_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bag__insert_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_Bag_0_6,
  MR_Box X_5)
{
  {
    MR_Word STATE_VARIABLE_Bag_7;

    mercury__bag__insert_3_p_0(TypeInfo_for_T_9, X_5, STATE_VARIABLE_Bag_0_6, &STATE_VARIABLE_Bag_7);
    return STATE_VARIABLE_Bag_7;
  }
}

void MR_CALL 
mercury__bag__insert_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box Item_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Integer Count_6;
    MR_Box conv0_Count_6;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, Item_4, &conv0_Count_6);
    if (succeeded)
    {
      Count_6 = ((MR_Integer) (conv0_Count_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Count_6 + (MR_Unsigned) 1);

      mercury__map__det_update_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_4, ((MR_Box) (Var_9)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
    }
    else
      mercury__map__det_insert_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Item_4, ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
    *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
  }
}

static void MR_CALL 
mercury__bag__member_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__bag__member_3_p_0_env_0_s * env_ptr = (struct mercury__bag__member_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word STATE_VARIABLE_Bag_8_17;

      (env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded = mercury__bag__remove_3_p_0((env_ptr)->mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, *((env_ptr)->mercury__bag__member_3_p_0_env_0__X_4), (env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &STATE_VARIABLE_Bag_8_17);
      if ((env_ptr)->mercury__bag__member_3_p_0_env_0__succeeded)
        *((env_ptr)->mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8) = STATE_VARIABLE_Bag_8_17;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bag.det_remove\'/3", (MR_String) "item not in bag");
          return;
        }
      ((env_ptr)->mercury__bag__member_3_p_0_env_0__cont)((env_ptr)->mercury__bag__member_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__bag__member_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box * X_4,
  MR_Word STATE_VARIABLE_Bag_0_7,
  MR_Word * STATE_VARIABLE_Bag_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__bag__member_3_p_0_env_0_s env;

    (env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10 = TypeInfo_for_T_10;
    (env).mercury__bag__member_3_p_0_env_0__X_4 = X_4;
    (env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7 = STATE_VARIABLE_Bag_0_7;
    (env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_8 = STATE_VARIABLE_Bag_8;
    (env).mercury__bag__member_3_p_0_env_0__cont = cont;
    (env).mercury__bag__member_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word Xs_6;

      mercury__bag__to_list_2_p_0((env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (env).mercury__bag__member_3_p_0_env_0__STATE_VARIABLE_Bag_0_7, &Xs_6);
      mercury__list__member_2_p_1((env).mercury__bag__member_3_p_0_env_0__TypeInfo_for_T_10, (env).mercury__bag__member_3_p_0_env_0__X_4, Xs_6, mercury__bag__member_3_p_0_1, &env);
    }
  }
}

void MR_CALL 
mercury__bag__to_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * Xs_4)
{
  {
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);
    MR_Word RevXs_5;

    mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(TypeInfo_for_T_8, Map_3, (MR_Word) ((MR_Unsigned) 0U), &RevXs_5);
    mercury__list__reverse_2_p_0(TypeInfo_for_T_8, RevXs_5, Xs_4);
  }
}

static void MR_CALL 
mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_11, HeadVar__3_3, &Var_15);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_22, HeadVar__3_3, &Var_27);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_18, Var_19, Var_27, &Var_28);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_23, Var_28, &Var_29);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_38, HeadVar__3_3, &Var_44);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_32, Var_33, Var_44, &Var_45);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_39, Var_45, &Var_46);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_34, Var_35, Var_46, &Var_47);
          mercury__bag__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_40, Var_47, &Var_48);
          mercury__bag__prepend_n_xs_4_p_0(Var_55, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__bag__prepend_n_xs_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box X_5,
  MR_Integer N_6,
  MR_Word STATE_VARIABLE_RevXs_0_8,
  MR_Word * STATE_VARIABLE_RevXs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_RevXs_9 = STATE_VARIABLE_RevXs_0_8;
    else
    {
      MR_Word STATE_VARIABLE_RevXs_11_11;
      MR_Integer Var_12;
      MR_Integer next_value_of_N_6;
      MR_Word next_value_of_STATE_VARIABLE_RevXs_0_8;

      {
        STATE_VARIABLE_RevXs_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevXs_11_11, 0) = X_5;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevXs_11_11, 1) = ((MR_Box) (STATE_VARIABLE_RevXs_0_8));
      }
      Var_12 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_6 = Var_12;
      next_value_of_STATE_VARIABLE_RevXs_0_8 = STATE_VARIABLE_RevXs_11_11;
      N_6 = next_value_of_N_6;
      STATE_VARIABLE_RevXs_0_8 = next_value_of_STATE_VARIABLE_RevXs_0_8;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bag__remove_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box X_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Word STATE_VARIABLE_Map_0_7 = (MR_Word) (HeadVar__2_2);
    MR_Word STATE_VARIABLE_Map_8;
    MR_Box conv0_N_6;
    MR_Integer Var_9;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &conv0_N_6);
    if (succeeded)
    {
      N_6 = ((MR_Integer) (conv0_N_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_9 = (MR_Integer) 1;
      succeeded = (N_6 > Var_9);
      if (succeeded)
      {
        MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        mercury__map__det_update_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_4, ((MR_Box) (Var_10)), STATE_VARIABLE_Map_0_7, &STATE_VARIABLE_Map_8);
      }
      else
      {
        MR_Word Var_25;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Map_0_7, X_4, &STATE_VARIABLE_Map_8, &Var_25);
      }
      *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_Map_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__member_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Map_4 = (MR_Word) (HeadVar__2_2);
    MR_Box conv0__N_5;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_6, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_4, X_3, &conv0__N_5);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

void MR_CALL 
mercury__bag__count_value_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Box X_5,
  MR_Integer * N_6)
{
  {
    MR_bool succeeded;
    MR_Word Map_4 = (MR_Word) (HeadVar__1_1);
    MR_Integer NPrime_7;
    MR_Box conv0_NPrime_7;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_8, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_4, X_5, &conv0_NPrime_7);
    if (succeeded)
    {
      NPrime_7 = ((MR_Integer) (conv0_NPrime_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *N_6 = NPrime_7;
    else
      *N_6 = (MR_Integer) 0;
  }
}

MR_Integer MR_CALL 
mercury__bag__count_value_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Bag_4,
  MR_Box X_5)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Word Map_10 = (MR_Word) (Bag_4);
    MR_Integer NPrime_11;
    MR_Box conv0_NPrime_11;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_7, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_10, X_5, &conv0_NPrime_11);
    if (succeeded)
    {
      NPrime_11 = ((MR_Integer) (conv0_NPrime_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      N_6 = NPrime_11;
    else
      N_6 = (MR_Integer) 0;
    return N_6;
  }
}

MR_bool MR_CALL 
mercury__bag__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Box X_4)
{
  {
    MR_bool succeeded;
    MR_Word Map_3 = (MR_Word) (HeadVar__1_1);
    MR_Box conv0_Var_9;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map_3, X_4, &conv0_Var_9);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bag__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Map_2 = (MR_Word) (HeadVar__1_1);

    succeeded = (Map_2 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bag__singleton_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box Item_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Map_4;

    {
      Map_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Map_4, 0) = Item_3;
      MR_hl_field(MR_mktag(1), Map_4, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), Map_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Map_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = (MR_Word) (Map_4);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__bag__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_Word MR_CALL 
mercury__bag__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_bool MR_CALL 
mercury__bag____Unify____bag_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bag____Unify____bag_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bag____Compare____bag_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bag____Compare____bag_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module bag.
