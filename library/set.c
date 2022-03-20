/*
** Automatically generated from `set.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-20
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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
  MR_Word mercury__set__map_3_p_4_env_0__Var_17;
  MR_Integer mercury__set__map_3_p_4_env_0__Var_20;
  MR_Integer mercury__set__map_3_p_4_env_0__Var_25;
};

struct mercury__set__map_3_p_3_env_0_s {
  MR_Word mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10;
  MR_Word * mercury__set__map_3_p_3_env_0__S2_6;
  MR_Cont mercury__set__map_3_p_3_env_0__cont;
  void * mercury__set__map_3_p_3_env_0__cont_env_ptr;
  MR_Word mercury__set__map_3_p_3_env_0__L2_8;
  MR_Word mercury__set__map_3_p_3_env_0__Var_17;
  MR_Integer mercury__set__map_3_p_3_env_0__Var_20;
  MR_Integer mercury__set__map_3_p_3_env_0__Var_25;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1;

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__set__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_32);

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
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__set__set__type_ctor_info_set_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__set____Unify____set_1_0_10001)),
  ((MR_Box) (mercury__set____Compare____set_1_0_10001)),
  (MR_String) "set",
  (MR_String) "set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word S_4;
    MR_Word Var_12;
    MR_Integer Var_16;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (List_3), (MR_Integer) 0, &Var_16);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, Var_16, List_3, &Var_12);
    S_4 = (MR_Word) (Var_12);
    return S_4;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
  MR_Word Var_7,
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_9;
    MR_Integer Var_13;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, (MR_Word) (List_3), (MR_Integer) 0, &Var_13);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_7, TypeInfo_for_T_5, Var_13, List_3, &Var_9);
    *Set_4 = (MR_Word) (Var_9);
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
    MR_Word Var_14 = (MR_Word) (Set_2);

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, ((MR_Box) (X_1)), (MR_Word) (Var_14), &Var_9);
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

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word T_5)
{
  {
    MR_Word S2_6;
    MR_Word Var_17 = (MR_Word) (S1_4);
    MR_Word Var_18;
    MR_Word conv0_Var_18;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_17), ((MR_Box) (T_5)), &conv0_Var_18);
    Var_18 = (MR_Word) (conv0_Var_18);
    S2_6 = (MR_Word) (Var_18);
    return S2_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_9,
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Word Var_13 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_14;
    MR_Word conv0_Var_14;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_9, (MR_Word) (Var_13), ((MR_Box) (X_4)), &conv0_Var_14);
    Var_14 = (MR_Word) (conv0_Var_14);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_14);
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word Xs_5)
{
  {
    MR_Word S2_6;

    mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Xs_5, S1_4, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_T_9,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Word Var_15;
    MR_Integer Var_21;
    MR_Word Var_29;
    MR_Word Var_30;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, (MR_Word) (List_4), (MR_Integer) 0, &Var_21);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_T_9, Var_21, List_4, &Var_15);
    Var_29 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_T_9, Var_15, Var_29, &Var_30);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_30);
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word Var_14 = (MR_Word) (S1_4);
    MR_Word Var_15 = (MR_Word) (S2_5);
    MR_Word Var_16;

    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Var_14, Var_15, &Var_16);
    S3_6 = (MR_Word) (Var_16);
    return S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_10 = (MR_Word) (SetA_4);
    MR_Word Var_11 = (MR_Word) (SetB_5);
    MR_Word Var_12;

    mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_T_7, Var_10, Var_11, &Var_12);
    *Set_6 = (MR_Word) (Var_12);
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word Var_14 = (MR_Word) (S1_4);
    MR_Word Var_15 = (MR_Word) (S2_5);
    MR_Word Var_16;
    MR_Word conv0_Var_16;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_14), (MR_Word) (Var_15), &conv0_Var_16);
    Var_16 = (MR_Word) (conv0_Var_16);
    S3_6 = (MR_Word) (Var_16);
    return S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_10 = (MR_Word) (SetA_4);
    MR_Word Var_11 = (MR_Word) (SetB_5);
    MR_Word Var_12;
    MR_Word conv0_Var_12;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_10), (MR_Word) (Var_11), &conv0_Var_12);
    Var_12 = (MR_Word) (conv0_Var_12);
    *Set_6 = (MR_Word) (Var_12);
  }
}

MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;
    MR_Word Var_14 = (MR_Word) (S1_4);
    MR_Word Var_15 = (MR_Word) (S2_5);
    MR_Word Var_16;
    MR_Word conv0_Var_16;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_14), (MR_Word) (Var_15), &conv0_Var_16);
    Var_16 = (MR_Word) (conv0_Var_16);
    S3_6 = (MR_Word) (Var_16);
    return S3_6;
  }
}

void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_10 = (MR_Word) (SetA_4);
    MR_Word Var_11 = (MR_Word) (SetB_5);
    MR_Word Var_12;
    MR_Word conv0_Var_12;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, (MR_Word) (Var_10), (MR_Word) (Var_11), &conv0_Var_12);
    Var_12 = (MR_Word) (conv0_Var_12);
    *Set_6 = (MR_Word) (Var_12);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_2(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_1(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_75 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_0(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_75, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_2(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_1(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_100 = (MR_Word) (S_16);

    mercury__list__foldl6_14_p_0(TypeInfo_for_T_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, TypeInfo_for_D_44, TypeInfo_for_E_45, TypeInfo_for_F_46, F_15, Var_100, STATE_VARIABLE_A_0_22, STATE_VARIABLE_A_23, STATE_VARIABLE_B_0_24, STATE_VARIABLE_B_25, STATE_VARIABLE_C_0_26, STATE_VARIABLE_C_27, STATE_VARIABLE_D_0_28, STATE_VARIABLE_D_29, STATE_VARIABLE_E_0_30, STATE_VARIABLE_E_31, STATE_VARIABLE_F_0_32, STATE_VARIABLE_F_33);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_2(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_1(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_65 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_0(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_65, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_2(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_1(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_87 = (MR_Word) (S_14);

    mercury__list__foldl5_12_p_0(TypeInfo_for_T_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, F_13, Var_87, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_54 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_54, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_72 = (MR_Word) (S_12);

    mercury__list__foldl4_10_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, F_11, Var_72, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_43 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_43, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_57 = (MR_Word) (S_10);

    mercury__list__foldl3_8_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, F_9, Var_57, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_2(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_1(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_32 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_0(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_32, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_2(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_1(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_42 = (MR_Word) (S_8);

    mercury__list__foldl2_6_p_0(TypeInfo_for_T_17, TypeInfo_for_A_18, TypeInfo_for_B_19, F_7, Var_42, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_2(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_1(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_0(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_21, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_2(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_1(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_27 = (MR_Word) (S_6);

    mercury__list__foldl_4_p_0(TypeInfo_for_T_11, TypeInfo_for_A_12, F_5, Var_27, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
    MR_Word Var_18 = (MR_Word) (S_6);

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, Var_18, A_7, &HeadVar__4_4);
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
    MR_Word Var_21 = (MR_Word) (S_6);

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, Var_21, A_7, &HeadVar__4_4);
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      Var_13 = func_0(((MR_Box) (Var_18)), Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;
    MR_Integer Var_34;

    succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      Var_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, Var_34, &Var_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
      *S_8 = (MR_Word) (Var_26);
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;
    MR_Integer Var_34;

    succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      Var_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, Var_34, &Var_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
      *S_8 = (MR_Word) (Var_26);
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;
    MR_Integer Var_34;

    succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    if (succeeded)
    {
      Var_34 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, Var_34, &Var_29);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
      *S_8 = (MR_Word) (Var_26);
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;

    mercury__list__map_foldl_5_p_2(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &Var_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
    *S_8 = (MR_Word) (Var_26);
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;

    mercury__list__map_foldl_5_p_1(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &Var_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
    *S_8 = (MR_Word) (Var_26);
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
    MR_Word L0_11 = (MR_Word) (S0_7);
    MR_Word L_12;
    MR_Word Var_26;
    MR_Integer Var_29;

    mercury__list__map_foldl_5_p_0(TypeInfo_for_T1_13, TypeInfo_for_T2_14, TypeInfo_for_T3_15, P_6, L0_11, &L_12, A0_9, A_10);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_14, L_12, (MR_Integer) 0, &Var_29);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_14, Var_29, L_12, &Var_26);
    *S_8 = (MR_Word) (Var_26);
  }
}

static void MR_CALL 
mercury__set__map_3_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_4_env_0_s * env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__set__map_3_p_4_env_0__Var_25 = (MR_Integer) 0;
    mercury__list__length_acc_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_4_env_0__Var_25, &(env_ptr)->mercury__set__map_3_p_4_env_0__Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_4_env_0__Var_20, (env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_4_env_0__Var_17);
    *((env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) ((env_ptr)->mercury__set__map_3_p_4_env_0__Var_17);
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
      MR_Word L1_7 = (MR_Word) (S1_5);

      mercury__list__map_3_p_4(TypeInfo_for_T1_9, (env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, P_4, L1_7, &(env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &env);
    }
  }
}

static void MR_CALL 
mercury__set__map_3_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__set__map_3_p_3_env_0_s * env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__set__map_3_p_3_env_0__Var_25 = (MR_Integer) 0;
    mercury__list__length_acc_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (env_ptr)->mercury__set__map_3_p_3_env_0__Var_25, &(env_ptr)->mercury__set__map_3_p_3_env_0__Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0((env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (env_ptr)->mercury__set__map_3_p_3_env_0__Var_20, (env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(env_ptr)->mercury__set__map_3_p_3_env_0__Var_17);
    *((env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) ((env_ptr)->mercury__set__map_3_p_3_env_0__Var_17);
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
      MR_Word L1_7 = (MR_Word) (S1_5);

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
    MR_Word L1_7 = (MR_Word) (S1_5);
    MR_Word L2_8;
    MR_Word Var_17;
    MR_Integer Var_20;
    MR_Integer Var_25;

    succeeded = mercury__list__map_3_p_2(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    if (succeeded)
    {
      Var_25 = (MR_Integer) 0;
      mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, Var_25, &Var_20);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_20, L2_8, &Var_17);
      *S2_6 = (MR_Word) (Var_17);
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
    MR_Word L1_7 = (MR_Word) (S1_5);
    MR_Word L2_8;
    MR_Word Var_17;
    MR_Integer Var_20;

    mercury__list__map_3_p_1(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Integer) 0, &Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_20, L2_8, &Var_17);
    *S2_6 = (MR_Word) (Var_17);
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
    MR_Word L1_7 = (MR_Word) (S1_5);
    MR_Word L2_8;
    MR_Word Var_17;
    MR_Integer Var_20;

    mercury__list__map_3_p_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, P_4, L1_7, &L2_8);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, L2_8, (MR_Integer) 0, &Var_20);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_20, L2_8, &Var_17);
    *S2_6 = (MR_Word) (Var_17);
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
    MR_Word List_7 = (MR_Word) (Set_5);
    MR_Word TransformedList_8;
    MR_Word Var_21;
    MR_Integer Var_24;

    TransformedList_8 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, List_7);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_10, TransformedList_8, (MR_Integer) 0, &Var_24);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_10, Var_24, TransformedList_8, &Var_21);
    TransformedSet_6 = (MR_Word) (Var_21);
    return TransformedSet_6;
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
    MR_Word Var_12 = (MR_Word) (Set_5);
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Integer Var_19;

    mercury__list__filter_map_3_p_0(TypeInfo_for_T1_7, TypeInfo_for_T2_8, P_4, Var_12, &Var_13);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_8, Var_13, (MR_Integer) 0, &Var_19);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_8, Var_19, Var_13, &Var_16);
    *TransformedTrueSet_6 = (MR_Word) (Var_16);
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
    MR_Word Var_11 = (MR_Word) (Set_5);
    MR_Word Var_12;
    MR_Word Var_29;
    MR_Integer Var_32;

    mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, Var_11, &Var_12);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T2_7, Var_12, (MR_Integer) 0, &Var_32);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T2_7, Var_32, Var_12, &Var_29);
    HeadVar__3_3 = (MR_Word) (Var_29);
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_16)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg10_31;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_9;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg10_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__set__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(Var_16, Var_7, AddrSCCcallarg10_31);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__set__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_32 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_16)), Var_6, &Var_9);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg10_31;
        MR_Word HeadVar__3_33;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_32;

        {
          HeadVar__3_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_33, 0) = Var_9;
          MR_hl_field(MR_mktag(1), HeadVar__3_33, 1) = NULL;
        }
        AddrSCCcallarg10_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_33, (MR_Integer) 1)));
        *AddrOfHeadVar__3_32 = HeadVar__3_33;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_32 = AddrSCCcallarg10_31;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_32 = next_value_of_AddrOfHeadVar__3_32;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
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
    MR_Word Var_14 = (MR_Word) (Set_6);
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_21;
    MR_Word Var_26;

    mercury__list__filter_4_p_0(TypeInfo_for_T1_9, P_5, Var_14, &Var_15, &Var_16);
    if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_22 = (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, Var_22, Var_23, &Var_21);
    }
    *TrueSet_7 = (MR_Word) (Var_21);
    if ((Var_16 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_26 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_27 = (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_9, Var_27, Var_28, &Var_26);
    }
    *FalseSet_8 = (MR_Word) (Var_26);
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
    MR_Word Var_14 = (MR_Word) (Set_5);
    MR_Word Var_15;
    MR_Word Var_20;

    mercury__list__filter_3_p_0(TypeInfo_for_T1_7, P_4, Var_14, &Var_15);
    if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_21 = (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_7, Var_21, Var_22, &Var_20);
    }
    *TrueSet_6 = (MR_Word) (Var_20);
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
    MR_Word Var_10 = (MR_Word) (Set_5);
    MR_Word Var_11;
    MR_Word Var_16;

    mercury__list__filter_3_p_0(TypeInfo_for_T1_6, P_4, Var_10, &Var_11);
    if ((Var_11 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_17 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T1_6, Var_17, Var_18, &Var_16);
    }
    HeadVar__3_3 = (MR_Word) (Var_16);
    return HeadVar__3_3;
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
    MR_Word Var_7 = (MR_Word) (S_4);

    succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_5, P_3, Var_7);
    return succeeded;
  }
}

void MR_CALL 
mercury__set__count_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Integer * Count_4)
{
  {
    MR_Word Var_7 = (MR_Word) (Set_3);

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Var_7, (MR_Integer) 0, Count_4);
  }
}

MR_Integer MR_CALL 
mercury__set__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  {
    MR_Integer N_4;
    MR_Word Var_9 = (MR_Word) (S_3);

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, Var_9, (MR_Integer) 0, &N_4);
    return N_4;
  }
}

void MR_CALL 
mercury__set__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Word * List_4)
{
  *List_4 = (MR_Word) (Set_3);
}

MR_Word MR_CALL 
mercury__set__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  {
    MR_Word List_4 = (MR_Word) (Set_3);

    return List_4;
  }
}

MR_Word MR_CALL 
mercury__set__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_8;

    if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_4, Var_9, Var_10, &Var_8);
    }
    HeadVar__2_2 = (MR_Word) (Var_8);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__rev_sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_7;

    mercury__list__reverse_2_p_0(TypeInfo_for_T_5, List_3, &Var_7);
    *Set_4 = (MR_Word) (Var_7);
  }
}

MR_Word MR_CALL 
mercury__set__rev_sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;
    MR_Word Var_7;

    mercury__list__reverse_2_p_0(TypeInfo_for_T_5, List_3, &Var_7);
    Set_4 = (MR_Word) (Var_7);
    return Set_4;
  }
}

void MR_CALL 
mercury__set__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_7;

    if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_8 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_8, Var_9, &Var_7);
    }
    *Set_4 = (MR_Word) (Var_7);
  }
}

MR_Word MR_CALL 
mercury__set__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;
    MR_Word Var_9;

    if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_10 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_5, Var_10, Var_11, &Var_9);
    }
    Set_4 = (MR_Word) (Var_9);
    return Set_4;
  }
}

MR_Word MR_CALL 
mercury__set__set_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word List_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_8;
    MR_Integer Var_11;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_4, List_3, (MR_Integer) 0, &Var_11);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_4, Var_11, List_3, &Var_8);
    HeadVar__2_2 = (MR_Word) (Var_8);
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
    MR_Word Var_8;
    MR_Integer Var_11;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_4, List_3, (MR_Integer) 0, &Var_11);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_4, Var_11, List_3, &Var_8);
    HeadVar__2_2 = (MR_Word) (Var_8);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__set__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_7;
    MR_Integer Var_10;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &Var_10);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_10, List_3, &Var_7);
    *Set_4 = (MR_Word) (Var_7);
  }
}

MR_Word MR_CALL 
mercury__set__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word S_4;
    MR_Word Var_9;
    MR_Integer Var_12;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_5, List_3, (MR_Integer) 0, &Var_12);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_5, Var_12, List_3, &Var_9);
    S_4 = (MR_Word) (Var_9);
    return S_4;
  }
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
    MR_Word Var_11 = (MR_Word) (Set_6);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_for_T_9, P_5, Var_11, (MR_Word) ((MR_Unsigned) 0U), &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
    mercury__list__reverse_2_p_0(TypeInfo_for_T_9, Var_17, &Var_12);
    *TruePart_7 = (MR_Word) (Var_12);
    mercury__list__reverse_2_p_0(TypeInfo_for_T_9, Var_18, &Var_13);
    *FalsePart_8 = (MR_Word) (Var_13);
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
mercury__set__difference_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_8 = (MR_Word) (SetA_4);
    MR_Word Var_9 = (MR_Word) (SetB_5);
    MR_Word Var_10;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
    *Set_6 = (MR_Word) (Var_10);
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
    MR_Word Var_11 = (MR_Word) (S1_4);
    MR_Word Var_12 = (MR_Word) (S2_5);
    MR_Word Var_13;

    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_11, Var_12, &Var_13);
    S3_6 = (MR_Word) (Var_13);
    return S3_6;
  }
}

void MR_CALL 
mercury__set__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_7 = (MR_Word) (Sets_3);

    *Set_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, Var_7);
  }
}

MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;
    MR_Word Var_9 = (MR_Word) (SS_3);

    S_4 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_for_T_5, Var_9);
    return S_4;
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
mercury__set__intersect_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    MR_Word Var_8 = (MR_Word) (SetA_4);
    MR_Word Var_9 = (MR_Word) (SetB_5);
    MR_Word Var_10;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
    *Set_6 = (MR_Word) (Var_10);
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
    MR_Word Var_11 = (MR_Word) (S1_4);
    MR_Word Var_12 = (MR_Word) (S2_5);
    MR_Word Var_13;

    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_7, Var_11, Var_12, &Var_13);
    S3_6 = (MR_Word) (Var_13);
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
    MR_Word Var_7 = (MR_Word) (Sets_3);

    mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, Var_7, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Set_4);
  }
}

MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;
    MR_Word Var_9 = (MR_Word) (SS_3);

    mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_5, Var_9, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &S_4);
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

    mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_for_T_4, Sets_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &HeadVar__2_2);
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
    MR_Word Var_8 = (MR_Word) (SetA_4);
    MR_Word Var_9 = (MR_Word) (SetB_5);
    MR_Word Var_10;

    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_8, Var_9, &Var_10);
    *Set_6 = (MR_Word) (Var_10);
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
    MR_Word Var_11 = (MR_Word) (S1_4);
    MR_Word Var_12 = (MR_Word) (S2_5);
    MR_Word Var_13;

    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_11, Var_12, &Var_13);
    S3_6 = (MR_Word) (Var_13);
    return S3_6;
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
    MR_Word Var_11 = (MR_Word) (SetA_3);
    MR_Word Var_12 = (MR_Word) (SetB_4);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_5, Var_11, Var_12, Var_12);
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
    MR_Word Var_9 = (MR_Word) (SetB_4);
    MR_Word Var_10 = (MR_Word) (SetA_3);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_5, Var_9, Var_10, Var_10);
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
mercury__set__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box * X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_12;

    succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *X_4 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
      *STATE_VARIABLE_Set_7 = (MR_Word) (Var_12);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__det_remove_list_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Set_8_8;
    MR_Word Var_16;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_for_T_12, List_4, &Var_16);
    if (succeeded)
    {
      Var_20 = (MR_Word) (STATE_VARIABLE_Set_0_6);
      Var_21 = (MR_Word) (Var_16);
      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_12, Var_20, Var_21, Var_21);
      if (succeeded)
      {
        Var_23 = (MR_Word) (STATE_VARIABLE_Set_0_6);
        Var_24 = (MR_Word) (Var_16);
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_12, Var_23, Var_24, &Var_25);
        STATE_VARIABLE_Set_8_8 = (MR_Word) (Var_25);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_8_8;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140set.det_remove_list\'/3", (MR_String) "remove_list failed");
        return;
      }
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
    MR_Word Var_13;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_for_T_9, List_4, &Var_13);
    if (succeeded)
    {
      Var_17 = (MR_Word) (STATE_VARIABLE_Set_0_6);
      Var_18 = (MR_Word) (Var_13);
      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_9, Var_17, Var_18, Var_18);
      if (succeeded)
      {
        Var_20 = (MR_Word) (STATE_VARIABLE_Set_0_6);
        Var_21 = (MR_Word) (Var_13);
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, Var_20, Var_21, &Var_22);
        *STATE_VARIABLE_Set_7 = (MR_Word) (Var_22);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set__det_remove_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Set_8_8;
    MR_Word Var_14 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_15;

    succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_12, Var_14, X_4, &Var_15);
    if (succeeded)
    {
      STATE_VARIABLE_Set_8_8 = (MR_Word) (Var_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *STATE_VARIABLE_Set_7 = STATE_VARIABLE_Set_8_8;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140set.det_remove\'/3", (MR_String) "remove failed");
        return;
      }
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
    MR_Word Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_12;

    succeeded = mercury__list__delete_first_3_p_0(TypeInfo_for_T_9, Var_11, X_4, &Var_12);
    if (succeeded)
    {
      *STATE_VARIABLE_Set_7 = (MR_Word) (Var_12);
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
    MR_Word Var_13;
    MR_Integer Var_18;
    MR_Word Var_24;
    MR_Word Var_26;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, List_4, (MR_Integer) 0, &Var_18);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_9, Var_18, List_4, &Var_13);
    Var_24 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, Var_24, Var_13, &Var_26);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_26);
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
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_19;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = X_4;
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_17 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_9, Var_17, Var_14, &Var_19);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_19);
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
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_22;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = T_5;
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_20 = (MR_Word) (S1_4);
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_for_T_7, Var_20, Var_17, &Var_22);
    S2_6 = (MR_Word) (Var_22);
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
    MR_Word Var_13;
    MR_Integer Var_18;
    MR_Word Var_25;
    MR_Word Var_26;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_9, List_4, (MR_Integer) 0, &Var_18);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_9, Var_18, List_4, &Var_13);
    Var_25 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_T_9, Var_13, Var_25, &Var_26);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_26);
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
    MR_Word Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_12;

    succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_for_T_9, Var_11, X_4, &Var_12);
    if (succeeded)
    {
      *STATE_VARIABLE_Set_7 = (MR_Word) (Var_12);
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
    MR_Word Var_11 = (MR_Word) (STATE_VARIABLE_Set_0_6);
    MR_Word Var_12;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_9, Var_11, X_4, &Var_12);
    *STATE_VARIABLE_Set_7 = (MR_Word) (Var_12);
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
    MR_Word Var_14 = (MR_Word) (S1_4);
    MR_Word Var_15;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_T_7, Var_14, T_5, &Var_15);
    S2_6 = (MR_Word) (Var_15);
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
    MR_Word Var_10 = (MR_Word) (Set_5);

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_7, X_4, Var_10, Result_6);
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
    MR_Word Var_12 = (MR_Word) (Set_2);

    mercury__set_ordlist__is_member_loop_3_p_0(TypeInfo_for_T_8, X_1, Var_12, &Var_9);
    succeeded = ((MR_Integer) 1 == Var_9);
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
    MR_Word Var_7 = (MR_Word) (Set_3);
    MR_Word Var_8;

    succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *X_4 = (MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    }
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
    MR_Word Var_4 = (MR_Word) (Set_2);

    succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
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
    MR_Word Var_4 = (MR_Word) (Set_2);

    succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
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
    MR_Word Var_4 = (MR_Word) (Set_2);

    succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word Var_4 = (MR_Word) (Set_2);

    succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = T_3;
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    S_4 = (MR_Word) (Var_9);
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
    MR_Word Var_7 = (MR_Word) (Set_4);
    MR_Word Var_8;

    succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *X_3 = (MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = X_3;
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Set_4 = (MR_Word) (Var_7);
  }
}

void MR_CALL 
mercury__set__init_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * Set_2)
{
  *Set_2 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_Word MR_CALL 
mercury__set__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set____Unify____set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    mercury__set____Compare____set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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
