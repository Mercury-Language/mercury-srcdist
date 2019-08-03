/*
** Automatically generated from `bimap.m'
** by the Mercury compiler,
** version rotd-2019-08-03
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


// :- module bimap.
// :- implementation.

/*
INIT mercury__bimap__init
ENDINIT
*/

#include "bimap.mih"


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




static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1;

static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2];

static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0;

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1];

static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1];

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1];

static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1];

static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word V_5_5,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Box LambdaHeadVar__3_23,
  MR_Box * LambdaHeadVar__4_24);

static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__bimap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bimap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bimap_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bimap_scalar_common_4[3][2];




static /* final */ const MR_Box mercury__bimap_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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



static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1)
};

static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0 = {
  (MR_String) "bimap",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__bimap__bimap__field_types_bimap_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bimap__bimap__du_stag_ordered_bimap_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__bimap__bimap__type_ctor_info_bimap_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bimap____Unify____bimap_2_0_10001)),
  ((MR_Box) (mercury__bimap____Compare____bimap_2_0_10001)),
  (MR_String) "bimap",
  (MR_String) "bimap",
  {     mercury__bimap__bimap__du_name_ordered_bimap_2 },
  {     mercury__bimap__bimap__du_ptag_ordered_bimap_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bimap__bimap__functor_number_map_bimap_2
};

static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bimap____Compare____bimap_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_11, TypeInfo_for_V_12, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_V_12, TypeInfo_for_K_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_9, TypeInfo_for_V_10, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_V_10, TypeInfo_for_K_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bimap__reverse_map_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Reverse_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Reverse_4;
  }
}

