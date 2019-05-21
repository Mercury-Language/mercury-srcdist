/*
** Automatically generated from `set_unordlist.m'
** by the Mercury compiler,
** version rotd-2017-11-22
** configured for x86_64-pc-linux-gnu.
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


// :- module set_unordlist.
// :- implementation.

/*
INIT mercury__set_unordlist__init
ENDINIT
*/

#include "set_unordlist.mih"


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




static const MR_Integer mercury__set_unordlist__set_unordlist__functor_number_map_set_unordlist_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_unordlist__list__pti_list_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__set_unordlist__set_unordlist__notag_functor_desc_set_unordlist_1;

static MR_Integer MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__set_unordlist____Unify____set_unordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__set_unordlist____Compare____set_unordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__set_unordlist_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_unordlist_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_unordlist_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_unordlist_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_unordlist_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_unordlist_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_unordlist_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_unordlist_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_unordlist_scalar_common_2[0])),
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
#include "uint8.mh"
#include "version_array.mh"



static const MR_Integer mercury__set_unordlist__set_unordlist__functor_number_map_set_unordlist_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_unordlist__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_NotagFunctorDesc mercury__set_unordlist__set_unordlist__notag_functor_desc_set_unordlist_1 = {
  (MR_String) "sul",
  (MR_PseudoTypeInfo) &mercury__set_unordlist__list__pti_list_1__pseudo_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__set_unordlist__set_unordlist__type_ctor_info_set_unordlist_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__set_unordlist____Unify____set_unordlist_1_0_10001)),
  ((MR_Box) (mercury__set_unordlist____Compare____set_unordlist_1_0_10001)),
  (MR_String) "set_unordlist",
  (MR_String) "set_unordlist",
  {     &mercury__set_unordlist__set_unordlist__notag_functor_desc_set_unordlist_1 },
  {     &mercury__set_unordlist__set_unordlist__notag_functor_desc_set_unordlist_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__set_unordlist__set_unordlist__functor_number_map_set_unordlist_1
};

static MR_Integer MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set_unordlist____Compare____set_unordlist_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__list____Compare____list_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__set_unordlist____Unify____set_unordlist_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__divide_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word Set_6 = (MR_Word) HeadVar__2_2;
    MR_Word RevTruePart_7;
    MR_Word RevFalsePart_8;
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_unordlist__divide_2_6_p_0(TypeInfo_for_T_11, Pred_5, Set_6, Var_9, &RevTruePart_7, Var_10, &RevFalsePart_8);
    *HeadVar__3_3 = (MR_Word) RevTruePart_7;
    *HeadVar__4_4 = (MR_Word) RevFalsePart_8;
  }
}

void MR_CALL 
mercury__set_unordlist__filter_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Pred_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  {
    MR_Word Set_11 = (MR_Word) Set_6;
    MR_Word RevTruePart_12;
    MR_Word RevFalsePart_13;
    MR_Word Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_unordlist__divide_2_6_p_0(TypeInfo_for_T_9, Pred_5, Set_11, Var_14, &RevTruePart_12, Var_15, &RevFalsePart_13);
    *TrueSet_7 = (MR_Word) RevTruePart_12;
    *FalseSet_8 = (MR_Word) RevFalsePart_13;
  }
}

void MR_CALL 
mercury__set_unordlist__filter_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Pred_4,
  MR_Word Set_5,
  MR_Word * TrueSet_6)
{
  {
    MR_Word Set_10 = (MR_Word) Set_5;
    MR_Word RevTruePart_11;
    MR_Word Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word RevFalsePart_12;

    mercury__set_unordlist__divide_2_6_p_0(TypeInfo_for_T_8, Pred_4, Set_10, Var_13, &RevTruePart_11, Var_14, &RevFalsePart_12);
    *TrueSet_6 = (MR_Word) RevTruePart_11;
  }
}

