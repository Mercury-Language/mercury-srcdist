/*
** Automatically generated from `set_ordlist.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module set_ordlist. */
/* :- implementation. */

/*
INIT mercury__set_ordlist__init
ENDINIT
*/

#include "set_ordlist.mih"


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




static const MR_Integer mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_ordlist__list__pti_list_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1;

static MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0_10001(
  MR_Box mercury__set_ordlist__wrapper_arg_1,
  MR_Box mercury__set_ordlist__wrapper_arg_2,
  MR_Box mercury__set_ordlist__wrapper_arg_3);

static void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0_10001(
  MR_Box mercury__set_ordlist__wrapper_arg_1,
  MR_Box * mercury__set_ordlist__wrapper_arg_2,
  MR_Box mercury__set_ordlist__wrapper_arg_3,
  MR_Box mercury__set_ordlist__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__set_ordlist__intersection_and_differences_loop_8_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_45,
  MR_Word mercury__set_ordlist__As_9,
  MR_Word mercury__set_ordlist__Bs_10,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_InAandB_24,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_OnlyInA_26,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_OnlyInB_28);

static void MR_CALL 
mercury__set_ordlist__divide_by_set_loop_6_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_53,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_RevTrue_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_RevFalse_6);

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_ordlist__Var_18,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Box mercury__set_ordlist__HeadVar__3_3,
  MR_Box * mercury__set_ordlist__HeadVar__4_4);

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__set_ordlist__Var_16,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3);


static /* final */ const MR_Box mercury__set_ordlist_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_ordlist_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_ordlist_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_ordlist_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_ordlist_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_ordlist_scalar_common_2[0])),
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



static const MR_Integer mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_ordlist__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_NotagFunctorDesc mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 = {
  (MR_String) "sol",
  (MR_PseudoTypeInfo) &mercury__set_ordlist__list__pti_list_1__pseudo_1,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__set_ordlist____Unify____set_ordlist_1_0_10001)),
  ((MR_Box) (mercury__set_ordlist____Compare____set_ordlist_1_0_10001)),
  (MR_String) "set_ordlist",
  (MR_String) "set_ordlist",
  {     &mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 },
  {     &mercury__set_ordlist__set_ordlist__notag_functor_desc_set_ordlist_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__set_ordlist__set_ordlist__functor_number_map_set_ordlist_1
};

static MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0_10001(
  MR_Box mercury__set_ordlist__wrapper_arg_1,
  MR_Box mercury__set_ordlist__wrapper_arg_2,
  MR_Box mercury__set_ordlist__wrapper_arg_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(((MR_Word) mercury__set_ordlist__wrapper_arg_1), ((MR_Word) mercury__set_ordlist__wrapper_arg_2), ((MR_Word) mercury__set_ordlist__wrapper_arg_3));
    }
    return mercury__set_ordlist__succeeded;
  }
}

static void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0_10001(
  MR_Box mercury__set_ordlist__wrapper_arg_1,
  MR_Box * mercury__set_ordlist__wrapper_arg_2,
  MR_Box mercury__set_ordlist__wrapper_arg_3,
  MR_Box mercury__set_ordlist__wrapper_arg_4)
{
  {
    MR_Word mercury__set_ordlist__conv0_HeadVar__1_1;

    {
      mercury__set_ordlist____Compare____set_ordlist_1_0(((MR_Word) mercury__set_ordlist__wrapper_arg_1), &mercury__set_ordlist__conv0_HeadVar__1_1, ((MR_Word) mercury__set_ordlist__wrapper_arg_3), ((MR_Word) mercury__set_ordlist__wrapper_arg_4));
    }
    *mercury__set_ordlist__wrapper_arg_2 = ((MR_Box) (mercury__set_ordlist__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set_ordlist__Var_7,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__List0_3,
  MR_Word * mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_4;
    MR_Integer mercury__set_ordlist__V_5_10;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, (MR_Word) mercury__set_ordlist__List0_3, (MR_Integer) 0, &mercury__set_ordlist__V_5_10);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set_ordlist__Var_7, mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_5_10, mercury__set_ordlist__List0_3, &mercury__set_ordlist__List_4);
    }
    *mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__List_4;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set_ordlist__Var_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_8,
  MR_Word mercury__set_ordlist__E_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_9;
    MR_Word mercury__set_ordlist__L_14 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_8, ((MR_Box) (mercury__set_ordlist__E_1)), (MR_Word) mercury__set_ordlist__L_14, &mercury__set_ordlist__Var_9);
    }
    mercury__set_ordlist__succeeded = ((MR_Integer) 1 == mercury__set_ordlist__Var_9);
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set_ordlist__Var_7,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__S_3,
  MR_Word mercury__set_ordlist__E_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_13;
    MR_Word mercury__set_ordlist__L_17 = (MR_Word) mercury__set_ordlist__S_3;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, ((MR_Box) (mercury__set_ordlist__E_4)), (MR_Word) mercury__set_ordlist__L_17, &mercury__set_ordlist__Var_13);
    }
    mercury__set_ordlist__succeeded = ((MR_Integer) 1 == mercury__set_ordlist__Var_13);
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__NewItem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List0_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__List_6;
    MR_Word mercury__set_ordlist__conv0_List_6;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, (MR_Word) mercury__set_ordlist__List0_5, ((MR_Box) (mercury__set_ordlist__NewItem_4)), &mercury__set_ordlist__conv0_List_6);
    }
    mercury__set_ordlist__List_6 = (MR_Word) mercury__set_ordlist__conv0_List_6;
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__List_6;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_13,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_11,
  MR_Word mercury__set_ordlist__List0_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__V_5_16;
    MR_Word mercury__set_ordlist__Set0_23;
    MR_Word mercury__set_ordlist__Set1_24;
    MR_Word mercury__set_ordlist__Set_25;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, (MR_Word) mercury__set_ordlist__List0_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_16);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set_ordlist__Var_13, mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__V_5_16, mercury__set_ordlist__List0_4, &mercury__set_ordlist__Set0_23);
    }
    mercury__set_ordlist__Set1_24 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set_ordlist__Var_13, mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__Set0_23, mercury__set_ordlist__Set1_24, &mercury__set_ordlist__Set_25);
    }
    *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Set_25;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_14,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_12,
  MR_Word mercury__set_ordlist__Elem_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Xs_15;
    MR_Word mercury__set_ordlist__Ys_16;
    MR_Word mercury__set_ordlist__Diff_17;
    MR_Word mercury__set_ordlist__conv0_Diff_17;

    {
      mercury__set_ordlist__Ys_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_16, 0) = ((MR_Box) (mercury__set_ordlist__Elem_4));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_16, 1) = ((MR_Box) (mercury__set_ordlist__Var_11));
    }
    mercury__set_ordlist__Xs_15 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_12, (MR_Word) mercury__set_ordlist__Xs_15, (MR_Word) mercury__set_ordlist__Ys_16, &mercury__set_ordlist__conv0_Diff_17);
    }
    mercury__set_ordlist__Diff_17 = (MR_Word) mercury__set_ordlist__conv0_Diff_17;
    *mercury__set_ordlist__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set_ordlist__Diff_17;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_13,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_11,
  MR_Word mercury__set_ordlist__D_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__V_5_16;
    MR_Word mercury__set_ordlist__Xs_23;
    MR_Word mercury__set_ordlist__Ys_24;
    MR_Word mercury__set_ordlist__Diff_25;
    MR_Word mercury__set_ordlist__conv0_Diff_25;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, (MR_Word) mercury__set_ordlist__D_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_16);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set_ordlist__Var_13, mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__V_5_16, mercury__set_ordlist__D_4, &mercury__set_ordlist__Ys_24);
    }
    mercury__set_ordlist__Xs_23 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, (MR_Word) mercury__set_ordlist__Xs_23, (MR_Word) mercury__set_ordlist__Ys_24, &mercury__set_ordlist__conv0_Diff_25);
    }
    mercury__set_ordlist__Diff_25 = (MR_Word) mercury__set_ordlist__conv0_Diff_25;
    *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Diff_25;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__Elem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Set_6;
    MR_Word mercury__set_ordlist__conv0_Set_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__delete_first_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, (MR_Word) mercury__set_ordlist__Set0_5, ((MR_Box) (mercury__set_ordlist__Elem_4)), &mercury__set_ordlist__conv0_Set_6);
    }
    if (mercury__set_ordlist__succeeded)
      {
        mercury__set_ordlist__Set_6 = (MR_Word) mercury__set_ordlist__conv0_Set_6;
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Set_6;
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_10,
  MR_Word mercury__set_ordlist__Elems_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__ElemSet_6;
    MR_Integer mercury__set_ordlist__V_5_19;
    MR_Word mercury__set_ordlist__Xs_28;
    MR_Word mercury__set_ordlist__Intersection_30;
    MR_Word mercury__set_ordlist__Xs_31;
    MR_Word mercury__set_ordlist__Ys_32;
    MR_Word mercury__set_ordlist__Diff_33;
    MR_Word mercury__set_ordlist__conv0_Intersection_30;
    MR_Word mercury__set_ordlist__conv1_Diff_33;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, (MR_Word) mercury__set_ordlist__Elems_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_19);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__V_5_19, (MR_Word) mercury__set_ordlist__Elems_4, &mercury__set_ordlist__conv0_Intersection_30);
    }
    mercury__set_ordlist__Intersection_30 = (MR_Word) mercury__set_ordlist__conv0_Intersection_30;
    mercury__set_ordlist__ElemSet_6 = (MR_Word) mercury__set_ordlist__Intersection_30;
    if ((mercury__set_ordlist__Intersection_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__set_ordlist__Elem_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Intersection_30, (MR_Integer) 0)));
        MR_Word mercury__set_ordlist__Elems_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Intersection_30, (MR_Integer) 1)));

        {
          mercury__set_ordlist__succeeded = mercury__set_ordlist__no_dups_2_p_0(mercury__set_ordlist__TypeInfo_for_T_10, ((MR_Box) (mercury__set_ordlist__Elem_15)), (MR_Word) mercury__set_ordlist__Elems_16);
        }
      }
    if (mercury__set_ordlist__succeeded)
      {
        mercury__set_ordlist__Xs_28 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
        {
          mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_10, (MR_Word) mercury__set_ordlist__Xs_28, (MR_Word) mercury__set_ordlist__Intersection_30, (MR_Word) mercury__set_ordlist__Intersection_30);
        }
        if (mercury__set_ordlist__succeeded)
          {
            mercury__set_ordlist__Xs_31 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
            mercury__set_ordlist__Ys_32 = (MR_Word) mercury__set_ordlist__ElemSet_6;
            {
              mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, (MR_Word) mercury__set_ordlist__Xs_31, (MR_Word) mercury__set_ordlist__Ys_32, &mercury__set_ordlist__conv1_Diff_33);
            }
            mercury__set_ordlist__Diff_33 = (MR_Word) mercury__set_ordlist__conv1_Diff_33;
            *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Diff_33;
            mercury__set_ordlist__succeeded = MR_TRUE;
          }
      }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Set1_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Set_6;

    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set_ordlist__Var_9, mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Set0_4, mercury__set_ordlist__Set1_5, &mercury__set_ordlist__Set_6);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Set_6;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set_ordlist__Var_7,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__ListofSets_3,
  MR_Word * mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__conv0_Set_4;

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, (MR_Word) mercury__set_ordlist__ListofSets_3, (MR_Word) mercury__set_ordlist__Set0_10, &mercury__set_ordlist__conv0_Set_4);
    }
    *mercury__set_ordlist__Set_4 = (MR_Word) mercury__set_ordlist__conv0_Set_4;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Intersection_6;
    MR_Word mercury__set_ordlist__conv0_Intersection_6;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, (MR_Word) mercury__set_ordlist__Xs_4, (MR_Word) mercury__set_ordlist__Ys_5, &mercury__set_ordlist__conv0_Intersection_6);
    }
    mercury__set_ordlist__Intersection_6 = (MR_Word) mercury__set_ordlist__conv0_Intersection_6;
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Intersection_6;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_49_95_49_3_p_1(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Intersection_6 = (MR_Word) mercury__set_ordlist__HeadVar__3_3;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_7, (MR_Word) mercury__set_ordlist__Xs_4, (MR_Word) mercury__set_ordlist__Ys_5, (MR_Word) mercury__set_ordlist__Intersection_6);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set_ordlist__Var_7,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__ListofSets_3,
  MR_Word * mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__conv0_Set_4;

    {
      mercury__set_ordlist__conv0_Set_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_5, (MR_Word) mercury__set_ordlist__ListofSets_3);
    }
    *mercury__set_ordlist__Set_4 = (MR_Word) mercury__set_ordlist__conv0_Set_4;
  }
}