MR_Word MR_CALL 
mercury__bimap__forward_map_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Forward_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return Forward_3;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_7(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_bool succeeded;
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl3_8_p_7(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_6(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_bool succeeded;
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl3_8_p_6(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_5(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_bool succeeded;
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl3_8_p_5(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl3_8_p_4(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl3_8_p_3(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl3_8_p_2(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl3_8_p_1(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word Pred_9,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16,
  MR_Box STATE_VARIABLE_B_0_17,
  MR_Box * STATE_VARIABLE_B_18,
  MR_Box STATE_VARIABLE_C_0_19,
  MR_Box * STATE_VARIABLE_C_20)
{
  {
    MR_Word Forward_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl3_8_p_0(TypeInfo_for_K_24, TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_9, Forward_10, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16, STATE_VARIABLE_B_0_17, STATE_VARIABLE_B_18, STATE_VARIABLE_C_0_19, STATE_VARIABLE_C_20);
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_bool succeeded;
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl2_6_p_6(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_bool succeeded;
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl2_6_p_5(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_bool succeeded;
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl2_6_p_4(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl2_6_p_3(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl2_6_p_2(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl2_6_p_1(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word Pred_7,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_A_0_12,
  MR_Box * STATE_VARIABLE_A_13,
  MR_Box STATE_VARIABLE_B_0_14,
  MR_Box * STATE_VARIABLE_B_15)
{
  {
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl2_6_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_A_20, TypeInfo_for_B_21, Pred_7, Forward_8, STATE_VARIABLE_A_0_12, STATE_VARIABLE_A_13, STATE_VARIABLE_B_0_14, STATE_VARIABLE_B_15);
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_5(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_bool succeeded;
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl_4_p_5(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_4(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_bool succeeded;
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl_4_p_4(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_3(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_bool succeeded;
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__tree234__foldl_4_p_3(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_2(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl_4_p_2(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_1(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl_4_p_1(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_A_14,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_List_0_9,
  MR_Box * STATE_VARIABLE_List_10)
{
  {
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__tree234__foldl_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_A_14, Pred_5, Forward_6, STATE_VARIABLE_List_0_9, STATE_VARIABLE_List_10);
  }
}

MR_Box MR_CALL 
mercury__bimap__foldl_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word Func_5,
  MR_Word HeadVar__2_2,
  MR_Box List0_8)
{
  {
    MR_Box HeadVar__4_4;
    MR_Word Forward_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_9, TypeInfo_for_V_10, TypeInfo_for_A_11, Func_5, Forward_6, List0_8, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
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
          MR_Box V_11_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box V_17_15;
          MR_Box V_18_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_12_11, HeadVar__3_3, &V_17_15);
          mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(Var_53, Var_54, Var_55, Var_56, V_10_9, V_11_10, V_17_15, &V_18_16);
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
          MR_Box V_22_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_23_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_24_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Box V_31_27;
          MR_Box V_32_28;
          MR_Box V_33_29;
          MR_Box V_34_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_25_22, HeadVar__3_3, &V_31_27);
          mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(Var_53, Var_54, Var_55, Var_56, V_21_18, V_22_19, V_31_27, &V_32_28);
          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_26_23, V_32_28, &V_33_29);
          mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(Var_53, Var_54, Var_55, Var_56, V_23_20, V_24_21, V_33_29, &V_34_30);
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
          MR_Box V_37_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_38_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_39_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_40_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box V_41_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box V_42_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Box V_50_44;
          MR_Box V_51_45;
          MR_Box V_52_46;
          MR_Box V_53_47;
          MR_Box V_54_48;
          MR_Box V_55_49;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_43_38, HeadVar__3_3, &V_50_44);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_51_45 = func_0(((MR_Box) (Var_56)), V_37_32, V_38_33, V_50_44);
          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_44_39, V_51_45, &V_52_46);
          mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(Var_53, Var_54, Var_55, Var_56, V_39_34, V_40_35, V_52_46, &V_53_47);
          mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_53, Var_54, Var_55, Var_56, V_45_40, V_53_47, &V_54_48);
          mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(Var_53, Var_54, Var_55, Var_56, V_41_36, V_42_37, V_54_48, &V_55_49);
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

static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__173__1_8_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word V_5_5,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Box LambdaHeadVar__3_23,
  MR_Box * LambdaHeadVar__4_24)
{
  {
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), V_5_5, (MR_Integer) 1))));

    *LambdaHeadVar__4_24 = func_0(((MR_Box) (V_5_5)), LambdaHeadVar__1_21, LambdaHeadVar__2_22, LambdaHeadVar__3_23);
  }
}

void MR_CALL 
mercury__bimap__map_values_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_W_12,
  MR_Word ValueMap_4,
  MR_Word BM0_5,
  MR_Word * BM_6)
{
  {
    MR_Word L0_7;
    MR_Word L_8;
    MR_Word Forward_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM0_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Forward_14, (MR_Word) ((MR_Unsigned) 0U), &L0_7);
    mercury__bimap__map_values_2_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_W_12, ValueMap_4, L0_7, (MR_Word) ((MR_Unsigned) 0U), &L_8);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_10, TypeInfo_for_W_12, L_8, (MR_Word) (&mercury__bimap_scalar_common_4[2]), BM_6);
  }
}

void MR_CALL 
mercury__bimap__map_values_2_4_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_List_0_3,
  MR_Word * STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_List_4 = STATE_VARIABLE_List_0_3;
    else
    {
      MR_Box Key_10;
      MR_Box Value0_11;
      MR_Word Tail0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Value_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_List_18_18;
      MR_Word Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_List_0_3;

      Key_10 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0));
      Value0_11 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), Key_10, Value0_11, &Value_14);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = Key_10;
        MR_hl_field(MR_mktag(0), Var_19, 1) = Value_14;
      }
      {
        STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (STATE_VARIABLE_List_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Tail0_12;
      next_value_of_STATE_VARIABLE_List_0_3 = STATE_VARIABLE_List_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_List_0_3 = next_value_of_STATE_VARIABLE_List_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__map_values_2_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_W_12,
  MR_Word ValueMap_4,
  MR_Word BM0_5)
{
  {
    MR_Word BM_6;
    MR_Word L0_7;
    MR_Word L_8;
    MR_Word Forward_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM0_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Forward_14, (MR_Word) ((MR_Unsigned) 0U), &L0_7);
    mercury__bimap__map_values_func_2_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_W_12, ValueMap_4, L0_7, (MR_Word) ((MR_Unsigned) 0U), &L_8);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_10, TypeInfo_for_W_12, L_8, (MR_Word) (&mercury__bimap_scalar_common_4[2]), &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__map_values_func_2_4_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_List_0_3,
  MR_Word * STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_List_4 = STATE_VARIABLE_List_0_3;
    else
    {
      MR_Box Key_10;
      MR_Box Value0_11;
      MR_Word Tail0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Value_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_List_18_18;
      MR_Word Var_19;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_List_0_3;

      Key_10 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0));
      Value0_11 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Value_14 = func_0(((MR_Box) (HeadVar__1_1)), Key_10, Value0_11);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = Key_10;
        MR_hl_field(MR_mktag(0), Var_19, 1) = Value_14;
      }
      {
        STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (STATE_VARIABLE_List_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Tail0_12;
      next_value_of_STATE_VARIABLE_List_0_3 = STATE_VARIABLE_List_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_List_0_3 = next_value_of_STATE_VARIABLE_List_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bimap__map_keys_3_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_L_12,
  MR_Word KeyMap_4,
  MR_Word BM0_5,
  MR_Word * BM_6)
{
  {
    MR_Word L0_7;
    MR_Word L_8;
    MR_Word Forward_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM0_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_10, Forward_14, (MR_Word) ((MR_Unsigned) 0U), &L0_7);
    mercury__bimap__map_keys_2_4_p_0(TypeInfo_for_V_10, TypeInfo_for_K_11, TypeInfo_for_L_12, KeyMap_4, L0_7, (MR_Word) ((MR_Unsigned) 0U), &L_8);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_L_12, TypeInfo_for_V_10, L_8, (MR_Word) (&mercury__bimap_scalar_common_4[1]), BM_6);
  }
}

void MR_CALL 
mercury__bimap__map_keys_2_4_p_0(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_L_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_List_0_3,
  MR_Word * STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_List_4 = STATE_VARIABLE_List_0_3;
    else
    {
      MR_Box Key0_10;
      MR_Box Value_11;
      MR_Word Tail0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Key_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_List_18_18;
      MR_Word Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_List_0_3;

      Key0_10 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0));
      Value_11 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), Value_11, Key0_10, &Key_14);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = Key_14;
        MR_hl_field(MR_mktag(0), Var_19, 1) = Value_11;
      }
      {
        STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (STATE_VARIABLE_List_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Tail0_12;
      next_value_of_STATE_VARIABLE_List_0_3 = STATE_VARIABLE_List_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_List_0_3 = next_value_of_STATE_VARIABLE_List_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__map_keys_2_f_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_L_12,
  MR_Word KeyMap_4,
  MR_Word BM0_5)
{
  {
    MR_Word BM_6;
    MR_Word L0_7;
    MR_Word L_8;
    MR_Word Forward_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM0_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_10, Forward_14, (MR_Word) ((MR_Unsigned) 0U), &L0_7);
    mercury__bimap__map_keys_func_2_4_p_0(TypeInfo_for_V_10, TypeInfo_for_K_11, TypeInfo_for_L_12, KeyMap_4, L0_7, (MR_Word) ((MR_Unsigned) 0U), &L_8);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_L_12, TypeInfo_for_V_10, L_8, (MR_Word) (&mercury__bimap_scalar_common_4[1]), &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__map_keys_func_2_4_p_0(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_L_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_List_0_3,
  MR_Word * STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_List_4 = STATE_VARIABLE_List_0_3;
    else
    {
      MR_Box Key0_10;
      MR_Box Value_11;
      MR_Word Tail0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Key_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_List_18_18;
      MR_Word Var_19;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_List_0_3;

      Key0_10 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0));
      Value_11 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1));
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Key_14 = func_0(((MR_Box) (HeadVar__1_1)), Value_11, Key0_10);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = Key_14;
        MR_hl_field(MR_mktag(0), Var_19, 1) = Value_11;
      }
      {
        STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (STATE_VARIABLE_List_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Tail0_12;
      next_value_of_STATE_VARIABLE_List_0_3 = STATE_VARIABLE_List_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_List_0_3 = next_value_of_STATE_VARIABLE_List_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bimap__apply_reverse_map_to_list_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word Vs_6,
  MR_Word * Ks_7)
{
  {
    MR_Word Reverse_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__map__apply_to_list_3_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, Vs_6, Reverse_5, Ks_7);
  }
}

