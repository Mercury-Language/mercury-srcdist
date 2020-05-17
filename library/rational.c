/*
** Automatically generated from `rational.m'
** by the Mercury compiler,
** version rotd-2020-05-17
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


// :- module rational.
// :- implementation.

/*
INIT mercury__rational__init
ENDINIT
*/

#include "rational.mih"


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




static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2];

static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0;

static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1];

static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1];

static const MR_DuFunctorDescPtr mercury__rational__rational__du_name_ordered_rational_0[1];

static const MR_Integer mercury__rational__rational__functor_number_map_rational_0[1];

static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
  MR_Word A_4,
  MR_Word B_5);

static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__rational_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rational_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rational_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rational_scalar_common_4[5][2];




static /* final */ const MR_Box mercury__rational_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_4[5][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__rational_scalar_common_4[0])),
    ((MR_Box) (&mercury__rational_scalar_common_4[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__rational_scalar_common_4[2])),
    ((MR_Box) (&mercury__rational_scalar_common_4[2]))
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



static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__integer__integer__type_ctor_info_integer_0),
  (MR_PseudoTypeInfo) (&mercury__integer__integer__type_ctor_info_integer_0)
};

static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0 = {
  (MR_String) "r",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rational__rational__field_types_rational_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1] = {
  &mercury__rational__rational__du_functor_desc_rational_0_0
};

static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rational__rational__du_stag_ordered_rational_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__rational__rational__du_name_ordered_rational_0[1] = {
  &mercury__rational__rational__du_functor_desc_rational_0_0
};

static const MR_Integer mercury__rational__rational__functor_number_map_rational_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rational__rational__type_ctor_info_rational_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rational____Unify____rational_0_0_10001)),
  ((MR_Box) (mercury__rational____Compare____rational_0_0_10001)),
  (MR_String) "rational",
  (MR_String) "rational",
  {     mercury__rational__rational__du_name_ordered_rational_0 },
  {     mercury__rational__rational__du_ptag_ordered_rational_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rational__rational__functor_number_map_rational_0
};

