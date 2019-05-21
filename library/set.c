/*
** Automatically generated from `set.m'
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


/* :- module set. */
/* :- implementation. */

/*
INIT mercury__set__init
ENDINIT
*/

#include "set.mih"


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



struct mercury__set__map_3_p_4_env_0_s {
  MR_Word mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10;
  MR_Word * mercury__set__map_3_p_4_env_0__S2_6;
  MR_Cont mercury__set__map_3_p_4_env_0__cont;
  void * mercury__set__map_3_p_4_env_0__cont_env_ptr;
  MR_Word mercury__set__map_3_p_4_env_0__L2_8;
  MR_Word mercury__set__map_3_p_4_env_0__V_4_17;
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_20;
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_25;
};

struct mercury__set__map_3_p_3_env_0_s {
  MR_Word mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10;
  MR_Word * mercury__set__map_3_p_3_env_0__S2_6;
  MR_Cont mercury__set__map_3_p_3_env_0__cont;
  void * mercury__set__map_3_p_3_env_0__cont_env_ptr;
  MR_Word mercury__set__map_3_p_3_env_0__L2_8;
  MR_Word mercury__set__map_3_p_3_env_0__V_4_17;
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_20;
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_25;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1;

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box mercury__set__wrapper_arg_1,
  MR_Box mercury__set__wrapper_arg_2,
  MR_Box mercury__set__wrapper_arg_3);

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box mercury__set__wrapper_arg_1,
  MR_Box * mercury__set__wrapper_arg_2,
  MR_Box mercury__set__wrapper_arg_3,
  MR_Box mercury__set__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set__Var_18,
  MR_Word mercury__set__HeadVar__2_2,
  MR_Box mercury__set__HeadVar__3_3,
  MR_Box * mercury__set__HeadVar__4_4);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__set__Var_16,
  MR_Word mercury__set__HeadVar__2_2,
  MR_Word * mercury__set__HeadVar__3_3);

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * mercury__set__env_ptr_arg);

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * mercury__set__env_ptr_arg);


static /* final */ const MR_Box mercury__set_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_2[0])),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct mercury__set__set__type_ctor_info_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__set____Unify____set_1_0_10001)),
  ((MR_Box) (mercury__set____Compare____set_1_0_10001)),
  (MR_String) "set",
  (MR_String) "set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box mercury__set__wrapper_arg_1,
  MR_Box mercury__set__wrapper_arg_2,
  MR_Box mercury__set__wrapper_arg_3)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set__succeeded = mercury__set____Unify____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), ((MR_Word) mercury__set__wrapper_arg_2), ((MR_Word) mercury__set__wrapper_arg_3));
    }
    return mercury__set__succeeded;
  }
}

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box mercury__set__wrapper_arg_1,
  MR_Box * mercury__set__wrapper_arg_2,
  MR_Box mercury__set__wrapper_arg_3,
  MR_Box mercury__set__wrapper_arg_4)
{
  {
    MR_Word mercury__set__conv0_HeadVar__1_1;

    {
      mercury__set____Compare____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), &mercury__set__conv0_HeadVar__1_1, ((MR_Word) mercury__set__wrapper_arg_3), ((MR_Word) mercury__set__wrapper_arg_4));
    }
    *mercury__set__wrapper_arg_2 = ((MR_Box) (mercury__set__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__set__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set__Var_7,
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__List_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_9;
    MR_Integer mercury__set__V_5_13;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_13);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_13, mercury__set__List_3, &mercury__set__V_4_9);
    }
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_9;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(
  MR_Word mercury__set__Var_7,
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Xs_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_4_12;
    MR_Integer mercury__set__V_5_16;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_16);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_16, mercury__set__Xs_3, &mercury__set__V_4_12);
    }
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_12;
    return mercury__set__S_4;
  }
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set__Var_11,
  MR_Word mercury__set__TypeInfo_for_T_8,
  MR_Word mercury__set__X_1,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__Var_9;
    MR_Word mercury__set__V_5_14 = (MR_Word) mercury__set__Set_2;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_8, ((MR_Box) (mercury__set__X_1)), (MR_Word) mercury__set__V_5_14, &mercury__set__Var_9);
    }
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__Var_9);
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word mercury__set__Var_7,
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Set_3,
  MR_Word mercury__set__X_4)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set__succeeded = mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mercury__set__Var_7, mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set__Var_11,
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_5_13 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    MR_Word mercury__set__V_6_14;
    MR_Word mercury__set__conv0_V_6_14;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__V_5_13, ((MR_Box) (mercury__set__X_4)), &mercury__set__conv0_V_6_14);
    }
    mercury__set__V_6_14 = (MR_Word) mercury__set__conv0_V_6_14;
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_14;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__T_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;
    MR_Word mercury__set__V_5_17 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_6_18;
    MR_Word mercury__set__conv0_V_6_18;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_5_17, ((MR_Box) (mercury__set__T_5)), &mercury__set__conv0_V_6_18);
    }
    mercury__set__V_6_18 = (MR_Word) mercury__set__conv0_V_6_18;
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_18;
    return mercury__set__S2_6;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__Xs_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;

    {
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_9, mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
    return mercury__set__S2_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set__Var_11,
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__List_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Integer mercury__set__V_5_21;
    MR_Word mercury__set__V_4_28;
    MR_Word mercury__set__V_5_29;
    MR_Word mercury__set__V_6_30;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_21);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_11, mercury__set__TypeInfo_for_T_9, mercury__set__V_5_21, mercury__set__List_4, &mercury__set__V_4_28);
    }
    mercury__set__V_5_29 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_11, mercury__set__TypeInfo_for_T_9, mercury__set__V_4_28, mercury__set__V_5_29, &mercury__set__V_6_30);
    }
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_30;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_12;

    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_9, mercury__set__TypeInfo_for_T_7, mercury__set__V_4_10, mercury__set__V_5_11, &mercury__set__V_6_12);
    }
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_16;

    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__Var_9, mercury__set__TypeInfo_for_T_7, mercury__set__V_4_14, mercury__set__V_5_15, &mercury__set__V_6_16);
    }
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
    return mercury__set__S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_12;
    MR_Word mercury__set__conv0_V_6_12;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_10, (MR_Word) mercury__set__V_5_11, &mercury__set__conv0_V_6_12);
    }
    mercury__set__V_6_12 = (MR_Word) mercury__set__conv0_V_6_12;
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_16;
    MR_Word mercury__set__conv0_V_6_16;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_14, (MR_Word) mercury__set__V_5_15, &mercury__set__conv0_V_6_16);
    }
    mercury__set__V_6_16 = (MR_Word) mercury__set__conv0_V_6_16;
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
    return mercury__set__S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_12;
    MR_Word mercury__set__conv0_V_6_12;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_10, (MR_Word) mercury__set__V_5_11, &mercury__set__conv0_V_6_12);
    }
    mercury__set__V_6_12 = (MR_Word) mercury__set__conv0_V_6_12;
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__set__Var_9,
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_16;
    MR_Word mercury__set__conv0_V_6_16;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_14, (MR_Word) mercury__set__V_5_15, &mercury__set__conv0_V_6_16);
    }
    mercury__set__V_6_16 = (MR_Word) mercury__set__conv0_V_6_16;
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
    return mercury__set__S3_6;
  }
}

