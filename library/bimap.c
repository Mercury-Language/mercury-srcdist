/*
** Automatically generated from `bimap.m'
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


/* :- module bimap. */
/* :- implementation. */

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




static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1;

static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2];

static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0;

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1];

static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1];

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1];

static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1];

static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
  MR_Box mercury__bimap__wrapper_arg_1,
  MR_Box mercury__bimap__wrapper_arg_2,
  MR_Box mercury__bimap__wrapper_arg_3,
  MR_Box mercury__bimap__wrapper_arg_4);

static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
  MR_Box mercury__bimap__wrapper_arg_1,
  MR_Box mercury__bimap__wrapper_arg_2,
  MR_Box * mercury__bimap__wrapper_arg_3,
  MR_Box mercury__bimap__wrapper_arg_4,
  MR_Box mercury__bimap__wrapper_arg_5);

static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__bimap__Var_53,
  MR_Word mercury__bimap__Var_54,
  MR_Word mercury__bimap__Var_55,
  MR_Word mercury__bimap__Var_56,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__HeadVar__3_3,
  MR_Box * mercury__bimap__HeadVar__4_4);

static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_29,
  MR_Word mercury__bimap__TypeInfo_for_V_30,
  MR_Word mercury__bimap__TypeInfo_for_A_31,
  MR_Word mercury__bimap__V_5_5,
  MR_Box mercury__bimap__LambdaHeadVar__1_21,
  MR_Box mercury__bimap__LambdaHeadVar__2_22,
  MR_Box mercury__bimap__LambdaHeadVar__3_23,
  MR_Box * mercury__bimap__LambdaHeadVar__4_24);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1
};

static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0 = {
  (MR_String) "bimap",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bimap__bimap__field_types_bimap_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bimap__bimap__du_stag_ordered_bimap_2_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bimap____Unify____bimap_2_0_10001)),
  ((MR_Box) (mercury__bimap____Compare____bimap_2_0_10001)),
  (MR_String) "bimap",
  (MR_String) "bimap",
  {     mercury__bimap__bimap__du_name_ordered_bimap_2 },
  {     mercury__bimap__bimap__du_ptag_ordered_bimap_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bimap__bimap__functor_number_map_bimap_2
};

static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
  MR_Box mercury__bimap__wrapper_arg_1,
  MR_Box mercury__bimap__wrapper_arg_2,
  MR_Box mercury__bimap__wrapper_arg_3,
  MR_Box mercury__bimap__wrapper_arg_4)
{
  {
    MR_bool mercury__bimap__succeeded;

    {
      mercury__bimap__succeeded = mercury__bimap____Unify____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), ((MR_Word) mercury__bimap__wrapper_arg_3), ((MR_Word) mercury__bimap__wrapper_arg_4));
    }
    return mercury__bimap__succeeded;
  }
}

static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
  MR_Box mercury__bimap__wrapper_arg_1,
  MR_Box mercury__bimap__wrapper_arg_2,
  MR_Box * mercury__bimap__wrapper_arg_3,
  MR_Box mercury__bimap__wrapper_arg_4,
  MR_Box mercury__bimap__wrapper_arg_5)
{
  {
    MR_Word mercury__bimap__conv0_HeadVar__1_1;

    {
      mercury__bimap____Compare____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), &mercury__bimap__conv0_HeadVar__1_1, ((MR_Word) mercury__bimap__wrapper_arg_4), ((MR_Word) mercury__bimap__wrapper_arg_5));
    }
    *mercury__bimap__wrapper_arg_3 = ((MR_Box) (mercury__bimap__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__bimap__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__bimap____Compare____bimap_2_0(
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_V_12,
  MR_Word * mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__HeadVar__3_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Integer mercury__bimap__CastX_9 = (MR_Integer) mercury__bimap__HeadVar__2_2;
    MR_Integer mercury__bimap__CastY_10 = (MR_Integer) mercury__bimap__HeadVar__3_3;

    mercury__bimap__succeeded = (mercury__bimap__CastX_9 == mercury__bimap__CastY_10);
    if (mercury__bimap__succeeded)
      *mercury__bimap__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__bimap__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__bimap__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__bimap__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__bimap__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__bimap__Var_8;

        {
          mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, &mercury__bimap__Var_8, mercury__bimap__ArgX1_4, mercury__bimap__ArgY1_5);
        }
        mercury__bimap__succeeded = (mercury__bimap__Var_8 == (MR_Integer) 0);
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
        if (mercury__bimap__succeeded)
          *mercury__bimap__HeadVar__1_1 = mercury__bimap__Var_8;
        else
          {
            mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__HeadVar__1_1, mercury__bimap__ArgX2_6, mercury__bimap__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Integer mercury__bimap__CastX_7 = (MR_Integer) mercury__bimap__HeadVar__1_1;
    MR_Integer mercury__bimap__CastY_8 = (MR_Integer) mercury__bimap__HeadVar__2_2;

    mercury__bimap__succeeded = (mercury__bimap__CastX_7 == mercury__bimap__CastY_8);
    if (mercury__bimap__succeeded)
      mercury__bimap__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__bimap__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__bimap__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__bimap__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__bimap__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__ArgX1_3, mercury__bimap__ArgY1_4);
        }
        if (mercury__bimap__succeeded)
          {
            mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__ArgX2_5, mercury__bimap__ArgY2_6);
          }
      }
    return mercury__bimap__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bimap__reverse_map_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__HeadVar__1_1)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

    return mercury__bimap__Reverse_4;
  }
}

