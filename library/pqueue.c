/*
** Automatically generated from `pqueue.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module pqueue. */
/* :- implementation. */

/*
INIT mercury__pqueue__init
ENDINIT
*/

#include "pqueue.mih"


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




static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5];

static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1;

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1];

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1];

static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2];

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2];

static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2];

static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
  MR_Box mercury__pqueue__wrapper_arg_1,
  MR_Box mercury__pqueue__wrapper_arg_2,
  MR_Box mercury__pqueue__wrapper_arg_3,
  MR_Box mercury__pqueue__wrapper_arg_4);

static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
  MR_Box mercury__pqueue__wrapper_arg_1,
  MR_Box mercury__pqueue__wrapper_arg_2,
  MR_Box * mercury__pqueue__wrapper_arg_3,
  MR_Box mercury__pqueue__wrapper_arg_4,
  MR_Box mercury__pqueue__wrapper_arg_5);

static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
  MR_Box mercury__pqueue__K_1,
  MR_Box mercury__pqueue__V_2,
  MR_Word mercury__pqueue__HeadVar__3_3,
  MR_Word mercury__pqueue__HeadVar__4_4,
  MR_Word * mercury__pqueue__HeadVar__5_5,
  MR_Word * mercury__pqueue__HeadVar__6_6);


static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
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



static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2 = {
  &mercury__pqueue__pqueue__type_ctor_info_pqueue_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1 = {
  (MR_String) "pqueue",
  (MR_Integer) 5,
  (MR_Integer) 30,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pqueue__pqueue__field_types_pqueue_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1
  }
};

static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0,
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__pqueue__pqueue__type_ctor_info_pqueue_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pqueue____Unify____pqueue_2_0_10001)),
  ((MR_Box) (mercury__pqueue____Compare____pqueue_2_0_10001)),
  (MR_String) "pqueue",
  (MR_String) "pqueue",
  {     mercury__pqueue__pqueue__du_name_ordered_pqueue_2 },
  {     mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pqueue__pqueue__functor_number_map_pqueue_2
};

static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
  MR_Box mercury__pqueue__wrapper_arg_1,
  MR_Box mercury__pqueue__wrapper_arg_2,
  MR_Box mercury__pqueue__wrapper_arg_3,
  MR_Box mercury__pqueue__wrapper_arg_4)
{
  {
    MR_bool mercury__pqueue__succeeded;

    {
      mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), ((MR_Word) mercury__pqueue__wrapper_arg_3), ((MR_Word) mercury__pqueue__wrapper_arg_4));
    }
    return mercury__pqueue__succeeded;
  }
}