void MR_CALL 
mercury__set_unordlist__divide_2_6_p_0(
  MR_Word TypeInfo_for_T1_27,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevTrue_0_3,
  MR_Word * STATE_VARIABLE_RevTrue_4,
  MR_Word STATE_VARIABLE_RevFalse_0_5,
  MR_Word * STATE_VARIABLE_RevFalse_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevFalse_6 = STATE_VARIABLE_RevFalse_0_5;
      *STATE_VARIABLE_RevTrue_4 = STATE_VARIABLE_RevTrue_0_3;
    }
    else
    {
      MR_Box H_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word T_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_RevTrue_23_23;
      MR_Word STATE_VARIABLE_RevFalse_24_24;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevTrue_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevFalse_0_5;

      succeeded = func_0(((MR_Box) HeadVar__1_1), H_15);
      if (succeeded)
      {
        {
          STATE_VARIABLE_RevTrue_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTrue_23_23, 0) = H_15;
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTrue_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevTrue_0_3));
        }
        STATE_VARIABLE_RevFalse_24_24 = STATE_VARIABLE_RevFalse_0_5;
      }
      else
      {
        {
          STATE_VARIABLE_RevFalse_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFalse_24_24, 0) = H_15;
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFalse_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevFalse_0_5));
        }
        STATE_VARIABLE_RevTrue_23_23 = STATE_VARIABLE_RevTrue_0_3;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = T_16;
      next_value_of_STATE_VARIABLE_RevTrue_0_3 = STATE_VARIABLE_RevTrue_23_23;
      next_value_of_STATE_VARIABLE_RevFalse_0_5 = STATE_VARIABLE_RevFalse_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevTrue_0_3 = next_value_of_STATE_VARIABLE_RevTrue_0_3;
      STATE_VARIABLE_RevFalse_0_5 = next_value_of_STATE_VARIABLE_RevFalse_0_5;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__all_true_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word L_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_5, P_3, L_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold6_14_p_5(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold6_14_p_4(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold6_14_p_3(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold6_14_p_2(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    mercury__list__foldl6_14_p_2(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

void MR_CALL 
mercury__set_unordlist__fold6_14_p_1(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    mercury__list__foldl6_14_p_1(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

void MR_CALL 
mercury__set_unordlist__fold6_14_p_0(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Set_52 = (MR_Word) S_16;
    MR_Integer V_5_55;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_42, Set_52, (MR_Integer) 0, &V_5_55);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_42, V_5_55, Set_52, &Var_35);
    mercury__list__foldl6_14_p_0(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold5_12_p_5(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold5_12_p_4(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold5_12_p_3(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold5_12_p_2(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    mercury__list__foldl5_12_p_2(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set_unordlist__fold5_12_p_1(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    mercury__list__foldl5_12_p_1(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set_unordlist__fold5_12_p_0(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Set_45 = (MR_Word) S_14;
    MR_Integer V_5_48;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_36, Set_45, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_36, V_5_48, Set_45, &Var_30);
    mercury__list__foldl5_12_p_0(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold4_10_p_5(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold4_10_p_4(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold4_10_p_3(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold4_10_p_2(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    mercury__list__foldl4_10_p_2(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set_unordlist__fold4_10_p_1(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    mercury__list__foldl4_10_p_1(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set_unordlist__fold4_10_p_0(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Set_38 = (MR_Word) S_12;
    MR_Integer V_5_41;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_30, Set_38, (MR_Integer) 0, &V_5_41);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_30, V_5_41, Set_38, &Var_25);
    mercury__list__foldl4_10_p_0(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold3_8_p_5(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold3_8_p_4(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold3_8_p_3(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold3_8_p_2(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    mercury__list__foldl3_8_p_2(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set_unordlist__fold3_8_p_1(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    mercury__list__foldl3_8_p_1(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set_unordlist__fold3_8_p_0(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Set_31 = (MR_Word) S_10;
    MR_Integer V_5_34;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_24, Set_31, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_24, V_5_34, Set_31, &Var_20);
    mercury__list__foldl3_8_p_0(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold2_6_p_5(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold2_6_p_4(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold2_6_p_3(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold2_6_p_2(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    mercury__list__foldl2_6_p_2(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set_unordlist__fold2_6_p_1(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    mercury__list__foldl2_6_p_1(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set_unordlist__fold2_6_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Set_24 = (MR_Word) S_8;
    MR_Integer V_5_27;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_18, Set_24, (MR_Integer) 0, &V_5_27);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_18, V_5_27, Set_24, &Var_15);
    mercury__list__foldl2_6_p_0(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold_4_p_5(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold_4_p_4(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__fold_4_p_3(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__fold_4_p_2(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    mercury__list__foldl_4_p_2(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set_unordlist__fold_4_p_1(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    mercury__list__foldl_4_p_1(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set_unordlist__fold_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Set_17 = (MR_Word) S_6;
    MR_Integer V_5_20;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_12, Set_17, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_12, V_5_20, Set_17, &Var_10);
    mercury__list__foldl_4_p_0(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

MR_Box MR_CALL 
mercury__set_unordlist__fold_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  {
    MR_Box B_8;
    MR_Word Var_9;
    MR_Word Set_15 = (MR_Word) S_6;
    MR_Integer V_5_18;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_10, Set_15, (MR_Integer) 0, &V_5_18);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_10, V_5_18, Set_15, &Var_9);
    mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, Var_9, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_15_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      V_15_13 = func_0(((MR_Box) Var_18), V_10_9, HeadVar__3_3);
      // direct tailcall eliminated
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
mercury__set_unordlist__filter_map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word PF_4,
  MR_Word S1_5)
{
  {
    MR_Word S2_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Set_14 = (MR_Word) S1_5;
    MR_Integer V_5_17;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_9, Set_14, (MR_Integer) 0, &V_5_17);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_9, V_5_17, Set_14, &Var_8);
    mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, Var_8, &Var_7);
    S2_6 = (MR_Word) Var_7;
    return S2_6;
  }
}

static void MR_CALL 
mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_9_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));

      succeeded = func_0(((MR_Box) Var_16), V_6_6, &V_9_9);
      if (succeeded)
      {
        MR_Word V_10_10;

        mercury__set_unordlist__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(Var_16, V_7_7, &V_10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_9_9;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_10_10));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = V_7_7;

        // direct tailcall eliminated
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word F_4,
  MR_Word S1_5)
{
  {
    MR_Word S2_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Set_14 = (MR_Word) S1_5;
    MR_Integer V_5_17;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T1_9, Set_14, (MR_Integer) 0, &V_5_17);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T1_9, V_5_17, Set_14, &Var_8);
    Var_7 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, Var_8);
    S2_6 = (MR_Word) Var_7;
    return S2_6;
  }
}

void MR_CALL 
mercury__set_unordlist__count_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1,
  MR_Integer * Count_4)
{
  {
    MR_Word Set_3 = (MR_Word) HeadVar__1_1;
    MR_Word Elems_5;
    MR_Word V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__list__remove_dups_loop_3_p_0(TypeInfo_for_T_6, Set_3, V_5_9, &Elems_5);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_6, Elems_5, (MR_Integer) 0, Count_4);
  }
}

MR_Integer MR_CALL 
mercury__set_unordlist__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  {
    MR_Integer Count_4;
    MR_Word Set_7 = (MR_Word) Set_3;
    MR_Word Elems_8;
    MR_Word V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__list__remove_dups_loop_3_p_0(TypeInfo_for_T_5, Set_7, V_5_11, &Elems_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Elems_8, (MR_Integer) 0, &Count_4);
    return Count_4;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;

    mercury__set_unordlist__difference_2_3_p_0(TypeInfo_for_T_7, S2_5, S1_4, &S3_6);
    return S3_6;
  }
}

void MR_CALL 
mercury__set_unordlist__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * C_6)
{
  mercury__set_unordlist__difference_2_3_p_0(TypeInfo_for_T_7, B_5, A_4, C_6);
}

void MR_CALL 
mercury__set_unordlist__difference_2_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * C_3)
{
  while (MR_TRUE)
  {
    MR_Word Var_14 = (MR_Word) HeadVar__1_1;

    // setup for model_det tailcalls optimized into a loop
    if ((Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *C_3 = HeadVar__2_2;
    else
    {
      MR_Box E_6 = (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0));
      MR_Word Es_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1)));
      MR_Word B_10;
      MR_Word Var_12;
      MR_Word STATE_VARIABLE_S_0_17 = (MR_Word) HeadVar__2_2;
      MR_Word STATE_VARIABLE_S_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__list__delete_all_3_p_1(TypeInfo_for_T_13, STATE_VARIABLE_S_0_17, E_6, &STATE_VARIABLE_S_18);
      B_10 = (MR_Word) STATE_VARIABLE_S_18;
      Var_12 = (MR_Word) Es_7;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Var_12;
      next_value_of_HeadVar__2_2 = B_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4 = (MR_Word) Sets_3;

    mercury__set_unordlist__power_intersect_2_p_0(TypeInfo_for_T_5, Var_4, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;

    mercury__set_unordlist__power_intersect_2_p_0(TypeInfo_for_T_5, SS_3, &S_4);
    return S_4;
  }
}

void MR_CALL 
mercury__set_unordlist__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_14 = (MR_Word) HeadVar__1_1;

    if ((Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      *HeadVar__2_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    else
    {
      MR_Word S0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)));
      MR_Word Ss_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1)));

      if ((Ss_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__2_2 = S0_5;
      else
      {
        MR_Word S1_10;
        MR_Word Var_12 = (MR_Word) Ss_6;
        MR_Word S0_15;
        MR_Word S1_16;
        MR_Word S_17;
        MR_Word Var_18;

        mercury__set_unordlist__power_intersect_2_p_0(TypeInfo_for_T_13, Var_12, &S1_10);
        S0_15 = (MR_Word) S1_10;
        S1_16 = (MR_Word) S0_5;
        Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__set_unordlist__intersect_2_4_p_0(TypeInfo_for_T_13, S0_15, S1_16, Var_18, &S_17);
        *HeadVar__2_2 = (MR_Word) S_17;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word S0_8 = (MR_Word) S1_4;
    MR_Word S1_9 = (MR_Word) S2_5;
    MR_Word S_10;
    MR_Word Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_unordlist__intersect_2_4_p_0(TypeInfo_for_T_7, S0_8, S1_9, Var_11, &S_10);
    S3_6 = (MR_Word) S_10;
    return S3_6;
  }
}

void MR_CALL 
mercury__set_unordlist__intersect_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word S0_4 = (MR_Word) HeadVar__1_1;
    MR_Word S1_5 = (MR_Word) HeadVar__2_2;
    MR_Word S_6;
    MR_Word Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_unordlist__intersect_2_4_p_0(TypeInfo_for_T_8, S0_4, S1_5, Var_7, &S_6);
    *HeadVar__3_3 = (MR_Word) S_6;
  }
}

void MR_CALL 
mercury__set_unordlist__intersect_2_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word S1_2,
  MR_Word HeadVar__3_3,
  MR_Word * S_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *S_4 = HeadVar__3_3;
    else
    {
      MR_Box E_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word S0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word S3_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, E_7, S1_2);
      if (succeeded)
        {
          S3_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), S3_12, 0) = E_7;
          MR_hl_field(MR_mktag(1), S3_12, 1) = ((MR_Box) (HeadVar__3_3));
        }
      else
        S3_12 = HeadVar__3_3;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = S0_8;
      next_value_of_HeadVar__3_3 = S3_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;

    mercury__set_unordlist__power_union_2_p_0(TypeInfo_for_T_5, SS_3, &S_4);
    return S_4;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__union_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word LS_3)
{
  {
    MR_Word S_4;
    MR_Word Var_5 = (MR_Word) LS_3;

    mercury__set_unordlist__power_union_2_p_0(TypeInfo_for_T_6, Var_5, &S_4);
    return S_4;
  }
}

void MR_CALL 
mercury__set_unordlist__power_union_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word PS_3 = (MR_Word) HeadVar__1_1;
    MR_Word S_4;
    MR_Word S0_5 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word S1_6;
    MR_Word Var_7;
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer V_5_12;

    mercury__set_unordlist__power_union_2_3_p_0(TypeInfo_for_T_8, PS_3, S0_5, &Var_7);
    S1_6 = (MR_Word) Var_7;
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_8, S1_6, (MR_Integer) 0, &V_5_12);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_8, V_5_12, S1_6, &S_4);
    *HeadVar__2_2 = (MR_Word) S_4;
  }
}

void MR_CALL 
mercury__set_unordlist__power_union_2_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_S_0_2,
  MR_Word * STATE_VARIABLE_S_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_S_3 = STATE_VARIABLE_S_0_2;
    else
    {
      MR_Word T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Ts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_S_12_12;
      MR_Word Set0_15 = (MR_Word) STATE_VARIABLE_S_0_2;
      MR_Word Set1_16 = (MR_Word) T_7;
      MR_Word Set_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_S_0_2;

      mercury__list__append_3_p_1(TypeInfo_for_T_14, Set1_16, Set0_15, &Set_17);
      STATE_VARIABLE_S_12_12 = (MR_Word) Set_17;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Ts_8;
      next_value_of_STATE_VARIABLE_S_0_2 = STATE_VARIABLE_S_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_S_0_2 = next_value_of_STATE_VARIABLE_S_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word Set0_8 = (MR_Word) S1_4;
    MR_Word Set1_9 = (MR_Word) S2_5;
    MR_Word Set_10;

    mercury__list__append_3_p_1(TypeInfo_for_T_7, Set1_9, Set0_8, &Set_10);
    S3_6 = (MR_Word) Set_10;
    return S3_6;
  }
}

void MR_CALL 
mercury__set_unordlist__union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Set0_4 = (MR_Word) HeadVar__1_1;
    MR_Word Set1_5 = (MR_Word) HeadVar__2_2;
    MR_Word Set_6;

    mercury__list__append_3_p_1(TypeInfo_for_T_7, Set1_5, Set0_4, &Set_6);
    *HeadVar__3_3 = (MR_Word) Set_6;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box * E_4,
  MR_Word Set0_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Set_6;
    MR_Word Var_10;
    MR_Word Set_13 = (MR_Word) Set0_5;
    MR_Integer V_5_16;
    MR_Integer V_5_21;
    MR_Box Var_7;
    MR_Word Var_8;

    succeeded = ((MR_tag((MR_Word) Set_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_7 = (MR_hl_field(MR_mktag(1), Set_13, (MR_Integer) 0));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_13, (MR_Integer) 1)));
      V_5_21 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T_11, Set_13, V_5_21, &V_5_16);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_11, V_5_16, Set_13, &Var_10);
      succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        *E_4 = (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0));
        Set_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1)));
        *HeadVar__3_3 = (MR_Word) Set_6;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_S_0_2,
  MR_Word * STATE_VARIABLE_S_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_S_3 = STATE_VARIABLE_S_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_S_12_12;
      MR_Word S0_16 = (MR_Word) STATE_VARIABLE_S_0_2;
      MR_Word STATE_VARIABLE_S_0_22;
      MR_Word STATE_VARIABLE_S_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_S_0_2;

      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_14, X_7, S0_16);
      if (succeeded)
      {
        STATE_VARIABLE_S_0_22 = (MR_Word) STATE_VARIABLE_S_0_2;
        mercury__list__delete_all_3_p_1(TypeInfo_for_T_14, STATE_VARIABLE_S_0_22, X_7, &STATE_VARIABLE_S_23);
        STATE_VARIABLE_S_12_12 = (MR_Word) STATE_VARIABLE_S_23;
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Xs_8;
        next_value_of_STATE_VARIABLE_S_0_2 = STATE_VARIABLE_S_12_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_S_0_2 = next_value_of_STATE_VARIABLE_S_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__remove_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word S0_5 = (MR_Word) HeadVar__2_2;
    MR_Word STATE_VARIABLE_S_0_12;
    MR_Word STATE_VARIABLE_S_13;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_9, E_4, S0_5);
    if (succeeded)
    {
      STATE_VARIABLE_S_0_12 = (MR_Word) HeadVar__2_2;
      mercury__list__delete_all_3_p_1(TypeInfo_for_T_9, STATE_VARIABLE_S_0_12, E_4, &STATE_VARIABLE_S_13);
      *HeadVar__3_3 = (MR_Word) STATE_VARIABLE_S_13;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__delete_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;

    mercury__set_unordlist__delete_list_3_p_0(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_S_0_6, &STATE_VARIABLE_S_7);
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_unordlist__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_S_0_2,
  MR_Word * STATE_VARIABLE_S_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_S_3 = STATE_VARIABLE_S_0_2;
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_S_12_12;
      MR_Word STATE_VARIABLE_S_0_17 = (MR_Word) STATE_VARIABLE_S_0_2;
      MR_Word STATE_VARIABLE_S_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_S_0_2;

      mercury__list__delete_all_3_p_1(TypeInfo_for_T_14, STATE_VARIABLE_S_0_17, X_7, &STATE_VARIABLE_S_18);
      STATE_VARIABLE_S_12_12 = (MR_Word) STATE_VARIABLE_S_18;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Xs_8;
      next_value_of_STATE_VARIABLE_S_0_2 = STATE_VARIABLE_S_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_S_0_2 = next_value_of_STATE_VARIABLE_S_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__delete_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;
    MR_Word STATE_VARIABLE_S_0_12 = (MR_Word) STATE_VARIABLE_S_0_6;
    MR_Word STATE_VARIABLE_S_13;

    mercury__list__delete_all_3_p_1(TypeInfo_for_T_9, STATE_VARIABLE_S_0_12, T_5, &STATE_VARIABLE_S_13);
    STATE_VARIABLE_S_7 = (MR_Word) STATE_VARIABLE_S_13;
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_unordlist__delete_3_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word STATE_VARIABLE_S_0_6 = (MR_Word) HeadVar__2_2;
    MR_Word STATE_VARIABLE_S_7;

    mercury__list__delete_all_3_p_1(TypeInfo_for_T_9, STATE_VARIABLE_S_0_6, E_4, &STATE_VARIABLE_S_7);
    *HeadVar__3_3 = (MR_Word) STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_unordlist__delete_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word STATE_VARIABLE_S_0_6 = (MR_Word) HeadVar__2_2;
    MR_Word STATE_VARIABLE_S_7;

    mercury__list__delete_all_3_p_0(TypeInfo_for_T_9, STATE_VARIABLE_S_0_6, E_4, &STATE_VARIABLE_S_7);
    *HeadVar__3_3 = (MR_Word) STATE_VARIABLE_S_7;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;
    MR_Word STATE_VARIABLE_Set_0_12 = (MR_Word) STATE_VARIABLE_S_0_6;
    MR_Word STATE_VARIABLE_Set_13;

    mercury__list__append_3_p_1(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_Set_0_12, &STATE_VARIABLE_Set_13);
    STATE_VARIABLE_S_7 = (MR_Word) STATE_VARIABLE_Set_13;
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_unordlist__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word STATE_VARIABLE_Set_0_6 = (MR_Word) HeadVar__2_2;
    MR_Word STATE_VARIABLE_Set_7;

    mercury__list__append_3_p_1(TypeInfo_for_T_9, List_4, STATE_VARIABLE_Set_0_6, &STATE_VARIABLE_Set_7);
    *HeadVar__3_3 = (MR_Word) STATE_VARIABLE_Set_7;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__insert_new_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word S0_5 = (MR_Word) HeadVar__2_2;
    MR_Word S_6;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, E_4, S0_5);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      {
        S_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), S_6, 0) = E_4;
        MR_hl_field(MR_mktag(1), S_6, 1) = ((MR_Box) (S0_5));
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) S_6;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__insert_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;
    MR_Word S0_11 = (MR_Word) STATE_VARIABLE_S_0_6;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = T_5;
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (S0_11));
    }
    STATE_VARIABLE_S_7 = (MR_Word) Var_12;
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_unordlist__insert_3_p_1(
  MR_Word TypeInfo_for_T_7,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word S0_5 = (MR_Word) HeadVar__2_2;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = E_4;
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (S0_5));
    }
    *HeadVar__3_3 = (MR_Word) Var_6;
  }
}

void MR_CALL 
mercury__set_unordlist__insert_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word S0_5 = (MR_Word) HeadVar__2_2;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = E_4;
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (S0_5));
    }
    *HeadVar__3_3 = (MR_Word) Var_6;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3,
  MR_Box E_4)
{
  {
    MR_bool succeeded;
    MR_Word S_7 = (MR_Word) S_3;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_5, E_4, S_7);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box E_4,
  MR_Word S_5,
  MR_Word * R_6)
{
  {
    MR_bool succeeded;
    MR_Word S_9 = (MR_Word) S_5;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, E_4, S_9);
    if (succeeded)
      *R_6 = (MR_Integer) 1;
    else
      *R_6 = (MR_Integer) 0;
  }
}

