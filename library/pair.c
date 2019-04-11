/*
** Automatically generated from `pair.m'
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


/* :- module pair. */
/* :- implementation. */

/*
INIT mercury__pair__init
ENDINIT
*/

#include "pair.mih"


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




static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2];

static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0;

static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1];

static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1];

static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1];

static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1;

static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4);

static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box * mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4,
  MR_Box mercury__pair__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3);

static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box * mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__pair__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pair_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_2[0])),
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



static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0 = {
  (MR_String) "-",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pair__pair__field_types_pair_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1] = {
  &mercury__pair__pair__du_functor_desc_pair_2_0
};

static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pair__pair__du_stag_ordered_pair_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1] = {
  &mercury__pair__pair__du_functor_desc_pair_2_0
};

static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pair____Unify____pair_2_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_2_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  {     mercury__pair__pair__du_name_ordered_pair_2 },
  {     mercury__pair__pair__du_ptag_ordered_pair_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pair__pair__functor_number_map_pair_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__pair____Unify____pair_1_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_1_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4)
{
  {
    MR_bool mercury__pair__succeeded;

    {
      mercury__pair__succeeded = mercury__pair____Unify____pair_2_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), ((MR_Word) mercury__pair__wrapper_arg_3), ((MR_Word) mercury__pair__wrapper_arg_4));
    }
    return mercury__pair__succeeded;
  }
}

static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box * mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4,
  MR_Box mercury__pair__wrapper_arg_5)
{
  {
    MR_Word mercury__pair__conv0_HeadVar__1_1;

    {
      mercury__pair____Compare____pair_2_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), &mercury__pair__conv0_HeadVar__1_1, ((MR_Word) mercury__pair__wrapper_arg_4), ((MR_Word) mercury__pair__wrapper_arg_5));
    }
    *mercury__pair__wrapper_arg_3 = ((MR_Box) (mercury__pair__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3)
{
  {
    MR_bool mercury__pair__succeeded;

    {
      mercury__pair__succeeded = mercury__pair____Unify____pair_1_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), ((MR_Word) mercury__pair__wrapper_arg_3));
    }
    return mercury__pair__succeeded;
  }
}