static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
  MR_Box mercury__pqueue__wrapper_arg_1,
  MR_Box mercury__pqueue__wrapper_arg_2,
  MR_Box * mercury__pqueue__wrapper_arg_3,
  MR_Box mercury__pqueue__wrapper_arg_4,
  MR_Box mercury__pqueue__wrapper_arg_5)
{
  {
    MR_Word mercury__pqueue__conv0_HeadVar__1_1;

    {
      mercury__pqueue____Compare____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), &mercury__pqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__pqueue__wrapper_arg_4), ((MR_Word) mercury__pqueue__wrapper_arg_5));
    }
    *mercury__pqueue__wrapper_arg_3 = ((MR_Box) (mercury__pqueue__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__pqueue__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_30,
  MR_Word mercury__pqueue__TypeInfo_for_V_31,
  MR_Word * mercury__pqueue__HeadVar__1_1,
  MR_Word mercury__pqueue__HeadVar__2_2,
  MR_Word mercury__pqueue__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pqueue__succeeded;
        MR_Integer mercury__pqueue__CastX_28 = (MR_Integer) mercury__pqueue__HeadVar__2_2;
        MR_Integer mercury__pqueue__CastY_29 = (MR_Integer) mercury__pqueue__HeadVar__3_3;

        mercury__pqueue__succeeded = (mercury__pqueue__CastX_28 == mercury__pqueue__CastY_29);
        if (mercury__pqueue__succeeded)
          *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__pqueue__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word mercury__pqueue__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
            MR_Box mercury__pqueue__Var_39 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
            MR_Box mercury__pqueue__Var_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
            MR_Integer mercury__pqueue__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));

            if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Integer mercury__pqueue__ArgY1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
                MR_Box mercury__pqueue__ArgY2_17 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
                MR_Box mercury__pqueue__ArgY3_19 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
                MR_Word mercury__pqueue__ArgY4_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
                MR_Word mercury__pqueue__ArgY5_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
                MR_Word mercury__pqueue__Var_24;

                mercury__pqueue__succeeded = (mercury__pqueue__Var_41 < mercury__pqueue__ArgY1_15);
                if (mercury__pqueue__succeeded)
                  mercury__pqueue__Var_24 = (MR_Integer) 1;
                else
                  {
                    mercury__pqueue__succeeded = (mercury__pqueue__Var_41 == mercury__pqueue__ArgY1_15);
                    if (mercury__pqueue__succeeded)
                      mercury__pqueue__Var_24 = (MR_Integer) 0;
                    else
                      mercury__pqueue__Var_24 = (MR_Integer) 2;
                  }
                mercury__pqueue__succeeded = (mercury__pqueue__Var_24 == (MR_Integer) 0);
                mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
                if (mercury__pqueue__succeeded)
                  *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__Var_24;
                else
                  {
                    MR_Word mercury__pqueue__Var_25;

                    {
                      mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_30, &mercury__pqueue__Var_25, mercury__pqueue__Var_40, mercury__pqueue__ArgY2_17);
                    }
                    mercury__pqueue__succeeded = (mercury__pqueue__Var_25 == (MR_Integer) 0);
                    mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
                    if (mercury__pqueue__succeeded)
                      *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__Var_25;
                    else
                      {
                        MR_Word mercury__pqueue__Var_26;

                        {
                          mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__Var_26, mercury__pqueue__Var_39, mercury__pqueue__ArgY3_19);
                        }
                        mercury__pqueue__succeeded = (mercury__pqueue__Var_26 == (MR_Integer) 0);
                        mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
                        if (mercury__pqueue__succeeded)
                          *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__Var_26;
                        else
                          {
                            MR_Word mercury__pqueue__Var_27;

                            {
                              mercury__pqueue____Compare____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_30, mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__Var_27, mercury__pqueue__Var_38, mercury__pqueue__ArgY4_21);
                            }
                            mercury__pqueue__succeeded = (mercury__pqueue__Var_27 == (MR_Integer) 0);
                            mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
                            if (mercury__pqueue__succeeded)
                              *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__Var_27;
                            else
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__pqueue__next_value_of_HeadVar__2_2 = mercury__pqueue__Var_37;
                                  MR_Word mercury__pqueue__next_value_of_HeadVar__3_3 = mercury__pqueue__ArgY5_23;

                                  mercury__pqueue__HeadVar__3_3 = mercury__pqueue__next_value_of_HeadVar__3_3;
                                  mercury__pqueue__HeadVar__2_2 = mercury__pqueue__next_value_of_HeadVar__2_2;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_17,
  MR_Word mercury__pqueue__TypeInfo_for_V_18,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Word mercury__pqueue__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pqueue__succeeded;
        MR_Integer mercury__pqueue__CastX_15 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
        MR_Integer mercury__pqueue__CastY_16 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

        mercury__pqueue__succeeded = (mercury__pqueue__CastX_15 == mercury__pqueue__CastY_16);
        if (mercury__pqueue__succeeded)
          mercury__pqueue__succeeded = MR_TRUE;
        else
        if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__pqueue__CastX_3 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
            MR_Integer mercury__pqueue__CastY_4 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

            mercury__pqueue__succeeded = (mercury__pqueue__CastY_4 == mercury__pqueue__CastX_3);
          }
        else
          {
            MR_Integer mercury__pqueue__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__pqueue__ArgY1_6;
            MR_Box mercury__pqueue__ArgX2_7 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
            MR_Box mercury__pqueue__ArgY2_8;
            MR_Box mercury__pqueue__ArgX3_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
            MR_Box mercury__pqueue__ArgY3_10;
            MR_Word mercury__pqueue__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__pqueue__ArgY4_12;
            MR_Word mercury__pqueue__ArgX5_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word mercury__pqueue__ArgY5_14;

            mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__pqueue__succeeded)
              {
                mercury__pqueue__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
                mercury__pqueue__ArgY2_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
                mercury__pqueue__ArgY3_10 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
                mercury__pqueue__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
                mercury__pqueue__ArgY5_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
                mercury__pqueue__succeeded = (mercury__pqueue__ArgX1_5 == mercury__pqueue__ArgY1_6);
                if (mercury__pqueue__succeeded)
                  {
                    {
                      mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__ArgX2_7, mercury__pqueue__ArgY2_8);
                    }
                    if (mercury__pqueue__succeeded)
                      {
                        {
                          mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__ArgX3_9, mercury__pqueue__ArgY3_10);
                        }
                        if (mercury__pqueue__succeeded)
                          {
                            {
                              mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__ArgX4_11, mercury__pqueue__ArgY4_12);
                            }
                            if (mercury__pqueue__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__pqueue__next_value_of_HeadVar__1_1 = mercury__pqueue__ArgX5_13;
                                  MR_Word mercury__pqueue__next_value_of_HeadVar__2_2 = mercury__pqueue__ArgY5_14;

                                  mercury__pqueue__HeadVar__2_2 = mercury__pqueue__next_value_of_HeadVar__2_2;
                                  mercury__pqueue__HeadVar__1_1 = mercury__pqueue__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
          }
        return mercury__pqueue__succeeded;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__pqueue__length_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
  MR_Word mercury__pqueue__HeadVar__1_1)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Integer mercury__pqueue__HeadVar__2_2;

    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pqueue__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__pqueue__D_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box mercury__pqueue__Var_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__pqueue__Var_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
        MR_Word mercury__pqueue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__pqueue__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));

        mercury__pqueue__HeadVar__2_2 = (mercury__pqueue__D_3 + (MR_Integer) 1);
      }
    return mercury__pqueue__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pqueue__from_assoc_list_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
  MR_Word mercury__pqueue__List_3)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__PQueue_4;

    {
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__List_3, &mercury__pqueue__PQueue_4);
    }
    return mercury__pqueue__PQueue_4;
  }
}