MR_Word MR_CALL 
mercury__bimap__forward_map_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__HeadVar__1_1)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    return mercury__bimap__Forward_3;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_7(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_7(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_6(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_6(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_5(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_5(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_4(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl3_8_p_4(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_3(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl3_8_p_3(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_2(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl3_8_p_2(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_1(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl3_8_p_1(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl3_8_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_24,
  MR_Word mercury__bimap__TypeInfo_for_V_25,
  MR_Word mercury__bimap__TypeInfo_for_A_26,
  MR_Word mercury__bimap__TypeInfo_for_B_27,
  MR_Word mercury__bimap__TypeInfo_for_C_28,
  MR_Word mercury__bimap__Pred_9,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl3_8_p_0(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_6(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_5(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_4(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_3(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl2_6_p_3(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_2(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl2_6_p_2(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_1(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl2_6_p_1(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl2_6_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Word mercury__bimap__TypeInfo_for_A_20,
  MR_Word mercury__bimap__TypeInfo_for_B_21,
  MR_Word mercury__bimap__Pred_7,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl2_6_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_5(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl_4_p_5(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_4(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl_4_p_4(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__foldl_4_p_3(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__foldl_4_p_3(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_2(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl_4_p_2(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_1(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl_4_p_1(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
  }
}

void MR_CALL 
mercury__bimap__foldl_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_12,
  MR_Word mercury__bimap__TypeInfo_for_V_13,
  MR_Word mercury__bimap__TypeInfo_for_A_14,
  MR_Word mercury__bimap__Pred_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__tree234__foldl_4_p_0(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
  }
}

MR_Box MR_CALL 
mercury__bimap__foldl_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__TypeInfo_for_A_11,
  MR_Word mercury__bimap__Func_5,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__List0_8)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Box mercury__bimap__HeadVar__4_4;
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

    {
      mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_A_11, mercury__bimap__Func_5, mercury__bimap__Forward_6, mercury__bimap__List0_8, &mercury__bimap__HeadVar__4_4);
    }
    return mercury__bimap__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__bimap__Var_53,
  MR_Word mercury__bimap__Var_54,
  MR_Word mercury__bimap__Var_55,
  MR_Word mercury__bimap__Var_56,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Box mercury__bimap__HeadVar__3_3,
  MR_Box * mercury__bimap__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        switch (MR_tag((MR_Word) mercury__bimap__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__bimap__HeadVar__4_4 = mercury__bimap__HeadVar__3_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__bimap__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__bimap__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__bimap__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__bimap__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__bimap__V_17_15;
              MR_Box mercury__bimap__V_18_16;

              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_12_11, mercury__bimap__HeadVar__3_3, &mercury__bimap__V_17_15);
              }
              {
                mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_10_9, mercury__bimap__V_11_10, mercury__bimap__V_17_15, &mercury__bimap__V_18_16);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__V_13_12;
                MR_Box mercury__bimap__next_value_of_HeadVar__3_3 = mercury__bimap__V_18_16;

                mercury__bimap__HeadVar__3_3 = mercury__bimap__next_value_of_HeadVar__3_3;
                mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__bimap__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__bimap__V_22_19 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
              MR_Box mercury__bimap__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
              MR_Box mercury__bimap__V_24_21 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
              MR_Word mercury__bimap__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 4)));
              MR_Word mercury__bimap__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 5)));
              MR_Word mercury__bimap__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
              MR_Box mercury__bimap__V_31_27;
              MR_Box mercury__bimap__V_32_28;
              MR_Box mercury__bimap__V_33_29;
              MR_Box mercury__bimap__V_34_30;

              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_25_22, mercury__bimap__HeadVar__3_3, &mercury__bimap__V_31_27);
              }
              {
                mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_21_18, mercury__bimap__V_22_19, mercury__bimap__V_31_27, &mercury__bimap__V_32_28);
              }
              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_26_23, mercury__bimap__V_32_28, &mercury__bimap__V_33_29);
              }
              {
                mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_23_20, mercury__bimap__V_24_21, mercury__bimap__V_33_29, &mercury__bimap__V_34_30);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__V_27_24;
                MR_Box mercury__bimap__next_value_of_HeadVar__3_3 = mercury__bimap__V_34_30;

                mercury__bimap__HeadVar__3_3 = mercury__bimap__next_value_of_HeadVar__3_3;
                mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__bimap__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__bimap__V_38_33 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
              MR_Box mercury__bimap__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
              MR_Box mercury__bimap__V_40_35 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
              MR_Box mercury__bimap__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 4));
              MR_Box mercury__bimap__V_42_37 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 5));
              MR_Word mercury__bimap__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
              MR_Word mercury__bimap__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 7)));
              MR_Word mercury__bimap__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 8)));
              MR_Word mercury__bimap__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 9)));
              MR_Box mercury__bimap__V_50_44;
              MR_Box mercury__bimap__V_51_45;
              MR_Box mercury__bimap__V_52_46;
              MR_Box mercury__bimap__V_53_47;
              MR_Box mercury__bimap__V_54_48;
              MR_Box mercury__bimap__V_55_49;
              MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_43_38, mercury__bimap__HeadVar__3_3, &mercury__bimap__V_50_44);
              }
              mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__Var_56, (MR_Integer) 1)));
              {
                mercury__bimap__V_51_45 = mercury__bimap__func_0(((MR_Box) mercury__bimap__Var_56), mercury__bimap__V_37_32, mercury__bimap__V_38_33, mercury__bimap__V_50_44);
              }
              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_44_39, mercury__bimap__V_51_45, &mercury__bimap__V_52_46);
              }
              {
                mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_39_34, mercury__bimap__V_40_35, mercury__bimap__V_52_46, &mercury__bimap__V_53_47);
              }
              {
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_45_40, mercury__bimap__V_53_47, &mercury__bimap__V_54_48);
              }
              {
                mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(mercury__bimap__Var_53, mercury__bimap__Var_54, mercury__bimap__Var_55, mercury__bimap__Var_56, mercury__bimap__V_41_36, mercury__bimap__V_42_37, mercury__bimap__V_54_48, &mercury__bimap__V_55_49);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__V_46_41;
                MR_Box mercury__bimap__next_value_of_HeadVar__3_3 = mercury__bimap__V_55_49;

                mercury__bimap__HeadVar__3_3 = mercury__bimap__next_value_of_HeadVar__3_3;
                mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__164__1_8_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_29,
  MR_Word mercury__bimap__TypeInfo_for_V_30,
  MR_Word mercury__bimap__TypeInfo_for_A_31,
  MR_Word mercury__bimap__V_5_5,
  MR_Box mercury__bimap__LambdaHeadVar__1_21,
  MR_Box mercury__bimap__LambdaHeadVar__2_22,
  MR_Box mercury__bimap__LambdaHeadVar__3_23,
  MR_Box * mercury__bimap__LambdaHeadVar__4_24)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__V_5_5, (MR_Integer) 1)));

    {
      *mercury__bimap__LambdaHeadVar__4_24 = mercury__bimap__func_0(((MR_Box) mercury__bimap__V_5_5), mercury__bimap__LambdaHeadVar__1_21, mercury__bimap__LambdaHeadVar__2_22, mercury__bimap__LambdaHeadVar__3_23);
    }
  }
}