MR_Word MR_CALL 
mercury__bimap__apply_reverse_map_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Word Vs_5)
{
  {
    MR_Word Ks_6;
    MR_Word Reverse_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 1))));

    mercury__map__apply_to_list_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Vs_5, Reverse_12, &Ks_6);
    return Ks_6;
  }
}

void MR_CALL 
mercury__bimap__apply_forward_map_to_list_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Word Ks_6,
  MR_Word * Vs_7)
{
  {
    MR_Word Forward_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Ks_6, Forward_4, Vs_7);
  }
}

MR_Word MR_CALL 
mercury__bimap__apply_forward_map_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Word Ks_5)
{
  {
    MR_Word Vs_6;
    MR_Word Forward_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 0))));

    mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, Forward_11, &Vs_6);
    return Vs_6;
  }
}

void MR_CALL 
mercury__bimap__det_from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * BM_6)
{
  {
    MR_Word L_7;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Ks_4, Vs_5, &L_7);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, L_7, (MR_Word) (&mercury__bimap_scalar_common_4[0]), BM_6);
  }
}

MR_Word MR_CALL 
mercury__bimap__det_from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  {
    MR_Word BM_6;
    MR_Word L_12;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &L_12);
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, L_12, (MR_Word) (&mercury__bimap_scalar_common_4[0]), &BM_6);
    return BM_6;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * BM_6)
{
  {
    MR_bool succeeded;
    MR_Word L_7;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Ks_4, Vs_5, &L_7);
    succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, L_7, (MR_Word) (&mercury__bimap_scalar_common_4[0]), BM_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5,
  MR_Word * BM_6)
{
  {
    MR_bool succeeded;
    MR_Word L_12;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &L_12);
    succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, L_12, (MR_Word) (&mercury__bimap_scalar_common_4[0]), BM_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__det_from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word L_3,
  MR_Word * Bimap_4)
{
  {
    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, L_3, (MR_Word) (&mercury__bimap_scalar_common_4[0]), Bimap_4);
  }
}