void MR_CALL 
mercury__set____Compare____set_1_0(
  MR_Word mercury__set__TypeInfo_for_T_6,
  MR_Word * mercury__set__HeadVar__1_1,
  MR_Word mercury__set__HeadVar__2_2,
  MR_Word mercury__set__HeadVar__3_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__Cast_HeadVar1_4 = mercury__set__HeadVar__2_2;
    MR_Word mercury__set__Cast_HeadVar2_5 = mercury__set__HeadVar__3_3;

    {
      mercury__set_ordlist____Compare____set_ordlist_1_0(mercury__set__TypeInfo_for_T_6, mercury__set__HeadVar__1_1, mercury__set__Cast_HeadVar1_4, mercury__set__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__set____Unify____set_1_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__HeadVar__1_1,
  MR_Word mercury__set__HeadVar__2_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__Cast_HeadVar1_3 = mercury__set__HeadVar__1_1;
    MR_Word mercury__set__Cast_HeadVar2_4 = mercury__set__HeadVar__2_2;

    {
      mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__Cast_HeadVar1_3, mercury__set__Cast_HeadVar2_4);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__intersection_and_differences_5_p_0(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__SetA_6,
  MR_Word mercury__set__SetB_7,
  MR_Word * mercury__set__InAandB_8,
  MR_Word * mercury__set__OnlyInA_9,
  MR_Word * mercury__set__OnlyInB_10)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set_ordlist__intersection_and_differences_5_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__SetA_6, mercury__set__SetB_7, mercury__set__InAandB_8, mercury__set__OnlyInA_9, mercury__set__OnlyInB_10);
    }
  }
}

void MR_CALL 
mercury__set__divide_by_set_4_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__DivideBySet_5,
  MR_Word mercury__set__Set_6,
  MR_Word * mercury__set__TruePart_7,
  MR_Word * mercury__set__FalsePart_8)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__DivideBySet_5, mercury__set__Set_6, mercury__set__TruePart_7, mercury__set__FalsePart_8);
    }
  }
}

void MR_CALL 
mercury__set__divide_4_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__P_5,
  MR_Word mercury__set__Set_6,
  MR_Word * mercury__set__TruePart_7,
  MR_Word * mercury__set__FalsePart_8)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__Set_6;
    MR_Word mercury__set__V_7_12;
    MR_Word mercury__set__V_8_13;
    MR_Word mercury__set__V_11_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set__V_12_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set__V_9_17;
    MR_Word mercury__set__V_10_18;

    {
      mercury__set_ordlist__divide_loop_6_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__P_5, mercury__set__V_6_11, mercury__set__V_11_14, &mercury__set__V_9_17, mercury__set__V_12_16, &mercury__set__V_10_18);
    }
    {
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_9_17, &mercury__set__V_7_12);
    }
    *mercury__set__TruePart_7 = (MR_Word) mercury__set__V_7_12;
    {
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_10_18, &mercury__set__V_8_13);
    }
    *mercury__set__FalsePart_8 = (MR_Word) mercury__set__V_8_13;
  }
}

