/*
** Automatically generated from `stack.m'
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


/* :- module stack. */
/* :- implementation. */

/*
INIT mercury__stack__init
ENDINIT
*/

#include "stack.mih"


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




static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1;

static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
  MR_Box mercury__stack__wrapper_arg_1,
  MR_Box mercury__stack__wrapper_arg_2,
  MR_Box mercury__stack__wrapper_arg_3);

static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
  MR_Box mercury__stack__wrapper_arg_1,
  MR_Box * mercury__stack__wrapper_arg_2,
  MR_Box mercury__stack__wrapper_arg_3,
  MR_Box mercury__stack__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
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



static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1 = {
  (MR_String) "stack",
  (MR_PseudoTypeInfo) &mercury__stack__list__pti_list_1__pseudo_1,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__stack__stack__type_ctor_info_stack_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__stack____Unify____stack_1_0_10001)),
  ((MR_Box) (mercury__stack____Compare____stack_1_0_10001)),
  (MR_String) "stack",
  (MR_String) "stack",
  {     &mercury__stack__stack__notag_functor_desc_stack_1 },
  {     &mercury__stack__stack__notag_functor_desc_stack_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__stack__stack__functor_number_map_stack_1
};

static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
  MR_Box mercury__stack__wrapper_arg_1,
  MR_Box mercury__stack__wrapper_arg_2,
  MR_Box mercury__stack__wrapper_arg_3)
{
  {
    MR_bool mercury__stack__succeeded;

    {
      mercury__stack__succeeded = mercury__stack____Unify____stack_1_0(((MR_Word) mercury__stack__wrapper_arg_1), ((MR_Word) mercury__stack__wrapper_arg_2), ((MR_Word) mercury__stack__wrapper_arg_3));
    }
    return mercury__stack__succeeded;
  }
}

static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
  MR_Box mercury__stack__wrapper_arg_1,
  MR_Box * mercury__stack__wrapper_arg_2,
  MR_Box mercury__stack__wrapper_arg_3,
  MR_Box mercury__stack__wrapper_arg_4)
{
  {
    MR_Word mercury__stack__conv0_HeadVar__1_1;

    {
      mercury__stack____Compare____stack_1_0(((MR_Word) mercury__stack__wrapper_arg_1), &mercury__stack__conv0_HeadVar__1_1, ((MR_Word) mercury__stack__wrapper_arg_3), ((MR_Word) mercury__stack__wrapper_arg_4));
    }
    *mercury__stack__wrapper_arg_2 = ((MR_Box) (mercury__stack__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__stack__succeeded;

    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
{
  {
    MR_bool mercury__stack__succeeded;

{
#define MR_PROC_LABEL mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__stack__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__stack__succeeded;
  }
}

void MR_CALL 
mercury__stack____Compare____stack_1_0(
  MR_Word mercury__stack__TypeInfo_for_T_8,
  MR_Word * mercury__stack__HeadVar__1_1,
  MR_Word mercury__stack__HeadVar__2_2,
  MR_Word mercury__stack__HeadVar__3_3)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Integer mercury__stack__CastX_6 = (MR_Integer) mercury__stack__HeadVar__2_2;
    MR_Integer mercury__stack__CastY_7 = (MR_Integer) mercury__stack__HeadVar__3_3;

    mercury__stack__succeeded = (mercury__stack__CastX_6 == mercury__stack__CastY_7);
    if (mercury__stack__succeeded)
      *mercury__stack__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__stack__Var_4 = (MR_Word) mercury__stack__HeadVar__2_2;
        MR_Word mercury__stack__Var_5 = (MR_Word) mercury__stack__HeadVar__3_3;

        {
          mercury__list____Compare____list_1_0(mercury__stack__TypeInfo_for_T_8, mercury__stack__HeadVar__1_1, mercury__stack__Var_4, mercury__stack__Var_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0(
  MR_Word mercury__stack__TypeInfo_for_T_7,
  MR_Word mercury__stack__HeadVar__1_1,
  MR_Word mercury__stack__HeadVar__2_2)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Integer mercury__stack__CastX_5 = (MR_Integer) mercury__stack__HeadVar__1_1;
    MR_Integer mercury__stack__CastY_6 = (MR_Integer) mercury__stack__HeadVar__2_2;

    mercury__stack__succeeded = (mercury__stack__CastX_5 == mercury__stack__CastY_6);
    if (mercury__stack__succeeded)
      mercury__stack__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__stack__Var_3 = (MR_Word) mercury__stack__HeadVar__1_1;
        MR_Word mercury__stack__Var_4 = (MR_Word) mercury__stack__HeadVar__2_2;

        {
          mercury__stack__succeeded = mercury__list____Unify____list_1_0(mercury__stack__TypeInfo_for_T_7, mercury__stack__Var_3, mercury__stack__Var_4);
        }
      }
    return mercury__stack__succeeded;
  }
}

void MR_CALL 
mercury__stack__depth_2_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_6,
  MR_Word mercury__stack__Stack_3,
  MR_Integer * mercury__stack__Depth_4)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Elems_5 = (MR_Word) mercury__stack__Stack_3;

    {
      mercury__list__length_acc_3_p_0(mercury__stack__TypeInfo_for_T_6, mercury__stack__Elems_5, (MR_Integer) 0, mercury__stack__Depth_4);
    }
  }
}

MR_Integer MR_CALL 
mercury__stack__depth_1_f_0(
  MR_Word mercury__stack__TypeInfo_for_T_5,
  MR_Word mercury__stack__Stack_3)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Integer mercury__stack__Depth_4;
    MR_Word mercury__stack__Elems_8 = (MR_Word) mercury__stack__Stack_3;

    {
      mercury__list__length_acc_3_p_0(mercury__stack__TypeInfo_for_T_5, mercury__stack__Elems_8, (MR_Integer) 0, &mercury__stack__Depth_4);
    }
    return mercury__stack__Depth_4;
  }
}