MR_Word MR_CALL 
mercury__bimap__det_from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word L_3)
{
  {
    MR_Word Bimap_4;

    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, L_3, (MR_Word) (&mercury__bimap_scalar_common_4[0]), &Bimap_4);
    return Bimap_4;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word L_3,
  MR_Word * Bimap_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, L_3, (MR_Word) (&mercury__bimap_scalar_common_4[0]), Bimap_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3,
  MR_Word * BM_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, (MR_Word) (&mercury__bimap_scalar_common_4[0]), BM_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Word * L_5)
{
  {
    MR_Word Forward_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Forward_3, (MR_Word) ((MR_Unsigned) 0U), L_5);
  }
}

MR_Word MR_CALL 
mercury__bimap__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word BM_3)
{
  {
    MR_Word AL_4;
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_3, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Forward_8, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
    return AL_4;
  }
}

MR_Integer MR_CALL 
mercury__bimap__count_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_3)
{
  {
    MR_Integer Count_4;
    MR_Word Forward_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_3, (MR_Integer) 0))));

    mercury__tree234__count_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Forward_5, &Count_4);
    return Count_4;
  }
}

void MR_CALL 
mercury__bimap__overlay_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word BMA_4,
  MR_Word BMB_5,
  MR_Word * BM_6)
{
  {
    MR_Word KVBs_7;
    MR_Word Forward_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BMB_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Forward_11, (MR_Word) ((MR_Unsigned) 0U), &KVBs_7);
    mercury__bimap__overlay_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, KVBs_7, BMA_4, BM_6);
  }
}

MR_Word MR_CALL 
mercury__bimap__overlay_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BMA_4,
  MR_Word BMB_5)
{
  {
    MR_Word BM_6;
    MR_Word KVBs_12;
    MR_Word Forward_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BMB_5, (MR_Integer) 0))));

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Forward_14, (MR_Word) ((MR_Unsigned) 0U), &KVBs_12);
    mercury__bimap__overlay_2_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVBs_12, BMA_4, &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__overlay_2_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
    else
    {
      MR_Box Key_7;
      MR_Box Value_8;
      MR_Word KeysValues_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BM_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      Key_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Value_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__bimap__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Key_7, Value_8, STATE_VARIABLE_BM_0_2, &STATE_VARIABLE_BM_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KeysValues_9;
      next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_values_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM0_4,
  MR_Word Vs_5)
{
  {
    MR_Word BM_6;

    mercury__bimap__delete_values_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Vs_5, BM0_4, &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__delete_values_3_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
    else
    {
      MR_Box Value_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Values_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BM_12_12;
      MR_Word Forward0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 0))));
      MR_Word Reverse0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 1))));
      MR_Box K_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_14, TypeInfo_for_K_15, Reverse0_21, Value_7, &K_22);
      if (succeeded)
      {
        MR_Word Forward_23;
        MR_Word Reverse_24;
        MR_Word V_7_35;
        MR_Word V_7_42;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_14, Forward0_20, K_22, &Forward_23, &V_7_35);
        mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_15, Reverse0_21, Value_7, &Reverse_24, &V_7_42);
        {
          STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (Forward_23));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (Reverse_24));
        }
      }
      else
        STATE_VARIABLE_BM_12_12 = STATE_VARIABLE_BM_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Values_8;
      next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_keys_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM0_4,
  MR_Word Ks_5)
{
  {
    MR_Word BM_6;

    mercury__bimap__delete_keys_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, BM0_4, &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__delete_keys_3_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
    else
    {
      MR_Box Key_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Keys_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BM_12_12;
      MR_Word Forward0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 0))));
      MR_Word Reverse0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 1))));
      MR_Box V_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, Forward0_20, Key_7, &V_22);
      if (succeeded)
      {
        MR_Word Forward_23;
        MR_Word Reverse_24;
        MR_Word V_7_35;
        MR_Word V_7_42;

        mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, Forward0_20, Key_7, &Forward_23, &V_7_35);
        mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_15, TypeInfo_for_K_14, Reverse0_21, V_22, &Reverse_24, &V_7_42);
        {
          STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (Forward_23));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (Reverse_24));
        }
      }
      else
        STATE_VARIABLE_BM_12_12 = STATE_VARIABLE_BM_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Keys_8;
      next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bimap__delete_value_3_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_K_15,
  MR_Box V_4,
  MR_Word STATE_VARIABLE_BM_0_11,
  MR_Word * STATE_VARIABLE_BM_12)
{
  {
    MR_bool succeeded;
    MR_Word Forward0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_11, (MR_Integer) 0))));
    MR_Word Reverse0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_11, (MR_Integer) 1))));
    MR_Box K_8;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_14, TypeInfo_for_K_15, Reverse0_7, V_4, &K_8);
    if (succeeded)
    {
      MR_Word Forward_9;
      MR_Word Reverse_10;
      MR_Word V_7_25;
      MR_Word V_7_32;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_14, Forward0_6, K_8, &Forward_9, &V_7_25);
      mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_15, Reverse0_7, V_4, &Reverse_10, &V_7_32);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_BM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Forward_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Reverse_10));
      }
    }
    else
      *STATE_VARIABLE_BM_12 = STATE_VARIABLE_BM_0_11;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_value_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word STATE_VARIABLE_BM_0_6,
  MR_Box V_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_BM_7;
    MR_Word Forward0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_6, (MR_Integer) 0))));
    MR_Word Reverse0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_6, (MR_Integer) 1))));
    MR_Box K_17;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_10, TypeInfo_for_K_9, Reverse0_16, V_5, &K_17);
    if (succeeded)
    {
      MR_Word Forward_18;
      MR_Word Reverse_19;
      MR_Word V_7_30;
      MR_Word V_7_37;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Forward0_15, K_17, &Forward_18, &V_7_30);
      mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_10, TypeInfo_for_K_9, Reverse0_16, V_5, &Reverse_19, &V_7_37);
      {
        STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_7, 0) = ((MR_Box) (Forward_18));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_7, 1) = ((MR_Box) (Reverse_19));
      }
    }
    else
      STATE_VARIABLE_BM_7 = STATE_VARIABLE_BM_0_6;
    return STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bimap__delete_key_3_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Box K_4,
  MR_Word STATE_VARIABLE_BM_0_11,
  MR_Word * STATE_VARIABLE_BM_12)
{
  {
    MR_bool succeeded;
    MR_Word Forward0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_11, (MR_Integer) 0))));
    MR_Word Reverse0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_11, (MR_Integer) 1))));
    MR_Box V_8;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, Forward0_6, K_4, &V_8);
    if (succeeded)
    {
      MR_Word Forward_9;
      MR_Word Reverse_10;
      MR_Word V_7_25;
      MR_Word V_7_32;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, Forward0_6, K_4, &Forward_9, &V_7_25);
      mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_15, TypeInfo_for_K_14, Reverse0_7, V_8, &Reverse_10, &V_7_32);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_BM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Forward_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Reverse_10));
      }
    }
    else
      *STATE_VARIABLE_BM_12 = STATE_VARIABLE_BM_0_11;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_key_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word STATE_VARIABLE_BM_0_6,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_BM_7;
    MR_Word Forward0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_6, (MR_Integer) 0))));
    MR_Word Reverse0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_6, (MR_Integer) 1))));
    MR_Box V_17;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Forward0_15, K_5, &V_17);
    if (succeeded)
    {
      MR_Word Forward_18;
      MR_Word Reverse_19;
      MR_Word V_7_30;
      MR_Word V_7_37;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Forward0_15, K_5, &Forward_18, &V_7_30);
      mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_10, TypeInfo_for_K_9, Reverse0_16, V_17, &Reverse_19, &V_7_37);
      {
        STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_7, 0) = ((MR_Box) (Forward_18));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_7, 1) = ((MR_Box) (Reverse_19));
      }
    }
    else
      STATE_VARIABLE_BM_7 = STATE_VARIABLE_BM_0_6;
    return STATE_VARIABLE_BM_7;
  }
}