MR_bool MR_CALL 
mercury__set__all_true_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__P_3,
  MR_Word mercury__set__S_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__S_4;

    {
      mercury__set__succeeded = mercury__list__all_true_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__P_3, mercury__set__V_4_7);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_5(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_4(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_3(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_2(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_1(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_0(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_5(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_4(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_3(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold6_14_p_2(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

void MR_CALL 
mercury__set__fold6_14_p_1(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

void MR_CALL 
mercury__set__fold6_14_p_0(
  MR_Word mercury__set__TypeInfo_for_T_40,
  MR_Word mercury__set__TypeInfo_for_A_41,
  MR_Word mercury__set__TypeInfo_for_B_42,
  MR_Word mercury__set__TypeInfo_for_C_43,
  MR_Word mercury__set__TypeInfo_for_D_44,
  MR_Word mercury__set__TypeInfo_for_E_45,
  MR_Word mercury__set__TypeInfo_for_F_46,
  MR_Word mercury__set__F_15,
  MR_Word mercury__set__S_16,
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

    {
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_5(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_4(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_3(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_2(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_1(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_0(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_5(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_4(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_3(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold5_12_p_2(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set__fold5_12_p_1(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set__fold5_12_p_0(
  MR_Word mercury__set__TypeInfo_for_T_35,
  MR_Word mercury__set__TypeInfo_for_A_36,
  MR_Word mercury__set__TypeInfo_for_B_37,
  MR_Word mercury__set__TypeInfo_for_C_38,
  MR_Word mercury__set__TypeInfo_for_D_39,
  MR_Word mercury__set__TypeInfo_for_E_40,
  MR_Word mercury__set__F_13,
  MR_Word mercury__set__S_14,
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

    {
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_5(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_4(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_3(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_2(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_1(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_0(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_5(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_4(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_3(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold4_10_p_2(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set__fold4_10_p_1(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set__fold4_10_p_0(
  MR_Word mercury__set__TypeInfo_for_T_29,
  MR_Word mercury__set__TypeInfo_for_A_30,
  MR_Word mercury__set__TypeInfo_for_B_31,
  MR_Word mercury__set__TypeInfo_for_C_32,
  MR_Word mercury__set__TypeInfo_for_D_33,
  MR_Word mercury__set__F_11,
  MR_Word mercury__set__S_12,
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

    {
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_5(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_4(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_3(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_2(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_1(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_0(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_5(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_4(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_3(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold3_8_p_2(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set__fold3_8_p_1(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set__fold3_8_p_0(
  MR_Word mercury__set__TypeInfo_for_T_23,
  MR_Word mercury__set__TypeInfo_for_A_24,
  MR_Word mercury__set__TypeInfo_for_B_25,
  MR_Word mercury__set__TypeInfo_for_C_26,
  MR_Word mercury__set__F_9,
  MR_Word mercury__set__S_10,
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

    {
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_5(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_4(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_3(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_2(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_1(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_0(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_5(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_4(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_3(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold2_6_p_2(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set__fold2_6_p_1(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set__fold2_6_p_0(
  MR_Word mercury__set__TypeInfo_for_T_17,
  MR_Word mercury__set__TypeInfo_for_A_18,
  MR_Word mercury__set__TypeInfo_for_B_19,
  MR_Word mercury__set__F_7,
  MR_Word mercury__set__S_8,
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

    {
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_5(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_4(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_3(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__foldl_4_p_2(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set__foldl_4_p_1(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set__foldl_4_p_0(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_5(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_4(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_3(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__fold_4_p_2(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set__fold_4_p_1(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set__fold_4_p_0(
  MR_Word mercury__set__TypeInfo_for_T_11,
  MR_Word mercury__set__TypeInfo_for_A_12,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

    {
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
  }
}

MR_Box MR_CALL 
mercury__set__foldl_3_f_0(
  MR_Word mercury__set__TypeInfo_for_T_8,
  MR_Word mercury__set__TypeInfo_for_A_9,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__A_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Box mercury__set__HeadVar__4_4;
    MR_Word mercury__set__V_9_18 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_18, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
    return mercury__set__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__set__fold_3_f_0(
  MR_Word mercury__set__TypeInfo_for_T_8,
  MR_Word mercury__set__TypeInfo_for_A_9,
  MR_Word mercury__set__F_5,
  MR_Word mercury__set__S_6,
  MR_Box mercury__set__A_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Box mercury__set__HeadVar__4_4;
    MR_Word mercury__set__V_9_21 = (MR_Word) mercury__set__S_6;

    {
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_21, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
    return mercury__set__HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set__Var_18,
  MR_Word mercury__set__HeadVar__2_2,
  MR_Box mercury__set__HeadVar__3_3,
  MR_Box * mercury__set__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set__succeeded;

        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set__HeadVar__4_4 = mercury__set__HeadVar__3_3;
        else
          {
            MR_Box mercury__set__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set__V_15_13;
            MR_Box MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set__Var_18, (MR_Integer) 1)));

            {
              mercury__set__V_15_13 = mercury__set__func_0(((MR_Box) mercury__set__Var_18), mercury__set__V_10_9, mercury__set__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set__next_value_of_HeadVar__2_2 = mercury__set__V_11_10;
              MR_Box mercury__set__next_value_of_HeadVar__3_3 = mercury__set__V_15_13;

              mercury__set__HeadVar__3_3 = mercury__set__next_value_of_HeadVar__3_3;
              mercury__set__HeadVar__2_2 = mercury__set__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set__filter_map_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T1_6,
  MR_Word mercury__set__TypeInfo_for_T2_7,
  MR_Word mercury__set__PF_4,
  MR_Word mercury__set__Set_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__3_3;
    MR_Word mercury__set__V_7_11 = (MR_Word) mercury__set__Set_5;
    MR_Word mercury__set__V_8_12;
    MR_Word mercury__set__V_4_29;
    MR_Integer mercury__set__V_5_32;

    {
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__PF_4, mercury__set__V_7_11, &mercury__set__V_8_12);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__V_8_12, (MR_Integer) 0, &mercury__set__V_5_32);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__V_5_32, mercury__set__V_8_12, &mercury__set__V_4_29);
    }
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__V_4_29;
    return mercury__set__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__set__Var_16,
  MR_Word mercury__set__HeadVar__2_2,
  MR_Word * mercury__set__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set__succeeded;

        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__set__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set__V_9_9;
            MR_bool MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set__Var_16, (MR_Integer) 1)));

            {
              mercury__set__succeeded = mercury__set__func_0(((MR_Box) mercury__set__Var_16), mercury__set__V_6_6, &mercury__set__V_9_9);
            }
            if (mercury__set__succeeded)
              {
                MR_Word mercury__set__V_10_10;

                {
                  mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__Var_16, mercury__set__V_7_7, &mercury__set__V_10_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set__V_9_9;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set__V_10_10));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set__next_value_of_HeadVar__2_2 = mercury__set__V_7_7;

                  mercury__set__HeadVar__2_2 = mercury__set__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__set__filter_map_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T1_7,
  MR_Word mercury__set__TypeInfo_for_T2_8,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__Set_5,
  MR_Word * mercury__set__TransformedTrueSet_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_7_12 = (MR_Word) mercury__set__Set_5;
    MR_Word mercury__set__V_8_13;
    MR_Word mercury__set__V_4_16;
    MR_Integer mercury__set__V_5_19;

    {
      mercury__list__filter_map_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__TypeInfo_for_T2_8, mercury__set__P_4, mercury__set__V_7_12, &mercury__set__V_8_13);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__V_8_13, (MR_Integer) 0, &mercury__set__V_5_19);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__V_5_19, mercury__set__V_8_13, &mercury__set__V_4_16);
    }
    *mercury__set__TransformedTrueSet_6 = (MR_Word) mercury__set__V_4_16;
  }
}

void MR_CALL 
mercury__set__filter_4_p_0(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__P_5,
  MR_Word mercury__set__Set_6,
  MR_Word * mercury__set__TrueSet_7,
  MR_Word * mercury__set__FalseSet_8)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_9_14 = (MR_Word) mercury__set__Set_6;
    MR_Word mercury__set__V_10_15;
    MR_Word mercury__set__V_11_16;
    MR_Word mercury__set__V_4_21;
    MR_Word mercury__set__V_4_26;

    {
      mercury__list__filter_4_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__P_5, mercury__set__V_9_14, &mercury__set__V_10_15, &mercury__set__V_11_16);
    }
    if ((mercury__set__V_10_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_22 = (MR_hl_field(MR_mktag(1), mercury__set__V_10_15, (MR_Integer) 0));
        MR_Word mercury__set__V_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_10_15, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__V_3_22, mercury__set__V_4_23, &mercury__set__V_4_21);
        }
      }
    *mercury__set__TrueSet_7 = (MR_Word) mercury__set__V_4_21;
    if ((mercury__set__V_11_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_27 = (MR_hl_field(MR_mktag(1), mercury__set__V_11_16, (MR_Integer) 0));
        MR_Word mercury__set__V_4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_11_16, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__V_3_27, mercury__set__V_4_28, &mercury__set__V_4_26);
        }
      }
    *mercury__set__FalseSet_8 = (MR_Word) mercury__set__V_4_26;
  }
}

void MR_CALL 
mercury__set__filter_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T1_7,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__Set_5,
  MR_Word * mercury__set__TrueSet_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_7_14 = (MR_Word) mercury__set__Set_5;
    MR_Word mercury__set__V_8_15;
    MR_Word mercury__set__V_4_20;

    {
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__P_4, mercury__set__V_7_14, &mercury__set__V_8_15);
    }
    if ((mercury__set__V_8_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_21 = (MR_hl_field(MR_mktag(1), mercury__set__V_8_15, (MR_Integer) 0));
        MR_Word mercury__set__V_4_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_8_15, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__V_3_21, mercury__set__V_4_22, &mercury__set__V_4_20);
        }
      }
    *mercury__set__TrueSet_6 = (MR_Word) mercury__set__V_4_20;
  }
}

MR_Word MR_CALL 
mercury__set__filter_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T1_6,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__Set_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__3_3;
    MR_Word mercury__set__V_7_10 = (MR_Word) mercury__set__Set_5;
    MR_Word mercury__set__V_8_11;
    MR_Word mercury__set__V_4_16;

    {
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__P_4, mercury__set__V_7_10, &mercury__set__V_8_11);
    }
    if ((mercury__set__V_8_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_17 = (MR_hl_field(MR_mktag(1), mercury__set__V_8_11, (MR_Integer) 0));
        MR_Word mercury__set__V_4_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_8_11, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__V_3_17, mercury__set__V_4_18, &mercury__set__V_4_16);
        }
      }
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__V_4_16;
    return mercury__set__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_5(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;
    MR_Integer mercury__set__V_5_34;

    {
      mercury__set__succeeded = mercury__list__map_foldl_5_p_5(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    if (mercury__set__succeeded)
      {
        mercury__set__V_5_34 = (MR_Integer) 0;
        {
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
        {
          mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_4(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;
    MR_Integer mercury__set__V_5_34;

    {
      mercury__set__succeeded = mercury__list__map_foldl_5_p_4(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    if (mercury__set__succeeded)
      {
        mercury__set__V_5_34 = (MR_Integer) 0;
        {
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
        {
          mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_3(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;
    MR_Integer mercury__set__V_5_34;

    {
      mercury__set__succeeded = mercury__list__map_foldl_5_p_3(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    if (mercury__set__succeeded)
      {
        mercury__set__V_5_34 = (MR_Integer) 0;
        {
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
        {
          mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_2(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;

    {
      mercury__list__map_foldl_5_p_2(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_1(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;

    {
      mercury__list__map_foldl_5_p_1(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_0(
  MR_Word mercury__set__TypeInfo_for_T1_13,
  MR_Word mercury__set__TypeInfo_for_T2_14,
  MR_Word mercury__set__TypeInfo_for_T3_15,
  MR_Word mercury__set__P_6,
  MR_Word mercury__set__S0_7,
  MR_Word * mercury__set__S_8,
  MR_Box mercury__set__A0_9,
  MR_Box * mercury__set__A_10)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
    MR_Word mercury__set__L_12;
    MR_Word mercury__set__V_4_26;
    MR_Integer mercury__set__V_5_29;

    {
      mercury__list__map_foldl_5_p_0(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
  }
}

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * mercury__set__env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_4_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) mercury__set__env_ptr_arg;

    (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25 = (MR_Integer) 0;
    {
      mercury__list__length_acc_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17);
    }
    *((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17;
    {
      ((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__set__map_3_p_4(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__S1_5,
  MR_Word * mercury__set__S2_6,
  MR_Cont mercury__set__cont,
  void * mercury__set__cont_env_ptr)
{
  {
    struct mercury__set__map_3_p_4_env_0_s mercury__set__env;

    (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
    (mercury__set__env).mercury__set__map_3_p_4_env_0__S2_6 = mercury__set__S2_6;
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont = mercury__set__cont;
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
    {
      MR_bool mercury__set__succeeded;
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

      {
        mercury__list__map_3_p_4(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &mercury__set__env);
      }
    }
  }
}

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * mercury__set__env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_3_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) mercury__set__env_ptr_arg;

    (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25 = (MR_Integer) 0;
    {
      mercury__list__length_acc_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17);
    }
    *((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17;
    {
      ((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__set__map_3_p_3(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__S1_5,
  MR_Word * mercury__set__S2_6,
  MR_Cont mercury__set__cont,
  void * mercury__set__cont_env_ptr)
{
  {
    struct mercury__set__map_3_p_3_env_0_s mercury__set__env;

    (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
    (mercury__set__env).mercury__set__map_3_p_3_env_0__S2_6 = mercury__set__S2_6;
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont = mercury__set__cont;
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
    {
      MR_bool mercury__set__succeeded;
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

      {
        mercury__list__map_3_p_3(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_3_env_0__L2_8, mercury__set__map_3_p_3_1, &mercury__set__env);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__set__map_3_p_2(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__S1_5,
  MR_Word * mercury__set__S2_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
    MR_Word mercury__set__L2_8;
    MR_Word mercury__set__V_4_17;
    MR_Integer mercury__set__V_5_20;
    MR_Integer mercury__set__V_5_25;

    {
      mercury__set__succeeded = mercury__list__map_3_p_2(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
    if (mercury__set__succeeded)
      {
        mercury__set__V_5_25 = (MR_Integer) 0;
        {
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, mercury__set__V_5_25, &mercury__set__V_5_20);
        }
        {
          mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
        }
        *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__map_3_p_1(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__S1_5,
  MR_Word * mercury__set__S2_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
    MR_Word mercury__set__L2_8;
    MR_Word mercury__set__V_4_17;
    MR_Integer mercury__set__V_5_20;

    {
      mercury__list__map_3_p_1(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
    }
    *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
  }
}

void MR_CALL 
mercury__set__map_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__P_4,
  MR_Word mercury__set__S1_5,
  MR_Word * mercury__set__S2_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
    MR_Word mercury__set__L2_8;
    MR_Word mercury__set__V_4_17;
    MR_Integer mercury__set__V_5_20;

    {
      mercury__list__map_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
    }
    *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
  }
}

MR_Word MR_CALL 
mercury__set__map_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T1_9,
  MR_Word mercury__set__TypeInfo_for_T2_10,
  MR_Word mercury__set__F_4,
  MR_Word mercury__set__Set_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__TransformedSet_6;
    MR_Word mercury__set__List_7 = (MR_Word) mercury__set__Set_5;
    MR_Word mercury__set__TransformedList_8;
    MR_Word mercury__set__V_4_21;
    MR_Integer mercury__set__V_5_24;

    {
      mercury__set__TransformedList_8 = mercury__list__map_2_f_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__F_4, mercury__set__List_7);
    }
    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__TransformedList_8, (MR_Integer) 0, &mercury__set__V_5_24);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_24, mercury__set__TransformedList_8, &mercury__set__V_4_21);
    }
    mercury__set__TransformedSet_6 = (MR_Word) mercury__set__V_4_21;
    return mercury__set__TransformedSet_6;
  }
}

void MR_CALL 
mercury__set__count_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Set_3,
  MR_Integer * mercury__set__Count_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Set_3;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7, (MR_Integer) 0, mercury__set__Count_4);
    }
  }
}

MR_Integer MR_CALL 
mercury__set__count_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__S_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Integer mercury__set__N_4;
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__S_3;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9, (MR_Integer) 0, &mercury__set__N_4);
    }
    return mercury__set__N_4;
  }
}

void MR_CALL 
mercury__set__difference_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_10;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__difference_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_13;

    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
    return mercury__set__S3_6;
  }
}

MR_Word MR_CALL 
mercury__set__intersect_list_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_4,
  MR_Word mercury__set__Sets_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__2_2;

    {
      mercury__set__HeadVar__2_2 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3);
    }
    return mercury__set__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__power_intersect_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Sets_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Sets_3;

    {
      *mercury__set__Set_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7);
    }
  }
}

MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__SS_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__SS_3;

    {
      mercury__set__S_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9);
    }
    return mercury__set__S_4;
  }
}

void MR_CALL 
mercury__set__intersect_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_10;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__intersect_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_13;

    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
    return mercury__set__S3_6;
  }
}

void MR_CALL 
mercury__set__power_union_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Sets_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Sets_3;
    MR_Word mercury__set__V_5_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set__V_2_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7, mercury__set__V_5_10, mercury__set__Set_4);
    }
  }
}

MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__SS_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__SS_3;
    MR_Word mercury__set__V_5_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9, mercury__set__V_5_12, &mercury__set__S_4);
    }
    return mercury__set__S_4;
  }
}

MR_Word MR_CALL 
mercury__set__union_list_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_4,
  MR_Word mercury__set__Sets_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__2_2;
    MR_Word mercury__set__V_5_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set__V_2_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3, mercury__set__V_5_7, &mercury__set__HeadVar__2_2);
    }
    return mercury__set__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__union_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__SetA_4,
  MR_Word mercury__set__SetB_5,
  MR_Word * mercury__set__Set_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
    MR_Word mercury__set__V_6_10;

    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__union_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__S2_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S3_6;
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
    MR_Word mercury__set__V_6_13;

    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
    return mercury__set__S3_6;
  }
}

MR_bool MR_CALL 
mercury__set__remove_least_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Box * mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    MR_Word mercury__set__V_5_12;

    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_6_11)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set__succeeded)
      {
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 0));
        mercury__set__V_5_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 1)));
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_5_12;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__remove_list_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__List_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_6_13;
    MR_Word mercury__set__V_4_17;
    MR_Word mercury__set__V_6_19;
    MR_Word mercury__set__V_4_20;
    MR_Word mercury__set__V_5_21;
    MR_Word mercury__set__V_6_22;

    {
      mercury__set__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, &mercury__set__V_6_13);
    }
    if (mercury__set__succeeded)
      {
        mercury__set__V_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
        mercury__set__V_6_19 = (MR_Word) mercury__set__V_6_13;
        {
          mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_17, mercury__set__V_6_19, mercury__set__V_6_19);
        }
        if (mercury__set__succeeded)
          {
            mercury__set__V_4_20 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
            mercury__set__V_5_21 = (MR_Word) mercury__set__V_6_13;
            {
              mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_20, mercury__set__V_5_21, &mercury__set__V_6_22);
            }
            *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_22;
            mercury__set__succeeded = MR_TRUE;
          }
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__remove_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Box mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    MR_Word mercury__set__V_6_12;

    {
      mercury__set__succeeded = mercury__list__delete_first_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
    if (mercury__set__succeeded)
      {
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set__delete_list_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__Xs_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;

    {
      mercury__set__delete_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
    return mercury__set__S2_6;
  }
}

void MR_CALL 
mercury__set__delete_list_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__List_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Integer mercury__set__V_5_18;
    MR_Word mercury__set__V_4_24;
    MR_Word mercury__set__V_5_25;
    MR_Word mercury__set__V_6_26;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__V_5_25);
    }
    mercury__set__V_4_24 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_24, mercury__set__V_5_25, &mercury__set__V_6_26);
    }
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_26;
  }
}

void MR_CALL 
mercury__set__delete_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Box mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_11_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set__V_4_17;
    MR_Word mercury__set__V_5_18;
    MR_Word mercury__set__V_6_19;

    {
      mercury__set__V_5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set__V_5_18, 0) = mercury__set__X_4;
      MR_hl_field(MR_mktag(1), mercury__set__V_5_18, 1) = ((MR_Box) (mercury__set__V_11_16));
    }
    mercury__set__V_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_17, mercury__set__V_5_18, &mercury__set__V_6_19);
    }
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_19;
  }
}

MR_Word MR_CALL 
mercury__set__delete_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Box mercury__set__T_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;
    MR_Word mercury__set__V_11_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set__V_4_20;
    MR_Word mercury__set__V_5_21;
    MR_Word mercury__set__V_6_22;

    {
      mercury__set__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set__V_5_21, 0) = mercury__set__T_5;
      MR_hl_field(MR_mktag(1), mercury__set__V_5_21, 1) = ((MR_Box) (mercury__set__V_11_19));
    }
    mercury__set__V_4_20 = (MR_Word) mercury__set__S1_4;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_20, mercury__set__V_5_21, &mercury__set__V_6_22);
    }
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_22;
    return mercury__set__S2_6;
  }
}

MR_Word MR_CALL 
mercury__set__insert_list_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Word mercury__set__Xs_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;

    {
      mercury__set__insert_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
    return mercury__set__S2_6;
  }
}

void MR_CALL 
mercury__set__insert_list_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Word mercury__set__List_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Integer mercury__set__V_5_18;
    MR_Word mercury__set__V_4_24;
    MR_Word mercury__set__V_5_25;
    MR_Word mercury__set__V_6_26;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__V_4_24);
    }
    mercury__set__V_5_25 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_24, mercury__set__V_5_25, &mercury__set__V_6_26);
    }
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_26;
  }
}

MR_bool MR_CALL 
mercury__set__insert_new_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Box mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    MR_Word mercury__set__V_6_12;

    {
      mercury__set__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
    if (mercury__set__succeeded)
      {
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
        mercury__set__succeeded = MR_TRUE;
      }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__insert_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_9,
  MR_Box mercury__set__X_4,
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
    MR_Word mercury__set__V_6_12;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__insert_2_f_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Word mercury__set__S1_4,
  MR_Box mercury__set__T_5)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S2_6;
    MR_Word mercury__set__V_5_14 = (MR_Word) mercury__set__S1_4;
    MR_Word mercury__set__V_6_15;

    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_5_14, mercury__set__T_5, &mercury__set__V_6_15);
    }
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_15;
    return mercury__set__S2_6;
  }
}

MR_bool MR_CALL 
mercury__set__contains_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Set_3,
  MR_Box mercury__set__X_4)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set__succeeded = mercury__set_ordlist__member_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__is_member_3_p_0(
  MR_Word mercury__set__TypeInfo_for_T_7,
  MR_Box mercury__set__X_4,
  MR_Word mercury__set__Set_5,
  MR_Word * mercury__set__Result_6)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_5_10 = (MR_Word) mercury__set__Set_5;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__X_4, mercury__set__V_5_10, mercury__set__Result_6);
    }
  }
}

void MR_CALL 
mercury__set__member_2_p_1(
  MR_Word mercury__set__TypeInfo_for_T_8,
  MR_Box * mercury__set__X_1,
  MR_Word mercury__set__Set_2,
  MR_Cont mercury__set__cont,
  void * mercury__set__cont_env_ptr)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set_ordlist__member_2_p_1(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__Set_2, mercury__set__cont, mercury__set__cont_env_ptr);
    }
  }
}

MR_bool MR_CALL 
mercury__set__member_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_8,
  MR_Box mercury__set__X_1,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__Var_9;
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__Set_2;

    {
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__V_5_12, &mercury__set__Var_9);
    }
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__Var_9);
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__superset_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__SetA_3,
  MR_Word mercury__set__SetB_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__SetA_3;
    MR_Word mercury__set__V_6_13 = (MR_Word) mercury__set__SetB_4;

    {
      mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__V_4_11, mercury__set__V_6_13, mercury__set__V_6_13);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__subset_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__SetA_3,
  MR_Word mercury__set__SetB_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_9 = (MR_Word) mercury__set__SetB_4;
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__SetA_3;

    {
      mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__V_4_9, mercury__set__V_6_11, mercury__set__V_6_11);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_non_empty_1_p_0(
  MR_Word mercury__set__TypeInfo_for_T_3,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_4 = (MR_Word) mercury__set__Set_2;
    MR_Box mercury__set__V_2_5;
    MR_Word mercury__set__V_3_6;

    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set__succeeded)
      {
        mercury__set__V_2_5 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 0));
        mercury__set__V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 1)));
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__non_empty_1_p_0(
  MR_Word mercury__set__TypeInfo_for_T_3,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_4 = (MR_Word) mercury__set__Set_2;
    MR_Box mercury__set__V_2_5;
    MR_Word mercury__set__V_3_6;

    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_4)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set__succeeded)
      {
        mercury__set__V_2_5 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 0));
        mercury__set__V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 1)));
      }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_empty_1_p_0(
  MR_Word mercury__set__TypeInfo_for_T_3,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__empty_1_p_0(
  MR_Word mercury__set__TypeInfo_for_T_3,
  MR_Word mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__equal_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__SetA_3,
  MR_Word mercury__set__SetB_4)
{
  {
    MR_bool mercury__set__succeeded;

    {
      mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__SetB_4, mercury__set__SetA_3);
    }
    return mercury__set__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_singleton_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Set_3,
  MR_Box * mercury__set__X_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_3;
    MR_Word mercury__set__V_5_8;

    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set__succeeded)
      {
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
        mercury__set__V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 1)));
        mercury__set__succeeded = (mercury__set__V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__set__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set__make_singleton_set_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Box mercury__set__T_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_4_9;
    MR_Word mercury__set__V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set__V_4_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 0) = mercury__set__T_3;
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 1) = ((MR_Box) (mercury__set__V_5_10));
    }
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
    return mercury__set__S_4;
  }
}

