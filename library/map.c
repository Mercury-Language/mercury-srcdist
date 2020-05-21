/*
** Automatically generated from `map.m'
** by the Mercury compiler,
** version rotd-2020-05-21
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


// :- module map.
// :- implementation.

/*
INIT mercury__map__init
ENDINIT
*/

#include "map.mih"


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



struct mercury__map__inverse_search_3_p_0_env_0_s {
  MR_Word mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8;
  MR_Box mercury__map__inverse_search_3_p_0_env_0__V_5;
  MR_Cont mercury__map__inverse_search_3_p_0_env_0__cont;
  void * mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr;
  MR_bool mercury__map__inverse_search_3_p_0_env_0__succeeded;
  MR_Box mercury__map__inverse_search_3_p_0_env_0__Var_9;
};


static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2;

static MR_Integer MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1465__1_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word F_5,
  MR_Box LambdaHeadVar__1_14,
  MR_Box * LambdaHeadVar__2_15);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word Var_65,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_52,
  MR_Word TypeInfo_for_K_45,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_52,
  MR_Word TypeInfo_for_K_45,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_36,
  MR_Word TypeInfo_for_K_31,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_36,
  MR_Word TypeInfo_for_K_31,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPairs_0_3,
  MR_Word * STATE_VARIABLE_RevPairs_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__map_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__map_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__map_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__map_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__map_scalar_common_5[1][7];




static /* final */ const MR_Box mercury__map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__map_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__map_scalar_common_4[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__map_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__map____vpti_func_2__pseudo_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
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



static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

const MR_TypeCtorInfo_Struct mercury__map__map__type_ctor_info_map_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__map____Unify____map_2_0_10001)),
  ((MR_Box) (mercury__map____Compare____map_2_0_10001)),
  (MR_String) "map",
  (MR_String) "map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, Map_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, M_4, K_5, V_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Box VPrime_7;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_K_9, TypeInfo_for_V_10, Map_4, K_5, &VPrime_7);
    if (succeeded)
      *V_6 = VPrime_7;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
        return;
      }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Box VPrime_7;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_10, Map_4, K_5, &VPrime_7);
    if (succeeded)
      *V_6 = VPrime_7;
    else
      {
        mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Word K_5)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box VPrime_14;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, &VPrime_14);
    if (succeeded)
      V_6 = VPrime_14;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
    return V_6;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Integer K_5)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box VPrime_12;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, M_4, K_5, &VPrime_12);
    if (succeeded)
      V_6 = VPrime_12;
    else
      mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_14,
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;
    MR_Word conv0_STATE_VARIABLE_Map_9;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, ((MR_Box) (K_5)), V_6, (MR_Word) (STATE_VARIABLE_Map_0_8), &conv0_STATE_VARIABLE_Map_9);
    if (succeeded)
    {
      *STATE_VARIABLE_Map_9 = (MR_Word) (conv0_STATE_VARIABLE_Map_9);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_12, ((MR_Box) (K_5)), V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_17,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;
    MR_Word conv0_NewMap_8;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, ((MR_Box) (K_5)), V_6, (MR_Word) (STATE_VARIABLE_Map_0_9), &conv0_NewMap_8);
    if (succeeded)
    {
      NewMap_8 = (MR_Word) (conv0_NewMap_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (K_5)));
        return;
      }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_14, ((MR_Box) (K_5)), V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (K_5)));
        return;
      }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_14,
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_14, TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_12, ((MR_Box) (K_5)), V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_14,
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_14, TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_17,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_17, TypeInfo_for_K_13, TypeInfo_for_V_14, K_5, V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (K_5)));
        return;
      }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_V_14, K_5, V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (K_5)));
        return;
      }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_5_p_0(
  MR_Word Var_16,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  {
    MR_Word conv0_STATE_VARIABLE_Map_11;

    mercury__tree234__search_insert_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, ((MR_Box) (K_6)), V_7, MaybeOldV_8, (MR_Word) (STATE_VARIABLE_Map_0_10), &conv0_STATE_VARIABLE_Map_11);
    *STATE_VARIABLE_Map_11 = (MR_Word) (conv0_STATE_VARIABLE_Map_11);
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Integer K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  mercury__tree234__search_insert_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_14, ((MR_Box) (K_6)), V_7, MaybeOldV_8, STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word M2_5)
{
  {
    MR_Word M3_6;
    MR_Word AssocList_14;
    MR_Word conv0_AssocList_14;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (M2_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocList_14);
    AssocList_14 = (MR_Word) (conv0_AssocList_14);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_14, M1_4, &M3_6);
    return M3_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Map0_4,
  MR_Word Map1_5,
  MR_Word * Map_6)
{
  {
    MR_Word AssocList_7;
    MR_Word conv0_AssocList_7;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_Word) (Map1_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocList_7);
    AssocList_7 = (MR_Word) (conv0_AssocList_7);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_K_8, TypeInfo_for_V_9, AssocList_7, Map0_4, Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word KeySet_5)
{
  {
    MR_Word SelectMap_6;
    MR_Word Keys_14 = (MR_Word) (KeySet_5);
    MR_Word RevSelectAL_22;
    MR_Word conv0_SelectMap_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_14, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_22);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (RevSelectAL_22), &conv0_SelectMap_6);
    SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
    return SelectMap_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word FullMap_4,
  MR_Word KeySet_5,
  MR_Word * SelectMap_6)
{
  {
    MR_Word Keys_7 = (MR_Word) (KeySet_5);
    MR_Word RevSelectAL_18;
    MR_Word conv0_SelectMap_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_11, TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_7, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_18);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_Word) (RevSelectAL_18), &conv0_SelectMap_6);
    *SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word Keys_5)
{
  {
    MR_Word SelectMap_6;
    MR_Word RevSelectAL_14;
    MR_Word conv0_SelectMap_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_14);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (RevSelectAL_14), &conv0_SelectMap_6);
    SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
    return SelectMap_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word FullMap_4,
  MR_Word Keys_5,
  MR_Word * SelectMap_6)
{
  {
    MR_Word RevSelectAL_7;
    MR_Word conv0_SelectMap_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_12, TypeInfo_for_K_9, TypeInfo_for_V_10, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_7);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_Word) (RevSelectAL_7), &conv0_SelectMap_6);
    *SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_7,
  MR_Integer Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_7,
  MR_Integer Key_4,
  MR_Word Map_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box VPrime_15;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_7, Map_5, Key_4, &VPrime_15);
    if (succeeded)
      HeadVar__3_3 = VPrime_15;
    else
      mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (Key_4)));
    return HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word Key_4,
  MR_Word Map_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box VPrime_17;

    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, &VPrime_17);
    if (succeeded)
      HeadVar__3_3 = VPrime_17;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (Key_4)));
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word TypeInfo_for_V_9,
  MR_Integer Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_Word HeadVar__4_4;

    mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, Map_6, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word conv0_HeadVar__4_4;

    mercury__tree234__set_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, (MR_Word) (Map_6), &conv0_HeadVar__4_4);
    HeadVar__4_4 = (MR_Word) (conv0_HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word TypeInfo_for_V_9,
  MR_Integer Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word NewMap_19;

    succeeded = mercury__tree234__update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, Map_6, &NewMap_19);
    if (succeeded)
      HeadVar__4_4 = NewMap_19;
    else
      mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (Key_5)));
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word NewMap_21;
    MR_Word conv0_NewMap_21;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, (MR_Word) (Map_6), &conv0_NewMap_21);
    if (succeeded)
    {
      NewMap_21 = (MR_Word) (conv0_NewMap_21);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      HeadVar__4_4 = NewMap_21;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (Key_5)));
    return HeadVar__4_4;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word Var_22,
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevSelectAL_0_3,
  MR_Word * STATE_VARIABLE_RevSelectAL_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevSelectAL_4 = STATE_VARIABLE_RevSelectAL_0_3;
    else
    {
      MR_Word K_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ks_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevSelectAL_16_16;
      MR_Box V_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;

      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(Var_22, TypeInfo_for_K_19, TypeInfo_for_V_20, HeadVar__2_2, K_9, &V_13);
      if (succeeded)
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (K_9));
          MR_hl_field(MR_mktag(0), Var_17, 1) = V_13;
        }
        {
          STATE_VARIABLE_RevSelectAL_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_16_16, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_16_16, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
        }
      }
      else
        STATE_VARIABLE_RevSelectAL_16_16 = STATE_VARIABLE_RevSelectAL_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ks_10;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevSelectAL_0_3 = next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_19,
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Word K_7;
      MR_Box V_8;
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Map_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(Var_19, TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_108_97_114_103_101_95_109_97_112_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word Var_16,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Map_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Map_3 = HeadVar__2_2;
    else
    {
      MR_Word K_5;
      MR_Box V_6;
      MR_Word AssocList_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Map2_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Map1_10;
      MR_Word conv0_Map1_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      K_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      V_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, ((MR_Box) (K_5)), V_6, (MR_Word) (HeadVar__2_2), &conv0_Map1_10);
      if (succeeded)
      {
        Map1_10 = (MR_Word) (conv0_Map1_10);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Map2_11 = Map1_10;
      else
        Map2_11 = HeadVar__2_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_7;
      next_value_of_HeadVar__2_2 = Map2_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1465__1_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word F_5,
  MR_Box LambdaHeadVar__1_14,
  MR_Box * LambdaHeadVar__2_15)
{
  {
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

    *LambdaHeadVar__2_15 = func_0(((MR_Box) (F_5)), LambdaHeadVar__1_14);
  }
}

void MR_CALL 
mercury__map____Compare____map_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__map____Unify____map_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_3(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList1_6, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_2(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList1_6, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_1(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList2_7, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_0(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList2_7, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__old_merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word M2_5)
{
  {
    MR_Word M3_6;

    mercury__map__old_merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M1_4, M2_5, &M3_6);
    return M3_6;
  }
}

void MR_CALL 
mercury__map__old_merge_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word M0_4,
  MR_Word M1_5,
  MR_Word * M_6)
{
  {
    MR_Word TypeInfo_13_13;
    MR_Word ML0_7;
    MR_Word ML1_8;
    MR_Word ML_9;
    MR_Word conv0_ML_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, M0_4, (MR_Word) ((MR_Unsigned) 0U), &ML0_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, M1_5, (MR_Word) ((MR_Unsigned) 0U), &ML1_8);
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_for_V_11));
    }
    mercury__list__merge_3_p_0(TypeInfo_13_13, (MR_Word) (ML0_7), (MR_Word) (ML1_8), &conv0_ML_9);
    ML_9 = (MR_Word) (conv0_ML_9);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, ML_9, (MR_Word) ((MR_Unsigned) 0U), M_6);
  }
}