static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
  MR_Box mercury__pair__wrapper_arg_1,
  MR_Box * mercury__pair__wrapper_arg_2,
  MR_Box mercury__pair__wrapper_arg_3,
  MR_Box mercury__pair__wrapper_arg_4)
{
  {
    MR_Word mercury__pair__conv0_HeadVar__1_1;

    {
      mercury__pair____Compare____pair_1_0(((MR_Word) mercury__pair__wrapper_arg_1), &mercury__pair__conv0_HeadVar__1_1, ((MR_Word) mercury__pair__wrapper_arg_3), ((MR_Word) mercury__pair__wrapper_arg_4));
    }
    *mercury__pair__wrapper_arg_2 = ((MR_Box) (mercury__pair__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__pair__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__pair__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__pair____Compare____pair_2_0(
  MR_Word mercury__pair__TypeInfo_for_T1_11,
  MR_Word mercury__pair__TypeInfo_for_T2_12,
  MR_Word * mercury__pair__HeadVar__1_1,
  MR_Word mercury__pair__HeadVar__2_2,
  MR_Word mercury__pair__HeadVar__3_3)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Integer mercury__pair__CastX_9 = (MR_Integer) mercury__pair__HeadVar__2_2;
    MR_Integer mercury__pair__CastY_10 = (MR_Integer) mercury__pair__HeadVar__3_3;

    mercury__pair__succeeded = (mercury__pair__CastX_9 == mercury__pair__CastY_10);
    if (mercury__pair__succeeded)
      *mercury__pair__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__pair__Var_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__pair__Var_5 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__pair__Var_6 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__pair__Var_7 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__pair__Var_8;

        {
          mercury__builtin__compare_3_p_0(mercury__pair__TypeInfo_for_T1_11, &mercury__pair__Var_8, mercury__pair__Var_4, mercury__pair__Var_6);
        }
        mercury__pair__succeeded = (mercury__pair__Var_8 == (MR_Integer) 0);
        mercury__pair__succeeded = !(mercury__pair__succeeded);
        if (mercury__pair__succeeded)
          *mercury__pair__HeadVar__1_1 = mercury__pair__Var_8;
        else
          {
            mercury__builtin__compare_3_p_0(mercury__pair__TypeInfo_for_T2_12, mercury__pair__HeadVar__1_1, mercury__pair__Var_5, mercury__pair__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0(
  MR_Word mercury__pair__TypeInfo_for_T1_9,
  MR_Word mercury__pair__TypeInfo_for_T2_10,
  MR_Word mercury__pair__HeadVar__1_1,
  MR_Word mercury__pair__HeadVar__2_2)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Integer mercury__pair__CastX_7 = (MR_Integer) mercury__pair__HeadVar__1_1;
    MR_Integer mercury__pair__CastY_8 = (MR_Integer) mercury__pair__HeadVar__2_2;

    mercury__pair__succeeded = (mercury__pair__CastX_7 == mercury__pair__CastY_8);
    if (mercury__pair__succeeded)
      mercury__pair__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__pair__Var_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__pair__Var_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__pair__Var_5 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__pair__Var_6 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 1));

        {
          mercury__pair__succeeded = mercury__builtin__unify_2_p_0(mercury__pair__TypeInfo_for_T1_9, mercury__pair__Var_3, mercury__pair__Var_5);
        }
        if (mercury__pair__succeeded)
          {
            mercury__pair__succeeded = mercury__builtin__unify_2_p_0(mercury__pair__TypeInfo_for_T2_10, mercury__pair__Var_4, mercury__pair__Var_6);
          }
      }
    return mercury__pair__succeeded;
  }
}

void MR_CALL 
mercury__pair____Compare____pair_1_0(
  MR_Word mercury__pair__TypeInfo_for_T_6,
  MR_Word * mercury__pair__HeadVar__1_1,
  MR_Word mercury__pair__HeadVar__2_2,
  MR_Word mercury__pair__HeadVar__3_3)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Word mercury__pair__Cast_HeadVar1_4 = mercury__pair__HeadVar__2_2;
    MR_Word mercury__pair__Cast_HeadVar2_5 = mercury__pair__HeadVar__3_3;

    {
      mercury__pair____Compare____pair_2_0(mercury__pair__TypeInfo_for_T_6, mercury__pair__TypeInfo_for_T_6, mercury__pair__HeadVar__1_1, mercury__pair__Cast_HeadVar1_4, mercury__pair__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0(
  MR_Word mercury__pair__TypeInfo_for_T_5,
  MR_Word mercury__pair__HeadVar__1_1,
  MR_Word mercury__pair__HeadVar__2_2)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Word mercury__pair__Cast_HeadVar1_3 = mercury__pair__HeadVar__1_1;
    MR_Word mercury__pair__Cast_HeadVar2_4 = mercury__pair__HeadVar__2_2;

    {
      mercury__pair__succeeded = mercury__pair____Unify____pair_2_0(mercury__pair__TypeInfo_for_T_5, mercury__pair__TypeInfo_for_T_5, mercury__pair__Cast_HeadVar1_3, mercury__pair__Cast_HeadVar2_4);
    }
    return mercury__pair__succeeded;
  }
}

MR_Word MR_CALL 
mercury__pair__pair_2_f_0(
  MR_Word mercury__pair__TypeInfo_for_T1_6,
  MR_Word mercury__pair__TypeInfo_for_T2_7,
  MR_Box mercury__pair__X_4,
  MR_Box mercury__pair__Y_5)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Word mercury__pair__HeadVar__3_3;

    {
      mercury__pair__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, 0) = mercury__pair__X_4;
      MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, 1) = mercury__pair__Y_5;
    }
    return mercury__pair__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pair__snd_2_p_0(
  MR_Word mercury__pair__TypeInfo_for_X_5,
  MR_Word mercury__pair__TypeInfo_for_Y_6,
  MR_Word mercury__pair__P_3,
  MR_Box * mercury__pair__X_4)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Box mercury__pair___X_8 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 0));

    *mercury__pair__X_4 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 1));
  }
}

MR_Box MR_CALL 
mercury__pair__snd_1_f_0(
  MR_Word mercury__pair__TypeInfo_for_X_5,
  MR_Word mercury__pair__TypeInfo_for_Y_6,
  MR_Word mercury__pair__HeadVar__1_1)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Box mercury__pair__Y_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));
    MR_Box mercury__pair___X_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));

    return mercury__pair__Y_4;
  }
}

void MR_CALL 
mercury__pair__fst_2_p_0(
  MR_Word mercury__pair__TypeInfo_for_X_5,
  MR_Word mercury__pair__TypeInfo_for_Y_6,
  MR_Word mercury__pair__P_3,
  MR_Box * mercury__pair__X_4)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Box mercury__pair___Y_8;

    *mercury__pair__X_4 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 0));
    mercury__pair___Y_8 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 1));
  }
}

MR_Box MR_CALL 
mercury__pair__fst_1_f_0(
  MR_Word mercury__pair__TypeInfo_for_X_5,
  MR_Word mercury__pair__TypeInfo_for_Y_6,
  MR_Word mercury__pair__HeadVar__1_1)
{
  {
    MR_bool mercury__pair__succeeded;
    MR_Box mercury__pair__X_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mercury__pair___Y_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));

    return mercury__pair__X_3;
  }
}

void mercury__pair__init(void)
{
}

void mercury__pair__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_2);
	MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_1);
}

void mercury__pair__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__pair__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module pair. */