MR_bool MR_CALL 
mercury__set__singleton_set_2_p_1(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Box * mercury__set__X_3,
  MR_Word mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_4;
    MR_Word mercury__set__V_5_8;

    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__set__succeeded)
      {
        *mercury__set__X_3 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
        mercury__set__V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 1)));
        mercury__set__succeeded = (mercury__set__V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__set__succeeded;
  }
}

void MR_CALL 
mercury__set__singleton_set_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Box mercury__set__X_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7;
    MR_Word mercury__set__V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set__V_4_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 0) = mercury__set__X_3;
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 1) = ((MR_Box) (mercury__set__V_5_8));
    }
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
  }
}

MR_Word MR_CALL 
mercury__set__to_sorted_list_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__S_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__Xs_4 = (MR_Word) mercury__set__S_3;

    return mercury__set__Xs_4;
  }
}

void MR_CALL 
mercury__set__to_sorted_list_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Set_3,
  MR_Word * mercury__set__List_4)
{
  {
    MR_bool mercury__set__succeeded;

    *mercury__set__List_4 = (MR_Word) mercury__set__Set_3;
  }
}

MR_Word MR_CALL 
mercury__set__from_sorted_list_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_4,
  MR_Word mercury__set__List_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__2_2;
    MR_Word mercury__set__V_4_8;

    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_9 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
        MR_Word mercury__set__V_4_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_3_9, mercury__set__V_4_10, &mercury__set__V_4_8);
        }
      }
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
    return mercury__set__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__sorted_list_to_set_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Xs_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_4_9;

    if ((mercury__set__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_10 = (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 0));
        MR_Word mercury__set__V_4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_10, mercury__set__V_4_11, &mercury__set__V_4_9);
        }
      }
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
    return mercury__set__S_4;
  }
}