void MR_CALL 
mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set_ordlist__Var_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Diff_6;
    MR_Word mercury__set_ordlist__conv0_Diff_6;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, (MR_Word) mercury__set_ordlist__Xs_4, (MR_Word) mercury__set_ordlist__Ys_5, &mercury__set_ordlist__conv0_Diff_6);
    }
    mercury__set_ordlist__Diff_6 = (MR_Word) mercury__set_ordlist__conv0_Diff_6;
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Diff_6;
  }
}

void MR_CALL 
mercury__set_ordlist____Compare____set_ordlist_1_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_8,
  MR_Word * mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__CastX_6 = (MR_Integer) mercury__set_ordlist__HeadVar__2_2;
    MR_Integer mercury__set_ordlist__CastY_7 = (MR_Integer) mercury__set_ordlist__HeadVar__3_3;

    mercury__set_ordlist__succeeded = (mercury__set_ordlist__CastX_6 == mercury__set_ordlist__CastY_7);
    if (mercury__set_ordlist__succeeded)
      *mercury__set_ordlist__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__set_ordlist__ArgX1_4 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
        MR_Word mercury__set_ordlist__ArgY1_5 = (MR_Word) mercury__set_ordlist__HeadVar__3_3;

        {
          mercury__list____Compare____list_1_0(mercury__set_ordlist__TypeInfo_for_T_8, mercury__set_ordlist__HeadVar__1_1, mercury__set_ordlist__ArgX1_4, mercury__set_ordlist__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__sort_no_dups_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__List_3,
  MR_Word * mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_4;
    MR_Integer mercury__set_ordlist__V_5_10;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__List_3, (MR_Integer) 0, &mercury__set_ordlist__V_5_10);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__V_5_10, mercury__set_ordlist__List_3, &mercury__set_ordlist__Set_4);
    }
    *mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__Set_4;
    if ((mercury__set_ordlist__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__set_ordlist__Elem_5 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Set_4, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Set_4, (MR_Integer) 1)));

        {
          mercury__set_ordlist__succeeded = mercury__set_ordlist__no_dups_2_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Elem_5, mercury__set_ordlist__Elems_6);
        }
      }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__intersection_and_differences_5_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_22,
  MR_Word mercury__set_ordlist__SetA_6,
  MR_Word mercury__set_ordlist__SetB_7,
  MR_Word * mercury__set_ordlist__InAandB_8,
  MR_Word * mercury__set_ordlist__OnlyInA_9,
  MR_Word * mercury__set_ordlist__OnlyInB_10)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__ListA_11 = (MR_Word) mercury__set_ordlist__SetA_6;
    MR_Word mercury__set_ordlist__ListB_12 = (MR_Word) mercury__set_ordlist__SetB_7;
    MR_Word mercury__set_ordlist__CordInAandB_13;
    MR_Word mercury__set_ordlist__CordOnlyInA_14;
    MR_Word mercury__set_ordlist__CordOnlyInB_15;
    MR_Word mercury__set_ordlist__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Var_19;
    MR_Word mercury__set_ordlist__Var_20;
    MR_Word mercury__set_ordlist__Var_21;

    {
      mercury__set_ordlist__intersection_and_differences_loop_8_p_0(mercury__set_ordlist__TypeInfo_for_T_22, mercury__set_ordlist__ListA_11, mercury__set_ordlist__ListB_12, mercury__set_ordlist__Var_16, &mercury__set_ordlist__CordInAandB_13, mercury__set_ordlist__Var_17, &mercury__set_ordlist__CordOnlyInA_14, mercury__set_ordlist__Var_18, &mercury__set_ordlist__CordOnlyInB_15);
    }
    {
      mercury__set_ordlist__Var_19 = mercury__cord__to_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_22, mercury__set_ordlist__CordInAandB_13);
    }
    *mercury__set_ordlist__InAandB_8 = (MR_Word) mercury__set_ordlist__Var_19;
    {
      mercury__set_ordlist__Var_20 = mercury__cord__to_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_22, mercury__set_ordlist__CordOnlyInA_14);
    }
    *mercury__set_ordlist__OnlyInA_9 = (MR_Word) mercury__set_ordlist__Var_20;
    {
      mercury__set_ordlist__Var_21 = mercury__cord__to_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_22, mercury__set_ordlist__CordOnlyInB_15);
    }
    *mercury__set_ordlist__OnlyInB_10 = (MR_Word) mercury__set_ordlist__Var_21;
  }
}

static void MR_CALL 
mercury__set_ordlist__intersection_and_differences_loop_8_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_45,
  MR_Word mercury__set_ordlist__As_9,
  MR_Word mercury__set_ordlist__Bs_10,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_InAandB_24,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_OnlyInA_26,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_OnlyInB_28)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__As_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__set_ordlist__Bs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *mercury__set_ordlist__STATE_VARIABLE_InAandB_24 = mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23;
              *mercury__set_ordlist__STATE_VARIABLE_OnlyInA_26 = mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25;
              *mercury__set_ordlist__STATE_VARIABLE_OnlyInB_28 = mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27;
            }
          else
            {
              MR_Word mercury__set_ordlist__Var_44;

              {
                mercury__set_ordlist__Var_44 = mercury__cord__from_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__Bs_10);
              }
              {
                *mercury__set_ordlist__STATE_VARIABLE_OnlyInB_28 = mercury__cord__f_43_43_2_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27, mercury__set_ordlist__Var_44);
              }
              *mercury__set_ordlist__STATE_VARIABLE_InAandB_24 = mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23;
              *mercury__set_ordlist__STATE_VARIABLE_OnlyInA_26 = mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25;
            }
        else
          {
            MR_Word mercury__set_ordlist__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__As_9, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__Var_47 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__As_9, (MR_Integer) 0));

            if ((mercury__set_ordlist__Bs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__set_ordlist__Var_42;

                {
                  mercury__set_ordlist__Var_42 = mercury__cord__from_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__As_9);
                }
                {
                  *mercury__set_ordlist__STATE_VARIABLE_OnlyInA_26 = mercury__cord__f_43_43_2_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25, mercury__set_ordlist__Var_42);
                }
                *mercury__set_ordlist__STATE_VARIABLE_InAandB_24 = mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23;
                *mercury__set_ordlist__STATE_VARIABLE_OnlyInB_28 = mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27;
              }
            else
              {
                MR_Box mercury__set_ordlist__HeadB_20 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Bs_10, (MR_Integer) 0));
                MR_Word mercury__set_ordlist__TailBs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Bs_10, (MR_Integer) 1)));
                MR_Word mercury__set_ordlist__Cmp_22;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_45, &mercury__set_ordlist__Cmp_22, mercury__set_ordlist__Var_47, mercury__set_ordlist__HeadB_20);
                }
                switch (mercury__set_ordlist__Cmp_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInA_33_33;

                      {
                        mercury__set_ordlist__STATE_VARIABLE_OnlyInA_33_33 = mercury__cord__snoc_2_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25, mercury__set_ordlist__Var_47);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_As_9 = mercury__set_ordlist__Var_46;
                        MR_Word mercury__set_ordlist__next_value_of_STATE_VARIABLE_OnlyInA_0_25 = mercury__set_ordlist__STATE_VARIABLE_OnlyInA_33_33;

                        mercury__set_ordlist__STATE_VARIABLE_OnlyInA_0_25 = mercury__set_ordlist__next_value_of_STATE_VARIABLE_OnlyInA_0_25;
                        mercury__set_ordlist__As_9 = mercury__set_ordlist__next_value_of_As_9;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__set_ordlist__STATE_VARIABLE_InAandB_37_37;

                      {
                        mercury__set_ordlist__STATE_VARIABLE_InAandB_37_37 = mercury__cord__snoc_2_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23, mercury__set_ordlist__Var_47);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_As_9 = mercury__set_ordlist__Var_46;
                        MR_Word mercury__set_ordlist__next_value_of_Bs_10 = mercury__set_ordlist__TailBs_21;
                        MR_Word mercury__set_ordlist__next_value_of_STATE_VARIABLE_InAandB_0_23 = mercury__set_ordlist__STATE_VARIABLE_InAandB_37_37;

                        mercury__set_ordlist__STATE_VARIABLE_InAandB_0_23 = mercury__set_ordlist__next_value_of_STATE_VARIABLE_InAandB_0_23;
                        mercury__set_ordlist__Bs_10 = mercury__set_ordlist__next_value_of_Bs_10;
                        mercury__set_ordlist__As_9 = mercury__set_ordlist__next_value_of_As_9;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__set_ordlist__STATE_VARIABLE_OnlyInB_29_29;

                      {
                        mercury__set_ordlist__STATE_VARIABLE_OnlyInB_29_29 = mercury__cord__snoc_2_f_0(mercury__set_ordlist__TypeInfo_for_T_45, mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27, mercury__set_ordlist__HeadB_20);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_Bs_10 = mercury__set_ordlist__TailBs_21;
                        MR_Word mercury__set_ordlist__next_value_of_STATE_VARIABLE_OnlyInB_0_27 = mercury__set_ordlist__STATE_VARIABLE_OnlyInB_29_29;

                        mercury__set_ordlist__STATE_VARIABLE_OnlyInB_0_27 = mercury__set_ordlist__next_value_of_STATE_VARIABLE_OnlyInB_0_27;
                        mercury__set_ordlist__Bs_10 = mercury__set_ordlist__next_value_of_Bs_10;
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

void MR_CALL 
mercury__set_ordlist__divide_by_set_4_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_13,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3,
  MR_Word * mercury__set_ordlist__HeadVar__4_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__DivideBySet_5 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Set_6 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__TruePart_7;
    MR_Word mercury__set_ordlist__FalsePart_8;
    MR_Word mercury__set_ordlist__RevTruePart_9;
    MR_Word mercury__set_ordlist__RevFalsePart_10;
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__divide_by_set_loop_6_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__DivideBySet_5, mercury__set_ordlist__Set_6, mercury__set_ordlist__Var_11, &mercury__set_ordlist__RevTruePart_9, mercury__set_ordlist__Var_12, &mercury__set_ordlist__RevFalsePart_10);
    }
    {
      mercury__list__reverse_2_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__RevTruePart_9, &mercury__set_ordlist__TruePart_7);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__TruePart_7;
    {
      mercury__list__reverse_2_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__RevFalsePart_10, &mercury__set_ordlist__FalsePart_8);
    }
    *mercury__set_ordlist__HeadVar__4_4 = (MR_Word) mercury__set_ordlist__FalsePart_8;
  }
}

