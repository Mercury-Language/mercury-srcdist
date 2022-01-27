/*
** Automatically generated from `rational.m'
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


/* :- module rational. */
/* :- implementation. */

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




static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2];

static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0;

static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1];

static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1];

static const MR_DuFunctorDescPtr mercury__rational__rational__du_name_ordered_rational_0[1];

static const MR_Integer mercury__rational__rational__functor_number_map_rational_0[1];

static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
  MR_Box mercury__rational__wrapper_arg_1,
  MR_Box mercury__rational__wrapper_arg_2);

static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
  MR_Box * mercury__rational__wrapper_arg_1,
  MR_Box mercury__rational__wrapper_arg_2,
  MR_Box mercury__rational__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
  MR_Word mercury__rational__A_4,
  MR_Word mercury__rational__B_5);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0 = {
  (MR_String) "r",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rational__rational__field_types_rational_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1] = {
  &mercury__rational__rational__du_functor_desc_rational_0_0
};

static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rational__rational__du_stag_ordered_rational_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rational____Unify____rational_0_0_10001)),
  ((MR_Box) (mercury__rational____Compare____rational_0_0_10001)),
  (MR_String) "rational",
  (MR_String) "rational",
  {     mercury__rational__rational__du_name_ordered_rational_0 },
  {     mercury__rational__rational__du_ptag_ordered_rational_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rational__rational__functor_number_map_rational_0
};

static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
  MR_Box mercury__rational__wrapper_arg_1,
  MR_Box mercury__rational__wrapper_arg_2)
{
  {
    MR_bool mercury__rational__succeeded;

    {
      mercury__rational__succeeded = mercury__rational____Unify____rational_0_0(((MR_Word) mercury__rational__wrapper_arg_1), ((MR_Word) mercury__rational__wrapper_arg_2));
    }
    return mercury__rational__succeeded;
  }
}

static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
  MR_Box * mercury__rational__wrapper_arg_1,
  MR_Box mercury__rational__wrapper_arg_2,
  MR_Box mercury__rational__wrapper_arg_3)
{
  {
    MR_Word mercury__rational__conv0_HeadVar__1_1;

    {
      mercury__rational____Compare____rational_0_0(&mercury__rational__conv0_HeadVar__1_1, ((MR_Word) mercury__rational__wrapper_arg_2), ((MR_Word) mercury__rational__wrapper_arg_3));
    }
    *mercury__rational__wrapper_arg_1 = ((MR_Box) (mercury__rational__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__rational__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__rational____Compare____rational_0_0(
  MR_Word * mercury__rational__HeadVar__1_1,
  MR_Word mercury__rational__HeadVar__2_2,
  MR_Word mercury__rational__HeadVar__3_3)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Integer mercury__rational__CastX_9 = (MR_Integer) mercury__rational__HeadVar__2_2;
    MR_Integer mercury__rational__CastY_10 = (MR_Integer) mercury__rational__HeadVar__3_3;

    mercury__rational__succeeded = (mercury__rational__CastX_9 == mercury__rational__CastY_10);
    if (mercury__rational__succeeded)
      *mercury__rational__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__rational__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__rational__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__rational__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__rational__V_8_8;

        {
          mercury__integer____Compare____integer_0_0(&mercury__rational__V_8_8, mercury__rational__V_4_4, mercury__rational__V_6_6);
        }
        mercury__rational__succeeded = (mercury__rational__V_8_8 == (MR_Integer) 0);
        mercury__rational__succeeded = !(mercury__rational__succeeded);
        if (mercury__rational__succeeded)
          *mercury__rational__HeadVar__1_1 = mercury__rational__V_8_8;
        else
          {
            mercury__integer____Compare____integer_0_0(mercury__rational__HeadVar__1_1, mercury__rational__V_5_5, mercury__rational__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0(
  MR_Word mercury__rational__HeadVar__1_1,
  MR_Word mercury__rational__HeadVar__2_2)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Integer mercury__rational__CastX_7 = (MR_Integer) mercury__rational__HeadVar__1_1;
    MR_Integer mercury__rational__CastY_8 = (MR_Integer) mercury__rational__HeadVar__2_2;

    mercury__rational__succeeded = (mercury__rational__CastX_7 == mercury__rational__CastY_8);
    if (mercury__rational__succeeded)
      mercury__rational__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__rational__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__rational__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__rational__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_3_3, mercury__rational__V_5_5);
        }
        if (mercury__rational__succeeded)
          {
            mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_4_4, mercury__rational__V_6_6);
          }
      }
    return mercury__rational__succeeded;
  }
}

