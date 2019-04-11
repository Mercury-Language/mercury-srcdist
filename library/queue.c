/*
** Automatically generated from `queue.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module queue. */
/* :- implementation. */

/*
INIT mercury__queue__init
ENDINIT
*/

#include "queue.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2];

static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2];

static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0;

static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1];

static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1];

static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1];

static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1];

static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
  MR_Box mercury__queue__wrapper_arg_1,
  MR_Box mercury__queue__wrapper_arg_2,
  MR_Box mercury__queue__wrapper_arg_3);

static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
  MR_Box mercury__queue__wrapper_arg_1,
  MR_Box * mercury__queue__wrapper_arg_2,
  MR_Box mercury__queue__wrapper_arg_3,
  MR_Box mercury__queue__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__On_3);


static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__queue_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__queue__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__queue__list__pti_list_1__pseudo_1
};

static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2] = {
  (MR_String) "on_list",
  (MR_String) "off_list"
};

static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0 = {
  (MR_String) "queue",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__queue__queue__field_types_queue_1_0,
  mercury__queue__queue__field_names_queue_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1] = {
  &mercury__queue__queue__du_functor_desc_queue_1_0
};

static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__queue__queue__du_stag_ordered_queue_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1] = {
  &mercury__queue__queue__du_functor_desc_queue_1_0
};

static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__queue__queue__type_ctor_info_queue_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__queue____Unify____queue_1_0_10001)),
  ((MR_Box) (mercury__queue____Compare____queue_1_0_10001)),
  (MR_String) "queue",
  (MR_String) "queue",
  {     mercury__queue__queue__du_name_ordered_queue_1 },
  {     mercury__queue__queue__du_ptag_ordered_queue_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__queue__queue__functor_number_map_queue_1
};

static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
  MR_Box mercury__queue__wrapper_arg_1,
  MR_Box mercury__queue__wrapper_arg_2,
  MR_Box mercury__queue__wrapper_arg_3)
{
  {
    MR_bool mercury__queue__succeeded;

    {
      mercury__queue__succeeded = mercury__queue____Unify____queue_1_0(((MR_Word) mercury__queue__wrapper_arg_1), ((MR_Word) mercury__queue__wrapper_arg_2), ((MR_Word) mercury__queue__wrapper_arg_3));
    }
    return mercury__queue__succeeded;
  }
}