static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__rational____Compare____rational_0_0(
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

      mercury__integer____Compare____integer_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__integer____Compare____integer_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0(
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

      succeeded = mercury__integer____Unify____integer_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__integer____Unify____integer_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__rational__abs_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Num_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Den_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;

    Var_5 = mercury__integer__big_abs_1_f_0(Num_3);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Den_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__f_slash_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__rational__reciprocal_1_f_0(R2_5);
    HeadVar__3_3 = mercury__rational__f_times_2_f_0(R1_4, Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__reciprocal_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Num_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Den_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = mercury__integer____Unify____integer_0_0(Num_3, (MR_Word) (&mercury__rational_scalar_common_4[0]));
    if (succeeded)
    {
      MR_Box conv0_HeadVar__2_2;

      conv0_HeadVar__2_2 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__rational__rational__type_ctor_info_rational_0), (MR_String) "function \140rational.reciprocal\'/1", (MR_String) "division by zero");
      HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
    }
    else
    {
      MR_Word Var_7;
      MR_Word Var_8;
      MR_Word Var_9;

      succeeded = mercury__integer____Unify____integer_0_0(Num_3, (MR_Word) (&mercury__rational_scalar_common_4[0]));
      if (succeeded)
        Var_8 = (MR_Word) (&mercury__rational_scalar_common_4[0]);
      else
      {
        MR_Word V_5_28;

        mercury__integer____Compare____integer_0_0(&V_5_28, Num_3, (MR_Word) (&mercury__rational_scalar_common_4[0]));
        succeeded = (V_5_28 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Integer V_6_42 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) 1);
          MR_Word V_5_43;

          mercury__integer__neg_list_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1])), &V_5_43);
          {
            Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (V_6_42));
            MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (V_5_43));
          }
        }
        else
          Var_8 = (MR_Word) (&mercury__rational_scalar_common_4[2]);
      }
      Var_7 = mercury__integer__big_mul_2_f_0(Var_8, Den_4);
      Var_9 = mercury__integer__big_abs_1_f_0(Num_3);
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_9));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__f_times_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word An_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ad_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Bd_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Numer_8;
    MR_Word Denom_9;
    MR_Word G1_10;
    MR_Word G2_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word V_7_38;
    MR_Word V_7_45;
    MR_Word V_7_55;
    MR_Word V_7_62;

    Var_18 = mercury__integer__big_abs_1_f_0(An_4);
    Var_19 = mercury__integer__big_abs_1_f_0(Bd_7);
    G1_10 = mercury__rational__gcd_2_2_f_0(Var_18, Var_19);
    Var_26 = mercury__integer__big_abs_1_f_0(Ad_5);
    Var_27 = mercury__integer__big_abs_1_f_0(Bn_6);
    G2_11 = mercury__rational__gcd_2_2_f_0(Var_26, Var_27);
    mercury__integer__big_quot_rem_4_p_0(An_4, G1_10, &Var_12, &V_7_38);
    mercury__integer__big_quot_rem_4_p_0(Bn_6, G2_11, &Var_13, &V_7_45);
    Numer_8 = mercury__integer__big_mul_2_f_0(Var_12, Var_13);
    mercury__integer__big_quot_rem_4_p_0(Ad_5, G2_11, &Var_14, &V_7_55);
    mercury__integer__big_quot_rem_4_p_0(Bd_7, G1_10, &Var_15, &V_7_62);
    Denom_9 = mercury__integer__big_mul_2_f_0(Var_14, Var_15);
    HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(Numer_8, Denom_9);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_minus_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Num_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 0))));
    MR_Word Den_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 1))));
    MR_Word Var_9;
    MR_Integer V_3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Num_7, (MR_Integer) 0))));
    MR_Word V_4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Num_7, (MR_Integer) 1))));
    MR_Integer V_6_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) V_3_12);
    MR_Word V_5_15;

    mercury__integer__neg_list_2_p_0(V_4_13, &V_5_15);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (V_6_14));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (V_5_15));
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (Den_8));
    }
    HeadVar__3_3 = mercury__rational__f_plus_2_f_0(R1_4, Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_minus_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Num_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Den_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;
    MR_Integer V_3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Num_3, (MR_Integer) 0))));
    MR_Word V_4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Num_3, (MR_Integer) 1))));
    MR_Integer V_6_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) V_3_8);
    MR_Word V_5_11;

    mercury__integer__neg_list_2_p_0(V_4_9, &V_5_11);
    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (V_6_10));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (V_5_11));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Den_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__f_plus_1_f_0(
  MR_Word Rat_3)
{
  {
    MR_Word Rat_2 = Rat_3;

    return Rat_2;
  }
}