void MR_CALL 
mercury__stack__det_pop_3_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_14,
  MR_Box * mercury__stack__Elem_4,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Var_15 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;

    if ((mercury__stack__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_pop\'/3", (MR_String) "pop from empty stack");
          return;
        }
      }
    else
      {
        MR_Word mercury__stack__Elems_6;

        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__Var_15, (MR_Integer) 0));
        mercury__stack__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__Var_15, (MR_Integer) 1)));
        *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__Elems_6;
      }
  }
}

MR_bool MR_CALL 
mercury__stack__pop_3_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_11,
  MR_Box * mercury__stack__Elem_4,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Elems_6;
    MR_Word mercury__stack__Var_9 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;

    mercury__stack__succeeded = ((MR_tag((MR_Word) mercury__stack__Var_9)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__stack__succeeded)
      {
        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__Var_9, (MR_Integer) 0));
        mercury__stack__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__Var_9, (MR_Integer) 1)));
        *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__Elems_6;
        mercury__stack__succeeded = MR_TRUE;
      }
    return mercury__stack__succeeded;
  }
}

void MR_CALL 
mercury__stack__det_top_2_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_10,
  MR_Word mercury__stack__Stack_3,
  MR_Box * mercury__stack__Elem_4)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Var_11 = (MR_Word) mercury__stack__Stack_3;

    if ((mercury__stack__Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_top\'/2", (MR_String) "top of empty stack");
          return;
        }
      }
    else
      {
        MR_Word mercury__stack__Var_5;

        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__Var_11, (MR_Integer) 0));
        mercury__stack__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__Var_11, (MR_Integer) 1)));
      }
  }
}

MR_Box MR_CALL 
mercury__stack__det_top_1_f_0(
  MR_Word mercury__stack__TypeInfo_for_T_5,
  MR_Word mercury__stack__Stack_3)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Box mercury__stack__X_4;
    MR_Word mercury__stack__Var_13 = (MR_Word) mercury__stack__Stack_3;

    if ((mercury__stack__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140stack.det_top\'/2", (MR_String) "top of empty stack");
        }
      }
    else
      {
        MR_Word mercury__stack__Var_8;

        mercury__stack__X_4 = (MR_hl_field(MR_mktag(1), mercury__stack__Var_13, (MR_Integer) 0));
        mercury__stack__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__Var_13, (MR_Integer) 1)));
      }
    return mercury__stack__X_4;
  }
}

MR_bool MR_CALL 
mercury__stack__top_2_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_6,
  MR_Word mercury__stack__HeadVar__1_1,
  MR_Box * mercury__stack__Elem_3)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Var_5 = (MR_Word) mercury__stack__HeadVar__1_1;
    MR_Word mercury__stack__Var_4;

    mercury__stack__succeeded = ((MR_tag((MR_Word) mercury__stack__Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__stack__succeeded)
      {
        *mercury__stack__Elem_3 = (MR_hl_field(MR_mktag(1), mercury__stack__Var_5, (MR_Integer) 0));
        mercury__stack__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__Var_5, (MR_Integer) 1)));
      }
    return mercury__stack__succeeded;
  }
}