static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
  MR_Box mercury__queue__wrapper_arg_1,
  MR_Box * mercury__queue__wrapper_arg_2,
  MR_Box mercury__queue__wrapper_arg_3,
  MR_Box mercury__queue__wrapper_arg_4)
{
  {
    MR_Word mercury__queue__conv0_HeadVar__1_1;

    {
      mercury__queue____Compare____queue_1_0(((MR_Word) mercury__queue__wrapper_arg_1), &mercury__queue__conv0_HeadVar__1_1, ((MR_Word) mercury__queue__wrapper_arg_3), ((MR_Word) mercury__queue__wrapper_arg_4));
    }
    *mercury__queue__wrapper_arg_2 = ((MR_Box) (mercury__queue__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__queue__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__On_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__queue__succeeded;

        if ((mercury__queue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__queue__On_3 = mercury__queue__HeadVar__2_2;
        else
          {
            MR_Box mercury__queue__X_5 = (MR_hl_field(MR_mktag(1), mercury__queue__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__queue__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__queue__Var_9;

            {
              mercury__queue__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__queue__Var_9, 0) = mercury__queue__X_5;
              MR_hl_field(MR_mktag(1), mercury__queue__Var_9, 1) = ((MR_Box) (mercury__queue__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__queue__next_value_of_HeadVar__1_1 = mercury__queue__Xs_6;
              MR_Word mercury__queue__next_value_of_HeadVar__2_2 = mercury__queue__Var_9;

              mercury__queue__HeadVar__2_2 = mercury__queue__next_value_of_HeadVar__2_2;
              mercury__queue__HeadVar__1_1 = mercury__queue__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  {
    MR_bool mercury__queue__succeeded;

{
#define MR_PROC_LABEL mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__queue__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__queue__succeeded;
  }
}

void MR_CALL 
mercury__queue____Compare____queue_1_0(
  MR_Word mercury__queue__TypeInfo_for_T_11,
  MR_Word * mercury__queue__HeadVar__1_1,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Integer mercury__queue__CastX_9 = (MR_Integer) mercury__queue__HeadVar__2_2;
    MR_Integer mercury__queue__CastY_10 = (MR_Integer) mercury__queue__HeadVar__3_3;

    mercury__queue__succeeded = (mercury__queue__CastX_9 == mercury__queue__CastY_10);
    if (mercury__queue__succeeded)
      *mercury__queue__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__queue__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__queue__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__queue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__queue__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__queue__Var_8;

        {
          mercury__list____Compare____list_1_0(mercury__queue__TypeInfo_for_T_11, &mercury__queue__Var_8, mercury__queue__Var_4, mercury__queue__Var_6);
        }
        mercury__queue__succeeded = (mercury__queue__Var_8 == (MR_Integer) 0);
        mercury__queue__succeeded = !(mercury__queue__succeeded);
        if (mercury__queue__succeeded)
          *mercury__queue__HeadVar__1_1 = mercury__queue__Var_8;
        else
          {
            mercury__list____Compare____list_1_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__HeadVar__1_1, mercury__queue__Var_5, mercury__queue__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Word mercury__queue__HeadVar__2_2)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Integer mercury__queue__CastX_7 = (MR_Integer) mercury__queue__HeadVar__1_1;
    MR_Integer mercury__queue__CastY_8 = (MR_Integer) mercury__queue__HeadVar__2_2;

    mercury__queue__succeeded = (mercury__queue__CastX_7 == mercury__queue__CastY_8);
    if (mercury__queue__succeeded)
      mercury__queue__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__queue__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__queue__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__queue__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__queue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__Var_3, mercury__queue__Var_5);
        }
        if (mercury__queue__succeeded)
          {
            mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__Var_4, mercury__queue__Var_6);
          }
      }
    return mercury__queue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__queue__get_from_back_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_19,
  MR_Box * mercury__queue__Elem_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__On_7;
    MR_Word mercury__queue__Off_8;

    if ((mercury__queue__On0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__queue__Var_20;
        MR_Box mercury__queue__Var_21;

        mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__Off0_6)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__queue__succeeded)
          {
            mercury__queue__Var_21 = (MR_hl_field(MR_mktag(1), mercury__queue__Off0_6, (MR_Integer) 0));
            mercury__queue__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__Off0_6, (MR_Integer) 1)));
            if ((mercury__queue__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *mercury__queue__Elem_4 = mercury__queue__Var_21;
                mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__queue__Off_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__queue__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer mercury__queue__N_12;
                MR_Word mercury__queue__RevOn_13;
                MR_Integer mercury__queue__Var_15;
                MR_Word mercury__queue__Var_17;

                {
                  mercury__list__length_acc_3_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__Off0_6, (MR_Integer) 0, &mercury__queue__N_12);
                }
                mercury__queue__Var_15 = (mercury__queue__N_12 / (MR_Integer) 2);
                {
                  mercury__queue__succeeded = mercury__list__split_list_4_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__Var_15, mercury__queue__Off0_6, &mercury__queue__Off_8, &mercury__queue__RevOn_13);
                }
                if (mercury__queue__succeeded)
                  {
                    {
                      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__RevOn_13, &mercury__queue__Var_17);
                    }
                    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__Var_17)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__queue__succeeded)
                      {
                        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__Var_17, (MR_Integer) 0));
                        mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__Var_17, (MR_Integer) 1)));
                      }
                  }
              }
          }
      }
    else
      {
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__On0_5, (MR_Integer) 0));
        mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__On0_5, (MR_Integer) 1)));
        mercury__queue__Off_8 = mercury__queue__Off0_6;
        mercury__queue__succeeded = MR_TRUE;
      }
    if (mercury__queue__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mercury__queue__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
        }
        mercury__queue__succeeded = MR_TRUE;
      }
    return mercury__queue__succeeded;
  }
}