MR_bool MR_CALL 
mercury__map__map_values_foldl3_9_p_4(
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_C_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_values_foldl3_9_p_4(TypeInfo_for_V_27, TypeInfo_for_W_28, TypeInfo_for_A_29, TypeInfo_for_B_30, TypeInfo_for_C_31, TypeInfo_for_K_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_3(
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_C_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_values_foldl3_9_p_3(TypeInfo_for_V_27, TypeInfo_for_W_28, TypeInfo_for_A_29, TypeInfo_for_B_30, TypeInfo_for_C_31, TypeInfo_for_K_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_2(
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_C_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_values_foldl3_9_p_2(TypeInfo_for_V_27, TypeInfo_for_W_28, TypeInfo_for_A_29, TypeInfo_for_B_30, TypeInfo_for_C_31, TypeInfo_for_K_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_1(
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_C_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_values_foldl3_9_p_1(TypeInfo_for_V_27, TypeInfo_for_W_28, TypeInfo_for_A_29, TypeInfo_for_B_30, TypeInfo_for_C_31, TypeInfo_for_K_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_0(
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_W_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Word TypeInfo_for_C_31,
  MR_Word TypeInfo_for_K_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_values_foldl3_9_p_0(TypeInfo_for_V_27, TypeInfo_for_W_28, TypeInfo_for_A_29, TypeInfo_for_B_30, TypeInfo_for_C_31, TypeInfo_for_K_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

MR_bool MR_CALL 
mercury__map__map_values_foldl2_7_p_3(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_W_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_values_foldl2_7_p_3(TypeInfo_for_V_21, TypeInfo_for_W_22, TypeInfo_for_A_23, TypeInfo_for_B_24, TypeInfo_for_K_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_2(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_W_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_2(TypeInfo_for_V_21, TypeInfo_for_W_22, TypeInfo_for_A_23, TypeInfo_for_B_24, TypeInfo_for_K_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_1(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_W_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_1(TypeInfo_for_V_21, TypeInfo_for_W_22, TypeInfo_for_A_23, TypeInfo_for_B_24, TypeInfo_for_K_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_0(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_W_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_0(TypeInfo_for_V_21, TypeInfo_for_W_22, TypeInfo_for_A_23, TypeInfo_for_B_24, TypeInfo_for_K_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

MR_bool MR_CALL 
mercury__map__map_values_foldl_5_p_2(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_W_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_values_foldl_5_p_2(TypeInfo_for_V_15, TypeInfo_for_W_16, TypeInfo_for_A_17, TypeInfo_for_K_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_1(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_W_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_1(TypeInfo_for_V_15, TypeInfo_for_W_16, TypeInfo_for_A_17, TypeInfo_for_K_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_0(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_W_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_0(TypeInfo_for_V_15, TypeInfo_for_W_16, TypeInfo_for_A_17, TypeInfo_for_K_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_7(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl4_11_p_7(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_6(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl4_11_p_6(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_5(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl4_11_p_5(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl4_11_p_4(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  mercury__tree234__map_foldl4_11_p_3(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_3(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  mercury__tree234__map_foldl4_11_p_4(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_2(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  mercury__tree234__map_foldl4_11_p_2(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_1(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  mercury__tree234__map_foldl4_11_p_1(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_0(
  MR_Word TypeInfo_for_K_33,
  MR_Word TypeInfo_for_V_34,
  MR_Word TypeInfo_for_W_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word Pred_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19,
  MR_Box STATE_VARIABLE_AccA_0_20,
  MR_Box * STATE_VARIABLE_AccA_21,
  MR_Box STATE_VARIABLE_AccB_0_22,
  MR_Box * STATE_VARIABLE_AccB_23,
  MR_Box STATE_VARIABLE_AccC_0_24,
  MR_Box * STATE_VARIABLE_AccC_25,
  MR_Box STATE_VARIABLE_AccD_0_26,
  MR_Box * STATE_VARIABLE_AccD_27)
{
  mercury__tree234__map_foldl4_11_p_0(TypeInfo_for_K_33, TypeInfo_for_V_34, TypeInfo_for_W_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_7(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl3_9_p_7(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_6(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl3_9_p_6(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_5(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl3_9_p_5(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_4(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_foldl3_9_p_3(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_3(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_foldl3_9_p_4(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_2(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_foldl3_9_p_2(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_1(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_foldl3_9_p_1(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_0(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_W_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word Pred_10,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18,
  MR_Box STATE_VARIABLE_AccB_0_19,
  MR_Box * STATE_VARIABLE_AccB_20,
  MR_Box STATE_VARIABLE_AccC_0_21,
  MR_Box * STATE_VARIABLE_AccC_22)
{
  mercury__tree234__map_foldl3_9_p_0(TypeInfo_for_K_27, TypeInfo_for_V_28, TypeInfo_for_W_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_6(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl2_7_p_6(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_5(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl2_7_p_5(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_4(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl2_7_p_4(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl2_7_p_3(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_2(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_2(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_3(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_1(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_1(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_W_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_W_23, TypeInfo_for_A_24, TypeInfo_for_B_25, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_5(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl_5_p_5(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_4(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl_5_p_4(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_3(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_foldl_5_p_3(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl_5_p_2(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_2(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_1(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_W_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_W_17, TypeInfo_for_A_18, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__filter_map_values_only_3_p_0(
  MR_Word TypeInfo_for_V_7,
  MR_Word TypeInfo_for_W_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  {
    MR_Word V_7_16;

    mercury__tree234__filter_map_values_only_acc_4_p_0(TypeInfo_for_V_7, TypeInfo_for_W_8, TypeInfo_for_K_9, Pred_4, Map0_5, (MR_Word) ((MR_Unsigned) 0U), &V_7_16);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_W_8, V_7_16, Map_6);
  }
}

void MR_CALL 
mercury__map__filter_map_values_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word TypeInfo_for_W_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  {
    MR_Word V_7_16;

    mercury__tree234__filter_map_values_acc_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, TypeInfo_for_W_9, Pred_4, Map0_5, (MR_Word) ((MR_Unsigned) 0U), &V_7_16);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_W_9, V_7_16, Map_6);
  }
}

MR_bool MR_CALL 
mercury__map__map_values_only_3_p_1(
  MR_Word TypeInfo_for_V_7,
  MR_Word TypeInfo_for_W_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_values_only_3_p_1(TypeInfo_for_V_7, TypeInfo_for_W_8, TypeInfo_for_K_9, Pred_4, Map0_5, Map_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_only_3_p_0(
  MR_Word TypeInfo_for_V_7,
  MR_Word TypeInfo_for_W_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  mercury__tree234__map_values_only_3_p_0(TypeInfo_for_V_7, TypeInfo_for_W_8, TypeInfo_for_K_9, Pred_4, Map0_5, Map_6);
}

MR_Word MR_CALL 
mercury__map__map_values_only_2_f_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word F_4,
  MR_Word M1_5)
{
  {
    MR_Word M2_6;

    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(F_4, M1_5, &M2_6);
    return M2_6;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box V_8_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_9_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word V_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word V_11_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box V_12_14;
        MR_Word V_13_15;
        MR_Word V_14_16;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));

        V_12_14 = func_5(((MR_Box) (Var_64)), V_9_9);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_10_10, &V_13_15);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_11_11, &V_14_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_8_8;
          MR_hl_field(MR_mktag(1), base, 1) = V_12_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (V_13_15));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (V_14_16));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box V_18_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_19_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V_20_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Box V_21_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
        MR_Word V_22_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word V_23_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word V_24_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box V_25_30;
        MR_Box V_26_31;
        MR_Word V_27_32;
        MR_Word V_28_33;
        MR_Word V_29_34;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);

        V_25_30 = func_3(((MR_Box) (Var_64)), V_19_22);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        V_26_31 = func_4(((MR_Box) (Var_64)), V_21_24);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_22_25, &V_27_32);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_23_26, &V_28_33);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_24_27, &V_29_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = V_18_21;
          MR_hl_field(MR_mktag(2), base, 1) = V_25_30;
          MR_hl_field(MR_mktag(2), base, 2) = V_20_23;
          MR_hl_field(MR_mktag(2), base, 3) = V_26_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (V_27_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (V_28_33));
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (V_29_34));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box V_33_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_34_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V_35_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Box V_36_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
        MR_Box V_37_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Box V_38_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
        MR_Word V_39_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
        MR_Word V_40_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word V_41_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
        MR_Word V_42_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
        MR_Box V_43_51;
        MR_Box V_44_52;
        MR_Box V_45_53;
        MR_Word V_46_54;
        MR_Word V_47_55;
        MR_Word V_48_56;
        MR_Word V_49_57;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);

        V_43_51 = func_0(((MR_Box) (Var_64)), V_34_40);
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        V_44_52 = func_1(((MR_Box) (Var_64)), V_36_42);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        V_45_53 = func_2(((MR_Box) (Var_64)), V_38_44);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_39_45, &V_46_54);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_40_46, &V_47_55);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_41_47, &V_48_56);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_64, V_42_48, &V_49_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = V_33_39;
          MR_hl_field(MR_mktag(3), base, 1) = V_43_51;
          MR_hl_field(MR_mktag(3), base, 2) = V_35_41;
          MR_hl_field(MR_mktag(3), base, 3) = V_44_52;
          MR_hl_field(MR_mktag(3), base, 4) = V_37_43;
          MR_hl_field(MR_mktag(3), base, 5) = V_45_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (V_46_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (V_47_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (V_48_56));
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (V_49_57));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__map__map_values_3_p_1(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word TypeInfo_for_W_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__map_values_3_p_1(TypeInfo_for_K_7, TypeInfo_for_V_8, TypeInfo_for_W_9, Pred_4, Map0_5, Map_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word TypeInfo_for_W_9,
  MR_Word Pred_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  mercury__tree234__map_values_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, TypeInfo_for_W_9, Pred_4, Map0_5, Map_6);
}

MR_Word MR_CALL 
mercury__map__map_values_2_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word F_4,
  MR_Word M1_5)
{
  {
    MR_Word M2_6;

    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(F_4, M1_5, &M2_6);
    return M2_6;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word Var_65,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box V_8_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_9_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word V_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word V_11_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box V_12_14;
        MR_Word V_13_15;
        MR_Word V_14_16;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));

        V_12_14 = func_5(((MR_Box) (Var_65)), V_8_8, V_9_9);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_10_10, &V_13_15);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_11_11, &V_14_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_8_8;
          MR_hl_field(MR_mktag(1), base, 1) = V_12_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (V_13_15));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (V_14_16));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box V_18_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_19_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V_20_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Box V_21_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
        MR_Word V_22_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word V_23_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word V_24_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box V_25_30;
        MR_Box V_26_31;
        MR_Word V_27_32;
        MR_Word V_28_33;
        MR_Word V_29_34;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);

        V_25_30 = func_3(((MR_Box) (Var_65)), V_18_21, V_19_22);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        V_26_31 = func_4(((MR_Box) (Var_65)), V_20_23, V_21_24);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_22_25, &V_27_32);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_23_26, &V_28_33);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_24_27, &V_29_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = V_18_21;
          MR_hl_field(MR_mktag(2), base, 1) = V_25_30;
          MR_hl_field(MR_mktag(2), base, 2) = V_20_23;
          MR_hl_field(MR_mktag(2), base, 3) = V_26_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (V_27_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (V_28_33));
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (V_29_34));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box V_33_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_34_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
        MR_Box V_35_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Box V_36_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
        MR_Box V_37_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Box V_38_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
        MR_Word V_39_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
        MR_Word V_40_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word V_41_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
        MR_Word V_42_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
        MR_Box V_43_51;
        MR_Box V_44_52;
        MR_Box V_45_53;
        MR_Word V_46_54;
        MR_Word V_47_55;
        MR_Word V_48_56;
        MR_Word V_49_57;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);

        V_43_51 = func_0(((MR_Box) (Var_65)), V_33_39, V_34_40);
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        V_44_52 = func_1(((MR_Box) (Var_65)), V_35_41, V_36_42);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        V_45_53 = func_2(((MR_Box) (Var_65)), V_37_43, V_38_44);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_39_45, &V_46_54);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_40_46, &V_47_55);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_41_47, &V_48_56);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_65, V_42_48, &V_49_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = V_33_39;
          MR_hl_field(MR_mktag(3), base, 1) = V_43_51;
          MR_hl_field(MR_mktag(3), base, 2) = V_35_41;
          MR_hl_field(MR_mktag(3), base, 3) = V_44_52;
          MR_hl_field(MR_mktag(3), base, 4) = V_37_43;
          MR_hl_field(MR_mktag(3), base, 5) = V_45_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (V_46_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (V_47_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (V_48_56));
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (V_49_57));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_5(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldr5_12_p_5(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_4(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldr5_12_p_4(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_3(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldr5_12_p_3(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldr5_12_p_2(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldr5_12_p_2(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldr5_12_p_1(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldr5_12_p_1(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldr5_12_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldr5_12_p_0(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_8(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldr4_10_p_8(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_7(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldr4_10_p_7(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_6(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldr4_10_p_6(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_5(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_5(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_4(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_4(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_3(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_3(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_2(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_2(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_1(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldr4_10_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_7(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr3_8_p_7(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_6(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr3_8_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_5(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr3_8_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_4(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_3(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_2(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_1(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_6(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr2_6_p_6(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_5(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr2_6_p_5(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_4(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr2_6_p_4(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldr2_6_p_3(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_3(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_2(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_2(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_1(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_1(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr_4_p_8(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_7(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_7(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_8(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_6(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_6(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_5(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr_4_p_5(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_4(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr_4_p_4(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_3(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldr_4_p_3(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldr_4_p_2(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_2(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_1(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_1(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_Box MR_CALL 
mercury__map__foldr_3_f_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word F_5,
  MR_Word M_6,
  MR_Box A_7)
{
  {
    MR_Box B_8;

    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(F_5, M_6, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box V_17_15;
          MR_Box V_18_16;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_13_12, HeadVar__3_3, &V_17_15);
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_18_16 = func_5(((MR_Box) (Var_56)), V_10_9, V_11_10, V_17_15);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_12_11;
          next_value_of_HeadVar__3_3 = V_18_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_21_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_23_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_24_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Box V_31_27;
          MR_Box V_32_28;
          MR_Box V_33_29;
          MR_Box V_34_30;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_27_24, HeadVar__3_3, &V_31_27);
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_32_28 = func_3(((MR_Box) (Var_56)), V_23_20, V_24_21, V_31_27);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_26_23, V_32_28, &V_33_29);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_34_30 = func_4(((MR_Box) (Var_56)), V_21_18, V_22_19, V_33_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_25_22;
          next_value_of_HeadVar__3_3 = V_34_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box V_37_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_38_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_39_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_40_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box V_41_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box V_42_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Box V_50_44;
          MR_Box V_51_45;
          MR_Box V_52_46;
          MR_Box V_53_47;
          MR_Box V_54_48;
          MR_Box V_55_49;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_46_41, HeadVar__3_3, &V_50_44);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_51_45 = func_0(((MR_Box) (Var_56)), V_41_36, V_42_37, V_50_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_45_40, V_51_45, &V_52_46);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_53_47 = func_1(((MR_Box) (Var_56)), V_39_34, V_40_35, V_52_46);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_44_39, V_53_47, &V_54_48);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_55_49 = func_2(((MR_Box) (Var_56)), V_37_32, V_38_33, V_54_48);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_43_38;
          next_value_of_HeadVar__3_3 = V_55_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_5(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_values_12_p_5(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_4(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_values_12_p_4(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_3(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_values_12_p_3(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl5_values_12_p_2(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_values_12_p_2(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_values_12_p_1(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_values_12_p_1(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_values_12_p_0(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_K_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_values_12_p_0(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_K_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_8(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_values_10_p_8(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_7(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_values_10_p_7(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_6(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_values_10_p_6(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl4_values_10_p_5(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_5(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_4(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_4(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_3(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_3(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_2(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_2(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_1(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_1(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_0(
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word TypeInfo_for_D_33,
  MR_Word TypeInfo_for_K_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_values_10_p_0(TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, TypeInfo_for_D_33, TypeInfo_for_K_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_8(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_8(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_7(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_7(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_6(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_6(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_5(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_values_8_p_5(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_4(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_values_8_p_4(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_3(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_values_8_p_3(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_2(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_2(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_1(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_1(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_0(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word TypeInfo_for_C_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_0(TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, TypeInfo_for_C_26, TypeInfo_for_K_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_8(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_8(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_7(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_7(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_6(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_6(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_values_6_p_5(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_values_6_p_4(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_values_6_p_3(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_2(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_1(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word TypeInfo_for_B_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_0(TypeInfo_for_V_17, TypeInfo_for_A_18, TypeInfo_for_B_19, TypeInfo_for_K_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl_values_4_p_8(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_8(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_7(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_7(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_6(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_6(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_values_4_p_5(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_values_4_p_4(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_values_4_p_3(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_2(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_1(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_0(TypeInfo_for_V_11, TypeInfo_for_A_12, TypeInfo_for_K_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_5(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_12_p_5(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_4(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_12_p_4(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_3(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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

    succeeded = mercury__tree234__foldl5_12_p_3(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl5_12_p_2(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_12_p_2(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_12_p_1(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_12_p_1(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_12_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word Pred_13,
  MR_Word Map_14,
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
  mercury__tree234__foldl5_12_p_0(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_8(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_10_p_8(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_7(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_10_p_7(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_6(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
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

    succeeded = mercury__tree234__foldl4_10_p_6(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_5(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_5(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_4(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_4(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_3(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_3(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_2(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_2(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_1(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word Pred_11,
  MR_Word Map_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  mercury__tree234__foldl4_10_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_7(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_8_p_7(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_6(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_8_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_5(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl3_8_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl2_6_p_10(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_10(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_9(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_9(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_8(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_8(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_7(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_7(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_6_p_6(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_6_p_5(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl2_6_p_4(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_3(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_2(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_1(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_B_20, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl_4_p_8(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_8(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_7(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_7(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_6(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_6(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_5(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_4_p_5(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_4(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_4_p_4(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_3(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__foldl_4_p_3(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__foldl_4_p_2(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_2(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_1(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_1(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_A_13, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_Box MR_CALL 
mercury__map__foldl_3_f_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word F_5,
  MR_Word M_6,
  MR_Box A_7)
{
  {
    MR_Box B_8;

    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(F_5, M_6, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box V_17_15;
          MR_Box V_18_16;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_12_11, HeadVar__3_3, &V_17_15);
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_18_16 = func_5(((MR_Box) (Var_56)), V_10_9, V_11_10, V_17_15);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_13_12;
          next_value_of_HeadVar__3_3 = V_18_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_21_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_23_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_24_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Box V_31_27;
          MR_Box V_32_28;
          MR_Box V_33_29;
          MR_Box V_34_30;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_25_22, HeadVar__3_3, &V_31_27);
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_32_28 = func_3(((MR_Box) (Var_56)), V_21_18, V_22_19, V_31_27);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_26_23, V_32_28, &V_33_29);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_34_30 = func_4(((MR_Box) (Var_56)), V_23_20, V_24_21, V_33_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_27_24;
          next_value_of_HeadVar__3_3 = V_34_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box V_37_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_38_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_39_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_40_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box V_41_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box V_42_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Box V_50_44;
          MR_Box V_51_45;
          MR_Box V_52_46;
          MR_Box V_53_47;
          MR_Box V_54_48;
          MR_Box V_55_49;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_43_38, HeadVar__3_3, &V_50_44);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_51_45 = func_0(((MR_Box) (Var_56)), V_37_32, V_38_33, V_50_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_44_39, V_51_45, &V_52_46);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_53_47 = func_1(((MR_Box) (Var_56)), V_39_34, V_40_35, V_52_46);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, V_45_40, V_53_47, &V_54_48);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
          V_55_49 = func_2(((MR_Box) (Var_56)), V_41_36, V_42_37, V_54_48);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_46_41;
          next_value_of_HeadVar__3_3 = V_55_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__map__optimize_2_p_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word Map_3,
  MR_Word * Map_2)
{
  *Map_2 = Map_3;
}

MR_Word MR_CALL 
mercury__map__optimize_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M1_3)
{
  {
    MR_Word M2_4 = M1_3;

    return M2_4;
  }
}

MR_bool MR_CALL 
mercury__map__equal_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MapA_3,
  MR_Word MapB_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__equal_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, MapA_3, MapB_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__count_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Integer * Count_4)
{
  mercury__tree234__count_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, Count_4);
}

MR_Integer MR_CALL 
mercury__map__count_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3)
{
  {
    MR_Integer N_4;

    mercury__tree234__count_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, &N_4);
    return N_4;
  }
}

void MR_CALL 
mercury__map__union_list_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word HeadMap_6,
  MR_Word TailMaps_7,
  MR_Word * Common_8)
{
  {
    MR_Word HeadAssocList_9;
    MR_Word TailAssocLists_10;
    MR_Word CommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
    mercury__map__union_list_passes_4_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
  }
}

void MR_CALL 
mercury__map__union_list_passes_4_p_1(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadAssocList_5,
  MR_Word TailAssocLists_6,
  MR_Word CommonPred_7,
  MR_Word * CommonAssocList_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailAssocLists_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *CommonAssocList_8 = HeadAssocList_5;
    else
    {
      MR_Word FirstAssocList_11;
      MR_Word LaterAssocLists_12;
      MR_Word next_value_of_HeadAssocList_5;
      MR_Word next_value_of_TailAssocLists_6;

      mercury__map__union_list_pass_5_p_1(TypeInfo_for_K_13, TypeInfo_for_V_14, HeadAssocList_5, TailAssocLists_6, CommonPred_7, &FirstAssocList_11, &LaterAssocLists_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadAssocList_5 = FirstAssocList_11;
      next_value_of_TailAssocLists_6 = LaterAssocLists_12;
      HeadAssocList_5 = next_value_of_HeadAssocList_5;
      TailAssocLists_6 = next_value_of_TailAssocLists_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__union_list_pass_5_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * FirstAssocList_9,
  MR_Word * LaterAssocLists_10)
{
  if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *FirstAssocList_9 = HeadAssocList_6;
    *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    mercury__map__union_loop_5_p_5(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
    }
    mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
    *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
    if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 0))));
      MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 1))));
      MR_Word HeadLaterAssocList_16;
      MR_Word TailLaterAssocLists_17;

      mercury__map__union_list_pass_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, &HeadLaterAssocList_16, &TailLaterAssocLists_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *LaterAssocLists_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterAssocList_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLaterAssocLists_17));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__map__union_list_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word HeadMap_6,
  MR_Word TailMaps_7,
  MR_Word * Common_8)
{
  {
    MR_bool succeeded;
    MR_Word HeadAssocList_9;
    MR_Word TailAssocLists_10;
    MR_Word CommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
    succeeded = mercury__map__union_list_passes_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
    if (succeeded)
    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__union_list_passes_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadAssocList_5,
  MR_Word TailAssocLists_6,
  MR_Word CommonPred_7,
  MR_Word * CommonAssocList_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TailAssocLists_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *CommonAssocList_8 = HeadAssocList_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word FirstAssocList_11;
      MR_Word LaterAssocLists_12;
      MR_Word next_value_of_HeadAssocList_5;
      MR_Word next_value_of_TailAssocLists_6;

      succeeded = mercury__map__union_list_pass_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, HeadAssocList_5, TailAssocLists_6, CommonPred_7, &FirstAssocList_11, &LaterAssocLists_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadAssocList_5 = FirstAssocList_11;
        next_value_of_TailAssocLists_6 = LaterAssocLists_12;
        HeadAssocList_5 = next_value_of_HeadAssocList_5;
        TailAssocLists_6 = next_value_of_TailAssocLists_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__map__union_list_pass_5_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * FirstAssocList_9,
  MR_Word * LaterAssocLists_10)
{
  {
    MR_bool succeeded;

    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FirstAssocList_9 = HeadAssocList_6;
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word conv0_FirstAssocList_9;

      succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
        }
        mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
        *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
        if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 0))));
          MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 1))));
          MR_Word HeadLaterAssocList_16;
          MR_Word TailLaterAssocLists_17;

          succeeded = mercury__map__union_list_pass_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, &HeadLaterAssocList_16, &TailLaterAssocLists_17);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *LaterAssocLists_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterAssocList_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLaterAssocLists_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__map__det_union_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Union_8)
{
  {
    MR_bool succeeded;
    MR_Word UnionPrime_9;
    MR_Word AssocList1_18;
    MR_Word AssocList2_19;
    MR_Word RevCommonAssocList_20;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_18);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_19);
    succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_13, TypeInfo_for_V_12, AssocList1_18, AssocList2_19, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_20);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, RevCommonAssocList_20, &UnionPrime_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Union_8 = UnionPrime_9;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__map__det_union_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word F_5,
  MR_Word M1_6,
  MR_Word M2_7)
{
  {
    MR_bool succeeded;
    MR_Word M3_8;
    MR_Word UnionPrime_25;
    MR_Word AssocList1_32;
    MR_Word AssocList2_33;
    MR_Word RevCommonAssocList_34;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_32);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_33);
    succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocList1_32, AssocList2_33, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_34);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_34, &UnionPrime_25);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      M3_8 = UnionPrime_25;
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
    return M3_8;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_52,
  MR_Word TypeInfo_for_K_45,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_32_32, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Box Var_49 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1));
      MR_Box Var_50 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(Var_47, STATE_VARIABLE_RevCommonAssocList_36_36, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Box Key2_42 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0));
        MR_Box Value2_43 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_25_25;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_25_25;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              succeeded = func_0(((MR_Box) (Var_52)), Var_49, Value2_43, &Value_17);
              if (succeeded)
              {
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = Var_50;
                  MR_hl_field(MR_mktag(0), Var_29, 1) = Value_17;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_47;
                next_value_of_AssocList2_7 = AssocTail2_44;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_28_28;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_22_22;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_22_22;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_32_32;
      AssocList2_7 = next_value_of_AssocList2_7;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_36_36;
      AssocList1_6 = next_value_of_AssocList1_6;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__map__union_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Common_8)
{
  {
    MR_Word AssocList1_9;
    MR_Word AssocList2_10;
    MR_Word RevCommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_9);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_10);
    mercury__map__union_loop_5_p_5(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocList1_9, AssocList2_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_5(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      else
      {
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_32_32, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Box Var_49 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1));
      MR_Box Var_50 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(TypeInfo_for_K_45, TypeInfo_for_V_46, Var_47, STATE_VARIABLE_RevCommonAssocList_36_36, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Box Key2_42 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0));
        MR_Box Value2_43 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_25_25;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_25_25;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CommonPred_8, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              func_0(((MR_Box) (CommonPred_8)), Var_49, Value2_43, &Value_17);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = Var_50;
                MR_hl_field(MR_mktag(0), Var_29, 1) = Value_17;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_28_28;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_22_22;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_22_22;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_36_36;
      AssocList1_6 = next_value_of_AssocList1_6;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_32_32;
      AssocList2_7 = next_value_of_AssocList2_7;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__union_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Common_8)
{
  {
    MR_bool succeeded;
    MR_Word AssocList1_9;
    MR_Word AssocList2_10;
    MR_Word RevCommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_9);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_10);
    succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocList1_9, AssocList2_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_4(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_32_32, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Box Var_49 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1));
      MR_Box Var_50 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(TypeInfo_for_K_45, TypeInfo_for_V_46, Var_47, STATE_VARIABLE_RevCommonAssocList_36_36, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Box Key2_42 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0));
        MR_Box Value2_43 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_25_25;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_25_25;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CommonPred_8, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              succeeded = func_0(((MR_Box) (CommonPred_8)), Var_49, Value2_43, &Value_17);
              if (succeeded)
              {
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = Var_50;
                  MR_hl_field(MR_mktag(0), Var_29, 1) = Value_17;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_47;
                next_value_of_AssocList2_7 = AssocTail2_44;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_28_28;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_22_22;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_22_22;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_36_36;
      AssocList1_6 = next_value_of_AssocList1_6;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(
  MR_Word TypeInfo_for_K_45,
  MR_Word TypeInfo_for_V_46,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_32_32;
      AssocList2_7 = next_value_of_AssocList2_7;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__map__union_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word F_5,
  MR_Word M1_6,
  MR_Word M2_7)
{
  {
    MR_Word M3_8;
    MR_Word AssocList1_25;
    MR_Word AssocList2_26;
    MR_Word RevCommonAssocList_27;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_25);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_26);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocList1_25, AssocList2_26, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_27);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_27, &M3_8);
    return M3_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_52,
  MR_Word TypeInfo_for_K_45,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
      else
      {
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_32_32, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Box Var_49 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1));
      MR_Box Var_50 = (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(Var_47, STATE_VARIABLE_RevCommonAssocList_36_36, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
        MR_Box Key2_42 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0));
        MR_Box Value2_43 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_25_25;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_25_25;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              Value_17 = func_0(((MR_Box) (Var_52)), Var_49, Value2_43);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = Var_50;
                MR_hl_field(MR_mktag(0), Var_29, 1) = Value_17;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_28_28;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_22_22;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_22_22;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_32_32;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_32_32;
      AssocList2_7 = next_value_of_AssocList2_7;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word AssocList1_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevCommonAssocList_19 = STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_36_36;
      AssocList1_6 = next_value_of_AssocList1_6;
      STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__intersect_list_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word HeadMap_6,
  MR_Word TailMaps_7,
  MR_Word * Common_8)
{
  {
    MR_Word HeadAssocList_9;
    MR_Word TailAssocLists_10;
    MR_Word CommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
    mercury__map__intersect_list_passes_4_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
  }
}

void MR_CALL 
mercury__map__intersect_list_passes_4_p_1(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadAssocList_5,
  MR_Word TailAssocLists_6,
  MR_Word CommonPred_7,
  MR_Word * CommonAssocList_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailAssocLists_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *CommonAssocList_8 = HeadAssocList_5;
    else
    {
      MR_Word FirstAssocList_11;
      MR_Word LaterAssocLists_12;
      MR_Word next_value_of_HeadAssocList_5;
      MR_Word next_value_of_TailAssocLists_6;

      mercury__map__intersect_list_pass_5_p_1(TypeInfo_for_K_13, TypeInfo_for_V_14, HeadAssocList_5, TailAssocLists_6, CommonPred_7, &FirstAssocList_11, &LaterAssocLists_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadAssocList_5 = FirstAssocList_11;
      next_value_of_TailAssocLists_6 = LaterAssocLists_12;
      HeadAssocList_5 = next_value_of_HeadAssocList_5;
      TailAssocLists_6 = next_value_of_TailAssocLists_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__intersect_list_pass_5_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * FirstAssocList_9,
  MR_Word * LaterAssocLists_10)
{
  if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *FirstAssocList_9 = HeadAssocList_6;
    *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    mercury__map__intersect_loop_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
    }
    mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
    *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
    if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 0))));
      MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 1))));
      MR_Word HeadLaterAssocList_16;
      MR_Word TailLaterAssocLists_17;

      mercury__map__intersect_list_pass_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, &HeadLaterAssocList_16, &TailLaterAssocLists_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *LaterAssocLists_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterAssocList_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLaterAssocLists_17));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__map__intersect_list_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word HeadMap_6,
  MR_Word TailMaps_7,
  MR_Word * Common_8)
{
  {
    MR_bool succeeded;
    MR_Word HeadAssocList_9;
    MR_Word TailAssocLists_10;
    MR_Word CommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
    succeeded = mercury__map__intersect_list_passes_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
    if (succeeded)
    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word V_8_8;
    MR_Word V_9_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(Var_20, Var_21, V_6_6, (MR_Word) ((MR_Unsigned) 0U), &V_8_8);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(Var_20, Var_21, V_7_7, &V_9_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_8_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_9_9));
    }
  }
}

MR_bool MR_CALL 
mercury__map__intersect_list_passes_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadAssocList_5,
  MR_Word TailAssocLists_6,
  MR_Word CommonPred_7,
  MR_Word * CommonAssocList_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TailAssocLists_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *CommonAssocList_8 = HeadAssocList_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word FirstAssocList_11;
      MR_Word LaterAssocLists_12;
      MR_Word next_value_of_HeadAssocList_5;
      MR_Word next_value_of_TailAssocLists_6;

      succeeded = mercury__map__intersect_list_pass_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, HeadAssocList_5, TailAssocLists_6, CommonPred_7, &FirstAssocList_11, &LaterAssocLists_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadAssocList_5 = FirstAssocList_11;
        next_value_of_TailAssocLists_6 = LaterAssocLists_12;
        HeadAssocList_5 = next_value_of_HeadAssocList_5;
        TailAssocLists_6 = next_value_of_TailAssocLists_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__map__intersect_list_pass_5_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * FirstAssocList_9,
  MR_Word * LaterAssocLists_10)
{
  {
    MR_bool succeeded;

    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FirstAssocList_9 = HeadAssocList_6;
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailAssocLists_7, (MR_Integer) 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word conv0_FirstAssocList_9;

      succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
        }
        mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
        *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
        if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 0))));
          MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTailAssocLists_12, (MR_Integer) 1))));
          MR_Word HeadLaterAssocList_16;
          MR_Word TailLaterAssocLists_17;

          succeeded = mercury__map__intersect_list_pass_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, &HeadLaterAssocList_16, &TailLaterAssocLists_17);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *LaterAssocLists_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterAssocList_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLaterAssocLists_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__map__det_intersect_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Common_8)
{
  {
    MR_bool succeeded;
    MR_Word CommonPrime_9;
    MR_Word AssocList1_18;
    MR_Word AssocList2_19;
    MR_Word RevCommonAssocList_20;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_18);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_19);
    succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, AssocList1_18, AssocList2_19, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_20);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, RevCommonAssocList_20, &CommonPrime_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Common_8 = CommonPrime_9;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__map__det_intersect_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word PF_5,
  MR_Word M1_6,
  MR_Word M2_7)
{
  {
    MR_bool succeeded;
    MR_Word M3_8;
    MR_Word CommonPrime_25;
    MR_Word AssocList1_32;
    MR_Word AssocList2_33;
    MR_Word RevCommonAssocList_34;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_32);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_33);
    succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(PF_5, TypeInfo_for_K_20, AssocList1_32, AssocList2_33, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_34);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_34, &CommonPrime_25);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      M3_8 = CommonPrime_25;
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
    return M3_8;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_36,
  MR_Word TypeInfo_for_K_31,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box Key1_14 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0));
        MR_Box Value1_15 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1));
        MR_Box Key2_17;
        MR_Box Value2_18;
        MR_Word AssocTail2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));

        Key2_17 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        Value2_18 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &R_20, Key1_14, Key2_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_AssocList1_6 = Var_33;

              // direct tailcall eliminated
              ;
              AssocList1_6 = next_value_of_AssocList1_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;

              succeeded = func_0(((MR_Box) (Var_36)), Value1_15, Value2_18, &Value_21);
              if (succeeded)
              {
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = Key1_14;
                  MR_hl_field(MR_mktag(0), Var_29, 1) = Value_21;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_22));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_33;
                next_value_of_AssocList2_7 = AssocTail2_19;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = STATE_VARIABLE_RevCommonAssocList_28_28;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_22 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_AssocList2_7 = AssocTail2_19;

              // direct tailcall eliminated
              ;
              AssocList2_7 = next_value_of_AssocList2_7;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__map__intersect_4_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Common_8)
{
  {
    MR_Word AssocList1_9;
    MR_Word AssocList2_10;
    MR_Word RevCommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_9);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_10);
    mercury__map__intersect_loop_5_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocList1_9, AssocList2_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
  }
}

void MR_CALL 
mercury__map__intersect_loop_5_p_1(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
      {
        MR_Box Key1_14 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0));
        MR_Box Value1_15 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1));
        MR_Box Key2_17;
        MR_Box Value2_18;
        MR_Word AssocTail2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));

        Key2_17 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        Value2_18 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &R_20, Key1_14, Key2_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_AssocList1_6 = Var_33;

              // direct tailcall eliminated
              ;
              AssocList1_6 = next_value_of_AssocList1_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CommonPred_8, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;

              func_0(((MR_Box) (CommonPred_8)), Value1_15, Value2_18, &Value_21);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = Key1_14;
                MR_hl_field(MR_mktag(0), Var_29, 1) = Value_21;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_22));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_33;
              next_value_of_AssocList2_7 = AssocTail2_19;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = STATE_VARIABLE_RevCommonAssocList_28_28;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_22 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_AssocList2_7 = AssocTail2_19;

              // direct tailcall eliminated
              ;
              AssocList2_7 = next_value_of_AssocList2_7;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__intersect_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word CommonPred_5,
  MR_Word Map1_6,
  MR_Word Map2_7,
  MR_Word * Common_8)
{
  {
    MR_bool succeeded;
    MR_Word AssocList1_9;
    MR_Word AssocList2_10;
    MR_Word RevCommonAssocList_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_9);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, Map2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_10);
    succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocList1_9, AssocList2_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
    if (succeeded)
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__intersect_loop_5_p_0(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box Key1_14 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0));
        MR_Box Value1_15 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1));
        MR_Box Key2_17;
        MR_Box Value2_18;
        MR_Word AssocTail2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));

        Key2_17 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        Value2_18 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &R_20, Key1_14, Key2_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_AssocList1_6 = Var_33;

              // direct tailcall eliminated
              ;
              AssocList1_6 = next_value_of_AssocList1_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), CommonPred_8, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;

              succeeded = func_0(((MR_Box) (CommonPred_8)), Value1_15, Value2_18, &Value_21);
              if (succeeded)
              {
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = Key1_14;
                  MR_hl_field(MR_mktag(0), Var_29, 1) = Value_21;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_22));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_33;
                next_value_of_AssocList2_7 = AssocTail2_19;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = STATE_VARIABLE_RevCommonAssocList_28_28;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_22 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_AssocList2_7 = AssocTail2_19;

              // direct tailcall eliminated
              ;
              AssocList2_7 = next_value_of_AssocList2_7;
              continue;
            }
            break;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__map__intersect_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word F_5,
  MR_Word M1_6,
  MR_Word M2_7)
{
  {
    MR_Word M3_8;
    MR_Word AssocList1_25;
    MR_Word AssocList2_26;
    MR_Word RevCommonAssocList_27;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M1_6, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_25);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, M2_7, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_26);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocList1_25, AssocList2_26, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_27);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_27, &M3_8);
    return M3_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_36,
  MR_Word TypeInfo_for_K_31,
  MR_Word AssocList1_6,
  MR_Word AssocList2_7,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_6, (MR_Integer) 0))));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_23 = STATE_VARIABLE_RevCommonAssocList_0_22;
      else
      {
        MR_Box Key1_14 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0));
        MR_Box Value1_15 = (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1));
        MR_Box Key2_17;
        MR_Box Value2_18;
        MR_Word AssocTail2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_7, (MR_Integer) 0))));

        Key2_17 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0));
        Value2_18 = (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &R_20, Key1_14, Key2_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_AssocList1_6 = Var_33;

              // direct tailcall eliminated
              ;
              AssocList1_6 = next_value_of_AssocList1_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word Var_29;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;

              Value_21 = func_0(((MR_Box) (Var_36)), Value1_15, Value2_18);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = Key1_14;
                MR_hl_field(MR_mktag(0), Var_29, 1) = Value_21;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_22));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_33;
              next_value_of_AssocList2_7 = AssocTail2_19;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = STATE_VARIABLE_RevCommonAssocList_28_28;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_22 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_AssocList2_7 = AssocTail2_19;

              // direct tailcall eliminated
              ;
              AssocList2_7 = next_value_of_AssocList2_7;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__common_subset_2_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word Map1_4,
  MR_Word Map2_5)
{
  {
    MR_Word Common_6;
    MR_Word AssocList1_7;
    MR_Word AssocList2_8;
    MR_Word RevCommonAssocList_9;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Map1_4, (MR_Word) ((MR_Unsigned) 0U), &AssocList1_7);
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Map2_5, (MR_Word) ((MR_Unsigned) 0U), &AssocList2_8);
    mercury__map__common_subset_loop_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, AssocList1_7, AssocList2_8, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_9);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, RevCommonAssocList_9, &Common_6);
    return Common_6;
  }
}

void MR_CALL 
mercury__map__common_subset_loop_4_p_0(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word AssocList1_5,
  MR_Word AssocList2_6,
  MR_Word STATE_VARIABLE_RevCommonAssocList_0_19,
  MR_Word * STATE_VARIABLE_RevCommonAssocList_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((AssocList1_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((AssocList2_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_20 = STATE_VARIABLE_RevCommonAssocList_0_19;
      else
        *STATE_VARIABLE_RevCommonAssocList_20 = STATE_VARIABLE_RevCommonAssocList_0_19;
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_5, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList1_5, (MR_Integer) 0))));

      if ((AssocList2_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonAssocList_20 = STATE_VARIABLE_RevCommonAssocList_0_19;
      else
      {
        MR_Box Key1_12 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
        MR_Box Value1_13 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1));
        MR_Box Key2_15;
        MR_Box Value2_16;
        MR_Word AssocTail2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_6, (MR_Integer) 1))));
        MR_Word R_18;
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AssocList2_6, (MR_Integer) 0))));

        Key2_15 = (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0));
        Value2_16 = (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_27, &R_18, Key1_12, Key2_15);
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_AssocList2_6 = AssocTail2_17;

              // direct tailcall eliminated
              ;
              AssocList2_6 = next_value_of_AssocList2_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_24_24;
              MR_Word next_value_of_AssocList1_5;
              MR_Word next_value_of_AssocList2_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_19;

              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_28, Value1_13, Value2_16);
              if (succeeded)
                {
                  STATE_VARIABLE_RevCommonAssocList_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_24_24, 0) = ((MR_Box) (Var_30));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCommonAssocList_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_19));
                }
              else
                STATE_VARIABLE_RevCommonAssocList_24_24 = STATE_VARIABLE_RevCommonAssocList_0_19;
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_5 = Var_29;
              next_value_of_AssocList2_6 = AssocTail2_17;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_19 = STATE_VARIABLE_RevCommonAssocList_24_24;
              AssocList1_5 = next_value_of_AssocList1_5;
              AssocList2_6 = next_value_of_AssocList2_6;
              STATE_VARIABLE_RevCommonAssocList_0_19 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_19;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__overlay_large_map_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Map0_4,
  MR_Word Map1_5,
  MR_Word * Map_6)
{
  {
    MR_Word AssocList_7;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Map0_4, (MR_Word) ((MR_Unsigned) 0U), &AssocList_7);
    mercury__map__overlay_large_map_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocList_7, Map1_5, Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__overlay_large_map_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word M2_5)
{
  {
    MR_Word M3_6;
    MR_Word AssocList_12;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M1_4, (MR_Word) ((MR_Unsigned) 0U), &AssocList_12);
    mercury__map__overlay_large_map_2_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_12, M2_5, &M3_6);
    return M3_6;
  }
}

void MR_CALL 
mercury__map__overlay_large_map_2_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Map_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Map_3 = HeadVar__2_2;
    else
    {
      MR_Box K_5;
      MR_Box V_6;
      MR_Word AssocList_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Map2_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Map1_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      K_5 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0));
      V_6 = (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1));
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_5, V_6, HeadVar__2_2, &Map1_10);
      if (succeeded)
        Map2_11 = Map1_10;
      else
        Map2_11 = HeadVar__2_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_7;
      next_value_of_HeadVar__2_2 = Map2_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__overlay_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Map0_4,
  MR_Word Map1_5,
  MR_Word * Map_6)
{
  {
    MR_Word AssocList_7;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Map1_5, (MR_Word) ((MR_Unsigned) 0U), &AssocList_7);
    mercury__map__overlay_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocList_7, Map0_4, Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__overlay_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word M2_5)
{
  {
    MR_Word M3_6;
    MR_Word AssocList_12;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M2_5, (MR_Word) ((MR_Unsigned) 0U), &AssocList_12);
    mercury__map__overlay_2_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_12, M1_4, &M3_6);
    return M3_6;
  }
}

void MR_CALL 
mercury__map__overlay_2_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Map_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__tree234__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__merge_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MA_4,
  MR_Word MB_5,
  MR_Word * M_6)
{
  {
    MR_Word MBList_7;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MB_5, (MR_Word) ((MR_Unsigned) 0U), &MBList_7);
    mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MBList_7, MA_4, M_6);
  }
}

MR_Word MR_CALL 
mercury__map__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word M2_5)
{
  {
    MR_Word M3_6;
    MR_Word MBList_12;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M2_5, (MR_Word) ((MR_Unsigned) 0U), &MBList_12);
    mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MBList_12, M1_4, &M3_6);
    return M3_6;
  }
}

MR_Word MR_CALL 
mercury__map__apply_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word M_5)
{
  {
    MR_Word Vs_6;

    mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, M_5, &Vs_6);
    return Vs_6;
  }
}

void MR_CALL 
mercury__map__apply_to_list_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word Map_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Ks_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box V_8;
      MR_Word Vs_9;
      MR_Box VPrime_15;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Map_2, K_5, &VPrime_15);
      if (succeeded)
        V_8 = VPrime_15;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", K_5);
          return;
        }
      mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Ks_6, Map_2, &Vs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = V_8;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs_9));
      }
    }
  }
}

void MR_CALL 
mercury__map__select_unselect_sorted_list_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word FullMap_5,
  MR_Word Keys_6,
  MR_Word * SelectMap_7,
  MR_Word * UnselectMap_8)
{
  {
    MR_Word FullAL_9;
    MR_Word RevSelectAL_10;
    MR_Word RevUnselectAL_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, FullMap_5, (MR_Word) ((MR_Unsigned) 0U), &FullAL_9);
    mercury__map__select_unselect_loop_6_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, FullAL_9, Keys_6, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_10, (MR_Word) ((MR_Unsigned) 0U), &RevUnselectAL_11);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, RevSelectAL_10, SelectMap_7);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, RevUnselectAL_11, UnselectMap_8);
  }
}

void MR_CALL 
mercury__map__select_unselect_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word FullMap_5,
  MR_Word KeySet_6,
  MR_Word * SelectMap_7,
  MR_Word * UnselectMap_8)
{
  {
    MR_Word Keys_9 = (MR_Word) (KeySet_6);
    MR_Word FullAL_19;
    MR_Word RevSelectAL_20;
    MR_Word RevUnselectAL_21;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FullMap_5, (MR_Word) ((MR_Unsigned) 0U), &FullAL_19);
    mercury__map__select_unselect_loop_6_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FullAL_19, Keys_9, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_20, (MR_Word) ((MR_Unsigned) 0U), &RevUnselectAL_21);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, RevSelectAL_20, SelectMap_7);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, RevUnselectAL_21, UnselectMap_8);
  }
}

void MR_CALL 
mercury__map__select_unselect_loop_6_p_0(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word HeadVar__1_1,
  MR_Word KeysAL_2,
  MR_Word STATE_VARIABLE_RevSelectAL_0_3,
  MR_Word * STATE_VARIABLE_RevSelectAL_4,
  MR_Word STATE_VARIABLE_RevUnselectAL_0_5,
  MR_Word * STATE_VARIABLE_RevUnselectAL_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevUnselectAL_6 = STATE_VARIABLE_RevUnselectAL_0_5;
      *STATE_VARIABLE_RevSelectAL_4 = STATE_VARIABLE_RevSelectAL_0_3;
    }
    else
    {
      MR_Box FullK_15;
      MR_Word TailFullAL_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NextFullAL_21;
      MR_Word NextKeysAL_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevSelectAL_33_33;
      MR_Word STATE_VARIABLE_RevUnselectAL_35_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_KeysAL_2;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevUnselectAL_0_5;

      FullK_15 = (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0));
      if ((KeysAL_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NextFullAL_21 = TailFullAL_17;
        NextKeysAL_22 = KeysAL_2;
        {
          STATE_VARIABLE_RevUnselectAL_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnselectAL_35_35, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnselectAL_35_35, 1) = ((MR_Box) (STATE_VARIABLE_RevUnselectAL_0_5));
        }
        STATE_VARIABLE_RevSelectAL_33_33 = STATE_VARIABLE_RevSelectAL_0_3;
      }
      else
      {
        MR_Box KeyK_23 = (MR_hl_field(MR_mktag(1), KeysAL_2, (MR_Integer) 0));
        MR_Word TailKeysAL_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KeysAL_2, (MR_Integer) 1))));
        MR_Word Result_25;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_39, &Result_25, KeyK_23, FullK_15);
        switch (Result_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              NextFullAL_21 = HeadVar__1_1;
              NextKeysAL_22 = TailKeysAL_24;
              STATE_VARIABLE_RevSelectAL_33_33 = STATE_VARIABLE_RevSelectAL_0_3;
              STATE_VARIABLE_RevUnselectAL_35_35 = STATE_VARIABLE_RevUnselectAL_0_5;
            }
            break;
          case (MR_Integer) 0:
            {
              NextFullAL_21 = TailFullAL_17;
              NextKeysAL_22 = TailKeysAL_24;
              {
                STATE_VARIABLE_RevSelectAL_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_33_33, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_33_33, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
              }
              STATE_VARIABLE_RevUnselectAL_35_35 = STATE_VARIABLE_RevUnselectAL_0_5;
            }
            break;
          case (MR_Integer) 2:
            {
              NextFullAL_21 = TailFullAL_17;
              NextKeysAL_22 = KeysAL_2;
              {
                STATE_VARIABLE_RevUnselectAL_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnselectAL_35_35, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnselectAL_35_35, 1) = ((MR_Box) (STATE_VARIABLE_RevUnselectAL_0_5));
              }
              STATE_VARIABLE_RevSelectAL_33_33 = STATE_VARIABLE_RevSelectAL_0_3;
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = NextFullAL_21;
      next_value_of_KeysAL_2 = NextKeysAL_22;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_33_33;
      next_value_of_STATE_VARIABLE_RevUnselectAL_0_5 = STATE_VARIABLE_RevUnselectAL_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      KeysAL_2 = next_value_of_KeysAL_2;
      STATE_VARIABLE_RevSelectAL_0_3 = next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      STATE_VARIABLE_RevUnselectAL_0_5 = next_value_of_STATE_VARIABLE_RevUnselectAL_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__select_sorted_list_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word FullMap_4,
  MR_Word Keys_5,
  MR_Word * SelectMap_6)
{
  {
    MR_Word RevSelectAL_7;

    mercury__map__select_loop_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_7);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, RevSelectAL_7, SelectMap_6);
  }
}

MR_Word MR_CALL 
mercury__map__select_sorted_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word Keys_5)
{
  {
    MR_Word SelectMap_6;
    MR_Word RevSelectAL_12;

    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_12);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RevSelectAL_12, &SelectMap_6);
    return SelectMap_6;
  }
}

void MR_CALL 
mercury__map__select_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word FullMap_4,
  MR_Word KeySet_5,
  MR_Word * SelectMap_6)
{
  {
    MR_Word Keys_7 = (MR_Word) (KeySet_5);
    MR_Word RevSelectAL_16;

    mercury__map__select_loop_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_7, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_16);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, RevSelectAL_16, SelectMap_6);
  }
}

MR_Word MR_CALL 
mercury__map__select_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word KeySet_5)
{
  {
    MR_Word SelectMap_6;
    MR_Word Keys_12 = (MR_Word) (KeySet_5);
    MR_Word RevSelectAL_19;

    mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_12, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_19);
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RevSelectAL_19, &SelectMap_6);
    return SelectMap_6;
  }
}

void MR_CALL 
mercury__map__select_loop_4_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevSelectAL_0_3,
  MR_Word * STATE_VARIABLE_RevSelectAL_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevSelectAL_4 = STATE_VARIABLE_RevSelectAL_0_3;
    else
    {
      MR_Box K_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Ks_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevSelectAL_16_16;
      MR_Box V_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadVar__2_2, K_9, &V_13);
      if (succeeded)
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = K_9;
          MR_hl_field(MR_mktag(0), Var_17, 1) = V_13;
        }
        {
          STATE_VARIABLE_RevSelectAL_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_16_16, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSelectAL_16_16, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
        }
      }
      else
        STATE_VARIABLE_RevSelectAL_16_16 = STATE_VARIABLE_RevSelectAL_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ks_10;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevSelectAL_0_3 = next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__reverse_map_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_3)
{
  {
    MR_Word RevMap_4;

    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_3, (MR_Word) ((MR_Unsigned) 0U), &RevMap_4);
    return RevMap_4;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word V_12_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word V_13_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word V_17_15;
          MR_Word V_18_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_12_11, HeadVar__3_3, &V_17_15);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_10_9, V_11_10, V_17_15, &V_18_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_13_12;
          next_value_of_HeadVar__3_3 = V_18_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_21_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_23_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_24_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word V_25_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word V_26_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word V_27_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_31_27;
          MR_Word V_32_28;
          MR_Word V_33_29;
          MR_Word V_34_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_25_22, HeadVar__3_3, &V_31_27);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_21_18, V_22_19, V_31_27, &V_32_28);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_26_23, V_32_28, &V_33_29);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_23_20, V_24_21, V_33_29, &V_34_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_27_24;
          next_value_of_HeadVar__3_3 = V_34_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box V_37_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_38_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box V_39_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box V_40_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box V_41_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box V_42_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word V_43_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word V_44_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word V_45_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word V_46_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word V_50_44;
          MR_Word V_51_45;
          MR_Word V_52_46;
          MR_Word V_53_47;
          MR_Word V_54_48;
          MR_Word V_55_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_43_38, HeadVar__3_3, &V_50_44);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_37_32, V_38_33, V_50_44, &V_51_45);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_44_39, V_51_45, &V_52_46);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_39_34, V_40_35, V_52_46, &V_53_47);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, V_45_40, V_53_47, &V_54_48);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, V_41_36, V_42_37, V_54_48, &V_55_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = V_46_41;
          next_value_of_HeadVar__3_3 = V_55_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__map__reverse_map_2_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_RevMap_0_10,
  MR_Word * STATE_VARIABLE_RevMap_11)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_18_18;
    MR_Word Keys0_8;
    MR_Box conv0_Keys0_8;

    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_K_15));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_16, TypeInfo_18_18, (MR_Word) (STATE_VARIABLE_RevMap_0_10), Value_6, &conv0_Keys0_8);
    if (succeeded)
    {
      Keys0_8 = ((MR_Word) (conv0_Keys0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Keys_9;
      MR_Word V_5_30 = (MR_Word) (Keys0_8);
      MR_Word V_6_31;
      MR_Word NewMap_37;
      MR_Word conv1_NewMap_37;

      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_K_15, V_5_30, Key_5, &V_6_31);
      Keys_9 = (MR_Word) (V_6_31);
      succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_V_16, TypeInfo_18_18, Value_6, ((MR_Box) (Keys_9)), (MR_Word) (STATE_VARIABLE_RevMap_0_10), &conv1_NewMap_37);
      if (succeeded)
      {
        NewMap_37 = (MR_Word) (conv1_NewMap_37);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *STATE_VARIABLE_RevMap_11 = NewMap_37;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_V_16, TypeInfo_18_18, (MR_String) "map.det_update: key not found", Value_6);
          return;
        }
    }
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word Var_13;
      MR_Word V_4_46;
      MR_Word NewMap_54;
      MR_Word conv2_NewMap_54;

      {
        V_4_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_4_46, 0) = Key_5;
        MR_hl_field(MR_mktag(1), V_4_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_13 = (MR_Word) (V_4_46);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_15));
      }
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_16, TypeInfo_22_22, Value_6, ((MR_Box) (Var_13)), (MR_Word) (STATE_VARIABLE_RevMap_0_10), &conv2_NewMap_54);
      if (succeeded)
      {
        NewMap_54 = (MR_Word) (conv2_NewMap_54);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *STATE_VARIABLE_RevMap_11 = NewMap_54;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_V_16, TypeInfo_22_22, (MR_String) "map.det_insert: key already present", Value_6);
          return;
        }
    }
  }
}

void MR_CALL 
mercury__map__to_sorted_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3,
  MR_Word * L_4)
{
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), L_4);
}

MR_Word MR_CALL 
mercury__map__to_sorted_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3)
{
  {
    MR_Word AL_4;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
    return AL_4;
  }
}

void MR_CALL 
mercury__map__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3,
  MR_Word * L_4)
{
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), L_4);
}

MR_Word MR_CALL 
mercury__map__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3)
{
  {
    MR_Word AL_4;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
    return AL_4;
  }
}

void MR_CALL 
mercury__map__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Keys_4,
  MR_Word Values_5,
  MR_Word * Map_6)
{
  {
    MR_Word AssocList_7;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_4, Values_5, &AssocList_7);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocList_7, (MR_Word) ((MR_Unsigned) 0U), Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  {
    MR_Word M_6;
    MR_Word AssocList_12;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &AssocList_12);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_12, (MR_Word) ((MR_Unsigned) 0U), &M_6);
    return M_6;
  }
}

void MR_CALL 
mercury__map__from_rev_sorted_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word L_3,
  MR_Word * M_4)
{
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, L_3, M_4);
}

MR_Word MR_CALL 
mercury__map__from_rev_sorted_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word M_4;

    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &M_4);
    return M_4;
  }
}

void MR_CALL 
mercury__map__from_sorted_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word L_3,
  MR_Word * M_4)
{
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, L_3, M_4);
}

MR_Word MR_CALL 
mercury__map__from_sorted_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word M_4;

    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &M_4);
    return M_4;
  }
}

void MR_CALL 
mercury__map__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word L_3,
  MR_Word * M_4)
{
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, L_3, (MR_Word) ((MR_Unsigned) 0U), M_4);
}

MR_Word MR_CALL 
mercury__map__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word M_4;

    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, (MR_Word) ((MR_Unsigned) 0U), &M_4);
    return M_4;
  }
}

void MR_CALL 
mercury__map__det_transform_value_4_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_for_V_13, TypeInfo_for_K_14, P_5, K_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_14, (MR_String) "map.det_transform_value: key not found", K_6);
        return;
      }
  }
}

static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__map__IntroducedFrom__pred__det_transform_value__1465__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, wrapper_arg_2);
  }
}

MR_Word MR_CALL 
mercury__map__det_transform_value_3_f_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_K_19,
  MR_Word F_5,
  MR_Box K_6,
  MR_Word STATE_VARIABLE_Map_0_10)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Map_11;
    MR_Word Var_12;
    MR_Word NewMap_25;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&mercury__map_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (mercury__map__det_transform_value_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_V_18));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (F_5));
    }
    succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_for_V_18, TypeInfo_for_K_19, Var_12, K_6, STATE_VARIABLE_Map_0_10, &NewMap_25);
    if (succeeded)
      STATE_VARIABLE_Map_11 = NewMap_25;
    else
      mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_19, (MR_String) "map.det_transform_value: key not found", K_6);
    return STATE_VARIABLE_Map_11;
  }
}

MR_bool MR_CALL 
mercury__map__transform_value_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_for_V_11, TypeInfo_for_K_12, P_5, K_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__keys_and_values_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Word * KeyList_5,
  MR_Word * ValueList_6)
{
  mercury__tree234__keys_and_values_acc_5_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, (MR_Word) ((MR_Unsigned) 0U), KeyList_5, (MR_Word) ((MR_Unsigned) 0U), ValueList_6);
}

void MR_CALL 
mercury__map__values_2_p_0(
  MR_Word TypeInfo_for__K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Word * KeyList_4)
{
  mercury__tree234__values_acc_3_p_0(TypeInfo_for__K_5, TypeInfo_for_V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), KeyList_4);
}

MR_Word MR_CALL 
mercury__map__values_1_f_0(
  MR_Word TypeInfo_for__K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3)
{
  {
    MR_Word Vs_4;

    mercury__tree234__values_acc_3_p_0(TypeInfo_for__K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__map__keys_as_set_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for__V_7,
  MR_Word Map_3,
  MR_Word * KeySet_4)
{
  {
    MR_Word Keys_5;
    MR_Word V_4_17;

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_for__V_7, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_5);
    if ((Keys_5 == (MR_Word) ((MR_Unsigned) 0U)))
      V_4_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_3_18 = (MR_hl_field(MR_mktag(1), Keys_5, (MR_Integer) 0));
      MR_Word V_4_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Keys_5, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_K_6, V_3_18, V_4_19, &V_4_17);
    }
    *KeySet_4 = (MR_Word) (V_4_17);
  }
}

MR_Word MR_CALL 
mercury__map__keys_as_set_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3)
{
  {
    MR_Word KeySet_4;
    MR_Word Keys_9;
    MR_Word V_4_19;

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_9);
    if ((Keys_9 == (MR_Word) ((MR_Unsigned) 0U)))
      V_4_19 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_3_20 = (MR_hl_field(MR_mktag(1), Keys_9, (MR_Integer) 0));
      MR_Word V_4_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Keys_9, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_K_5, V_3_20, V_4_21, &V_4_19);
    }
    KeySet_4 = (MR_Word) (V_4_19);
    return KeySet_4;
  }
}

void MR_CALL 
mercury__map__sorted_keys_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3,
  MR_Word * Keys_4)
{
  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), Keys_4);
}

