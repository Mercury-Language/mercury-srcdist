/*
** Automatically generated from `map.m'
** by the Mercury compiler,
** version rotd-2026-03-03
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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
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

static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1745__1_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word F_5,
  MR_Box LambdaHeadVar__1_14,
  MR_Box * LambdaHeadVar__2_15);

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_95_95_49_3_p_0(
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_67);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_68);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word Var_64,
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

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_95_95_49_3_p_0(
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_24);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_33,
  MR_Word TypeInfo_for_K_28,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_33,
  MR_Word TypeInfo_for_K_28,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23);

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
  MR_Word TypeInfo_for_K_31,
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

static /* final */ const MR_Box mercury__map_scalar_common_3[1][5];

static /* final */ const MR_Integer mercury__map_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__map_scalar_common_5[1][7];




static /* final */ const MR_Box mercury__map_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__map_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__map_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__map_scalar_common_5[1][7] = {
  /* row   0 */
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__map____Unify____map_2_0_10001)),
  ((MR_Box) (mercury__map____Compare____map_2_0_10001)),
  (MR_String) "map",
  (MR_String) "map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, K_5, V_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, Map_4, K_5, V_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, V_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, M_4, K_5, V_6);
  return succeeded;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Word K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;
  MR_Box VPrime_7;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_12, TypeInfo_for_K_9, TypeInfo_for_V_10, Map_4, K_5, &VPrime_7);
  if (succeeded)
    *V_6 = VPrime_7;
  else
    {
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
      return;
    }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Integer K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;
  MR_Box VPrime_7;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_10, Map_4, K_5, &VPrime_7);
  if (succeeded)
    *V_6 = VPrime_7;
  else
    {
      mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
      return;
    }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Word K_5)
{
  MR_bool succeeded;
  MR_Box V_6;
  MR_Box VPrime_11;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, &VPrime_11);
  if (succeeded)
    V_6 = VPrime_11;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
  return V_6;
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Integer K_5)
{
  MR_bool succeeded;
  MR_Box V_6;
  MR_Box VPrime_9;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_8, M_4, K_5, &VPrime_9);
  if (succeeded)
    V_6 = VPrime_9;
  else
    mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (K_5)));
  return V_6;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_13,
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;
  MR_Word conv0_STATE_VARIABLE_Map_9;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, ((MR_Box) (K_5)), V_6, (MR_Word) (STATE_VARIABLE_Map_0_8), &conv0_STATE_VARIABLE_Map_9);
  if (succeeded)
  {
    *STATE_VARIABLE_Map_9 = (MR_Word) (conv0_STATE_VARIABLE_Map_9);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_11, ((MR_Box) (K_5)), V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_17,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
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

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
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

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_13,
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_13, TypeInfo_for_K_10, TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_11, ((MR_Box) (K_5)), V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_13,
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_13, TypeInfo_for_K_10, TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_11,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_17,
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  MR_bool succeeded;
  MR_Word NewMap_8;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_17, TypeInfo_for_K_13, TypeInfo_for_V_14, K_5, V_6, STATE_VARIABLE_Map_0_9, &NewMap_8);
  if (succeeded)
    *STATE_VARIABLE_Map_10 = NewMap_8;
  else
    {
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (K_5)));
      return;
    }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Integer K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
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

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_5_p_0(
  MR_Word Var_15,
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  MR_Word conv0_STATE_VARIABLE_Map_11;

  mercury__tree234__search_insert_5_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, ((MR_Box) (K_6)), V_7, MaybeOldV_8, (MR_Word) (STATE_VARIABLE_Map_0_10), &conv0_STATE_VARIABLE_Map_11);
  *STATE_VARIABLE_Map_11 = (MR_Word) (conv0_STATE_VARIABLE_Map_11);
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Integer K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  mercury__tree234__search_insert_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_13, ((MR_Box) (K_6)), V_7, MaybeOldV_8, STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word OverlayMap_6;
  MR_Word AssocListB_11;
  MR_Word conv0_AssocListB_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (MapB_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocListB_11);
  AssocListB_11 = (MR_Word) (conv0_AssocListB_11);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, AssocListB_11, MapA_4, &OverlayMap_6);
  return OverlayMap_6;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * OverlayMap_6)
{
  MR_Word AssocListB_7;
  MR_Word conv0_AssocListB_7;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_Word) (MapB_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_AssocListB_7);
  AssocListB_7 = (MR_Word) (conv0_AssocListB_7);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_11, TypeInfo_for_K_8, TypeInfo_for_V_9, AssocListB_7, MapA_4, OverlayMap_6);
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word KeySet_5)
{
  MR_Word SelectMap_6;
  MR_Word Keys_11 = (MR_Word) (KeySet_5);
  MR_Word RevSelectAL_13;
  MR_Word conv0_SelectMap_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_11, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_13);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (RevSelectAL_13), &conv0_SelectMap_6);
  SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
  return SelectMap_6;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word FullMap_4,
  MR_Word KeySet_5,
  MR_Word * SelectMap_6)
{
  MR_Word Keys_7 = (MR_Word) (KeySet_5);
  MR_Word RevSelectAL_12;
  MR_Word conv0_SelectMap_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_11, TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_7, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_12);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_Word) (RevSelectAL_12), &conv0_SelectMap_6);
  *SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_10,
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word Keys_5)
{
  MR_Word SelectMap_6;
  MR_Word RevSelectAL_11;
  MR_Word conv0_SelectMap_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_10, TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_11);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_Word) (RevSelectAL_11), &conv0_SelectMap_6);
  SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
  return SelectMap_6;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word FullMap_4,
  MR_Word Keys_5,
  MR_Word * SelectMap_6)
{
  MR_Word RevSelectAL_7;
  MR_Word conv0_SelectMap_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_12, TypeInfo_for_K_9, TypeInfo_for_V_10, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_7);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_Word) (RevSelectAL_7), &conv0_SelectMap_6);
  *SelectMap_6 = (MR_Word) (conv0_SelectMap_6);
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_7,
  MR_Integer Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
  return succeeded;
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word TypeInfo_for_V_7,
  MR_Integer Key_4,
  MR_Word Map_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Box VPrime_9;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_for_V_7, Map_5, Key_4, &VPrime_9);
  if (succeeded)
    HeadVar__3_3 = VPrime_9;
  else
    mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (Key_4)));
  return HeadVar__3_3;
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_f_0(
  MR_Word Var_9,
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word Key_4,
  MR_Word Map_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Box VPrime_11;

  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_9, TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, &VPrime_11);
  if (succeeded)
    HeadVar__3_3 = VPrime_11;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (Key_4)));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word TypeInfo_for_V_9,
  MR_Integer Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  MR_Word HeadVar__4_4;

  mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, Map_6, &HeadVar__4_4);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  MR_Word HeadVar__4_4;
  MR_Word conv0_HeadVar__4_4;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, (MR_Word) (Map_6), &conv0_HeadVar__4_4);
  HeadVar__4_4 = (MR_Word) (conv0_HeadVar__4_4);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word TypeInfo_for_V_9,
  MR_Integer Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word NewMap_10;

  succeeded = mercury__tree234__update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, Map_6, &NewMap_10);
  if (succeeded)
    HeadVar__4_4 = NewMap_10;
  else
    mercury__require__report_lookup_error_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (Key_5)));
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_f_0(
  MR_Word Var_11,
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word NewMap_12;
  MR_Word conv0_NewMap_12;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, ((MR_Box) (Key_5)), Value_7, (MR_Word) (Map_6), &conv0_NewMap_12);
  if (succeeded)
  {
    NewMap_12 = (MR_Word) (conv0_NewMap_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    HeadVar__4_4 = NewMap_12;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (Key_5)));
  return HeadVar__4_4;
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(
  MR_Word Var_21,
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
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
      MR_Word K_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ks_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevSelectAL_1_16;
      MR_Box V_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;

      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(Var_21, TypeInfo_for_K_18, TypeInfo_for_V_19, HeadVar__2_2, K_9, &V_13);
      if (succeeded)
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (K_9));
          MR_hl_field(0, Var_17, 1) = V_13;
        }
        {
          STATE_VARIABLE_RevSelectAL_1_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_16, 0) = ((MR_Box) (Var_17));
          MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_16, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
        }
      }
      else
        STATE_VARIABLE_RevSelectAL_1_16 = STATE_VARIABLE_RevSelectAL_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ks_10;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_1_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevSelectAL_0_3 = next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
  MR_Word Var_18,
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
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
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Map_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
      V_8 = (MR_hl_field(0, Var_13, 1));
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(Var_18, TypeInfo_for_K_15, TypeInfo_for_V_16, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_111_118_101_114_108_97_121_95_108_97_114_103_101_95_109_97_112_95_50_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(
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
      MR_Word AssocList_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Map2_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Map1_10;
      MR_Word conv0_Map1_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      K_5 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
      V_6 = (MR_hl_field(0, Var_12, 1));
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
mercury__map__IntroducedFrom__pred__det_transform_value__1745__1_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word F_5,
  MR_Box LambdaHeadVar__1_14,
  MR_Box * LambdaHeadVar__2_15)
{
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_5, 1))));

  *LambdaHeadVar__2_15 = func_0(((MR_Box) (F_5)), LambdaHeadVar__1_14);
}

void MR_CALL 
mercury__map____Compare____map_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__map____Unify____map_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
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
  MR_bool succeeded;

  succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList1_6, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
  return succeeded;
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
  MR_bool succeeded;

  succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocList2_7, STATE_VARIABLE_RevCommonAssocList_0_18, STATE_VARIABLE_RevCommonAssocList_19);
  return succeeded;
}

MR_Word MR_CALL 
mercury__map__old_merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word MergedMap_6;

  mercury__map__old_merge_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MapA_4, MapB_5, &MergedMap_6);
  return MergedMap_6;
}