MR_Word MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
  MR_Word mercury__pqueue__AL_3)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__PQ2_4;

    {
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__AL_3, &mercury__pqueue__PQ2_4);
    }
    return mercury__pqueue__PQ2_4;
  }
}

void MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_2_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Word * mercury__pqueue__Q_2)
{
  {
    MR_bool mercury__pqueue__succeeded;

    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__pqueue__Q_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__pqueue__K_4;
        MR_Box mercury__pqueue__V_5;
        MR_Word mercury__pqueue__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__pqueue__Q0_8;
        MR_Word mercury__pqueue__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

        mercury__pqueue__K_4 = (MR_hl_field(MR_mktag(0), mercury__pqueue__Var_9, (MR_Integer) 0));
        mercury__pqueue__V_5 = (MR_hl_field(MR_mktag(0), mercury__pqueue__Var_9, (MR_Integer) 1));
        {
          mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L_6, &mercury__pqueue__Q0_8);
        }
        {
          mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__K_4, mercury__pqueue__V_5, mercury__pqueue__Q0_8, mercury__pqueue__Q_2);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__pqueue__to_assoc_list_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
  MR_Word mercury__pqueue__PQ_3)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__AL_4;

    {
      mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__PQ_3, &mercury__pqueue__AL_4);
    }
    return mercury__pqueue__AL_4;
  }
}

void MR_CALL 
mercury__pqueue__to_assoc_list_2_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
  MR_Word mercury__pqueue__Q0_3,
  MR_Word * mercury__pqueue__L_4)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__Q0_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__pqueue__K_5;
    MR_Box mercury__pqueue__V_6;
    MR_Word mercury__pqueue__Q1_7;
    MR_Word mercury__pqueue__L0_16;
    MR_Word mercury__pqueue__R0_17;
    MR_Integer mercury__pqueue__Var_15;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 0)));
        mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 1));
        mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 2));
        mercury__pqueue__L0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 3)));
        mercury__pqueue__R0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 4)));
        {
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L0_16, mercury__pqueue__R0_17, &mercury__pqueue__Q1_7);
        }
        mercury__pqueue__succeeded = MR_TRUE;
      }
    if (mercury__pqueue__succeeded)
      {
        MR_Word mercury__pqueue__L0_8;
        MR_Word mercury__pqueue__Var_9;

        {
          mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__Q1_7, &mercury__pqueue__L0_8);
        }
        {
          mercury__pqueue__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__pqueue__Var_9, 0) = mercury__pqueue__K_5;
          MR_hl_field(MR_mktag(0), mercury__pqueue__Var_9, 1) = mercury__pqueue__V_6;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__pqueue__L_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pqueue__L0_8));
        }
      }
    else
      *mercury__pqueue__L_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__pqueue__merge_2_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_7,
  MR_Word mercury__pqueue__TypeInfo_for_V_8,
  MR_Word mercury__pqueue__A_4,
  MR_Word mercury__pqueue__B_5)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__C_6;

    {
      mercury__pqueue__merge_3_p_0(mercury__pqueue__TypeInfo_for_K_7, mercury__pqueue__TypeInfo_for_V_8, mercury__pqueue__A_4, mercury__pqueue__B_5, &mercury__pqueue__C_6);
    }
    return mercury__pqueue__C_6;
  }
}