void MR_CALL 
mercury__bimap__map_values_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_10,
  MR_Word mercury__bimap__TypeInfo_for_V_11,
  MR_Word mercury__bimap__TypeInfo_for_W_12,
  MR_Word mercury__bimap__ValueMap_4,
  MR_Word mercury__bimap__BM0_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__L0_7;
    MR_Word mercury__bimap__L_8;
    MR_Word mercury__bimap__Var_9;
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_25;
    MR_Word mercury__bimap__Forward_28;
    MR_Word mercury__bimap__Reverse_29;
    MR_Word mercury__bimap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
    mercury__bimap__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bimap__map_values_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__Var_9, &mercury__bimap__L_8);
    }
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__Var_25, mercury__bimap__BM_6);
    }
  }
}

void MR_CALL 
mercury__bimap__map_values_2_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_21,
  MR_Word mercury__bimap__TypeInfo_for_V_22,
  MR_Word mercury__bimap__TypeInfo_for_W_23,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
        else
          {
            MR_Box mercury__bimap__Key_10;
            MR_Box mercury__bimap__Value0_11;
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__Value_14;
            MR_Word mercury__bimap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
            MR_Word mercury__bimap__Var_19;
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 0));
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 1));
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11, &mercury__bimap__Value_14);
            }
            {
              mercury__bimap__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 0) = mercury__bimap__Key_10;
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 1) = mercury__bimap__Value_14;
            }
            {
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__Var_19));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Tail0_12;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3;
              mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__map_values_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_10,
  MR_Word mercury__bimap__TypeInfo_for_V_11,
  MR_Word mercury__bimap__TypeInfo_for_W_12,
  MR_Word mercury__bimap__ValueMap_4,
  MR_Word mercury__bimap__BM0_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;
    MR_Word mercury__bimap__L0_7;
    MR_Word mercury__bimap__L_8;
    MR_Word mercury__bimap__Var_9;
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_25;
    MR_Word mercury__bimap__Forward_28;
    MR_Word mercury__bimap__Reverse_29;
    MR_Word mercury__bimap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
    mercury__bimap__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bimap__map_values_func_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__Var_9, &mercury__bimap__L_8);
    }
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__Var_25, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__map_values_func_2_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_21,
  MR_Word mercury__bimap__TypeInfo_for_V_22,
  MR_Word mercury__bimap__TypeInfo_for_W_23,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
        else
          {
            MR_Box mercury__bimap__Key_10;
            MR_Box mercury__bimap__Value0_11;
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__Value_14;
            MR_Word mercury__bimap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
            MR_Word mercury__bimap__Var_19;
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 0));
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 1));
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__bimap__Value_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11);
            }
            {
              mercury__bimap__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 0) = mercury__bimap__Key_10;
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 1) = mercury__bimap__Value_14;
            }
            {
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__Var_19));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Tail0_12;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3;
              mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bimap__map_keys_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_L_12,
  MR_Word mercury__bimap__KeyMap_4,
  MR_Word mercury__bimap__BM0_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__L0_7;
    MR_Word mercury__bimap__L_8;
    MR_Word mercury__bimap__Var_9;
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_25;
    MR_Word mercury__bimap__Forward_28;
    MR_Word mercury__bimap__Reverse_29;
    MR_Word mercury__bimap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
    mercury__bimap__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bimap__map_keys_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__Var_9, &mercury__bimap__L_8);
    }
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__Var_25, mercury__bimap__BM_6);
    }
  }
}