void MR_CALL 
mercury__stack__push_list_3_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_14,
  MR_Word mercury__stack__HeadVar__1_1,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_2,
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__stack__succeeded;

        if ((mercury__stack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__stack__STATE_VARIABLE_Stack_3 = mercury__stack__STATE_VARIABLE_Stack_0_2;
        else
          {
            MR_Box mercury__stack__Elem_7 = (MR_hl_field(MR_mktag(1), mercury__stack__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__stack__Elems_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__stack__STATE_VARIABLE_Stack_12_12;
            MR_Word mercury__stack__Elems_19 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_2;
            MR_Word mercury__stack__Var_21;

            {
              mercury__stack__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__stack__Var_21, 0) = mercury__stack__Elem_7;
              MR_hl_field(MR_mktag(1), mercury__stack__Var_21, 1) = ((MR_Box) (mercury__stack__Elems_19));
            }
            mercury__stack__STATE_VARIABLE_Stack_12_12 = (MR_Word) mercury__stack__Var_21;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__stack__next_value_of_HeadVar__1_1 = mercury__stack__Elems_8;
              MR_Word mercury__stack__next_value_of_STATE_VARIABLE_Stack_0_2 = mercury__stack__STATE_VARIABLE_Stack_12_12;

              mercury__stack__STATE_VARIABLE_Stack_0_2 = mercury__stack__next_value_of_STATE_VARIABLE_Stack_0_2;
              mercury__stack__HeadVar__1_1 = mercury__stack__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__stack__push_list_2_f_0(
  MR_Word mercury__stack__TypeInfo_for_T_9,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_6,
  MR_Word mercury__stack__Xs_5)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__STATE_VARIABLE_Stack_7;

    {
      mercury__stack__push_list_3_p_0(mercury__stack__TypeInfo_for_T_9, mercury__stack__Xs_5, mercury__stack__STATE_VARIABLE_Stack_0_6, &mercury__stack__STATE_VARIABLE_Stack_7);
    }
    return mercury__stack__STATE_VARIABLE_Stack_7;
  }
}

void MR_CALL 
mercury__stack__push_3_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_11,
  MR_Box mercury__stack__Elem_4,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Elems_6 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;
    MR_Word mercury__stack__Var_10;

    {
      mercury__stack__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__stack__Var_10, 0) = mercury__stack__Elem_4;
      MR_hl_field(MR_mktag(1), mercury__stack__Var_10, 1) = ((MR_Box) (mercury__stack__Elems_6));
    }
    *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__Var_10;
  }
}

MR_Word MR_CALL 
mercury__stack__push_2_f_0(
  MR_Word mercury__stack__TypeInfo_for_T_9,
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_6,
  MR_Box mercury__stack__X_5)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__STATE_VARIABLE_Stack_7;
    MR_Word mercury__stack__Elems_14 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_6;
    MR_Word mercury__stack__Var_16;

    {
      mercury__stack__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__stack__Var_16, 0) = mercury__stack__X_5;
      MR_hl_field(MR_mktag(1), mercury__stack__Var_16, 1) = ((MR_Box) (mercury__stack__Elems_14));
    }
    mercury__stack__STATE_VARIABLE_Stack_7 = (MR_Word) mercury__stack__Var_16;
    return mercury__stack__STATE_VARIABLE_Stack_7;
  }
}

MR_bool MR_CALL 
mercury__stack__is_full_1_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_3,
  MR_Word mercury__stack__HeadVar__1_2)
{
  {
    MR_bool mercury__stack__succeeded;

    {
      mercury__stack__succeeded = mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
    return mercury__stack__succeeded;
  }
}

MR_bool MR_CALL 
mercury__stack__is_empty_1_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_3,
  MR_Word mercury__stack__HeadVar__1_1)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Var_2 = (MR_Word) mercury__stack__HeadVar__1_1;

    mercury__stack__succeeded = (mercury__stack__Var_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__stack__succeeded;
  }
}

void MR_CALL 
mercury__stack__init_1_p_0(
  MR_Word mercury__stack__TypeInfo_for_T_3,
  MR_Word * mercury__stack__HeadVar__1_1)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Var_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__stack__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

MR_Word MR_CALL 
mercury__stack__init_0_f_0(
  MR_Word mercury__stack__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__stack__succeeded;
    MR_Word mercury__stack__Stack_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__stack__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__stack__Stack_2;
  }
}

void mercury__stack__init(void)
{
}

void mercury__stack__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stack__stack__type_ctor_info_stack_1);
}

void mercury__stack__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__stack__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module stack. */