MR_Word MR_CALL 
mercury__bimap__set_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Ks_5,
  MR_Word Vs_6,
  MR_Word BM0_7)
{
  {
    MR_Word BM_8;

    mercury__bimap__set_from_corresponding_lists_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_5, Vs_6, BM0_7, &BM_8);
    return BM_8;
  }
}

void MR_CALL 
mercury__bimap__set_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BM_0_3,
  MR_Word * STATE_VARIABLE_BM_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_BM_4 = STATE_VARIABLE_BM_0_3;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
          return;
        }
      }
      else
      {
        MR_Box Value_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Values_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_BM_27_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_BM_0_3;

        mercury__bimap__set_4_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, Var_32, Value_22, STATE_VARIABLE_BM_0_3, &STATE_VARIABLE_BM_27_27);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_31;
        next_value_of_HeadVar__2_2 = Values_23;
        next_value_of_STATE_VARIABLE_BM_0_3 = STATE_VARIABLE_BM_27_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_BM_0_3 = next_value_of_STATE_VARIABLE_BM_0_3;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__set_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word KVs_4,
  MR_Word BM0_5)
{
  {
    MR_Word BM_6;

    mercury__bimap__set_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, KVs_4, BM0_5, &BM_6);
    return BM_6;
  }
}

void MR_CALL 
mercury__bimap__set_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
    else
    {
      MR_Box Key_7;
      MR_Box Value_8;
      MR_Word KeysValues_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BM_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      Key_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Value_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__bimap__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Key_7, Value_8, STATE_VARIABLE_BM_0_2, &STATE_VARIABLE_BM_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KeysValues_9;
      next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word Ks_5,
  MR_Word Vs_6,
  MR_Word STATE_VARIABLE_BM_0_8)
{
  {
    MR_Word STATE_VARIABLE_BM_9;

    mercury__bimap__det_insert_from_corresponding_lists_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Ks_5, Vs_6, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
    return STATE_VARIABLE_BM_9;
  }
}

void MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BM_0_3,
  MR_Word * STATE_VARIABLE_BM_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_BM_4 = STATE_VARIABLE_BM_0_3;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
          return;
        }
      }
      else
      {
        MR_Box Value_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Values_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_BM_27_27;
        MR_Word Forward0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_3, (MR_Integer) 0))));
        MR_Word Reverse0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_3, (MR_Integer) 1))));
        MR_Word Forward_40;
        MR_Word Reverse_41;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_BM_0_3;

        mercury__map__det_insert_4_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, Var_32, Value_22, Forward0_38, &Forward_40);
        mercury__map__det_insert_4_p_0(TypeInfo_for_V_30, TypeInfo_for_K_29, Value_22, Var_32, Reverse0_39, &Reverse_41);
        {
          STATE_VARIABLE_BM_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_27_27, 0) = ((MR_Box) (Forward_40));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_27_27, 1) = ((MR_Box) (Reverse_41));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_31;
        next_value_of_HeadVar__2_2 = Values_23;
        next_value_of_STATE_VARIABLE_BM_0_3 = STATE_VARIABLE_BM_27_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_BM_0_3 = next_value_of_STATE_VARIABLE_BM_0_3;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word KVs_4,
  MR_Word STATE_VARIABLE_BM_0_6)
{
  {
    MR_Word STATE_VARIABLE_BM_7;

    mercury__bimap__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, KVs_4, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
    return STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bimap__det_insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
    else
    {
      MR_Box Key_7;
      MR_Box Value_8;
      MR_Word KeysValues_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BM_14_14;
      MR_Word Forward0_23;
      MR_Word Reverse0_24;
      MR_Word Forward_25;
      MR_Word Reverse_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      Key_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Value_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      Forward0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 0))));
      Reverse0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 1))));
      mercury__map__det_insert_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Key_7, Value_8, Forward0_23, &Forward_25);
      mercury__map__det_insert_4_p_0(TypeInfo_for_V_17, TypeInfo_for_K_16, Value_8, Key_7, Reverse0_24, &Reverse_26);
      {
        STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (Forward_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (Reverse_26));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KeysValues_9;
      next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word List_4,
  MR_Word BM0_5,
  MR_Word * BM_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, List_4, BM0_5, BM_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BM_0_2,
  MR_Word * STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BM_3 = STATE_VARIABLE_BM_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Key_7;
      MR_Box Value_8;
      MR_Word KeyValues_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BM_14_14;
      MR_Word STATE_VARIABLE_Forward_0_22;
      MR_Word STATE_VARIABLE_Reverse_0_23;
      MR_Word STATE_VARIABLE_Forward_24;
      MR_Word STATE_VARIABLE_Reverse_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BM_0_2;

      Key_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      Value_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      STATE_VARIABLE_Forward_0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 0))));
      STATE_VARIABLE_Reverse_0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_2, (MR_Integer) 1))));
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Key_7, Value_8, STATE_VARIABLE_Forward_0_22, &STATE_VARIABLE_Forward_24);
      if (succeeded)
      {
        succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_17, TypeInfo_for_K_16, Value_8, Key_7, STATE_VARIABLE_Reverse_0_23, &STATE_VARIABLE_Reverse_25);
        if (succeeded)
        {
          {
            STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (STATE_VARIABLE_Forward_24));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Reverse_25));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = KeyValues_9;
          next_value_of_STATE_VARIABLE_BM_0_2 = STATE_VARIABLE_BM_14_14;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_BM_0_2 = next_value_of_STATE_VARIABLE_BM_0_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__bimap__set_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_BM_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word STATE_VARIABLE_BM_9;

    mercury__bimap__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
    return STATE_VARIABLE_BM_9;
  }
}