void MR_CALL 
mercury__queue__put_list_on_front_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_8,
  MR_Word mercury__queue__Elems_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_7;

    {
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_8, mercury__queue__Elems_4, mercury__queue__Off_6, &mercury__queue__Var_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Var_7));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__put_list_on_front_2_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__STATE_VARIABLE_Queue_0_6,
  MR_Word mercury__queue__Elems_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__STATE_VARIABLE_Queue_7;
    MR_Word mercury__queue__On_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_13;

    {
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_9, mercury__queue__Elems_5, mercury__queue__Off_12, &mercury__queue__Var_13);
    }
    {
      mercury__queue__STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (mercury__queue__On_11));
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (mercury__queue__Var_13));
    }
    return mercury__queue__STATE_VARIABLE_Queue_7;
  }
}

void MR_CALL 
mercury__queue__put_on_front_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_8,
  MR_Box mercury__queue__Elem_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_7;

    {
      mercury__queue__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__queue__Var_7, 0) = mercury__queue__Elem_4;
      MR_hl_field(MR_mktag(1), mercury__queue__Var_7, 1) = ((MR_Box) (mercury__queue__Off_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Var_7));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__put_on_front_2_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__STATE_VARIABLE_Queue_0_6,
  MR_Box mercury__queue__Elem_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__STATE_VARIABLE_Queue_7;
    MR_Word mercury__queue__On_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_13;

    {
      mercury__queue__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__queue__Var_13, 0) = mercury__queue__Elem_5;
      MR_hl_field(MR_mktag(1), mercury__queue__Var_13, 1) = ((MR_Box) (mercury__queue__Off_12));
    }
    {
      mercury__queue__STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (mercury__queue__On_11));
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (mercury__queue__Var_13));
    }
    return mercury__queue__STATE_VARIABLE_Queue_7;
  }
}

void MR_CALL 
mercury__queue__delete_all_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_13,
  MR_Box mercury__queue__Elem_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__On_7;
    MR_Word mercury__queue__Off_8;
    MR_Word mercury__queue__On1_9;
    MR_Word mercury__queue__Off1_10;

    {
      mercury__list__delete_all_3_p_1(mercury__queue__TypeInfo_for_T_13, mercury__queue__On0_5, mercury__queue__Elem_4, &mercury__queue__On1_9);
    }
    {
      mercury__list__delete_all_3_p_1(mercury__queue__TypeInfo_for_T_13, mercury__queue__Off0_6, mercury__queue__Elem_4, &mercury__queue__Off1_10);
    }
    if ((mercury__queue__Off1_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_13, mercury__queue__On1_9, &mercury__queue__Off_8);
        }
        mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        mercury__queue__On_7 = mercury__queue__On1_9;
        mercury__queue__Off_8 = mercury__queue__Off1_10;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__delete_all_2_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
  MR_Box mercury__queue__T_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;

    {
      mercury__queue__delete_all_3_p_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__T_5, mercury__queue__STATE_VARIABLE_Q_0_6, &mercury__queue__STATE_VARIABLE_Q_7);
    }
    return mercury__queue__STATE_VARIABLE_Q_7;
  }
}

MR_Word MR_CALL 
mercury__queue__to_list_1_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_6,
  MR_Word mercury__queue__HeadVar__1_1)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__HeadVar__2_2;
    MR_Word mercury__queue__On_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_5;

    {
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_6, mercury__queue__On_3, &mercury__queue__Var_5);
    }
    {
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_6, mercury__queue__Off_4, mercury__queue__Var_5, &mercury__queue__HeadVar__2_2);
    }
    return mercury__queue__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__queue__from_list_1_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_5,
  MR_Word mercury__queue__List_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__HeadVar__2_2;
    MR_Word mercury__queue__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__queue__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, 0) = ((MR_Box) (mercury__queue__Var_4));
      MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, 1) = ((MR_Box) (mercury__queue__List_3));
    }
    return mercury__queue__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__queue__list_to_queue_2_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_5,
  MR_Word mercury__queue__List_3,
  MR_Word * mercury__queue__HeadVar__2_2)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__Var_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__List_3));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__list_to_queue_1_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_5,
  MR_Word mercury__queue__Xs_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Q_4;
    MR_Word mercury__queue__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__queue__Q_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__queue__Q_4, 0) = ((MR_Box) (mercury__queue__Var_7));
      MR_hl_field(MR_mktag(0), mercury__queue__Q_4, 1) = ((MR_Box) (mercury__queue__Xs_3));
    }
    return mercury__queue__Q_4;
  }
}