MR_Word MR_CALL 
mercury__rational__from_integers_2_f_0(
  MR_Word Num_4,
  MR_Word Den_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(Num_4, Den_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__from_integer_1_f_0(
  MR_Word Integer_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(Integer_3, (MR_Word) (&mercury__rational_scalar_common_4[2]));
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__rational_2_f_0(
  MR_Integer Num_4,
  MR_Integer Den_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;

    Var_6 = mercury__integer__int_to_integer_1_f_0(Num_4);
    Var_7 = mercury__integer__int_to_integer_1_f_0(Den_5);
    HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(Var_6, Var_7);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__rational_1_f_0(
  MR_Integer Int_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__integer__int_to_integer_1_f_0(Int_3);
    HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(Var_4, (MR_Word) (&mercury__rational_scalar_common_4[2]));
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rational__f_greater_or_equal_2_p_0(
  MR_Word R1_3,
  MR_Word R2_4)
{
  {
    MR_bool succeeded;
    MR_Word Cmp_5;

    Cmp_5 = mercury__rational__cmp_2_f_0(R1_3, R2_4);
    switch (Cmp_5) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rational__f_less_or_equal_2_p_0(
  MR_Word R1_3,
  MR_Word R2_4)
{
  {
    MR_bool succeeded;
    MR_Word Cmp_5;

    Cmp_5 = mercury__rational__cmp_2_f_0(R1_3, R2_4);
    switch (Cmp_5) {
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
mercury__rational__f_greater_than_2_p_0(
  MR_Word R1_3,
  MR_Word R2_4)
{
  {
    MR_bool succeeded;
    MR_Word Cmp_5;

    Cmp_5 = mercury__rational__cmp_2_f_0(R1_3, R2_4);
    succeeded = (Cmp_5 == (MR_Integer) 2);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rational__f_less_than_2_p_0(
  MR_Word R1_3,
  MR_Word R2_4)
{
  {
    MR_bool succeeded;
    MR_Word Cmp_5;

    Cmp_5 = mercury__rational__cmp_2_f_0(R1_3, R2_4);
    succeeded = (Cmp_5 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__rational__cmp_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5)
{
  {
    MR_bool succeeded;
    MR_Word Cmp_6;
    MR_Word Diff_7;
    MR_Word Var_10;
    MR_Word Num_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 0))));
    MR_Word Den_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Integer V_3_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Num_11, (MR_Integer) 0))));
    MR_Word V_4_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Num_11, (MR_Integer) 1))));
    MR_Integer V_6_18 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) V_3_16);
    MR_Word V_5_19;
    MR_Word Var_21;

    mercury__integer__neg_list_2_p_0(V_4_17, &V_5_19);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (V_6_18));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (V_5_19));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Den_12));
    }
    Diff_7 = mercury__rational__f_plus_2_f_0(R1_4, Var_10);
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diff_7, (MR_Integer) 0))));
    succeeded = mercury__integer____Unify____integer_0_0(Var_21, (MR_Word) (&mercury__rational_scalar_common_4[0]));
    if (succeeded)
      Cmp_6 = (MR_Integer) 0;
    else
    {
      MR_Word Num_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diff_7, (MR_Integer) 0))));
      MR_Word V_5_33;

      mercury__integer____Compare____integer_0_0(&V_5_33, Num_26, (MR_Word) (&mercury__rational_scalar_common_4[0]));
      succeeded = (V_5_33 == (MR_Integer) 1);
      if (succeeded)
        Cmp_6 = (MR_Integer) 1;
      else
        Cmp_6 = (MR_Integer) 2;
    }
    return Cmp_6;
  }
}

