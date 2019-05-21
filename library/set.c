/*
** Automatically generated from `set.m'
** by the Mercury compiler,
** version rotd-2018-03-27
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


// :- module set.
// :- implementation.

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

static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


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
  MR_TYPECTOR_REP_EQUIV,
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

static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_4_9;
    MR_Integer V_5_13;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) List_3, (MR_Integer) 0, &V_5_13);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, V_5_13, List_3, &V_4_9);
    *Set_4 = (MR_Word) V_4_9;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4;
    MR_Word V_4_12;
    MR_Integer V_5_16;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) Xs_3, (MR_Integer) 0, &V_5_16);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, V_5_16, Xs_3, &V_4_12);
    S_4 = (MR_Word) V_4_12;
    return S_4;
  }
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_8,
  MR_Word X_1,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word V_5_14 = (MR_Word) Set_2;

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, ((MR_Box) (X_1)), (MR_Word) V_5_14, &Var_9);
    succeeded = ((MR_Integer) 1 == Var_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word X_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(Var_7, TypeInfo_for_T_5, X_4, Set_3);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_9,
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Word V_5_13 = (MR_Word) STATE_VARIABLE_Set_0_6;
    MR_Word V_6_14;
    MR_Word conv0_V_6_14;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_9, (MR_Word) V_5_13, ((MR_Box) (X_4)), &conv0_V_6_14);
    V_6_14 = (MR_Word) conv0_V_6_14;
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_14;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word T_5)
{
  {
    MR_Word S2_6;
    MR_Word V_5_17 = (MR_Word) S1_4;
    MR_Word V_6_18;
    MR_Word conv0_V_6_18;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) V_5_17, ((MR_Box) (T_5)), &conv0_V_6_18);
    V_6_18 = (MR_Word) conv0_V_6_18;
    S2_6 = (MR_Word) V_6_18;
    return S2_6;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  {
    MR_Word S2_6;

    mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Integer V_5_21;
    MR_Word V_4_28;
    MR_Word V_5_29;
    MR_Word V_6_30;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, (MR_Word) List_4, (MR_Integer) 0, &V_5_21);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_T_9, V_5_21, List_4, &V_4_28);
    V_5_29 = (MR_Word) STATE_VARIABLE_Set_0_6;
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_T_9, V_4_28, V_5_29, &V_6_30);
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_30;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_10 = (MR_Word) SetA_4;
    MR_Word V_5_11 = (MR_Word) SetB_5;
    MR_Word V_6_12;

    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, V_4_10, V_5_11, &V_6_12);
    *Set_6 = (MR_Word) V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_14 = (MR_Word) S1_4;
    MR_Word V_5_15 = (MR_Word) S2_5;
    MR_Word V_6_16;

    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, V_4_14, V_5_15, &V_6_16);
    S3_6 = (MR_Word) V_6_16;
    return S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_10 = (MR_Word) SetA_4;
    MR_Word V_5_11 = (MR_Word) SetB_5;
    MR_Word V_6_12;
    MR_Word conv0_V_6_12;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) V_4_10, (MR_Word) V_5_11, &conv0_V_6_12);
    V_6_12 = (MR_Word) conv0_V_6_12;
    *Set_6 = (MR_Word) V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_14 = (MR_Word) S1_4;
    MR_Word V_5_15 = (MR_Word) S2_5;
    MR_Word V_6_16;
    MR_Word conv0_V_6_16;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) V_4_14, (MR_Word) V_5_15, &conv0_V_6_16);
    V_6_16 = (MR_Word) conv0_V_6_16;
    S3_6 = (MR_Word) V_6_16;
    return S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_10 = (MR_Word) SetA_4;
    MR_Word V_5_11 = (MR_Word) SetB_5;
    MR_Word V_6_12;
    MR_Word conv0_V_6_12;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) V_4_10, (MR_Word) V_5_11, &conv0_V_6_12);
    V_6_12 = (MR_Word) conv0_V_6_12;
    *Set_6 = (MR_Word) V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_14 = (MR_Word) S1_4;
    MR_Word V_5_15 = (MR_Word) S2_5;
    MR_Word V_6_16;
    MR_Word conv0_V_6_16;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) V_4_14, (MR_Word) V_5_15, &conv0_V_6_16);
    V_6_16 = (MR_Word) conv0_V_6_16;
    S3_6 = (MR_Word) V_6_16;
    return S3_6;
  }
}

void MR_CALL 
mercury__set____Compare____set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__set____Unify____set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__intersection_and_differences_5_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word SetA_6,
  MR_Word SetB_7,
  MR_Word * InAandB_8,
  MR_Word * OnlyInA_9,
  MR_Word * OnlyInB_10)
{
  mercury__set_ordlist__intersection_and_differences_5_p_0(TypeInfo_for_T_11, SetA_6, SetB_7, InAandB_8, OnlyInA_9, OnlyInB_10);
}

void MR_CALL 
mercury__set__divide_by_set_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word DivideBySet_5,
  MR_Word Set_6,
  MR_Word * TruePart_7,
  MR_Word * FalsePart_8)
{
  mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_for_T_9, DivideBySet_5, Set_6, TruePart_7, FalsePart_8);
}

void MR_CALL 
mercury__set__divide_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TruePart_7,
  MR_Word * FalsePart_8)
{
  {
    MR_Word V_6_11 = (MR_Word) Set_6;
    MR_Word V_7_12;
    MR_Word V_8_13;
    MR_Word V_11_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_12_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_9_17;
    MR_Word V_10_18;

    mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_for_T_9, P_5, V_6_11, V_11_14, &V_9_17, V_12_16, &V_10_18);
    mercury__list__reverse_2_p_0(TypeInfo_for_T_9, V_9_17, &V_7_12);
    *TruePart_7 = (MR_Word) V_7_12;
    mercury__list__reverse_2_p_0(TypeInfo_for_T_9, V_10_18, &V_8_13);
    *FalsePart_8 = (MR_Word) V_8_13;
  }
}

MR_bool MR_CALL 
mercury__set__all_true_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word P_3,
  MR_Word S_4)
{
  {
    MR_bool succeeded;
    MR_Word V_4_7 = (MR_Word) S_4;

    succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_5, P_3, V_4_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_5(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_75 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_4(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_75 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl6_14_p_3(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_75 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_2(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_75 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_2(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_1(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_75 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_1(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

void MR_CALL 
mercury__set__foldl6_14_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_75 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_0(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_5(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_100 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_4(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_100 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold6_14_p_3(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_bool succeeded;
    MR_Word V_35_100 = (MR_Word) S_16;

    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold6_14_p_2(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_100 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_2(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

void MR_CALL 
mercury__set__fold6_14_p_1(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_100 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_1(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

void MR_CALL 
mercury__set__fold6_14_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word TypeInfo_for_D_44,
  MR_Word TypeInfo_for_E_45,
  MR_Word TypeInfo_for_F_46,
  MR_Word F_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_22,
  MR_Box * STATE_VARIABLE_A_23,
  MR_Box STATE_VARIABLE_B_0_24,
  MR_Box * STATE_VARIABLE_B_25,
  MR_Box STATE_VARIABLE_C_0_26,
  MR_Box * STATE_VARIABLE_C_27,
  MR_Box STATE_VARIABLE_D_0_28,
  MR_Box * STATE_VARIABLE_D_29,
  MR_Box STATE_VARIABLE_E_0_30,
  MR_Box * STATE_VARIABLE_E_31,
  MR_Box STATE_VARIABLE_F_0_32,
  MR_Box * STATE_VARIABLE_F_33)
{
  {
    MR_Word V_35_100 = (MR_Word) S_16;

    mercury__list__foldl6_14_p_0(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, V_35_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_5(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_65 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_4(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_65 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl5_12_p_3(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_65 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_65 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_2(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_65 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_1(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set__foldl5_12_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_65 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_0(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_5(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_87 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_4(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_87 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold5_12_p_3(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word V_30_87 = (MR_Word) S_14;

    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold5_12_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_87 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_2(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set__fold5_12_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_87 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_1(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set__fold5_12_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word F_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word V_30_87 = (MR_Word) S_14;

    mercury__list__foldl5_12_p_0(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, V_30_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_5(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_54 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_4(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_54 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl4_10_p_3(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_54 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_2(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_54 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_54 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set__foldl4_10_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_54 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_5(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_72 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_4(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_72 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold4_10_p_3(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word V_25_72 = (MR_Word) S_12;

    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold4_10_p_2(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_72 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set__fold4_10_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_72 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set__fold4_10_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word F_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word V_25_72 = (MR_Word) S_12;

    mercury__list__foldl4_10_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, V_25_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_43 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_43 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl3_8_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_43 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_43 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_43 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set__foldl3_8_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_43 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_57 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_57 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold3_8_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word V_20_57 = (MR_Word) S_10;

    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold3_8_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_57 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set__fold3_8_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_57 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set__fold3_8_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word F_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word V_20_57 = (MR_Word) S_10;

    mercury__list__foldl3_8_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, V_20_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_5(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_32 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_32 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl2_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_32 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_32 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_2(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_32 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_1(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_32 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_0(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_5(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_42 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_42 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold2_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word V_15_42 = (MR_Word) S_8;

    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold2_6_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_42 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_2(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set__fold2_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_42 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_1(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set__fold2_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word F_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word V_15_42 = (MR_Word) S_8;

    mercury__list__foldl2_6_p_0(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, V_15_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_5(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_21 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_4(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_21 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__foldl_4_p_3(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_21 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__foldl_4_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_21 = (MR_Word) S_6;

    mercury__list__foldl_4_p_2(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set__foldl_4_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_21 = (MR_Word) S_6;

    mercury__list__foldl_4_p_1(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set__foldl_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_21 = (MR_Word) S_6;

    mercury__list__foldl_4_p_0(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_5(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_27 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_4(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_27 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__fold_4_p_3(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word V_10_27 = (MR_Word) S_6;

    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__fold_4_p_2(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_27 = (MR_Word) S_6;

    mercury__list__foldl_4_p_2(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set__fold_4_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_27 = (MR_Word) S_6;

    mercury__list__foldl_4_p_1(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set__fold_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word V_10_27 = (MR_Word) S_6;

    mercury__list__foldl_4_p_0(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, V_10_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

MR_Box MR_CALL 
mercury__set__foldl_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_A_9,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  {
    MR_Box HeadVar__4_4;
    MR_Word V_9_18 = (MR_Word) S_6;

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, V_9_18, A_7, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__set__fold_3_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_A_9,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  {
    MR_Box HeadVar__4_4;
    MR_Word V_9_21 = (MR_Word) S_6;

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, V_9_21, A_7, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_15_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      V_15_13 = func_0(((MR_Box) Var_18), V_10_9, HeadVar__3_3);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set__filter_map_2_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Word PF_4,
  MR_Word Set_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word V_7_11 = (MR_Word) Set_5;
    MR_Word V_8_12;
    MR_Word V_4_29;
    MR_Integer V_5_32;

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, V_7_11, &V_8_12);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_7, V_8_12, (MR_Integer) 0, &V_5_32);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_7, V_5_32, V_8_12, &V_4_29);
    HeadVar__3_3 = (MR_Word) V_4_29;
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_9_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));

      succeeded = func_0(((MR_Box) Var_16), V_6_6, &V_9_9);
      if (succeeded)
      {
        MR_Word V_10_10;

        mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(Var_16, V_7_7, &V_10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_9_9;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_10_10));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = V_7_7;

        // direct tailcall eliminated
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__set__filter_map_3_p_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word TypeInfo_for_T2_8,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TransformedTrueSet_6)
{
  {
    MR_Word V_7_12 = (MR_Word) Set_5;
    MR_Word V_8_13;
    MR_Word V_4_16;
    MR_Integer V_5_19;

    mercury__list__filter_map_3_p_0(TypeInfo_for_T1_7, TypeInfo_for_T2_8, P_4, V_7_12, &V_8_13);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_8, V_8_13, (MR_Integer) 0, &V_5_19);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_8, V_5_19, V_8_13, &V_4_16);
    *TransformedTrueSet_6 = (MR_Word) V_4_16;
  }
}

void MR_CALL 
mercury__set__filter_4_p_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  {
    MR_Word V_9_14 = (MR_Word) Set_6;
    MR_Word V_10_15;
    MR_Word V_11_16;
    MR_Word V_4_21;
    MR_Word V_4_26;

    mercury__list__filter_4_p_0(TypeInfo_for_T1_9, P_5, V_9_14, &V_10_15, &V_11_16);
    if ((V_10_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_22 = (MR_hl_field(MR_mktag(1), V_10_15, (MR_Integer) 0));
      MR_Word V_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_10_15, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, V_3_22, V_4_23, &V_4_21);
    }
    *TrueSet_7 = (MR_Word) V_4_21;
    if ((V_11_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_27 = (MR_hl_field(MR_mktag(1), V_11_16, (MR_Integer) 0));
      MR_Word V_4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_11_16, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, V_3_27, V_4_28, &V_4_26);
    }
    *FalseSet_8 = (MR_Word) V_4_26;
  }
}

void MR_CALL 
mercury__set__filter_3_p_0(
  MR_Word TypeInfo_for_T1_7,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TrueSet_6)
{
  {
    MR_Word V_7_14 = (MR_Word) Set_5;
    MR_Word V_8_15;
    MR_Word V_4_20;

    mercury__list__filter_3_p_0(TypeInfo_for_T1_7, P_4, V_7_14, &V_8_15);
    if ((V_8_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_21 = (MR_hl_field(MR_mktag(1), V_8_15, (MR_Integer) 0));
      MR_Word V_4_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_15, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_7, V_3_21, V_4_22, &V_4_20);
    }
    *TrueSet_6 = (MR_Word) V_4_20;
  }
}

MR_Word MR_CALL 
mercury__set__filter_2_f_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word P_4,
  MR_Word Set_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word V_7_10 = (MR_Word) Set_5;
    MR_Word V_8_11;
    MR_Word V_4_16;

    mercury__list__filter_3_p_0(TypeInfo_for_T1_6, P_4, V_7_10, &V_8_11);
    if ((V_8_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_17 = (MR_hl_field(MR_mktag(1), V_8_11, (MR_Integer) 0));
      MR_Word V_4_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_11, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_6, V_3_17, V_4_18, &V_4_16);
    }
    HeadVar__3_3 = (MR_Word) V_4_16;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_5(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_bool succeeded;
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;
    MR_Integer V_5_34;

    succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      V_5_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, V_5_34, &V_5_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
      *S_8 = (MR_Word) V_4_26;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_4(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_bool succeeded;
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;
    MR_Integer V_5_34;

    succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      V_5_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, V_5_34, &V_5_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
      *S_8 = (MR_Word) V_4_26;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__map_fold_5_p_3(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_bool succeeded;
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;
    MR_Integer V_5_34;

    succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      V_5_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, V_5_34, &V_5_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
      *S_8 = (MR_Word) V_4_26;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_2(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;

    mercury__list__map_foldl_5_p_2(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &V_5_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
    *S_8 = (MR_Word) V_4_26;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_1(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;

    mercury__list__map_foldl_5_p_1(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &V_5_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
    *S_8 = (MR_Word) V_4_26;
  }
}

void MR_CALL 
mercury__set__map_fold_5_p_0(
  MR_Word TypeInfo_for_T1_13,
  MR_Word TypeInfo_for_T2_14,
  MR_Word TypeInfo_for_T3_15,
  MR_Word P_6,
  MR_Word S0_7,
  MR_Word * S_8,
  MR_Box A0_9,
  MR_Box * A_10)
{
  {
    MR_Word L0_11 = (MR_Word) S0_7;
    MR_Word L_12;
    MR_Word V_4_26;
    MR_Integer V_5_29;

    mercury__list__map_foldl_5_p_0(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &V_5_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, V_5_29, L_12, &V_4_26);
    *S_8 = (MR_Word) V_4_26;
  }
}

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_4_env_0_s * env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25 = (MR_Integer) 0;
    mercury__list__length_acc_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25, &(env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17);
    *((env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) (env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17;
    ((env_ptr)->mercury__set__map_3_p_4_env_0__cont)((env_ptr)->mercury__set__map_3_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__set__map_3_p_4(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__set__map_3_p_4_env_0_s env;

    (env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10 = TypeInfo_for_T2_10;
    (env).mercury__set__map_3_p_4_env_0__S2_6 = S2_6;
    (env).mercury__set__map_3_p_4_env_0__cont = cont;
    (env).mercury__set__map_3_p_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word L1_7 = (MR_Word) S1_5;

      mercury__list__map_3_p_4(TypeInfo_for_T1_9, (env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, P_4, L1_7, &(env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &env);
    }
  }
}

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_3_env_0_s * env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25 = (MR_Integer) 0;
    mercury__list__length_acc_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25, &(env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17);
    *((env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) (env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17;
    ((env_ptr)->mercury__set__map_3_p_3_env_0__cont)((env_ptr)->mercury__set__map_3_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__set__map_3_p_3(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__set__map_3_p_3_env_0_s env;

    (env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10 = TypeInfo_for_T2_10;
    (env).mercury__set__map_3_p_3_env_0__S2_6 = S2_6;
    (env).mercury__set__map_3_p_3_env_0__cont = cont;
    (env).mercury__set__map_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word L1_7 = (MR_Word) S1_5;

      mercury__list__map_3_p_3(TypeInfo_for_T1_9, (env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, P_4, L1_7, &(env).mercury__set__map_3_p_3_env_0__L2_8, mercury__set__map_3_p_3_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__set__map_3_p_2(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  {
    MR_bool succeeded;
    MR_Word L1_7 = (MR_Word) S1_5;
    MR_Word L2_8;
    MR_Word V_4_17;
    MR_Integer V_5_20;
    MR_Integer V_5_25;

    succeeded = mercury__list__map_3_p_2(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    if (succeeded)
    {
      V_5_25 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, V_5_25, &V_5_20);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, V_5_20, L2_8, &V_4_17);
      *S2_6 = (MR_Word) V_4_17;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__map_3_p_1(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  {
    MR_Word L1_7 = (MR_Word) S1_5;
    MR_Word L2_8;
    MR_Word V_4_17;
    MR_Integer V_5_20;

    mercury__list__map_3_p_1(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, V_5_20, L2_8, &V_4_17);
    *S2_6 = (MR_Word) V_4_17;
  }
}

void MR_CALL 
mercury__set__map_3_p_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word P_4,
  MR_Word S1_5,
  MR_Word * S2_6)
{
  {
    MR_Word L1_7 = (MR_Word) S1_5;
    MR_Word L2_8;
    MR_Word V_4_17;
    MR_Integer V_5_20;

    mercury__list__map_3_p_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Integer) 0, &V_5_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, V_5_20, L2_8, &V_4_17);
    *S2_6 = (MR_Word) V_4_17;
  }
}

MR_Word MR_CALL 
mercury__set__map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word F_4,
  MR_Word Set_5)
{
  {
    MR_Word TransformedSet_6;
    MR_Word List_7 = (MR_Word) Set_5;
    MR_Word TransformedList_8;
    MR_Word V_4_21;
    MR_Integer V_5_24;

    TransformedList_8 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, List_7);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, TransformedList_8, (MR_Integer) 0, &V_5_24);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, V_5_24, TransformedList_8, &V_4_21);
    TransformedSet_6 = (MR_Word) V_4_21;
    return TransformedSet_6;
  }
}

void MR_CALL 
mercury__set__count_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Integer * Count_4)
{
  {
    MR_Word V_3_7 = (MR_Word) Set_3;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, V_3_7, (MR_Integer) 0, Count_4);
  }
}

MR_Integer MR_CALL 
mercury__set__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  {
    MR_Integer N_4;
    MR_Word V_3_9 = (MR_Word) S_3;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, V_3_9, (MR_Integer) 0, &N_4);
    return N_4;
  }
}

void MR_CALL 
mercury__set__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_8 = (MR_Word) SetA_4;
    MR_Word V_5_9 = (MR_Word) SetB_5;
    MR_Word V_6_10;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, V_4_8, V_5_9, &V_6_10);
    *Set_6 = (MR_Word) V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_11 = (MR_Word) S1_4;
    MR_Word V_5_12 = (MR_Word) S2_5;
    MR_Word V_6_13;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, V_4_11, V_5_12, &V_6_13);
    S3_6 = (MR_Word) V_6_13;
    return S3_6;
  }
}

MR_Word MR_CALL 
mercury__set__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_4, Sets_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_3_7 = (MR_Word) Sets_3;

    *Set_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, V_3_7);
  }
}

MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;
    MR_Word V_3_9 = (MR_Word) SS_3;

    S_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, V_3_9);
    return S_4;
  }
}

void MR_CALL 
mercury__set__intersect_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_8 = (MR_Word) SetA_4;
    MR_Word V_5_9 = (MR_Word) SetB_5;
    MR_Word V_6_10;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, V_4_8, V_5_9, &V_6_10);
    *Set_6 = (MR_Word) V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_11 = (MR_Word) S1_4;
    MR_Word V_5_12 = (MR_Word) S2_5;
    MR_Word V_6_13;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, V_4_11, V_5_12, &V_6_13);
    S3_6 = (MR_Word) V_6_13;
    return S3_6;
  }
}

void MR_CALL 
mercury__set__power_union_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_3_7 = (MR_Word) Sets_3;
    MR_Word V_5_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_ordlist__power_union_2_3_p_0(TypeInfo_for_T_5, V_3_7, V_5_10, Set_4);
  }
}

MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;
    MR_Word V_3_9 = (MR_Word) SS_3;
    MR_Word V_5_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_ordlist__power_union_2_3_p_0(TypeInfo_for_T_5, V_3_9, V_5_12, &S_4);
    return S_4;
  }
}

MR_Word MR_CALL 
mercury__set__union_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Sets_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word V_5_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_ordlist__power_union_2_3_p_0(TypeInfo_for_T_4, Sets_3, V_5_7, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word V_4_8 = (MR_Word) SetA_4;
    MR_Word V_5_9 = (MR_Word) SetB_5;
    MR_Word V_6_10;

    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, V_4_8, V_5_9, &V_6_10);
    *Set_6 = (MR_Word) V_6_10;
  }
}

MR_Word MR_CALL 
mercury__set__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word V_4_11 = (MR_Word) S1_4;
    MR_Word V_5_12 = (MR_Word) S2_5;
    MR_Word V_6_13;

    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, V_4_11, V_5_12, &V_6_13);
    S3_6 = (MR_Word) V_6_13;
    return S3_6;
  }
}

MR_bool MR_CALL 
mercury__set__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box * X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word V_6_11 = (MR_Word) STATE_VARIABLE_Set_0_6;
    MR_Word V_5_12;

    succeeded = ((MR_tag((MR_Word) V_6_11)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *X_4 = (MR_hl_field(MR_mktag(1), V_6_11, (MR_Integer) 0));
      V_5_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_6_11, (MR_Integer) 1)));
      *STATE_VARIABLE_Set_7 = (MR_Word) V_5_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word V_6_13;
    MR_Word V_4_17;
    MR_Word V_6_19;
    MR_Word V_4_20;
    MR_Word V_5_21;
    MR_Word V_6_22;

    succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_for_T_9, List_4, &V_6_13);
    if (succeeded)
    {
      V_4_17 = (MR_Word) STATE_VARIABLE_Set_0_6;
      V_6_19 = (MR_Word) V_6_13;
      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_9, V_4_17, V_6_19, V_6_19);
      if (succeeded)
      {
        V_4_20 = (MR_Word) STATE_VARIABLE_Set_0_6;
        V_5_21 = (MR_Word) V_6_13;
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, V_4_20, V_5_21, &V_6_22);
        *STATE_VARIABLE_Set_7 = (MR_Word) V_6_22;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__remove_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word V_5_11 = (MR_Word) STATE_VARIABLE_Set_0_6;
    MR_Word V_6_12;

    succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_9, V_5_11, X_4, &V_6_12);
    if (succeeded)
    {
      *STATE_VARIABLE_Set_7 = (MR_Word) V_6_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set__delete_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  {
    MR_Word S2_6;

    mercury__set__delete_list_3_p_0(TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__set__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Integer V_5_18;
    MR_Word V_4_24;
    MR_Word V_5_25;
    MR_Word V_6_26;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, List_4, (MR_Integer) 0, &V_5_18);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_9, V_5_18, List_4, &V_5_25);
    V_4_24 = (MR_Word) STATE_VARIABLE_Set_0_6;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, V_4_24, V_5_25, &V_6_26);
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_26;
  }
}

void MR_CALL 
mercury__set__delete_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Word V_11_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_4_17;
    MR_Word V_5_18;
    MR_Word V_6_19;

    {
      V_5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_18, 0) = X_4;
      MR_hl_field(MR_mktag(1), V_5_18, 1) = ((MR_Box) (V_11_16));
    }
    V_4_17 = (MR_Word) STATE_VARIABLE_Set_0_6;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, V_4_17, V_5_18, &V_6_19);
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_19;
  }
}

MR_Word MR_CALL 
mercury__set__delete_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Box T_5)
{
  {
    MR_Word S2_6;
    MR_Word V_11_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_4_20;
    MR_Word V_5_21;
    MR_Word V_6_22;

    {
      V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_21, 0) = T_5;
      MR_hl_field(MR_mktag(1), V_5_21, 1) = ((MR_Box) (V_11_19));
    }
    V_4_20 = (MR_Word) S1_4;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, V_4_20, V_5_21, &V_6_22);
    S2_6 = (MR_Word) V_6_22;
    return S2_6;
  }
}

MR_Word MR_CALL 
mercury__set__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  {
    MR_Word S2_6;

    mercury__set__insert_list_3_p_0(TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__set__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Integer V_5_18;
    MR_Word V_4_24;
    MR_Word V_5_25;
    MR_Word V_6_26;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, List_4, (MR_Integer) 0, &V_5_18);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_9, V_5_18, List_4, &V_4_24);
    V_5_25 = (MR_Word) STATE_VARIABLE_Set_0_6;
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_9, V_4_24, V_5_25, &V_6_26);
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_26;
  }
}

MR_bool MR_CALL 
mercury__set__insert_new_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word V_5_11 = (MR_Word) STATE_VARIABLE_Set_0_6;
    MR_Word V_6_12;

    succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_for_T_9, V_5_11, X_4, &V_6_12);
    if (succeeded)
    {
      *STATE_VARIABLE_Set_7 = (MR_Word) V_6_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__insert_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Word V_5_11 = (MR_Word) STATE_VARIABLE_Set_0_6;
    MR_Word V_6_12;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_9, V_5_11, X_4, &V_6_12);
    *STATE_VARIABLE_Set_7 = (MR_Word) V_6_12;
  }
}

MR_Word MR_CALL 
mercury__set__insert_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Box T_5)
{
  {
    MR_Word S2_6;
    MR_Word V_5_14 = (MR_Word) S1_4;
    MR_Word V_6_15;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, V_5_14, T_5, &V_6_15);
    S2_6 = (MR_Word) V_6_15;
    return S2_6;
  }
}

MR_bool MR_CALL 
mercury__set__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box X_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_for_T_5, X_4, Set_3);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box X_4,
  MR_Word Set_5,
  MR_Word * Result_6)
{
  {
    MR_Word V_5_10 = (MR_Word) Set_5;

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_7, X_4, V_5_10, Result_6);
  }
}

void MR_CALL 
mercury__set__member_2_p_1(
  MR_Word TypeInfo_for_T_8,
  MR_Box * X_1,
  MR_Word Set_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__set_ordlist__member_2_p_1(TypeInfo_for_T_8, X_1, Set_2, cont, cont_env_ptr);
}

MR_bool MR_CALL 
mercury__set__member_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_1,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word V_5_12 = (MR_Word) Set_2;

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, X_1, V_5_12, &Var_9);
    succeeded = ((MR_Integer) 1 == Var_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__superset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;
    MR_Word V_4_11 = (MR_Word) SetA_3;
    MR_Word V_6_13 = (MR_Word) SetB_4;

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_5, V_4_11, V_6_13, V_6_13);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__subset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;
    MR_Word V_4_9 = (MR_Word) SetB_4;
    MR_Word V_6_11 = (MR_Word) SetA_3;

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_5, V_4_9, V_6_11, V_6_11);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word V_4_4 = (MR_Word) Set_2;
    MR_Box V_2_5;
    MR_Word V_3_6;

    succeeded = ((MR_tag((MR_Word) V_4_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      V_2_5 = (MR_hl_field(MR_mktag(1), V_4_4, (MR_Integer) 0));
      V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_4, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__non_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word V_4_4 = (MR_Word) Set_2;
    MR_Box V_2_5;
    MR_Word V_3_6;

    succeeded = ((MR_tag((MR_Word) V_4_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      V_2_5 = (MR_hl_field(MR_mktag(1), V_4_4, (MR_Integer) 0));
      V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_4, (MR_Integer) 1)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4 = (MR_Word) Set_2;

    succeeded = (V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Set_2)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4 = (MR_Word) Set_2;

    succeeded = (V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__equal_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_5, SetB_4, SetA_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box * X_4)
{
  {
    MR_bool succeeded;
    MR_Word V_4_7 = (MR_Word) Set_3;
    MR_Word V_5_8;

    succeeded = ((MR_tag((MR_Word) V_4_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *X_4 = (MR_hl_field(MR_mktag(1), V_4_7, (MR_Integer) 0));
      V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_7, (MR_Integer) 1)));
      succeeded = (V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set__make_singleton_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box T_3)
{
  {
    MR_Word S_4;
    MR_Word V_4_9;
    MR_Word V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      V_4_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_4_9, 0) = T_3;
      MR_hl_field(MR_mktag(1), V_4_9, 1) = ((MR_Box) (V_5_10));
    }
    S_4 = (MR_Word) V_4_9;
    return S_4;
  }
}

MR_bool MR_CALL 
mercury__set__singleton_set_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Box * X_3,
  MR_Word Set_4)
{
  {
    MR_bool succeeded;
    MR_Word V_4_7 = (MR_Word) Set_4;
    MR_Word V_5_8;

    succeeded = ((MR_tag((MR_Word) V_4_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *X_3 = (MR_hl_field(MR_mktag(1), V_4_7, (MR_Integer) 0));
      V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_7, (MR_Integer) 1)));
      succeeded = (V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__singleton_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_4_7;
    MR_Word V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      V_4_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_4_7, 0) = X_3;
      MR_hl_field(MR_mktag(1), V_4_7, 1) = ((MR_Box) (V_5_8));
    }
    *Set_4 = (MR_Word) V_4_7;
  }
}

MR_Word MR_CALL 
mercury__set__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  {
    MR_Word Xs_4 = (MR_Word) S_3;

    return Xs_4;
  }
}

void MR_CALL 
mercury__set__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * List_4)
{
  *List_4 = (MR_Word) Set_3;
}

MR_Word MR_CALL 
mercury__set__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word V_4_8;

    if ((List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_9 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word V_4_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_4, V_3_9, V_4_10, &V_4_8);
    }
    HeadVar__2_2 = (MR_Word) V_4_8;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4;
    MR_Word V_4_9;

    if ((Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_10 = (MR_hl_field(MR_mktag(1), Xs_3, (MR_Integer) 0));
      MR_Word V_4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Xs_3, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, V_3_10, V_4_11, &V_4_9);
    }
    S_4 = (MR_Word) V_4_9;
    return S_4;
  }
}

void MR_CALL 
mercury__set__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_4_7;

    if ((List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_8 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, V_3_8, V_4_9, &V_4_7);
    }
    *Set_4 = (MR_Word) V_4_7;
  }
}

MR_Word MR_CALL 
mercury__set__set_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word V_4_8;
    MR_Integer V_5_11;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_4, List_3, (MR_Integer) 0, &V_5_11);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_4, V_5_11, List_3, &V_4_8);
    HeadVar__2_2 = (MR_Word) V_4_8;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__from_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word V_4_8;
    MR_Integer V_5_11;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_4, List_3, (MR_Integer) 0, &V_5_11);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_4, V_5_11, List_3, &V_4_8);
    HeadVar__2_2 = (MR_Word) V_4_8;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4;
    MR_Word V_4_9;
    MR_Integer V_5_12;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Xs_3, (MR_Integer) 0, &V_5_12);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, V_5_12, Xs_3, &V_4_9);
    S_4 = (MR_Word) V_4_9;
    return S_4;
  }
}

void MR_CALL 
mercury__set__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word V_4_7;
    MR_Integer V_5_10;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &V_5_10);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, V_5_10, List_3, &V_4_7);
    *Set_4 = (MR_Word) V_4_7;
  }
}

void MR_CALL 
mercury__set__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * Set_2)
{
  {
    MR_Word V_2_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *Set_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

MR_Word MR_CALL 
mercury__set__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_Word S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return S_2;
  }
}

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set____Unify____set_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__set____Compare____set_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module set.