void MR_CALL 
mercury__pqueue__merge_3_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
  MR_Word mercury__pqueue__A_4,
  MR_Word mercury__pqueue__B_5,
  MR_Word * mercury__pqueue__C_6)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Integer mercury__pqueue__Var_7;
    MR_Integer mercury__pqueue__Var_8;

    if ((mercury__pqueue__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pqueue__Var_7 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__pqueue__D_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 0)));
        MR_Box mercury__pqueue__Var_12 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 1));
        MR_Box mercury__pqueue__Var_13 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 2));
        MR_Word mercury__pqueue__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 3)));
        MR_Word mercury__pqueue__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 4)));

        mercury__pqueue__Var_7 = (mercury__pqueue__D_11 + (MR_Integer) 1);
      }
    if ((mercury__pqueue__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pqueue__Var_8 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__pqueue__D_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 0)));
        MR_Box mercury__pqueue__Var_18 = (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 1));
        MR_Box mercury__pqueue__Var_19 = (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 2));
        MR_Word mercury__pqueue__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 3)));
        MR_Word mercury__pqueue__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 4)));

        mercury__pqueue__Var_8 = (mercury__pqueue__D_17 + (MR_Integer) 1);
      }
    mercury__pqueue__succeeded = (mercury__pqueue__Var_7 <= mercury__pqueue__Var_8);
    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_9, mercury__pqueue__TypeInfo_for_V_10, mercury__pqueue__A_4, mercury__pqueue__B_5, mercury__pqueue__C_6);
      }
    else
      {
        mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_9, mercury__pqueue__TypeInfo_for_V_10, mercury__pqueue__B_5, mercury__pqueue__A_4, mercury__pqueue__C_6);
      }
  }
}

void MR_CALL 
mercury__pqueue__do_merge_3_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_19,
  MR_Word mercury__pqueue__TypeInfo_for_V_20,
  MR_Word mercury__pqueue__A_4,
  MR_Word mercury__pqueue__B_5,
  MR_Word * mercury__pqueue__C_6)
{
  {
    MR_bool mercury__pqueue__succeeded;

    if ((mercury__pqueue__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__pqueue__C_6 = mercury__pqueue__B_5;
    else
      {
        MR_Box mercury__pqueue__K_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 1));
        MR_Box mercury__pqueue__V_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 2));
        MR_Word mercury__pqueue__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 3)));
        MR_Word mercury__pqueue__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 4)));
        MR_Integer mercury__pqueue__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 0)));

        if ((mercury__pqueue__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__pqueue__C_6 = mercury__pqueue__A_4;
        else
          {
            MR_Word mercury__pqueue__C0_17;
            MR_Word mercury__pqueue__C1_18;

            {
              mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__L_10, mercury__pqueue__B_5, &mercury__pqueue__C0_17);
            }
            {
              mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__R_11, mercury__pqueue__C0_17, &mercury__pqueue__C1_18);
            }
            {
              mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__K_8, mercury__pqueue__V_9, mercury__pqueue__C1_18, mercury__pqueue__C_6);
            }
          }
      }
  }
}