MR_Word MR_CALL 
mercury__map__sorted_keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3)
{
  {
    MR_Word Keys_4;

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
    return Keys_4;
  }
}

void MR_CALL 
mercury__map__keys_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3,
  MR_Word * Keys_4)
{
  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), Keys_4);
}

MR_Word MR_CALL 
mercury__map__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3)
{
  {
    MR_Word Keys_4;

    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
    return Keys_4;
  }
}

void MR_CALL 
mercury__map__member_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__tree234__member_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, K_5, V_6, cont, cont_env_ptr);
}

MR_Word MR_CALL 
mercury__map__f_100_101_116_95_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;
    MR_Word NewMap_19;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Key_5, Value_7, Map_6, &NewMap_19);
    if (succeeded)
      HeadVar__4_4 = NewMap_19;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", Key_5);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  {
    MR_Word HeadVar__4_4;

    mercury__tree234__set_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Key_5, Value_7, Map_6, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__map__det_elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box Key_4,
  MR_Word Map_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box VPrime_14;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, &VPrime_14);
    if (succeeded)
      HeadVar__3_3 = VPrime_14;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", Key_4);
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__map__elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__remove_smallest_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;
    MR_Word V_9_17;

    succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_Map_0_8, K_5, V_6, STATE_VARIABLE_Map_9, &V_9_17);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__det_remove_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  {
    MR_bool succeeded;
    MR_Box ValuePrime_8;
    MR_Word MapPrime_9;
    MR_Word V_9_20;

    succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, STATE_VARIABLE_Map_0_10, Key_5, &ValuePrime_8, &MapPrime_9, &V_9_20);
    if (succeeded)
    {
      *Value_6 = ValuePrime_8;
      *STATE_VARIABLE_Map_11 = MapPrime_9;
    }
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, (MR_String) "map.det_remove: key not found", Key_5);
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__map__remove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;
    MR_Word V_9_17;

    succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_Map_0_8, Key_5, Value_6, STATE_VARIABLE_Map_9, &V_9_17);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__delete_sorted_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Word Ks_5)
{
  {
    MR_Word M_6;

    mercury__map__delete_sorted_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, M0_4, &M_6);
    return M_6;
  }
}