void MR_CALL 
mercury__map__old_merge_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * MergedMap_6)
{
  MR_Word TypeInfo_13_13;
  MR_Word ListA_7;
  MR_Word ListB_8;
  MR_Word MergedList_9;
  MR_Word conv0_MergedList_9;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, MapA_4, (MR_Word) ((MR_Unsigned) 0U), &ListA_7);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &ListB_8);
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_K_10));
    MR_hl_field(0, TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_for_V_11));
  }
  mercury__list__merge_3_p_0(TypeInfo_13_13, (MR_Word) (ListA_7), (MR_Word) (ListB_8), &conv0_MergedList_9);
  MergedList_9 = (MR_Word) (conv0_MergedList_9);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, MergedList_9, (MR_Word) ((MR_Unsigned) 0U), MergedMap_6);
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_6(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_6(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_5(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_5(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

MR_bool MR_CALL 
mercury__map__map_values_only_foldl3_9_p_4(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_only_foldl3_9_p_4(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_3(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_3(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_2(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_2(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_1(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_1(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_only_foldl3_9_p_0(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_only_foldl3_9_p_0(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_6(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_6(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_5(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_5(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

MR_bool MR_CALL 
mercury__map__map_values_foldl3_9_p_4(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_foldl3_9_p_4(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_3(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_2(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_2(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_3(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_1(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_1(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_0(
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_W_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word TypeInfo_for_K_28,
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
  mercury__tree234__map_values_foldl3_9_p_0(TypeInfo_for_V_23, TypeInfo_for_W_24, TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, TypeInfo_for_K_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_values_only_foldl2_7_p_5(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_only_foldl2_7_p_5(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_only_foldl2_7_p_4(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_only_foldl2_7_p_4(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

MR_bool MR_CALL 
mercury__map__map_values_only_foldl2_7_p_3(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_only_foldl2_7_p_3(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_only_foldl2_7_p_2(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_only_foldl2_7_p_2(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_only_foldl2_7_p_1(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_only_foldl2_7_p_1(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_only_foldl2_7_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_only_foldl2_7_p_0(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_5(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_5(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_4(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_4(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

MR_bool MR_CALL 
mercury__map__map_values_foldl2_7_p_3(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_foldl2_7_p_3(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_2(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_2(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_1(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_1(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word TypeInfo_for_B_21,
  MR_Word TypeInfo_for_K_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_values_foldl2_7_p_0(TypeInfo_for_V_18, TypeInfo_for_W_19, TypeInfo_for_A_20, TypeInfo_for_B_21, TypeInfo_for_K_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_values_only_foldl_5_p_4(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_only_foldl_5_p_4(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_only_foldl_5_p_3(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_only_foldl_5_p_3(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

MR_bool MR_CALL 
mercury__map__map_values_only_foldl_5_p_2(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_only_foldl_5_p_2(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_only_foldl_5_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_only_foldl_5_p_1(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_only_foldl_5_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_only_foldl_5_p_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_4(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_4(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_3(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_3(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

MR_bool MR_CALL 
mercury__map__map_values_foldl_5_p_2(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_foldl_5_p_2(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
  return succeeded;
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_1(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_1(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_K_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_values_foldl_5_p_0(TypeInfo_for_V_13, TypeInfo_for_W_14, TypeInfo_for_A_15, TypeInfo_for_K_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_10(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_10(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_9(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_9(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_8(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_8(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_7(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl4_11_p_7(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_6(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl4_11_p_6(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl4_11_p_5(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl4_11_p_5(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
  return succeeded;
}

void MR_CALL 
mercury__map__map_foldl4_11_p_4(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_3(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_3(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_4(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_2(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_2(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_1(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_1(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl4_11_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_W_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
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
  mercury__tree234__map_foldl4_11_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_W_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, Pred_12, STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19, STATE_VARIABLE_AccA_0_20, STATE_VARIABLE_AccA_21, STATE_VARIABLE_AccB_0_22, STATE_VARIABLE_AccB_23, STATE_VARIABLE_AccC_0_24, STATE_VARIABLE_AccC_25, STATE_VARIABLE_AccD_0_26, STATE_VARIABLE_AccD_27);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_10(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_10(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_9(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_9(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_8(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_8(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_7(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl3_9_p_7(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_6(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl3_9_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_5(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl3_9_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
  return succeeded;
}

void MR_CALL 
mercury__map__map_foldl3_9_p_4(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_3(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_2(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_1(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl3_9_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
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
  mercury__tree234__map_foldl3_9_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_W_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, Pred_10, STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16, STATE_VARIABLE_AccA_0_17, STATE_VARIABLE_AccA_18, STATE_VARIABLE_AccB_0_19, STATE_VARIABLE_AccB_20, STATE_VARIABLE_AccC_0_21, STATE_VARIABLE_AccC_22);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_9(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_9(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_8(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_8(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_7(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_7(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_6(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl2_7_p_6(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl2_7_p_5(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl2_7_p_4(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
  return succeeded;
}

void MR_CALL 
mercury__map__map_foldl2_7_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_2(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_3(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_1(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl2_7_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_W_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word Pred_8,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15,
  MR_Box STATE_VARIABLE_AccB_0_16,
  MR_Box * STATE_VARIABLE_AccB_17)
{
  mercury__tree234__map_foldl2_7_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, TypeInfo_for_W_20, TypeInfo_for_A_21, TypeInfo_for_B_22, Pred_8, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13, STATE_VARIABLE_AccA_0_14, STATE_VARIABLE_AccA_15, STATE_VARIABLE_AccB_0_16, STATE_VARIABLE_AccB_17);
}

void MR_CALL 
mercury__map__map_foldl_5_p_8(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_8(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_7(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_7(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_6(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_6(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_5(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl_5_p_5(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_4(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl_5_p_4(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_3(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__map_foldl_5_p_3(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
  return succeeded;
}

void MR_CALL 
mercury__map__map_foldl_5_p_2(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_2(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_1(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_1(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
}

void MR_CALL 
mercury__map__map_foldl_5_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_W_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Pred_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10,
  MR_Box STATE_VARIABLE_AccA_0_11,
  MR_Box * STATE_VARIABLE_AccA_12)
{
  mercury__tree234__map_foldl_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, TypeInfo_for_W_15, TypeInfo_for_A_16, Pred_6, STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10, STATE_VARIABLE_AccA_0_11, STATE_VARIABLE_AccA_12);
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
  MR_Word Var_11;

  mercury__tree234__filter_map_values_only_acc_4_p_0(TypeInfo_for_V_7, TypeInfo_for_W_8, TypeInfo_for_K_9, Pred_4, Map0_5, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_W_8, Var_11, Map_6);
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
  MR_Word Var_11;

  mercury__tree234__filter_map_values_acc_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, TypeInfo_for_W_9, Pred_4, Map0_5, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_W_9, Var_11, Map_6);
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_only_3_p_1(TypeInfo_for_V_7, TypeInfo_for_W_8, TypeInfo_for_K_9, Pred_4, Map0_5, Map_6);
  return succeeded;
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
  MR_Word M0_5)
{
  MR_Word M_6;

  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(F_4, M0_5, &M_6);
  return M_6;
}

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_95_95_49_3_p_0(
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_67)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfHeadVar__3_67 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_8 = (MR_hl_field(1, HeadVar__2_2, 0));
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 1));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
          MR_Box Var_14;
          MR_Word Var_15;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          MR_Word * AddrSCCcallarg_16_66;
          MR_Word HeadVar__3_74;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_67;

          Var_14 = func_5(((MR_Box) (Var_63)), Var_9);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_10, &Var_15);
          {
            HeadVar__3_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_74, 0) = Var_8;
            MR_hl_field(1, HeadVar__3_74, 1) = Var_14;
            MR_hl_field(1, HeadVar__3_74, 2) = ((MR_Box) (Var_15));
            MR_hl_field(1, HeadVar__3_74, 3) = NULL;
          }
          AddrSCCcallarg_16_66 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_74, 3)));
          *AddrOfHeadVar__3_67 = HeadVar__3_74;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_AddrOfHeadVar__3_67 = AddrSCCcallarg_16_66;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_67 = next_value_of_AddrOfHeadVar__3_67;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 0));
          MR_Box Var_22 = (MR_hl_field(2, HeadVar__2_2, 1));
          MR_Box Var_23 = (MR_hl_field(2, HeadVar__2_2, 2));
          MR_Box Var_24 = (MR_hl_field(2, HeadVar__2_2, 3));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
          MR_Box Var_30;
          MR_Box Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Word * AddrSCCcallarg_34_65;
          MR_Word HeadVar__3_71;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_67;

          Var_30 = func_3(((MR_Box) (Var_63)), Var_22);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          Var_31 = func_4(((MR_Box) (Var_63)), Var_24);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_25, &Var_32);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_26, &Var_33);
          {
            HeadVar__3_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, HeadVar__3_71, 0) = Var_21;
            MR_hl_field(2, HeadVar__3_71, 1) = Var_30;
            MR_hl_field(2, HeadVar__3_71, 2) = Var_23;
            MR_hl_field(2, HeadVar__3_71, 3) = Var_31;
            MR_hl_field(2, HeadVar__3_71, 4) = ((MR_Box) (Var_32));
            MR_hl_field(2, HeadVar__3_71, 5) = ((MR_Box) (Var_33));
            MR_hl_field(2, HeadVar__3_71, 6) = NULL;
          }
          AddrSCCcallarg_34_65 = (MR_Word *) (&(MR_hl_field(2, HeadVar__3_71, 6)));
          *AddrOfHeadVar__3_67 = HeadVar__3_71;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_27;
          next_value_of_AddrOfHeadVar__3_67 = AddrSCCcallarg_34_65;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_67 = next_value_of_AddrOfHeadVar__3_67;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_39 = (MR_hl_field(3, HeadVar__2_2, 0));
          MR_Box Var_40 = (MR_hl_field(3, HeadVar__2_2, 1));
          MR_Box Var_41 = (MR_hl_field(3, HeadVar__2_2, 2));
          MR_Box Var_42 = (MR_hl_field(3, HeadVar__2_2, 3));
          MR_Box Var_43 = (MR_hl_field(3, HeadVar__2_2, 4));
          MR_Box Var_44 = (MR_hl_field(3, HeadVar__2_2, 5));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
          MR_Box Var_51;
          MR_Box Var_52;
          MR_Box Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_Word * AddrSCCcallarg_57_64;
          MR_Word HeadVar__3_68;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_67;

          Var_51 = func_0(((MR_Box) (Var_63)), Var_40);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          Var_52 = func_1(((MR_Box) (Var_63)), Var_42);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
          Var_53 = func_2(((MR_Box) (Var_63)), Var_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_45, &Var_54);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_46, &Var_55);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_47, &Var_56);
          {
            HeadVar__3_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, HeadVar__3_68, 0) = Var_39;
            MR_hl_field(3, HeadVar__3_68, 1) = Var_51;
            MR_hl_field(3, HeadVar__3_68, 2) = Var_41;
            MR_hl_field(3, HeadVar__3_68, 3) = Var_52;
            MR_hl_field(3, HeadVar__3_68, 4) = Var_43;
            MR_hl_field(3, HeadVar__3_68, 5) = Var_53;
            MR_hl_field(3, HeadVar__3_68, 6) = ((MR_Box) (Var_54));
            MR_hl_field(3, HeadVar__3_68, 7) = ((MR_Box) (Var_55));
            MR_hl_field(3, HeadVar__3_68, 8) = ((MR_Box) (Var_56));
            MR_hl_field(3, HeadVar__3_68, 9) = NULL;
          }
          AddrSCCcallarg_57_64 = (MR_Word *) (&(MR_hl_field(3, HeadVar__3_68, 9)));
          *AddrOfHeadVar__3_67 = HeadVar__3_68;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_48;
          next_value_of_AddrOfHeadVar__3_67 = AddrSCCcallarg_57_64;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_67 = next_value_of_AddrOfHeadVar__3_67;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word Var_63,
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
        MR_Box Var_8 = (MR_hl_field(1, HeadVar__2_2, 0));
        MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 1));
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
        MR_Box Var_14;
        MR_Word Var_15;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        MR_Word * AddrSCCcallarg_16_66;

        Var_14 = func_5(((MR_Box) (Var_63)), Var_9);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_10, &Var_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_8;
          MR_hl_field(1, base, 1) = Var_14;
          MR_hl_field(1, base, 2) = ((MR_Box) (Var_15));
          MR_hl_field(1, base, 3) = NULL;
        }
        AddrSCCcallarg_16_66 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 3)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_95_95_49_3_p_0(Var_63, Var_11, AddrSCCcallarg_16_66);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 0));
        MR_Box Var_22 = (MR_hl_field(2, HeadVar__2_2, 1));
        MR_Box Var_23 = (MR_hl_field(2, HeadVar__2_2, 2));
        MR_Box Var_24 = (MR_hl_field(2, HeadVar__2_2, 3));
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
        MR_Box Var_30;
        MR_Box Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
        MR_Word * AddrSCCcallarg_34_65;

        Var_30 = func_3(((MR_Box) (Var_63)), Var_22);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        Var_31 = func_4(((MR_Box) (Var_63)), Var_24);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_25, &Var_32);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_26, &Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(2, base, 0) = Var_21;
          MR_hl_field(2, base, 1) = Var_30;
          MR_hl_field(2, base, 2) = Var_23;
          MR_hl_field(2, base, 3) = Var_31;
          MR_hl_field(2, base, 4) = ((MR_Box) (Var_32));
          MR_hl_field(2, base, 5) = ((MR_Box) (Var_33));
          MR_hl_field(2, base, 6) = NULL;
        }
        AddrSCCcallarg_34_65 = (MR_Word *) (&(MR_hl_field(2, *HeadVar__3_3, 6)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_95_95_49_3_p_0(Var_63, Var_27, AddrSCCcallarg_34_65);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box Var_39 = (MR_hl_field(3, HeadVar__2_2, 0));
        MR_Box Var_40 = (MR_hl_field(3, HeadVar__2_2, 1));
        MR_Box Var_41 = (MR_hl_field(3, HeadVar__2_2, 2));
        MR_Box Var_42 = (MR_hl_field(3, HeadVar__2_2, 3));
        MR_Box Var_43 = (MR_hl_field(3, HeadVar__2_2, 4));
        MR_Box Var_44 = (MR_hl_field(3, HeadVar__2_2, 5));
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
        MR_Box Var_51;
        MR_Box Var_52;
        MR_Box Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Word * AddrSCCcallarg_57_64;

        Var_51 = func_0(((MR_Box) (Var_63)), Var_40);
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        Var_52 = func_1(((MR_Box) (Var_63)), Var_42);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Var_63, 1))));
        Var_53 = func_2(((MR_Box) (Var_63)), Var_44);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_45, &Var_54);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_46, &Var_55);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(Var_63, Var_47, &Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(3, base, 0) = Var_39;
          MR_hl_field(3, base, 1) = Var_51;
          MR_hl_field(3, base, 2) = Var_41;
          MR_hl_field(3, base, 3) = Var_52;
          MR_hl_field(3, base, 4) = Var_43;
          MR_hl_field(3, base, 5) = Var_53;
          MR_hl_field(3, base, 6) = ((MR_Box) (Var_54));
          MR_hl_field(3, base, 7) = ((MR_Box) (Var_55));
          MR_hl_field(3, base, 8) = ((MR_Box) (Var_56));
          MR_hl_field(3, base, 9) = NULL;
        }
        AddrSCCcallarg_57_64 = (MR_Word *) (&(MR_hl_field(3, *HeadVar__3_3, 9)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_95_95_49_3_p_0(Var_63, Var_48, AddrSCCcallarg_57_64);
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
  MR_bool succeeded;

  succeeded = mercury__tree234__map_values_3_p_1(TypeInfo_for_K_7, TypeInfo_for_V_8, TypeInfo_for_W_9, Pred_4, Map0_5, Map_6);
  return succeeded;
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
  MR_Word M0_5)
{
  MR_Word M_6;

  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(F_4, M0_5, &M_6);
  return M_6;
}

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_68)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfHeadVar__3_68 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_8 = (MR_hl_field(1, HeadVar__2_2, 0));
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 1));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
          MR_Box Var_14;
          MR_Word Var_15;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          MR_Word * AddrSCCcallarg_16_67;
          MR_Word HeadVar__3_75;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_68;

          Var_14 = func_5(((MR_Box) (Var_64)), Var_8, Var_9);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_10, &Var_15);
          {
            HeadVar__3_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_75, 0) = Var_8;
            MR_hl_field(1, HeadVar__3_75, 1) = Var_14;
            MR_hl_field(1, HeadVar__3_75, 2) = ((MR_Box) (Var_15));
            MR_hl_field(1, HeadVar__3_75, 3) = NULL;
          }
          AddrSCCcallarg_16_67 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_75, 3)));
          *AddrOfHeadVar__3_68 = HeadVar__3_75;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_AddrOfHeadVar__3_68 = AddrSCCcallarg_16_67;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_68 = next_value_of_AddrOfHeadVar__3_68;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 0));
          MR_Box Var_22 = (MR_hl_field(2, HeadVar__2_2, 1));
          MR_Box Var_23 = (MR_hl_field(2, HeadVar__2_2, 2));
          MR_Box Var_24 = (MR_hl_field(2, HeadVar__2_2, 3));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
          MR_Box Var_30;
          MR_Box Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
          MR_Word * AddrSCCcallarg_34_66;
          MR_Word HeadVar__3_72;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_68;

          Var_30 = func_3(((MR_Box) (Var_64)), Var_21, Var_22);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          Var_31 = func_4(((MR_Box) (Var_64)), Var_23, Var_24);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_25, &Var_32);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_26, &Var_33);
          {
            HeadVar__3_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, HeadVar__3_72, 0) = Var_21;
            MR_hl_field(2, HeadVar__3_72, 1) = Var_30;
            MR_hl_field(2, HeadVar__3_72, 2) = Var_23;
            MR_hl_field(2, HeadVar__3_72, 3) = Var_31;
            MR_hl_field(2, HeadVar__3_72, 4) = ((MR_Box) (Var_32));
            MR_hl_field(2, HeadVar__3_72, 5) = ((MR_Box) (Var_33));
            MR_hl_field(2, HeadVar__3_72, 6) = NULL;
          }
          AddrSCCcallarg_34_66 = (MR_Word *) (&(MR_hl_field(2, HeadVar__3_72, 6)));
          *AddrOfHeadVar__3_68 = HeadVar__3_72;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_27;
          next_value_of_AddrOfHeadVar__3_68 = AddrSCCcallarg_34_66;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_68 = next_value_of_AddrOfHeadVar__3_68;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_39 = (MR_hl_field(3, HeadVar__2_2, 0));
          MR_Box Var_40 = (MR_hl_field(3, HeadVar__2_2, 1));
          MR_Box Var_41 = (MR_hl_field(3, HeadVar__2_2, 2));
          MR_Box Var_42 = (MR_hl_field(3, HeadVar__2_2, 3));
          MR_Box Var_43 = (MR_hl_field(3, HeadVar__2_2, 4));
          MR_Box Var_44 = (MR_hl_field(3, HeadVar__2_2, 5));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
          MR_Box Var_51;
          MR_Box Var_52;
          MR_Box Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
          MR_Word * AddrSCCcallarg_57_65;
          MR_Word HeadVar__3_69;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_68;

          Var_51 = func_0(((MR_Box) (Var_64)), Var_39, Var_40);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          Var_52 = func_1(((MR_Box) (Var_64)), Var_41, Var_42);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
          Var_53 = func_2(((MR_Box) (Var_64)), Var_43, Var_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_45, &Var_54);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_46, &Var_55);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_47, &Var_56);
          {
            HeadVar__3_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, HeadVar__3_69, 0) = Var_39;
            MR_hl_field(3, HeadVar__3_69, 1) = Var_51;
            MR_hl_field(3, HeadVar__3_69, 2) = Var_41;
            MR_hl_field(3, HeadVar__3_69, 3) = Var_52;
            MR_hl_field(3, HeadVar__3_69, 4) = Var_43;
            MR_hl_field(3, HeadVar__3_69, 5) = Var_53;
            MR_hl_field(3, HeadVar__3_69, 6) = ((MR_Box) (Var_54));
            MR_hl_field(3, HeadVar__3_69, 7) = ((MR_Box) (Var_55));
            MR_hl_field(3, HeadVar__3_69, 8) = ((MR_Box) (Var_56));
            MR_hl_field(3, HeadVar__3_69, 9) = NULL;
          }
          AddrSCCcallarg_57_65 = (MR_Word *) (&(MR_hl_field(3, HeadVar__3_69, 9)));
          *AddrOfHeadVar__3_68 = HeadVar__3_69;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_48;
          next_value_of_AddrOfHeadVar__3_68 = AddrSCCcallarg_57_65;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_68 = next_value_of_AddrOfHeadVar__3_68;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
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
        MR_Box Var_8 = (MR_hl_field(1, HeadVar__2_2, 0));
        MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 1));
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
        MR_Box Var_14;
        MR_Word Var_15;
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        MR_Word * AddrSCCcallarg_16_67;

        Var_14 = func_5(((MR_Box) (Var_64)), Var_8, Var_9);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_10, &Var_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_8;
          MR_hl_field(1, base, 1) = Var_14;
          MR_hl_field(1, base, 2) = ((MR_Box) (Var_15));
          MR_hl_field(1, base, 3) = NULL;
        }
        AddrSCCcallarg_16_67 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 3)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_64, Var_11, AddrSCCcallarg_16_67);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 0));
        MR_Box Var_22 = (MR_hl_field(2, HeadVar__2_2, 1));
        MR_Box Var_23 = (MR_hl_field(2, HeadVar__2_2, 2));
        MR_Box Var_24 = (MR_hl_field(2, HeadVar__2_2, 3));
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
        MR_Box Var_30;
        MR_Box Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Word * AddrSCCcallarg_34_66;

        Var_30 = func_3(((MR_Box) (Var_64)), Var_21, Var_22);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        Var_31 = func_4(((MR_Box) (Var_64)), Var_23, Var_24);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_25, &Var_32);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_26, &Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(2, base, 0) = Var_21;
          MR_hl_field(2, base, 1) = Var_30;
          MR_hl_field(2, base, 2) = Var_23;
          MR_hl_field(2, base, 3) = Var_31;
          MR_hl_field(2, base, 4) = ((MR_Box) (Var_32));
          MR_hl_field(2, base, 5) = ((MR_Box) (Var_33));
          MR_hl_field(2, base, 6) = NULL;
        }
        AddrSCCcallarg_34_66 = (MR_Word *) (&(MR_hl_field(2, *HeadVar__3_3, 6)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_64, Var_27, AddrSCCcallarg_34_66);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box Var_39 = (MR_hl_field(3, HeadVar__2_2, 0));
        MR_Box Var_40 = (MR_hl_field(3, HeadVar__2_2, 1));
        MR_Box Var_41 = (MR_hl_field(3, HeadVar__2_2, 2));
        MR_Box Var_42 = (MR_hl_field(3, HeadVar__2_2, 3));
        MR_Box Var_43 = (MR_hl_field(3, HeadVar__2_2, 4));
        MR_Box Var_44 = (MR_hl_field(3, HeadVar__2_2, 5));
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
        MR_Box Var_51;
        MR_Box Var_52;
        MR_Box Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
        MR_Word * AddrSCCcallarg_57_65;

        Var_51 = func_0(((MR_Box) (Var_64)), Var_39, Var_40);
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        Var_52 = func_1(((MR_Box) (Var_64)), Var_41, Var_42);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_64, 1))));
        Var_53 = func_2(((MR_Box) (Var_64)), Var_43, Var_44);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_45, &Var_54);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_46, &Var_55);
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_64, Var_47, &Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(3, base, 0) = Var_39;
          MR_hl_field(3, base, 1) = Var_51;
          MR_hl_field(3, base, 2) = Var_41;
          MR_hl_field(3, base, 3) = Var_52;
          MR_hl_field(3, base, 4) = Var_43;
          MR_hl_field(3, base, 5) = Var_53;
          MR_hl_field(3, base, 6) = ((MR_Box) (Var_54));
          MR_hl_field(3, base, 7) = ((MR_Box) (Var_55));
          MR_hl_field(3, base, 8) = ((MR_Box) (Var_56));
          MR_hl_field(3, base, 9) = NULL;
        }
        AddrSCCcallarg_57_65 = (MR_Word *) (&(MR_hl_field(3, *HeadVar__3_3, 9)));
        mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_64, Var_48, AddrSCCcallarg_57_65);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__map__foldr6_14_p_5(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr6_14_p_5(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr6_14_p_4(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr6_14_p_4(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr6_14_p_3(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr6_14_p_3(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr6_14_p_2(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldr6_14_p_2(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldr6_14_p_1(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldr6_14_p_1(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldr6_14_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldr6_14_p_0(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_5(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr5_12_p_5(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_4(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr5_12_p_4(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_3(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr5_12_p_3(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr5_12_p_2(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldr5_12_p_2(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldr5_12_p_1(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldr5_12_p_1(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldr5_12_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldr5_12_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_8(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr4_10_p_8(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_7(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr4_10_p_7(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_6(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr4_10_p_6(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr4_10_p_5(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_5(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_4(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_4(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_3(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_3(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_2(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_2(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_1(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldr4_10_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldr4_10_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_7(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr3_8_p_7(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_6(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr3_8_p_6(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_5(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr3_8_p_5(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr3_8_p_4(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_4(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_3(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_3(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_2(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_2(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_1(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_1(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldr3_8_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldr3_8_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_6(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr2_6_p_6(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_5(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr2_6_p_5(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_4(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr2_6_p_4(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr2_6_p_3(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_3(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_2(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_2(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_1(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr2_6_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldr2_6_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldr_4_p_8(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_7(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_7(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_8(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_6(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_6(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_5(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr_4_p_5(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_4(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr_4_p_4(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_3(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldr_4_p_3(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__map__foldr_4_p_2(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_2(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_1(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_1(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldr_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldr_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
  MR_Box B_8;

  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(F_5, M_6, A_7, &B_8);
  return B_8;
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
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 0));
          MR_Box Var_10 = (MR_hl_field(1, HeadVar__2_2, 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
          MR_Box Var_15;
          MR_Box Var_16;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_12, HeadVar__3_3, &Var_15);
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_16 = func_5(((MR_Box) (Var_56)), Var_9, Var_10, Var_15);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(2, HeadVar__2_2, 0));
          MR_Box Var_19 = (MR_hl_field(2, HeadVar__2_2, 1));
          MR_Box Var_20 = (MR_hl_field(2, HeadVar__2_2, 2));
          MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
          MR_Box Var_27;
          MR_Box Var_28;
          MR_Box Var_29;
          MR_Box Var_30;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_24, HeadVar__3_3, &Var_27);
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_28 = func_3(((MR_Box) (Var_56)), Var_20, Var_21, Var_27);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_23, Var_28, &Var_29);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_30 = func_4(((MR_Box) (Var_56)), Var_18, Var_19, Var_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_22;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(3, HeadVar__2_2, 0));
          MR_Box Var_33 = (MR_hl_field(3, HeadVar__2_2, 1));
          MR_Box Var_34 = (MR_hl_field(3, HeadVar__2_2, 2));
          MR_Box Var_35 = (MR_hl_field(3, HeadVar__2_2, 3));
          MR_Box Var_36 = (MR_hl_field(3, HeadVar__2_2, 4));
          MR_Box Var_37 = (MR_hl_field(3, HeadVar__2_2, 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
          MR_Box Var_44;
          MR_Box Var_45;
          MR_Box Var_46;
          MR_Box Var_47;
          MR_Box Var_48;
          MR_Box Var_49;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_41, HeadVar__3_3, &Var_44);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_45 = func_0(((MR_Box) (Var_56)), Var_36, Var_37, Var_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_40, Var_45, &Var_46);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_47 = func_1(((MR_Box) (Var_56)), Var_34, Var_35, Var_46);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_39, Var_47, &Var_48);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_49 = func_2(((MR_Box) (Var_56)), Var_32, Var_33, Var_48);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_38;
          next_value_of_HeadVar__3_3 = Var_49;
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
mercury__map__foldl6_values_14_p_5(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_values_14_p_5(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl6_values_14_p_4(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_values_14_p_4(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl6_values_14_p_3(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_values_14_p_3(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl6_values_14_p_2(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_values_14_p_2(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldl6_values_14_p_1(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_values_14_p_1(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldl6_values_14_p_0(
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word TypeInfo_for_E_40,
  MR_Word TypeInfo_for_F_41,
  MR_Word TypeInfo_for_K_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_values_14_p_0(TypeInfo_for_V_35, TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, TypeInfo_for_E_40, TypeInfo_for_F_41, TypeInfo_for_K_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_5(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_values_12_p_5(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_4(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_values_12_p_4(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl5_values_12_p_3(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_values_12_p_3(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl5_values_12_p_2(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  mercury__tree234__foldl5_values_12_p_2(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_values_12_p_1(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  mercury__tree234__foldl5_values_12_p_1(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_values_12_p_0(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word TypeInfo_for_B_32,
  MR_Word TypeInfo_for_C_33,
  MR_Word TypeInfo_for_D_34,
  MR_Word TypeInfo_for_E_35,
  MR_Word TypeInfo_for_K_36,
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
  mercury__tree234__foldl5_values_12_p_0(TypeInfo_for_V_30, TypeInfo_for_A_31, TypeInfo_for_B_32, TypeInfo_for_C_33, TypeInfo_for_D_34, TypeInfo_for_E_35, TypeInfo_for_K_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_8(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_values_10_p_8(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_7(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_values_10_p_7(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl4_values_10_p_6(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_values_10_p_6(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl4_values_10_p_5(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_5(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_4(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_4(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_3(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_3(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_2(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_2(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_1(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_1(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_values_10_p_0(
  MR_Word TypeInfo_for_V_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
  MR_Word TypeInfo_for_K_30,
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
  mercury__tree234__foldl4_values_10_p_0(TypeInfo_for_V_25, TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, TypeInfo_for_K_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_8(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_8(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_7(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_7(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_6(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_6(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_5(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_values_8_p_5(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_4(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_values_8_p_4(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_3(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_values_8_p_3(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl3_values_8_p_2(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_2(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_1(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_1(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_values_8_p_0(
  MR_Word TypeInfo_for_V_20,
  MR_Word TypeInfo_for_A_21,
  MR_Word TypeInfo_for_B_22,
  MR_Word TypeInfo_for_C_23,
  MR_Word TypeInfo_for_K_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_values_8_p_0(TypeInfo_for_V_20, TypeInfo_for_A_21, TypeInfo_for_B_22, TypeInfo_for_C_23, TypeInfo_for_K_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_8(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_8(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_7(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_7(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_6(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_6(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_values_6_p_5(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_values_6_p_4(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_values_6_p_3(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_2(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_1(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeInfo_for_K_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_values_6_p_0(TypeInfo_for_V_15, TypeInfo_for_A_16, TypeInfo_for_B_17, TypeInfo_for_K_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl_values_4_p_8(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_8(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_7(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_7(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_6(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_6(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_values_4_p_5(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_values_4_p_4(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_values_4_p_3(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_2(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_1(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_values_4_p_0(TypeInfo_for_V_10, TypeInfo_for_A_11, TypeInfo_for_K_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl6_14_p_5(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_14_p_5(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl6_14_p_4(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_14_p_4(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl6_14_p_3(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl6_14_p_3(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl6_14_p_2(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_14_p_2(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldl6_14_p_1(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_14_p_1(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

void MR_CALL 
mercury__map__foldl6_14_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word TypeInfo_for_D_40,
  MR_Word TypeInfo_for_E_41,
  MR_Word TypeInfo_for_F_42,
  MR_Word Pred_15,
  MR_Word Map_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  mercury__tree234__foldl6_14_p_0(TypeInfo_for_K_35, TypeInfo_for_V_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, TypeInfo_for_D_40, TypeInfo_for_E_41, TypeInfo_for_F_42, Pred_15, Map_16, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_5(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_12_p_5(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_4(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_12_p_4(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_3(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl5_12_p_3(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl5_12_p_2(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldl5_12_p_2(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_12_p_1(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldl5_12_p_1(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

void MR_CALL 
mercury__map__foldl5_12_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word TypeInfo_for_D_35,
  MR_Word TypeInfo_for_E_36,
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
  mercury__tree234__foldl5_12_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, TypeInfo_for_D_35, TypeInfo_for_E_36, Pred_13, Map_14, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_8(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_10_p_8(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_7(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_10_p_7(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_6(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl4_10_p_6(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl4_10_p_5(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_5(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_4(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_4(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_3(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_3(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_2(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_2(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_1(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

void MR_CALL 
mercury__map__foldl4_10_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_C_29,
  MR_Word TypeInfo_for_D_30,
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
  mercury__tree234__foldl4_10_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_C_29, TypeInfo_for_D_30, Pred_11, Map_12, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_7(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_8_p_7(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_6(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_8_p_6(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_5(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl3_8_p_5(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_4(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_3(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_2(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_1(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word TypeInfo_for_C_24,
  MR_Word Pred_9,
  MR_Word Map_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  mercury__tree234__foldl3_8_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, TypeInfo_for_A_22, TypeInfo_for_B_23, TypeInfo_for_C_24, Pred_9, Map_10, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
}

void MR_CALL 
mercury__map__foldl2_6_p_10(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_10(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_9(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_9(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_8(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_8(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_7(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_7(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_6_p_6(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_6_p_5(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl2_6_p_4(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_3(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_2(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_1(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Pred_7,
  MR_Word Map_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  mercury__tree234__foldl2_6_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, TypeInfo_for_A_17, TypeInfo_for_B_18, Pred_7, Map_8, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
}

void MR_CALL 
mercury__map__foldl_4_p_8(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_8(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_7(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_7(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_6(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_6(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_5(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_4_p_5(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_4(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_4_p_4(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_3(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__foldl_4_p_3(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  return succeeded;
}

void MR_CALL 
mercury__map__foldl_4_p_2(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_2(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_1(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_1(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
}

void MR_CALL 
mercury__map__foldl_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_A_12,
  MR_Word Pred_5,
  MR_Word Map_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  mercury__tree234__foldl_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, TypeInfo_for_A_12, Pred_5, Map_6, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
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
  MR_Box B_8;

  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(F_5, M_6, A_7, &B_8);
  return B_8;
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
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 0));
          MR_Box Var_10 = (MR_hl_field(1, HeadVar__2_2, 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
          MR_Box Var_15;
          MR_Box Var_16;
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_11, HeadVar__3_3, &Var_15);
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_16 = func_5(((MR_Box) (Var_56)), Var_9, Var_10, Var_15);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(2, HeadVar__2_2, 0));
          MR_Box Var_19 = (MR_hl_field(2, HeadVar__2_2, 1));
          MR_Box Var_20 = (MR_hl_field(2, HeadVar__2_2, 2));
          MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
          MR_Box Var_27;
          MR_Box Var_28;
          MR_Box Var_29;
          MR_Box Var_30;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_22, HeadVar__3_3, &Var_27);
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_28 = func_3(((MR_Box) (Var_56)), Var_18, Var_19, Var_27);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_23, Var_28, &Var_29);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_30 = func_4(((MR_Box) (Var_56)), Var_20, Var_21, Var_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(3, HeadVar__2_2, 0));
          MR_Box Var_33 = (MR_hl_field(3, HeadVar__2_2, 1));
          MR_Box Var_34 = (MR_hl_field(3, HeadVar__2_2, 2));
          MR_Box Var_35 = (MR_hl_field(3, HeadVar__2_2, 3));
          MR_Box Var_36 = (MR_hl_field(3, HeadVar__2_2, 4));
          MR_Box Var_37 = (MR_hl_field(3, HeadVar__2_2, 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
          MR_Box Var_44;
          MR_Box Var_45;
          MR_Box Var_46;
          MR_Box Var_47;
          MR_Box Var_48;
          MR_Box Var_49;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_38, HeadVar__3_3, &Var_44);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_45 = func_0(((MR_Box) (Var_56)), Var_32, Var_33, Var_44);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_39, Var_45, &Var_46);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_47 = func_1(((MR_Box) (Var_56)), Var_34, Var_35, Var_46);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(Var_56, Var_40, Var_47, &Var_48);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_56, 1))));
          Var_49 = func_2(((MR_Box) (Var_56)), Var_36, Var_37, Var_48);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
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
  MR_Word M0_3)
{
  MR_Word M_4 = M0_3;

  return M_4;
}

MR_bool MR_CALL 
mercury__map__equal_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word MapA_3,
  MR_Word MapB_4)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__equal_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, MapA_3, MapB_4);
  return succeeded;
}

void MR_CALL 
mercury__map__ucount_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Unsigned * Count_4)
{
  mercury__tree234__ucount_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, (MR_Unsigned) 0U, Count_4);
}

MR_Unsigned MR_CALL 
mercury__map__ucount_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3)
{
  MR_Unsigned Count_4;

  mercury__tree234__ucount_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, (MR_Unsigned) 0U, &Count_4);
  return Count_4;
}

void MR_CALL 
mercury__map__count_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Integer * Count_4)
{
  MR_Unsigned Var_7;

  mercury__tree234__ucount_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, (MR_Unsigned) 0U, &Var_7);
{
#define MR_PROC_LABEL mercury__map__count_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	*Count_4  = I;
}
}

MR_Integer MR_CALL 
mercury__map__count_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3)
{
  MR_Integer Count_4;
  MR_Unsigned Var_7;

  mercury__tree234__ucount_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, (MR_Unsigned) 0U, &Var_7);
{
#define MR_PROC_LABEL mercury__map__count_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Count_4  = I;
}
  return Count_4;
}

void MR_CALL 
mercury__map__compose_maps_3_p_0(
  MR_Word TypeInfo_for_A_10,
  MR_Word TypeInfo_for_B_11,
  MR_Word TypeInfo_for_C_12,
  MR_Word MapAB_4,
  MR_Word MapBC_5,
  MR_Word * MapAC_6)
{
  MR_Word AssocListAB_7;
  MR_Word RevAssocListAC_8;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_A_10, TypeInfo_for_B_11, MapAB_4, (MR_Word) ((MR_Unsigned) 0U), &AssocListAB_7);
  mercury__map__compose_maps_loop_4_p_0(TypeInfo_for_B_11, TypeInfo_for_C_12, TypeInfo_for_A_10, MapBC_5, AssocListAB_7, (MR_Word) ((MR_Unsigned) 0U), &RevAssocListAC_8);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_A_10, TypeInfo_for_C_12, RevAssocListAC_8, MapAC_6);
}

void MR_CALL 
mercury__map__compose_maps_loop_4_p_0(
  MR_Word TypeInfo_for_B_20,
  MR_Word TypeInfo_for_C_21,
  MR_Word TypeInfo_for_A_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevAssocListAC_0_3,
  MR_Word * STATE_VARIABLE_RevAssocListAC_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevAssocListAC_4 = STATE_VARIABLE_RevAssocListAC_0_3;
    else
    {
      MR_Box A_10;
      MR_Box B_11;
      MR_Word ABs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Box C_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_RevAssocListAC_1_18;
      MR_Word Var_19;
      MR_Box VPrime_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevAssocListAC_0_3;

      A_10 = (MR_hl_field(0, Var_17, 0));
      B_11 = (MR_hl_field(0, Var_17, 1));
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_B_20, TypeInfo_for_C_21, HeadVar__1_1, B_11, &VPrime_23);
      if (succeeded)
        C_14 = VPrime_23;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_B_20, TypeInfo_for_C_21, (MR_String) "map.lookup: key not found", B_11);
          return;
        }
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = A_10;
        MR_hl_field(0, Var_19, 1) = C_14;
      }
      {
        STATE_VARIABLE_RevAssocListAC_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevAssocListAC_1_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, STATE_VARIABLE_RevAssocListAC_1_18, 1) = ((MR_Box) (STATE_VARIABLE_RevAssocListAC_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ABs_12;
      next_value_of_STATE_VARIABLE_RevAssocListAC_0_3 = STATE_VARIABLE_RevAssocListAC_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevAssocListAC_0_3 = next_value_of_STATE_VARIABLE_RevAssocListAC_0_3;
      continue;
    }
    break;
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
  MR_Word HeadAssocList_9;
  MR_Word TailAssocLists_10;
  MR_Word CommonAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
  mercury__map__union_list_passes_4_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
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
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    mercury__map__union_loop_5_p_5(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
      MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
    }
    mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
    *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
    if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
      MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
      MR_Word * AddrTailLaterAssocLists_23;
      MR_Word * AddrHeadLaterAssocList_24;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *LaterAssocLists_10 = base;
        MR_hl_field(1, base, 0) = NULL;
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 0)));
      AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 1)));
      mercury__map__LCMC__pred__union_list_pass__1_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, AddrHeadLaterAssocList_24, AddrTailLaterAssocLists_23);
    }
  }
}

void MR_CALL 
mercury__map__LCMC__pred__union_list_pass__1_5_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * AddrOfFirstAssocList_25,
  MR_Word * AddrOfLaterAssocLists_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfFirstAssocList_25 = HeadAssocList_6;
      *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word FirstAssocList_32;
      MR_Word conv0_FirstAssocList_32;

      mercury__map__union_loop_5_p_5(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
        MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
      }
      mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_32);
      FirstAssocList_32 = (MR_Word) (conv0_FirstAssocList_32);
      *AddrOfFirstAssocList_25 = FirstAssocList_32;
      if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
        MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
        MR_Word * AddrTailLaterAssocLists_23;
        MR_Word * AddrHeadLaterAssocList_24;
        MR_Word LaterAssocLists_28;
        MR_Word next_value_of_HeadAssocList_6;
        MR_Word next_value_of_TailAssocLists_7;
        MR_Word * next_value_of_AddrOfFirstAssocList_25;
        MR_Word * next_value_of_AddrOfLaterAssocLists_26;

        {
          LaterAssocLists_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LaterAssocLists_28, 0) = NULL;
          MR_hl_field(1, LaterAssocLists_28, 1) = NULL;
        }
        AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 0)));
        AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 1)));
        *AddrOfLaterAssocLists_26 = LaterAssocLists_28;
        // direct tailcall eliminated
        ;
        next_value_of_HeadAssocList_6 = HeadTailTailAssocList_14;
        next_value_of_TailAssocLists_7 = TailTailTailAssocLists_15;
        next_value_of_AddrOfFirstAssocList_25 = AddrHeadLaterAssocList_24;
        next_value_of_AddrOfLaterAssocLists_26 = AddrTailLaterAssocLists_23;
        HeadAssocList_6 = next_value_of_HeadAssocList_6;
        TailAssocLists_7 = next_value_of_TailAssocLists_7;
        AddrOfFirstAssocList_25 = next_value_of_AddrOfFirstAssocList_25;
        AddrOfLaterAssocLists_26 = next_value_of_AddrOfLaterAssocLists_26;
        continue;
      }
    }
    break;
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
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
        MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
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
        MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
        MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
        MR_Word * AddrTailLaterAssocLists_23;
        MR_Word * AddrHeadLaterAssocList_24;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LaterAssocLists_10 = base;
          MR_hl_field(1, base, 0) = NULL;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 0)));
        AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 1)));
        succeeded = mercury__map__LCMC__pred__union_list_pass__1_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, AddrHeadLaterAssocList_24, AddrTailLaterAssocLists_23);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__LCMC__pred__union_list_pass__1_5_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * AddrOfFirstAssocList_25,
  MR_Word * AddrOfLaterAssocLists_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfFirstAssocList_25 = HeadAssocList_6;
      *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word FirstAssocList_32;
      MR_Word conv0_FirstAssocList_32;

      succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
          MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
        }
        mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_32);
        FirstAssocList_32 = (MR_Word) (conv0_FirstAssocList_32);
        *AddrOfFirstAssocList_25 = FirstAssocList_32;
        if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
          MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
          MR_Word * AddrTailLaterAssocLists_23;
          MR_Word * AddrHeadLaterAssocList_24;
          MR_Word LaterAssocLists_28;
          MR_Word next_value_of_HeadAssocList_6;
          MR_Word next_value_of_TailAssocLists_7;
          MR_Word * next_value_of_AddrOfFirstAssocList_25;
          MR_Word * next_value_of_AddrOfLaterAssocLists_26;

          {
            LaterAssocLists_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LaterAssocLists_28, 0) = NULL;
            MR_hl_field(1, LaterAssocLists_28, 1) = NULL;
          }
          AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 0)));
          AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 1)));
          *AddrOfLaterAssocLists_26 = LaterAssocLists_28;
          // direct tailcall eliminated
          ;
          next_value_of_HeadAssocList_6 = HeadTailTailAssocList_14;
          next_value_of_TailAssocLists_7 = TailTailTailAssocLists_15;
          next_value_of_AddrOfFirstAssocList_25 = AddrHeadLaterAssocList_24;
          next_value_of_AddrOfLaterAssocLists_26 = AddrTailLaterAssocLists_23;
          HeadAssocList_6 = next_value_of_HeadAssocList_6;
          TailAssocLists_7 = next_value_of_TailAssocLists_7;
          AddrOfFirstAssocList_25 = next_value_of_AddrOfFirstAssocList_25;
          AddrOfLaterAssocLists_26 = next_value_of_AddrOfLaterAssocLists_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__map__det_union_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word CommonPred_5,
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * UnionMap_8)
{
  MR_bool succeeded;
  MR_Word UnionMapPrime_9;
  MR_Word AssocListA_14;
  MR_Word AssocListB_15;
  MR_Word RevUnionAssocList_16;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_14);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_15);
  succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_13, TypeInfo_for_V_12, AssocListA_14, AssocListB_15, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevUnionAssocList_16);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, RevUnionAssocList_16, &UnionMapPrime_9);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *UnionMap_8 = UnionMapPrime_9;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
      return;
    }
}

MR_Word MR_CALL 
mercury__map__det_union_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word F_5,
  MR_Word MapA_6,
  MR_Word MapB_7)
{
  MR_bool succeeded;
  MR_Word UnionMap_8;
  MR_Word UnionMapPrime_21;
  MR_Word AssocListA_24;
  MR_Word AssocListB_25;
  MR_Word RevUnionAssocList_26;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_24);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_25);
  succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocListA_24, AssocListB_25, (MR_Word) ((MR_Unsigned) 0U), &RevUnionAssocList_26);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevUnionAssocList_26, &UnionMapPrime_21);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    UnionMap_8 = UnionMapPrime_21;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
  return UnionMap_8;
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
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;

        {
          STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_3_25, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Box Var_49 = (MR_hl_field(0, Var_48, 1));
      MR_Box Var_50 = (MR_hl_field(0, Var_48, 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;

        {
          STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(Var_47, STATE_VARIABLE_RevCommonAssocList_1_21, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Box Key2_42 = (MR_hl_field(0, Var_29, 0));
        MR_Box Value2_43 = (MR_hl_field(0, Var_29, 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_7_33;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_7_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_7_33;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_5_30;
              MR_Word Var_31;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_52, 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              succeeded = func_0(((MR_Box) (Var_52)), Var_49, Value2_43, &Value_17);
              if (succeeded)
              {
                {
                  Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_31, 0) = Var_50;
                  MR_hl_field(0, Var_31, 1) = Value_17;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_5_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 0) = ((MR_Box) (Var_31));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_47;
                next_value_of_AssocList2_7 = AssocTail2_44;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_5_30;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_9_36;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_9_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 0) = ((MR_Box) (Var_29));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_9_36;
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
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_3_25;
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
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_1_21;
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
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * UnionMap_8)
{
  MR_Word AssocListA_9;
  MR_Word AssocListB_10;
  MR_Word RevUnionAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_9);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_10);
  mercury__map__union_loop_5_p_5(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocListA_9, AssocListB_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevUnionAssocList_11);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevUnionAssocList_11, UnionMap_8);
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
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;

        {
          STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_3_25, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Box Var_49 = (MR_hl_field(0, Var_48, 1));
      MR_Box Var_50 = (MR_hl_field(0, Var_48, 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;

        {
          STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(TypeInfo_for_K_45, TypeInfo_for_V_46, Var_47, STATE_VARIABLE_RevCommonAssocList_1_21, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Box Key2_42 = (MR_hl_field(0, Var_29, 0));
        MR_Box Value2_43 = (MR_hl_field(0, Var_29, 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_7_33;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_7_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_7_33;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_5_30;
              MR_Word Var_31;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, CommonPred_8, 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              func_0(((MR_Box) (CommonPred_8)), Var_49, Value2_43, &Value_17);
              {
                Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_31, 0) = Var_50;
                MR_hl_field(0, Var_31, 1) = Value_17;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_5_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 0) = ((MR_Box) (Var_31));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_5_30;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_9_36;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_9_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 0) = ((MR_Box) (Var_29));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_9_36;
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
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_1_21;
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
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_3_25;
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
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * UnionMap_8)
{
  MR_bool succeeded;
  MR_Word AssocListA_9;
  MR_Word AssocListB_10;
  MR_Word RevUnionAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_9);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_10);
  succeeded = mercury__map__union_loop_5_p_4(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocListA_9, AssocListB_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevUnionAssocList_11);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevUnionAssocList_11, UnionMap_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
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
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;

        {
          STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(TypeInfo_for_K_45, TypeInfo_for_V_46, AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_3_25, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Box Var_49 = (MR_hl_field(0, Var_48, 1));
      MR_Box Var_50 = (MR_hl_field(0, Var_48, 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;

        {
          STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(TypeInfo_for_K_45, TypeInfo_for_V_46, Var_47, STATE_VARIABLE_RevCommonAssocList_1_21, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Box Key2_42 = (MR_hl_field(0, Var_29, 0));
        MR_Box Value2_43 = (MR_hl_field(0, Var_29, 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_7_33;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_7_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_7_33;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_5_30;
              MR_Word Var_31;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, CommonPred_8, 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              succeeded = func_0(((MR_Box) (CommonPred_8)), Var_49, Value2_43, &Value_17);
              if (succeeded)
              {
                {
                  Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_31, 0) = Var_50;
                  MR_hl_field(0, Var_31, 1) = Value_17;
                }
                {
                  STATE_VARIABLE_RevCommonAssocList_5_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 0) = ((MR_Box) (Var_31));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                // direct tailcall eliminated
                ;
                next_value_of_AssocList1_6 = Var_47;
                next_value_of_AssocList2_7 = AssocTail2_44;
                next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_5_30;
                AssocList1_6 = next_value_of_AssocList1_6;
                AssocList2_7 = next_value_of_AssocList2_7;
                STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_9_36;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_9_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 0) = ((MR_Box) (Var_29));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_9_36;
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
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_1_21;
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
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_3_25;
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
  MR_Word MapA_6,
  MR_Word MapB_7)
{
  MR_Word UnionMap_8;
  MR_Word AssocListA_21;
  MR_Word AssocListB_22;
  MR_Word RevUnionAssocList_23;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_21);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_22);
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocListA_21, AssocListB_22, (MR_Word) ((MR_Unsigned) 0U), &RevUnionAssocList_23);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevUnionAssocList_23, &UnionMap_8);
  return UnionMap_8;
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
        MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;

        {
          STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(AssocTail2_15, STATE_VARIABLE_RevCommonAssocList_3_25, STATE_VARIABLE_RevCommonAssocList_19);
      }
    else
    {
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Box Var_49 = (MR_hl_field(0, Var_48, 1));
      MR_Box Var_50 = (MR_hl_field(0, Var_48, 0));

      if ((AssocList2_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;

        {
          STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(Var_47, STATE_VARIABLE_RevCommonAssocList_1_21, STATE_VARIABLE_RevCommonAssocList_19);
      }
      else
      {
        MR_Word R_16;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
        MR_Box Key2_42 = (MR_hl_field(0, Var_29, 0));
        MR_Box Value2_43 = (MR_hl_field(0, Var_29, 1));
        MR_Word AssocTail2_44 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_45, &R_16, Var_50, Key2_42);
        switch (R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_7_33;
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_7_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_7_33, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_7_33;
              AssocList1_6 = next_value_of_AssocList1_6;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_17;
              MR_Word STATE_VARIABLE_RevCommonAssocList_5_30;
              MR_Word Var_31;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_52, 1))));
              MR_Word next_value_of_AssocList1_6;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              Value_17 = func_0(((MR_Box) (Var_52)), Var_49, Value2_43);
              {
                Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_31, 0) = Var_50;
                MR_hl_field(0, Var_31, 1) = Value_17;
              }
              {
                STATE_VARIABLE_RevCommonAssocList_5_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 0) = ((MR_Box) (Var_31));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_5_30, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList1_6 = Var_47;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_5_30;
              AssocList1_6 = next_value_of_AssocList1_6;
              AssocList2_7 = next_value_of_AssocList2_7;
              STATE_VARIABLE_RevCommonAssocList_0_18 = next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevCommonAssocList_9_36;
              MR_Word next_value_of_AssocList2_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

              {
                STATE_VARIABLE_RevCommonAssocList_9_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 0) = ((MR_Box) (Var_29));
                MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_9_36, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AssocList2_7 = AssocTail2_44;
              next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_9_36;
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
      MR_Word AssocTail2_15 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, AssocList2_7, 0))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_3_25;
      MR_Word next_value_of_AssocList2_7;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_3_25, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList2_7 = AssocTail2_15;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_3_25;
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
      MR_Word AssocTail1_12 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 1))));
      MR_Word STATE_VARIABLE_RevCommonAssocList_1_21;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, AssocList1_6, 0))));
      MR_Word next_value_of_AssocList1_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;

      {
        STATE_VARIABLE_RevCommonAssocList_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, STATE_VARIABLE_RevCommonAssocList_1_21, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      // direct tailcall eliminated
      ;
      next_value_of_AssocList1_6 = AssocTail1_12;
      next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = STATE_VARIABLE_RevCommonAssocList_1_21;
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
  MR_Word HeadAssocList_9;
  MR_Word TailAssocLists_10;
  MR_Word CommonAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadMap_6, (MR_Word) ((MR_Unsigned) 0U), &HeadAssocList_9);
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_3_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_13, TailMaps_7, &TailAssocLists_10);
  mercury__map__intersect_list_passes_4_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, HeadAssocList_9, TailAssocLists_10, CommonPred_5, &CommonAssocList_11);
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, CommonAssocList_11, Common_8);
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
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    mercury__map__intersect_loop_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
      MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
    }
    mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_9);
    *FirstAssocList_9 = (MR_Word) (conv0_FirstAssocList_9);
    if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *LaterAssocLists_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
      MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
      MR_Word * AddrTailLaterAssocLists_23;
      MR_Word * AddrHeadLaterAssocList_24;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *LaterAssocLists_10 = base;
        MR_hl_field(1, base, 0) = NULL;
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 0)));
      AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 1)));
      mercury__map__LCMC__pred__intersect_list_pass__1_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, AddrHeadLaterAssocList_24, AddrTailLaterAssocLists_23);
    }
  }
}

void MR_CALL 
mercury__map__LCMC__pred__intersect_list_pass__1_5_p_1(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * AddrOfFirstAssocList_25,
  MR_Word * AddrOfLaterAssocLists_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfFirstAssocList_25 = HeadAssocList_6;
      *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word FirstAssocList_32;
      MR_Word conv0_FirstAssocList_32;

      mercury__map__intersect_loop_5_p_1(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
        MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
      }
      mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_32);
      FirstAssocList_32 = (MR_Word) (conv0_FirstAssocList_32);
      *AddrOfFirstAssocList_25 = FirstAssocList_32;
      if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
        MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
        MR_Word * AddrTailLaterAssocLists_23;
        MR_Word * AddrHeadLaterAssocList_24;
        MR_Word LaterAssocLists_28;
        MR_Word next_value_of_HeadAssocList_6;
        MR_Word next_value_of_TailAssocLists_7;
        MR_Word * next_value_of_AddrOfFirstAssocList_25;
        MR_Word * next_value_of_AddrOfLaterAssocLists_26;

        {
          LaterAssocLists_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LaterAssocLists_28, 0) = NULL;
          MR_hl_field(1, LaterAssocLists_28, 1) = NULL;
        }
        AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 0)));
        AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 1)));
        *AddrOfLaterAssocLists_26 = LaterAssocLists_28;
        // direct tailcall eliminated
        ;
        next_value_of_HeadAssocList_6 = HeadTailTailAssocList_14;
        next_value_of_TailAssocLists_7 = TailTailTailAssocLists_15;
        next_value_of_AddrOfFirstAssocList_25 = AddrHeadLaterAssocList_24;
        next_value_of_AddrOfLaterAssocLists_26 = AddrTailLaterAssocLists_23;
        HeadAssocList_6 = next_value_of_HeadAssocList_6;
        TailAssocLists_7 = next_value_of_TailAssocLists_7;
        AddrOfFirstAssocList_25 = next_value_of_AddrOfFirstAssocList_25;
        AddrOfLaterAssocLists_26 = next_value_of_AddrOfLaterAssocLists_26;
        continue;
      }
    }
    break;
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
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_23;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(Var_20, Var_21, Var_6, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_23 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_95_95_49_3_p_0(Var_20, Var_21, Var_7, AddrSCCcallarg_9_23);
  }
}

static void MR_CALL 
mercury__map__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_95_95_49_3_p_0(
  MR_Word Var_20,
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_23;
      MR_Word HeadVar__3_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_24;

      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(Var_20, Var_21, Var_6, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
      {
        HeadVar__3_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_25, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_25, 1) = NULL;
      }
      AddrSCCcallarg_9_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_25, 1)));
      *AddrOfHeadVar__3_24 = HeadVar__3_25;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_24 = AddrSCCcallarg_9_23;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_24 = next_value_of_AddrOfHeadVar__3_24;
      continue;
    }
    break;
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
    MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
    MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
    MR_Word RevFirstAssocList_13;
    MR_Word conv0_FirstAssocList_9;

    succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
    if (succeeded)
    {
      TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
        MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
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
        MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
        MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
        MR_Word * AddrTailLaterAssocLists_23;
        MR_Word * AddrHeadLaterAssocList_24;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LaterAssocLists_10 = base;
          MR_hl_field(1, base, 0) = NULL;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 0)));
        AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, *LaterAssocLists_10, 1)));
        succeeded = mercury__map__LCMC__pred__intersect_list_pass__1_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadTailTailAssocList_14, TailTailTailAssocLists_15, CommonPred_8, AddrHeadLaterAssocList_24, AddrTailLaterAssocLists_23);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__LCMC__pred__intersect_list_pass__1_5_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadAssocList_6,
  MR_Word TailAssocLists_7,
  MR_Word CommonPred_8,
  MR_Word * AddrOfFirstAssocList_25,
  MR_Word * AddrOfLaterAssocLists_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TailAssocLists_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfFirstAssocList_25 = HeadAssocList_6;
      *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word HeadTailAssocList_11 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 0))));
      MR_Word TailTailAssocLists_12 = ((MR_Word) ((MR_hl_field(1, TailAssocLists_7, 1))));
      MR_Word RevFirstAssocList_13;
      MR_Word FirstAssocList_32;
      MR_Word conv0_FirstAssocList_32;

      succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, HeadAssocList_6, HeadTailAssocList_11, CommonPred_8, (MR_Word) ((MR_Unsigned) 0U), &RevFirstAssocList_13);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_K_19));
          MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_V_20));
        }
        mercury__list__reverse_2_p_0(TypeInfo_22_22, (MR_Word) (RevFirstAssocList_13), &conv0_FirstAssocList_32);
        FirstAssocList_32 = (MR_Word) (conv0_FirstAssocList_32);
        *AddrOfFirstAssocList_25 = FirstAssocList_32;
        if ((TailTailAssocLists_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *AddrOfLaterAssocLists_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word HeadTailTailAssocList_14 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 0))));
          MR_Word TailTailTailAssocLists_15 = ((MR_Word) ((MR_hl_field(1, TailTailAssocLists_12, 1))));
          MR_Word * AddrTailLaterAssocLists_23;
          MR_Word * AddrHeadLaterAssocList_24;
          MR_Word LaterAssocLists_28;
          MR_Word next_value_of_HeadAssocList_6;
          MR_Word next_value_of_TailAssocLists_7;
          MR_Word * next_value_of_AddrOfFirstAssocList_25;
          MR_Word * next_value_of_AddrOfLaterAssocLists_26;

          {
            LaterAssocLists_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LaterAssocLists_28, 0) = NULL;
            MR_hl_field(1, LaterAssocLists_28, 1) = NULL;
          }
          AddrHeadLaterAssocList_24 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 0)));
          AddrTailLaterAssocLists_23 = (MR_Word *) (&(MR_hl_field(1, LaterAssocLists_28, 1)));
          *AddrOfLaterAssocLists_26 = LaterAssocLists_28;
          // direct tailcall eliminated
          ;
          next_value_of_HeadAssocList_6 = HeadTailTailAssocList_14;
          next_value_of_TailAssocLists_7 = TailTailTailAssocLists_15;
          next_value_of_AddrOfFirstAssocList_25 = AddrHeadLaterAssocList_24;
          next_value_of_AddrOfLaterAssocLists_26 = AddrTailLaterAssocLists_23;
          HeadAssocList_6 = next_value_of_HeadAssocList_6;
          TailAssocLists_7 = next_value_of_TailAssocLists_7;
          AddrOfFirstAssocList_25 = next_value_of_AddrOfFirstAssocList_25;
          AddrOfLaterAssocLists_26 = next_value_of_AddrOfLaterAssocLists_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__map__det_intersect_4_p_0(
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_K_13,
  MR_Word CommonPred_5,
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * CommonMap_8)
{
  MR_bool succeeded;
  MR_Word CommonMapPrime_9;
  MR_Word AssocListA_14;
  MR_Word AssocListB_15;
  MR_Word RevCommonAssocList_16;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_14);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_15);
  succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, AssocListA_14, AssocListB_15, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_16);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_12, RevCommonAssocList_16, &CommonMapPrime_9);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *CommonMap_8 = CommonMapPrime_9;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
      return;
    }
}

MR_Word MR_CALL 
mercury__map__det_intersect_3_f_0(
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word PF_5,
  MR_Word MapA_6,
  MR_Word MapB_7)
{
  MR_bool succeeded;
  MR_Word IntersectMap_8;
  MR_Word CommonMapPrime_21;
  MR_Word AssocListA_24;
  MR_Word AssocListB_25;
  MR_Word RevCommonAssocList_26;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_24);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_25);
  succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(PF_5, TypeInfo_for_K_20, AssocListA_24, AssocListB_25, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_26);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_26, &CommonMapPrime_21);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    IntersectMap_8 = CommonMapPrime_21;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
  return IntersectMap_8;
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_33,
  MR_Word TypeInfo_for_K_28,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((ListA_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, ListA_6, 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, ListA_6, 0))));

      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box KeyA_14 = (MR_hl_field(0, Var_31, 0));
        MR_Box ValueA_15 = (MR_hl_field(0, Var_31, 1));
        MR_Box KeyB_17;
        MR_Box ValueB_18;
        MR_Word TailB_19 = ((MR_Word) ((MR_hl_field(1, ListB_7, 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, ListB_7, 0))));

        KeyB_17 = (MR_hl_field(0, Var_25, 0));
        ValueB_18 = (MR_hl_field(0, Var_25, 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &R_20, KeyA_14, KeyB_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_6 = Var_30;

              // direct tailcall eliminated
              ;
              ListA_6 = next_value_of_ListA_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonList_1_26;
              MR_Word Var_27;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_33, 1))));
              MR_Word next_value_of_ListA_6;
              MR_Word next_value_of_ListB_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_22;

              succeeded = func_0(((MR_Box) (Var_33)), ValueA_15, ValueB_18, &Value_21);
              if (succeeded)
              {
                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_27, 0) = KeyA_14;
                  MR_hl_field(0, Var_27, 1) = Value_21;
                }
                {
                  STATE_VARIABLE_RevCommonList_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 0) = ((MR_Box) (Var_27));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_22));
                }
                // direct tailcall eliminated
                ;
                next_value_of_ListA_6 = Var_30;
                next_value_of_ListB_7 = TailB_19;
                next_value_of_STATE_VARIABLE_RevCommonList_0_22 = STATE_VARIABLE_RevCommonList_1_26;
                ListA_6 = next_value_of_ListA_6;
                ListB_7 = next_value_of_ListB_7;
                STATE_VARIABLE_RevCommonList_0_22 = next_value_of_STATE_VARIABLE_RevCommonList_0_22;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_7 = TailB_19;

              // direct tailcall eliminated
              ;
              ListB_7 = next_value_of_ListB_7;
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
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * Common_8)
{
  MR_Word AssocListA_9;
  MR_Word AssocListB_10;
  MR_Word RevCommonAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_9);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_10);
  mercury__map__intersect_loop_5_p_1(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocListA_9, AssocListB_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
}

void MR_CALL 
mercury__map__intersect_loop_5_p_1(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ListA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, ListA_6, 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, ListA_6, 0))));

      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
      {
        MR_Box KeyA_14 = (MR_hl_field(0, Var_31, 0));
        MR_Box ValueA_15 = (MR_hl_field(0, Var_31, 1));
        MR_Box KeyB_17;
        MR_Box ValueB_18;
        MR_Word TailB_19 = ((MR_Word) ((MR_hl_field(1, ListB_7, 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, ListB_7, 0))));

        KeyB_17 = (MR_hl_field(0, Var_25, 0));
        ValueB_18 = (MR_hl_field(0, Var_25, 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &R_20, KeyA_14, KeyB_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_6 = Var_30;

              // direct tailcall eliminated
              ;
              ListA_6 = next_value_of_ListA_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonList_1_26;
              MR_Word Var_27;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, CommonPred_8, 1))));
              MR_Word next_value_of_ListA_6;
              MR_Word next_value_of_ListB_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_22;

              func_0(((MR_Box) (CommonPred_8)), ValueA_15, ValueB_18, &Value_21);
              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_27, 0) = KeyA_14;
                MR_hl_field(0, Var_27, 1) = Value_21;
              }
              {
                STATE_VARIABLE_RevCommonList_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 0) = ((MR_Box) (Var_27));
                MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_22));
              }
              // direct tailcall eliminated
              ;
              next_value_of_ListA_6 = Var_30;
              next_value_of_ListB_7 = TailB_19;
              next_value_of_STATE_VARIABLE_RevCommonList_0_22 = STATE_VARIABLE_RevCommonList_1_26;
              ListA_6 = next_value_of_ListA_6;
              ListB_7 = next_value_of_ListB_7;
              STATE_VARIABLE_RevCommonList_0_22 = next_value_of_STATE_VARIABLE_RevCommonList_0_22;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_7 = TailB_19;

              // direct tailcall eliminated
              ;
              ListB_7 = next_value_of_ListB_7;
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
  MR_Word MapA_6,
  MR_Word MapB_7,
  MR_Word * Common_8)
{
  MR_bool succeeded;
  MR_Word AssocListA_9;
  MR_Word AssocListB_10;
  MR_Word RevCommonAssocList_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_9);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_10);
  succeeded = mercury__map__intersect_loop_5_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, AssocListA_9, AssocListB_10, CommonPred_5, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_11);
  if (succeeded)
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_13, RevCommonAssocList_11, Common_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__intersect_loop_5_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word CommonPred_8,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((ListA_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, ListA_6, 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, ListA_6, 0))));

      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box KeyA_14 = (MR_hl_field(0, Var_31, 0));
        MR_Box ValueA_15 = (MR_hl_field(0, Var_31, 1));
        MR_Box KeyB_17;
        MR_Box ValueB_18;
        MR_Word TailB_19 = ((MR_Word) ((MR_hl_field(1, ListB_7, 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, ListB_7, 0))));

        KeyB_17 = (MR_hl_field(0, Var_25, 0));
        ValueB_18 = (MR_hl_field(0, Var_25, 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &R_20, KeyA_14, KeyB_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_6 = Var_30;

              // direct tailcall eliminated
              ;
              ListA_6 = next_value_of_ListA_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonList_1_26;
              MR_Word Var_27;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, CommonPred_8, 1))));
              MR_Word next_value_of_ListA_6;
              MR_Word next_value_of_ListB_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_22;

              succeeded = func_0(((MR_Box) (CommonPred_8)), ValueA_15, ValueB_18, &Value_21);
              if (succeeded)
              {
                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_27, 0) = KeyA_14;
                  MR_hl_field(0, Var_27, 1) = Value_21;
                }
                {
                  STATE_VARIABLE_RevCommonList_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 0) = ((MR_Box) (Var_27));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_22));
                }
                // direct tailcall eliminated
                ;
                next_value_of_ListA_6 = Var_30;
                next_value_of_ListB_7 = TailB_19;
                next_value_of_STATE_VARIABLE_RevCommonList_0_22 = STATE_VARIABLE_RevCommonList_1_26;
                ListA_6 = next_value_of_ListA_6;
                ListB_7 = next_value_of_ListB_7;
                STATE_VARIABLE_RevCommonList_0_22 = next_value_of_STATE_VARIABLE_RevCommonList_0_22;
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_7 = TailB_19;

              // direct tailcall eliminated
              ;
              ListB_7 = next_value_of_ListB_7;
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
  MR_Word MapA_6,
  MR_Word MapB_7)
{
  MR_Word IntersectMap_8;
  MR_Word AssocListA_21;
  MR_Word AssocListB_22;
  MR_Word RevCommonAssocList_23;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapA_6, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_21);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, MapB_7, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_22);
  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(F_5, TypeInfo_for_K_20, AssocListA_21, AssocListB_22, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_23);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_20, TypeInfo_for_V_19, RevCommonAssocList_23, &IntersectMap_8);
  return IntersectMap_8;
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_49_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word Var_33,
  MR_Word TypeInfo_for_K_28,
  MR_Word ListA_6,
  MR_Word ListB_7,
  MR_Word STATE_VARIABLE_RevCommonList_0_22,
  MR_Word * STATE_VARIABLE_RevCommonList_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ListA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, ListA_6, 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, ListA_6, 0))));

      if ((ListB_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_23 = STATE_VARIABLE_RevCommonList_0_22;
      else
      {
        MR_Box KeyA_14 = (MR_hl_field(0, Var_31, 0));
        MR_Box ValueA_15 = (MR_hl_field(0, Var_31, 1));
        MR_Box KeyB_17;
        MR_Box ValueB_18;
        MR_Word TailB_19 = ((MR_Word) ((MR_hl_field(1, ListB_7, 1))));
        MR_Word R_20;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, ListB_7, 0))));

        KeyB_17 = (MR_hl_field(0, Var_25, 0));
        ValueB_18 = (MR_hl_field(0, Var_25, 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &R_20, KeyA_14, KeyB_17);
        switch (R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_6 = Var_30;

              // direct tailcall eliminated
              ;
              ListA_6 = next_value_of_ListA_6;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Value_21;
              MR_Word STATE_VARIABLE_RevCommonList_1_26;
              MR_Word Var_27;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_33, 1))));
              MR_Word next_value_of_ListA_6;
              MR_Word next_value_of_ListB_7;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_22;

              Value_21 = func_0(((MR_Box) (Var_33)), ValueA_15, ValueB_18);
              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_27, 0) = KeyA_14;
                MR_hl_field(0, Var_27, 1) = Value_21;
              }
              {
                STATE_VARIABLE_RevCommonList_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 0) = ((MR_Box) (Var_27));
                MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_26, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_22));
              }
              // direct tailcall eliminated
              ;
              next_value_of_ListA_6 = Var_30;
              next_value_of_ListB_7 = TailB_19;
              next_value_of_STATE_VARIABLE_RevCommonList_0_22 = STATE_VARIABLE_RevCommonList_1_26;
              ListA_6 = next_value_of_ListA_6;
              ListB_7 = next_value_of_ListB_7;
              STATE_VARIABLE_RevCommonList_0_22 = next_value_of_STATE_VARIABLE_RevCommonList_0_22;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_7 = TailB_19;

              // direct tailcall eliminated
              ;
              ListB_7 = next_value_of_ListB_7;
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
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word CommonMap_6;
  MR_Word AssocListA_7;
  MR_Word AssocListB_8;
  MR_Word RevCommonAssocList_9;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_7);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_8);
  mercury__map__common_subset_loop_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, AssocListA_7, AssocListB_8, (MR_Word) ((MR_Unsigned) 0U), &RevCommonAssocList_9);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, RevCommonAssocList_9, &CommonMap_6);
  return CommonMap_6;
}

void MR_CALL 
mercury__map__common_subset_loop_4_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word ListA_5,
  MR_Word ListB_6,
  MR_Word STATE_VARIABLE_RevCommonList_0_19,
  MR_Word * STATE_VARIABLE_RevCommonList_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ListA_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ListB_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
      else
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, ListA_5, 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, ListA_5, 0))));

      if ((ListB_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevCommonList_20 = STATE_VARIABLE_RevCommonList_0_19;
      else
      {
        MR_Box KeyA_12 = (MR_hl_field(0, Var_28, 0));
        MR_Box ValueA_13 = (MR_hl_field(0, Var_28, 1));
        MR_Box KeyB_15;
        MR_Box ValueB_16;
        MR_Word TailB_17 = ((MR_Word) ((MR_hl_field(1, ListB_6, 1))));
        MR_Word R_18;
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, ListB_6, 0))));

        KeyB_15 = (MR_hl_field(0, Var_22, 0));
        ValueB_16 = (MR_hl_field(0, Var_22, 1));
        mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &R_18, KeyA_12, KeyB_15);
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_ListA_5 = Var_27;

              // direct tailcall eliminated
              ;
              ListA_5 = next_value_of_ListA_5;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_RevCommonList_1_23;
              MR_Word next_value_of_ListA_5;
              MR_Word next_value_of_ListB_6;
              MR_Word next_value_of_STATE_VARIABLE_RevCommonList_0_19;

              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_26, ValueA_13, ValueB_16);
              if (succeeded)
                {
                  STATE_VARIABLE_RevCommonList_1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_23, 0) = ((MR_Box) (Var_28));
                  MR_hl_field(1, STATE_VARIABLE_RevCommonList_1_23, 1) = ((MR_Box) (STATE_VARIABLE_RevCommonList_0_19));
                }
              else
                STATE_VARIABLE_RevCommonList_1_23 = STATE_VARIABLE_RevCommonList_0_19;
              // direct tailcall eliminated
              ;
              next_value_of_ListA_5 = Var_27;
              next_value_of_ListB_6 = TailB_17;
              next_value_of_STATE_VARIABLE_RevCommonList_0_19 = STATE_VARIABLE_RevCommonList_1_23;
              ListA_5 = next_value_of_ListA_5;
              ListB_6 = next_value_of_ListB_6;
              STATE_VARIABLE_RevCommonList_0_19 = next_value_of_STATE_VARIABLE_RevCommonList_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_ListB_6 = TailB_17;

              // direct tailcall eliminated
              ;
              ListB_6 = next_value_of_ListB_6;
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
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * OverlayMap_6)
{
  MR_Word AssocListA_7;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_7);
  mercury__map__overlay_large_map_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocListA_7, MapB_5, OverlayMap_6);
}

MR_Word MR_CALL 
mercury__map__overlay_large_map_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word OverlayMap_6;
  MR_Word AssocListA_9;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MapA_4, (MR_Word) ((MR_Unsigned) 0U), &AssocListA_9);
  mercury__map__overlay_large_map_2_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocListA_9, MapB_5, &OverlayMap_6);
  return OverlayMap_6;
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
      MR_Word AssocList_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Map2_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Map1_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      K_5 = (MR_hl_field(0, Var_12, 0));
      V_6 = (MR_hl_field(0, Var_12, 1));
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
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * OverlayMap_6)
{
  MR_Word AssocListB_7;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_7);
  mercury__map__overlay_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocListB_7, MapA_4, OverlayMap_6);
}

MR_Word MR_CALL 
mercury__map__overlay_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word OverlayMap_6;
  MR_Word AssocListB_9;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &AssocListB_9);
  mercury__map__overlay_2_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocListB_9, MapA_4, &OverlayMap_6);
  return OverlayMap_6;
}

void MR_CALL 
mercury__map__overlay_2_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
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
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Map_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(0, Var_13, 0));
      V_8 = (MR_hl_field(0, Var_13, 1));
      mercury__tree234__set_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_1_14;
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
  MR_Word MapA_4,
  MR_Word MapB_5,
  MR_Word * MergedMap_6)
{
  MR_Word MapBList_7;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &MapBList_7);
  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, MapBList_7, MapA_4, MergedMap_6);
}

MR_Word MR_CALL 
mercury__map__merge_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word MapA_4,
  MR_Word MapB_5)
{
  MR_Word MergedMap_6;
  MR_Word MapBList_9;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MapB_5, (MR_Word) ((MR_Unsigned) 0U), &MapBList_9);
  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, MapBList_9, MapA_4, &MergedMap_6);
  return MergedMap_6;
}

MR_Word MR_CALL 
mercury__map__apply_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word M_5)
{
  MR_Word Vs_6;

  mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, M_5, &Vs_6);
  return Vs_6;
}

void MR_CALL 
mercury__map__apply_to_list_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word Map_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_5 = (MR_hl_field(1, HeadVar__1_1, 0));
    MR_Word Ks_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Box V_8;
    MR_Box VPrime_12;
    MR_Word * AddrVs_14;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Map_2, K_5, &VPrime_12);
    if (succeeded)
      V_8 = VPrime_12;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", K_5);
        return;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = V_8;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrVs_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__map__LCMC__pred__apply_to_list__1_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Ks_6, Map_2, AddrVs_14);
  }
}

void MR_CALL 
mercury__map__LCMC__pred__apply_to_list__1_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word Map_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box K_5 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Ks_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box V_8;
      MR_Box VPrime_12;
      MR_Word * AddrVs_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Map_2, K_5, &VPrime_12);
      if (succeeded)
        V_8 = VPrime_12;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", K_5);
          return;
        }
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = V_8;
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrVs_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ks_6;
      next_value_of_AddrOfHeadVar__3_15 = AddrVs_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
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
  MR_Word FullAL_9;
  MR_Word RevSelectAL_10;
  MR_Word RevUnselectAL_11;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, FullMap_5, (MR_Word) ((MR_Unsigned) 0U), &FullAL_9);
  mercury__map__select_unselect_loop_6_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, FullAL_9, Keys_6, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_10, (MR_Word) ((MR_Unsigned) 0U), &RevUnselectAL_11);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, RevSelectAL_10, SelectMap_7);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, RevUnselectAL_11, UnselectMap_8);
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
  MR_Word Keys_9 = (MR_Word) (KeySet_6);
  MR_Word FullAL_12;
  MR_Word RevSelectAL_13;
  MR_Word RevUnselectAL_14;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FullMap_5, (MR_Word) ((MR_Unsigned) 0U), &FullAL_12);
  mercury__map__select_unselect_loop_6_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FullAL_12, Keys_9, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_13, (MR_Word) ((MR_Unsigned) 0U), &RevUnselectAL_14);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, RevSelectAL_13, SelectMap_7);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, RevUnselectAL_14, UnselectMap_8);
}

void MR_CALL 
mercury__map__select_unselect_loop_6_p_0(
  MR_Word TypeInfo_for_K_37,
  MR_Word TypeInfo_for_V_38,
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
      MR_Word TailFullAL_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word NextFullAL_21;
      MR_Word NextKeysAL_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_RevUnselectAL_1_31;
      MR_Word STATE_VARIABLE_RevSelectAL_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_KeysAL_2;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevUnselectAL_0_5;

      FullK_15 = (MR_hl_field(0, Var_30, 0));
      if ((KeysAL_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NextFullAL_21 = TailFullAL_17;
        NextKeysAL_22 = KeysAL_2;
        {
          STATE_VARIABLE_RevUnselectAL_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevUnselectAL_1_31, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, STATE_VARIABLE_RevUnselectAL_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevUnselectAL_0_5));
        }
        STATE_VARIABLE_RevSelectAL_1_33 = STATE_VARIABLE_RevSelectAL_0_3;
      }
      else
      {
        MR_Box KeyK_23 = (MR_hl_field(1, KeysAL_2, 0));
        MR_Word TailKeysAL_24 = ((MR_Word) ((MR_hl_field(1, KeysAL_2, 1))));
        MR_Word Result_25;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_37, &Result_25, KeyK_23, FullK_15);
        switch (Result_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              NextFullAL_21 = HeadVar__1_1;
              NextKeysAL_22 = TailKeysAL_24;
              STATE_VARIABLE_RevSelectAL_1_33 = STATE_VARIABLE_RevSelectAL_0_3;
              STATE_VARIABLE_RevUnselectAL_1_31 = STATE_VARIABLE_RevUnselectAL_0_5;
            }
            break;
          case (MR_Integer) 0:
            {
              NextFullAL_21 = TailFullAL_17;
              NextKeysAL_22 = TailKeysAL_24;
              {
                STATE_VARIABLE_RevSelectAL_1_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_33, 0) = ((MR_Box) (Var_30));
                MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_33, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
              }
              STATE_VARIABLE_RevUnselectAL_1_31 = STATE_VARIABLE_RevUnselectAL_0_5;
            }
            break;
          case (MR_Integer) 2:
            {
              NextFullAL_21 = TailFullAL_17;
              NextKeysAL_22 = KeysAL_2;
              {
                STATE_VARIABLE_RevUnselectAL_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevUnselectAL_1_31, 0) = ((MR_Box) (Var_30));
                MR_hl_field(1, STATE_VARIABLE_RevUnselectAL_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevUnselectAL_0_5));
              }
              STATE_VARIABLE_RevSelectAL_1_33 = STATE_VARIABLE_RevSelectAL_0_3;
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = NextFullAL_21;
      next_value_of_KeysAL_2 = NextKeysAL_22;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_1_33;
      next_value_of_STATE_VARIABLE_RevUnselectAL_0_5 = STATE_VARIABLE_RevUnselectAL_1_31;
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
  MR_Word RevSelectAL_7;

  mercury__map__select_loop_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_7);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, RevSelectAL_7, SelectMap_6);
}

MR_Word MR_CALL 
mercury__map__select_sorted_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word Keys_5)
{
  MR_Word SelectMap_6;
  MR_Word RevSelectAL_9;

  mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_5, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_9);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RevSelectAL_9, &SelectMap_6);
  return SelectMap_6;
}

void MR_CALL 
mercury__map__select_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word FullMap_4,
  MR_Word KeySet_5,
  MR_Word * SelectMap_6)
{
  MR_Word Keys_7 = (MR_Word) (KeySet_5);
  MR_Word RevSelectAL_10;

  mercury__map__select_loop_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_7, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_10);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, RevSelectAL_10, SelectMap_6);
}

MR_Word MR_CALL 
mercury__map__select_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word FullMap_4,
  MR_Word KeySet_5)
{
  MR_Word SelectMap_6;
  MR_Word Keys_9 = (MR_Word) (KeySet_5);
  MR_Word RevSelectAL_10;

  mercury__map__select_loop_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Keys_9, FullMap_4, (MR_Word) ((MR_Unsigned) 0U), &RevSelectAL_10);
  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RevSelectAL_10, &SelectMap_6);
  return SelectMap_6;
}

void MR_CALL 
mercury__map__select_loop_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
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
      MR_Box K_9 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Ks_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevSelectAL_1_16;
      MR_Box V_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevSelectAL_0_3;

      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, HeadVar__2_2, K_9, &V_13);
      if (succeeded)
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = K_9;
          MR_hl_field(0, Var_17, 1) = V_13;
        }
        {
          STATE_VARIABLE_RevSelectAL_1_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_16, 0) = ((MR_Box) (Var_17));
          MR_hl_field(1, STATE_VARIABLE_RevSelectAL_1_16, 1) = ((MR_Box) (STATE_VARIABLE_RevSelectAL_0_3));
        }
      }
      else
        STATE_VARIABLE_RevSelectAL_1_16 = STATE_VARIABLE_RevSelectAL_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ks_10;
      next_value_of_STATE_VARIABLE_RevSelectAL_0_3 = STATE_VARIABLE_RevSelectAL_1_16;
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
  MR_Word RevMap_4;

  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_3, (MR_Word) ((MR_Unsigned) 0U), &RevMap_4);
  return RevMap_4;
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
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, 0));
          MR_Box Var_10 = (MR_hl_field(1, HeadVar__2_2, 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_11, HeadVar__3_3, &Var_15);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(2, HeadVar__2_2, 0));
          MR_Box Var_19 = (MR_hl_field(2, HeadVar__2_2, 1));
          MR_Box Var_20 = (MR_hl_field(2, HeadVar__2_2, 2));
          MR_Box Var_21 = (MR_hl_field(2, HeadVar__2_2, 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_22, HeadVar__3_3, &Var_27);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_18, Var_19, Var_27, &Var_28);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_23, Var_28, &Var_29);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(3, HeadVar__2_2, 0));
          MR_Box Var_33 = (MR_hl_field(3, HeadVar__2_2, 1));
          MR_Box Var_34 = (MR_hl_field(3, HeadVar__2_2, 2));
          MR_Box Var_35 = (MR_hl_field(3, HeadVar__2_2, 3));
          MR_Box Var_36 = (MR_hl_field(3, HeadVar__2_2, 4));
          MR_Box Var_37 = (MR_hl_field(3, HeadVar__2_2, 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_38, HeadVar__3_3, &Var_44);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_32, Var_33, Var_44, &Var_45);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_39, Var_45, &Var_46);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_34, Var_35, Var_46, &Var_47);
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_58, Var_59, Var_40, Var_47, &Var_48);
          mercury__map__reverse_map_2_4_p_0(Var_58, Var_59, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
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
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_RevMap_0_10,
  MR_Word * STATE_VARIABLE_RevMap_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_17_17;
  MR_Word Keys0_8;
  MR_Box conv0_Keys0_8;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_K_14));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_15, TypeInfo_17_17, (MR_Word) (STATE_VARIABLE_RevMap_0_10), Value_6, &conv0_Keys0_8);
  if (succeeded)
  {
    Keys0_8 = ((MR_Word) (conv0_Keys0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Keys_9;
    MR_Word Var_22 = (MR_Word) (Keys0_8);
    MR_Word Var_23;
    MR_Word NewMap_24;
    MR_Word conv1_NewMap_24;

    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_K_14, Var_22, Key_5, &Var_23);
    Keys_9 = (MR_Word) (Var_23);
    succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_V_15, TypeInfo_17_17, Value_6, ((MR_Box) (Keys_9)), (MR_Word) (STATE_VARIABLE_RevMap_0_10), &conv1_NewMap_24);
    if (succeeded)
    {
      NewMap_24 = (MR_Word) (conv1_NewMap_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *STATE_VARIABLE_RevMap_11 = NewMap_24;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_V_15, TypeInfo_17_17, (MR_String) "map.det_update: key not found", Value_6);
        return;
      }
  }
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word Var_13;
    MR_Word Var_27;
    MR_Word NewMap_29;
    MR_Word conv2_NewMap_29;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = Key_5;
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_13 = (MR_Word) (Var_27);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_K_14));
    }
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_15, TypeInfo_21_21, Value_6, ((MR_Box) (Var_13)), (MR_Word) (STATE_VARIABLE_RevMap_0_10), &conv2_NewMap_29);
    if (succeeded)
    {
      NewMap_29 = (MR_Word) (conv2_NewMap_29);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *STATE_VARIABLE_RevMap_11 = NewMap_29;
    else
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_V_15, TypeInfo_21_21, (MR_String) "map.det_insert: key already present", Value_6);
        return;
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
  MR_Word AL_4;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
  return AL_4;
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
  MR_Word AL_4;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
  return AL_4;
}

void MR_CALL 
mercury__map__from_corresponding_lists_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word Keys_4,
  MR_Word Values_5,
  MR_Word * Map_6)
{
  MR_Word AssocList_7;

  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Keys_4, Values_5, &AssocList_7);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AssocList_7, (MR_Word) ((MR_Unsigned) 0U), Map_6);
}

MR_Word MR_CALL 
mercury__map__from_corresponding_lists_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Ks_4,
  MR_Word Vs_5)
{
  MR_Word M_6;
  MR_Word AssocList_9;

  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_4, Vs_5, &AssocList_9);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AssocList_9, (MR_Word) ((MR_Unsigned) 0U), &M_6);
  return M_6;
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
  MR_Word M_4;

  mercury__tree234__from_rev_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &M_4);
  return M_4;
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
  MR_Word M_4;

  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &M_4);
  return M_4;
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
  MR_Word M_4;

  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, (MR_Word) ((MR_Unsigned) 0U), &M_4);
  return M_4;
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

static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__map__IntroducedFrom__pred__det_transform_value__1745__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), wrapper_arg_1, wrapper_arg_2);
}

MR_Word MR_CALL 
mercury__map__det_transform_value_3_f_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_K_19,
  MR_Word F_5,
  MR_Box K_6,
  MR_Word STATE_VARIABLE_Map_0_10)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Map_11;
  MR_Word Var_12;
  MR_Word NewMap_20;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&mercury__map_scalar_common_5[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (mercury__map__det_transform_value_3_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TypeInfo_for_V_18));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (F_5));
  }
  succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_for_V_18, TypeInfo_for_K_19, Var_12, K_6, STATE_VARIABLE_Map_0_10, &NewMap_20);
  if (succeeded)
    STATE_VARIABLE_Map_11 = NewMap_20;
  else
    mercury__require__report_lookup_error_2_p_0(TypeInfo_for_K_19, (MR_String) "map.det_transform_value: key not found", K_6);
  return STATE_VARIABLE_Map_11;
}

MR_bool MR_CALL 
mercury__map__transform_value_4_p_0(
  MR_Word TypeInfo_for_V_10,
  MR_Word TypeInfo_for_K_11,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_for_V_10, TypeInfo_for_K_11, P_5, K_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__sorted_keys_match_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Word List_4)
{
  MR_bool succeeded;
  MR_Word Var_7;

  succeeded = mercury__tree234__sorted_keys_match_in_tree_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, List_4, &Var_7);
  if (succeeded)
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
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
  MR_Word * ValueList_4)
{
  mercury__tree234__values_acc_3_p_0(TypeInfo_for__K_5, TypeInfo_for_V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), ValueList_4);
}

MR_Word MR_CALL 
mercury__map__values_1_f_0(
  MR_Word TypeInfo_for__K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word M_3)
{
  MR_Word Vs_4;

  mercury__tree234__values_acc_3_p_0(TypeInfo_for__K_5, TypeInfo_for_V_6, M_3, (MR_Word) ((MR_Unsigned) 0U), &Vs_4);
  return Vs_4;
}

void MR_CALL 
mercury__map__keys_as_set_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for__V_7,
  MR_Word Map_3,
  MR_Word * KeySet_4)
{
  MR_Word Keys_5;
  MR_Word Var_9;

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_6, TypeInfo_for__V_7, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_5);
  if ((Keys_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_10 = (MR_hl_field(1, Keys_5, 0));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Keys_5, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_K_6, Var_10, Var_11, &Var_9);
  }
  *KeySet_4 = (MR_Word) (Var_9);
}

MR_Word MR_CALL 
mercury__map__keys_as_set_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for__V_6,
  MR_Word Map_3)
{
  MR_Word KeySet_4;
  MR_Word Keys_7;
  MR_Word Var_9;

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_7);
  if ((Keys_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_10 = (MR_hl_field(1, Keys_7, 0));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, Keys_7, 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_K_5, Var_10, Var_11, &Var_9);
  }
  KeySet_4 = (MR_Word) (Var_9);
  return KeySet_4;
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
  MR_Word Keys_4;

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
  return Keys_4;
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
  MR_Word Keys_4;

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for__V_6, Map_3, (MR_Word) ((MR_Unsigned) 0U), &Keys_4);
  return Keys_4;
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
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word NewMap_10;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Key_5, Value_7, Map_6, &NewMap_10);
  if (succeeded)
    HeadVar__4_4 = NewMap_10;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", Key_5);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__map__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box Key_5,
  MR_Word Map_6,
  MR_Box Value_7)
{
  MR_Word HeadVar__4_4;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, Key_5, Value_7, Map_6, &HeadVar__4_4);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__map__det_elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box Key_4,
  MR_Word Map_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Box VPrime_8;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, &VPrime_8);
  if (succeeded)
    HeadVar__3_3 = VPrime_8;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", Key_4);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__map__elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box Key_4,
  MR_Word Map_5,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Map_5, Key_4, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__remove_smallest_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;
  MR_Word Var_12;

  succeeded = mercury__tree234__remove_smallest_2_5_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, STATE_VARIABLE_Map_0_8, K_5, V_6, STATE_VARIABLE_Map_9, &Var_12);
  return succeeded;
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
  MR_bool succeeded;
  MR_Box ValuePrime_8;
  MR_Word MapPrime_9;
  MR_Word Var_16;

  succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, STATE_VARIABLE_Map_0_10, Key_5, &ValuePrime_8, &MapPrime_9, &Var_16);
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

MR_bool MR_CALL 
mercury__map__remove_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Box Key_5,
  MR_Box * Value_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;
  MR_Word Var_12;

  succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, STATE_VARIABLE_Map_0_8, Key_5, Value_6, STATE_VARIABLE_Map_9, &Var_12);
  return succeeded;
}

MR_Word MR_CALL 
mercury__map__delete_sorted_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Word Ks_5)
{
  MR_Word M_6;

  mercury__map__delete_sorted_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, M0_4, &M_6);
  return M_6;
}

void MR_CALL 
mercury__map__delete_sorted_list_3_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word DeleteKeys_4,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13)
{
  MR_bool succeeded;
  MR_Integer NumDeleteKeys_6;
  MR_Integer MinSize_7;
  MR_Unsigned Var_22;
  MR_Integer Var_24;
  MR_Integer Var_14;

  mercury__list__ulength_acc_3_p_0(TypeInfo_for_K_18, DeleteKeys_4, (MR_Unsigned) 0U, &Var_22);
{
#define MR_PROC_LABEL mercury__map__delete_sorted_list_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_22 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	NumDeleteKeys_6  = I;
}
  mercury__tree234__find_depth_2_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, STATE_VARIABLE_Map_0_12, &Var_24);
  mercury__tree234__min_size_based_on_depth_2_p_0(Var_24, &MinSize_7);
  Var_14 = (MR_Integer) ((MR_Unsigned) NumDeleteKeys_6 * (MR_Unsigned) 5);
  succeeded = (Var_14 < MinSize_7);
  if (succeeded)
    mercury__map__delete_list_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, DeleteKeys_4, STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13);
  else
  {
    MR_Word Pairs0_8;
    MR_Word RevPairs_9;
    MR_Word LeftOverPairs_10;
    MR_Word Pairs_11;
    MR_Word conv0_Pairs_11;

    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, STATE_VARIABLE_Map_0_12, (MR_Word) ((MR_Unsigned) 0U), &Pairs0_8);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(TypeInfo_for_K_18, DeleteKeys_4, Pairs0_8, (MR_Word) ((MR_Unsigned) 0U), &RevPairs_9, &LeftOverPairs_10);
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0((MR_Word) (RevPairs_9), (MR_Word) (LeftOverPairs_10), &conv0_Pairs_11);
    Pairs_11 = (MR_Word) (conv0_Pairs_11);
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, Pairs_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Map_13);
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
      MR_Box X_5 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_9, 0) = X_5;
        MR_hl_field(1, Var_9, 1) = ((MR_Box) (HeadVar__2_2));
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
  MR_Word TypeInfo_for_K_31,
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
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box Var_34 = (MR_hl_field(1, HeadVar__1_1, 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RevPairs_4 = STATE_VARIABLE_RevPairs_0_3;
      }
      else
      {
        MR_Word Pair0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Pairs0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Box Key0_21 = (MR_hl_field(0, Pair0_17, 0));
        MR_Word Result_23;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &Result_23, Var_34, Key0_21);
        switch (Result_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_33;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_33;
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
              MR_Word STATE_VARIABLE_RevPairs_3_29;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_RevPairs_0_3;

              {
                STATE_VARIABLE_RevPairs_3_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevPairs_3_29, 0) = ((MR_Box) (Pair0_17));
                MR_hl_field(1, STATE_VARIABLE_RevPairs_3_29, 1) = ((MR_Box) (STATE_VARIABLE_RevPairs_0_3));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Pairs0_18;
              next_value_of_STATE_VARIABLE_RevPairs_0_3 = STATE_VARIABLE_RevPairs_3_29;
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
  MR_Word M_6;

  mercury__map__delete_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, M0_4, &M_6);
  return M_6;
}