void MR_CALL 
mercury__bimap__map_keys_2_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_V_21,
  MR_Word mercury__bimap__TypeInfo_for_K_22,
  MR_Word mercury__bimap__TypeInfo_for_L_23,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
        else
          {
            MR_Box mercury__bimap__Key0_10;
            MR_Box mercury__bimap__Value_11;
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__Key_14;
            MR_Word mercury__bimap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
            MR_Word mercury__bimap__Var_19;
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 0));
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 1));
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10, &mercury__bimap__Key_14);
            }
            {
              mercury__bimap__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 0) = mercury__bimap__Key_14;
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 1) = mercury__bimap__Value_11;
            }
            {
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__Var_19));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Tail0_12;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3;
              mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__map_keys_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_L_12,
  MR_Word mercury__bimap__KeyMap_4,
  MR_Word mercury__bimap__BM0_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;
    MR_Word mercury__bimap__L0_7;
    MR_Word mercury__bimap__L_8;
    MR_Word mercury__bimap__Var_9;
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_25;
    MR_Word mercury__bimap__Forward_28;
    MR_Word mercury__bimap__Reverse_29;
    MR_Word mercury__bimap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
    mercury__bimap__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bimap__map_keys_func_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__Var_9, &mercury__bimap__L_8);
    }
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__Var_25, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__map_keys_func_2_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_V_21,
  MR_Word mercury__bimap__TypeInfo_for_K_22,
  MR_Word mercury__bimap__TypeInfo_for_L_23,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
        else
          {
            MR_Box mercury__bimap__Key0_10;
            MR_Box mercury__bimap__Value_11;
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__Key_14;
            MR_Word mercury__bimap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
            MR_Word mercury__bimap__Var_19;
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 0));
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_17, (MR_Integer) 1));
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__bimap__Key_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10);
            }
            {
              mercury__bimap__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 0) = mercury__bimap__Key_14;
              MR_hl_field(MR_mktag(0), mercury__bimap__Var_19, 1) = mercury__bimap__Value_11;
            }
            {
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__Var_19));
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Tail0_12;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_List_0_3;
              mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bimap__apply_reverse_map_to_list_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__Vs_6,
  MR_Word * mercury__bimap__Ks_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

    {
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Vs_6, mercury__bimap__Reverse_5, mercury__bimap__Ks_7);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__apply_reverse_map_to_list_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Word mercury__bimap__Vs_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Ks_6;
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

    {
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__Reverse_12, &mercury__bimap__Ks_6);
    }
    return mercury__bimap__Ks_6;
  }
}

void MR_CALL 
mercury__bimap__apply_forward_map_to_list_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__Ks_6,
  MR_Word * mercury__bimap__Vs_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_6, mercury__bimap__Forward_4, mercury__bimap__Vs_7);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__apply_forward_map_to_list_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Word mercury__bimap__Ks_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Vs_6;
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

    {
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__Forward_11, &mercury__bimap__Vs_6);
    }
    return mercury__bimap__Vs_6;
  }
}

void MR_CALL 
mercury__bimap__det_from_corresponding_lists_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__Ks_4,
  MR_Word mercury__bimap__Vs_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__L_7;
    MR_Word mercury__bimap__Var_12;
    MR_Word mercury__bimap__Forward_15;
    MR_Word mercury__bimap__Reverse_16;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__Var_12, mercury__bimap__BM_6);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__det_from_corresponding_lists_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__Ks_4,
  MR_Word mercury__bimap__Vs_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;
    MR_Word mercury__bimap__L_12;
    MR_Word mercury__bimap__Var_15;
    MR_Word mercury__bimap__Forward_18;
    MR_Word mercury__bimap__Reverse_19;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__Var_15, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__Ks_4,
  MR_Word mercury__bimap__Vs_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__L_7;
    MR_Word mercury__bimap__Var_12;
    MR_Word mercury__bimap__Forward_15;
    MR_Word mercury__bimap__Reverse_16;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    {
      mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__Var_12, mercury__bimap__BM_6);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__Ks_4,
  MR_Word mercury__bimap__Vs_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__L_12;
    MR_Word mercury__bimap__Var_15;
    MR_Word mercury__bimap__Forward_18;
    MR_Word mercury__bimap__Reverse_19;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__Var_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    {
      mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__Var_15, mercury__bimap__BM_6);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__det_from_assoc_list_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__L_3,
  MR_Word * mercury__bimap__Bimap_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Var_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__Var_5, mercury__bimap__Bimap_4);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__det_from_assoc_list_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__L_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Bimap_4;
    MR_Word mercury__bimap__Var_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__L_3, mercury__bimap__Var_9, &mercury__bimap__Bimap_4);
    }
    return mercury__bimap__Bimap_4;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_assoc_list_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__L_3,
  MR_Word * mercury__bimap__Bimap_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Var_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__Var_5, mercury__bimap__Bimap_4);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__from_assoc_list_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__AL_3,
  MR_Word * mercury__bimap__BM_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Var_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__AL_3, mercury__bimap__Var_9, mercury__bimap__BM_4);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__to_assoc_list_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word * mercury__bimap__L_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__L_5);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__to_assoc_list_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__BM_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__AL_4;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__AL_4);
    }
    return mercury__bimap__AL_4;
  }
}

MR_Integer MR_CALL 
mercury__bimap__count_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Integer mercury__bimap__Count_4;
    MR_Word mercury__bimap__Forward_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

    {
      mercury__tree234__count_2_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_5, &mercury__bimap__Count_4);
    }
    return mercury__bimap__Count_4;
  }
}