static void MR_CALL 
mercury__set_ordlist__divide_by_set_loop_6_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_53,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_RevTrue_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_RevFalse_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *mercury__set_ordlist__STATE_VARIABLE_RevFalse_6 = mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5;
              *mercury__set_ordlist__STATE_VARIABLE_RevTrue_4 = mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3;
            }
          else
            {
              MR_Word mercury__set_ordlist__Var_21;

              {
                mercury__list__reverse_2_p_0(mercury__set_ordlist__TypeInfo_for_T1_53, mercury__set_ordlist__HeadVar__2_2, &mercury__set_ordlist__Var_21);
              }
              {
                mercury__list__append_3_p_1(mercury__set_ordlist__TypeInfo_for_T1_53, mercury__set_ordlist__Var_21, mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5, mercury__set_ordlist__STATE_VARIABLE_RevFalse_6);
              }
              *mercury__set_ordlist__STATE_VARIABLE_RevTrue_4 = mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3;
            }
        else
          {
            MR_Word mercury__set_ordlist__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__Var_55 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *mercury__set_ordlist__STATE_VARIABLE_RevFalse_6 = mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5;
                *mercury__set_ordlist__STATE_VARIABLE_RevTrue_4 = mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3;
              }
            else
              {
                MR_Box mercury__set_ordlist__H_34 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__set_ordlist__T_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__set_ordlist__R_38;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_53, &mercury__set_ordlist__R_38, mercury__set_ordlist__Var_55, mercury__set_ordlist__H_34);
                }
                switch (mercury__set_ordlist__R_38) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__Var_54;

                        mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__set_ordlist__STATE_VARIABLE_RevTrue_50_50;

                      {
                        mercury__set_ordlist__STATE_VARIABLE_RevTrue_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__set_ordlist__STATE_VARIABLE_RevTrue_50_50, 0) = mercury__set_ordlist__H_34;
                        MR_hl_field(MR_mktag(1), mercury__set_ordlist__STATE_VARIABLE_RevTrue_50_50, 1) = ((MR_Box) (mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__Var_54;
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__T_35;
                        MR_Word mercury__set_ordlist__next_value_of_STATE_VARIABLE_RevTrue_0_3 = mercury__set_ordlist__STATE_VARIABLE_RevTrue_50_50;

                        mercury__set_ordlist__STATE_VARIABLE_RevTrue_0_3 = mercury__set_ordlist__next_value_of_STATE_VARIABLE_RevTrue_0_3;
                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                        mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__set_ordlist__STATE_VARIABLE_RevFalse_43_43;

                      {
                        mercury__set_ordlist__STATE_VARIABLE_RevFalse_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__set_ordlist__STATE_VARIABLE_RevFalse_43_43, 0) = mercury__set_ordlist__H_34;
                        MR_hl_field(MR_mktag(1), mercury__set_ordlist__STATE_VARIABLE_RevFalse_43_43, 1) = ((MR_Box) (mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__T_35;
                        MR_Word mercury__set_ordlist__next_value_of_STATE_VARIABLE_RevFalse_0_5 = mercury__set_ordlist__STATE_VARIABLE_RevFalse_43_43;

                        mercury__set_ordlist__STATE_VARIABLE_RevFalse_0_5 = mercury__set_ordlist__next_value_of_STATE_VARIABLE_RevFalse_0_5;
                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
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

void MR_CALL 
mercury__set_ordlist__divide_4_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_13,
  MR_Word mercury__set_ordlist__Pred_5,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3,
  MR_Word * mercury__set_ordlist__HeadVar__4_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_6 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__TruePart_7;
    MR_Word mercury__set_ordlist__FalsePart_8;
    MR_Word mercury__set_ordlist__RevTruePart_9;
    MR_Word mercury__set_ordlist__RevFalsePart_10;
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__divide_loop_6_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__Pred_5, mercury__set_ordlist__Set_6, mercury__set_ordlist__Var_11, &mercury__set_ordlist__RevTruePart_9, mercury__set_ordlist__Var_12, &mercury__set_ordlist__RevFalsePart_10);
    }
    {
      mercury__list__reverse_2_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__RevTruePart_9, &mercury__set_ordlist__TruePart_7);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__TruePart_7;
    {
      mercury__list__reverse_2_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__RevFalsePart_10, &mercury__set_ordlist__FalsePart_8);
    }
    *mercury__set_ordlist__HeadVar__4_4 = (MR_Word) mercury__set_ordlist__FalsePart_8;
  }
}

