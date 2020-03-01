/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version 20.01.1-beta-2020-02-29
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


// :- module multi_map.
// :- implementation.

/*
INIT mercury__multi_map__init
ENDINIT
*/

#include "multi_map.mih"


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



struct mercury__multi_map__inverse_search_3_p_0_env_0_s {
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9;
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__Value_5;
  MR_Cont mercury__multi_map__inverse_search_3_p_0_env_0__cont;
  void * mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr;
  MR_bool mercury__multi_map__inverse_search_3_p_0_env_0__succeeded;
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7;
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7;
};

struct mercury__multi_map__member_3_p_0_env_0_s {
  MR_Word mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9;
  MR_Box * mercury__multi_map__member_3_p_0_env_0__Value_6;
  MR_Cont mercury__multi_map__member_3_p_0_env_0__cont;
  void * mercury__multi_map__member_3_p_0_env_0__cont_env_ptr;
  MR_Word mercury__multi_map__member_3_p_0_env_0__ValueList_7;
  MR_Box mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
  MR_Box Var_17,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__multi_map__list__pti_list_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__multi_map__multi_map__type_ctor_info_multi_map_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__multi_map____Unify____multi_map_2_0_10001)),
  ((MR_Box) (mercury__multi_map____Compare____multi_map_2_0_10001)),
  (MR_String) "multi_map",
  (MR_String) "multi_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_6, TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__multi_map__add_from_pair_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MultiMap_0_7,
  MR_Word * STATE_VARIABLE_MultiMap_8)
{
  {
    MR_Box K_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box V_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

    mercury__multi_map__set_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_4, V_5, STATE_VARIABLE_MultiMap_0_7, STATE_VARIABLE_MultiMap_8);
  }
}

MR_Integer MR_CALL 
mercury__multi_map__all_count_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap0_3)
{
  {
    MR_Integer Count_4;

    mercury__multi_map__all_count_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, MultiMap0_3, &Count_4);
    return Count_4;
  }
}

void MR_CALL 
mercury__multi_map__all_count_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap_3,
  MR_Integer * Count_4)
{
  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(TypeInfo_for_V_8, MultiMap_3, (MR_Integer) 0, Count_4);
}

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
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
          MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer V_17_15;
          MR_Integer V_18_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_12_11, HeadVar__3_3, &V_17_15);
          mercury__multi_map__accumulate_length_3_p_0(Var_55, V_11_10, V_17_15, &V_18_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_13_12;
          next_value_of_HeadVar__3_3 = V_18_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word V_22_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word V_24_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Integer V_31_27;
          MR_Integer V_32_28;
          MR_Integer V_33_29;
          MR_Integer V_34_30;
          MR_Integer NVs_87;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_25_22, HeadVar__3_3, &V_31_27);
          mercury__list__length_acc_3_p_0(Var_55, V_22_19, (MR_Integer) 0, &NVs_87);
          V_32_28 = (MR_Integer) ((MR_Unsigned) V_31_27 + (MR_Unsigned) NVs_87);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_26_23, V_32_28, &V_33_29);
          mercury__multi_map__accumulate_length_3_p_0(Var_55, V_24_21, V_33_29, &V_34_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_27_24;
          next_value_of_HeadVar__3_3 = V_34_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word V_38_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word V_40_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word V_42_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Integer V_50_44;
          MR_Integer V_51_45;
          MR_Integer V_52_46;
          MR_Integer V_53_47;
          MR_Integer V_54_48;
          MR_Integer V_55_49;
          MR_Integer NVs_60;
          MR_Integer NVs_69;
          MR_Integer NVs_78;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_43_38, HeadVar__3_3, &V_50_44);
          mercury__list__length_acc_3_p_0(Var_55, V_38_33, (MR_Integer) 0, &NVs_60);
          V_51_45 = (MR_Integer) ((MR_Unsigned) V_50_44 + (MR_Unsigned) NVs_60);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_44_39, V_51_45, &V_52_46);
          mercury__list__length_acc_3_p_0(Var_55, V_40_35, (MR_Integer) 0, &NVs_69);
          V_53_47 = (MR_Integer) ((MR_Unsigned) V_52_46 + (MR_Unsigned) NVs_69);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, V_45_40, V_53_47, &V_54_48);
          mercury__list__length_acc_3_p_0(Var_55, V_42_37, (MR_Integer) 0, &NVs_78);
          V_55_49 = (MR_Integer) ((MR_Unsigned) V_54_48 + (MR_Unsigned) NVs_78);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_46_41;
          next_value_of_HeadVar__3_3 = V_55_49;
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
mercury__multi_map__accumulate_length_3_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word Vs_4,
  MR_Integer STATE_VARIABLE_Count_0_7,
  MR_Integer * STATE_VARIABLE_Count_8)
{
  {
    MR_Integer NVs_6;

    mercury__list__length_acc_3_p_0(TypeInfo_for_V_10, Vs_4, (MR_Integer) 0, &NVs_6);
    *STATE_VARIABLE_Count_8 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_7 + (MR_Unsigned) NVs_6);
  }
}