void MR_CALL 
mercury__map__delete_list_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
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
      MR_Box DeleteKey_7 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word DeleteKeys_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Map_1_12;
      MR_Word Var_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, STATE_VARIABLE_Map_0_2, DeleteKey_7, &STATE_VARIABLE_Map_1_12, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = DeleteKeys_8;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__delete_3_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box Key_4,
  MR_Word STATE_VARIABLE_Map_0_6,
  MR_Word * STATE_VARIABLE_Map_7)
{
  MR_Word Var_10;

  mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, STATE_VARIABLE_Map_0_6, Key_4, STATE_VARIABLE_Map_7, &Var_10);
}

MR_Word MR_CALL 
mercury__map__delete_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Box K_5)
{
  MR_Word M_6;
  MR_Word Var_9;

  mercury__tree234__delete_2_4_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M0_4, K_5, &M_6, &Var_9);
  return M_6;
}

MR_Word MR_CALL 
mercury__map__set_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Word AL_5)
{
  MR_Word M_6;

  mercury__map__set_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_5, M0_4, &M_6);
  return M_6;
}

void MR_CALL 
mercury__map__set_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
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
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Map_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(0, Var_13, 0));
      V_8 = (MR_hl_field(0, Var_13, 1));
      mercury__tree234__set_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_7, V_8, STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_1_14;
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
  MR_Word M0_5,
  MR_Word Ks_6,
  MR_Word Vs_7)
{
  MR_Word M_8;

  mercury__map__set_from_corresponding_lists_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_6, Vs_7, M0_5, &M_8);
  return M_8;
}