void MR_CALL 
mercury__queue__length_2_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_8,
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Integer * mercury__queue__Length_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__queue__LengthOn_6;
    MR_Integer mercury__queue__LengthOff_7;

    {
      mercury__list__length_acc_3_p_0(mercury__queue__TypeInfo_for_T_8, mercury__queue__On_3, (MR_Integer) 0, &mercury__queue__LengthOn_6);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__queue__TypeInfo_for_T_8, mercury__queue__Off_4, (MR_Integer) 0, &mercury__queue__LengthOff_7);
    }
    *mercury__queue__Length_5 = (mercury__queue__LengthOn_6 + mercury__queue__LengthOff_7);
  }
}

MR_Integer MR_CALL 
mercury__queue__length_1_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_5,
  MR_Word mercury__queue__Q_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Integer mercury__queue__N_4;
    MR_Word mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__Q_3, (MR_Integer) 0)));
    MR_Word mercury__queue__Off_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__Q_3, (MR_Integer) 1)));
    MR_Integer mercury__queue__LengthOn_9;
    MR_Integer mercury__queue__LengthOff_10;

    {
      mercury__list__length_acc_3_p_0(mercury__queue__TypeInfo_for_T_5, mercury__queue__On_7, (MR_Integer) 0, &mercury__queue__LengthOn_9);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__queue__TypeInfo_for_T_5, mercury__queue__Off_8, (MR_Integer) 0, &mercury__queue__LengthOff_10);
    }
    mercury__queue__N_4 = (mercury__queue__LengthOn_9 + mercury__queue__LengthOff_10);
    return mercury__queue__N_4;
  }
}

MR_bool MR_CALL 
mercury__queue__get_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_12,
  MR_Box * mercury__queue__Elem_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_6;
    MR_Word mercury__queue__On_7;
    MR_Word mercury__queue__Off_8;
    MR_Word mercury__queue__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));

    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__Var_11)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__queue__succeeded)
      {
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__Var_11, (MR_Integer) 0));
        mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__Var_11, (MR_Integer) 1)));
        if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_12, mercury__queue__On0_5, &mercury__queue__Off_8);
            }
            mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            mercury__queue__On_7 = mercury__queue__On0_5;
            mercury__queue__Off_8 = mercury__queue__Off0_6;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *mercury__queue__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
        }
        mercury__queue__succeeded = MR_TRUE;
      }
    return mercury__queue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__queue__first_2_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_7,
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Box * mercury__queue__Elem_4)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__queue__Var_5;

    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__Var_6)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__queue__succeeded)
      {
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__Var_6, (MR_Integer) 0));
        mercury__queue__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__Var_6, (MR_Integer) 1)));
      }
    return mercury__queue__succeeded;
  }
}

void MR_CALL 
mercury__queue__put_list_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_11,
  MR_Word mercury__queue__Xs_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__On_7;
    MR_Word mercury__queue__Off_8;

    if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__queue__On_7 = mercury__queue__On0_5;
        mercury__queue__Off_8 = mercury__queue__Xs_4;
      }
    else
      {
        mercury__queue__Off_8 = mercury__queue__Off0_6;
        {
          mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(mercury__queue__Xs_4, mercury__queue__On0_5, &mercury__queue__On_7);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__put_list_2_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
  MR_Word mercury__queue__Xs_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;
    MR_Word mercury__queue__On0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_0_6, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_0_6, (MR_Integer) 1)));
    MR_Word mercury__queue__On_13;
    MR_Word mercury__queue__Off_14;

    if ((mercury__queue__Off0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__queue__On_13 = mercury__queue__On0_11;
        mercury__queue__Off_14 = mercury__queue__Xs_5;
      }
    else
      {
        mercury__queue__Off_14 = mercury__queue__Off0_12;
        {
          mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(mercury__queue__Xs_5, mercury__queue__On0_11, &mercury__queue__On_13);
        }
      }
    {
      mercury__queue__STATE_VARIABLE_Q_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_7, 0) = ((MR_Box) (mercury__queue__On_13));
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_7, 1) = ((MR_Box) (mercury__queue__Off_14));
    }
    return mercury__queue__STATE_VARIABLE_Q_7;
  }
}