void MR_CALL 
mercury__bimap__overlay_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__BMA_4,
  MR_Word mercury__bimap__BMB_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__KVBs_7;
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_11, mercury__bimap__V_5_17, &mercury__bimap__KVBs_7);
    }
    {
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__KVBs_7, mercury__bimap__BMA_4, mercury__bimap__BM_6);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__overlay_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BMA_4,
  MR_Word mercury__bimap__BMB_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;
    MR_Word mercury__bimap__KVBs_12;
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__KVBs_12);
    }
    {
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVBs_12, mercury__bimap__BMA_4, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__overlay_2_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_16,
  MR_Word mercury__bimap__TypeInfo_for_V_17,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
        else
          {
            MR_Box mercury__bimap__Key_7;
            MR_Box mercury__bimap__Value_8;
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 0));
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 1));
            {
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__KeysValues_9;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
              mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__delete_values_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM0_4,
  MR_Word mercury__bimap__Vs_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;

    {
      mercury__bimap__delete_values_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__delete_values_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_V_14,
  MR_Word mercury__bimap__TypeInfo_for_K_15,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
        else
          {
            MR_Box mercury__bimap__Value_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__bimap__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__K_22;

            {
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__K_22);
            }
            if (mercury__bimap__succeeded)
              {
                MR_Word mercury__bimap__Forward_23;
                MR_Word mercury__bimap__Reverse_24;
                MR_Word mercury__bimap__V_7_35;
                MR_Word mercury__bimap__V_7_42;

                {
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_20, mercury__bimap__K_22, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
                {
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
                {
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
                }
              }
            else
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__Values_8;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
              mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__delete_keys_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM0_4,
  MR_Word mercury__bimap__Ks_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;

    {
      mercury__bimap__delete_keys_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__delete_keys_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_14,
  MR_Word mercury__bimap__TypeInfo_for_V_15,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
        else
          {
            MR_Box mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__bimap__Keys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
            MR_Box mercury__bimap__V_22;

            {
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__V_22);
            }
            if (mercury__bimap__succeeded)
              {
                MR_Word mercury__bimap__Forward_23;
                MR_Word mercury__bimap__Reverse_24;
                MR_Word mercury__bimap__V_7_35;
                MR_Word mercury__bimap__V_7_42;

                {
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
                {
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_21, mercury__bimap__V_22, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
                {
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
                }
              }
            else
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__Keys_8;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
              mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bimap__delete_value_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_V_14,
  MR_Word mercury__bimap__TypeInfo_for_K_15,
  MR_Box mercury__bimap__V_4,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
    MR_Box mercury__bimap__K_8;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__K_8);
    }
    if (mercury__bimap__succeeded)
      {
        MR_Word mercury__bimap__Forward_9;
        MR_Word mercury__bimap__Reverse_10;
        MR_Word mercury__bimap__V_7_25;
        MR_Word mercury__bimap__V_7_32;

        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_6, mercury__bimap__K_8, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
        }
      }
    else
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_value_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
  MR_Box mercury__bimap__V_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
    MR_Box mercury__bimap__K_17;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__K_17);
    }
    if (mercury__bimap__succeeded)
      {
        MR_Word mercury__bimap__Forward_18;
        MR_Word mercury__bimap__Reverse_19;
        MR_Word mercury__bimap__V_7_30;
        MR_Word mercury__bimap__V_7_37;

        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_17, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
        {
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
        }
      }
    else
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
    return mercury__bimap__STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bimap__delete_key_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_14,
  MR_Word mercury__bimap__TypeInfo_for_V_15,
  MR_Box mercury__bimap__K_4,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
    MR_Box mercury__bimap__V_8;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__V_8);
    }
    if (mercury__bimap__succeeded)
      {
        MR_Word mercury__bimap__Forward_9;
        MR_Word mercury__bimap__Reverse_10;
        MR_Word mercury__bimap__V_7_25;
        MR_Word mercury__bimap__V_7_32;

        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_7, mercury__bimap__V_8, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
        }
      }
    else
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
  }
}

MR_Word MR_CALL 
mercury__bimap__delete_key_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
  MR_Box mercury__bimap__K_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
    MR_Box mercury__bimap__V_17;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__V_17);
    }
    if (mercury__bimap__succeeded)
      {
        MR_Word mercury__bimap__Forward_18;
        MR_Word mercury__bimap__Reverse_19;
        MR_Word mercury__bimap__V_7_30;
        MR_Word mercury__bimap__V_7_37;

        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
        {
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_17, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
        {
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
        }
      }
    else
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
    return mercury__bimap__STATE_VARIABLE_BM_7;
  }
}

MR_Word MR_CALL 
mercury__bimap__set_from_corresponding_lists_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__Ks_5,
  MR_Word mercury__bimap__Vs_6,
  MR_Word mercury__bimap__BM0_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_8;

    {
      mercury__bimap__set_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__BM0_7, &mercury__bimap__BM_8);
    }
    return mercury__bimap__BM_8;
  }
}

void MR_CALL 
mercury__bimap__set_from_corresponding_lists_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_29,
  MR_Word mercury__bimap__TypeInfo_for_V_30,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
          else
            {
              {
                mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
                return;
              }
            }
        else
          {
            MR_Word mercury__bimap__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__bimap__Var_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
                  return;
                }
              }
            else
              {
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;

                {
                  mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__Var_32, mercury__bimap__Value_22, mercury__bimap__STATE_VARIABLE_BM_0_3, &mercury__bimap__STATE_VARIABLE_BM_27_27);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__Var_31;
                  MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Values_23;
                  MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_3;
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__set_from_assoc_list_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__KVs_4,
  MR_Word mercury__bimap__BM0_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_6;

    {
      mercury__bimap__set_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVs_4, mercury__bimap__BM0_5, &mercury__bimap__BM_6);
    }
    return mercury__bimap__BM_6;
  }
}