void MR_CALL 
mercury__multi_map__count_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3,
  MR_Integer * Count_4)
{
  {
    MR_Word TypeInfo_8_8;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__count_2_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (MultiMap_3), Count_4);
  }
}

MR_Integer MR_CALL 
mercury__multi_map__count_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap0_3)
{
  {
    MR_Integer Count_4;
    MR_Word TypeInfo_8_10;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__count_2_p_0(TypeInfo_for_K_5, TypeInfo_8_10, (MR_Word) (MultiMap0_3), &Count_4);
    return Count_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__values_1_f_0(
  MR_Word TypeInfo_for__K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word Values_4;

    mercury__multi_map__values_2_p_0(TypeInfo_for__K_5, TypeInfo_for_V_6, MultiMap_3, &Values_4);
    return Values_4;
  }
}

void MR_CALL 
mercury__multi_map__values_2_p_0(
  MR_Word TypeInfo_for__K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word MultiMap_3,
  MR_Word * Values_4)
{
  {
    MR_Word TypeInfo_10_22;
    MR_Word ValueLists_5;
    MR_Word V_5_18;
    MR_Word conv0_ValueLists_5;

    {
      TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_22, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_22, 1) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__tree234__values_acc_3_p_0(TypeInfo_for__K_6, TypeInfo_10_22, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_ValueLists_5);
    ValueLists_5 = (MR_Word) (conv0_ValueLists_5);
    mercury__list__reverse_2_p_0(TypeInfo_10_22, ValueLists_5, &V_5_18);
    mercury__list__condense_acc_3_p_0(TypeInfo_for_V_7, V_5_18, (MR_Word) ((MR_Unsigned) 0U), Values_4);
  }
}

void MR_CALL 
mercury__multi_map__keys_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word MultiMap_3,
  MR_Word * Keys_4)
{
  {
    MR_Word TypeInfo_8_8;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for__V_6));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Unsigned) 0U), Keys_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word Keys_4;
    MR_Word TypeInfo_8_10;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for__V_6));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_10, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
    return Keys_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__apply_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Keys_4,
  MR_Word MultiMap_5)
{
  {
    MR_Word Values_6;

    mercury__multi_map__apply_to_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_4, MultiMap_5, &Values_6);
    return Values_6;
  }
}

void MR_CALL 
mercury__multi_map__apply_to_list_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word HeadVar__1_1,
  MR_Word MultiMap_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_10_21;
    MR_Word ValueLists_10;
    MR_Word V_5_17;
    MR_Word conv0_ValueLists_10;

    {
      TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_21, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_11, TypeInfo_10_21, HeadVar__1_1, (MR_Word) (MultiMap_2), &conv0_ValueLists_10);
    ValueLists_10 = (MR_Word) (conv0_ValueLists_10);
    mercury__list__reverse_2_p_0(TypeInfo_10_21, ValueLists_10, &V_5_17);
    mercury__list__condense_acc_3_p_0(TypeInfo_for_V_12, V_5_17, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_list_lists_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Keys_4,
  MR_Word Values_5,
  MR_Word * MultiMap_6)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Word V_7_14;
    MR_Word conv0_V_7_14;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, Keys_4, (MR_Word) (Values_5), &conv0_V_7_14);
    V_7_14 = (MR_Word) (conv0_V_7_14);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (V_7_14), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_MultiMap_6);
    *MultiMap_6 = (MR_Word) (conv1_MultiMap_6);
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_corresponding_list_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Keys_4,
  MR_Word Values_5)
{
  {
    MR_Word MultiMap_6;
    MR_Word TypeInfo_10_13;
    MR_Word V_7_17;
    MR_Word conv0_V_7_17;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_10_13, Keys_4, (MR_Word) (Values_5), &conv0_V_7_17);
    V_7_17 = (MR_Word) (conv0_V_7_17);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_10_13, (MR_Word) (V_7_17), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_MultiMap_6);
    MultiMap_6 = (MR_Word) (conv1_MultiMap_6);
    return MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Keys_4,
  MR_Word Values_5,
  MR_Word * MultiMap_6)
{
  mercury__multi_map__from_corresponding_lists_2_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_4, Values_5, (MR_Word) ((MR_Unsigned) 0U), MultiMap_6);
}