void MR_CALL 
mercury__set_unordlist__member_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box * E_3,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Word S_4 = (MR_Word) HeadVar__2_2;

    mercury__list__member_2_p_1(TypeInfo_for_T_5, E_3, S_4, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__member_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box E_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word S_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_5, E_3, S_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__superset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S0_3,
  MR_Word S1_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_unordlist__subset_2_p_0(TypeInfo_for_T_5, S1_4, S0_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__is_non_empty_1_p_0(
  MR_Word TypeInfo_for__T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = (MR_Word) HeadVar__1_1;
    MR_Box Var_2;
    MR_Word Var_3;

    succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_2 = (MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0));
      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__non_empty_1_p_0(
  MR_Word TypeInfo_for__T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = (MR_Word) HeadVar__1_1;
    MR_Box Var_2;
    MR_Word Var_3;

    succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_2 = (MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0));
      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__is_empty_1_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_2 = (MR_Word) HeadVar__1_1;

    succeeded = (Var_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__empty_1_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_2 = (MR_Word) HeadVar__1_1;

    succeeded = (Var_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__equal_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_unordlist__subset_2_p_0(TypeInfo_for_T_5, SetA_3, SetB_4);
    if (succeeded)
      succeeded = mercury__set_unordlist__subset_2_p_0(TypeInfo_for_T_5, SetB_4, SetA_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__subset_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word S1_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_11 = (MR_Word) HeadVar__1_1;

    // setup for model_semi tailcalls optimized into a loop
    if ((Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Box E_5 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
      MR_Word S0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1)));
      MR_Word Var_9;
      MR_Word S_13 = (MR_Word) S1_2;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_10, E_5, S_13);
      if (succeeded)
      {
        Var_9 = (MR_Word) S0_6;
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_9;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Box * X_4)
{
  {
    MR_bool succeeded;
    MR_Word Xs_3 = (MR_Word) HeadVar__1_1;
    MR_Word Var_5;
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_8;
    MR_Integer V_5_13;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, Xs_3, (MR_Integer) 0, &V_5_13);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, V_5_13, Xs_3, &Var_5);
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *X_4 = (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1)));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_7, Var_6, Var_8);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__make_singleton_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box T_3)
{
  {
    MR_Word S_4;
    MR_Word Var_8;
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = T_3;
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_9));
    }
    S_4 = (MR_Word) Var_8;
    return S_4;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__singleton_set_2_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Box * X_1,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word Xs_14 = (MR_Word) Set_2;
    MR_Word Var_15;
    MR_Word Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_18;
    MR_Integer V_5_23;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_17, Xs_14, (MR_Integer) 0, &V_5_23);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_17, V_5_23, Xs_14, &Var_15);
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *X_1 = (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1)));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_17, Var_16, Var_18);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_unordlist__singleton_set_2_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Box X_1,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word Xs_9 = (MR_Word) Set_2;
    MR_Word Var_10;
    MR_Word Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_18;
    MR_Integer V_5_23;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = X_1;
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
    }
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_17, Xs_9, (MR_Integer) 0, &V_5_23);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_17, V_5_23, Xs_9, &Var_18);
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_17, Var_10, Var_18);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_unordlist__singleton_set_2_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box X_1,
  MR_Word * Set_2)
{
  {
    MR_Word Var_5;
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = X_1;
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) (Var_6));
    }
    *Set_2 = (MR_Word) Var_5;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  {
    MR_Word Xs_4;
    MR_Word Set_7 = (MR_Word) S_3;
    MR_Integer V_5_10;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Set_7, (MR_Integer) 0, &V_5_10);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, V_5_10, Set_7, &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__set_unordlist__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word * List_4)
{
  {
    MR_Word Set_3 = (MR_Word) HeadVar__1_1;
    MR_Integer V_5_8;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Set_3, (MR_Integer) 0, &V_5_8);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, V_5_8, Set_3, List_4);
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) List_3;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4 = (MR_Word) Xs_3;

    return S_4;
  }
}

void MR_CALL 
mercury__set_unordlist__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) List_3;
}

MR_Word MR_CALL 
mercury__set_unordlist__from_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) List_3;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set_unordlist__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) List_3;
}

MR_Word MR_CALL 
mercury__set_unordlist__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4 = (MR_Word) Xs_3;

    return S_4;
  }
}

void MR_CALL 
mercury__set_unordlist__init_1_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word Var_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

MR_Word MR_CALL 
mercury__set_unordlist__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_Word S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return S_2;
  }
}

static MR_bool MR_CALL 
mercury__set_unordlist____Unify____set_unordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_unordlist____Unify____set_unordlist_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__set_unordlist____Compare____set_unordlist_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__set_unordlist____Compare____set_unordlist_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__set_unordlist__init(void)
{
}

void mercury__set_unordlist__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set_unordlist__set_unordlist__type_ctor_info_set_unordlist_1);
}

void mercury__set_unordlist__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set_unordlist__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module set_unordlist.