void MR_CALL 
mercury__bimap__set_from_assoc_list_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_16,
  MR_Word mercury__bimap__TypeInfo_for_V_17,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
        else
          {
            MR_Box mercury__bimap__Key_7;
            MR_Box mercury__bimap__Value_8;
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 0));
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 1));
            {
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__KeysValues_9;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
              mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_V_12,
  MR_Word mercury__bimap__Ks_5,
  MR_Word mercury__bimap__Vs_6,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

    {
      mercury__bimap__det_insert_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
    return mercury__bimap__STATE_VARIABLE_BM_9;
  }
}

void MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_29,
  MR_Word mercury__bimap__TypeInfo_for_V_30,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__HeadVar__2_2,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
          else
            {
              {
                mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
                return;
              }
            }
        else
          {
            MR_Word mercury__bimap__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__bimap__Var_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
                  return;
                }
              }
            else
              {
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;
                MR_Word mercury__bimap__Forward0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 0)));
                MR_Word mercury__bimap__Reverse0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 1)));
                MR_Word mercury__bimap__Forward_40;
                MR_Word mercury__bimap__Reverse_41;

                {
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__Var_32, mercury__bimap__Value_22, mercury__bimap__Forward0_38, &mercury__bimap__Forward_40);
                }
                {
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_30, mercury__bimap__TypeInfo_for_K_29, mercury__bimap__Value_22, mercury__bimap__Var_32, mercury__bimap__Reverse0_39, &mercury__bimap__Reverse_41);
                }
                {
                  mercury__bimap__STATE_VARIABLE_BM_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 0) = ((MR_Box) (mercury__bimap__Forward_40));
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 1) = ((MR_Box) (mercury__bimap__Reverse_41));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__Var_31;
                  MR_Word mercury__bimap__next_value_of_HeadVar__2_2 = mercury__bimap__Values_23;
                  MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_3;
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__next_value_of_HeadVar__2_2;
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_from_assoc_list_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__KVs_4,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;

    {
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__KVs_4, mercury__bimap__STATE_VARIABLE_BM_0_6, &mercury__bimap__STATE_VARIABLE_BM_7);
    }
    return mercury__bimap__STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bimap__det_insert_from_assoc_list_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_16,
  MR_Word mercury__bimap__TypeInfo_for_V_17,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
        else
          {
            MR_Box mercury__bimap__Key_7;
            MR_Box mercury__bimap__Value_8;
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
            MR_Word mercury__bimap__Forward0_23;
            MR_Word mercury__bimap__Reverse0_24;
            MR_Word mercury__bimap__Forward_25;
            MR_Word mercury__bimap__Reverse_26;

            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 0));
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 1));
            mercury__bimap__Forward0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
            mercury__bimap__Reverse0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
            {
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__Forward0_23, &mercury__bimap__Forward_25);
            }
            {
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__Reverse0_24, &mercury__bimap__Reverse_26);
            }
            {
              mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__Forward_25));
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__Reverse_26));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__KeysValues_9;
              MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
              mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__List_4,
  MR_Word mercury__bimap__BM0_5,
  MR_Word * mercury__bimap__BM_6)
{
  {
    MR_bool mercury__bimap__succeeded;

    {
      mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__List_4, mercury__bimap__BM0_5, mercury__bimap__BM_6);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_16,
  MR_Word mercury__bimap__TypeInfo_for_V_17,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bimap__succeeded;

        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
            mercury__bimap__succeeded = MR_TRUE;
          }
        else
          {
            MR_Box mercury__bimap__Key_7;
            MR_Box mercury__bimap__Value_8;
            MR_Word mercury__bimap__KeyValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__bimap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_22;
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_23;
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_24;
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_25;

            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 0));
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__Var_13, (MR_Integer) 1));
            mercury__bimap__STATE_VARIABLE_Forward_0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
            mercury__bimap__STATE_VARIABLE_Reverse_0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
            {
              mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_Forward_0_22, &mercury__bimap__STATE_VARIABLE_Forward_24);
            }
            if (mercury__bimap__succeeded)
              {
                {
                  mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__STATE_VARIABLE_Reverse_0_23, &mercury__bimap__STATE_VARIABLE_Reverse_25);
                }
                if (mercury__bimap__succeeded)
                  {
                    {
                      mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_24));
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_25));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__bimap__next_value_of_HeadVar__1_1 = mercury__bimap__KeyValues_9;
                      MR_Word mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

                      mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__next_value_of_STATE_VARIABLE_BM_0_2;
                      mercury__bimap__HeadVar__1_1 = mercury__bimap__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return mercury__bimap__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bimap__set_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_V_12,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
  MR_Box mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

    {
      mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
    return mercury__bimap__STATE_VARIABLE_BM_9;
  }
}