MR_Word MR_CALL 
mercury__rational__f_plus_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word An_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ad_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Bd_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Numer_8;
    MR_Word M_9;
    MR_Word CA_10;
    MR_Word CB_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word V_7_57;
    MR_Word V_7_64;

    succeeded = mercury__integer____Unify____integer_0_0(Ad_5, (MR_Word) (&mercury__rational_scalar_common_4[0]));
    if (succeeded)
      M_9 = (MR_Word) (&mercury__rational_scalar_common_4[0]);
    else
    {
      succeeded = mercury__integer____Unify____integer_0_0(Bd_7, (MR_Word) (&mercury__rational_scalar_common_4[0]));
      if (succeeded)
        M_9 = (MR_Word) (&mercury__rational_scalar_common_4[0]);
      else
      {
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word V_7_45;

        Var_33 = mercury__integer__big_abs_1_f_0(Ad_5);
        Var_34 = mercury__integer__big_abs_1_f_0(Bd_7);
        Var_18 = mercury__rational__gcd_2_2_f_0(Var_33, Var_34);
        mercury__integer__big_quot_rem_4_p_0(Ad_5, Var_18, &Var_17, &V_7_45);
        Var_16 = mercury__integer__big_mul_2_f_0(Var_17, Bd_7);
        M_9 = mercury__integer__big_abs_1_f_0(Var_16);
      }
    }
    mercury__integer__big_quot_rem_4_p_0(M_9, Ad_5, &CA_10, &V_7_57);
    mercury__integer__big_quot_rem_4_p_0(M_9, Bd_7, &CB_11, &V_7_64);
    Var_12 = mercury__integer__big_mul_2_f_0(An_4, CA_10);
    Var_13 = mercury__integer__big_mul_2_f_0(Bn_6, CB_11);
    Numer_8 = mercury__integer__big_plus_2_f_0(Var_12, Var_13);
    HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(Numer_8, M_9);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__rational_norm_2_f_0(
  MR_Word Num_4,
  MR_Word Den_5)
{
  {
    MR_bool succeeded;
    MR_Word Rat_6;

    succeeded = mercury__integer____Unify____integer_0_0(Den_5, (MR_Word) (&mercury__rational_scalar_common_4[0]));
    if (succeeded)
      mercury__require__error_1_p_0((MR_String) "rational.rational_norm: division by zero");
    else
    {
      succeeded = mercury__integer____Unify____integer_0_0(Num_4, (MR_Word) (&mercury__rational_scalar_common_4[0]));
      if (succeeded)
        Rat_6 = (MR_Word) (&mercury__rational_scalar_common_4[3]);
      else
      {
        MR_Word G_7;
        MR_Word Num2_8;
        MR_Word Den2_9;
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word V_7_84;
        MR_Word V_7_91;

        Var_33 = mercury__integer__big_abs_1_f_0(Num_4);
        Var_34 = mercury__integer__big_abs_1_f_0(Den_5);
        G_7 = mercury__rational__gcd_2_2_f_0(Var_33, Var_34);
        succeeded = mercury__integer____Unify____integer_0_0(Den_5, (MR_Word) (&mercury__rational_scalar_common_4[0]));
        if (succeeded)
          Var_13 = (MR_Word) (&mercury__rational_scalar_common_4[0]);
        else
        {
          MR_Word V_5_52;

          mercury__integer____Compare____integer_0_0(&V_5_52, Den_5, (MR_Word) (&mercury__rational_scalar_common_4[0]));
          succeeded = (V_5_52 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Integer V_6_66 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) 1);
            MR_Word V_5_67;

            mercury__integer__neg_list_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1])), &V_5_67);
            {
              Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (V_6_66));
              MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (V_5_67));
            }
          }
          else
            Var_13 = (MR_Word) (&mercury__rational_scalar_common_4[2]);
        }
        Num2_8 = mercury__integer__big_mul_2_f_0(Num_4, Var_13);
        Den2_9 = mercury__integer__big_abs_1_f_0(Den_5);
        mercury__integer__big_quot_rem_4_p_0(Num2_8, G_7, &Var_14, &V_7_84);
        mercury__integer__big_quot_rem_4_p_0(Den2_9, G_7, &Var_15, &V_7_91);
        {
          Rat_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Rat_6, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(0), Rat_6, 1) = ((MR_Box) (Var_15));
        }
      }
    }
    return Rat_6;
  }
}

static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__integer____Unify____integer_0_0(B_5, (MR_Word) (&mercury__rational_scalar_common_4[0]));
    if (succeeded)
      HeadVar__3_3 = A_4;
    else
    {
      MR_Word Var_6;
      MR_Word V_7_17;
      MR_Word next_value_of_A_4;
      MR_Word next_value_of_B_5;

      mercury__integer__big_quot_rem_4_p_0(A_4, B_5, &V_7_17, &Var_6);
      // direct tailcall eliminated
      ;
      next_value_of_A_4 = B_5;
      next_value_of_B_5 = Var_6;
      A_4 = next_value_of_A_4;
      B_5 = next_value_of_B_5;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mercury__rational__one_0_f_0(void)
{
  return (MR_Word) (&mercury__rational_scalar_common_4[4]);
}

MR_Word MR_CALL 
mercury__rational__zero_0_f_0(void)
{
  return (MR_Word) (&mercury__rational_scalar_common_4[3]);
}

MR_Word MR_CALL 
mercury__rational__denom_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Den_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Den_4;
  }
}

MR_Word MR_CALL 
mercury__rational__numer_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Num_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return Num_3;
  }
}

static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__rational____Unify____rational_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__rational____Compare____rational_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__rational__init(void)
{
}

void mercury__rational__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rational__rational__type_ctor_info_rational_0);
}

void mercury__rational__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rational__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module rational.