void MR_CALL 
mercury__map__delete_sorted_list_3_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word DeleteKeys_4,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13)
{
  {
    MR_bool succeeded;
    MR_Integer NumDeleteKeys_6;
    MR_Integer MinSize_7;
    MR_Integer V_5_28;
    MR_Integer Var_14;

    mercury__list__length_acc_3_p_0(TypeInfo_for_K_19, DeleteKeys_4, (MR_Integer) 0, &NumDeleteKeys_6);
    mercury__tree234__find_depth_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, STATE_VARIABLE_Map_0_12, &V_5_28);
    mercury__tree234__min_size_based_on_depth_2_p_0(V_5_28, &MinSize_7);
    Var_14 = (MR_Integer) ((MR_Unsigned) NumDeleteKeys_6 * (MR_Unsigned) 5);
    succeeded = (Var_14 < MinSize_7);
    if (succeeded)
      mercury__map__delete_list_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, DeleteKeys_4, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13);
    else
    {
      MR_Word Pairs0_8;
      MR_Word RevPairs_9;
      MR_Word LeftOverPairs_10;
      MR_Word Pairs_11;
      MR_Word conv0_Pairs_11;

      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, STATE_VARIABLE_Map_0_12, (MR_Word) ((MR_Unsigned) 0U), &Pairs0_8);
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(TypeInfo_for_K_19, DeleteKeys_4, Pairs0_8, (MR_Word) ((MR_Unsigned) 0U), &RevPairs_9, &LeftOverPairs_10);
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0((MR_Word) (RevPairs_9), (MR_Word) (LeftOverPairs_10), &conv0_Pairs_11);
      Pairs_11 = (MR_Word) (conv0_Pairs_11);
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, Pairs_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Map_13);
    }
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * L_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *L_3 = HeadVar__2_2;
    else
    {
      MR_Box X_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = X_5;
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_6;
      next_value_of_HeadVar__2_2 = Var_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPairs_0_3,
  MR_Word * STATE_VARIABLE_RevPairs_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = HeadVar__2_2;
      *STATE_VARIABLE_RevPairs_4 = STATE_VARIABLE_RevPairs_0_3;
    }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_35 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RevPairs_4 = STATE_VARIABLE_RevPairs_0_3;
      }
      else
      {
        MR_Word Pair0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Pairs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box Key0_21 = (MR_hl_field(MR_mktag(0), Pair0_17, (MR_Integer) 0));
        MR_Word Result_23;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_32, &Result_23, Var_35, Key0_21);
        switch (Result_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_34;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_34;
              MR_Word next_value_of_HeadVar__2_2 = Pairs0_18;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevPairs_26_26;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_RevPairs_0_3;

              {
                STATE_VARIABLE_RevPairs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPairs_26_26, 0) = ((MR_Box) (Pair0_17));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPairs_26_26, 1) = ((MR_Box) (STATE_VARIABLE_RevPairs_0_3));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Pairs0_18;
              next_value_of_STATE_VARIABLE_RevPairs_0_3 = STATE_VARIABLE_RevPairs_26_26;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_RevPairs_0_3 = next_value_of_STATE_VARIABLE_RevPairs_0_3;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__delete_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Word Ks_5)
{
  {
    MR_Word M_6;

    mercury__map__delete_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, M0_4, &M_6);
    return M_6;
  }
}