void MR_CALL 
mercury__set_ordlist__divide_loop_6_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_19,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__HeadVar__3_3,
  MR_Word * mercury__set_ordlist__RevTrue_4,
  MR_Word mercury__set_ordlist__HeadVar__5_5,
  MR_Word * mercury__set_ordlist__RevFalse_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__set_ordlist__RevTrue_4 = mercury__set_ordlist__HeadVar__3_3;
            *mercury__set_ordlist__RevFalse_6 = mercury__set_ordlist__HeadVar__5_5;
          }
        else
          {
            MR_Box mercury__set_ordlist__H_11 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_ordlist__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__set_ordlist__RevTrue1_17;
            MR_Word mercury__set_ordlist__RevFalse1_18;
            MR_bool MR_CALL (* mercury__set_ordlist__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__set_ordlist__succeeded = mercury__set_ordlist__func_0(((MR_Box) mercury__set_ordlist__HeadVar__1_1), mercury__set_ordlist__H_11);
            }
            if (mercury__set_ordlist__succeeded)
              {
                {
                  mercury__set_ordlist__RevTrue1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__set_ordlist__RevTrue1_17, 0) = mercury__set_ordlist__H_11;
                  MR_hl_field(MR_mktag(1), mercury__set_ordlist__RevTrue1_17, 1) = ((MR_Box) (mercury__set_ordlist__HeadVar__3_3));
                }
                mercury__set_ordlist__RevFalse1_18 = mercury__set_ordlist__HeadVar__5_5;
              }
            else
              {
                mercury__set_ordlist__RevTrue1_17 = mercury__set_ordlist__HeadVar__3_3;
                {
                  mercury__set_ordlist__RevFalse1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__set_ordlist__RevFalse1_18, 0) = mercury__set_ordlist__H_11;
                  MR_hl_field(MR_mktag(1), mercury__set_ordlist__RevFalse1_18, 1) = ((MR_Box) (mercury__set_ordlist__HeadVar__5_5));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__T_12;
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__3_3 = mercury__set_ordlist__RevTrue1_17;
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__5_5 = mercury__set_ordlist__RevFalse1_18;

              mercury__set_ordlist__HeadVar__5_5 = mercury__set_ordlist__next_value_of_HeadVar__5_5;
              mercury__set_ordlist__HeadVar__3_3 = mercury__set_ordlist__next_value_of_HeadVar__3_3;
              mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_ordlist__all_true_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__P_3,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__L_4 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    {
      mercury__set_ordlist__succeeded = mercury__list__all_true_2_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__P_3, mercury__set_ordlist__L_4);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_7(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_6(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl6_14_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_5(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_2(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_1(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl6_14_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_47,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_48,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_35 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_0(mercury__set_ordlist__TypeInfo_for_T_42, mercury__set_ordlist__TypeInfo_for_A_43, mercury__set_ordlist__TypeInfo_for_B_44, mercury__set_ordlist__TypeInfo_for_C_45, mercury__set_ordlist__TypeInfo_for_D_46, mercury__set_ordlist__TypeInfo_for_E_47, mercury__set_ordlist__TypeInfo_for_F_48, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_35, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_7(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_6(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold6_14_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl6_14_p_5(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_2(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_1(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold6_14_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_41,
  MR_Word mercury__set_ordlist__TypeInfo_for_A_42,
  MR_Word mercury__set_ordlist__TypeInfo_for_B_43,
  MR_Word mercury__set_ordlist__TypeInfo_for_C_44,
  MR_Word mercury__set_ordlist__TypeInfo_for_D_45,
  MR_Word mercury__set_ordlist__TypeInfo_for_E_46,
  MR_Word mercury__set_ordlist__TypeInfo_for_F_47,
  MR_Word mercury__set_ordlist__P_15,
  MR_Word mercury__set_ordlist__S_16,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_24,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_26,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_28,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_30,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_32,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_68 = (MR_Word) mercury__set_ordlist__S_16;

    {
      mercury__list__foldl6_14_p_0(mercury__set_ordlist__TypeInfo_for_T_41, mercury__set_ordlist__TypeInfo_for_A_42, mercury__set_ordlist__TypeInfo_for_B_43, mercury__set_ordlist__TypeInfo_for_C_44, mercury__set_ordlist__TypeInfo_for_D_45, mercury__set_ordlist__TypeInfo_for_E_46, mercury__set_ordlist__TypeInfo_for_F_47, mercury__set_ordlist__P_15, mercury__set_ordlist__Var_68, mercury__set_ordlist__STATE_VARIABLE_A_0_23, mercury__set_ordlist__STATE_VARIABLE_A_24, mercury__set_ordlist__STATE_VARIABLE_B_0_25, mercury__set_ordlist__STATE_VARIABLE_B_26, mercury__set_ordlist__STATE_VARIABLE_C_0_27, mercury__set_ordlist__STATE_VARIABLE_C_28, mercury__set_ordlist__STATE_VARIABLE_D_0_29, mercury__set_ordlist__STATE_VARIABLE_D_30, mercury__set_ordlist__STATE_VARIABLE_E_0_31, mercury__set_ordlist__STATE_VARIABLE_E_32, mercury__set_ordlist__STATE_VARIABLE_F_0_33, mercury__set_ordlist__STATE_VARIABLE_F_34);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_5(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_4(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl5_12_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_3(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_2(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_1(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl5_12_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_40,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_41,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_30 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_0(mercury__set_ordlist__TypeInfo_for_T1_36, mercury__set_ordlist__TypeInfo_for_T2_37, mercury__set_ordlist__TypeInfo_for_T3_38, mercury__set_ordlist__TypeInfo_for_T4_39, mercury__set_ordlist__TypeInfo_for_T5_40, mercury__set_ordlist__TypeInfo_for_T6_41, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_30, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_5(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_4(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold5_12_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl5_12_p_3(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_2(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_1(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold5_12_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_35,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_36,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_37,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_38,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_39,
  MR_Word mercury__set_ordlist__TypeInfo_for_T6_40,
  MR_Word mercury__set_ordlist__P_13,
  MR_Word mercury__set_ordlist__S_14,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_21,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_23,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_25,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_27,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_58 = (MR_Word) mercury__set_ordlist__S_14;

    {
      mercury__list__foldl5_12_p_0(mercury__set_ordlist__TypeInfo_for_T1_35, mercury__set_ordlist__TypeInfo_for_T2_36, mercury__set_ordlist__TypeInfo_for_T3_37, mercury__set_ordlist__TypeInfo_for_T4_38, mercury__set_ordlist__TypeInfo_for_T5_39, mercury__set_ordlist__TypeInfo_for_T6_40, mercury__set_ordlist__P_13, mercury__set_ordlist__Var_58, mercury__set_ordlist__STATE_VARIABLE_A_0_20, mercury__set_ordlist__STATE_VARIABLE_A_21, mercury__set_ordlist__STATE_VARIABLE_B_0_22, mercury__set_ordlist__STATE_VARIABLE_B_23, mercury__set_ordlist__STATE_VARIABLE_C_0_24, mercury__set_ordlist__STATE_VARIABLE_C_25, mercury__set_ordlist__STATE_VARIABLE_D_0_26, mercury__set_ordlist__STATE_VARIABLE_D_27, mercury__set_ordlist__STATE_VARIABLE_E_0_28, mercury__set_ordlist__STATE_VARIABLE_E_29);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_7(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_6(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl4_10_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_5(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_2(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_1(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl4_10_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_33,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_34,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_25 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_0(mercury__set_ordlist__TypeInfo_for_T1_30, mercury__set_ordlist__TypeInfo_for_T2_31, mercury__set_ordlist__TypeInfo_for_T3_32, mercury__set_ordlist__TypeInfo_for_T4_33, mercury__set_ordlist__TypeInfo_for_T5_34, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_25, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_7(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_6(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold4_10_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl4_10_p_5(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_2(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_1(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold4_10_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_29,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_30,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_31,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_32,
  MR_Word mercury__set_ordlist__TypeInfo_for_T5_33,
  MR_Word mercury__set_ordlist__P_11,
  MR_Word mercury__set_ordlist__S_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_18,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_20,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_22,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_48 = (MR_Word) mercury__set_ordlist__S_12;

    {
      mercury__list__foldl4_10_p_0(mercury__set_ordlist__TypeInfo_for_T1_29, mercury__set_ordlist__TypeInfo_for_T2_30, mercury__set_ordlist__TypeInfo_for_T3_31, mercury__set_ordlist__TypeInfo_for_T4_32, mercury__set_ordlist__TypeInfo_for_T5_33, mercury__set_ordlist__P_11, mercury__set_ordlist__Var_48, mercury__set_ordlist__STATE_VARIABLE_A_0_17, mercury__set_ordlist__STATE_VARIABLE_A_18, mercury__set_ordlist__STATE_VARIABLE_B_0_19, mercury__set_ordlist__STATE_VARIABLE_B_20, mercury__set_ordlist__STATE_VARIABLE_C_0_21, mercury__set_ordlist__STATE_VARIABLE_C_22, mercury__set_ordlist__STATE_VARIABLE_D_0_23, mercury__set_ordlist__STATE_VARIABLE_D_24);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_5(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_4(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl3_8_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_3(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_2(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_1(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl3_8_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_26,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_27,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_20 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_0(mercury__set_ordlist__TypeInfo_for_T1_24, mercury__set_ordlist__TypeInfo_for_T2_25, mercury__set_ordlist__TypeInfo_for_T3_26, mercury__set_ordlist__TypeInfo_for_T4_27, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_20, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_5(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_4(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold3_8_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl3_8_p_3(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_2(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_1(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold3_8_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_23,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_24,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_25,
  MR_Word mercury__set_ordlist__TypeInfo_for_T4_26,
  MR_Word mercury__set_ordlist__P_9,
  MR_Word mercury__set_ordlist__S_10,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_15,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_17,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_38 = (MR_Word) mercury__set_ordlist__S_10;

    {
      mercury__list__foldl3_8_p_0(mercury__set_ordlist__TypeInfo_for_T1_23, mercury__set_ordlist__TypeInfo_for_T2_24, mercury__set_ordlist__TypeInfo_for_T3_25, mercury__set_ordlist__TypeInfo_for_T4_26, mercury__set_ordlist__P_9, mercury__set_ordlist__Var_38, mercury__set_ordlist__STATE_VARIABLE_A_0_14, mercury__set_ordlist__STATE_VARIABLE_A_15, mercury__set_ordlist__STATE_VARIABLE_B_0_16, mercury__set_ordlist__STATE_VARIABLE_B_17, mercury__set_ordlist__STATE_VARIABLE_C_0_18, mercury__set_ordlist__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_6(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_5(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl2_6_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_4(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_2(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_1(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl2_6_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_19,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_20,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_15 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_0(mercury__set_ordlist__TypeInfo_for_T1_18, mercury__set_ordlist__TypeInfo_for_T2_19, mercury__set_ordlist__TypeInfo_for_T3_20, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_15, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_6(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_5(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold2_6_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl2_6_p_4(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_2(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_1(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold2_6_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_17,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_18,
  MR_Word mercury__set_ordlist__TypeInfo_for_T3_19,
  MR_Word mercury__set_ordlist__P_7,
  MR_Word mercury__set_ordlist__S_8,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_12,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_28 = (MR_Word) mercury__set_ordlist__S_8;

    {
      mercury__list__foldl2_6_p_0(mercury__set_ordlist__TypeInfo_for_T1_17, mercury__set_ordlist__TypeInfo_for_T2_18, mercury__set_ordlist__TypeInfo_for_T3_19, mercury__set_ordlist__P_7, mercury__set_ordlist__Var_28, mercury__set_ordlist__STATE_VARIABLE_A_0_11, mercury__set_ordlist__STATE_VARIABLE_A_12, mercury__set_ordlist__STATE_VARIABLE_B_0_13, mercury__set_ordlist__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_5(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_4(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__foldl_4_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_3(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_2(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_1(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__foldl_4_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_13,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_10 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_0(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__TypeInfo_for_T2_13, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_10, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

MR_Box MR_CALL 
mercury__set_ordlist__foldl_3_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_10,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_11,
  MR_Word mercury__set_ordlist__F_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__A_7)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Box mercury__set_ordlist__B_8;
    MR_Word mercury__set_ordlist__Var_9 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_ordlist__F_5, mercury__set_ordlist__Var_9, mercury__set_ordlist__A_7, &mercury__set_ordlist__B_8);
    }
    return mercury__set_ordlist__B_8;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_5(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_5(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_4(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_4(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__fold_4_p_3(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__foldl_4_p_3(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_2(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_2(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_1(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__fold_4_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_11,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_ordlist__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_18 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__list__foldl_4_p_0(mercury__set_ordlist__TypeInfo_for_T1_11, mercury__set_ordlist__TypeInfo_for_T2_12, mercury__set_ordlist__P_5, mercury__set_ordlist__Var_18, mercury__set_ordlist__STATE_VARIABLE_A_0_8, mercury__set_ordlist__STATE_VARIABLE_A_9);
    }
  }
}

MR_Box MR_CALL 
mercury__set_ordlist__fold_3_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_8,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_9,
  MR_Word mercury__set_ordlist__F_5,
  MR_Word mercury__set_ordlist__S_6,
  MR_Box mercury__set_ordlist__A_7)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Box mercury__set_ordlist__HeadVar__4_4;
    MR_Word mercury__set_ordlist__Var_14 = (MR_Word) mercury__set_ordlist__S_6;

    {
      mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_ordlist__F_5, mercury__set_ordlist__Var_14, mercury__set_ordlist__A_7, &mercury__set_ordlist__HeadVar__4_4);
    }
    return mercury__set_ordlist__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_ordlist__Var_18,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Box mercury__set_ordlist__HeadVar__3_3,
  MR_Box * mercury__set_ordlist__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__HeadVar__4_4 = mercury__set_ordlist__HeadVar__3_3;
        else
          {
            MR_Box mercury__set_ordlist__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_ordlist__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__V_15_13;
            MR_Box MR_CALL (* mercury__set_ordlist__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set_ordlist__Var_18, (MR_Integer) 1)));

            {
              mercury__set_ordlist__V_15_13 = mercury__set_ordlist__func_0(((MR_Box) mercury__set_ordlist__Var_18), mercury__set_ordlist__V_10_9, mercury__set_ordlist__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__V_11_10;
              MR_Box mercury__set_ordlist__next_value_of_HeadVar__3_3 = mercury__set_ordlist__V_15_13;

              mercury__set_ordlist__HeadVar__3_3 = mercury__set_ordlist__next_value_of_HeadVar__3_3;
              mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__set_ordlist__filter_map_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_10,
  MR_Word mercury__set_ordlist__PF_4,
  MR_Word mercury__set_ordlist__Set_5,
  MR_Word * mercury__set_ordlist__TransformedTrueSet_6)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_7 = (MR_Word) mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__TransformedTrueList_8;
    MR_Word mercury__set_ordlist__List_13;
    MR_Integer mercury__set_ordlist__V_5_16;

    {
      mercury__list__filter_map_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_9, mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__PF_4, mercury__set_ordlist__List_7, &mercury__set_ordlist__TransformedTrueList_8);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__TransformedTrueList_8, (MR_Integer) 0, &mercury__set_ordlist__V_5_16);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__V_5_16, mercury__set_ordlist__TransformedTrueList_8, &mercury__set_ordlist__List_13);
    }
    *mercury__set_ordlist__TransformedTrueSet_6 = (MR_Word) mercury__set_ordlist__List_13;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__filter_map_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_10,
  MR_Word mercury__set_ordlist__PF_4,
  MR_Word mercury__set_ordlist__Set_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__TransformedTrueSet_6;
    MR_Word mercury__set_ordlist__List_7 = (MR_Word) mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__TransformedTrueList_8;
    MR_Word mercury__set_ordlist__List_27;
    MR_Integer mercury__set_ordlist__V_5_30;

    {
      mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_ordlist__PF_4, mercury__set_ordlist__List_7, &mercury__set_ordlist__TransformedTrueList_8);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__TransformedTrueList_8, (MR_Integer) 0, &mercury__set_ordlist__V_5_30);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__V_5_30, mercury__set_ordlist__TransformedTrueList_8, &mercury__set_ordlist__List_27);
    }
    mercury__set_ordlist__TransformedTrueSet_6 = (MR_Word) mercury__set_ordlist__List_27;
    return mercury__set_ordlist__TransformedTrueSet_6;
  }
}

static void MR_CALL 
mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__set_ordlist__Var_16,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__set_ordlist__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_ordlist__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__V_9_9;
            MR_bool MR_CALL (* mercury__set_ordlist__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set_ordlist__Var_16, (MR_Integer) 1)));

            {
              mercury__set_ordlist__succeeded = mercury__set_ordlist__func_0(((MR_Box) mercury__set_ordlist__Var_16), mercury__set_ordlist__V_6_6, &mercury__set_ordlist__V_9_9);
            }
            if (mercury__set_ordlist__succeeded)
              {
                MR_Word mercury__set_ordlist__V_10_10;

                {
                  mercury__set_ordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_ordlist__Var_16, mercury__set_ordlist__V_7_7, &mercury__set_ordlist__V_10_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set_ordlist__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__V_9_9;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__V_10_10));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__V_7_7;

                  mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_ordlist__map_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_9,
  MR_Word mercury__set_ordlist__TypeInfo_for_T2_10,
  MR_Word mercury__set_ordlist__F_4,
  MR_Word mercury__set_ordlist__Set_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__TransformedSet_6;
    MR_Word mercury__set_ordlist__List_7 = (MR_Word) mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__TransformedList_8;
    MR_Word mercury__set_ordlist__List_15;
    MR_Integer mercury__set_ordlist__V_5_18;

    {
      mercury__set_ordlist__TransformedList_8 = mercury__list__map_2_f_0(mercury__set_ordlist__TypeInfo_for_T1_9, mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__F_4, mercury__set_ordlist__List_7);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__TransformedList_8, (MR_Integer) 0, &mercury__set_ordlist__V_5_18);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T2_10, mercury__set_ordlist__V_5_18, mercury__set_ordlist__TransformedList_8, &mercury__set_ordlist__List_15);
    }
    mercury__set_ordlist__TransformedSet_6 = (MR_Word) mercury__set_ordlist__List_15;
    return mercury__set_ordlist__TransformedSet_6;
  }
}

void MR_CALL 
mercury__set_ordlist__filter_4_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_12,
  MR_Word mercury__set_ordlist__P_5,
  MR_Word mercury__set_ordlist__Set_6,
  MR_Word * mercury__set_ordlist__TrueSet_7,
  MR_Word * mercury__set_ordlist__FalseSet_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_9 = (MR_Word) mercury__set_ordlist__Set_6;
    MR_Word mercury__set_ordlist__TrueList_10;
    MR_Word mercury__set_ordlist__FalseList_11;
    MR_Word mercury__set_ordlist__List_17;
    MR_Word mercury__set_ordlist__List_22;

    {
      mercury__list__filter_4_p_0(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__P_5, mercury__set_ordlist__List_9, &mercury__set_ordlist__TrueList_10, &mercury__set_ordlist__FalseList_11);
    }
    if ((mercury__set_ordlist__TrueList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_18 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_10, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_10, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__V_3_18, mercury__set_ordlist__V_4_19, &mercury__set_ordlist__List_17);
        }
      }
    *mercury__set_ordlist__TrueSet_7 = (MR_Word) mercury__set_ordlist__List_17;
    if ((mercury__set_ordlist__FalseList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_23 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__FalseList_11, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__FalseList_11, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_12, mercury__set_ordlist__V_3_23, mercury__set_ordlist__V_4_24, &mercury__set_ordlist__List_22);
        }
      }
    *mercury__set_ordlist__FalseSet_8 = (MR_Word) mercury__set_ordlist__List_22;
  }
}

void MR_CALL 
mercury__set_ordlist__filter_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_7,
  MR_Word mercury__set_ordlist__P_4,
  MR_Word mercury__set_ordlist__Set_5,
  MR_Word * mercury__set_ordlist__TrueSet_6)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_11 = (MR_Word) mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__TrueList_12;
    MR_Word mercury__set_ordlist__List_17;

    {
      mercury__list__filter_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_7, mercury__set_ordlist__P_4, mercury__set_ordlist__List_11, &mercury__set_ordlist__TrueList_12);
    }
    if ((mercury__set_ordlist__TrueList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_18 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_12, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_12, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_7, mercury__set_ordlist__V_3_18, mercury__set_ordlist__V_4_19, &mercury__set_ordlist__List_17);
        }
      }
    *mercury__set_ordlist__TrueSet_6 = (MR_Word) mercury__set_ordlist__List_17;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__filter_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T1_9,
  MR_Word mercury__set_ordlist__P_4,
  MR_Word mercury__set_ordlist__Set_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__TrueSet_6;
    MR_Word mercury__set_ordlist__List_7 = (MR_Word) mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__TrueList_8;
    MR_Word mercury__set_ordlist__List_14;

    {
      mercury__list__filter_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_9, mercury__set_ordlist__P_4, mercury__set_ordlist__List_7, &mercury__set_ordlist__TrueList_8);
    }
    if ((mercury__set_ordlist__TrueList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_15 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_8, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__TrueList_8, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T1_9, mercury__set_ordlist__V_3_15, mercury__set_ordlist__V_4_16, &mercury__set_ordlist__List_14);
        }
      }
    mercury__set_ordlist__TrueSet_6 = (MR_Word) mercury__set_ordlist__List_14;
    return mercury__set_ordlist__TrueSet_6;
  }
}

MR_Integer MR_CALL 
mercury__set_ordlist__count_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__S_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__N_4;
    MR_Word mercury__set_ordlist__Set_7 = (MR_Word) mercury__set_ordlist__S_3;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__Set_7, (MR_Integer) 0, &mercury__set_ordlist__N_4);
    }
    return mercury__set_ordlist__N_4;
  }
}

void MR_CALL 
mercury__set_ordlist__count_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Integer * mercury__set_ordlist__Count_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_3 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__Set_3, (MR_Integer) 0, mercury__set_ordlist__Count_4);
    }
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__difference_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__Xs_4,
  MR_Word mercury__set_ordlist__Ys_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Diff_6;
    MR_Word mercury__set_ordlist__Xs_8 = (MR_Word) mercury__set_ordlist__Xs_4;
    MR_Word mercury__set_ordlist__Ys_9 = (MR_Word) mercury__set_ordlist__Ys_5;
    MR_Word mercury__set_ordlist__Diff_10;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Xs_8, mercury__set_ordlist__Ys_9, &mercury__set_ordlist__Diff_10);
    }
    mercury__set_ordlist__Diff_6 = (MR_Word) mercury__set_ordlist__Diff_10;
    return mercury__set_ordlist__Diff_6;
  }
}

void MR_CALL 
mercury__set_ordlist__difference_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Diff_6;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Xs_4, mercury__set_ordlist__Ys_5, &mercury__set_ordlist__Diff_6);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Diff_6;
  }
}

void MR_CALL 
mercury__set_ordlist__intersect_list_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__ListofSets_3,
  MR_Word * mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    {
      *mercury__set_ordlist__Set_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__ListofSets_3);
    }
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__power_intersect_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__SS_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4;
    MR_Word mercury__set_ordlist__S0_7 = (MR_Word) mercury__set_ordlist__SS_3;

    {
      mercury__set_ordlist__S_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__S0_7);
    }
    return mercury__set_ordlist__S_4;
  }
}

void MR_CALL 
mercury__set_ordlist__power_intersect_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word * mercury__set_ordlist__S_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S0_3 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;

    {
      *mercury__set_ordlist__S_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__S0_3);
    }
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__intersect_list_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_10,
  MR_Word mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__HeadVar__2_2;

    if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__set_ordlist__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        mercury__set_ordlist__HeadVar__2_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    else
      {
        MR_Word mercury__set_ordlist__S0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__set_ordlist__Ss_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));

        if ((mercury__set_ordlist__Ss_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__S0_4;
        else
          {
            MR_Word mercury__set_ordlist__S1_9;
            MR_Word mercury__set_ordlist__Xs_11;
            MR_Word mercury__set_ordlist__Ys_12;
            MR_Word mercury__set_ordlist__Intersection_13;

            {
              mercury__set_ordlist__S1_9 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Ss_5);
            }
            mercury__set_ordlist__Xs_11 = (MR_Word) mercury__set_ordlist__S1_9;
            mercury__set_ordlist__Ys_12 = (MR_Word) mercury__set_ordlist__S0_4;
            {
              mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Xs_11, mercury__set_ordlist__Ys_12, &mercury__set_ordlist__Intersection_13);
            }
            mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__Intersection_13;
          }
      }
    return mercury__set_ordlist__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__intersect_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__Xs_4,
  MR_Word mercury__set_ordlist__Ys_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Intersection_6;
    MR_Word mercury__set_ordlist__Xs_8 = (MR_Word) mercury__set_ordlist__Xs_4;
    MR_Word mercury__set_ordlist__Ys_9 = (MR_Word) mercury__set_ordlist__Ys_5;
    MR_Word mercury__set_ordlist__Intersection_10;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Xs_8, mercury__set_ordlist__Ys_9, &mercury__set_ordlist__Intersection_10);
    }
    mercury__set_ordlist__Intersection_6 = (MR_Word) mercury__set_ordlist__Intersection_10;
    return mercury__set_ordlist__Intersection_6;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__intersect_3_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Intersection_6 = (MR_Word) mercury__set_ordlist__HeadVar__3_3;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Xs_4, mercury__set_ordlist__Ys_5, mercury__set_ordlist__Intersection_6);
    }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__intersect_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Ys_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Intersection_6;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Xs_4, mercury__set_ordlist__Ys_5, &mercury__set_ordlist__Intersection_6);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Intersection_6;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__power_union_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__SS_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4;
    MR_Word mercury__set_ordlist__ListofSets_7 = (MR_Word) mercury__set_ordlist__SS_3;
    MR_Word mercury__set_ordlist__Set0_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__ListofSets_7, mercury__set_ordlist__Set0_10, &mercury__set_ordlist__S_4);
    }
    return mercury__set_ordlist__S_4;
  }
}

void MR_CALL 
mercury__set_ordlist__power_union_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word * mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__ListofSets_3 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Set0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__ListofSets_3, mercury__set_ordlist__Set0_8, mercury__set_ordlist__Set_4);
    }
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__union_list_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_6,
  MR_Word mercury__set_ordlist__ListofSets_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_4;
    MR_Word mercury__set_ordlist__Set0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set_ordlist__TypeInfo_for_T_6, mercury__set_ordlist__ListofSets_3, mercury__set_ordlist__Set0_5, &mercury__set_ordlist__Set_4);
    }
    return mercury__set_ordlist__Set_4;
  }
}

void MR_CALL 
mercury__set_ordlist__union_list_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__ListofSets_3,
  MR_Word * mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__ListofSets_3, mercury__set_ordlist__Set0_8, mercury__set_ordlist__Set_4);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__power_union_2_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_10,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__Set_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__Set_3 = mercury__set_ordlist__HeadVar__2_2;
        else
          {
            MR_Word mercury__set_ordlist__NextSet_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__set_ordlist__SetofSets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__set_ordlist__Set1_9;
            MR_Word mercury__set_ordlist__Set0_11 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
            MR_Word mercury__set_ordlist__Set1_12 = (MR_Word) mercury__set_ordlist__NextSet_5;
            MR_Word mercury__set_ordlist__Set_13;

            {
              mercury__list__merge_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Set0_11, mercury__set_ordlist__Set1_12, &mercury__set_ordlist__Set_13);
            }
            mercury__set_ordlist__Set1_9 = (MR_Word) mercury__set_ordlist__Set_13;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__SetofSets_6;
              MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Set1_9;

              mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
              mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_ordlist__union_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__S1_4,
  MR_Word mercury__set_ordlist__S2_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S3_6;
    MR_Word mercury__set_ordlist__Set0_8 = (MR_Word) mercury__set_ordlist__S1_4;
    MR_Word mercury__set_ordlist__Set1_9 = (MR_Word) mercury__set_ordlist__S2_5;
    MR_Word mercury__set_ordlist__Set_10;

    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Set0_8, mercury__set_ordlist__Set1_9, &mercury__set_ordlist__Set_10);
    }
    mercury__set_ordlist__S3_6 = (MR_Word) mercury__set_ordlist__Set_10;
    return mercury__set_ordlist__S3_6;
  }
}

void MR_CALL 
mercury__set_ordlist__union_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Set1_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Set_6;

    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Set0_4, mercury__set_ordlist__Set1_5, &mercury__set_ordlist__Set_6);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Set_6;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_least_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box * mercury__set_ordlist__Elem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_5;
    MR_Word mercury__set_ordlist__Var_6 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__Var_6)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_6, (MR_Integer) 0));
        mercury__set_ordlist__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_6, (MR_Integer) 1)));
        *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Set_5;
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_list_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_10,
  MR_Word mercury__set_ordlist__Elems_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__ElemSet_6;
    MR_Integer mercury__set_ordlist__V_5_17;
    MR_Word mercury__set_ordlist__Xs_26;
    MR_Word mercury__set_ordlist__Intersection_28;
    MR_Word mercury__set_ordlist__Xs_29;
    MR_Word mercury__set_ordlist__Ys_30;
    MR_Word mercury__set_ordlist__Diff_31;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Elems_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_17);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__V_5_17, mercury__set_ordlist__Elems_4, &mercury__set_ordlist__Intersection_28);
    }
    mercury__set_ordlist__ElemSet_6 = (MR_Word) mercury__set_ordlist__Intersection_28;
    if ((mercury__set_ordlist__Intersection_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__set_ordlist__Elem_13 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Intersection_28, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__Elems_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Intersection_28, (MR_Integer) 1)));

        {
          mercury__set_ordlist__succeeded = mercury__set_ordlist__no_dups_2_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Elem_13, mercury__set_ordlist__Elems_14);
        }
      }
    if (mercury__set_ordlist__succeeded)
      {
        mercury__set_ordlist__Xs_26 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
        {
          mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Xs_26, mercury__set_ordlist__Intersection_28, mercury__set_ordlist__Intersection_28);
        }
        if (mercury__set_ordlist__succeeded)
          {
            mercury__set_ordlist__Xs_29 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
            mercury__set_ordlist__Ys_30 = (MR_Word) mercury__set_ordlist__ElemSet_6;
            {
              mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, mercury__set_ordlist__Xs_29, mercury__set_ordlist__Ys_30, &mercury__set_ordlist__Diff_31);
            }
            *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Diff_31;
            mercury__set_ordlist__succeeded = MR_TRUE;
          }
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__no_dups_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box mercury__set_ordlist__Elem_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__set_ordlist__succeeded = MR_TRUE;
        else
          {
            MR_Box mercury__set_ordlist__Elem0_5 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_ordlist__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__set_ordlist__succeeded = mercury__builtin__unify_2_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Elem_1, mercury__set_ordlist__Elem0_5);
            }
            mercury__set_ordlist__succeeded = !(mercury__set_ordlist__succeeded);
            if (mercury__set_ordlist__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Box mercury__set_ordlist__next_value_of_Elem_1 = mercury__set_ordlist__Elem0_5;
                  MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Elems_6;

                  mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                  mercury__set_ordlist__Elem_1 = mercury__set_ordlist__next_value_of_Elem_1;
                }
                continue;
              }
          }
        return mercury__set_ordlist__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_ordlist__remove_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box mercury__set_ordlist__Elem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set0_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Set_6;

    {
      mercury__set_ordlist__succeeded = mercury__list__delete_first_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__Set0_5, mercury__set_ordlist__Elem_4, &mercury__set_ordlist__Set_6);
    }
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__Set_6;
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__delete_list_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_9,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_S_0_6,
  MR_Word mercury__set_ordlist__Xs_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__STATE_VARIABLE_S_7;

    {
      mercury__set_ordlist__delete_list_3_p_0(mercury__set_ordlist__TypeInfo_for_T_9, mercury__set_ordlist__Xs_5, mercury__set_ordlist__STATE_VARIABLE_S_0_6, &mercury__set_ordlist__STATE_VARIABLE_S_7);
    }
    return mercury__set_ordlist__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_ordlist__delete_list_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_11,
  MR_Word mercury__set_ordlist__D_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__V_5_14;
    MR_Word mercury__set_ordlist__Xs_20;
    MR_Word mercury__set_ordlist__Ys_21;
    MR_Word mercury__set_ordlist__Diff_22;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__D_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_14);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__V_5_14, mercury__set_ordlist__D_4, &mercury__set_ordlist__Ys_21);
    }
    mercury__set_ordlist__Xs_20 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__Xs_20, mercury__set_ordlist__Ys_21, &mercury__set_ordlist__Diff_22);
    }
    *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Diff_22;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__delete_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_9,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_S_0_6,
  MR_Box mercury__set_ordlist__T_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__STATE_VARIABLE_S_7;
    MR_Word mercury__set_ordlist__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Xs_18;
    MR_Word mercury__set_ordlist__Ys_19;
    MR_Word mercury__set_ordlist__Diff_20;

    {
      mercury__set_ordlist__Ys_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_19, 0) = mercury__set_ordlist__T_5;
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_19, 1) = ((MR_Box) (mercury__set_ordlist__Var_17));
    }
    mercury__set_ordlist__Xs_18 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_S_0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_9, mercury__set_ordlist__Xs_18, mercury__set_ordlist__Ys_19, &mercury__set_ordlist__Diff_20);
    }
    mercury__set_ordlist__STATE_VARIABLE_S_7 = (MR_Word) mercury__set_ordlist__Diff_20;
    return mercury__set_ordlist__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_ordlist__delete_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_12,
  MR_Box mercury__set_ordlist__Elem_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_ordlist__Xs_13;
    MR_Word mercury__set_ordlist__Ys_14;
    MR_Word mercury__set_ordlist__Diff_15;

    {
      mercury__set_ordlist__Ys_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_14, 0) = mercury__set_ordlist__Elem_4;
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Ys_14, 1) = ((MR_Box) (mercury__set_ordlist__Var_11));
    }
    mercury__set_ordlist__Xs_13 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_12, mercury__set_ordlist__Xs_13, mercury__set_ordlist__Ys_14, &mercury__set_ordlist__Diff_15);
    }
    *mercury__set_ordlist__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set_ordlist__Diff_15;
  }
}