void MR_CALL 
mercury__map__set_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
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
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box Var_31 = (MR_hl_field(1, HeadVar__1_1, 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.set_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box V_22 = (MR_hl_field(1, HeadVar__2_2, 0));
        MR_Word Vs_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_Map_1_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Map_0_3;

        mercury__tree234__set_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, Var_31, V_22, STATE_VARIABLE_Map_0_3, &STATE_VARIABLE_Map_1_27);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_30;
        next_value_of_HeadVar__2_2 = Vs_23;
        next_value_of_STATE_VARIABLE_Map_0_3 = STATE_VARIABLE_Map_1_27;
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
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  mercury__tree234__set_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
}

MR_Word MR_CALL 
mercury__map__set_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  MR_Word M_8;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, &M_8);
  return M_8;
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

MR_Word MR_CALL 
mercury__map__det_update_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  MR_bool succeeded;
  MR_Word M_8;
  MR_Word NewMap_11;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, &NewMap_11);
  if (succeeded)
    M_8 = NewMap_11;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.det_update: key not found", K_6);
  return M_8;
}

MR_bool MR_CALL 
mercury__map__update_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
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
  MR_bool succeeded;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, M_8);
  return succeeded;
}

void MR_CALL 
mercury__map__search_insert_5_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * MaybeOldV_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  mercury__tree234__search_insert_5_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, K_6, V_7, MaybeOldV_8, STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