void MR_CALL 
mercury__queue__put_3_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_12,
  MR_Box mercury__queue__Elem_4,
  MR_Word mercury__queue__HeadVar__2_2,
  MR_Word * mercury__queue__HeadVar__3_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__On_7;
    MR_Word mercury__queue__Off_8;

    if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__queue__Var_11;

        mercury__queue__On_7 = mercury__queue__On0_5;
        mercury__queue__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__queue__Off_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__queue__Off_8, 0) = mercury__queue__Elem_4;
          MR_hl_field(MR_mktag(1), mercury__queue__Off_8, 1) = ((MR_Box) (mercury__queue__Var_11));
        }
      }
    else
      {
        {
          mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__queue__On_7, 0) = mercury__queue__Elem_4;
          MR_hl_field(MR_mktag(1), mercury__queue__On_7, 1) = ((MR_Box) (mercury__queue__On0_5));
        }
        mercury__queue__Off_8 = mercury__queue__Off0_6;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__queue__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
    }
  }
}

MR_Word MR_CALL 
mercury__queue__put_2_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_9,
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
  MR_Box mercury__queue__T_5)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;

    {
      mercury__queue__put_3_p_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__T_5, mercury__queue__STATE_VARIABLE_Q_0_6, &mercury__queue__STATE_VARIABLE_Q_7);
    }
    return mercury__queue__STATE_VARIABLE_Q_7;
  }
}

MR_bool MR_CALL 
mercury__queue__is_full_1_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_3,
  MR_Word mercury__queue__HeadVar__1_2)
{
  {
    MR_bool mercury__queue__succeeded;

    {
      mercury__queue__succeeded = mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
    return mercury__queue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__queue__is_empty_1_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_4,
  MR_Word mercury__queue__HeadVar__1_1)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__queue__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));

    mercury__queue__succeeded = (mercury__queue__Var_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__queue__succeeded;
  }
}

MR_bool MR_CALL 
mercury__queue__equal_2_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_11,
  MR_Word mercury__queue__HeadVar__1_1,
  MR_Word mercury__queue__HeadVar__2_2)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__OnA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__queue__OffA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__queue__OnB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__queue__OffB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__queue__QA_7;
    MR_Word mercury__queue__QB_8;
    MR_Word mercury__queue__Var_9;
    MR_Word mercury__queue__Var_10;

    {
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__OnA_3, &mercury__queue__Var_9);
    }
    {
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_11, mercury__queue__OffA_4, mercury__queue__Var_9, &mercury__queue__QA_7);
    }
    {
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__OnB_5, &mercury__queue__Var_10);
    }
    {
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_11, mercury__queue__OffB_6, mercury__queue__Var_10, &mercury__queue__QB_8);
    }
    {
      mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__QA_7, mercury__queue__QB_8);
    }
    return mercury__queue__succeeded;
  }
}

void MR_CALL 
mercury__queue__init_1_p_0(
  MR_Word mercury__queue__TypeInfo_for_T_4,
  MR_Word * mercury__queue__HeadVar__1_1)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Var_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__queue__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__queue__HeadVar__1_1 = (MR_Word) &mercury__queue_scalar_common_4[0];
  }
}

MR_Word MR_CALL 
mercury__queue__init_0_f_0(
  MR_Word mercury__queue__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__queue__succeeded;
    MR_Word mercury__queue__Q_2 = (MR_Word) &mercury__queue_scalar_common_4[0];
    MR_Word mercury__queue__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__queue__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__queue__Q_2;
  }
}

void mercury__queue__init(void)
{
}

void mercury__queue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__queue__queue__type_ctor_info_queue_1);
}

void mercury__queue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__queue__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module queue. */