void MR_CALL 
mercury__map__delete_list_3_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box DeleteKey_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word DeleteKeys_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Map_12_12;
      MR_Word V_7_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, STATE_VARIABLE_Map_0_2, DeleteKey_7, &STATE_VARIABLE_Map_12_12, &V_7_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = DeleteKeys_8;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__delete_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box Key_4,
  MR_Word STATE_VARIABLE_Map_0_6,
  MR_Word * STATE_VARIABLE_Map_7)
{
  {
    MR_Word V_7_14;

    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, STATE_VARIABLE_Map_0_6, Key_4, STATE_VARIABLE_Map_7, &V_7_14);
  }
}

MR_Word MR_CALL 
mercury__map__delete_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Box K_5)
{
  {
    MR_Word M_6;
    MR_Word V_7_17;

    mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M0_4, K_5, &M_6, &V_7_17);
    return M_6;
  }
}

MR_Word MR_CALL 
mercury__map__set_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word AL_5)
{
  {
    MR_Word M2_6;

    mercury__map__set_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_5, M1_4, &M2_6);
    return M2_6;
  }
}

void MR_CALL 
mercury__map__set_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Map_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__tree234__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__set_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M1_5,
  MR_Word Ks_6,
  MR_Word Vs_7)
{
  {
    MR_Word M2_8;

    mercury__map__set_from_corresponding_lists_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_6, Vs_7, M1_5, &M2_8);
    return M2_8;
  }
}