void MR_CALL 
mercury__set__sorted_list_to_set_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__List_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7;

    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set__V_4_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set__V_3_8 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
        MR_Word mercury__set__V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_8, mercury__set__V_4_9, &mercury__set__V_4_7);
        }
      }
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
  }
}

MR_Word MR_CALL 
mercury__set__set_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_4,
  MR_Word mercury__set__List_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__2_2;
    MR_Word mercury__set__V_4_8;
    MR_Integer mercury__set__V_5_11;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__V_4_8);
    }
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
    return mercury__set__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__from_list_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_4,
  MR_Word mercury__set__List_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__HeadVar__2_2;
    MR_Word mercury__set__V_4_8;
    MR_Integer mercury__set__V_5_11;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__V_4_8);
    }
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
    return mercury__set__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__list_to_set_1_f_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__Xs_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_4;
    MR_Word mercury__set__V_4_9;
    MR_Integer mercury__set__V_5_12;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_12);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_12, mercury__set__Xs_3, &mercury__set__V_4_9);
    }
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
    return mercury__set__S_4;
  }
}

void MR_CALL 
mercury__set__list_to_set_2_p_0(
  MR_Word mercury__set__TypeInfo_for_T_5,
  MR_Word mercury__set__List_3,
  MR_Word * mercury__set__Set_4)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_4_7;
    MR_Integer mercury__set__V_5_10;

    {
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_10);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_10, mercury__set__List_3, &mercury__set__V_4_7);
    }
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
  }
}

void MR_CALL 
mercury__set__init_1_p_0(
  MR_Word mercury__set__TypeInfo_for_T_3,
  MR_Word * mercury__set__Set_2)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__V_2_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__set__Set_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

MR_Word MR_CALL 
mercury__set__init_0_f_0(
  MR_Word mercury__set__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__set__succeeded;
    MR_Word mercury__set__S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__set__V_2_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__set__S_2;
  }
}

void mercury__set__init(void)
{
}

void mercury__set__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set__set__type_ctor_info_set_1);
}

void mercury__set__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module set. */