void MR_CALL 
mercury__set_ordlist__difference_loop_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_16,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__set_ordlist__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__Var_18 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__set_ordlist__HeadVar__3_3 = mercury__set_ordlist__HeadVar__1_1;
            else
              {
                MR_Box mercury__set_ordlist__Y_9 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__set_ordlist__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__set_ordlist__R_12;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, &mercury__set_ordlist__R_12, mercury__set_ordlist__Var_18, mercury__set_ordlist__Y_9);
                }
                switch (mercury__set_ordlist__R_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__set_ordlist__Diff0_13;

                      {
                        mercury__set_ordlist__difference_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, mercury__set_ordlist__Var_17, mercury__set_ordlist__HeadVar__2_2, &mercury__set_ordlist__Diff0_13);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__set_ordlist__HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__Var_18;
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__Diff0_13));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__Var_17;
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Ys_10;

                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                        mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Ys_10;

                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
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

MR_Word MR_CALL 
mercury__set_ordlist__insert_list_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_9,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_S_0_6,
  MR_Word mercury__set_ordlist__Xs_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__STATE_VARIABLE_S_7;

    {
      mercury__set_ordlist__insert_list_3_p_0(mercury__set_ordlist__TypeInfo_for_T_9, mercury__set_ordlist__Xs_5, mercury__set_ordlist__STATE_VARIABLE_S_0_6, &mercury__set_ordlist__STATE_VARIABLE_S_7);
    }
    return mercury__set_ordlist__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_ordlist__insert_list_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_11,
  MR_Word mercury__set_ordlist__List0_4,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_ordlist__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__V_5_14;
    MR_Word mercury__set_ordlist__Set0_20;
    MR_Word mercury__set_ordlist__Set1_21;
    MR_Word mercury__set_ordlist__Set_22;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__List0_4, (MR_Integer) 0, &mercury__set_ordlist__V_5_14);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__V_5_14, mercury__set_ordlist__List0_4, &mercury__set_ordlist__Set0_20);
    }
    mercury__set_ordlist__Set1_21 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_Set_0_7;
    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_11, mercury__set_ordlist__Set0_20, mercury__set_ordlist__Set1_21, &mercury__set_ordlist__Set_22);
    }
    *mercury__set_ordlist__STATE_VARIABLE_Set_8 = (MR_Word) mercury__set_ordlist__Set_22;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__insert_new_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box mercury__set_ordlist__NewItem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List0_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__List_6;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__List0_5, mercury__set_ordlist__NewItem_4, &mercury__set_ordlist__List_6);
    }
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__List_6;
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__insert_new_loop_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_13,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Box mercury__set_ordlist__NewItem_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__set_ordlist__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__set_ordlist__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__NewItem_2;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__Var_5));
        }
        mercury__set_ordlist__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__set_ordlist__Head_6 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__set_ordlist__R_10;

        {
          mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_13, &mercury__set_ordlist__R_10, mercury__set_ordlist__Head_6, mercury__set_ordlist__NewItem_2);
        }
        switch (mercury__set_ordlist__R_10) {
          default:
            mercury__set_ordlist__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__set_ordlist__UpdatedTail_11;

              {
                mercury__set_ordlist__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__Tail_7, mercury__set_ordlist__NewItem_2, &mercury__set_ordlist__UpdatedTail_11);
              }
              if (mercury__set_ordlist__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__set_ordlist__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__Head_6;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__UpdatedTail_11));
                  }
                  mercury__set_ordlist__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__set_ordlist__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__NewItem_2;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__HeadVar__1_1));
              }
              mercury__set_ordlist__succeeded = MR_TRUE;
            }
            break;
        }
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__insert_2_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_9,
  MR_Word mercury__set_ordlist__STATE_VARIABLE_S_0_6,
  MR_Box mercury__set_ordlist__T_5)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__STATE_VARIABLE_S_7;
    MR_Word mercury__set_ordlist__List0_11 = (MR_Word) mercury__set_ordlist__STATE_VARIABLE_S_0_6;
    MR_Word mercury__set_ordlist__List_12;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_9, mercury__set_ordlist__List0_11, mercury__set_ordlist__T_5, &mercury__set_ordlist__List_12);
    }
    mercury__set_ordlist__STATE_VARIABLE_S_7 = (MR_Word) mercury__set_ordlist__List_12;
    return mercury__set_ordlist__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_ordlist__insert_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box mercury__set_ordlist__NewItem_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List0_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__List_6;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__List0_5, mercury__set_ordlist__NewItem_4, &mercury__set_ordlist__List_6);
    }
    *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) mercury__set_ordlist__List_6;
  }
}