MR_Word MR_CALL 
mercury__multi_map__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Keys_4,
  MR_Word Values_5)
{
  {
    MR_Word MultiMap_6;

    mercury__multi_map__from_corresponding_lists_2_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_4, Values_5, (MR_Word) ((MR_Unsigned) 0U), &MultiMap_6);
    return MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MultiMap_0_3,
  MR_Word * STATE_VARIABLE_MultiMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_MultiMap_4 = STATE_VARIABLE_MultiMap_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box Value_24 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Values_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_MultiMap_29_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MultiMap_0_3;

        mercury__multi_map__set_4_p_0(TypeInfo_for_K_31, TypeInfo_for_V_32, Var_34, Value_24, STATE_VARIABLE_MultiMap_0_3, &STATE_VARIABLE_MultiMap_29_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_33;
        next_value_of_HeadVar__2_2 = Values_25;
        next_value_of_STATE_VARIABLE_MultiMap_0_3 = STATE_VARIABLE_MultiMap_29_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MultiMap_0_3 = next_value_of_STATE_VARIABLE_MultiMap_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__multi_map__from_sorted_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AssocList_3,
  MR_Word * MultiMap_4)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word conv0_MultiMap_4;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (AssocList_3), &conv0_MultiMap_4);
    *MultiMap_4 = (MR_Word) (conv0_MultiMap_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_sorted_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AssocList_3)
{
  {
    MR_Word MultiMap_4;
    MR_Word TypeInfo_8_10;
    MR_Word conv0_MultiMap_4;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_8_10, (MR_Word) (AssocList_3), &conv0_MultiMap_4);
    MultiMap_4 = (MR_Word) (conv0_MultiMap_4);
    return MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AssocList_3,
  MR_Word * MultiMap_4)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word conv0_MultiMap_4;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (AssocList_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_MultiMap_4);
    *MultiMap_4 = (MR_Word) (conv0_MultiMap_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AssocList_3)
{
  {
    MR_Word MultiMap_4;
    MR_Word TypeInfo_8_10;
    MR_Word conv0_MultiMap_4;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_10, (MR_Word) (AssocList_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_MultiMap_4);
    MultiMap_4 = (MR_Word) (conv0_MultiMap_4);
    return MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3,
  MR_Word * AssocList_4)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word conv0_AssocList_4;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocList_4);
    *AssocList_4 = (MR_Word) (conv0_AssocList_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word AssocList_4;
    MR_Word TypeInfo_8_10;
    MR_Word conv0_AssocList_4;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_10, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocList_4);
    AssocList_4 = (MR_Word) (conv0_AssocList_4);
    return AssocList_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_flat_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AssocList_3)
{
  {
    MR_Word MultiMap_4;

    mercury__multi_map__from_flat_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AssocList_3, &MultiMap_4);
    return MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__from_flat_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word AssocList_3,
  MR_Word * MultiMap_4)
{
  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_3, (MR_Word) ((MR_Unsigned) 0U), MultiMap_4);
}

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_15_13;
      MR_Box K_28 = (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0));
      MR_Box V_29 = (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__multi_map__set_4_p_0(Var_24, Var_25, K_28, V_29, HeadVar__3_3, &V_15_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__multi_map__to_flat_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word AssocList_4;

    mercury__multi_map__to_flat_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, MultiMap_3, &AssocList_4);
    return AssocList_4;
  }
}