void MR_CALL 
mercury__pqueue__det_remove_4_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_17,
  MR_Word mercury__pqueue__TypeInfo_for_V_18,
  MR_Box * mercury__pqueue__K_5,
  MR_Box * mercury__pqueue__V_6,
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_10,
  MR_Word * mercury__pqueue__STATE_VARIABLE_PQ_11)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__STATE_VARIABLE_PQ_0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__pqueue__K0_8;
    MR_Box mercury__pqueue__V0_9;
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_12_12;
    MR_Word mercury__pqueue__L0_23;
    MR_Word mercury__pqueue__R0_24;
    MR_Integer mercury__pqueue__Var_22;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 0)));
        mercury__pqueue__K0_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 1));
        mercury__pqueue__V0_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 2));
        mercury__pqueue__L0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 3)));
        mercury__pqueue__R0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 4)));
        {
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__L0_23, mercury__pqueue__R0_24, &mercury__pqueue__STATE_VARIABLE_PQ_12_12);
        }
        mercury__pqueue__succeeded = MR_TRUE;
      }
    if (mercury__pqueue__succeeded)
      {
        *mercury__pqueue__STATE_VARIABLE_PQ_11 = mercury__pqueue__STATE_VARIABLE_PQ_12_12;
        *mercury__pqueue__K_5 = mercury__pqueue__K0_8;
        *mercury__pqueue__V_6 = mercury__pqueue__V0_9;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_remove\'/4", (MR_String) "empty priority queue");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__pqueue__remove_4_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
  MR_Box * mercury__pqueue__K_5,
  MR_Box * mercury__pqueue__V_6,
  MR_Word mercury__pqueue__HeadVar__3_3,
  MR_Word * mercury__pqueue__PQ_10)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__pqueue__L0_8;
    MR_Word mercury__pqueue__R0_9;
    MR_Integer mercury__pqueue__Var_7;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
        *mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
        *mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
        mercury__pqueue__L0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
        mercury__pqueue__R0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
        {
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__L0_8, mercury__pqueue__R0_9, mercury__pqueue__PQ_10);
        }
        mercury__pqueue__succeeded = MR_TRUE;
      }
    return mercury__pqueue__succeeded;
  }
}

void MR_CALL 
mercury__pqueue__remove_2_3_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_36,
  MR_Word mercury__pqueue__TypeInfo_for_V_37,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Word mercury__pqueue__HeadVar__2_2,
  MR_Word * mercury__pqueue__HeadVar__3_3)
{
  {
    MR_bool mercury__pqueue__succeeded;

    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__pqueue__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__2_2;
    else
      {
        MR_Word mercury__pqueue__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mercury__pqueue__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
        MR_Box mercury__pqueue__Var_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
        MR_Box mercury__pqueue__Var_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
        MR_Integer mercury__pqueue__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__1_1;
        else
          {
            MR_Integer mercury__pqueue__D1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
            MR_Box mercury__pqueue__K1_20 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
            MR_Box mercury__pqueue__V1_21 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
            MR_Word mercury__pqueue__L1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__pqueue__R1_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word mercury__pqueue__CMP_25;

            {
              mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_36, &mercury__pqueue__CMP_25, mercury__pqueue__Var_41, mercury__pqueue__K1_20);
            }
            mercury__pqueue__succeeded = (mercury__pqueue__CMP_25 == (MR_Integer) 1);
            if (mercury__pqueue__succeeded)
              {
                MR_Integer mercury__pqueue__D0M1_26 = (mercury__pqueue__Var_42 - (MR_Integer) 1);
                MR_Integer mercury__pqueue__D_27;
                MR_Word mercury__pqueue__PQ0_28;

                mercury__pqueue__succeeded = (mercury__pqueue__D0M1_26 > mercury__pqueue__D1_19);
                if (mercury__pqueue__succeeded)
                  mercury__pqueue__D_27 = mercury__pqueue__D0M1_26;
                else
                  mercury__pqueue__D_27 = mercury__pqueue__D1_19;
                {
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__Var_39, mercury__pqueue__Var_38, &mercury__pqueue__PQ0_28);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pqueue__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_27));
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__Var_41;
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__Var_40;
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ0_28));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__2_2));
                }
              }
            else
              {
                MR_Integer mercury__pqueue__D1M1_29 = (mercury__pqueue__Var_42 - (MR_Integer) 1);
                MR_Word mercury__pqueue__PQ1_30;
                MR_Integer mercury__pqueue__D_35;

                mercury__pqueue__succeeded = (mercury__pqueue__D1M1_29 > mercury__pqueue__D1_19);
                if (mercury__pqueue__succeeded)
                  mercury__pqueue__D_35 = mercury__pqueue__D1M1_29;
                else
                  mercury__pqueue__D_35 = mercury__pqueue__D1_19;
                {
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__L1_22, mercury__pqueue__R1_23, &mercury__pqueue__PQ1_30);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pqueue__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_35));
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ1_30));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__1_1));
                }
              }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__pqueue__insert_3_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_8,
  MR_Box mercury__pqueue__K_6,
  MR_Box mercury__pqueue__V_7)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_9;

    {
      mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__K_6, mercury__pqueue__V_7, mercury__pqueue__STATE_VARIABLE_PQ_0_8, &mercury__pqueue__STATE_VARIABLE_PQ_9);
    }
    return mercury__pqueue__STATE_VARIABLE_PQ_9;
  }
}