void MR_CALL 
mercury__set_ordlist__insert_loop_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_13,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Box mercury__set_ordlist__NewItem_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__set_ordlist__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__set_ordlist__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__NewItem_2;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__Var_5));
        }
      }
    else
      {
        MR_Box mercury__set_ordlist__Head_6 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__set_ordlist__R_10;

        {
          mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_13, &mercury__set_ordlist__R_10, mercury__set_ordlist__Head_6, mercury__set_ordlist__NewItem_2);
        }
        switch (mercury__set_ordlist__R_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__set_ordlist__UpdatedTail_11;

              {
                mercury__set_ordlist__insert_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_13, mercury__set_ordlist__Tail_7, mercury__set_ordlist__NewItem_2, &mercury__set_ordlist__UpdatedTail_11);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__set_ordlist__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__Head_6;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__UpdatedTail_11));
              }
            }
            break;
          case (MR_Integer) 0:
            *mercury__set_ordlist__HeadVar__3_3 = mercury__set_ordlist__HeadVar__1_1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__set_ordlist__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__NewItem_2;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__HeadVar__1_1));
            }
            break;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__contains_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__S_3,
  MR_Box mercury__set_ordlist__E_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_11;
    MR_Word mercury__set_ordlist__L_14 = (MR_Word) mercury__set_ordlist__S_3;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__E_4, mercury__set_ordlist__L_14, &mercury__set_ordlist__Var_11);
    }
    mercury__set_ordlist__succeeded = ((MR_Integer) 1 == mercury__set_ordlist__Var_11);
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__is_member_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Box mercury__set_ordlist__E_4,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__R_6)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__L_5 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__E_4, mercury__set_ordlist__L_5, mercury__set_ordlist__R_6);
    }
  }
}