void MR_CALL 
mercury__multi_map__to_flat_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MultiMap_3,
  MR_Word * AssocList_4)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word Cord_5;
    MR_Word conv0_AssocList_4;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_K_8));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeInfo_for_V_9));
    }
    mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MultiMap_3, (MR_Word) ((MR_Unsigned) 0U), &Cord_5);
    conv0_AssocList_4 = mercury__cord__to_list_1_f_0(TypeInfo_15_15, (MR_Word) (Cord_5));
    *AssocList_4 = (MR_Word) (conv0_AssocList_4);
  }
}

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_60,
  MR_Word Var_61,
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
          MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word V_17_15;
          MR_Word V_18_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_12_11, HeadVar__3_3, &V_17_15);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, V_10_9, V_11_10, V_17_15, &V_18_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_13_12;
          next_value_of_HeadVar__3_3 = V_18_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_21_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word V_22_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box V_23_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word V_24_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_31_27;
          MR_Word V_32_28;
          MR_Word V_33_29;
          MR_Word V_34_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_25_22, HeadVar__3_3, &V_31_27);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, V_21_18, V_22_19, V_31_27, &V_32_28);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_26_23, V_32_28, &V_33_29);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, V_23_20, V_24_21, V_33_29, &V_34_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_27_24;
          next_value_of_HeadVar__3_3 = V_34_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_21_91;
          MR_Box V_37_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word V_38_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box V_39_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word V_40_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box V_41_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word V_42_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word V_50_44;
          MR_Word V_51_45;
          MR_Word V_52_46;
          MR_Word V_53_47;
          MR_Word V_54_48;
          MR_Word V_55_49;
          MR_Word KeyValues_67;
          MR_Word Var_73;
          MR_Word KeyValues_82;
          MR_Word Var_88;
          MR_Word conv0_Var_73;
          MR_Word conv1_V_51_45;
          MR_Word conv2_Var_88;
          MR_Word conv3_V_53_47;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_43_38, HeadVar__3_3, &V_50_44);
          {
            TypeInfo_21_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 1) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 2) = ((MR_Box) (Var_61));
          }
          KeyValues_67 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(V_37_32, V_38_33);
          conv0_Var_73 = mercury__cord__from_list_1_f_0(TypeInfo_21_91, (MR_Word) (KeyValues_67));
          Var_73 = (MR_Word) (conv0_Var_73);
          conv1_V_51_45 = mercury__cord__f_43_43_2_f_0(TypeInfo_21_91, (MR_Word) (V_50_44), (MR_Word) (Var_73));
          V_51_45 = (MR_Word) (conv1_V_51_45);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_44_39, V_51_45, &V_52_46);
          KeyValues_82 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(V_39_34, V_40_35);
          conv2_Var_88 = mercury__cord__from_list_1_f_0(TypeInfo_21_91, (MR_Word) (KeyValues_82));
          Var_88 = (MR_Word) (conv2_Var_88);
          conv3_V_53_47 = mercury__cord__f_43_43_2_f_0(TypeInfo_21_91, (MR_Word) (V_52_46), (MR_Word) (Var_88));
          V_53_47 = (MR_Word) (conv3_V_53_47);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, V_45_40, V_53_47, &V_54_48);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, V_41_36, V_42_37, V_54_48, &V_55_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_46_41;
          next_value_of_HeadVar__3_3 = V_55_49;
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
mercury__multi_map__to_flat_assoc_list_acc_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Box Key_5,
  MR_Word Values_6,
  MR_Word STATE_VARIABLE_Cord_0_10,
  MR_Word * STATE_VARIABLE_Cord_11)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word KeyValues_8;
    MR_Word Var_16;
    MR_Word conv0_Var_16;
    MR_Word conv1_STATE_VARIABLE_Cord_11;

    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_K_18));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 2) = ((MR_Box) (TypeInfo_for_V_19));
    }
    KeyValues_8 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(Key_5, Values_6);
    conv0_Var_16 = mercury__cord__from_list_1_f_0(TypeInfo_21_21, (MR_Word) (KeyValues_8));
    Var_16 = (MR_Word) (conv0_Var_16);
    conv1_STATE_VARIABLE_Cord_11 = mercury__cord__f_43_43_2_f_0(TypeInfo_21_21, (MR_Word) (STATE_VARIABLE_Cord_0_10), (MR_Word) (Var_16));
    *STATE_VARIABLE_Cord_11 = (MR_Word) (conv1_STATE_VARIABLE_Cord_11);
  }
}

static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
  MR_Box Var_17,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      {
        V_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), V_8_8, 0) = Var_17;
        MR_hl_field(MR_mktag(0), V_8_8, 1) = V_6_6;
      }
      V_9_9 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(Var_17, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__multi_map__optimize_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap0_3,
  MR_Word * MultiMap_4)
{
  *MultiMap_4 = MultiMap0_3;
}

MR_Word MR_CALL 
mercury__multi_map__optimize_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap0_3)
{
  {
    MR_Word MultiMap_4 = MultiMap0_3;

    return MultiMap_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMapA_4,
  MR_Word MultiMapB_5)
{
  {
    MR_Word MultiMap_6;

    mercury__multi_map__merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MultiMapA_4, MultiMapB_5, &MultiMap_6);
    return MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__merge_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word M0_4,
  MR_Word M1_5,
  MR_Word * M_6)
{
  {
    MR_Word TypeInfo_8_37;
    MR_Word ML0_7;
    MR_Word ML1_8;
    MR_Word ML_9;
    MR_Word conv0_ML0_7;
    MR_Word conv1_ML1_8;
    MR_Word conv2_M_6;

    {
      TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_37, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_37, 1) = ((MR_Box) (TypeInfo_for_V_11));
    }
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_8_37, (MR_Word) (M0_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_ML0_7);
    ML0_7 = (MR_Word) (conv0_ML0_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_8_37, (MR_Word) (M1_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_ML1_8);
    ML1_8 = (MR_Word) (conv1_ML1_8);
    mercury__multi_map__assoc_list_merge_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, ML0_7, ML1_8, &ML_9);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_10, TypeInfo_8_37, (MR_Word) (ML_9), &conv2_M_6);
    *M_6 = (MR_Word) (conv2_M_6);
  }
}