MR_Word MR_CALL 
mercury__map__det_insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M0_4,
  MR_Word AL_5)
{
  MR_Word M_6;

  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, AL_5, M0_4, &M_6);
  return M_6;
}

void MR_CALL 
mercury__map__det_insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
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
      MR_Word KVs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Map_1_14;
      MR_Word NewMap_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      K_7 = (MR_hl_field(0, Var_13, 0));
      V_8 = (MR_hl_field(0, Var_13, 1));
      succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_7, V_8, STATE_VARIABLE_Map_0_2, &NewMap_17);
      if (succeeded)
        STATE_VARIABLE_Map_1_14 = NewMap_17;
      else
        {
          mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, (MR_String) "map.det_insert: key already present", K_7);
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = KVs_9;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_1_14;
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
  MR_Word M0_5,
  MR_Word Ks_6,
  MR_Word Vs_7)
{
  MR_Word M_8;

  mercury__map__det_insert_from_corresponding_lists_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_6, Vs_7, M0_5, &M_8);
  return M_8;
}

void MR_CALL 
mercury__map__det_insert_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
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
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box Var_31 = (MR_hl_field(1, HeadVar__1_1, 0));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_insert_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Box V_22 = (MR_hl_field(1, HeadVar__2_2, 0));
        MR_Word Vs_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_Map_1_27;
        MR_Word NewMap_32;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Map_0_3;

        succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, Var_31, V_22, STATE_VARIABLE_Map_0_3, &NewMap_32);
        if (succeeded)
          STATE_VARIABLE_Map_1_27 = NewMap_32;
        else
          {
            mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, (MR_String) "map.det_insert: key already present", Var_31);
            return;
          }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_30;
        next_value_of_HeadVar__2_2 = Vs_23;
        next_value_of_STATE_VARIABLE_Map_0_3 = STATE_VARIABLE_Map_1_27;
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