MR_Word MR_CALL 
mercury__rational__cmp_2_f_0(
  MR_Word mercury__rational__R1_4,
  MR_Word mercury__rational__R2_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Cmp_6;
    MR_Word mercury__rational__Diff_7;
    MR_Word mercury__rational__V_10_10;
    MR_Word mercury__rational__Num_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 0)));
    MR_Word mercury__rational__Den_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 1)));
    MR_Word mercury__rational__V_13_13;
    MR_Integer mercury__rational__V_3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_11, (MR_Integer) 0)));
    MR_Word mercury__rational__V_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_11, (MR_Integer) 1)));
    MR_Integer mercury__rational__V_6_18 = ((MR_Integer) 0 - mercury__rational__V_3_16);
    MR_Word mercury__rational__V_5_19;
    MR_Word mercury__rational__V_21_21;
    MR_Word mercury__rational__V_22_22;
    MR_Word mercury__rational__V_3_25;
    MR_Word mercury__rational__V_20_20;

    {
      mercury__integer__neg_list_2_p_0(mercury__rational__V_4_17, &mercury__rational__V_5_19);
    }
    {
      mercury__rational__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 0) = ((MR_Box) (mercury__rational__V_6_18));
      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 1) = ((MR_Box) (mercury__rational__V_5_19));
    }
    {
      mercury__rational__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__V_10_10, 0) = ((MR_Box) (mercury__rational__V_13_13));
      MR_hl_field(MR_mktag(0), mercury__rational__V_10_10, 1) = ((MR_Box) (mercury__rational__Den_12));
    }
    {
      mercury__rational__Diff_7 = mercury__rational__f_plus_2_f_0(mercury__rational__R1_4, mercury__rational__V_10_10);
    }
    mercury__rational__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 0)));
    mercury__rational__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 1)));
    mercury__rational__V_3_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__rational__V_22_22 = (MR_Word) &mercury__rational_scalar_common_4[0];
    {
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_21_21, mercury__rational__V_22_22);
    }
    if (mercury__rational__succeeded)
      mercury__rational__Cmp_6 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__rational__Num_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 0)));
        MR_Word mercury__rational__V_28_28 = (MR_Word) &mercury__rational_scalar_common_4[0];
        MR_Word mercury__rational__V_3_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__rational__V_5_33;
        MR_Word mercury__rational__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 1)));

        {
          mercury__integer____Compare____integer_0_0(&mercury__rational__V_5_33, mercury__rational__Num_26, mercury__rational__V_28_28);
        }
        mercury__rational__succeeded = (mercury__rational__V_5_33 == (MR_Integer) 1);
        if (mercury__rational__succeeded)
          mercury__rational__Cmp_6 = (MR_Integer) 1;
        else
          mercury__rational__Cmp_6 = (MR_Integer) 2;
      }
    return mercury__rational__Cmp_6;
  }
}