void MR_CALL 
mercury__multi_map__assoc_list_merge_3_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word ListA_4,
  MR_Word ListB_5,
  MR_Word * List_6)
{
  if ((ListA_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *List_6 = ListB_5;
  else
  {
    MR_Word HeadA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListA_4, (MR_Integer) 0))));
    MR_Word TailA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListA_4, (MR_Integer) 1))));

    if ((ListB_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *List_6 = ListA_4;
    else
    {
      MR_Word HeadB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListB_5, (MR_Integer) 0))));
      MR_Word TailB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListB_5, (MR_Integer) 1))));
      MR_Box KeyA_11 = (MR_hl_field(MR_mktag(0), HeadA_7, (MR_Integer) 0));
      MR_Word ValuesA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadA_7, (MR_Integer) 1))));
      MR_Box KeyB_13 = (MR_hl_field(MR_mktag(0), HeadB_9, (MR_Integer) 0));
      MR_Word ValuesB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadB_9, (MR_Integer) 1))));
      MR_Word Res_15;
      MR_Box Key_16;
      MR_Word Values_17;
      MR_Word Tail_18;
      MR_Word Var_19;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_20, &Res_15, KeyA_11, KeyB_13);
      switch (Res_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Key_16 = KeyA_11;
            Values_17 = ValuesA_12;
            mercury__multi_map__assoc_list_merge_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, TailA_8, ListB_5, &Tail_18);
          }
          break;
        case (MR_Integer) 0:
          {
            Key_16 = KeyA_11;
            mercury__list__append_3_p_1(TypeInfo_for_V_21, ValuesA_12, ValuesB_14, &Values_17);
            mercury__multi_map__assoc_list_merge_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, TailA_8, TailB_10, &Tail_18);
          }
          break;
        case (MR_Integer) 2:
          {
            Key_16 = KeyB_13;
            Values_17 = ValuesB_14;
            mercury__multi_map__assoc_list_merge_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, ListA_4, TailB_10, &Tail_18);
          }
          break;
      }
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = Key_16;
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Values_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *List_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_18));
      }
    }
  }
}

void MR_CALL 
mercury__multi_map__select_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap0_4,
  MR_Word KeySet_5,
  MR_Word * MultiMap_6)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Word V_7_14;
    MR_Word V_7_24;
    MR_Word conv0_V_7_24;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    V_7_14 = (MR_Word) (KeySet_5);
    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_10_10, V_7_14, (MR_Word) (MultiMap0_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_V_7_24);
    V_7_24 = (MR_Word) (conv0_V_7_24);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (V_7_24), &conv1_MultiMap_6);
    *MultiMap_6 = (MR_Word) (conv1_MultiMap_6);
  }
}

MR_Word MR_CALL 
mercury__multi_map__select_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap0_4,
  MR_Word KeySet_5)
{
  {
    MR_Word MultiMap_6;
    MR_Word TypeInfo_10_13;
    MR_Word V_7_17;
    MR_Word V_7_27;
    MR_Word conv0_V_7_27;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    V_7_17 = (MR_Word) (KeySet_5);
    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_10_13, V_7_17, (MR_Word) (MultiMap0_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_V_7_27);
    V_7_27 = (MR_Word) (conv0_V_7_27);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_10_13, (MR_Word) (V_7_27), &conv1_MultiMap_6);
    MultiMap_6 = (MR_Word) (conv1_MultiMap_6);
    return MultiMap_6;
  }
}