void MR_CALL 
mercury__map__set_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Map_0_3,
  MR_Word * STATE_VARIABLE_Map_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Map_4 = STATE_VARIABLE_Map_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.set_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.set_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box V_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Vs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Map_27_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Map_0_3;

        mercury__tree234__set_4_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, Var_32, V_22, STATE_VARIABLE_Map_0_3, &STATE_VARIABLE_Map_27_27);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_31;
        next_value_of_HeadVar__2_2 = Vs_23;
        next_value_of_STATE_VARIABLE_Map_0_3 = STATE_VARIABLE_Map_27_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Map_0_3 = next_value_of_STATE_VARIABLE_Map_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__set_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

MR_Word MR_CALL 
mercury__map__set_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M1_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word M2_8;

    mercury__tree234__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M1_5, &M2_8);
    return M2_8;
  }
}

void MR_CALL 
mercury__map__det_update_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_5, V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", K_5);
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__map__det_update_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word M_8;
    MR_Word NewMap_16;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, &NewMap_16);
    if (succeeded)
      M_8 = NewMap_16;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.det_update: key not found", K_6);
    return M_8;
  }
}

MR_bool MR_CALL 
mercury__map__update_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__update_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * M_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, M_8);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__search_insert_5_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  mercury__tree234__search_insert_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_6, V_7, MaybeOldV_8, STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