void MR_CALL 
mercury__set_ordlist__member_2_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_8,
  MR_Box * mercury__set_ordlist__E_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Cont mercury__set_ordlist__cont,
  void * mercury__set_ordlist__cont_env_ptr)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    {
      mercury__list__member_2_p_1(mercury__set_ordlist__TypeInfo_for_T_8, mercury__set_ordlist__E_1, mercury__set_ordlist__S_4, mercury__set_ordlist__cont, mercury__set_ordlist__cont_env_ptr);
    }
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__member_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_8,
  MR_Box mercury__set_ordlist__E_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_9;
    MR_Word mercury__set_ordlist__L_12 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_8, mercury__set_ordlist__E_1, mercury__set_ordlist__L_12, &mercury__set_ordlist__Var_9);
    }
    mercury__set_ordlist__succeeded = ((MR_Integer) 1 == mercury__set_ordlist__Var_9);
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__is_member_loop_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_10,
  MR_Box mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Box mercury__set_ordlist__H_6 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_ordlist__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__set_ordlist__Res_9;

            {
              mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_10, &mercury__set_ordlist__Res_9, mercury__set_ordlist__H_6, mercury__set_ordlist__HeadVar__1_1);
            }
            switch (mercury__set_ordlist__Res_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__T_7;

                    mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                *mercury__set_ordlist__HeadVar__3_3 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__set_ordlist__HeadVar__3_3 = (MR_Integer) 0;
                break;
            }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_ordlist__superset_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__Superset_3,
  MR_Word mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_9 = (MR_Word) mercury__set_ordlist__Superset_3;
    MR_Word mercury__set_ordlist__Intersection_11 = (MR_Word) mercury__set_ordlist__Set_4;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__Xs_9, mercury__set_ordlist__Intersection_11, mercury__set_ordlist__Intersection_11);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__subset_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_6,
  MR_Word mercury__set_ordlist__Subset_3,
  MR_Word mercury__set_ordlist__Set_4)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_7 = (MR_Word) mercury__set_ordlist__Set_4;
    MR_Word mercury__set_ordlist__Intersection_9 = (MR_Word) mercury__set_ordlist__Subset_3;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set_ordlist__TypeInfo_for_T_6, mercury__set_ordlist__Xs_7, mercury__set_ordlist__Intersection_9, mercury__set_ordlist__Intersection_9);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__intersect_loop_3_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_16,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word mercury__set_ordlist__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__set_ordlist__succeeded = (mercury__set_ordlist__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word mercury__set_ordlist__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__Var_20 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__set_ordlist__succeeded = (mercury__set_ordlist__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            else
              {
                MR_Box mercury__set_ordlist__Y_9 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__set_ordlist__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__set_ordlist__R_12;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, &mercury__set_ordlist__R_12, mercury__set_ordlist__Var_20, mercury__set_ordlist__Y_9);
                }
                switch (mercury__set_ordlist__R_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__Var_19;

                        mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__set_ordlist__Intersection0_13;
                      MR_Box mercury__set_ordlist__Var_17;
                      MR_Word mercury__set_ordlist__Var_18;

                      {
                        mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, mercury__set_ordlist__Var_19, mercury__set_ordlist__Ys_10, &mercury__set_ordlist__Intersection0_13);
                      }
                      mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__set_ordlist__succeeded)
                        {
                          mercury__set_ordlist__Var_17 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__3_3, (MR_Integer) 0));
                          mercury__set_ordlist__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__3_3, (MR_Integer) 1)));
                          {
                            mercury__set_ordlist__succeeded = mercury__builtin__unify_2_p_0(mercury__set_ordlist__TypeInfo_for_T_16, mercury__set_ordlist__Var_20, mercury__set_ordlist__Var_17);
                          }
                          if (mercury__set_ordlist__succeeded)
                            {
                              mercury__set_ordlist__succeeded = mercury__list____Unify____list_1_0(mercury__set_ordlist__TypeInfo_for_T_16, mercury__set_ordlist__Intersection0_13, mercury__set_ordlist__Var_18);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Ys_10;

                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
        return mercury__set_ordlist__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__set_ordlist__intersect_loop_3_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_16,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2,
  MR_Word * mercury__set_ordlist__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_ordlist__succeeded;

        if ((mercury__set_ordlist__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__set_ordlist__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__set_ordlist__Var_18 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__set_ordlist__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__set_ordlist__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Box mercury__set_ordlist__Y_9 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__set_ordlist__Ys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__set_ordlist__R_12;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, &mercury__set_ordlist__R_12, mercury__set_ordlist__Var_18, mercury__set_ordlist__Y_9);
                }
                switch (mercury__set_ordlist__R_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__1_1 = mercury__set_ordlist__Var_17;

                        mercury__set_ordlist__HeadVar__1_1 = mercury__set_ordlist__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__set_ordlist__Intersection0_13;

                      {
                        mercury__set_ordlist__intersect_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_16, mercury__set_ordlist__Var_17, mercury__set_ordlist__Ys_10, &mercury__set_ordlist__Intersection0_13);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__set_ordlist__HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = mercury__set_ordlist__Var_18;
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_ordlist__Intersection0_13));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__set_ordlist__next_value_of_HeadVar__2_2 = mercury__set_ordlist__Ys_10;

                        mercury__set_ordlist__HeadVar__2_2 = mercury__set_ordlist__next_value_of_HeadVar__2_2;
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