MR_bool MR_CALL 
mercury__multi_map__remove_smallest_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box * MultiMap0_5,
  MR_Word * Key_6,
  MR_Word Values_7,
  MR_Word * MultiMap_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_12_12;
    MR_Word V_9_21;
    MR_Box conv1_Key_6;
    MR_Word conv0_MultiMap_8;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (Values_7), MultiMap0_5, &conv1_Key_6, &conv0_MultiMap_8, &V_9_21);
    if (succeeded)
    {
      *Key_6 = ((MR_Word) (conv1_Key_6));
      *MultiMap_8 = (MR_Word) (conv0_MultiMap_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__multi_map__det_remove_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box MultiMap0_5,
  MR_Word * Key_6,
  MR_Word Values_7,
  MR_Word * MultiMap_8)
{
  {
    MR_Word TypeInfo_12_12;
    MR_Box conv1_Key_6;
    MR_Word conv0_MultiMap_8;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    mercury__map__det_remove_4_p_0(TypeInfo_for_K_9, TypeInfo_12_12, MultiMap0_5, &conv1_Key_6, (MR_Word) (Values_7), &conv0_MultiMap_8);
    *Key_6 = ((MR_Word) (conv1_Key_6));
    *MultiMap_8 = (MR_Word) (conv0_MultiMap_8);
  }
}

MR_bool MR_CALL 
mercury__multi_map__remove_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box MultiMap0_5,
  MR_Word * Key_6,
  MR_Word Values_7,
  MR_Word * MultiMap_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_12_12;
    MR_Word V_9_21;
    MR_Box conv1_Key_6;
    MR_Word conv0_MultiMap_8;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (Values_7), MultiMap0_5, &conv1_Key_6, &conv0_MultiMap_8, &V_9_21);
    if (succeeded)
    {
      *Key_6 = ((MR_Word) (conv1_Key_6));
      *MultiMap_8 = (MR_Word) (conv0_MultiMap_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__multi_map__delete_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__delete_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__delete_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_12,
  MR_Word * STATE_VARIABLE_MultiMap_13)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;
    MR_Word Values_9;
    MR_Word Values0_8;
    MR_Box conv0_Values0_8;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_V_17));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_16, TypeInfo_19_19, (MR_Word) (STATE_VARIABLE_MultiMap_0_12), Key_5, &conv0_Values0_8);
    if (succeeded)
    {
      Values0_8 = ((MR_Word) (conv0_Values0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      mercury__list__delete_all_3_p_1(TypeInfo_for_V_17, Values0_8, Value_6, &Values_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if ((Values_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word V_7_33;
        MR_Word conv1_STATE_VARIABLE_MultiMap_13;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, (MR_Word) (STATE_VARIABLE_MultiMap_0_12), Key_5, &conv1_STATE_VARIABLE_MultiMap_13, &V_7_33);
        *STATE_VARIABLE_MultiMap_13 = (MR_Word) (conv1_STATE_VARIABLE_MultiMap_13);
      }
      else
      {
        MR_Word conv2_STATE_VARIABLE_MultiMap_13;

        mercury__tree234__set_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, Key_5, ((MR_Box) (Values_9)), (MR_Word) (STATE_VARIABLE_MultiMap_0_12), &conv2_STATE_VARIABLE_MultiMap_13);
        *STATE_VARIABLE_MultiMap_13 = (MR_Word) (conv2_STATE_VARIABLE_MultiMap_13);
      }
    else
      *STATE_VARIABLE_MultiMap_13 = STATE_VARIABLE_MultiMap_0_12;
  }
}

void MR_CALL 
mercury__multi_map__delete_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box Key_4,
  MR_Word STATE_VARIABLE_MultiMap_0_6,
  MR_Word * STATE_VARIABLE_MultiMap_7)
{
  {
    MR_Word TypeInfo_12_12;
    MR_Word V_7_19;
    MR_Word conv0_STATE_VARIABLE_MultiMap_7;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (STATE_VARIABLE_MultiMap_0_6), Key_4, &conv0_STATE_VARIABLE_MultiMap_7, &V_7_19);
    *STATE_VARIABLE_MultiMap_7 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_7);
  }
}

MR_Word MR_CALL 
mercury__multi_map__delete_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word STATE_VARIABLE_MultiMap_0_6,
  MR_Box Key_5)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_7;
    MR_Word TypeInfo_12_17;
    MR_Word V_7_24;
    MR_Word conv0_STATE_VARIABLE_MultiMap_7;

    {
      TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_17, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_12_17, (MR_Word) (STATE_VARIABLE_MultiMap_0_6), Key_5, &conv0_STATE_VARIABLE_MultiMap_7, &V_7_24);
    STATE_VARIABLE_MultiMap_7 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_7);
    return STATE_VARIABLE_MultiMap_7;
  }
}

void MR_CALL 
mercury__multi_map__reverse_set_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_K_12,
  MR_Box Value_5,
  MR_Box Key_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  mercury__multi_map__set_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_11, Key_6, Value_5, STATE_VARIABLE_MultiMap_0_8, STATE_VARIABLE_MultiMap_9);
}

MR_Word MR_CALL 
mercury__multi_map__reverse_set_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Value_6,
  MR_Box Key_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_7, Value_6, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__add_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  mercury__multi_map__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_5, Value_6, STATE_VARIABLE_MultiMap_0_8, STATE_VARIABLE_MultiMap_9);
}

MR_Word MR_CALL 
mercury__multi_map__add_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

MR_Word MR_CALL 
mercury__multi_map__set_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__set_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_10,
  MR_Word * STATE_VARIABLE_MultiMap_11)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;
    MR_Word Values0_8;
    MR_Box conv0_Values0_8;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_V_17));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_16, TypeInfo_19_19, (MR_Word) (STATE_VARIABLE_MultiMap_0_10), Key_5, &conv0_Values0_8);
    if (succeeded)
    {
      Values0_8 = ((MR_Word) (conv0_Values0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Values_9;
      MR_Word conv1_STATE_VARIABLE_MultiMap_11;

      {
        Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Values_9, 0) = Value_6;
        MR_hl_field(MR_mktag(1), Values_9, 1) = ((MR_Box) (Values0_8));
      }
      mercury__tree234__set_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, Key_5, ((MR_Box) (Values_9)), (MR_Word) (STATE_VARIABLE_MultiMap_0_10), &conv1_STATE_VARIABLE_MultiMap_11);
      *STATE_VARIABLE_MultiMap_11 = (MR_Word) (conv1_STATE_VARIABLE_MultiMap_11);
    }
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word Var_13;
      MR_Word conv2_STATE_VARIABLE_MultiMap_11;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = Value_6;
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_V_17));
      }
      mercury__map__det_insert_4_p_0(TypeInfo_for_K_16, TypeInfo_23_23, Key_5, ((MR_Box) (Var_13)), (MR_Word) (STATE_VARIABLE_MultiMap_0_10), &conv2_STATE_VARIABLE_MultiMap_11);
      *STATE_VARIABLE_MultiMap_11 = (MR_Word) (conv2_STATE_VARIABLE_MultiMap_11);
    }
  }
}