static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
  MR_Word mercury__rational__A_4,
  MR_Word mercury__rational__B_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rational__succeeded;
        MR_Word mercury__rational__HeadVar__3_3;
        MR_Word mercury__rational__V_7_7 = (MR_Word) &mercury__rational_scalar_common_4[0];
        MR_Word mercury__rational__V_3_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__B_5, mercury__rational__V_7_7);
        }
        if (mercury__rational__succeeded)
          mercury__rational__HeadVar__3_3 = mercury__rational__A_4;
        else
          {
            MR_Word mercury__rational__V_6_6;
            MR_Word mercury__rational__V_7_17;

            {
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__A_4, mercury__rational__B_5, &mercury__rational__V_7_17, &mercury__rational__V_6_6);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__rational__A__tmp_copy_4 = mercury__rational__B_5;
              MR_Word mercury__rational__B__tmp_copy_5 = mercury__rational__V_6_6;

              mercury__rational__B_5 = mercury__rational__B__tmp_copy_5;
              mercury__rational__A_4 = mercury__rational__A__tmp_copy_4;
            }
            continue;
          }
        return mercury__rational__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__rational__rational_norm_2_f_0(
  MR_Word mercury__rational__Num_4,
  MR_Word mercury__rational__Den_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Rat_6;
    MR_Word mercury__rational__V_16_16 = (MR_Word) &mercury__rational_scalar_common_4[0];
    MR_Word mercury__rational__V_3_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Den_5, mercury__rational__V_16_16);
    }
    if (mercury__rational__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "rational.rational_norm: division by zero");
        }
      }
    else
      {
        MR_Word mercury__rational__V_17_17 = (MR_Word) &mercury__rational_scalar_common_4[0];
        MR_Word mercury__rational__V_3_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_4, mercury__rational__V_17_17);
        }
        if (mercury__rational__succeeded)
          {
            MR_Word mercury__rational__V_12_12 = (MR_Word) &mercury__rational_scalar_common_4[2];
            MR_Word mercury__rational__V_3_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
            MR_Word mercury__rational__V_5_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            mercury__rational__Rat_6 = (MR_Word) &mercury__rational_scalar_common_4[3];
          }
        else
          {
            MR_Word mercury__rational__G_7;
            MR_Word mercury__rational__Num2_8;
            MR_Word mercury__rational__Den2_9;
            MR_Word mercury__rational__V_13_13;
            MR_Word mercury__rational__V_14_14;
            MR_Word mercury__rational__V_15_15;
            MR_Word mercury__rational__V_33_33;
            MR_Word mercury__rational__V_34_34;
            MR_Word mercury__rational__V_42_42;
            MR_Word mercury__rational__V_3_45;
            MR_Word mercury__rational__V_7_84;
            MR_Word mercury__rational__V_7_91;

            {
              mercury__rational__V_33_33 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_4);
            }
            {
              mercury__rational__V_34_34 = mercury__integer__big_abs_1_f_0(mercury__rational__Den_5);
            }
            {
              mercury__rational__G_7 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_33_33, mercury__rational__V_34_34);
            }
            mercury__rational__V_3_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__rational__V_42_42 = (MR_Word) &mercury__rational_scalar_common_4[0];
            {
              mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Den_5, mercury__rational__V_42_42);
            }
            if (mercury__rational__succeeded)
              mercury__rational__V_13_13 = mercury__rational__V_42_42;
            else
              {
                MR_Word mercury__rational__V_40_40 = (MR_Word) &mercury__rational_scalar_common_4[0];
                MR_Word mercury__rational__V_3_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__rational__V_5_52;

                {
                  mercury__integer____Compare____integer_0_0(&mercury__rational__V_5_52, mercury__rational__Den_5, mercury__rational__V_40_40);
                }
                mercury__rational__succeeded = (mercury__rational__V_5_52 == (MR_Integer) 1);
                if (mercury__rational__succeeded)
                  {
                    MR_Word mercury__rational__V_5_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word mercury__rational__V_4_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
                    MR_Integer mercury__rational__V_6_66 = ((MR_Integer) 0 - (MR_Integer) 1);
                    MR_Word mercury__rational__V_5_67;

                    {
                      mercury__integer__neg_list_2_p_0(mercury__rational__V_4_65, &mercury__rational__V_5_67);
                    }
                    {
                      mercury__rational__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 0) = ((MR_Box) (mercury__rational__V_6_66));
                      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 1) = ((MR_Box) (mercury__rational__V_5_67));
                    }
                  }
                else
                  {
                    MR_Word mercury__rational__V_3_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
                    MR_Word mercury__rational__V_5_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    mercury__rational__V_13_13 = (MR_Word) &mercury__rational_scalar_common_4[2];
                  }
              }
            {
              mercury__rational__Num2_8 = mercury__integer__big_mul_2_f_0(mercury__rational__Num_4, mercury__rational__V_13_13);
            }
            {
              mercury__rational__Den2_9 = mercury__integer__big_abs_1_f_0(mercury__rational__Den_5);
            }
            {
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Num2_8, mercury__rational__G_7, &mercury__rational__V_14_14, &mercury__rational__V_7_84);
            }
            {
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Den2_9, mercury__rational__G_7, &mercury__rational__V_15_15, &mercury__rational__V_7_91);
            }
            {
              mercury__rational__Rat_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__rational__Rat_6, 0) = ((MR_Box) (mercury__rational__V_14_14));
              MR_hl_field(MR_mktag(0), mercury__rational__Rat_6, 1) = ((MR_Box) (mercury__rational__V_15_15));
            }
          }
      }
    return mercury__rational__Rat_6;
  }
}