static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
  MR_Box mercury__pqueue__K_1,
  MR_Box mercury__pqueue__V_2,
  MR_Word mercury__pqueue__HeadVar__3_3,
  MR_Word mercury__pqueue__HeadVar__4_4,
  MR_Word * mercury__pqueue__HeadVar__5_5,
  MR_Word * mercury__pqueue__HeadVar__6_6)
{
  {
    MR_bool mercury__pqueue__succeeded;

    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__pqueue__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__pqueue__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *mercury__pqueue__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__Var_10));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__Var_11));
          }
          *mercury__pqueue__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          MR_Word mercury__pqueue__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__pqueue__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *mercury__pqueue__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__Var_30));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__Var_31));
          }
          *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
        }
    else
      {
        MR_Integer mercury__pqueue__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__pqueue__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mercury__pqueue__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
        MR_Box mercury__pqueue__Var_52 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
        MR_Box mercury__pqueue__Var_53 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));

        if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__pqueue__Var_20;
            MR_Word mercury__pqueue__Var_21;

            *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
            mercury__pqueue__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__pqueue__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pqueue__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
              MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__Var_20));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__Var_21));
            }
          }
        else
          {
            MR_Integer mercury__pqueue__D1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 0)));
            MR_Box mercury__pqueue__K1_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 1));
            MR_Box mercury__pqueue__V1_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 2));
            MR_Word mercury__pqueue__L1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 3)));
            MR_Word mercury__pqueue__R1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 4)));

            mercury__pqueue__succeeded = (mercury__pqueue__Var_54 > mercury__pqueue__D1_39);
            if (mercury__pqueue__succeeded)
              {
                {
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__4_4, mercury__pqueue__HeadVar__6_6);
                }
                *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
              }
            else
              {
                {
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__3_3, mercury__pqueue__HeadVar__5_5);
                }
                *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
              }
          }
      }
  }
}