void MR_CALL 
mercury__multi_map__det_replace_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Word Values_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    mercury__map__det_update_4_p_0(TypeInfo_for_K_11, TypeInfo_14_14, Key_5, ((MR_Box) (Values_6)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    *STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_replace_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Word Values_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;
    MR_Word TypeInfo_14_20;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_20, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    mercury__map__det_update_4_p_0(TypeInfo_for_K_11, TypeInfo_14_20, Key_6, ((MR_Box) (Values_7)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

MR_bool MR_CALL 
mercury__multi_map__replace_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Word Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_14_14;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_11, TypeInfo_14_14, Key_5, ((MR_Box) (Value_6)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    if (succeeded)
    {
      *STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_update_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__det_update_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__det_update_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_MultiMap_10_10;
    MR_Word TypeInfo_16_24;
    MR_Word Values0_20;
    MR_Word Values_21;
    MR_Box conv0_Values0_20;
    MR_Word conv1_STATE_VARIABLE_MultiMap_10_10;

    {
      TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_24, 1) = ((MR_Box) (TypeInfo_for_V_14));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_13, TypeInfo_16_24, (MR_Word) (STATE_VARIABLE_MultiMap_0_8), Key_5, &conv0_Values0_20);
    if (succeeded)
    {
      Values0_20 = ((MR_Word) (conv0_Values0_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        Values_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Values_21, 0) = Value_6;
        MR_hl_field(MR_mktag(1), Values_21, 1) = ((MR_Box) (Values0_20));
      }
      succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_13, TypeInfo_16_24, Key_5, ((MR_Box) (Values_21)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv1_STATE_VARIABLE_MultiMap_10_10);
      if (succeeded)
      {
        STATE_VARIABLE_MultiMap_10_10 = (MR_Word) (conv1_STATE_VARIABLE_MultiMap_10_10);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_MultiMap_9 = STATE_VARIABLE_MultiMap_10_10;
    else
      {
        mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_13, (MR_String) "multi_map.det_update: key not found", Key_5);
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__multi_map__update_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_10,
  MR_Word * STATE_VARIABLE_MultiMap_11)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;
    MR_Word Values0_8;
    MR_Word Values_9;
    MR_Box conv0_Values0_8;
    MR_Word conv1_STATE_VARIABLE_MultiMap_11;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_V_14));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_13, TypeInfo_16_16, (MR_Word) (STATE_VARIABLE_MultiMap_0_10), Key_5, &conv0_Values0_8);
    if (succeeded)
    {
      Values0_8 = ((MR_Word) (conv0_Values0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Values_9, 0) = Value_6;
        MR_hl_field(MR_mktag(1), Values_9, 1) = ((MR_Box) (Values0_8));
      }
      succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_13, TypeInfo_16_16, Key_5, ((MR_Box) (Values_9)), (MR_Word) (STATE_VARIABLE_MultiMap_0_10), &conv1_STATE_VARIABLE_MultiMap_11);
      if (succeeded)
      {
        *STATE_VARIABLE_MultiMap_11 = (MR_Word) (conv1_STATE_VARIABLE_MultiMap_11);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__multi_map__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word Var_10;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = Value_6;
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_V_14));
    }
    mercury__map__det_insert_4_p_0(TypeInfo_for_K_13, TypeInfo_16_16, Key_5, ((MR_Box) (Var_10)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    *STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;
    MR_Word TypeInfo_16_22;
    MR_Word Var_18;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = Value_7;
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_22, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_22, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    mercury__map__det_insert_4_p_0(TypeInfo_for_K_11, TypeInfo_16_22, Key_6, ((MR_Box) (Var_18)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

MR_bool MR_CALL 
mercury__multi_map__insert_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;
    MR_Word Var_10;
    MR_Word conv0_STATE_VARIABLE_MultiMap_9;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = Value_6;
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_V_14));
    }
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_16_16, Key_5, ((MR_Box) (Var_10)), (MR_Word) (STATE_VARIABLE_MultiMap_0_8), &conv0_STATE_VARIABLE_MultiMap_9);
    if (succeeded)
    {
      *STATE_VARIABLE_MultiMap_9 = (MR_Word) (conv0_STATE_VARIABLE_MultiMap_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) ((env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7));
    mercury__multi_map__inverse_search_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9, (env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__Value_5, (env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7);
    if ((env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded)
      ((env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont)((env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__multi_map__inverse_search_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MultiMap_4,
  MR_Box Value_5,
  MR_Box * Key_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s env;

    (env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9 = TypeInfo_for_V_9;
    (env).mercury__multi_map__inverse_search_3_p_0_env_0__Value_5 = Value_5;
    (env).mercury__multi_map__inverse_search_3_p_0_env_0__cont = cont;
    (env).mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word TypeInfo_11_11;

      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) ((env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
      }
      mercury__tree234__member_3_p_0(TypeInfo_for_K_8, TypeInfo_11_11, (MR_Word) (MultiMap_4), Key_6, &(env).mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__inverse_search_3_p_0_2, &env);
    }
  }
}

void MR_CALL 
mercury__multi_map__nondet_lookup_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MultiMap_4,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_11;
    MR_Word Values_7;
    MR_Box conv0_Values_7;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_V_9));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_8, TypeInfo_11_11, (MR_Word) (MultiMap_4), Key_5, &conv0_Values_7);
    if (succeeded)
    {
      Values_7 = ((MR_Word) (conv0_Values_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__list__member_2_p_1(TypeInfo_for_V_9, Value_6, Values_7, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__multi_map__lookup_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap_4,
  MR_Box Key_5,
  MR_Word * Values_6)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Box conv0_Values_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__map__lookup_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (MultiMap_4), Key_5, &conv0_Values_6);
    *Values_6 = ((MR_Word) (conv0_Values_6));
  }
}

MR_Word MR_CALL 
mercury__multi_map__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap_4,
  MR_Box Key_5)
{
  {
    MR_Word Value_6;
    MR_Word TypeInfo_10_13;
    MR_Box conv0_Value_6;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__map__lookup_3_p_0(TypeInfo_for_K_7, TypeInfo_10_13, (MR_Word) (MultiMap_4), Key_5, &conv0_Value_6);
    Value_6 = ((MR_Word) (conv0_Value_6));
    return Value_6;
  }
}

void MR_CALL 
mercury__multi_map__nondet_search_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MultiMap_4,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_11;
    MR_Word Values_7;
    MR_Box conv0_Values_7;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_V_9));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_8, TypeInfo_11_11, (MR_Word) (MultiMap_4), Key_5, &conv0_Values_7);
    if (succeeded)
    {
      Values_7 = ((MR_Word) (conv0_Values_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__list__member_2_p_1(TypeInfo_for_V_9, Value_6, Values_7, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__multi_map__search_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MultiMap_4,
  MR_Box Key_5,
  MR_Word * Values_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_10_10;
    MR_Box conv0_Values_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (MultiMap_4), Key_5, &conv0_Values_6);
    if (succeeded)
    {
      *Values_6 = ((MR_Word) (conv0_Values_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s * env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) ((env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7));
    mercury__multi_map__member_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s * env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) (env_ptr_arg);

    mercury__list__member_2_p_1((env_ptr)->mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9, (env_ptr)->mercury__multi_map__member_3_p_0_env_0__Value_6, (env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7, (env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont, (env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__multi_map__member_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MultiMap_4,
  MR_Box * Key_5,
  MR_Box * Value_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s env;

    (env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9 = TypeInfo_for_V_9;
    (env).mercury__multi_map__member_3_p_0_env_0__Value_6 = Value_6;
    (env).mercury__multi_map__member_3_p_0_env_0__cont = cont;
    (env).mercury__multi_map__member_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word TypeInfo_11_11;

      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) ((env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
      }
      mercury__tree234__member_3_p_0(TypeInfo_for_K_8, TypeInfo_11_11, (MR_Word) (MultiMap_4), Key_5, &(env).mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__member_3_p_0_2, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__multi_map__contains_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for__V_7,
  MR_Word MultiMap_3,
  MR_Box Key_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_9_9;
    MR_Box conv0_Var_5;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for__V_7));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_9_9, (MR_Word) (MultiMap_3), Key_4, &conv0_Var_5);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__multi_map__is_empty_1_p_0(
  MR_Word TypeInfo_for__K_3,
  MR_Word TypeInfo_for__V_4,
  MR_Word MultiMap_2)
{
  {
    MR_bool succeeded = (MultiMap_2 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

void MR_CALL 
mercury__multi_map__init_1_p_0(
  MR_Word TypeInfo_for__K_3,
  MR_Word TypeInfo_for__V_4,
  MR_Word * MultiMap_2)
{
  *MultiMap_2 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__multi_map__init_0_f_0(
  MR_Word TypeInfo_for__K_3,
  MR_Word TypeInfo_for__V_4)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__multi_map____Compare____multi_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__multi_map__init(void)
{
}

void mercury__multi_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__multi_map__multi_map__type_ctor_info_multi_map_2);
}

void mercury__multi_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__multi_map__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module multi_map.
