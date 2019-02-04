/*
** Automatically generated from `prolog.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module prolog. */
/* :- implementation. */

/*
INIT mercury__prolog__init
ENDINIT
*/

#include "prolog.mih"


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




static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0;

static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
  MR_Box mercury__prolog__wrapper_arg_1,
  MR_Box mercury__prolog__wrapper_arg_2);

static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
  MR_Box * mercury__prolog__wrapper_arg_1,
  MR_Box mercury__prolog__wrapper_arg_2,
  MR_Box mercury__prolog__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__prolog__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__prolog_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__prolog_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_3[0])),
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



static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0
  }
};

const MR_TypeCtorInfo_Struct mercury__prolog__prolog__type_ctor_info_univ_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__prolog____Unify____univ_result_0_0_10001)),
  ((MR_Box) (mercury__prolog____Compare____univ_result_0_0_10001)),
  (MR_String) "prolog",
  (MR_String) "univ_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
  MR_Box mercury__prolog__wrapper_arg_1,
  MR_Box mercury__prolog__wrapper_arg_2)
{
  {
    MR_bool mercury__prolog__succeeded;

    {
      mercury__prolog__succeeded = mercury__prolog____Unify____univ_result_0_0(((MR_Word) mercury__prolog__wrapper_arg_1), ((MR_Word) mercury__prolog__wrapper_arg_2));
    }
    return mercury__prolog__succeeded;
  }
}