void MR_CALL 
mercury__bimap__set_4_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Forward_0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Reverse_0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Forward_13;
    MR_Word STATE_VARIABLE_Reverse_14;
    MR_Word STATE_VARIABLE_Forward_15_15;
    MR_Word STATE_VARIABLE_Reverse_16_16;
    MR_Box KVal_9;
    MR_Box VKey_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, STATE_VARIABLE_Forward_0_11, K_5, &KVal_9);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_22, V_6, KVal_9);
      if (succeeded)
      {
        STATE_VARIABLE_Reverse_16_16 = STATE_VARIABLE_Reverse_0_12;
        STATE_VARIABLE_Forward_15_15 = STATE_VARIABLE_Forward_0_11;
      }
      else
      {
        MR_Word V_7_32;

        mercury__map__det_update_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, K_5, V_6, STATE_VARIABLE_Forward_0_11, &STATE_VARIABLE_Forward_15_15);
        mercury__tree234__delete_2_4_p_0(TypeInfo_for_V_22, TypeInfo_for_K_21, STATE_VARIABLE_Reverse_0_12, KVal_9, &STATE_VARIABLE_Reverse_16_16, &V_7_32);
      }
    }
    else
    {
      mercury__map__det_insert_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, K_5, V_6, STATE_VARIABLE_Forward_0_11, &STATE_VARIABLE_Forward_15_15);
      STATE_VARIABLE_Reverse_16_16 = STATE_VARIABLE_Reverse_0_12;
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_22, TypeInfo_for_K_21, STATE_VARIABLE_Reverse_16_16, V_6, &VKey_10);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, K_5, VKey_10);
      if (succeeded)
      {
        STATE_VARIABLE_Reverse_14 = STATE_VARIABLE_Reverse_16_16;
        STATE_VARIABLE_Forward_13 = STATE_VARIABLE_Forward_15_15;
      }
      else
      {
        MR_Word V_7_42;

        mercury__map__det_update_4_p_0(TypeInfo_for_V_22, TypeInfo_for_K_21, V_6, K_5, STATE_VARIABLE_Reverse_16_16, &STATE_VARIABLE_Reverse_14);
        mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, STATE_VARIABLE_Forward_15_15, VKey_10, &STATE_VARIABLE_Forward_13, &V_7_42);
      }
    }
    else
    {
      mercury__map__det_insert_4_p_0(TypeInfo_for_V_22, TypeInfo_for_K_21, V_6, K_5, STATE_VARIABLE_Reverse_16_16, &STATE_VARIABLE_Reverse_14);
      STATE_VARIABLE_Forward_13 = STATE_VARIABLE_Forward_15_15;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Forward_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Reverse_14));
    }
  }
}

void MR_CALL 
mercury__bimap__search_insert_5_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Bimap_0_15,
  MR_Word * STATE_VARIABLE_Bimap_16)
{
  {
    MR_Word Forward0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Bimap_0_15, (MR_Integer) 0))));
    MR_Word Reverse0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Bimap_0_15, (MR_Integer) 1))));
    MR_Word Forward_12;

    mercury__tree234__search_insert_5_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, K_6, V_7, MaybeOldV_8, Forward0_10, &Forward_12);
    if ((*MaybeOldV_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Reverse_14;

      mercury__map__det_insert_4_p_0(TypeInfo_for_V_19, TypeInfo_for_K_18, V_7, K_6, Reverse0_11, &Reverse_14);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Bimap_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Forward_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Reverse_14));
      }
    }
    else
      *STATE_VARIABLE_Bimap_16 = STATE_VARIABLE_Bimap_0_15;
  }
}

void MR_CALL 
mercury__bimap__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Bimap_0_12,
  MR_Word * STATE_VARIABLE_Bimap_13)
{
  {
    MR_Word Forward0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Bimap_0_12, (MR_Integer) 0))));
    MR_Word Reverse0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Bimap_0_12, (MR_Integer) 1))));
    MR_Word Forward_10;
    MR_Word Reverse_11;

    mercury__map__det_insert_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_5, V_6, Forward0_8, &Forward_10);
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_16, TypeInfo_for_K_15, V_6, K_5, Reverse0_9, &Reverse_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Bimap_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Forward_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Reverse_11));
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_BM_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word STATE_VARIABLE_BM_9;
    MR_Word Forward0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_8, (MR_Integer) 0))));
    MR_Word Reverse0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_8, (MR_Integer) 1))));
    MR_Word Forward_20;
    MR_Word Reverse_21;

    mercury__map__det_insert_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, Forward0_18, &Forward_20);
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_12, TypeInfo_for_K_11, V_7, K_6, Reverse0_19, &Reverse_21);
    {
      STATE_VARIABLE_BM_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_9, 0) = ((MR_Box) (Forward_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_9, 1) = ((MR_Box) (Reverse_21));
    }
    return STATE_VARIABLE_BM_9;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Forward_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Reverse_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Forward_11;
    MR_Word STATE_VARIABLE_Reverse_12;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_5, V_6, STATE_VARIABLE_Forward_0_9, &STATE_VARIABLE_Forward_11);
    if (succeeded)
    {
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_16, TypeInfo_for_K_15, V_6, K_5, STATE_VARIABLE_Reverse_0_10, &STATE_VARIABLE_Reverse_12);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Forward_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Reverse_12));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_BM_0_8,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * STATE_VARIABLE_BM_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Forward_0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_8, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Reverse_0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_BM_0_8, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Forward_19;
    MR_Word STATE_VARIABLE_Reverse_20;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, STATE_VARIABLE_Forward_0_17, &STATE_VARIABLE_Forward_19);
    if (succeeded)
    {
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_12, TypeInfo_for_K_11, V_7, K_6, STATE_VARIABLE_Reverse_0_18, &STATE_VARIABLE_Reverse_20);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_BM_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Forward_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Reverse_20));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__coordinates_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Word * Cs_5)
{
  {
    MR_Word Reverse_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, Reverse_4, (MR_Word) ((MR_Unsigned) 0U), Cs_5);
  }
}