MR_Word MR_CALL 
mercury__rational__abs_1_f_0(
  MR_Word mercury__rational__HeadVar__1_1)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__2_2;
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__V_5_5;

    {
      mercury__rational__V_5_5 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_3);
    }
    {
      mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_5_5));
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__Den_4));
    }
    return mercury__rational__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__reciprocal_1_f_0(
  MR_Word mercury__rational__HeadVar__1_1)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__2_2;
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__V_10_10 = (MR_Word) &mercury__rational_scalar_common_4[0];
    MR_Word mercury__rational__V_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_3, mercury__rational__V_10_10);
    }
    if (mercury__rational__succeeded)
      {
        MR_Word mercury__rational__TypeCtorInfo_9_9 = (MR_Word) &mercury__rational__rational__type_ctor_info_rational_0;
        MR_Box mercury__rational__conv0_HeadVar__2_2;

        {
          mercury__rational__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__rational__TypeCtorInfo_9_9, (MR_String) "rational.reciprocal: division by zero");
        }
        mercury__rational__HeadVar__2_2 = ((MR_Word) mercury__rational__conv0_HeadVar__2_2);
      }
    else
      {
        MR_Word mercury__rational__V_6_6;
        MR_Word mercury__rational__V_7_7;
        MR_Word mercury__rational__V_8_8;
        MR_Word mercury__rational__V_17_17 = (MR_Word) &mercury__rational_scalar_common_4[0];
        MR_Word mercury__rational__V_3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_3, mercury__rational__V_17_17);
        }
        if (mercury__rational__succeeded)
          mercury__rational__V_7_7 = mercury__rational__V_17_17;
        else
          {
            MR_Word mercury__rational__V_15_15 = (MR_Word) &mercury__rational_scalar_common_4[0];
            MR_Word mercury__rational__V_3_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__rational__V_5_27;

            {
              mercury__integer____Compare____integer_0_0(&mercury__rational__V_5_27, mercury__rational__Num_3, mercury__rational__V_15_15);
            }
            mercury__rational__succeeded = (mercury__rational__V_5_27 == (MR_Integer) 1);
            if (mercury__rational__succeeded)
              {
                MR_Word mercury__rational__V_5_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__rational__V_4_40 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
                MR_Integer mercury__rational__V_6_41 = ((MR_Integer) 0 - (MR_Integer) 1);
                MR_Word mercury__rational__V_5_42;

                {
                  mercury__integer__neg_list_2_p_0(mercury__rational__V_4_40, &mercury__rational__V_5_42);
                }
                {
                  mercury__rational__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rational__V_7_7, 0) = ((MR_Box) (mercury__rational__V_6_41));
                  MR_hl_field(MR_mktag(0), mercury__rational__V_7_7, 1) = ((MR_Box) (mercury__rational__V_5_42));
                }
              }
            else
              {
                MR_Word mercury__rational__V_3_45 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
                MR_Word mercury__rational__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__rational__V_7_7 = (MR_Word) &mercury__rational_scalar_common_4[2];
              }
          }
        {
          mercury__rational__V_6_6 = mercury__integer__big_mul_2_f_0(mercury__rational__V_7_7, mercury__rational__Den_4);
        }
        {
          mercury__rational__V_8_8 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_3);
        }
        {
          mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_6_6));
          MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__V_8_8));
        }
      }
    return mercury__rational__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__f_slash_2_f_0(
  MR_Word mercury__rational__R1_4,
  MR_Word mercury__rational__R2_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;
    MR_Word mercury__rational__V_6_6;

    {
      mercury__rational__V_6_6 = mercury__rational__reciprocal_1_f_0(mercury__rational__R2_5);
    }
    {
      mercury__rational__HeadVar__3_3 = mercury__rational__f_times_2_f_0(mercury__rational__R1_4, mercury__rational__V_6_6);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_times_2_f_0(
  MR_Word mercury__rational__HeadVar__1_1,
  MR_Word mercury__rational__HeadVar__2_2)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;
    MR_Word mercury__rational__An_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__Ad_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__Bn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__rational__Bd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__rational__Numer_8;
    MR_Word mercury__rational__Denom_9;
    MR_Word mercury__rational__G1_10;
    MR_Word mercury__rational__G2_11;
    MR_Word mercury__rational__V_12_12;
    MR_Word mercury__rational__V_13_13;
    MR_Word mercury__rational__V_14_14;
    MR_Word mercury__rational__V_15_15;
    MR_Word mercury__rational__V_18_18;
    MR_Word mercury__rational__V_19_19;
    MR_Word mercury__rational__V_26_26;
    MR_Word mercury__rational__V_27_27;
    MR_Word mercury__rational__V_7_38;
    MR_Word mercury__rational__V_7_45;
    MR_Word mercury__rational__V_7_55;
    MR_Word mercury__rational__V_7_62;

    {
      mercury__rational__V_18_18 = mercury__integer__big_abs_1_f_0(mercury__rational__An_4);
    }
    {
      mercury__rational__V_19_19 = mercury__integer__big_abs_1_f_0(mercury__rational__Bd_7);
    }
    {
      mercury__rational__G1_10 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_18_18, mercury__rational__V_19_19);
    }
    {
      mercury__rational__V_26_26 = mercury__integer__big_abs_1_f_0(mercury__rational__Ad_5);
    }
    {
      mercury__rational__V_27_27 = mercury__integer__big_abs_1_f_0(mercury__rational__Bn_6);
    }
    {
      mercury__rational__G2_11 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_26_26, mercury__rational__V_27_27);
    }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__An_4, mercury__rational__G1_10, &mercury__rational__V_12_12, &mercury__rational__V_7_38);
    }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Bn_6, mercury__rational__G2_11, &mercury__rational__V_13_13, &mercury__rational__V_7_45);
    }
    {
      mercury__rational__Numer_8 = mercury__integer__big_mul_2_f_0(mercury__rational__V_12_12, mercury__rational__V_13_13);
    }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Ad_5, mercury__rational__G2_11, &mercury__rational__V_14_14, &mercury__rational__V_7_55);
    }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Bd_7, mercury__rational__G1_10, &mercury__rational__V_15_15, &mercury__rational__V_7_62);
    }
    {
      mercury__rational__Denom_9 = mercury__integer__big_mul_2_f_0(mercury__rational__V_14_14, mercury__rational__V_15_15);
    }
    {
      mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Numer_8, mercury__rational__Denom_9);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_minus_2_f_0(
  MR_Word mercury__rational__R1_4,
  MR_Word mercury__rational__R2_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;
    MR_Word mercury__rational__V_6_6;
    MR_Word mercury__rational__Num_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 0)));
    MR_Word mercury__rational__Den_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 1)));
    MR_Word mercury__rational__V_9_9;
    MR_Integer mercury__rational__V_3_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_7, (MR_Integer) 0)));
    MR_Word mercury__rational__V_4_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_7, (MR_Integer) 1)));
    MR_Integer mercury__rational__V_6_14 = ((MR_Integer) 0 - mercury__rational__V_3_12);
    MR_Word mercury__rational__V_5_15;

    {
      mercury__integer__neg_list_2_p_0(mercury__rational__V_4_13, &mercury__rational__V_5_15);
    }
    {
      mercury__rational__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__V_9_9, 0) = ((MR_Box) (mercury__rational__V_6_14));
      MR_hl_field(MR_mktag(0), mercury__rational__V_9_9, 1) = ((MR_Box) (mercury__rational__V_5_15));
    }
    {
      mercury__rational__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__V_6_6, 0) = ((MR_Box) (mercury__rational__V_9_9));
      MR_hl_field(MR_mktag(0), mercury__rational__V_6_6, 1) = ((MR_Box) (mercury__rational__Den_8));
    }
    {
      mercury__rational__HeadVar__3_3 = mercury__rational__f_plus_2_f_0(mercury__rational__R1_4, mercury__rational__V_6_6);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_plus_2_f_0(
  MR_Word mercury__rational__HeadVar__1_1,
  MR_Word mercury__rational__HeadVar__2_2)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;
    MR_Word mercury__rational__An_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__Ad_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__Bn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__rational__Bd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__rational__Numer_8;
    MR_Word mercury__rational__M_9;
    MR_Word mercury__rational__CA_10;
    MR_Word mercury__rational__CB_11;
    MR_Word mercury__rational__V_12_12;
    MR_Word mercury__rational__V_13_13;
    MR_Word mercury__rational__V_19_19 = (MR_Word) &mercury__rational_scalar_common_4[0];
    MR_Word mercury__rational__V_3_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__rational__V_7_57;
    MR_Word mercury__rational__V_7_64;

    {
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Ad_5, mercury__rational__V_19_19);
    }
    if (mercury__rational__succeeded)
      mercury__rational__M_9 = mercury__rational__V_19_19;
    else
      {
        MR_Word mercury__rational__V_20_20 = (MR_Word) &mercury__rational_scalar_common_4[0];
        MR_Word mercury__rational__V_3_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Bd_7, mercury__rational__V_20_20);
        }
        if (mercury__rational__succeeded)
          mercury__rational__M_9 = mercury__rational__V_20_20;
        else
          {
            MR_Word mercury__rational__V_16_16;
            MR_Word mercury__rational__V_17_17;
            MR_Word mercury__rational__V_18_18;
            MR_Word mercury__rational__V_33_33;
            MR_Word mercury__rational__V_34_34;
            MR_Word mercury__rational__V_7_45;

            {
              mercury__rational__V_33_33 = mercury__integer__big_abs_1_f_0(mercury__rational__Ad_5);
            }
            {
              mercury__rational__V_34_34 = mercury__integer__big_abs_1_f_0(mercury__rational__Bd_7);
            }
            {
              mercury__rational__V_18_18 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_33_33, mercury__rational__V_34_34);
            }
            {
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Ad_5, mercury__rational__V_18_18, &mercury__rational__V_17_17, &mercury__rational__V_7_45);
            }
            {
              mercury__rational__V_16_16 = mercury__integer__big_mul_2_f_0(mercury__rational__V_17_17, mercury__rational__Bd_7);
            }
            {
              mercury__rational__M_9 = mercury__integer__big_abs_1_f_0(mercury__rational__V_16_16);
            }
          }
      }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__M_9, mercury__rational__Ad_5, &mercury__rational__CA_10, &mercury__rational__V_7_57);
    }
    {
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__M_9, mercury__rational__Bd_7, &mercury__rational__CB_11, &mercury__rational__V_7_64);
    }
    {
      mercury__rational__V_12_12 = mercury__integer__big_mul_2_f_0(mercury__rational__An_4, mercury__rational__CA_10);
    }
    {
      mercury__rational__V_13_13 = mercury__integer__big_mul_2_f_0(mercury__rational__Bn_6, mercury__rational__CB_11);
    }
    {
      mercury__rational__Numer_8 = mercury__integer__big_plus_2_f_0(mercury__rational__V_12_12, mercury__rational__V_13_13);
    }
    {
      mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Numer_8, mercury__rational__M_9);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__f_minus_1_f_0(
  MR_Word mercury__rational__HeadVar__1_1)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__2_2;
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__V_5_5;
    MR_Integer mercury__rational__V_3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_3, (MR_Integer) 0)));
    MR_Word mercury__rational__V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_3, (MR_Integer) 1)));
    MR_Integer mercury__rational__V_6_10 = ((MR_Integer) 0 - mercury__rational__V_3_8);
    MR_Word mercury__rational__V_5_11;

    {
      mercury__integer__neg_list_2_p_0(mercury__rational__V_4_9, &mercury__rational__V_5_11);
    }
    {
      mercury__rational__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__V_5_5, 0) = ((MR_Box) (mercury__rational__V_6_10));
      MR_hl_field(MR_mktag(0), mercury__rational__V_5_5, 1) = ((MR_Box) (mercury__rational__V_5_11));
    }
    {
      mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_5_5));
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__Den_4));
    }
    return mercury__rational__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__f_plus_1_f_0(
  MR_Word mercury__rational__Rat_3)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Rat_2 = mercury__rational__Rat_3;

    return mercury__rational__Rat_2;
  }
}