static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
  MR_Box * mercury__prolog__wrapper_arg_1,
  MR_Box mercury__prolog__wrapper_arg_2,
  MR_Box mercury__prolog__wrapper_arg_3)
{
  {
    MR_Word mercury__prolog__conv0_HeadVar__1_1;

    {
      mercury__prolog____Compare____univ_result_0_0(&mercury__prolog__conv0_HeadVar__1_1, ((MR_Word) mercury__prolog__wrapper_arg_2), ((MR_Word) mercury__prolog__wrapper_arg_3));
    }
    *mercury__prolog__wrapper_arg_1 = ((MR_Box) (mercury__prolog__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__prolog__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__prolog__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__prolog____Compare____univ_result_0_0(
  MR_Word * mercury__prolog__HeadVar__1_1,
  MR_Word mercury__prolog__HeadVar__2_2,
  MR_Word mercury__prolog__HeadVar__3_3)
{
  {
    MR_bool mercury__prolog__succeeded;
    MR_Word mercury__prolog__TypeInfo_6_6 = (MR_Word) &mercury__prolog_scalar_common_2[0];
    MR_Word mercury__prolog__Cast_HeadVar1_4 = mercury__prolog__HeadVar__2_2;
    MR_Word mercury__prolog__Cast_HeadVar2_5 = mercury__prolog__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__prolog__TypeInfo_6_6, mercury__prolog__HeadVar__1_1, ((MR_Box) (mercury__prolog__Cast_HeadVar1_4)), ((MR_Box) (mercury__prolog__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0(
  MR_Word mercury__prolog__HeadVar__1_1,
  MR_Word mercury__prolog__HeadVar__2_2)
{
  {
    MR_bool mercury__prolog__succeeded;
    MR_Word mercury__prolog__TypeInfo_5_5 = (MR_Word) &mercury__prolog_scalar_common_2[0];
    MR_Word mercury__prolog__Cast_HeadVar1_3 = mercury__prolog__HeadVar__1_1;
    MR_Word mercury__prolog__Cast_HeadVar2_4 = mercury__prolog__HeadVar__2_2;

    {
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_5_5, ((MR_Box) (mercury__prolog__Cast_HeadVar1_3)), ((MR_Box) (mercury__prolog__Cast_HeadVar2_4)));
    }
    return mercury__prolog__succeeded;
  }
}

void MR_CALL 
mercury__prolog__det_arg_3_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_9,
  MR_Integer mercury__prolog__ArgumentIndex_4,
  MR_Box mercury__prolog__Type_5,
  MR_Word * mercury__prolog__Argument_6)
{
  {
    MR_bool mercury__prolog__succeeded;
    MR_Word mercury__prolog__Arg_7;
    MR_Word mercury__prolog__TypeInfo_12_17;
    MR_Box mercury__prolog__Arg_13;
    MR_Integer mercury__prolog__V_15_15 = (mercury__prolog__ArgumentIndex_4 - (MR_Integer) 1);

    {
      mercury__prolog__succeeded = mercury__deconstruct__arg_4_p_1(mercury__prolog__TypeInfo_for_T_9, &mercury__prolog__TypeInfo_12_17, mercury__prolog__Type_5, (MR_Integer) 1, mercury__prolog__V_15_15, &mercury__prolog__Arg_13);
    }
    if (mercury__prolog__succeeded)
      {
        {
          mercury__univ__type_to_univ_2_p_1(mercury__prolog__TypeInfo_12_17, mercury__prolog__Arg_13, &mercury__prolog__Arg_7);
        }
        mercury__prolog__succeeded = MR_TRUE;
      }
    if (mercury__prolog__succeeded)
      *mercury__prolog__Argument_6 = mercury__prolog__Arg_7;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "det_arg: arg failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__prolog__arg_3_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_11,
  MR_Integer mercury__prolog__ArgumentIndex_4,
  MR_Box mercury__prolog__Type_5,
  MR_Word * mercury__prolog__Univ_6)
{
  {
    MR_bool mercury__prolog__succeeded;
    MR_Word mercury__prolog__TypeInfo_12_12;
    MR_Box mercury__prolog__Arg_7;
    MR_Integer mercury__prolog__V_9_9 = (mercury__prolog__ArgumentIndex_4 - (MR_Integer) 1);

    {
      mercury__prolog__succeeded = mercury__deconstruct__arg_4_p_1(mercury__prolog__TypeInfo_for_T_11, &mercury__prolog__TypeInfo_12_12, mercury__prolog__Type_5, (MR_Integer) 1, mercury__prolog__V_9_9, &mercury__prolog__Arg_7);
    }
    if (mercury__prolog__succeeded)
      {
        {
          mercury__univ__type_to_univ_2_p_1(mercury__prolog__TypeInfo_12_12, mercury__prolog__Arg_7, mercury__prolog__Univ_6);
        }
        mercury__prolog__succeeded = MR_TRUE;
      }
    return mercury__prolog__succeeded;
  }
}

void MR_CALL 
mercury__prolog__f_61_46_46_2_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_8,
  MR_Box mercury__prolog__Term_3,
  MR_Word * mercury__prolog__HeadVar__2_2)
{
  {
    MR_bool mercury__prolog__succeeded;
    MR_String mercury__prolog__Functor_4;
    MR_Word mercury__prolog__Args_5;
    MR_Integer mercury__prolog___Arity_6;

    {
      mercury__deconstruct__deconstruct_5_p_1(mercury__prolog__TypeInfo_for_T_8, mercury__prolog__Term_3, (MR_Integer) 1, &mercury__prolog__Functor_4, &mercury__prolog___Arity_6, &mercury__prolog__Args_5);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__prolog__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__prolog__Functor_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__prolog__Args_5));
    }
  }
}

MR_bool MR_CALL 
mercury__prolog__f_92_61_61_2_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_5,
  MR_Box mercury__prolog__X_3,
  MR_Box mercury__prolog__Y_4)
{
  {
    MR_bool mercury__prolog__succeeded;

    {
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_5, mercury__prolog__X_3, mercury__prolog__Y_4);
    }
    mercury__prolog__succeeded = !(mercury__prolog__succeeded);
    return mercury__prolog__succeeded;
  }
}

MR_bool MR_CALL 
mercury__prolog__f_61_61_2_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_4,
  MR_Box mercury__prolog__X_3,
  MR_Box mercury__prolog__X_2)
{
  {
    MR_bool mercury__prolog__succeeded;

    {
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_4, mercury__prolog__X_2, mercury__prolog__X_3);
    }
    return mercury__prolog__succeeded;
  }
}

MR_bool MR_CALL 
mercury__prolog__f_61_92_61_2_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_5,
  MR_Box mercury__prolog__X_3,
  MR_Box mercury__prolog__Y_4)
{
  {
    MR_bool mercury__prolog__succeeded;

    {
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_5, mercury__prolog__X_3, mercury__prolog__Y_4);
    }
    mercury__prolog__succeeded = !(mercury__prolog__succeeded);
    return mercury__prolog__succeeded;
  }
}

MR_bool MR_CALL 
mercury__prolog__f_61_58_61_2_p_0(
  MR_Word mercury__prolog__TypeInfo_for_T_4,
  MR_Box mercury__prolog__X_3,
  MR_Box mercury__prolog__X_2)
{
  {
    MR_bool mercury__prolog__succeeded;

    {
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_4, mercury__prolog__X_2, mercury__prolog__X_3);
    }
    return mercury__prolog__succeeded;
  }
}

void mercury__prolog__init(void)
{
}

void mercury__prolog__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__prolog__prolog__type_ctor_info_univ_result_0);
}

void mercury__prolog__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__prolog__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module prolog. */