MR_Word MR_CALL 
mercury__map__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  MR_bool succeeded;
  MR_Word M_8;
  MR_Word NewMap_11;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, &NewMap_11);
  if (succeeded)
    M_8 = NewMap_11;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "map.det_insert: key already present", K_6);
  return M_8;
}

MR_bool MR_CALL 
mercury__map__insert_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Map_0_8,
  MR_Word * STATE_VARIABLE_Map_9)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_5, V_6, STATE_VARIABLE_Map_0_8, STATE_VARIABLE_Map_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__insert_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word M0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * M_8)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, M0_5, M_8);
  return succeeded;
}

MR_Box MR_CALL 
mercury__map__det_min_key_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_3)
{
  MR_bool succeeded;
  MR_Box HeadVar__2_2;
  MR_Box Key_4;

  succeeded = mercury__tree234__min_key_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_3, &Key_4);
  if (succeeded)
    HeadVar__2_2 = Key_4;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_min_key\'/1", (MR_String) "map.min_key failed");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__map__min_key_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Box * Key_4)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__min_key_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, Key_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__min_key_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Box * Key_4)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__min_key_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, Key_4);
  return succeeded;
}

MR_Box MR_CALL 
mercury__map__det_max_key_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_3)
{
  MR_bool succeeded;
  MR_Box HeadVar__2_2;
  MR_Box Key_4;

  succeeded = mercury__tree234__max_key_2_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_3, &Key_4);
  if (succeeded)
    HeadVar__2_2 = Key_4;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_max_key\'/1", (MR_String) "map.max_key failed");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__map__max_key_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Box * Key_4)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__max_key_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, Key_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__max_key_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word Map_3,
  MR_Box * Key_4)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__max_key_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, Map_3, Key_4);
  return succeeded;
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