void MR_CALL 
mercury__pqueue__insert_4_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_25,
  MR_Word mercury__pqueue__TypeInfo_for_V_26,
  MR_Box mercury__pqueue__K_1,
  MR_Box mercury__pqueue__V_2,
  MR_Word mercury__pqueue__HeadVar__3_3,
  MR_Word * mercury__pqueue__HeadVar__4_4)
{
  {
    MR_bool mercury__pqueue__succeeded;

    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__pqueue__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__pqueue__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *mercury__pqueue__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__Var_8));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__Var_9));
        }
      }
    else
      {
        MR_Integer mercury__pqueue__D0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box mercury__pqueue__K0_13 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
        MR_Box mercury__pqueue__V0_14 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
        MR_Word mercury__pqueue__L0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__pqueue__R0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mercury__pqueue__D_18 = (mercury__pqueue__D0_12 + (MR_Integer) 1);
        MR_Word mercury__pqueue__CMP_19;
        MR_Box mercury__pqueue__K1_20;
        MR_Box mercury__pqueue__V1_21;
        MR_Word mercury__pqueue__L_22;
        MR_Word mercury__pqueue__R_23;

        {
          mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_25, &mercury__pqueue__CMP_19, mercury__pqueue__K_1, mercury__pqueue__K0_13);
        }
        mercury__pqueue__succeeded = (mercury__pqueue__CMP_19 == (MR_Integer) 1);
        if (mercury__pqueue__succeeded)
          {
            mercury__pqueue__K1_20 = mercury__pqueue__K_1;
            mercury__pqueue__V1_21 = mercury__pqueue__V_2;
            if ((mercury__pqueue__L0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((mercury__pqueue__R0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__pqueue__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__pqueue__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__pqueue__L_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 1) = mercury__pqueue__K0_13;
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 2) = mercury__pqueue__V0_14;
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 3) = ((MR_Box) (mercury__pqueue__Var_30));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 4) = ((MR_Box) (mercury__pqueue__Var_31));
                  }
                  mercury__pqueue__R_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word mercury__pqueue__Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__pqueue__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__pqueue__L_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 1) = mercury__pqueue__K0_13;
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 2) = mercury__pqueue__V0_14;
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 3) = ((MR_Box) (mercury__pqueue__Var_50));
                    MR_hl_field(MR_mktag(1), mercury__pqueue__L_22, 4) = ((MR_Box) (mercury__pqueue__Var_51));
                  }
                  mercury__pqueue__R_23 = mercury__pqueue__R0_16;
                }
            else
              {
                MR_Integer mercury__pqueue__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__L0_15, (MR_Integer) 0)));
                MR_Word mercury__pqueue__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__L0_15, (MR_Integer) 4)));
                MR_Word mercury__pqueue__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__L0_15, (MR_Integer) 3)));
                MR_Box mercury__pqueue__Var_70 = (MR_hl_field(MR_mktag(1), mercury__pqueue__L0_15, (MR_Integer) 2));
                MR_Box mercury__pqueue__Var_71 = (MR_hl_field(MR_mktag(1), mercury__pqueue__L0_15, (MR_Integer) 1));

                if ((mercury__pqueue__R0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word mercury__pqueue__Var_40;
                    MR_Word mercury__pqueue__Var_41;

                    mercury__pqueue__L_22 = mercury__pqueue__L0_15;
                    mercury__pqueue__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__pqueue__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__pqueue__R_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__pqueue__R_23, 0) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), mercury__pqueue__R_23, 1) = mercury__pqueue__K0_13;
                      MR_hl_field(MR_mktag(1), mercury__pqueue__R_23, 2) = mercury__pqueue__V0_14;
                      MR_hl_field(MR_mktag(1), mercury__pqueue__R_23, 3) = ((MR_Box) (mercury__pqueue__Var_40));
                      MR_hl_field(MR_mktag(1), mercury__pqueue__R_23, 4) = ((MR_Box) (mercury__pqueue__Var_41));
                    }
                  }
                else
                  {
                    MR_Integer mercury__pqueue__D1_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__R0_16, (MR_Integer) 0)));
                    MR_Box mercury__pqueue__K1_60 = (MR_hl_field(MR_mktag(1), mercury__pqueue__R0_16, (MR_Integer) 1));
                    MR_Box mercury__pqueue__V1_61 = (MR_hl_field(MR_mktag(1), mercury__pqueue__R0_16, (MR_Integer) 2));
                    MR_Word mercury__pqueue__L1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__R0_16, (MR_Integer) 3)));
                    MR_Word mercury__pqueue__R1_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__R0_16, (MR_Integer) 4)));

                    mercury__pqueue__succeeded = (mercury__pqueue__Var_72 > mercury__pqueue__D1_59);
                    if (mercury__pqueue__succeeded)
                      {
                        {
                          mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K0_13, mercury__pqueue__V0_14, mercury__pqueue__R0_16, &mercury__pqueue__R_23);
                        }
                        mercury__pqueue__L_22 = mercury__pqueue__L0_15;
                      }
                    else
                      {
                        {
                          mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K0_13, mercury__pqueue__V0_14, mercury__pqueue__L0_15, &mercury__pqueue__L_22);
                        }
                        mercury__pqueue__R_23 = mercury__pqueue__R0_16;
                      }
                  }
              }
          }
        else
          {
            mercury__pqueue__K1_20 = mercury__pqueue__K0_13;
            mercury__pqueue__V1_21 = mercury__pqueue__V0_14;
            {
              mercury__pqueue__insert_2_6_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__L0_15, mercury__pqueue__R0_16, &mercury__pqueue__L_22, &mercury__pqueue__R_23);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *mercury__pqueue__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_18));
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__L_22));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__R_23));
        }
      }
  }
}

MR_Box MR_CALL 
mercury__pqueue__det_peek_value_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_6,
  MR_Word mercury__pqueue__TypeInfo_for_V_7,
  MR_Word mercury__pqueue__PQ_3)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Box mercury__pqueue__V_4;
    MR_Box mercury__pqueue__Var_5;

    {
      mercury__pqueue__det_peek_3_p_0(mercury__pqueue__TypeInfo_for_K_6, mercury__pqueue__TypeInfo_for_V_7, mercury__pqueue__PQ_3, &mercury__pqueue__Var_5, &mercury__pqueue__V_4);
    }
    return mercury__pqueue__V_4;
  }
}