MR_Word MR_CALL 
mercury__map__det_insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M1_4,
  MR_Word AL_5)
{
  {
    MR_Word M2_6;

    mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_5, M1_4, &M2_6);
    return M2_6;
  }
}

void MR_CALL 
mercury__map__det_insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Map_14_14;
      MR_Word NewMap_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_Map_0_2, &NewMap_23);
      if (succeeded)
        STATE_VARIABLE_Map_14_14 = NewMap_23;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, (MR_String) "map.det_insert: key already present", K_7);
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__det_insert_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M1_5,
  MR_Word Ks_6,
  MR_Word Vs_7)
{
  {
    MR_Word M2_8;

    mercury__map__det_insert_from_corresponding_lists_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_6, Vs_7, M1_5, &M2_8);
    return M2_8;
  }
}

void MR_CALL 
mercury__map__det_insert_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Map_0_3,
  MR_Word * STATE_VARIABLE_Map_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Map_4 = STATE_VARIABLE_Map_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_insert_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_insert_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box V_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Vs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Map_27_27;
        MR_Word NewMap_38;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Map_0_3;

        succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, Var_32, V_22, STATE_VARIABLE_Map_0_3, &NewMap_38);
        if (succeeded)
          STATE_VARIABLE_Map_27_27 = NewMap_38;
        else
          {
            mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, (MR_String) "map.det_insert: key already present", Var_32);
            return;
          }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_31;
        next_value_of_HeadVar__2_2 = Vs_23;
        next_value_of_STATE_VARIABLE_Map_0_3 = STATE_VARIABLE_Map_27_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Map_0_3 = next_value_of_STATE_VARIABLE_Map_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  {
    MR_bool succeeded;
    MR_Word NewMap_8;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_5, V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
    if (succeeded)
      *STATE_VARIABLE_Map_10 = NewMap_8;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", K_5);
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__map__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M1_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word M2_8;
    MR_Word NewMap_16;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M1_5, &NewMap_16);
    if (succeeded)
      M2_8 = NewMap_16;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.det_insert: key already present", K_6);
    return M2_8;
  }
}