MR_bool MR_CALL 
mercury__map__upper_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__upper_bound_search_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Map_5, SearchK_6, K_7, V_8);
  return succeeded;
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

MR_bool MR_CALL 
mercury__map__lower_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__lower_bound_search_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Map_5, SearchK_6, K_7, V_8);
  return succeeded;
}

static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__map__inverse_search_3_p_0_env_0_s * env_ptr = (struct mercury__map__inverse_search_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_5, (env_ptr)->mercury__map__inverse_search_3_p_0_env_0__Var_9);
  if ((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded)
    ((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont)((env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr);
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
  struct mercury__map__inverse_search_3_p_0_env_0_s env;

  (env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8 = TypeInfo_for_V_8;
  (env).mercury__map__inverse_search_3_p_0_env_0__V_5 = V_5;
  (env).mercury__map__inverse_search_3_p_0_env_0__cont = cont;
  (env).mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__tree234__member_3_p_0(TypeInfo_for_K_7, (env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, Map_4, K_6, &(env).mercury__map__inverse_search_3_p_0_env_0__Var_9, mercury__map__inverse_search_3_p_0_1, &env);
}

void MR_CALL 
mercury__map__lookup_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Map_4,
  MR_Box K_5,
  MR_Box * V_6)
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

MR_Box MR_CALL 
mercury__map__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Box K_5)
{
  MR_bool succeeded;
  MR_Box V_6;
  MR_Box VPrime_9;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, &VPrime_9);
  if (succeeded)
    V_6 = VPrime_9;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", K_5);
  return V_6;
}

MR_bool MR_CALL 
mercury__map__search_3_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word Map_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Map_4, K_5, V_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word M_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, M_4, K_5, V_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__contains_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for__V_7,
  MR_Word Map_3,
  MR_Box K_4)
{
  MR_bool succeeded;
  MR_Box Var_5;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for__V_7, Map_3, K_4, &Var_5);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__is_non_empty_1_p_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word M_2)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__is_non_empty_1_p_0(TypeInfo_3_3, TypeInfo_4_4, M_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__map__is_empty_1_p_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word M_2)
{
  MR_bool succeeded;

  succeeded = mercury__tree234__is_empty_1_p_0(TypeInfo_3_3, TypeInfo_4_4, M_2);
  return succeeded;
}

MR_Word MR_CALL 
mercury__map__singleton_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Box V_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = K_4;
    MR_hl_field(1, HeadVar__3_3, 1) = V_5;
    MR_hl_field(1, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
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
  MR_bool succeeded;

  succeeded = mercury__map____Unify____map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__map____Compare____map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
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