MR_Word MR_CALL 
mercury__bimap__coordinates_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word BM_3)
{
  {
    MR_Word Vs_4;
    MR_Word Reverse_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_3, (MR_Integer) 1))));

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_V_6, TypeInfo_for_K_5, Reverse_9, (MR_Word) ((MR_Unsigned) 0U), &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__bimap__ordinates_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Word * Os_5)
{
  {
    MR_Word Forward_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Forward_3, (MR_Word) ((MR_Unsigned) 0U), Os_5);
  }
}

MR_Word MR_CALL 
mercury__bimap__ordinates_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word BM_3)
{
  {
    MR_Word Ks_4;
    MR_Word Forward_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_3, (MR_Integer) 0))));

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Forward_8, (MR_Word) ((MR_Unsigned) 0U), &Ks_4);
    return Ks_4;
  }
}

MR_bool MR_CALL 
mercury__bimap__contains_value_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Box V_5)
{
  {
    MR_bool succeeded;
    MR_Word Reverse_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box V_5_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, Reverse_4, V_5, &V_5_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__contains_key_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Word Forward_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Box V_5_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Forward_3, K_5, &V_5_10);
    return succeeded;
  }
}

void MR_CALL 
mercury__bimap__reverse_lookup_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box * K_6,
  MR_Box V_7)
{
  {
    MR_Word Reverse_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__map__lookup_3_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, Reverse_5, V_7, K_6);
  }
}

MR_Box MR_CALL 
mercury__bimap__reverse_lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Box V_5)
{
  {
    MR_Box K_6;
    MR_Word Reverse_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 1))));

    mercury__map__lookup_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Reverse_12, V_5, &K_6);
    return K_6;
  }
}

void MR_CALL 
mercury__bimap__lookup_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box K_6,
  MR_Box * V_7)
{
  {
    MR_Word Forward_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__map__lookup_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Forward_4, K_6, V_7);
  }
}

MR_Box MR_CALL 
mercury__bimap__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Box K_5)
{
  {
    MR_Box V_6;
    MR_Word Forward_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 0))));

    mercury__map__lookup_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Forward_11, K_5, &V_6);
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__bimap__reverse_search_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box * K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word Reverse_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, Reverse_5, V_7, K_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__reverse_search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Box V_5,
  MR_Box * K_6)
{
  {
    MR_bool succeeded;
    MR_Word Reverse_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 1))));

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Reverse_12, V_5, K_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__forward_search_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box K_6,
  MR_Box * V_7)
{
  {
    MR_bool succeeded;
    MR_Word Forward_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Forward_4, K_6, V_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__forward_search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word BM_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Word Forward_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BM_4, (MR_Integer) 0))));

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Forward_11, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__search_3_p_1(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box * K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word Forward_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Reverse_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_11;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, Reverse_5, V_7, K_6);
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Forward_4, *K_6, &Var_11);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_9, V_7, Var_11);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__search_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HeadVar__1_1,
  MR_Box K_6,
  MR_Box * V_7)
{
  {
    MR_bool succeeded;
    MR_Word Forward_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Reverse_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_10;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Forward_4, K_6, V_7);
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, Reverse_5, *V_7, &Var_10);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_8, K_6, Var_10);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__equal_2_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word BMA_3,
  MR_Word BMB_4)
{
  {
    MR_bool succeeded;
    MR_Word ForwardA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BMA_3, (MR_Integer) 0))));
    MR_Word ForwardB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BMB_4, (MR_Integer) 0))));

    succeeded = mercury__tree234__equal_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, ForwardA_5, ForwardB_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Forward_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    succeeded = (Forward_2 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bimap__singleton_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box K_4,
  MR_Box V_5)
{
  {
    MR_Word B_6;
    MR_Word Forward_7;
    MR_Word Reverse_8;

    {
      Forward_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Forward_7, 0) = K_4;
      MR_hl_field(MR_mktag(1), Forward_7, 1) = V_5;
      MR_hl_field(MR_mktag(1), Forward_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Forward_7, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Reverse_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Reverse_8, 0) = V_5;
      MR_hl_field(MR_mktag(1), Reverse_8, 1) = K_4;
      MR_hl_field(MR_mktag(1), Reverse_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Reverse_8, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      B_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), B_6, 0) = ((MR_Box) (Forward_7));
      MR_hl_field(MR_mktag(0), B_6, 1) = ((MR_Box) (Reverse_8));
    }
    return B_6;
  }
}

void MR_CALL 
mercury__bimap__init_1_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word * B_2)
{
  *B_2 = (MR_Word) (&mercury__bimap_scalar_common_4[0]);
}

MR_Word MR_CALL 
mercury__bimap__init_0_f_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4)
{
  {
    return (MR_Word) (&mercury__bimap_scalar_common_4[0]);
  }
}

static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bimap____Unify____bimap_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bimap____Compare____bimap_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__bimap__init(void)
{
}

void mercury__bimap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bimap__bimap__type_ctor_info_bimap_2);
}

void mercury__bimap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bimap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bimap.