MR_bool MR_CALL 
mercury__map__insert_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__insert_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M1_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * M2_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M1_5, M2_8);
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__det_min_key_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_3)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__2_2;
    MR_Box K_4;

    succeeded = mercury__tree234__min_key_1_f_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_3, &K_4);
    if (succeeded)
      HeadVar__2_2 = K_4;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_min_key\'/1", (MR_String) "map.min_key failed");
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__map__min_key_1_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word M_3,
  MR_Box * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__min_key_1_f_0(TypeInfo_for_K_4, TypeInfo_for_V_5, M_3, HeadVar__2_2);
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__det_max_key_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_3)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__2_2;
    MR_Box K_4;

    succeeded = mercury__tree234__max_key_1_f_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_3, &K_4);
    if (succeeded)
      HeadVar__2_2 = K_4;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_max_key\'/1", (MR_String) "map.max_key failed");
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__map__max_key_1_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word M_3,
  MR_Box * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__max_key_1_f_0(TypeInfo_for_K_4, TypeInfo_for_V_5, M_3, HeadVar__2_2);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__upper_bound_lookup_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;
    MR_Box KPrime_9;
    MR_Box VPrime_10;

    succeeded = mercury__tree234__upper_bound_search_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, Map_5, SearchK_6, &KPrime_9, &VPrime_10);
    if (succeeded)
    {
      *K_7 = KPrime_9;
      *V_8 = VPrime_10;
    }
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "map.upper_bound_lookup: key not found", SearchK_6);
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__map__upper_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__upper_bound_search_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Map_5, SearchK_6, K_7, V_8);
    return succeeded;
  }
}

void MR_CALL 
mercury__map__lower_bound_lookup_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;
    MR_Box KPrime_9;
    MR_Box VPrime_10;

    succeeded = mercury__tree234__lower_bound_search_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, Map_5, SearchK_6, &KPrime_9, &VPrime_10);
    if (succeeded)
    {
      *K_7 = KPrime_9;
      *V_8 = VPrime_10;
    }
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "map.lower_bound_lookup: key not found", SearchK_6);
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__map__lower_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__lower_bound_search_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Map_5, SearchK_6, K_7, V_8);
    return succeeded;
  }
}

static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__map__inverse_search_3_p_0_env_0_s * env_ptr = (struct mercury__map__inverse_search_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_5, (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__Var_9);
    if ((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded)
      ((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont)((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__map__inverse_search_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Box V_5,
  MR_Box * K_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__map__inverse_search_3_p_0_env_0_s env;

    (env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8 = TypeInfo_for_V_8;
    (env).mercury__map__inverse_search_3_p_0_env_0__V_5 = V_5;
    (env).mercury__map__inverse_search_3_p_0_env_0__cont = cont;
    (env).mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__tree234__member_3_p_0(TypeInfo_for_K_7, (env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, Map_4, K_6, &(env).mercury__map__inverse_search_3_p_0_env_0__Var_9, mercury__map__inverse_search_3_p_0_1, &env);
  }
}

void MR_CALL 
mercury__map__lookup_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Box VPrime_7;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Map_4, K_5, &VPrime_7);
    if (succeeded)
      *V_6 = VPrime_7;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", K_5);
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__map__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box VPrime_12;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, &VPrime_12);
    if (succeeded)
      V_6 = VPrime_12;
    else
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", K_5);
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__map__search_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, V_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__contains_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for__V_7,
  MR_Word Map_3,
  MR_Box K_4)
{
  {
    MR_bool succeeded;
    MR_Box Var_5;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for__V_7, Map_3, K_4, &Var_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__is_empty_1_p_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word M_2)
{
  {
    MR_bool succeeded = (M_2 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__singleton_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Box V_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = K_4;
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = V_5;
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__map__init_1_p_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word * M_2)
{
  *M_2 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__map__init_0_f_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map____Unify____map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__map____Compare____map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__map__init(void)
{
}

void mercury__map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__map__map__type_ctor_info_map_2);
}

void mercury__map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__map__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module map.