MR_Box MR_CALL 
mercury__pqueue__det_peek_key_1_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_6,
  MR_Word mercury__pqueue__TypeInfo_for_V_7,
  MR_Word mercury__pqueue__PQ_3)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Box mercury__pqueue__K_4;
    MR_Box mercury__pqueue__Var_5;

    {
      mercury__pqueue__det_peek_3_p_0(mercury__pqueue__TypeInfo_for_K_6, mercury__pqueue__TypeInfo_for_V_7, mercury__pqueue__PQ_3, &mercury__pqueue__K_4, &mercury__pqueue__Var_5);
    }
    return mercury__pqueue__K_4;
  }
}

void MR_CALL 
mercury__pqueue__det_peek_3_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_12,
  MR_Word mercury__pqueue__TypeInfo_for_V_13,
  MR_Word mercury__pqueue__PQ_4,
  MR_Box * mercury__pqueue__K_5,
  MR_Box * mercury__pqueue__V_6)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__PQ_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__pqueue__KPrime_7;
    MR_Box mercury__pqueue__VPrime_8;
    MR_Integer mercury__pqueue__Var_16;
    MR_Word mercury__pqueue__Var_17;
    MR_Word mercury__pqueue__Var_18;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 0)));
        mercury__pqueue__KPrime_7 = (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 1));
        mercury__pqueue__VPrime_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 2));
        mercury__pqueue__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 3)));
        mercury__pqueue__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 4)));
        *mercury__pqueue__K_5 = mercury__pqueue__KPrime_7;
        *mercury__pqueue__V_6 = mercury__pqueue__VPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_peek\'/3", (MR_String) "empty priority queue");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_value_2_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_8,
  MR_Word mercury__pqueue__TypeInfo_for_V_9,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Box * mercury__pqueue__V_5)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__pqueue__Var_3;
    MR_Box mercury__pqueue__Var_4;
    MR_Word mercury__pqueue__Var_6;
    MR_Word mercury__pqueue__Var_7;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
        mercury__pqueue__Var_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
        *mercury__pqueue__V_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
        mercury__pqueue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
        mercury__pqueue__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
      }
    return mercury__pqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_key_2_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_8,
  MR_Word mercury__pqueue__TypeInfo_for_V_9,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Box * mercury__pqueue__K_4)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__pqueue__Var_3;
    MR_Box mercury__pqueue__Var_5;
    MR_Word mercury__pqueue__Var_6;
    MR_Word mercury__pqueue__Var_7;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
        *mercury__pqueue__K_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
        mercury__pqueue__Var_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
        mercury__pqueue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
        mercury__pqueue__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
      }
    return mercury__pqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__peek_3_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
  MR_Word mercury__pqueue__HeadVar__1_1,
  MR_Box * mercury__pqueue__K_5,
  MR_Box * mercury__pqueue__V_6)
{
  {
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__pqueue__Var_4;
    MR_Word mercury__pqueue__Var_7;
    MR_Word mercury__pqueue__Var_8;

    if (mercury__pqueue__succeeded)
      {
        mercury__pqueue__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
        *mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
        *mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
        mercury__pqueue__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
        mercury__pqueue__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
      }
    return mercury__pqueue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__pqueue__is_empty_1_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_2,
  MR_Word mercury__pqueue__TypeInfo_for_V_3,
  MR_Word mercury__pqueue__HeadVar__1_1)
{
  {
    MR_bool mercury__pqueue__succeeded = (mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__pqueue__succeeded;
  }
}

void MR_CALL 
mercury__pqueue__init_1_p_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_2,
  MR_Word mercury__pqueue__TypeInfo_for_V_3,
  MR_Word * mercury__pqueue__HeadVar__1_1)
{
  {
    MR_bool mercury__pqueue__succeeded;

    *mercury__pqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__pqueue__init_0_f_0(
  MR_Word mercury__pqueue__TypeInfo_for_K_3,
  MR_Word mercury__pqueue__TypeInfo_for_V_4)
{
  {
    MR_bool mercury__pqueue__succeeded;
    MR_Word mercury__pqueue__PQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__pqueue__PQ_2;
  }
}

void mercury__pqueue__init(void)
{
}

void mercury__pqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pqueue__pqueue__type_ctor_info_pqueue_2);
}

void mercury__pqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__pqueue__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module pqueue. */