MR_Word MR_CALL 
mercury__rational__from_integers_2_f_0(
  MR_Word mercury__rational__Num_4,
  MR_Word mercury__rational__Den_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;

    {
      mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Num_4, mercury__rational__Den_5);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__from_integer_1_f_0(
  MR_Word mercury__rational__Integer_3)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__2_2;
    MR_Word mercury__rational__V_4_4 = (MR_Word) &mercury__rational_scalar_common_4[2];
    MR_Word mercury__rational__V_3_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
    MR_Word mercury__rational__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__rational__HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(mercury__rational__Integer_3, mercury__rational__V_4_4);
    }
    return mercury__rational__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rational__rational_2_f_0(
  MR_Integer mercury__rational__Num_4,
  MR_Integer mercury__rational__Den_5)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__3_3;
    MR_Word mercury__rational__V_6_6;
    MR_Word mercury__rational__V_7_7;

    {
      mercury__rational__V_6_6 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Num_4);
    }
    {
      mercury__rational__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Den_5);
    }
    {
      mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__V_6_6, mercury__rational__V_7_7);
    }
    return mercury__rational__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rational__rational_1_f_0(
  MR_Integer mercury__rational__Int_3)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__2_2;
    MR_Word mercury__rational__V_4_4;
    MR_Word mercury__rational__V_5_5;
    MR_Word mercury__rational__V_3_10;
    MR_Word mercury__rational__V_5_12;

    {
      mercury__rational__V_4_4 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Int_3);
    }
    mercury__rational__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__rational__V_3_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
    mercury__rational__V_5_5 = (MR_Word) &mercury__rational_scalar_common_4[2];
    {
      mercury__rational__HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(mercury__rational__V_4_4, mercury__rational__V_5_5);
    }
    return mercury__rational__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rational__f_greater_or_equal_2_p_0(
  MR_Word mercury__rational__R1_3,
  MR_Word mercury__rational__R2_4)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Cmp_5;

    {
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
    switch (mercury__rational__Cmp_5) {
      default:
        mercury__rational__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        mercury__rational__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        mercury__rational__succeeded = MR_TRUE;
        break;
    }
    return mercury__rational__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rational__f_less_or_equal_2_p_0(
  MR_Word mercury__rational__R1_3,
  MR_Word mercury__rational__R2_4)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Cmp_5;

    {
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
    switch (mercury__rational__Cmp_5) {
      default:
        mercury__rational__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        mercury__rational__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        mercury__rational__succeeded = MR_TRUE;
        break;
    }
    return mercury__rational__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rational__f_greater_than_2_p_0(
  MR_Word mercury__rational__R1_3,
  MR_Word mercury__rational__R2_4)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Cmp_5;

    {
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
    mercury__rational__succeeded = (mercury__rational__Cmp_5 == (MR_Integer) 2);
    return mercury__rational__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rational__f_less_than_2_p_0(
  MR_Word mercury__rational__R1_3,
  MR_Word mercury__rational__R2_4)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Cmp_5;

    {
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
    mercury__rational__succeeded = (mercury__rational__Cmp_5 == (MR_Integer) 1);
    return mercury__rational__succeeded;
  }
}

MR_Word MR_CALL 
mercury__rational__one_0_f_0(void)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__1_1 = (MR_Word) &mercury__rational_scalar_common_4[4];
    MR_Word mercury__rational__V_2_2 = (MR_Word) &mercury__rational_scalar_common_4[2];
    MR_Word mercury__rational__V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__rational__V_3_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);

    return mercury__rational__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__rational__zero_0_f_0(void)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__HeadVar__1_1 = (MR_Word) &mercury__rational_scalar_common_4[3];
    MR_Word mercury__rational__V_2_2 = (MR_Word) &mercury__rational_scalar_common_4[0];
    MR_Word mercury__rational__V_3_3 = (MR_Word) &mercury__rational_scalar_common_4[2];
    MR_Word mercury__rational__V_3_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__rational__V_3_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[1]);
    MR_Word mercury__rational__V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__rational__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__rational__denom_1_f_0(
  MR_Word mercury__rational__HeadVar__1_1)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__rational__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));

    return mercury__rational__Den_4;
  }
}

MR_Word MR_CALL 
mercury__rational__numer_1_f_0(
  MR_Word mercury__rational__HeadVar__1_1)
{
  {
    MR_bool mercury__rational__succeeded;
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));

    return mercury__rational__Num_3;
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

/* :- end_module rational. */