void MR_CALL 
mercury__bimap__set_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_21,
  MR_Word mercury__bimap__TypeInfo_for_V_22,
  MR_Box mercury__bimap__K_5,
  MR_Box mercury__bimap__V_6,
  MR_Word mercury__bimap__HeadVar__3_3,
  MR_Word * mercury__bimap__HeadVar__4_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_13;
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_14;
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_15_15;
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_16_16;
    MR_Box mercury__bimap__KVal_9;
    MR_Box mercury__bimap__VKey_10;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_0_11, mercury__bimap__K_5, &mercury__bimap__KVal_9);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__V_6, mercury__bimap__KVal_9);
        }
        if (mercury__bimap__succeeded)
          {
            mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
            mercury__bimap__STATE_VARIABLE_Forward_15_15 = mercury__bimap__STATE_VARIABLE_Forward_0_11;
          }
        else
          {
            MR_Word mercury__bimap__V_7_32;

            {
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
            }
            {
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_0_12, mercury__bimap__KVal_9, &mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__V_7_32);
            }
          }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
        }
        mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
      }
    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_16_16, mercury__bimap__V_6, &mercury__bimap__VKey_10);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__K_5, mercury__bimap__VKey_10);
        }
        if (mercury__bimap__succeeded)
          {
            mercury__bimap__STATE_VARIABLE_Reverse_14 = mercury__bimap__STATE_VARIABLE_Reverse_16_16;
            mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
          }
        else
          {
            MR_Word mercury__bimap__V_7_42;

            {
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
            }
            {
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_15_15, mercury__bimap__VKey_10, &mercury__bimap__STATE_VARIABLE_Forward_13, &mercury__bimap__V_7_42);
            }
          }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
        }
        mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__bimap__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_14));
    }
  }
}

void MR_CALL 
mercury__bimap__search_insert_5_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_18,
  MR_Word mercury__bimap__TypeInfo_for_V_19,
  MR_Box mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7,
  MR_Word * mercury__bimap__MaybeOldV_8,
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_15,
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_16)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 1)));
    MR_Word mercury__bimap__Forward_12;

    {
      mercury__tree234__search_insert_5_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__MaybeOldV_8, mercury__bimap__Forward0_10, &mercury__bimap__Forward_12);
    }
    if ((*mercury__bimap__MaybeOldV_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__bimap__Reverse_14;

        {
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_K_18, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_11, &mercury__bimap__Reverse_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mercury__bimap__STATE_VARIABLE_Bimap_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_14));
        }
      }
    else
      *mercury__bimap__STATE_VARIABLE_Bimap_16 = mercury__bimap__STATE_VARIABLE_Bimap_0_15;
  }
}

void MR_CALL 
mercury__bimap__det_insert_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_15,
  MR_Word mercury__bimap__TypeInfo_for_V_16,
  MR_Box mercury__bimap__K_5,
  MR_Box mercury__bimap__V_6,
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_12,
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_13)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 1)));
    MR_Word mercury__bimap__Forward_10;
    MR_Word mercury__bimap__Reverse_11;

    {
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__Forward0_8, &mercury__bimap__Forward_10);
    }
    {
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__Reverse0_9, &mercury__bimap__Reverse_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__bimap__STATE_VARIABLE_Bimap_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_11));
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__det_insert_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_V_12,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
  MR_Box mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;
    MR_Word mercury__bimap__Forward0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
    MR_Word mercury__bimap__Forward_20;
    MR_Word mercury__bimap__Reverse_21;

    {
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__Forward0_18, &mercury__bimap__Forward_20);
    }
    {
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_19, &mercury__bimap__Reverse_21);
    }
    {
      mercury__bimap__STATE_VARIABLE_BM_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 0) = ((MR_Box) (mercury__bimap__Forward_20));
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 1) = ((MR_Box) (mercury__bimap__Reverse_21));
    }
    return mercury__bimap__STATE_VARIABLE_BM_9;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_4_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_15,
  MR_Word mercury__bimap__TypeInfo_for_V_16,
  MR_Box mercury__bimap__K_5,
  MR_Box mercury__bimap__V_6,
  MR_Word mercury__bimap__HeadVar__3_3,
  MR_Word * mercury__bimap__HeadVar__4_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_11;
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_12;

    {
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_9, &mercury__bimap__STATE_VARIABLE_Forward_11);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_0_10, &mercury__bimap__STATE_VARIABLE_Reverse_12);
        }
        if (mercury__bimap__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bimap__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_12));
            }
            mercury__bimap__succeeded = MR_TRUE;
          }
      }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__insert_3_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_11,
  MR_Word mercury__bimap__TypeInfo_for_V_12,
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
  MR_Box mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7,
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_9)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_19;
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_20;

    {
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_Forward_0_17, &mercury__bimap__STATE_VARIABLE_Forward_19);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__STATE_VARIABLE_Reverse_0_18, &mercury__bimap__STATE_VARIABLE_Reverse_20);
        }
        if (mercury__bimap__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *mercury__bimap__STATE_VARIABLE_BM_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_19));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_20));
            }
            mercury__bimap__succeeded = MR_TRUE;
          }
      }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__coordinates_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word * mercury__bimap__Cs_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5_12, mercury__bimap__Cs_5);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__coordinates_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__BM_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Vs_4;
    MR_Word mercury__bimap__Reverse_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_6, mercury__bimap__TypeInfo_for_K_5, mercury__bimap__Reverse_9, mercury__bimap__V_5_14, &mercury__bimap__Vs_4);
    }
    return mercury__bimap__Vs_4;
  }
}

void MR_CALL 
mercury__bimap__ordinates_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Word * mercury__bimap__Os_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__Os_5);
    }
  }
}

MR_Word MR_CALL 
mercury__bimap__ordinates_1_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word mercury__bimap__BM_3)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Ks_4;
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__Ks_4);
    }
    return mercury__bimap__Ks_4;
  }
}