MR_bool MR_CALL 
mercury__set_ordlist__is_non_empty_1_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Box mercury__set_ordlist__Var_2;
    MR_Word mercury__set_ordlist__Var_3;

    mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set_ordlist__succeeded)
      {
        mercury__set_ordlist__Var_2 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 0));
        mercury__set_ordlist__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 1)));
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__non_empty_1_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Box mercury__set_ordlist__Var_2;
    MR_Word mercury__set_ordlist__Var_3;

    mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set_ordlist__succeeded)
      {
        mercury__set_ordlist__Var_2 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 0));
        mercury__set_ordlist__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 1)));
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__is_empty_1_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_3,
  MR_Word mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_2 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;

    mercury__set_ordlist__succeeded = (mercury__set_ordlist__Var_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__empty_1_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for__T_3,
  MR_Word mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_2 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;

    mercury__set_ordlist__succeeded = (mercury__set_ordlist__Var_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__equal_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_4,
  MR_Word mercury__set_ordlist__Set_3,
  MR_Word mercury__set_ordlist__Set_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    {
      mercury__set_ordlist__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set_ordlist__TypeInfo_for_T_4, mercury__set_ordlist__Set_2, mercury__set_ordlist__Set_3);
    }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist____Unify____set_ordlist_1_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_7,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Integer mercury__set_ordlist__CastX_5 = (MR_Integer) mercury__set_ordlist__HeadVar__1_1;
    MR_Integer mercury__set_ordlist__CastY_6 = (MR_Integer) mercury__set_ordlist__HeadVar__2_2;

    mercury__set_ordlist__succeeded = (mercury__set_ordlist__CastX_5 == mercury__set_ordlist__CastY_6);
    if (mercury__set_ordlist__succeeded)
      mercury__set_ordlist__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__set_ordlist__ArgX1_3 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
        MR_Word mercury__set_ordlist__ArgY1_4 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;

        {
          mercury__set_ordlist__succeeded = mercury__list____Unify____list_1_0(mercury__set_ordlist__TypeInfo_for_T_7, mercury__set_ordlist__ArgX1_3, mercury__set_ordlist__ArgY1_4);
        }
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__is_singleton_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_6,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Box * mercury__set_ordlist__X_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_4 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
    MR_Word mercury__set_ordlist__Var_5;

    mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__X_3 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 0));
        mercury__set_ordlist__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 1)));
        mercury__set_ordlist__succeeded = (mercury__set_ordlist__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__set_ordlist__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__make_singleton_set_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Box mercury__set_ordlist__T_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4;
    MR_Word mercury__set_ordlist__Var_7;
    MR_Word mercury__set_ordlist__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_7, 0) = mercury__set_ordlist__T_3;
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_7, 1) = ((MR_Box) (mercury__set_ordlist__Var_8));
    }
    mercury__set_ordlist__S_4 = (MR_Word) mercury__set_ordlist__Var_7;
    return mercury__set_ordlist__S_4;
  }
}

MR_bool MR_CALL 
mercury__set_ordlist__singleton_set_2_p_1(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_6,
  MR_Box * mercury__set_ordlist__X_3,
  MR_Word mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_4 = (MR_Word) mercury__set_ordlist__HeadVar__2_2;
    MR_Word mercury__set_ordlist__Var_5;

    mercury__set_ordlist__succeeded = ((MR_tag((MR_Word) mercury__set_ordlist__Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set_ordlist__succeeded)
      {
        *mercury__set_ordlist__X_3 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 0));
        mercury__set_ordlist__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, (MR_Integer) 1)));
        mercury__set_ordlist__succeeded = (mercury__set_ordlist__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__set_ordlist__succeeded;
  }
}

void MR_CALL 
mercury__set_ordlist__singleton_set_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_6,
  MR_Box mercury__set_ordlist__X_3,
  MR_Word * mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_4;
    MR_Word mercury__set_ordlist__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, 0) = mercury__set_ordlist__X_3;
      MR_hl_field(MR_mktag(1), mercury__set_ordlist__Var_4, 1) = ((MR_Box) (mercury__set_ordlist__Var_5));
    }
    *mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__Var_4;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__to_sorted_list_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__S_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Xs_4 = (MR_Word) mercury__set_ordlist__S_3;

    return mercury__set_ordlist__Xs_4;
  }
}

void MR_CALL 
mercury__set_ordlist__to_sorted_list_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_4,
  MR_Word mercury__set_ordlist__HeadVar__1_1,
  MR_Word * mercury__set_ordlist__List_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;

    *mercury__set_ordlist__List_3 = (MR_Word) mercury__set_ordlist__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__from_sorted_list_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__List_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_4;
    MR_Word mercury__set_ordlist__List_7;

    if ((mercury__set_ordlist__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_8 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__List_3, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__List_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_3_8, mercury__set_ordlist__V_4_9, &mercury__set_ordlist__List_7);
        }
      }
    mercury__set_ordlist__Set_4 = (MR_Word) mercury__set_ordlist__List_7;
    return mercury__set_ordlist__Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__sorted_list_to_set_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__Xs_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4;
    MR_Word mercury__set_ordlist__List_7;

    if ((mercury__set_ordlist__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_8 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Xs_3, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__Xs_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_3_8, mercury__set_ordlist__V_4_9, &mercury__set_ordlist__List_7);
        }
      }
    mercury__set_ordlist__S_4 = (MR_Word) mercury__set_ordlist__List_7;
    return mercury__set_ordlist__S_4;
  }
}

void MR_CALL 
mercury__set_ordlist__sorted_list_to_set_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__List0_3,
  MR_Word * mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_4;

    if ((mercury__set_ordlist__List0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_ordlist__List_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_ordlist__V_3_6 = (MR_hl_field(MR_mktag(1), mercury__set_ordlist__List0_3, (MR_Integer) 0));
        MR_Word mercury__set_ordlist__V_4_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_ordlist__List0_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_3_6, mercury__set_ordlist__V_4_7, &mercury__set_ordlist__List_4);
        }
      }
    *mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__List_4;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__from_list_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__List_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Set_4;
    MR_Word mercury__set_ordlist__List_7;
    MR_Integer mercury__set_ordlist__V_5_10;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__List_3, (MR_Integer) 0, &mercury__set_ordlist__V_5_10);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_5_10, mercury__set_ordlist__List_3, &mercury__set_ordlist__List_7);
    }
    mercury__set_ordlist__Set_4 = (MR_Word) mercury__set_ordlist__List_7;
    return mercury__set_ordlist__Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__list_to_set_1_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__Xs_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_4;
    MR_Word mercury__set_ordlist__List_7;
    MR_Integer mercury__set_ordlist__V_5_10;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__Xs_3, (MR_Integer) 0, &mercury__set_ordlist__V_5_10);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_5_10, mercury__set_ordlist__Xs_3, &mercury__set_ordlist__List_7);
    }
    mercury__set_ordlist__S_4 = (MR_Word) mercury__set_ordlist__List_7;
    return mercury__set_ordlist__S_4;
  }
}

void MR_CALL 
mercury__set_ordlist__list_to_set_2_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_5,
  MR_Word mercury__set_ordlist__List0_3,
  MR_Word * mercury__set_ordlist__HeadVar__2_2)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__List_4;
    MR_Integer mercury__set_ordlist__V_5_8;

    {
      mercury__list__length_acc_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__List0_3, (MR_Integer) 0, &mercury__set_ordlist__V_5_8);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set_ordlist__TypeInfo_for_T_5, mercury__set_ordlist__V_5_8, mercury__set_ordlist__List0_3, &mercury__set_ordlist__List_4);
    }
    *mercury__set_ordlist__HeadVar__2_2 = (MR_Word) mercury__set_ordlist__List_4;
  }
}

MR_Word MR_CALL 
mercury__set_ordlist__init_0_f_0(
  MR_Word mercury__set_ordlist__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set_ordlist__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__set_ordlist__S_2;
  }
}

void MR_CALL 
mercury__set_ordlist__init_1_p_0(
  MR_Word mercury__set_ordlist__TypeInfo_for__T_3,
  MR_Word * mercury__set_ordlist__HeadVar__1_1)
{
  {
    MR_bool mercury__set_ordlist__succeeded;
    MR_Word mercury__set_ordlist__Var_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__set_ordlist__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

void mercury__set_ordlist__init(void)
{
}

void mercury__set_ordlist__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
}

void mercury__set_ordlist__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set_ordlist__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module set_ordlist. */
