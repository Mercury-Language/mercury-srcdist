/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version rotd-2022-02-06
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
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
mercury__multi_map__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_95_49_3_p_in__list_0(
  MR_Box Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_35);

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
  UINT8_C(18),
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
  NULL,

};

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

    mercury__multi_map__add_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_4, V_5, STATE_VARIABLE_MultiMap_0_7, STATE_VARIABLE_MultiMap_8);
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
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_15;
          MR_Integer Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_11, HeadVar__3_3, &Var_15);
          mercury__multi_map__accumulate_length_3_p_0(Var_55, Var_10, Var_15, &Var_16);
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
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Integer Var_27;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer NVs_87;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_22, HeadVar__3_3, &Var_27);
          mercury__list__length_acc_3_p_0(Var_55, Var_19, (MR_Integer) 0, &NVs_87);
          Var_28 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) NVs_87);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_23, Var_28, &Var_29);
          mercury__multi_map__accumulate_length_3_p_0(Var_55, Var_21, Var_29, &Var_30);
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
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Integer Var_44;
          MR_Integer Var_45;
          MR_Integer Var_46;
          MR_Integer Var_47;
          MR_Integer Var_48;
          MR_Integer Var_49;
          MR_Integer NVs_60;
          MR_Integer NVs_69;
          MR_Integer NVs_78;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Integer next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_38, HeadVar__3_3, &Var_44);
          mercury__list__length_acc_3_p_0(Var_55, Var_33, (MR_Integer) 0, &NVs_60);
          Var_45 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) NVs_60);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_39, Var_45, &Var_46);
          mercury__list__length_acc_3_p_0(Var_55, Var_35, (MR_Integer) 0, &NVs_69);
          Var_47 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) NVs_69);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(Var_55, Var_40, Var_47, &Var_48);
          mercury__list__length_acc_3_p_0(Var_55, Var_37, (MR_Integer) 0, &NVs_78);
          Var_49 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) NVs_78);
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
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word Values_4;

    mercury__multi_map__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, MultiMap_3, &Values_4);
    return Values_4;
  }
}

void MR_CALL 
mercury__multi_map__values_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word MultiMap_3,
  MR_Word * Values_4)
{
  {
    MR_Word TypeInfo_10_22;
    MR_Word ValueLists_5;
    MR_Word Var_18;
    MR_Word conv0_ValueLists_5;

    {
      TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_22, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_22, 1) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__tree234__values_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_10_22, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_ValueLists_5);
    ValueLists_5 = (MR_Word) (conv0_ValueLists_5);
    mercury__list__reverse_2_p_0(TypeInfo_10_22, ValueLists_5, &Var_18);
    mercury__list__condense_acc_3_p_0(TypeInfo_for_V_7, Var_18, (MR_Word) ((MR_Unsigned) 0U), Values_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__keys_as_set_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3)
{
  {
    MR_Word KeySet_4;

    mercury__multi_map__keys_as_set_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, &KeySet_4);
    return KeySet_4;
  }
}

void MR_CALL 
mercury__multi_map__keys_as_set_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word Map_3,
  MR_Word * KeySet_4)
{
  {
    MR_Word TypeInfo_8_11;
    MR_Word Keys_5;
    MR_Word Var_21;

    {
      TypeInfo_8_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_11, 1) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_8_11, (MR_Word) (Map_3), (MR_Word) ((MR_Unsigned) 0U), &Keys_5);
    if ((Keys_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_22 = (MR_hl_field(MR_mktag(1), Keys_5, (MR_Integer) 0));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Keys_5, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_K_6, Var_22, Var_23, &Var_21);
    }
    *KeySet_4 = (MR_Word) (Var_21);
  }
}

void MR_CALL 
mercury__multi_map__sorted_keys_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Word * Keys_4)
{
  {
    MR_Word TypeInfo_8_8;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (Map_3), (MR_Word) ((MR_Unsigned) 0U), Keys_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__sorted_keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3)
{
  {
    MR_Word Keys_4;
    MR_Word TypeInfo_8_8;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (Map_3), (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
    return Keys_4;
  }
}

void MR_CALL 
mercury__multi_map__keys_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3,
  MR_Word * Keys_4)
{
  {
    MR_Word TypeInfo_8_8;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_V_6));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_8_8, (MR_Word) (MultiMap_3), (MR_Word) ((MR_Unsigned) 0U), Keys_4);
  }
}

MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MultiMap_3)
{
  {
    MR_Word Keys_4;
    MR_Word TypeInfo_8_10;

    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_V_6));
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
    MR_Word Var_17;
    MR_Word conv0_ValueLists_10;

    {
      TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_21, 1) = ((MR_Box) (TypeInfo_for_V_12));
    }
    mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_11, TypeInfo_10_21, HeadVar__1_1, (MR_Word) (MultiMap_2), &conv0_ValueLists_10);
    ValueLists_10 = (MR_Word) (conv0_ValueLists_10);
    mercury__list__reverse_2_p_0(TypeInfo_10_21, ValueLists_10, &Var_17);
    mercury__list__condense_acc_3_p_0(TypeInfo_for_V_12, Var_17, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
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
    MR_Word Var_14;
    MR_Word conv0_Var_14;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, Keys_4, (MR_Word) (Values_5), &conv0_Var_14);
    Var_14 = (MR_Word) (conv0_Var_14);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (Var_14), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_MultiMap_6);
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
    MR_Word Var_17;
    MR_Word conv0_Var_17;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_10_13, Keys_4, (MR_Word) (Values_5), &conv0_Var_17);
    Var_17 = (MR_Word) (conv0_Var_17);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_10_13, (MR_Word) (Var_17), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_MultiMap_6);
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

        mercury__multi_map__add_4_p_0(TypeInfo_for_K_31, TypeInfo_for_V_32, Var_34, Value_24, STATE_VARIABLE_MultiMap_0_3, &STATE_VARIABLE_MultiMap_29_29);
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Box K_28 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      MR_Box V_29 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__multi_map__add_4_p_0(Var_24, Var_25, K_28, V_29, HeadVar__3_3, &Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
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
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_11, HeadVar__3_3, &Var_15);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, Var_9, Var_10, Var_15, &Var_16);
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
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_22, HeadVar__3_3, &Var_27);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, Var_18, Var_19, Var_27, &Var_28);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_23, Var_28, &Var_29);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, Var_20, Var_21, Var_29, &Var_30);
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
          MR_Word TypeInfo_21_91;
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
          MR_Word KeyValues_67;
          MR_Word Var_73;
          MR_Word KeyValues_82;
          MR_Word Var_88;
          MR_Word conv0_Var_73;
          MR_Word conv1_Var_45;
          MR_Word conv2_Var_88;
          MR_Word conv3_Var_47;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_38, HeadVar__3_3, &Var_44);
          {
            TypeInfo_21_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 1) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), TypeInfo_21_91, 2) = ((MR_Box) (Var_61));
          }
          KeyValues_67 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(Var_32, Var_33);
          conv0_Var_73 = mercury__cord__from_list_1_f_0(TypeInfo_21_91, (MR_Word) (KeyValues_67));
          Var_73 = (MR_Word) (conv0_Var_73);
          conv1_Var_45 = mercury__cord__f_43_43_2_f_0(TypeInfo_21_91, (MR_Word) (Var_44), (MR_Word) (Var_73));
          Var_45 = (MR_Word) (conv1_Var_45);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_39, Var_45, &Var_46);
          KeyValues_82 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(Var_34, Var_35);
          conv2_Var_88 = mercury__cord__from_list_1_f_0(TypeInfo_21_91, (MR_Word) (KeyValues_82));
          Var_88 = (MR_Word) (conv2_Var_88);
          conv3_Var_47 = mercury__cord__f_43_43_2_f_0(TypeInfo_21_91, (MR_Word) (Var_46), (MR_Word) (Var_88));
          Var_47 = (MR_Word) (conv3_Var_47);
          mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_60, Var_61, Var_40, Var_47, &Var_48);
          mercury__multi_map__to_flat_assoc_list_acc_4_p_0(Var_60, Var_61, Var_36, Var_37, Var_48, &Var_49);
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
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg9_34;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = Var_17;
        MR_hl_field(MR_mktag(0), Var_8, 1) = Var_6;
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg9_34 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      mercury__multi_map__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_95_49_3_p_in__list_0(Var_17, Var_7, AddrSCCcallarg9_34);
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__multi_map__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_95_49_3_p_in__list_0(
  MR_Box Var_17,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_35)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_35 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg9_34;
      MR_Word HeadVar__3_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_35;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = Var_17;
        MR_hl_field(MR_mktag(0), Var_8, 1) = Var_6;
      }
      {
        HeadVar__3_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_36, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_36, 1) = NULL;
      }
      AddrSCCcallarg9_34 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_36, (MR_Integer) 1)));
      *AddrOfHeadVar__3_35 = HeadVar__3_36;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_35 = AddrSCCcallarg9_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_35 = next_value_of_AddrOfHeadVar__3_35;
      continue;
    }
    break;
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
    MR_Word Var_14;
    MR_Word Var_24;
    MR_Word conv0_Var_24;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    Var_14 = (MR_Word) (KeySet_5);
    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_10_10, Var_14, (MR_Word) (MultiMap0_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_24);
    Var_24 = (MR_Word) (conv0_Var_24);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_10_10, (MR_Word) (Var_24), &conv1_MultiMap_6);
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
    MR_Word Var_17;
    MR_Word Var_27;
    MR_Word conv0_Var_27;
    MR_Word conv1_MultiMap_6;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_V_8));
    }
    Var_17 = (MR_Word) (KeySet_5);
    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_10_13, Var_17, (MR_Word) (MultiMap0_4), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_27);
    Var_27 = (MR_Word) (conv0_Var_27);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_10_13, (MR_Word) (Var_27), &conv1_MultiMap_6);
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
    MR_Word Var_21;
    MR_Box conv1_Key_6;
    MR_Word conv0_MultiMap_8;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (Values_7), MultiMap0_5, &conv1_Key_6, &conv0_MultiMap_8, &Var_21);
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
    MR_Word Var_21;
    MR_Box conv1_Key_6;
    MR_Word conv0_MultiMap_8;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (Values_7), MultiMap0_5, &conv1_Key_6, &conv0_MultiMap_8, &Var_21);
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
        MR_Word Var_33;
        MR_Word conv1_STATE_VARIABLE_MultiMap_13;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, (MR_Word) (STATE_VARIABLE_MultiMap_0_12), Key_5, &conv1_STATE_VARIABLE_MultiMap_13, &Var_33);
        *STATE_VARIABLE_MultiMap_13 = (MR_Word) (conv1_STATE_VARIABLE_MultiMap_13);
      }
      else
      {
        MR_Word conv2_STATE_VARIABLE_MultiMap_13;

        mercury__map__det_update_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, Key_5, ((MR_Box) (Values_9)), (MR_Word) (STATE_VARIABLE_MultiMap_0_12), &conv2_STATE_VARIABLE_MultiMap_13);
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
    MR_Word Var_19;
    MR_Word conv0_STATE_VARIABLE_MultiMap_7;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_12_12, (MR_Word) (STATE_VARIABLE_MultiMap_0_6), Key_4, &conv0_STATE_VARIABLE_MultiMap_7, &Var_19);
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
    MR_Word Var_24;
    MR_Word conv0_STATE_VARIABLE_MultiMap_7;

    {
      TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_17, 1) = ((MR_Box) (TypeInfo_for_V_10));
    }
    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_12_17, (MR_Word) (STATE_VARIABLE_MultiMap_0_6), Key_5, &conv0_STATE_VARIABLE_MultiMap_7, &Var_24);
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
  mercury__multi_map__add_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_11, Key_6, Value_5, STATE_VARIABLE_MultiMap_0_8, STATE_VARIABLE_MultiMap_9);
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

    mercury__multi_map__add_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_7, Value_6, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__reverse_add_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_K_12,
  MR_Box Value_5,
  MR_Box Key_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  mercury__multi_map__add_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_11, Key_6, Value_5, STATE_VARIABLE_MultiMap_0_8, STATE_VARIABLE_MultiMap_9);
}

MR_Word MR_CALL 
mercury__multi_map__reverse_add_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Box Value_6,
  MR_Box Key_7)
{
  {
    MR_Word STATE_VARIABLE_MultiMap_9;

    mercury__multi_map__add_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_7, Value_6, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__set_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_MultiMap_0_8,
  MR_Word * STATE_VARIABLE_MultiMap_9)
{
  mercury__multi_map__add_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_5, Value_6, STATE_VARIABLE_MultiMap_0_8, STATE_VARIABLE_MultiMap_9);
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

    mercury__multi_map__add_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
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

    mercury__multi_map__add_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_MultiMap_0_8, &STATE_VARIABLE_MultiMap_9);
    return STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__add_4_p_0(
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
      mercury__map__det_update_4_p_0(TypeInfo_for_K_16, TypeInfo_19_19, Key_5, ((MR_Box) (Values_9)), (MR_Word) (STATE_VARIABLE_MultiMap_0_10), &conv1_STATE_VARIABLE_MultiMap_11);
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