MR_bool MR_CALL 
mercury__bimap__contains_value_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box mercury__bimap__V_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Box mercury__bimap__V_5_10;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5, &mercury__bimap__V_5_10);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__contains_key_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_6,
  MR_Word mercury__bimap__TypeInfo_for_V_7,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box mercury__bimap__K_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box mercury__bimap__V_5_10;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__K_5, &mercury__bimap__V_5_10);
    }
    return mercury__bimap__succeeded;
  }
}

void MR_CALL 
mercury__bimap__reverse_lookup_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box * mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

    {
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
  }
}

MR_Box MR_CALL 
mercury__bimap__reverse_lookup_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Box mercury__bimap__V_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Box mercury__bimap__K_6;
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

    {
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, &mercury__bimap__K_6);
    }
    return mercury__bimap__K_6;
  }
}

void MR_CALL 
mercury__bimap__lookup_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box mercury__bimap__K_6,
  MR_Box * mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
  }
}

MR_Box MR_CALL 
mercury__bimap__lookup_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Box mercury__bimap__K_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Box mercury__bimap__V_6;
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

    {
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, &mercury__bimap__V_6);
    }
    return mercury__bimap__V_6;
  }
}

MR_bool MR_CALL 
mercury__bimap__reverse_search_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box * mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__reverse_search_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Box mercury__bimap__V_5,
  MR_Box * mercury__bimap__K_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
    MR_Word mercury__bimap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, mercury__bimap__K_6);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__forward_search_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box mercury__bimap__K_6,
  MR_Box * mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__forward_search_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_7,
  MR_Word mercury__bimap__TypeInfo_for_V_8,
  MR_Word mercury__bimap__BM_4,
  MR_Box mercury__bimap__K_5,
  MR_Box * mercury__bimap__V_6)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, mercury__bimap__V_6);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__search_3_p_1(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box * mercury__bimap__K_6,
  MR_Box mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box mercury__bimap__Var_11;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, *mercury__bimap__K_6, &mercury__bimap__Var_11);
        }
        if (mercury__bimap__succeeded)
          {
            mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__V_7, mercury__bimap__Var_11);
          }
      }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__search_3_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_8,
  MR_Word mercury__bimap__TypeInfo_for_V_9,
  MR_Word mercury__bimap__HeadVar__1_1,
  MR_Box mercury__bimap__K_6,
  MR_Box * mercury__bimap__V_7)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box mercury__bimap__Var_10;

    {
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
    if (mercury__bimap__succeeded)
      {
        {
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, *mercury__bimap__V_7, &mercury__bimap__Var_10);
        }
        if (mercury__bimap__succeeded)
          {
            mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__K_6, mercury__bimap__Var_10);
          }
      }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__equal_2_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Word mercury__bimap__BMA_3,
  MR_Word mercury__bimap__BMB_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__ForwardA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMA_3, (MR_Integer) 0)));
    MR_Word mercury__bimap__ForwardB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_4, (MR_Integer) 0)));
    MR_Word mercury__bimap___ReverseA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMA_3, (MR_Integer) 1)));
    MR_Word mercury__bimap___ReverseB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_4, (MR_Integer) 1)));

    {
      mercury__bimap__succeeded = mercury__tree234__equal_2_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__ForwardA_5, mercury__bimap__ForwardB_7);
    }
    return mercury__bimap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bimap__is_empty_1_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_4,
  MR_Word mercury__bimap__TypeInfo_for_V_5,
  MR_Word mercury__bimap__HeadVar__1_1)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__bimap__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

    mercury__bimap__succeeded = (mercury__bimap__Forward_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__bimap__succeeded;
  }
}

MR_Word MR_CALL 
mercury__bimap__singleton_2_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_9,
  MR_Word mercury__bimap__TypeInfo_for_V_10,
  MR_Box mercury__bimap__K_4,
  MR_Box mercury__bimap__V_5)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__B_6;
    MR_Word mercury__bimap__Forward_7;
    MR_Word mercury__bimap__Reverse_8;
    MR_Word mercury__bimap__V_6_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__V_7_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__V_6_25;
    MR_Word mercury__bimap__V_7_26;

    {
      mercury__bimap__Forward_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 0) = mercury__bimap__K_4;
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 1) = mercury__bimap__V_5;
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 2) = ((MR_Box) (mercury__bimap__V_6_16));
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 3) = ((MR_Box) (mercury__bimap__V_7_17));
    }
    mercury__bimap__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bimap__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bimap__Reverse_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 0) = mercury__bimap__V_5;
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 1) = mercury__bimap__K_4;
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 2) = ((MR_Box) (mercury__bimap__V_6_25));
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 3) = ((MR_Box) (mercury__bimap__V_7_26));
    }
    {
      mercury__bimap__B_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 0) = ((MR_Box) (mercury__bimap__Forward_7));
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 1) = ((MR_Box) (mercury__bimap__Reverse_8));
    }
    return mercury__bimap__B_6;
  }
}

void MR_CALL 
mercury__bimap__init_1_p_0(
  MR_Word mercury__bimap__TypeInfo_for_K_5,
  MR_Word mercury__bimap__TypeInfo_for_V_6,
  MR_Word * mercury__bimap__B_2)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__Forward_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__bimap__B_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
  }
}

MR_Word MR_CALL 
mercury__bimap__init_0_f_0(
  MR_Word mercury__bimap__TypeInfo_for_K_3,
  MR_Word mercury__bimap__TypeInfo_for_V_4)
{
  {
    MR_bool mercury__bimap__succeeded;
    MR_Word mercury__bimap__BM_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
    MR_Word mercury__bimap__Forward_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__bimap__Reverse_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__bimap__BM_2;
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

/* :- end_module bimap. */
