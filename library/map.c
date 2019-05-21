/*
** Automatically generated from `map.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module map. */
/* :- implementation. */

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
mercury__map__IntroducedFrom__pred__det_transform_value__1069__1_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__F_5,
  MR_Box mercury__map__LambdaHeadVar__1_14,
  MR_Box * mercury__map__LambdaHeadVar__2_15);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_58,
  MR_Word mercury__map__Var_59,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__HeadVar__3_3,
  MR_Word * mercury__map__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_52,
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_52,
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_36,
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_36,
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word mercury__map__Var_64,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__HeadVar__3_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word mercury__map__Var_65,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__HeadVar__3_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_56,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Box mercury__map__HeadVar__3_3,
  MR_Box * mercury__map__HeadVar__4_4);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_56,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Box mercury__map__HeadVar__3_3,
  MR_Box * mercury__map__HeadVar__4_4);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__L_3);

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
  MR_Word * mercury__map__HeadVar__5_5);

static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
  MR_Box mercury__map__closure_arg,
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box * mercury__map__wrapper_arg_2);

static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
  void * mercury__map__env_ptr_arg);

static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box mercury__map__wrapper_arg_2,
  MR_Box mercury__map__wrapper_arg_3,
  MR_Box mercury__map__wrapper_arg_4);

static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box mercury__map__wrapper_arg_2,
  MR_Box * mercury__map__wrapper_arg_3,
  MR_Box mercury__map__wrapper_arg_4,
  MR_Box mercury__map__wrapper_arg_5);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__map____vpti_func_2__pseudo_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
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



static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

const MR_TypeCtorInfo_Struct mercury__map__map__type_ctor_info_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__map____Unify____map_2_0_10001)),
  ((MR_Box) (mercury__map____Compare____map_2_0_10001)),
  (MR_String) "map",
  (MR_String) "map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Word mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Integer mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Word mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Integer mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_12,
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Map_4,
  MR_Word mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__VPrime_7;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
    if (mercury__map__succeeded)
      *mercury__map__V_6 = mercury__map__VPrime_7;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Map_4,
  MR_Integer mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__TypeInfo_for_K_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__map__VPrime_7;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
    if (mercury__map__succeeded)
      *mercury__map__V_6 = mercury__map__VPrime_7;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Word mercury__map__K_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__V_6;
    MR_Box mercury__map__VPrime_14;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_14);
    }
    if (mercury__map__succeeded)
      mercury__map__V_6 = mercury__map__VPrime_14;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
      }
    }
    return mercury__map__V_6;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Integer mercury__map__K_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__V_6;
    MR_Word mercury__map__TypeInfo_for_K_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__map__VPrime_12;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
    if (mercury__map__succeeded)
      mercury__map__V_6 = mercury__map__VPrime_12;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
      }
    }
    return mercury__map__V_6;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_14,
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_9;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_8, &mercury__map__conv0_STATE_VARIABLE_Map_9);
    }
    if (mercury__map__succeeded)
    {
      *mercury__map__STATE_VARIABLE_Map_9 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_9;
      mercury__map__succeeded = MR_TRUE;
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Integer mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_17,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__NewMap_8;
    MR_Word mercury__map__conv0_NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__conv0_NewMap_8);
    }
    if (mercury__map__succeeded)
    {
      mercury__map__NewMap_8 = (MR_Word) mercury__map__conv0_NewMap_8;
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Integer mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_14,
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Integer mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    {
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_14,
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Integer mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_17,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_17, mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Integer mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
        return;
      }
    }
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_5_p_0(
  MR_Word mercury__map__Var_16,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__K_6,
  MR_Box mercury__map__V_7,
  MR_Word * mercury__map__MaybeOldV_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
{
  {
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_11;

    {
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__conv0_STATE_VARIABLE_Map_11);
    }
    *mercury__map__STATE_VARIABLE_Map_11 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_11;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_5_p_0(
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Integer mercury__map__K_6,
  MR_Box mercury__map__V_7,
  MR_Word * mercury__map__MaybeOldV_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
{
  {
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    {
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
    }
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__M2_5)
{
  {
    MR_Word mercury__map__M3_6;
    MR_Word mercury__map__AssocList_14;
    MR_Word mercury__map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__conv0_AssocList_14;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_Word) mercury__map__M2_5, (MR_Word) mercury__map__V_5_20, &mercury__map__conv0_AssocList_14);
    }
    mercury__map__AssocList_14 = (MR_Word) mercury__map__conv0_AssocList_14;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_14, mercury__map__M1_4, &mercury__map__M3_6);
    }
    return mercury__map__M3_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_11,
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Map0_4,
  MR_Word mercury__map__Map1_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_Word mercury__map__AssocList_7;
    MR_Word mercury__map__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__conv0_AssocList_7;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_Word) mercury__map__Map1_5, (MR_Word) mercury__map__V_5_16, &mercury__map__conv0_AssocList_7);
    }
    mercury__map__AssocList_7 = (MR_Word) mercury__map__conv0_AssocList_7;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__S_5)
{
  {
    MR_Word mercury__map__M2_6;
    MR_Word mercury__map__Keys_14 = (MR_Word) mercury__map__S_5;
    MR_Word mercury__map__NewMap0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_14, mercury__map__M1_4, mercury__map__NewMap0_15, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_12,
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Original_4,
  MR_Word mercury__map__KeySet_5,
  MR_Word * mercury__map__NewMap_6)
{
  {
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_10,
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__S_5)
{
  {
    MR_Word mercury__map__M2_6;
    MR_Word mercury__map__NewMap0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_14, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_11,
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Original_4,
  MR_Word mercury__map__Keys_5,
  MR_Word * mercury__map__NewMap_6)
{
  {
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
    }
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Integer mercury__map__Key_4,
  MR_Word mercury__map__Map_5,
  MR_Box * mercury__map__HeadVar__3_3)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_9,
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Word mercury__map__Key_4,
  MR_Word mercury__map__Map_5,
  MR_Box * mercury__map__HeadVar__3_3)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
    return mercury__map__succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Integer mercury__map__Key_4,
  MR_Word mercury__map__Map_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__HeadVar__3_3;
    MR_Word mercury__map__TypeInfo_for_K_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box mercury__map__VPrime_15;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_15);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_15;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
      }
    }
    return mercury__map__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
  MR_Word mercury__map__Var_9,
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Word mercury__map__Key_4,
  MR_Word mercury__map__Map_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__HeadVar__3_3;
    MR_Box mercury__map__VPrime_17;

    {
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_17);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_17;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
      }
    }
    return mercury__map__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Integer mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_Word mercury__map__HeadVar__4_4;
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

    {
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
    return mercury__map__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
  MR_Word mercury__map__Var_11,
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_Word mercury__map__HeadVar__4_4;
    MR_Word mercury__map__conv0_HeadVar__4_4;

    {
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_HeadVar__4_4);
    }
    mercury__map__HeadVar__4_4 = (MR_Word) mercury__map__conv0_HeadVar__4_4;
    return mercury__map__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Integer mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__HeadVar__4_4;
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__map__NewMap_19;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
    else
    {
      MR_Box mercury__map__Var_22;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
      }
    }
    return mercury__map__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
  MR_Word mercury__map__Var_11,
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__HeadVar__4_4;
    MR_Word mercury__map__NewMap_21;
    MR_Word mercury__map__conv0_NewMap_21;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_NewMap_21);
    }
    if (mercury__map__succeeded)
    {
      mercury__map__NewMap_21 = (MR_Word) mercury__map__conv0_NewMap_21;
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_21;
    else
    {
      MR_Box mercury__map__Var_24;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
      }
    }
    return mercury__map__HeadVar__4_4;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_19,
  MR_Word mercury__map__TypeInfo_for_K_16,
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Word mercury__map__K_7;
      MR_Box mercury__map__V_8;
      MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__map__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

      mercury__map__K_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 0)));
      mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 1));
      {
        mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__Var_19, mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__AssocList_9;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_14_14;

        mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_2;
        mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_108_97_114_103_101_95_109_97_112_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
  MR_Word mercury__map__Var_16,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
      else
      {
        MR_Word mercury__map__K_5;
        MR_Box mercury__map__V_6;
        MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__map__Map2_11;
        MR_Word mercury__map__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__map__Map1_10;
        MR_Word mercury__map__conv0_Map1_10;

        mercury__map__K_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__Var_12, (MR_Integer) 0)));
        mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__Var_12, (MR_Integer) 1));
        {
          mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__HeadVar__2_2, &mercury__map__conv0_Map1_10);
        }
        if (mercury__map__succeeded)
        {
          mercury__map__Map1_10 = (MR_Word) mercury__map__conv0_Map1_10;
          mercury__map__succeeded = MR_TRUE;
        }
        if (mercury__map__succeeded)
          mercury__map__Map2_11 = mercury__map__Map1_10;
        else
          mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__AssocList_7;
          MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Map2_11;

          mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
  MR_Word mercury__map__Var_21,
  MR_Word mercury__map__TypeInfo_for_K_18,
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
      else
      {
        MR_Word mercury__map__K_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__map__STATE_VARIABLE_New_16_16;
        MR_Box mercury__map__V_13;

        {
          mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__Var_21, mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
        }
        if (mercury__map__succeeded)
        {
          MR_Word mercury__map__NewMap_31;
          MR_Word mercury__map__conv0_NewMap_31;

          {
            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, ((MR_Box) (mercury__map__K_9)), mercury__map__V_13, (MR_Word) mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__conv0_NewMap_31);
          }
          if (mercury__map__succeeded)
          {
            mercury__map__NewMap_31 = (MR_Word) mercury__map__conv0_NewMap_31;
            mercury__map__succeeded = MR_TRUE;
          }
          if (mercury__map__succeeded)
            mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_31;
          else
          {
            MR_Box mercury__map__Var_34;

            {
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_9)));
              return;
            }
          }
        }
        else
          mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Ks_10;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_16_16;

          mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__next_value_of_STATE_VARIABLE_New_0_3;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1069__1_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__F_5,
  MR_Box mercury__map__LambdaHeadVar__1_14,
  MR_Box * mercury__map__LambdaHeadVar__2_15)
{
  {
    MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__F_5, (MR_Integer) 1)));

    {
      *mercury__map__LambdaHeadVar__2_15 = mercury__map__func_0(((MR_Box) mercury__map__F_5), mercury__map__LambdaHeadVar__1_14);
    }
  }
}

void MR_CALL 
mercury__map____Compare____map_2_0(
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Word * mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__HeadVar__3_3)
{
  {
    MR_Word mercury__map__Cast_HeadVar1_4 = mercury__map__HeadVar__2_2;
    MR_Word mercury__map__Cast_HeadVar2_5 = mercury__map__HeadVar__3_3;

    {
      mercury__tree234____Compare____tree234_2_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__HeadVar__1_1, mercury__map__Cast_HeadVar1_4, mercury__map__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__map____Unify____map_2_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__Cast_HeadVar1_3 = mercury__map__HeadVar__1_1;
    MR_Word mercury__map__Cast_HeadVar2_4 = mercury__map__HeadVar__2_2;

    {
      mercury__map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Cast_HeadVar1_3, mercury__map__Cast_HeadVar2_4);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_3(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
  }
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_2(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_1(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
  }
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
    }
    return mercury__map__succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__old_merge_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__M2_5)
{
  {
    MR_Word mercury__map__M3_6;

    {
      mercury__map__old_merge_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__M2_5, &mercury__map__M3_6);
    }
    return mercury__map__M3_6;
  }
}

void MR_CALL 
mercury__map__old_merge_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_10,
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__M0_4,
  MR_Word mercury__map__M1_5,
  MR_Word * mercury__map__M_6)
{
  {
    MR_Word mercury__map__TypeCtorInfo_12_12;
    MR_Word mercury__map__TypeInfo_13_13;
    MR_Word mercury__map__ML0_7;
    MR_Word mercury__map__ML1_8;
    MR_Word mercury__map__ML_9;
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_25;
    MR_Word mercury__map__V_5_32;
    MR_Word mercury__map__conv0_ML_9;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__M0_4, mercury__map__V_5_18, &mercury__map__ML0_7);
    }
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__M1_5, mercury__map__V_5_25, &mercury__map__ML1_8);
    }
    mercury__map__TypeCtorInfo_12_12 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    {
      mercury__map__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 2) = ((MR_Box) (mercury__map__TypeInfo_for_V_11));
    }
    {
      mercury__list__merge_3_p_0(mercury__map__TypeInfo_13_13, (MR_Word) mercury__map__ML0_7, (MR_Word) mercury__map__ML1_8, &mercury__map__conv0_ML_9);
    }
    mercury__map__ML_9 = (MR_Word) mercury__map__conv0_ML_9;
    mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__ML_9, mercury__map__V_5_32, mercury__map__M_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__f_100_101_116_95_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Box mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__HeadVar__4_4;
    MR_Word mercury__map__NewMap_19;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
    else
    {
      MR_Box mercury__map__Var_22;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", mercury__map__Key_5);
      }
    }
    return mercury__map__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__map__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Box mercury__map__Key_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__Value_7)
{
  {
    MR_Word mercury__map__HeadVar__4_4;

    {
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
    return mercury__map__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__map__det_elem_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Box mercury__map__Key_4,
  MR_Word mercury__map__Map_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__HeadVar__3_3;
    MR_Box mercury__map__VPrime_14;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_14);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_14;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", mercury__map__Key_4);
      }
    }
    return mercury__map__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__map__elem_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Box mercury__map__Key_4,
  MR_Word mercury__map__Map_5,
  MR_Box * mercury__map__HeadVar__3_3)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
    return mercury__map__succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__reverse_map_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_3)
{
  {
    MR_Word mercury__map__RevMap_4;
    MR_Word mercury__map__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_3, mercury__map__Var_6, &mercury__map__RevMap_4);
    }
    return mercury__map__RevMap_4;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_58,
  MR_Word mercury__map__Var_59,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__HeadVar__3_3,
  MR_Word * mercury__map__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) mercury__map__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
          MR_Word mercury__map__V_17_15;
          MR_Word mercury__map__V_18_16;

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_12_11, mercury__map__HeadVar__3_3, &mercury__map__V_17_15);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_10_9, mercury__map__V_11_10, mercury__map__V_17_15, &mercury__map__V_18_16);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_13_12;
            MR_Word mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_18_16;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Word mercury__map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
          MR_Word mercury__map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__map__V_31_27;
          MR_Word mercury__map__V_32_28;
          MR_Word mercury__map__V_33_29;
          MR_Word mercury__map__V_34_30;

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_25_22, mercury__map__HeadVar__3_3, &mercury__map__V_31_27);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_21_18, mercury__map__V_22_19, mercury__map__V_31_27, &mercury__map__V_32_28);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_26_23, mercury__map__V_32_28, &mercury__map__V_33_29);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_23_20, mercury__map__V_24_21, mercury__map__V_33_29, &mercury__map__V_34_30);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_27_24;
            MR_Word mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_34_30;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Box mercury__map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
          MR_Box mercury__map__V_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
          MR_Word mercury__map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
          MR_Word mercury__map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
          MR_Word mercury__map__V_50_44;
          MR_Word mercury__map__V_51_45;
          MR_Word mercury__map__V_52_46;
          MR_Word mercury__map__V_53_47;
          MR_Word mercury__map__V_54_48;
          MR_Word mercury__map__V_55_49;

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_43_38, mercury__map__HeadVar__3_3, &mercury__map__V_50_44);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_37_32, mercury__map__V_38_33, mercury__map__V_50_44, &mercury__map__V_51_45);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_44_39, mercury__map__V_51_45, &mercury__map__V_52_46);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_39_34, mercury__map__V_40_35, mercury__map__V_52_46, &mercury__map__V_53_47);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_45_40, mercury__map__V_53_47, &mercury__map__V_54_48);
          }
          {
            mercury__map__reverse_map_2_4_p_0(mercury__map__Var_58, mercury__map__Var_59, mercury__map__V_41_36, mercury__map__V_42_37, mercury__map__V_54_48, &mercury__map__V_55_49);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_46_41;
            MR_Word mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_55_49;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__map__reverse_map_2_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Box mercury__map__Key_5,
  MR_Box mercury__map__Value_6,
  MR_Word mercury__map__STATE_VARIABLE_RevMap_0_10,
  MR_Word * mercury__map__STATE_VARIABLE_RevMap_11)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__TypeInfo_18_18;
    MR_Word mercury__map__Keys0_8;
    MR_Word mercury__map__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Box mercury__map__conv0_Keys0_8;

    {
      mercury__map__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
    }
    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, mercury__map__Value_6, &mercury__map__conv0_Keys0_8);
    }
    if (mercury__map__succeeded)
    {
      mercury__map__Keys0_8 = ((MR_Word) mercury__map__conv0_Keys0_8);
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
    {
      MR_Word mercury__map__Keys_9;
      MR_Word mercury__map__V_5_30 = (MR_Word) mercury__map__Keys0_8;
      MR_Word mercury__map__V_6_31;
      MR_Word mercury__map__NewMap_37;
      MR_Word mercury__map__conv1_NewMap_37;

      {
        mercury__set_ordlist__insert_loop_3_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__V_5_30, mercury__map__Key_5, &mercury__map__V_6_31);
      }
      mercury__map__Keys_9 = (MR_Word) mercury__map__V_6_31;
      {
        mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, mercury__map__Value_6, ((MR_Box) (mercury__map__Keys_9)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv1_NewMap_37);
      }
      if (mercury__map__succeeded)
      {
        mercury__map__NewMap_37 = (MR_Word) mercury__map__conv1_NewMap_37;
        mercury__map__succeeded = MR_TRUE;
      }
      if (mercury__map__succeeded)
        *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_37;
      else
      {
        MR_Word mercury__map__Var_40;

        {
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_String) "map.det_update: key not found", mercury__map__Value_6);
          return;
        }
      }
    }
    else
    {
      MR_Word mercury__map__TypeCtorInfo_21_21;
      MR_Word mercury__map__TypeInfo_22_22;
      MR_Word mercury__map__Var_13;
      MR_Word mercury__map__V_4_46;
      MR_Word mercury__map__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__map__NewMap_54;
      MR_Word mercury__map__conv2_NewMap_54;

      {
        mercury__map__V_4_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__V_4_46, 0) = mercury__map__Key_5;
        MR_hl_field(MR_mktag(1), mercury__map__V_4_46, 1) = ((MR_Box) (mercury__map__V_5_47));
      }
      mercury__map__Var_13 = (MR_Word) mercury__map__V_4_46;
      mercury__map__TypeCtorInfo_21_21 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
      {
        mercury__map__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_21_21));
        MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
      }
      {
        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, mercury__map__Value_6, ((MR_Box) (mercury__map__Var_13)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv2_NewMap_54);
      }
      if (mercury__map__succeeded)
      {
        mercury__map__NewMap_54 = (MR_Word) mercury__map__conv2_NewMap_54;
        mercury__map__succeeded = MR_TRUE;
      }
      if (mercury__map__succeeded)
        *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_54;
      else
      {
        MR_Word mercury__map__Var_57;

        {
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, (MR_String) "map.det_insert: key already present", mercury__map__Value_6);
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__map__det_union_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Union_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__UnionPrime_9;
    MR_Word mercury__map__AssocList1_18;
    MR_Word mercury__map__AssocList2_19;
    MR_Word mercury__map__RevCommonAssocList_20;
    MR_Word mercury__map__Var_21;
    MR_Word mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_33;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_26, &mercury__map__AssocList1_18);
    }
    mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_33, &mercury__map__AssocList2_19);
    }
    mercury__map__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__union_loop_5_p_4(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_18, mercury__map__AssocList2_19, mercury__map__CommonPred_5, mercury__map__Var_21, &mercury__map__RevCommonAssocList_20);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__RevCommonAssocList_20, &mercury__map__UnionPrime_9);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      *mercury__map__Union_8 = mercury__map__UnionPrime_9;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__map__det_union_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__F_5,
  MR_Word mercury__map__M1_6,
  MR_Word mercury__map__M2_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__M3_8;
    MR_Word mercury__map__UnionPrime_25;
    MR_Word mercury__map__AssocList1_32;
    MR_Word mercury__map__AssocList2_33;
    MR_Word mercury__map__RevCommonAssocList_34;
    MR_Word mercury__map__Var_35;
    MR_Word mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_47;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_40, &mercury__map__AssocList1_32);
    }
    mercury__map__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_47, &mercury__map__AssocList2_33);
    }
    mercury__map__Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_32, mercury__map__AssocList2_33, mercury__map__Var_35, &mercury__map__RevCommonAssocList_34);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_34, &mercury__map__UnionPrime_25);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      mercury__map__M3_8 = mercury__map__UnionPrime_25;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_union\'/4", (MR_String) "map.union failed");
      }
    }
    return mercury__map__M3_8;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_52,
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
          MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

          {
            mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
          }
          {
            mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
          }
        }
      else
      {
        MR_Word mercury__map__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
        MR_Box mercury__map__Var_49 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 1));
        MR_Box mercury__map__Var_50 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 0));

        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

          {
            mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
          }
          {
            mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(mercury__map__Var_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
          }
        }
        else
        {
          MR_Word mercury__map__R_16;
          MR_Word mercury__map__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
          MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 0));
          MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 1));
          MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

          {
            mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__Var_50, mercury__map__Key2_42);
          }
          switch (mercury__map__R_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                {
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__Var_48));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                  MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                  mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                  mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__map__Value_17;
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
                MR_Word mercury__map__Var_29;
                MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__Var_52, (MR_Integer) 1)));

                {
                  mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__Var_52), mercury__map__Var_49, mercury__map__Value2_43, &mercury__map__Value_17);
                }
                if (mercury__map__succeeded)
                {
                  {
                    mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Var_50;
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_17;
                  }
                  {
                    mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                    MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                    MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                    mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                    mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                    mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                {
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__Var_21));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                  MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                  mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                  mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                }
                continue;
              }
              break;
          }
        }
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_15;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
        }
        continue;
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
        MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__AssocTail1_12;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
        }
        continue;
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__map__union_4_p_1(
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Common_8)
{
  {
    MR_Word mercury__map__AssocList1_9;
    MR_Word mercury__map__AssocList2_10;
    MR_Word mercury__map__RevCommonAssocList_11;
    MR_Word mercury__map__Var_12;
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_26;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
    mercury__map__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__union_loop_5_p_5(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Var_12, &mercury__map__RevCommonAssocList_11);
    }
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
    }
  }
}

void MR_CALL 
mercury__map__union_loop_5_p_5(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
      else
      {
        MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
        }
      }
    else
    {
      MR_Word mercury__map__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
      MR_Box mercury__map__Var_49 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 1));
      MR_Box mercury__map__Var_50 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 0));

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__Var_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
        }
      }
      else
      {
        MR_Word mercury__map__R_16;
        MR_Word mercury__map__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 0));
        MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 1));
        MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

        {
          mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__Var_50, mercury__map__Key2_42);
        }
        switch (mercury__map__R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__Var_48));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__map__Value_17;
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word mercury__map__Var_29;
              void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

              {
                mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Var_49, mercury__map__Value2_43, &mercury__map__Value_17);
              }
              {
                mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Var_50;
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_17;
              }
              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__Var_21));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
              }
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
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

      {
        mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__AssocTail1_12;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

        mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
      MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

      {
        mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_15;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
      }
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__union_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Common_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__AssocList1_9;
    MR_Word mercury__map__AssocList2_10;
    MR_Word mercury__map__RevCommonAssocList_11;
    MR_Word mercury__map__Var_12;
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_26;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
    mercury__map__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__union_loop_5_p_4(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Var_12, &mercury__map__RevCommonAssocList_11);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__union_loop_5_p_4(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
          MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

          {
            mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
          }
          {
            mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
          }
        }
      else
      {
        MR_Word mercury__map__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
        MR_Box mercury__map__Var_49 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 1));
        MR_Box mercury__map__Var_50 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 0));

        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

          {
            mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
            MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
          }
          {
            mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__Var_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
          }
        }
        else
        {
          MR_Word mercury__map__R_16;
          MR_Word mercury__map__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
          MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 0));
          MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 1));
          MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

          {
            mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__Var_50, mercury__map__Key2_42);
          }
          switch (mercury__map__R_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                {
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__Var_48));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                  MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                  mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                  mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__map__Value_17;
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
                MR_Word mercury__map__Var_29;
                MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

                {
                  mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Var_49, mercury__map__Value2_43, &mercury__map__Value_17);
                }
                if (mercury__map__succeeded)
                {
                  {
                    mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Var_50;
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_17;
                  }
                  {
                    mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                    MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                    MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                    mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                    mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                    mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                {
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__Var_21));
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                  MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                  mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                  mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                }
                continue;
              }
              break;
          }
        }
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
        MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__AssocTail1_12;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
        }
        continue;
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__TypeInfo_for_V_46,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_15;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
          mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
        }
        continue;
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__union_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__F_5,
  MR_Word mercury__map__M1_6,
  MR_Word mercury__map__M2_7)
{
  {
    MR_Word mercury__map__M3_8;
    MR_Word mercury__map__AssocList1_25;
    MR_Word mercury__map__AssocList2_26;
    MR_Word mercury__map__RevCommonAssocList_27;
    MR_Word mercury__map__Var_28;
    MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_40;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_33, &mercury__map__AssocList1_25);
    }
    mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_40, &mercury__map__AssocList2_26);
    }
    mercury__map__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__Var_28, &mercury__map__RevCommonAssocList_27);
    }
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_27, &mercury__map__M3_8);
    }
    return mercury__map__M3_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_52,
  MR_Word mercury__map__TypeInfo_for_K_45,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
      else
      {
        MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
        }
      }
    else
    {
      MR_Word mercury__map__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
      MR_Box mercury__map__Var_49 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 1));
      MR_Box mercury__map__Var_50 = (MR_hl_field(MR_mktag(0), mercury__map__Var_48, (MR_Integer) 0));

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

        {
          mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(mercury__map__Var_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
        }
      }
      else
      {
        MR_Word mercury__map__R_16;
        MR_Word mercury__map__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
        MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 0));
        MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__Var_21, (MR_Integer) 1));
        MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

        {
          mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__Var_50, mercury__map__Key2_42);
        }
        switch (mercury__map__R_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__Var_48));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__map__Value_17;
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word mercury__map__Var_29;
              MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_52, (MR_Integer) 1)));

              {
                mercury__map__Value_17 = mercury__map__func_0(((MR_Box) mercury__map__Var_52), mercury__map__Var_49, mercury__map__Value2_43);
              }
              {
                mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Var_50;
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_17;
              }
              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_47;
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__Var_21));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_44;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
              }
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
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
      MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

      {
        mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__Var_31));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_15;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

        mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
    else
    {
      MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
      MR_Word mercury__map__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

      {
        mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__Var_48));
        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__AssocTail1_12;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

        mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_18;
        mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
      }
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__common_subset_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__Map1_4,
  MR_Word mercury__map__Map2_5)
{
  {
    MR_Word mercury__map__Common_6;
    MR_Word mercury__map__AssocList1_7;
    MR_Word mercury__map__AssocList2_8;
    MR_Word mercury__map__RevCommonAssocList_9;
    MR_Word mercury__map__Var_10;
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_24;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_4, mercury__map__V_5_17, &mercury__map__AssocList1_7);
    }
    mercury__map__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_5, mercury__map__V_5_24, &mercury__map__AssocList2_8);
    }
    mercury__map__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__common_subset_loop_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_7, mercury__map__AssocList2_8, mercury__map__Var_10, &mercury__map__RevCommonAssocList_9);
    }
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__RevCommonAssocList_9, &mercury__map__Common_6);
    }
    return mercury__map__Common_6;
  }
}

void MR_CALL 
mercury__map__common_subset_loop_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__AssocList1_5,
  MR_Word mercury__map__AssocList2_6,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
        else
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
      else
      {
        MR_Word mercury__map__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 1)));
        MR_Word mercury__map__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 0)));

        if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
        else
        {
          MR_Box mercury__map__Key1_12 = (MR_hl_field(MR_mktag(0), mercury__map__Var_30, (MR_Integer) 0));
          MR_Box mercury__map__Value1_13 = (MR_hl_field(MR_mktag(0), mercury__map__Var_30, (MR_Integer) 1));
          MR_Box mercury__map__Key2_15;
          MR_Box mercury__map__Value2_16;
          MR_Word mercury__map__AssocTail2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 1)));
          MR_Word mercury__map__R_18;
          MR_Word mercury__map__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 0)));

          mercury__map__Key2_15 = (MR_hl_field(MR_mktag(0), mercury__map__Var_22, (MR_Integer) 0));
          mercury__map__Value2_16 = (MR_hl_field(MR_mktag(0), mercury__map__Var_22, (MR_Integer) 1));
          {
            mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_27, &mercury__map__R_18, mercury__map__Key1_12, mercury__map__Key2_15);
          }
          switch (mercury__map__R_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList2_6 = mercury__map__AssocTail2_17;

                  mercury__map__AssocList2_6 = mercury__map__next_value_of_AssocList2_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24;

                {
                  mercury__map__succeeded = mercury__builtin__unify_2_p_0(mercury__map__TypeInfo_for_V_28, mercury__map__Value1_13, mercury__map__Value2_16);
                }
                if (mercury__map__succeeded)
                  {
                    mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24, 0) = ((MR_Box) (mercury__map__Var_30));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19));
                  }
                else
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList1_5 = mercury__map__Var_29;
                  MR_Word mercury__map__next_value_of_AssocList2_6 = mercury__map__AssocTail2_17;
                  MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24;

                  mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_19;
                  mercury__map__AssocList2_6 = mercury__map__next_value_of_AssocList2_6;
                  mercury__map__AssocList1_5 = mercury__map__next_value_of_AssocList1_5;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__det_intersect_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Common_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__CommonPrime_9;
    MR_Word mercury__map__AssocList1_18;
    MR_Word mercury__map__AssocList2_19;
    MR_Word mercury__map__RevCommonAssocList_20;
    MR_Word mercury__map__Var_21;
    MR_Word mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_33;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_26, &mercury__map__AssocList1_18);
    }
    mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_33, &mercury__map__AssocList2_19);
    }
    mercury__map__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__intersect_loop_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_18, mercury__map__AssocList2_19, mercury__map__CommonPred_5, mercury__map__Var_21, &mercury__map__RevCommonAssocList_20);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__RevCommonAssocList_20, &mercury__map__CommonPrime_9);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      *mercury__map__Common_8 = mercury__map__CommonPrime_9;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__map__det_intersect_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__PF_5,
  MR_Word mercury__map__M1_6,
  MR_Word mercury__map__M2_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__M3_8;
    MR_Word mercury__map__CommonPrime_25;
    MR_Word mercury__map__AssocList1_32;
    MR_Word mercury__map__AssocList2_33;
    MR_Word mercury__map__RevCommonAssocList_34;
    MR_Word mercury__map__Var_35;
    MR_Word mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_47;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_40, &mercury__map__AssocList1_32);
    }
    mercury__map__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_47, &mercury__map__AssocList2_33);
    }
    mercury__map__Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__PF_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_32, mercury__map__AssocList2_33, mercury__map__Var_35, &mercury__map__RevCommonAssocList_34);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_34, &mercury__map__CommonPrime_25);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    if (mercury__map__succeeded)
      mercury__map__M3_8 = mercury__map__CommonPrime_25;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_intersect\'/4", (MR_String) "map.intersect failed");
      }
    }
    return mercury__map__M3_8;
  }
}

static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_36,
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
        else
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
          mercury__map__succeeded = MR_TRUE;
        }
        else
        {
          MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 0));
          MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 1));
          MR_Box mercury__map__Key2_17;
          MR_Box mercury__map__Value2_18;
          MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
          MR_Word mercury__map__R_20;
          MR_Word mercury__map__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

          mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 0));
          mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 1));
          {
            mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
          }
          switch (mercury__map__R_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;

                  mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__map__Value_21;
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
                MR_Word mercury__map__Var_29;
                MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__Var_36, (MR_Integer) 1)));

                {
                  mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__Var_36), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                }
                if (mercury__map__succeeded)
                {
                  {
                    mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Key1_14;
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_21;
                  }
                  {
                    mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;
                    MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;
                    MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                    mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                    mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                    mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;

                  mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                }
                continue;
              }
              break;
          }
        }
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__map__intersect_4_p_1(
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Common_8)
{
  {
    MR_Word mercury__map__AssocList1_9;
    MR_Word mercury__map__AssocList2_10;
    MR_Word mercury__map__RevCommonAssocList_11;
    MR_Word mercury__map__Var_12;
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_26;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
    mercury__map__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__intersect_loop_5_p_1(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Var_12, &mercury__map__RevCommonAssocList_11);
    }
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
    }
  }
}

void MR_CALL 
mercury__map__intersect_loop_5_p_1(
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__TypeInfo_for_V_32,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
    else
    {
      MR_Word mercury__map__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
      else
      {
        MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 0));
        MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 1));
        MR_Box mercury__map__Key2_17;
        MR_Box mercury__map__Value2_18;
        MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__R_20;
        MR_Word mercury__map__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

        mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 0));
        mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 1));
        {
          mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
        }
        switch (mercury__map__R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;

                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__map__Value_21;
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word mercury__map__Var_29;
              void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

              {
                mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
              }
              {
                mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Key1_14;
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_21;
              }
              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;

                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
              }
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
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__CommonPred_5,
  MR_Word mercury__map__Map1_6,
  MR_Word mercury__map__Map2_7,
  MR_Word * mercury__map__Common_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__AssocList1_9;
    MR_Word mercury__map__AssocList2_10;
    MR_Word mercury__map__RevCommonAssocList_11;
    MR_Word mercury__map__Var_12;
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_26;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
    mercury__map__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__succeeded = mercury__map__intersect_loop_5_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Var_12, &mercury__map__RevCommonAssocList_11);
    }
    if (mercury__map__succeeded)
    {
      {
        mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
      }
      mercury__map__succeeded = MR_TRUE;
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__intersect_loop_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__TypeInfo_for_V_32,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__CommonPred_8,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
        else
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
        mercury__map__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word mercury__map__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
        MR_Word mercury__map__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
          mercury__map__succeeded = MR_TRUE;
        }
        else
        {
          MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 0));
          MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 1));
          MR_Box mercury__map__Key2_17;
          MR_Box mercury__map__Value2_18;
          MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
          MR_Word mercury__map__R_20;
          MR_Word mercury__map__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

          mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 0));
          mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 1));
          {
            mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
          }
          switch (mercury__map__R_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;

                  mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__map__Value_21;
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
                MR_Word mercury__map__Var_29;
                MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

                {
                  mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                }
                if (mercury__map__succeeded)
                {
                  {
                    mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Key1_14;
                    MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_21;
                  }
                  {
                    mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                    MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;
                    MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;
                    MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                    mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                    mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                    mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;

                  mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                }
                continue;
              }
              break;
          }
        }
      }
      return mercury__map__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__intersect_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__F_5,
  MR_Word mercury__map__M1_6,
  MR_Word mercury__map__M2_7)
{
  {
    MR_Word mercury__map__M3_8;
    MR_Word mercury__map__AssocList1_25;
    MR_Word mercury__map__AssocList2_26;
    MR_Word mercury__map__RevCommonAssocList_27;
    MR_Word mercury__map__Var_28;
    MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_5_40;

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_33, &mercury__map__AssocList1_25);
    }
    mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_40, &mercury__map__AssocList2_26);
    }
    mercury__map__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__Var_28, &mercury__map__RevCommonAssocList_27);
    }
    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_27, &mercury__map__M3_8);
    }
    return mercury__map__M3_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
  MR_Word mercury__map__Var_36,
  MR_Word mercury__map__TypeInfo_for_K_31,
  MR_Word mercury__map__AssocList1_6,
  MR_Word mercury__map__AssocList2_7,
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
      else
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
    else
    {
      MR_Word mercury__map__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
      MR_Word mercury__map__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

      if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
      else
      {
        MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 0));
        MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__Var_34, (MR_Integer) 1));
        MR_Box mercury__map__Key2_17;
        MR_Box mercury__map__Value2_18;
        MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
        MR_Word mercury__map__R_20;
        MR_Word mercury__map__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

        mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 0));
        mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__Var_25, (MR_Integer) 1));
        {
          mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
        }
        switch (mercury__map__R_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;

                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__map__Value_21;
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
              MR_Word mercury__map__Var_29;
              MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_36, (MR_Integer) 1)));

              {
                mercury__map__Value_21 = mercury__map__func_0(((MR_Box) mercury__map__Var_36), mercury__map__Value1_15, mercury__map__Value2_18);
              }
              {
                mercury__map__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 0) = mercury__map__Key1_14;
                MR_hl_field(MR_mktag(0), mercury__map__Var_29, 1) = mercury__map__Value_21;
              }
              {
                mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__Var_29));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList1_6 = mercury__map__Var_33;
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

                mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__next_value_of_STATE_VARIABLE_RevCommonAssocList_0_22;
                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
                mercury__map__AssocList1_6 = mercury__map__next_value_of_AssocList1_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_AssocList2_7 = mercury__map__AssocTail2_19;

                mercury__map__AssocList2_7 = mercury__map__next_value_of_AssocList2_7;
              }
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
mercury__map__map_values_foldl3_9_p_4(
  MR_Word mercury__map__TypeInfo_for_V_27,
  MR_Word mercury__map__TypeInfo_for_W_28,
  MR_Word mercury__map__TypeInfo_for_A_29,
  MR_Word mercury__map__TypeInfo_for_B_30,
  MR_Word mercury__map__TypeInfo_for_C_31,
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_values_foldl3_9_p_4(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_3(
  MR_Word mercury__map__TypeInfo_for_V_27,
  MR_Word mercury__map__TypeInfo_for_W_28,
  MR_Word mercury__map__TypeInfo_for_A_29,
  MR_Word mercury__map__TypeInfo_for_B_30,
  MR_Word mercury__map__TypeInfo_for_C_31,
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_values_foldl3_9_p_3(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_2(
  MR_Word mercury__map__TypeInfo_for_V_27,
  MR_Word mercury__map__TypeInfo_for_W_28,
  MR_Word mercury__map__TypeInfo_for_A_29,
  MR_Word mercury__map__TypeInfo_for_B_30,
  MR_Word mercury__map__TypeInfo_for_C_31,
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_values_foldl3_9_p_2(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_1(
  MR_Word mercury__map__TypeInfo_for_V_27,
  MR_Word mercury__map__TypeInfo_for_W_28,
  MR_Word mercury__map__TypeInfo_for_A_29,
  MR_Word mercury__map__TypeInfo_for_B_30,
  MR_Word mercury__map__TypeInfo_for_C_31,
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_values_foldl3_9_p_1(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_values_foldl3_9_p_0(
  MR_Word mercury__map__TypeInfo_for_V_27,
  MR_Word mercury__map__TypeInfo_for_W_28,
  MR_Word mercury__map__TypeInfo_for_A_29,
  MR_Word mercury__map__TypeInfo_for_B_30,
  MR_Word mercury__map__TypeInfo_for_C_31,
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_values_foldl3_9_p_0(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

MR_bool MR_CALL 
mercury__map__map_values_foldl2_7_p_3(
  MR_Word mercury__map__TypeInfo_for_V_21,
  MR_Word mercury__map__TypeInfo_for_W_22,
  MR_Word mercury__map__TypeInfo_for_A_23,
  MR_Word mercury__map__TypeInfo_for_B_24,
  MR_Word mercury__map__TypeInfo_for_K_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_values_foldl2_7_p_3(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_2(
  MR_Word mercury__map__TypeInfo_for_V_21,
  MR_Word mercury__map__TypeInfo_for_W_22,
  MR_Word mercury__map__TypeInfo_for_A_23,
  MR_Word mercury__map__TypeInfo_for_B_24,
  MR_Word mercury__map__TypeInfo_for_K_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_values_foldl2_7_p_2(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_1(
  MR_Word mercury__map__TypeInfo_for_V_21,
  MR_Word mercury__map__TypeInfo_for_W_22,
  MR_Word mercury__map__TypeInfo_for_A_23,
  MR_Word mercury__map__TypeInfo_for_B_24,
  MR_Word mercury__map__TypeInfo_for_K_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_values_foldl2_7_p_1(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

void MR_CALL 
mercury__map__map_values_foldl2_7_p_0(
  MR_Word mercury__map__TypeInfo_for_V_21,
  MR_Word mercury__map__TypeInfo_for_W_22,
  MR_Word mercury__map__TypeInfo_for_A_23,
  MR_Word mercury__map__TypeInfo_for_B_24,
  MR_Word mercury__map__TypeInfo_for_K_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_values_foldl2_7_p_0(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

MR_bool MR_CALL 
mercury__map__map_values_foldl_5_p_2(
  MR_Word mercury__map__TypeInfo_for_V_15,
  MR_Word mercury__map__TypeInfo_for_W_16,
  MR_Word mercury__map__TypeInfo_for_A_17,
  MR_Word mercury__map__TypeInfo_for_K_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_values_foldl_5_p_2(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_1(
  MR_Word mercury__map__TypeInfo_for_V_15,
  MR_Word mercury__map__TypeInfo_for_W_16,
  MR_Word mercury__map__TypeInfo_for_A_17,
  MR_Word mercury__map__TypeInfo_for_K_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    mercury__tree234__map_values_foldl_5_p_1(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
  }
}

void MR_CALL 
mercury__map__map_values_foldl_5_p_0(
  MR_Word mercury__map__TypeInfo_for_V_15,
  MR_Word mercury__map__TypeInfo_for_W_16,
  MR_Word mercury__map__TypeInfo_for_A_17,
  MR_Word mercury__map__TypeInfo_for_K_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    mercury__tree234__map_values_foldl_5_p_0(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_7(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_7(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_6(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_6(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_5(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_5(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_4(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_foldl3_9_p_3(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_3(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_foldl3_9_p_4(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_2(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_foldl3_9_p_2(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_1(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_foldl3_9_p_1(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

void MR_CALL 
mercury__map__map_foldl3_9_p_0(
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__TypeInfo_for_V_28,
  MR_Word mercury__map__TypeInfo_for_W_29,
  MR_Word mercury__map__TypeInfo_for_A_30,
  MR_Word mercury__map__TypeInfo_for_B_31,
  MR_Word mercury__map__TypeInfo_for_C_32,
  MR_Word mercury__map__Pred_10,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
{
  {
    mercury__tree234__map_foldl3_9_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_6(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_6(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_5(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_5(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_4(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_4(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl2_7_p_3(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_foldl2_7_p_2(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

void MR_CALL 
mercury__map__map_foldl2_7_p_2(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_foldl2_7_p_3(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

void MR_CALL 
mercury__map__map_foldl2_7_p_1(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_foldl2_7_p_1(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

void MR_CALL 
mercury__map__map_foldl2_7_p_0(
  MR_Word mercury__map__TypeInfo_for_K_21,
  MR_Word mercury__map__TypeInfo_for_V_22,
  MR_Word mercury__map__TypeInfo_for_W_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__Pred_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
{
  {
    mercury__tree234__map_foldl2_7_p_0(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_5(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl_5_p_5(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_4(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl_5_p_4(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__map_foldl_5_p_3(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_foldl_5_p_3(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_foldl_5_p_2(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    mercury__tree234__map_foldl_5_p_2(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
  }
}

void MR_CALL 
mercury__map__map_foldl_5_p_1(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    mercury__tree234__map_foldl_5_p_1(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
  }
}

void MR_CALL 
mercury__map__map_foldl_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_15,
  MR_Word mercury__map__TypeInfo_for_V_16,
  MR_Word mercury__map__TypeInfo_for_W_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__Pred_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
{
  {
    mercury__tree234__map_foldl_5_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
  }
}

MR_bool MR_CALL 
mercury__map__map_values_only_3_p_1(
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Word mercury__map__TypeInfo_for_W_8,
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__Pred_4,
  MR_Word mercury__map__Map0_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_values_only_3_p_1(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_only_3_p_0(
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Word mercury__map__TypeInfo_for_W_8,
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__Pred_4,
  MR_Word mercury__map__Map0_5,
  MR_Word * mercury__map__Map_6)
{
  {
    mercury__tree234__map_values_only_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__map_values_only_2_f_0(
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__TypeInfo_for_W_15,
  MR_Word mercury__map__TypeInfo_for_K_16,
  MR_Word mercury__map__F_4,
  MR_Word mercury__map__M1_5)
{
  {
    MR_Word mercury__map__M2_6;

    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
  MR_Word mercury__map__Var_64,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__HeadVar__3_3)
{
  switch (MR_tag((MR_Word) mercury__map__HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
    case (MR_Integer) 1:
      {
        MR_Box mercury__map__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__map__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__map__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
        MR_Box mercury__map__V_12_14;
        MR_Word mercury__map__V_13_15;
        MR_Word mercury__map__V_14_16;
        MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));

        {
          mercury__map__V_12_14 = mercury__map__func_5(((MR_Box) mercury__map__Var_64), mercury__map__V_9_9);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_10_10, &mercury__map__V_13_15);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_11_11, &mercury__map__V_14_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__V_8_8;
          MR_hl_field(MR_mktag(1), base, 1) = mercury__map__V_12_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__V_13_15));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__V_14_16));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box mercury__map__V_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__map__V_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
        MR_Box mercury__map__V_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
        MR_Word mercury__map__V_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mercury__map__V_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mercury__map__V_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
        MR_Box mercury__map__V_25_30;
        MR_Box mercury__map__V_26_31;
        MR_Word mercury__map__V_27_32;
        MR_Word mercury__map__V_28_33;
        MR_Word mercury__map__V_29_34;
        MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box);

        {
          mercury__map__V_25_30 = mercury__map__func_3(((MR_Box) mercury__map__Var_64), mercury__map__V_19_22);
        }
        mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));
        {
          mercury__map__V_26_31 = mercury__map__func_4(((MR_Box) mercury__map__Var_64), mercury__map__V_21_24);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_22_25, &mercury__map__V_27_32);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_23_26, &mercury__map__V_28_33);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_24_27, &mercury__map__V_29_34);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = mercury__map__V_18_21;
          MR_hl_field(MR_mktag(2), base, 1) = mercury__map__V_25_30;
          MR_hl_field(MR_mktag(2), base, 2) = mercury__map__V_20_23;
          MR_hl_field(MR_mktag(2), base, 3) = mercury__map__V_26_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__V_27_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__V_28_33));
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__V_29_34));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box mercury__map__V_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__map__V_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
        MR_Box mercury__map__V_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
        MR_Box mercury__map__V_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
        MR_Box mercury__map__V_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
        MR_Word mercury__map__V_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word mercury__map__V_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word mercury__map__V_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word mercury__map__V_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
        MR_Box mercury__map__V_43_51;
        MR_Box mercury__map__V_44_52;
        MR_Box mercury__map__V_45_53;
        MR_Word mercury__map__V_46_54;
        MR_Word mercury__map__V_47_55;
        MR_Word mercury__map__V_48_56;
        MR_Word mercury__map__V_49_57;
        MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box);
        MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box);

        {
          mercury__map__V_43_51 = mercury__map__func_0(((MR_Box) mercury__map__Var_64), mercury__map__V_34_40);
        }
        mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));
        {
          mercury__map__V_44_52 = mercury__map__func_1(((MR_Box) mercury__map__Var_64), mercury__map__V_36_42);
        }
        mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_64, (MR_Integer) 1)));
        {
          mercury__map__V_45_53 = mercury__map__func_2(((MR_Box) mercury__map__Var_64), mercury__map__V_38_44);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_39_45, &mercury__map__V_46_54);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_40_46, &mercury__map__V_47_55);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_41_47, &mercury__map__V_48_56);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__Var_64, mercury__map__V_42_48, &mercury__map__V_49_57);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = mercury__map__V_33_39;
          MR_hl_field(MR_mktag(3), base, 1) = mercury__map__V_43_51;
          MR_hl_field(MR_mktag(3), base, 2) = mercury__map__V_35_41;
          MR_hl_field(MR_mktag(3), base, 3) = mercury__map__V_44_52;
          MR_hl_field(MR_mktag(3), base, 4) = mercury__map__V_37_43;
          MR_hl_field(MR_mktag(3), base, 5) = mercury__map__V_45_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__V_46_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__V_47_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__V_48_56));
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__V_49_57));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__map__map_values_3_p_1(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__TypeInfo_for_W_9,
  MR_Word mercury__map__Pred_4,
  MR_Word mercury__map__Map0_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__map_values_3_p_1(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__map_values_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__TypeInfo_for_W_9,
  MR_Word mercury__map__Pred_4,
  MR_Word mercury__map__Map0_5,
  MR_Word * mercury__map__Map_6)
{
  {
    mercury__tree234__map_values_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
  }
}

MR_Word MR_CALL 
mercury__map__map_values_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_W_19,
  MR_Word mercury__map__F_4,
  MR_Word mercury__map__M1_5)
{
  {
    MR_Word mercury__map__M2_6;

    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word mercury__map__Var_65,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__HeadVar__3_3)
{
  switch (MR_tag((MR_Word) mercury__map__HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      break;
    case (MR_Integer) 1:
      {
        MR_Box mercury__map__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__map__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__map__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
        MR_Box mercury__map__V_12_14;
        MR_Word mercury__map__V_13_15;
        MR_Word mercury__map__V_14_16;
        MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));

        {
          mercury__map__V_12_14 = mercury__map__func_5(((MR_Box) mercury__map__Var_65), mercury__map__V_8_8, mercury__map__V_9_9);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_10_10, &mercury__map__V_13_15);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_11_11, &mercury__map__V_14_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__V_8_8;
          MR_hl_field(MR_mktag(1), base, 1) = mercury__map__V_12_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__V_13_15));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__V_14_16));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box mercury__map__V_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__map__V_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
        MR_Box mercury__map__V_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
        MR_Word mercury__map__V_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mercury__map__V_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mercury__map__V_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
        MR_Box mercury__map__V_25_30;
        MR_Box mercury__map__V_26_31;
        MR_Word mercury__map__V_27_32;
        MR_Word mercury__map__V_28_33;
        MR_Word mercury__map__V_29_34;
        MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box);

        {
          mercury__map__V_25_30 = mercury__map__func_3(((MR_Box) mercury__map__Var_65), mercury__map__V_18_21, mercury__map__V_19_22);
        }
        mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));
        {
          mercury__map__V_26_31 = mercury__map__func_4(((MR_Box) mercury__map__Var_65), mercury__map__V_20_23, mercury__map__V_21_24);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_22_25, &mercury__map__V_27_32);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_23_26, &mercury__map__V_28_33);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_24_27, &mercury__map__V_29_34);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = mercury__map__V_18_21;
          MR_hl_field(MR_mktag(2), base, 1) = mercury__map__V_25_30;
          MR_hl_field(MR_mktag(2), base, 2) = mercury__map__V_20_23;
          MR_hl_field(MR_mktag(2), base, 3) = mercury__map__V_26_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__V_27_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__V_28_33));
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__V_29_34));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box mercury__map__V_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__map__V_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__map__V_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
        MR_Box mercury__map__V_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
        MR_Box mercury__map__V_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
        MR_Box mercury__map__V_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
        MR_Word mercury__map__V_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word mercury__map__V_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word mercury__map__V_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word mercury__map__V_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
        MR_Box mercury__map__V_43_51;
        MR_Box mercury__map__V_44_52;
        MR_Box mercury__map__V_45_53;
        MR_Word mercury__map__V_46_54;
        MR_Word mercury__map__V_47_55;
        MR_Word mercury__map__V_48_56;
        MR_Word mercury__map__V_49_57;
        MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));
        MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box);

        {
          mercury__map__V_43_51 = mercury__map__func_0(((MR_Box) mercury__map__Var_65), mercury__map__V_33_39, mercury__map__V_34_40);
        }
        mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));
        {
          mercury__map__V_44_52 = mercury__map__func_1(((MR_Box) mercury__map__Var_65), mercury__map__V_35_41, mercury__map__V_36_42);
        }
        mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_65, (MR_Integer) 1)));
        {
          mercury__map__V_45_53 = mercury__map__func_2(((MR_Box) mercury__map__Var_65), mercury__map__V_37_43, mercury__map__V_38_44);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_39_45, &mercury__map__V_46_54);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_40_46, &mercury__map__V_47_55);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_41_47, &mercury__map__V_48_56);
        }
        {
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__Var_65, mercury__map__V_42_48, &mercury__map__V_49_57);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
          *mercury__map__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = mercury__map__V_33_39;
          MR_hl_field(MR_mktag(3), base, 1) = mercury__map__V_43_51;
          MR_hl_field(MR_mktag(3), base, 2) = mercury__map__V_35_41;
          MR_hl_field(MR_mktag(3), base, 3) = mercury__map__V_44_52;
          MR_hl_field(MR_mktag(3), base, 4) = mercury__map__V_37_43;
          MR_hl_field(MR_mktag(3), base, 5) = mercury__map__V_45_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__V_46_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__V_47_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__V_48_56));
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__V_49_57));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_5(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr5_12_p_5(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_4(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr5_12_p_4(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr5_12_p_3(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr5_12_p_3(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldr5_12_p_2(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldr5_12_p_2(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__map__foldr5_12_p_1(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldr5_12_p_1(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__map__foldr5_12_p_0(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldr5_12_p_0(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_8(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr4_10_p_8(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_7(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr4_10_p_7(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr4_10_p_6(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr4_10_p_6(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_5(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_4(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_3(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_2(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_1(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldr4_10_p_0(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldr4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_7(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_6(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr3_8_p_5(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_4(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldr3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_3(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldr3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_2(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldr3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_1(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldr3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldr3_8_p_0(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldr3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_6(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_5(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr2_6_p_4(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldr2_6_p_3(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldr2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldr2_6_p_2(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldr2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldr2_6_p_1(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldr2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldr2_6_p_0(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldr2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldr_4_p_8(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldr_4_p_7(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldr_4_p_6(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_5(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_4(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldr_4_p_3(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldr_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldr_4_p_2(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldr_4_p_1(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldr_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldr_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_Box MR_CALL 
mercury__map__foldr_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_22,
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__F_5,
  MR_Word mercury__map__M_6,
  MR_Box mercury__map__A_7)
{
  {
    MR_Box mercury__map__B_8;

    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
    return mercury__map__B_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_56,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Box mercury__map__HeadVar__3_3,
  MR_Box * mercury__map__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) mercury__map__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__map__V_17_15;
          MR_Box mercury__map__V_18_16;
          MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_13_12, mercury__map__HeadVar__3_3, &mercury__map__V_17_15);
          }
          mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_18_16 = mercury__map__func_5(((MR_Box) mercury__map__Var_56), mercury__map__V_10_9, mercury__map__V_11_10, mercury__map__V_17_15);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_12_11;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_18_16;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Word mercury__map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
          MR_Word mercury__map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Box mercury__map__V_31_27;
          MR_Box mercury__map__V_32_28;
          MR_Box mercury__map__V_33_29;
          MR_Box mercury__map__V_34_30;
          MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_27_24, mercury__map__HeadVar__3_3, &mercury__map__V_31_27);
          }
          mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_32_28 = mercury__map__func_3(((MR_Box) mercury__map__Var_56), mercury__map__V_23_20, mercury__map__V_24_21, mercury__map__V_31_27);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_26_23, mercury__map__V_32_28, &mercury__map__V_33_29);
          }
          mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_34_30 = mercury__map__func_4(((MR_Box) mercury__map__Var_56), mercury__map__V_21_18, mercury__map__V_22_19, mercury__map__V_33_29);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_25_22;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_34_30;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Box mercury__map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
          MR_Box mercury__map__V_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
          MR_Word mercury__map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
          MR_Word mercury__map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
          MR_Box mercury__map__V_50_44;
          MR_Box mercury__map__V_51_45;
          MR_Box mercury__map__V_52_46;
          MR_Box mercury__map__V_53_47;
          MR_Box mercury__map__V_54_48;
          MR_Box mercury__map__V_55_49;
          MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_46_41, mercury__map__HeadVar__3_3, &mercury__map__V_50_44);
          }
          mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_51_45 = mercury__map__func_0(((MR_Box) mercury__map__Var_56), mercury__map__V_41_36, mercury__map__V_42_37, mercury__map__V_50_44);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_45_40, mercury__map__V_51_45, &mercury__map__V_52_46);
          }
          mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_53_47 = mercury__map__func_1(((MR_Box) mercury__map__Var_56), mercury__map__V_39_34, mercury__map__V_40_35, mercury__map__V_52_46);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_44_39, mercury__map__V_53_47, &mercury__map__V_54_48);
          }
          mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_55_49 = mercury__map__func_2(((MR_Box) mercury__map__Var_56), mercury__map__V_37_32, mercury__map__V_38_33, mercury__map__V_54_48);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_43_38;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_55_49;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_8(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_8(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_7(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_7(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_6(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_6(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_5(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_5(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_4(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_4(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_3(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_3(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_2(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_2(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_1(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_1(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_values_8_p_0(
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__TypeInfo_for_B_25,
  MR_Word mercury__map__TypeInfo_for_C_26,
  MR_Word mercury__map__TypeInfo_for_K_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_values_8_p_0(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_8(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_8(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_7(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_7(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_6(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_6(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_5(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_5(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_4(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_4(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_3(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_3(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_2(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_2(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_1(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_1(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_values_6_p_0(
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__TypeInfo_for_A_18,
  MR_Word mercury__map__TypeInfo_for_B_19,
  MR_Word mercury__map__TypeInfo_for_K_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_values_6_p_0(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_8(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_8(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_7(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_7(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_6(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_6(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_5(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_values_4_p_5(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_4(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_values_4_p_4(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_values_4_p_3(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_values_4_p_3(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_2(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_2(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_1(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_1(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_values_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_A_12,
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_values_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_5(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl5_12_p_5(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_4(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl5_12_p_4(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl5_12_p_3(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl5_12_p_3(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl5_12_p_2(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldl5_12_p_2(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__map__foldl5_12_p_1(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldl5_12_p_1(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__map__foldl5_12_p_0(
  MR_Word mercury__map__TypeInfo_for_K_35,
  MR_Word mercury__map__TypeInfo_for_V_36,
  MR_Word mercury__map__TypeInfo_for_A_37,
  MR_Word mercury__map__TypeInfo_for_B_38,
  MR_Word mercury__map__TypeInfo_for_C_39,
  MR_Word mercury__map__TypeInfo_for_D_40,
  MR_Word mercury__map__TypeInfo_for_E_41,
  MR_Word mercury__map__Pred_13,
  MR_Word mercury__map__Map_14,
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
{
  {
    mercury__tree234__foldl5_12_p_0(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_8(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl4_10_p_8(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_7(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl4_10_p_7(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl4_10_p_6(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl4_10_p_6(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_5(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_4(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_3(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_2(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_1(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__map__foldl4_10_p_0(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__TypeInfo_for_A_31,
  MR_Word mercury__map__TypeInfo_for_B_32,
  MR_Word mercury__map__TypeInfo_for_C_33,
  MR_Word mercury__map__TypeInfo_for_D_34,
  MR_Word mercury__map__Pred_11,
  MR_Word mercury__map__Map_12,
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
{
  {
    mercury__tree234__foldl4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_7(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_6(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl3_8_p_5(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_4(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_3(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_2(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_1(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl3_8_p_0(
  MR_Word mercury__map__TypeInfo_for_K_23,
  MR_Word mercury__map__TypeInfo_for_V_24,
  MR_Word mercury__map__TypeInfo_for_A_25,
  MR_Word mercury__map__TypeInfo_for_B_26,
  MR_Word mercury__map__TypeInfo_for_C_27,
  MR_Word mercury__map__Pred_9,
  MR_Word mercury__map__Map_10,
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
{
  {
    mercury__tree234__foldl3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_10(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_10(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_9(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_9(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_8(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_8(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_7(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_7(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_6(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_5(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl2_6_p_4(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_3(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_2(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_1(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl2_6_p_0(
  MR_Word mercury__map__TypeInfo_for_K_17,
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_A_19,
  MR_Word mercury__map__TypeInfo_for_B_20,
  MR_Word mercury__map__Pred_7,
  MR_Word mercury__map__Map_8,
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
{
  {
    mercury__tree234__foldl2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__map__foldl_4_p_8(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_4_p_7(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_4_p_6(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_5(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_4(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__foldl_4_p_3(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__foldl_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__foldl_4_p_2(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_4_p_1(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__map__foldl_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Word mercury__map__TypeInfo_for_A_13,
  MR_Word mercury__map__Pred_5,
  MR_Word mercury__map__Map_6,
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
{
  {
    mercury__tree234__foldl_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
  }
}

MR_Box MR_CALL 
mercury__map__foldl_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_22,
  MR_Word mercury__map__TypeInfo_for_V_23,
  MR_Word mercury__map__TypeInfo_for_A_24,
  MR_Word mercury__map__F_5,
  MR_Word mercury__map__M_6,
  MR_Box mercury__map__A_7)
{
  {
    MR_Box mercury__map__B_8;

    {
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
    return mercury__map__B_8;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__map__Var_56,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Box mercury__map__HeadVar__3_3,
  MR_Box * mercury__map__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) mercury__map__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__map__V_17_15;
          MR_Box mercury__map__V_18_16;
          MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_12_11, mercury__map__HeadVar__3_3, &mercury__map__V_17_15);
          }
          mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_18_16 = mercury__map__func_5(((MR_Box) mercury__map__Var_56), mercury__map__V_10_9, mercury__map__V_11_10, mercury__map__V_17_15);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_13_12;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_18_16;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Word mercury__map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
          MR_Word mercury__map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Box mercury__map__V_31_27;
          MR_Box mercury__map__V_32_28;
          MR_Box mercury__map__V_33_29;
          MR_Box mercury__map__V_34_30;
          MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_25_22, mercury__map__HeadVar__3_3, &mercury__map__V_31_27);
          }
          mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_32_28 = mercury__map__func_3(((MR_Box) mercury__map__Var_56), mercury__map__V_21_18, mercury__map__V_22_19, mercury__map__V_31_27);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_26_23, mercury__map__V_32_28, &mercury__map__V_33_29);
          }
          mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_34_30 = mercury__map__func_4(((MR_Box) mercury__map__Var_56), mercury__map__V_23_20, mercury__map__V_24_21, mercury__map__V_33_29);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_27_24;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_34_30;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__map__V_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
          MR_Box mercury__map__V_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
          MR_Box mercury__map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
          MR_Box mercury__map__V_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
          MR_Word mercury__map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
          MR_Word mercury__map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
          MR_Word mercury__map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
          MR_Box mercury__map__V_50_44;
          MR_Box mercury__map__V_51_45;
          MR_Box mercury__map__V_52_46;
          MR_Box mercury__map__V_53_47;
          MR_Box mercury__map__V_54_48;
          MR_Box mercury__map__V_55_49;
          MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_43_38, mercury__map__HeadVar__3_3, &mercury__map__V_50_44);
          }
          mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_51_45 = mercury__map__func_0(((MR_Box) mercury__map__Var_56), mercury__map__V_37_32, mercury__map__V_38_33, mercury__map__V_50_44);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_44_39, mercury__map__V_51_45, &mercury__map__V_52_46);
          }
          mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_53_47 = mercury__map__func_1(((MR_Box) mercury__map__Var_56), mercury__map__V_39_34, mercury__map__V_40_35, mercury__map__V_52_46);
          }
          {
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__Var_56, mercury__map__V_45_40, mercury__map__V_53_47, &mercury__map__V_54_48);
          }
          mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__Var_56, (MR_Integer) 1)));
          {
            mercury__map__V_55_49 = mercury__map__func_2(((MR_Box) mercury__map__Var_56), mercury__map__V_41_36, mercury__map__V_42_37, mercury__map__V_54_48);
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__V_46_41;
            MR_Box mercury__map__next_value_of_HeadVar__3_3 = mercury__map__V_55_49;

            mercury__map__HeadVar__3_3 = mercury__map__next_value_of_HeadVar__3_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          }
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__map__optimize_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_4,
  MR_Word mercury__map__TypeInfo_for_V_5,
  MR_Word mercury__map__Map_3,
  MR_Word * mercury__map__Map_2)
{
  *mercury__map__Map_2 = mercury__map__Map_3;
}

MR_Word MR_CALL 
mercury__map__optimize_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M1_3)
{
  {
    MR_Word mercury__map__M2_4 = mercury__map__M1_3;

    return mercury__map__M2_4;
  }
}

MR_Word MR_CALL 
mercury__map__apply_to_list_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Ks_4,
  MR_Word mercury__map__M_5)
{
  {
    MR_Word mercury__map__Vs_6;

    {
      mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__M_5, &mercury__map__Vs_6);
    }
    return mercury__map__Vs_6;
  }
}

void MR_CALL 
mercury__map__apply_to_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_10,
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__Map_2,
  MR_Word * mercury__map__HeadVar__3_3)
{
  {
    MR_bool mercury__map__succeeded;

    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box mercury__map__K_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__map__Ks_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Box mercury__map__V_8;
      MR_Word mercury__map__Vs_9;
      MR_Box mercury__map__VPrime_15;

      {
        mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Map_2, mercury__map__K_5, &mercury__map__VPrime_15);
      }
      if (mercury__map__succeeded)
        mercury__map__V_8 = mercury__map__VPrime_15;
      else
      {
        {
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", mercury__map__K_5);
          return;
        }
      }
      {
        mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Ks_6, mercury__map__Map_2, &mercury__map__Vs_9);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__map__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = mercury__map__V_8;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__map__Vs_9));
      }
    }
  }
}

void MR_CALL 
mercury__map__select_sorted_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Original_4,
  MR_Word mercury__map__Keys_5,
  MR_Word * mercury__map__NewMap_6)
{
  {
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__select_sorted_list_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__S_5)
{
  {
    MR_Word mercury__map__M2_6;
    MR_Word mercury__map__NewMap0_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_12, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__select_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Original_4,
  MR_Word mercury__map__KeySet_5,
  MR_Word * mercury__map__NewMap_6)
{
  {
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__select_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__S_5)
{
  {
    MR_Word mercury__map__M2_6;
    MR_Word mercury__map__Keys_12 = (MR_Word) mercury__map__S_5;
    MR_Word mercury__map__NewMap0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_12, mercury__map__M1_4, mercury__map__NewMap0_13, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__select_loop_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_18,
  MR_Word mercury__map__TypeInfo_for_V_19,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
      else
      {
        MR_Box mercury__map__K_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__map__STATE_VARIABLE_New_16_16;
        MR_Box mercury__map__V_13;

        {
          mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
        }
        if (mercury__map__succeeded)
        {
          MR_Word mercury__map__NewMap_28;

          {
            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__K_9, mercury__map__V_13, mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__NewMap_28);
          }
          if (mercury__map__succeeded)
            mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_28;
          else
          {
            MR_Box mercury__map__Var_31;

            {
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", mercury__map__K_9);
              return;
            }
          }
        }
        else
          mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Ks_10;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_16_16;

          mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__next_value_of_STATE_VARIABLE_New_0_3;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__overlay_large_map_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Map0_4,
  MR_Word mercury__map__Map1_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_Word mercury__map__AssocList_7;
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map0_4, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
    {
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map1_5, mercury__map__Map_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__overlay_large_map_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__M2_5)
{
  {
    MR_Word mercury__map__M3_6;
    MR_Word mercury__map__AssocList_12;
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
    {
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M2_5, &mercury__map__M3_6);
    }
    return mercury__map__M3_6;
  }
}

void MR_CALL 
mercury__map__overlay_large_map_2_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
      else
      {
        MR_Box mercury__map__K_5;
        MR_Box mercury__map__V_6;
        MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__map__Map2_11;
        MR_Word mercury__map__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__map__Map1_10;

        mercury__map__K_5 = (MR_hl_field(MR_mktag(0), mercury__map__Var_12, (MR_Integer) 0));
        mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__Var_12, (MR_Integer) 1));
        {
          mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__HeadVar__2_2, &mercury__map__Map1_10);
        }
        if (mercury__map__succeeded)
          mercury__map__Map2_11 = mercury__map__Map1_10;
        else
          mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__AssocList_7;
          MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Map2_11;

          mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__overlay_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Map0_4,
  MR_Word mercury__map__Map1_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_Word mercury__map__AssocList_7;
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map1_5, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
    {
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__overlay_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__M2_5)
{
  {
    MR_Word mercury__map__M3_6;
    MR_Word mercury__map__AssocList_12;
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
    {
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
    return mercury__map__M3_6;
  }
}

void MR_CALL 
mercury__map__overlay_2_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_16,
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box mercury__map__K_7;
      MR_Box mercury__map__V_8;
      MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__map__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

      mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 0));
      mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 1));
      {
        mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__AssocList_9;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_14_14;

        mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_2;
        mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__merge_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__MA_4,
  MR_Word mercury__map__MB_5,
  MR_Word * mercury__map__M_6)
{
  {
    MR_Word mercury__map__MBList_7;
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MB_5, mercury__map__V_5_14, &mercury__map__MBList_7);
    }
    {
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MBList_7, mercury__map__MA_4, mercury__map__M_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__merge_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__M2_5)
{
  {
    MR_Word mercury__map__M3_6;
    MR_Word mercury__map__MBList_12;
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__MBList_12);
    }
    {
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__MBList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
    return mercury__map__M3_6;
  }
}

void MR_CALL 
mercury__map__from_corresponding_lists_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_8,
  MR_Word mercury__map__TypeInfo_for_V_9,
  MR_Word mercury__map__Keys_4,
  MR_Word mercury__map__Values_5,
  MR_Word * mercury__map__Map_6)
{
  {
    MR_Word mercury__map__AssocList_7;
    MR_Word mercury__map__V_5_12;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_4, mercury__map__Values_5, &mercury__map__AssocList_7);
    }
    mercury__map__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__V_5_12, mercury__map__Map_6);
    }
  }
}

MR_Word MR_CALL 
mercury__map__from_corresponding_lists_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Ks_4,
  MR_Word mercury__map__Vs_5)
{
  {
    MR_Word mercury__map__M_6;
    MR_Word mercury__map__AssocList_12;
    MR_Word mercury__map__V_5_15;

    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__Vs_5, &mercury__map__AssocList_12);
    }
    mercury__map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__V_5_15, &mercury__map__M_6);
    }
    return mercury__map__M_6;
  }
}

void MR_CALL 
mercury__map__count_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__Map_3,
  MR_Integer * mercury__map__Count_4)
{
  {
    mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Map_3, mercury__map__Count_4);
  }
}

MR_Integer MR_CALL 
mercury__map__count_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Integer mercury__map__N_4;

    {
      mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, &mercury__map__N_4);
    }
    return mercury__map__N_4;
  }
}

MR_bool MR_CALL 
mercury__map__remove_smallest_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Box * mercury__map__K_5,
  MR_Box * mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__V_9_17;

    {
      mercury__map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_9, &mercury__map__V_9_17);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__det_remove_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__TypeInfo_for_V_15,
  MR_Box mercury__map__Key_5,
  MR_Box * mercury__map__Value_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__ValuePrime_8;
    MR_Word mercury__map__MapPrime_9;
    MR_Word mercury__map__V_9_20;

    {
      mercury__map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__Key_5, &mercury__map__ValuePrime_8, &mercury__map__MapPrime_9, &mercury__map__V_9_20);
    }
    if (mercury__map__succeeded)
    {
      *mercury__map__Value_6 = mercury__map__ValuePrime_8;
      *mercury__map__STATE_VARIABLE_Map_11 = mercury__map__MapPrime_9;
    }
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, (MR_String) "map.det_remove: key not found", mercury__map__Key_5);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__map__remove_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Box mercury__map__Key_5,
  MR_Box * mercury__map__Value_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__V_9_17;

    {
      mercury__map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__Key_5, mercury__map__Value_6, mercury__map__STATE_VARIABLE_Map_9, &mercury__map__V_9_17);
    }
    return mercury__map__succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__delete_sorted_list_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M0_4,
  MR_Word mercury__map__Ks_5)
{
  {
    MR_Word mercury__map__M_6;

    {
      mercury__map__delete_sorted_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
    return mercury__map__M_6;
  }
}

void MR_CALL 
mercury__map__delete_sorted_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_19,
  MR_Word mercury__map__TypeInfo_for_V_20,
  MR_Word mercury__map__DeleteKeys_4,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
  MR_Word * mercury__map__STATE_VARIABLE_Map_13)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Integer mercury__map__NumDeleteKeys_6;
    MR_Integer mercury__map__MinSize_7;
    MR_Integer mercury__map__V_5_28;
    MR_Integer mercury__map__Var_14;

    {
      mercury__list__length_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, (MR_Integer) 0, &mercury__map__NumDeleteKeys_6);
    }
    {
      mercury__tree234__find_depth_2_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, &mercury__map__V_5_28);
    }
    {
      mercury__tree234__min_size_based_on_depth_2_p_0(mercury__map__V_5_28, &mercury__map__MinSize_7);
    }
    mercury__map__Var_14 = (mercury__map__NumDeleteKeys_6 * (MR_Integer) 5);
    mercury__map__succeeded = (mercury__map__Var_14 < mercury__map__MinSize_7);
    if (mercury__map__succeeded)
      {
        mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__DeleteKeys_4, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13);
      }
    else
    {
      MR_Word mercury__map__Pairs0_8;
      MR_Word mercury__map__RevPairs_9;
      MR_Word mercury__map__LeftOverPairs_10;
      MR_Word mercury__map__Pairs_11;
      MR_Word mercury__map__Var_17;
      MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__map__V_5_40;
      MR_Word mercury__map__conv0_Pairs_11;

      {
        mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__V_5_33, &mercury__map__Pairs0_8);
      }
      mercury__map__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, mercury__map__Pairs0_8, mercury__map__Var_17, &mercury__map__RevPairs_9, &mercury__map__LeftOverPairs_10);
      }
      {
        mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0((MR_Word) mercury__map__RevPairs_9, (MR_Word) mercury__map__LeftOverPairs_10, &mercury__map__conv0_Pairs_11);
      }
      mercury__map__Pairs_11 = (MR_Word) mercury__map__conv0_Pairs_11;
      mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__Pairs_11, mercury__map__V_5_40, mercury__map__STATE_VARIABLE_Map_13);
      }
    }
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word * mercury__map__L_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__L_3 = mercury__map__HeadVar__2_2;
    else
    {
      MR_Box mercury__map__X_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__map__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__map__Var_9;

      {
        mercury__map__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__map__Var_9, 0) = mercury__map__X_5;
        MR_hl_field(MR_mktag(1), mercury__map__Var_9, 1) = ((MR_Box) (mercury__map__HeadVar__2_2));
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Xs_6;
        MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Var_9;

        mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
        mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_32,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
  MR_Word * mercury__map__HeadVar__5_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__map__HeadVar__5_5 = mercury__map__HeadVar__2_2;
      *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
    }
    else
    {
      MR_Word mercury__map__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Box mercury__map__Var_35 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

      if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__map__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
      }
      else
      {
        MR_Word mercury__map__Pair0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__map__Pairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__map__Key0_21 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 0));
        MR_Word mercury__map__Result_23;
        MR_Box mercury__map__Var_22 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 1));

        {
          mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_32, &mercury__map__Result_23, mercury__map__Var_35, mercury__map__Key0_21);
        }
        switch (mercury__map__Result_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Var_34;

                mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Var_34;
                MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Pairs0_18;

                mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
                mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__map__STATE_VARIABLE_RevPairs_26_26;

              {
                mercury__map__STATE_VARIABLE_RevPairs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 0) = ((MR_Box) (mercury__map__Pair0_17));
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevPairs_0_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Pairs0_18;
                MR_Word mercury__map__next_value_of_STATE_VARIABLE_RevPairs_0_3 = mercury__map__STATE_VARIABLE_RevPairs_26_26;

                mercury__map__STATE_VARIABLE_RevPairs_0_3 = mercury__map__next_value_of_STATE_VARIABLE_RevPairs_0_3;
                mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
              }
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
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M0_4,
  MR_Word mercury__map__Ks_5)
{
  {
    MR_Word mercury__map__M_6;

    {
      mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
    return mercury__map__M_6;
  }
}

void MR_CALL 
mercury__map__delete_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__TypeInfo_for_V_15,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box mercury__map__DeleteKey_7 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__map__DeleteKeys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__map__STATE_VARIABLE_Map_12_12;
      MR_Word mercury__map__V_7_24;

      {
        mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_2, mercury__map__DeleteKey_7, &mercury__map__STATE_VARIABLE_Map_12_12, &mercury__map__V_7_24);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__DeleteKeys_8;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_12_12;

        mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_2;
        mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__map__delete_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Box mercury__map__Key_4,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_6,
  MR_Word * mercury__map__STATE_VARIABLE_Map_7)
{
  {
    MR_Word mercury__map__V_7_14;

    {
      mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__STATE_VARIABLE_Map_0_6, mercury__map__Key_4, mercury__map__STATE_VARIABLE_Map_7, &mercury__map__V_7_14);
    }
  }
}

MR_Word MR_CALL 
mercury__map__delete_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M0_4,
  MR_Box mercury__map__K_5)
{
  {
    MR_Word mercury__map__M_6;
    MR_Word mercury__map__V_7_17;

    {
      mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M0_4, mercury__map__K_5, &mercury__map__M_6, &mercury__map__V_7_17);
    }
    return mercury__map__M_6;
  }
}

void MR_CALL 
mercury__map__from_rev_sorted_assoc_list_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__L_3,
  MR_Word * mercury__map__M_4)
{
  {
    mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
  }
}

MR_Word MR_CALL 
mercury__map__from_rev_sorted_assoc_list_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__AL_3)
{
  {
    MR_Word mercury__map__M_4;

    {
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
    return mercury__map__M_4;
  }
}

void MR_CALL 
mercury__map__from_sorted_assoc_list_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__L_3,
  MR_Word * mercury__map__M_4)
{
  {
    mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
  }
}

MR_Word MR_CALL 
mercury__map__from_sorted_assoc_list_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__AL_3)
{
  {
    MR_Word mercury__map__M_4;

    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
    return mercury__map__M_4;
  }
}

void MR_CALL 
mercury__map__from_assoc_list_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__L_3,
  MR_Word * mercury__map__M_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__V_5_9, mercury__map__M_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__from_assoc_list_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__AL_3)
{
  {
    MR_Word mercury__map__M_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, mercury__map__V_5_11, &mercury__map__M_4);
    }
    return mercury__map__M_4;
  }
}

void MR_CALL 
mercury__map__to_sorted_assoc_list_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3,
  MR_Word * mercury__map__L_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_9, mercury__map__L_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__to_sorted_assoc_list_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Word mercury__map__AL_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__AL_4);
    }
    return mercury__map__AL_4;
  }
}

void MR_CALL 
mercury__map__to_assoc_list_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3,
  MR_Word * mercury__map__L_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_9, mercury__map__L_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__to_assoc_list_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Word mercury__map__AL_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__AL_4);
    }
    return mercury__map__AL_4;
  }
}

void MR_CALL 
mercury__map__keys_and_values_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Word * mercury__map__KeyList_5,
  MR_Word * mercury__map__ValueList_6)
{
  {
    MR_Word mercury__map__V_7_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_8_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__keys_and_values_acc_5_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__V_7_12, mercury__map__KeyList_5, mercury__map__V_8_14, mercury__map__ValueList_6);
    }
  }
}

void MR_CALL 
mercury__map__values_2_p_0(
  MR_Word mercury__map__TypeInfo_for__K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__Map_3,
  MR_Word * mercury__map__KeyList_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__values_acc_3_p_0(mercury__map__TypeInfo_for__K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__values_1_f_0(
  MR_Word mercury__map__TypeInfo_for__K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Word mercury__map__Vs_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__values_acc_3_p_0(mercury__map__TypeInfo_for__K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Vs_4);
    }
    return mercury__map__Vs_4;
  }
}

void MR_CALL 
mercury__map__sorted_keys_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for__V_6,
  MR_Word mercury__map__Map_3,
  MR_Word * mercury__map__KeyList_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__sorted_keys_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for__V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Word mercury__map__Ks_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Ks_4);
    }
    return mercury__map__Ks_4;
  }
}

void MR_CALL 
mercury__map__keys_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for__V_6,
  MR_Word mercury__map__Map_3,
  MR_Word * mercury__map__KeyList_4)
{
  {
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
    }
  }
}

MR_Word MR_CALL 
mercury__map__keys_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for__V_6,
  MR_Word mercury__map__M_3)
{
  {
    MR_Word mercury__map__Ks_4;
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Ks_4);
    }
    return mercury__map__Ks_4;
  }
}

void MR_CALL 
mercury__map__set_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Box mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
  }
}

MR_Word MR_CALL 
mercury__map__set_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M1_5,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7)
{
  {
    MR_Word mercury__map__M2_8;

    {
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
    return mercury__map__M2_8;
  }
}

void MR_CALL 
mercury__map__det_transform_value_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__TypeInfo_for_K_14,
  MR_Word mercury__map__P_5,
  MR_Box mercury__map__K_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_13, mercury__map__TypeInfo_for_K_14, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      {
        mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_14, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
        return;
      }
    }
  }
}

static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
  MR_Box mercury__map__closure_arg,
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box * mercury__map__wrapper_arg_2)
{
  {
    MR_Box mercury__map__closure = mercury__map__closure_arg;

    {
      mercury__map__IntroducedFrom__pred__det_transform_value__1069__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 4))), mercury__map__wrapper_arg_1, mercury__map__wrapper_arg_2);
    }
  }
}

MR_Word MR_CALL 
mercury__map__det_transform_value_3_f_0(
  MR_Word mercury__map__TypeInfo_for_V_18,
  MR_Word mercury__map__TypeInfo_for_K_19,
  MR_Word mercury__map__F_5,
  MR_Box mercury__map__K_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__STATE_VARIABLE_Map_11;
    MR_Word mercury__map__Var_12;
    MR_Word mercury__map__NewMap_25;

    {
      mercury__map__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__map__Var_12, 0) = ((MR_Box) (&mercury__map_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mercury__map__Var_12, 1) = ((MR_Box) (mercury__map__det_transform_value_3_f_0_1));
      MR_hl_field(MR_mktag(0), mercury__map__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__map__Var_12, 3) = ((MR_Box) (mercury__map__TypeInfo_for_V_18));
      MR_hl_field(MR_mktag(0), mercury__map__Var_12, 4) = ((MR_Box) (mercury__map__F_5));
    }
    {
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_K_19, mercury__map__Var_12, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__NewMap_25);
    }
    if (mercury__map__succeeded)
      mercury__map__STATE_VARIABLE_Map_11 = mercury__map__NewMap_25;
    else
    {
      {
        mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_19, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
      }
    }
    return mercury__map__STATE_VARIABLE_Map_11;
  }
}

MR_bool MR_CALL 
mercury__map__transform_value_4_p_0(
  MR_Word mercury__map__TypeInfo_for_V_11,
  MR_Word mercury__map__TypeInfo_for_K_12,
  MR_Word mercury__map__P_5,
  MR_Box mercury__map__K_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_K_12, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__search_insert_5_p_0(
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7,
  MR_Word * mercury__map__MaybeOldV_8,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
{
  {
    mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_6, mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
  }
}

void MR_CALL 
mercury__map__det_update_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Box mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", mercury__map__K_5);
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__map__det_update_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M0_5,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__M_8;
    MR_Word mercury__map__NewMap_16;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, &mercury__map__NewMap_16);
    }
    if (mercury__map__succeeded)
      mercury__map__M_8 = mercury__map__NewMap_16;
    else
    {
      MR_Box mercury__map__Var_19;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_update: key not found", mercury__map__K_6);
      }
    }
    return mercury__map__M_8;
  }
}

MR_bool MR_CALL 
mercury__map__update_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Box mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__update_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M0_5,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7,
  MR_Word * mercury__map__M_8)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, mercury__map__M_8);
    }
    return mercury__map__succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__set_from_assoc_list_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__AL_5)
{
  {
    MR_Word mercury__map__M2_6;

    {
      mercury__map__set_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__set_from_assoc_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_16,
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Box mercury__map__K_7;
      MR_Box mercury__map__V_8;
      MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__map__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

      mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 0));
      mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 1));
      {
        mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__KVs_9;
        MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_14_14;

        mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_2;
        mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__set_from_corresponding_lists_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M1_5,
  MR_Word mercury__map__Ks_6,
  MR_Word mercury__map__Vs_7)
{
  {
    MR_Word mercury__map__M2_8;

    {
      mercury__map__set_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
    return mercury__map__M2_8;
  }
}

void MR_CALL 
mercury__map__set_from_corresponding_lists_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.set_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
      MR_Box mercury__map__Var_32 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

      if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.set_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Box mercury__map__V_22 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__map__Vs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__map__STATE_VARIABLE_Map_27_27;

        {
          mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__Var_32, mercury__map__V_22, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__STATE_VARIABLE_Map_27_27);
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Var_31;
          MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Vs_23;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_27_27;

          mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_3;
          mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__det_insert_from_assoc_list_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M1_4,
  MR_Word mercury__map__AL_5)
{
  {
    MR_Word mercury__map__M2_6;

    {
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
    return mercury__map__M2_6;
  }
}

void MR_CALL 
mercury__map__det_insert_from_assoc_list_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_16,
  MR_Word mercury__map__TypeInfo_for_V_17,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
      else
      {
        MR_Box mercury__map__K_7;
        MR_Box mercury__map__V_8;
        MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__map__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__map__STATE_VARIABLE_Map_14_14;
        MR_Word mercury__map__NewMap_23;

        mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 0));
        mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__Var_13, (MR_Integer) 1));
        {
          mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__NewMap_23);
        }
        if (mercury__map__succeeded)
          mercury__map__STATE_VARIABLE_Map_14_14 = mercury__map__NewMap_23;
        else
        {
          MR_Box mercury__map__Var_26;

          {
            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, (MR_String) "map.det_insert: key already present", mercury__map__K_7);
            return;
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__KVs_9;
          MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_14_14;

          mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_2;
          mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__map__det_insert_from_corresponding_lists_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M1_5,
  MR_Word mercury__map__Ks_6,
  MR_Word mercury__map__Vs_7)
{
  {
    MR_Word mercury__map__M2_8;

    {
      mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
    return mercury__map__M2_8;
  }
}

void MR_CALL 
mercury__map__det_insert_from_corresponding_lists_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_29,
  MR_Word mercury__map__TypeInfo_for_V_30,
  MR_Word mercury__map__HeadVar__1_1,
  MR_Word mercury__map__HeadVar__2_2,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__map__succeeded;

      if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_insert_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
            return;
          }
        }
      else
      {
        MR_Word mercury__map__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__map__Var_32 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140map.det_insert_from_corresponding_lists\'/4", (MR_String) "list length mismatch");
            return;
          }
        }
        else
        {
          MR_Box mercury__map__V_22 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__map__Vs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__map__STATE_VARIABLE_Map_27_27;
          MR_Word mercury__map__NewMap_38;

          {
            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__Var_32, mercury__map__V_22, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__NewMap_38);
          }
          if (mercury__map__succeeded)
            mercury__map__STATE_VARIABLE_Map_27_27 = mercury__map__NewMap_38;
          else
          {
            MR_Box mercury__map__Var_41;

            {
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, (MR_String) "map.det_insert: key already present", mercury__map__Var_32);
              return;
            }
          }
          /* direct tailcall eliminated */
          {
            MR_Word mercury__map__next_value_of_HeadVar__1_1 = mercury__map__Var_31;
            MR_Word mercury__map__next_value_of_HeadVar__2_2 = mercury__map__Vs_23;
            MR_Word mercury__map__next_value_of_STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_27_27;

            mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__next_value_of_STATE_VARIABLE_Map_0_3;
            mercury__map__HeadVar__2_2 = mercury__map__next_value_of_HeadVar__2_2;
            mercury__map__HeadVar__1_1 = mercury__map__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__map__det_insert_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_13,
  MR_Word mercury__map__TypeInfo_for_V_14,
  MR_Box mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__NewMap_8;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
    if (mercury__map__succeeded)
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
    else
    {
      MR_Box mercury__map__Var_15;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", mercury__map__K_5);
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__map__det_insert_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M1_5,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Word mercury__map__M2_8;
    MR_Word mercury__map__NewMap_16;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__NewMap_16);
    }
    if (mercury__map__succeeded)
      mercury__map__M2_8 = mercury__map__NewMap_16;
    else
    {
      MR_Box mercury__map__Var_19;

      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_insert: key already present", mercury__map__K_6);
      }
    }
    return mercury__map__M2_8;
  }
}

MR_bool MR_CALL 
mercury__map__insert_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_11,
  MR_Word mercury__map__TypeInfo_for_V_12,
  MR_Box mercury__map__K_5,
  MR_Box mercury__map__V_6,
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__insert_3_f_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__M1_5,
  MR_Box mercury__map__K_6,
  MR_Box mercury__map__V_7,
  MR_Word * mercury__map__M2_8)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, mercury__map__M2_8);
    }
    return mercury__map__succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__det_min_key_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_3)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__HeadVar__2_2;
    MR_Box mercury__map__K_4;

    {
      mercury__map__succeeded = mercury__tree234__min_key_1_f_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_3, &mercury__map__K_4);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__2_2 = mercury__map__K_4;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_min_key\'/1", (MR_String) "map.min_key failed");
      }
    }
    return mercury__map__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__map__min_key_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_4,
  MR_Word mercury__map__TypeInfo_for_V_5,
  MR_Word mercury__map__M_3,
  MR_Box * mercury__map__HeadVar__2_2)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__min_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
    return mercury__map__succeeded;
  }
}

MR_Box MR_CALL 
mercury__map__det_max_key_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_3)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__HeadVar__2_2;
    MR_Box mercury__map__K_4;

    {
      mercury__map__succeeded = mercury__tree234__max_key_1_f_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_3, &mercury__map__K_4);
    }
    if (mercury__map__succeeded)
      mercury__map__HeadVar__2_2 = mercury__map__K_4;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140map.det_max_key\'/1", (MR_String) "map.max_key failed");
      }
    }
    return mercury__map__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__map__max_key_1_f_0(
  MR_Word mercury__map__TypeInfo_for_K_4,
  MR_Word mercury__map__TypeInfo_for_V_5,
  MR_Word mercury__map__M_3,
  MR_Box * mercury__map__HeadVar__2_2)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__max_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__upper_bound_lookup_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_12,
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__Map_5,
  MR_Box mercury__map__SearchK_6,
  MR_Box * mercury__map__K_7,
  MR_Box * mercury__map__V_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__KPrime_9;
    MR_Box mercury__map__VPrime_10;

    {
      mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
    if (mercury__map__succeeded)
    {
      *mercury__map__K_7 = mercury__map__KPrime_9;
      *mercury__map__V_8 = mercury__map__VPrime_10;
    }
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.upper_bound_lookup: key not found", mercury__map__SearchK_6);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__map__upper_bound_search_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Map_5,
  MR_Box mercury__map__SearchK_6,
  MR_Box * mercury__map__K_7,
  MR_Box * mercury__map__V_8)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__lower_bound_lookup_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_12,
  MR_Word mercury__map__TypeInfo_for_V_13,
  MR_Word mercury__map__Map_5,
  MR_Box mercury__map__SearchK_6,
  MR_Box * mercury__map__K_7,
  MR_Box * mercury__map__V_8)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__KPrime_9;
    MR_Box mercury__map__VPrime_10;

    {
      mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
    if (mercury__map__succeeded)
    {
      *mercury__map__K_7 = mercury__map__KPrime_9;
      *mercury__map__V_8 = mercury__map__VPrime_10;
    }
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.lower_bound_lookup: key not found", mercury__map__SearchK_6);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__map__lower_bound_search_4_p_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Map_5,
  MR_Box mercury__map__SearchK_6,
  MR_Box * mercury__map__K_7,
  MR_Box * mercury__map__V_8)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
    return mercury__map__succeeded;
  }
}

static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
  void * mercury__map__env_ptr_arg)
{
  {
    struct mercury__map__inverse_search_3_p_0_env_0_s * mercury__map__env_ptr = (struct mercury__map__inverse_search_3_p_0_env_0_s *) mercury__map__env_ptr_arg;

    {
      (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_5, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__Var_9);
    }
    if ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded)
      {
        ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont)((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr);
      }
  }
}

void MR_CALL 
mercury__map__inverse_search_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Box mercury__map__V_5,
  MR_Box * mercury__map__K_6,
  MR_Cont mercury__map__cont,
  void * mercury__map__cont_env_ptr)
{
  {
    struct mercury__map__inverse_search_3_p_0_env_0_s mercury__map__env;

    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8 = mercury__map__TypeInfo_for_V_8;
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__V_5 = mercury__map__V_5;
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont = mercury__map__cont;
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__map__cont_env_ptr;
    {
      mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_6, &(mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__Var_9, mercury__map__inverse_search_3_p_0_1, &mercury__map__env);
    }
  }
}

void MR_CALL 
mercury__map__lookup_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_9,
  MR_Word mercury__map__TypeInfo_for_V_10,
  MR_Word mercury__map__Map_4,
  MR_Box mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__VPrime_7;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
    if (mercury__map__succeeded)
      *mercury__map__V_6 = mercury__map__VPrime_7;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", mercury__map__K_5);
        return;
      }
    }
  }
}

MR_Box MR_CALL 
mercury__map__lookup_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Box mercury__map__K_5)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__V_6;
    MR_Box mercury__map__VPrime_12;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
    if (mercury__map__succeeded)
      mercury__map__V_6 = mercury__map__VPrime_12;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", mercury__map__K_5);
      }
    }
    return mercury__map__V_6;
  }
}

MR_bool MR_CALL 
mercury__map__search_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Box mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__search_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__M_4,
  MR_Box mercury__map__K_5,
  MR_Box * mercury__map__V_6)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
    return mercury__map__succeeded;
  }
}

void MR_CALL 
mercury__map__member_3_p_0(
  MR_Word mercury__map__TypeInfo_for_K_7,
  MR_Word mercury__map__TypeInfo_for_V_8,
  MR_Word mercury__map__Map_4,
  MR_Box * mercury__map__K_5,
  MR_Box * mercury__map__V_6,
  MR_Cont mercury__map__cont,
  void * mercury__map__cont_env_ptr)
{
  {
    mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6, mercury__map__cont, mercury__map__cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__map__contains_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for__V_7,
  MR_Word mercury__map__Map_3,
  MR_Box mercury__map__K_4)
{
  {
    MR_bool mercury__map__succeeded;
    MR_Box mercury__map__Var_5;

    {
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for__V_7, mercury__map__Map_3, mercury__map__K_4, &mercury__map__Var_5);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__equal_2_p_0(
  MR_Word mercury__map__TypeInfo_for_K_5,
  MR_Word mercury__map__TypeInfo_for_V_6,
  MR_Word mercury__map__MapA_3,
  MR_Word mercury__map__MapB_4)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__tree234__equal_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__MapA_3, mercury__map__MapB_4);
    }
    return mercury__map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__map__is_empty_1_p_0(
  MR_Word mercury__map__TypeInfo_3_3,
  MR_Word mercury__map__TypeInfo_4_4,
  MR_Word mercury__map__M_2)
{
  {
    MR_bool mercury__map__succeeded = (mercury__map__M_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__map__succeeded;
  }
}

MR_Word MR_CALL 
mercury__map__singleton_2_f_0(
  MR_Word mercury__map__TypeInfo_for_K_6,
  MR_Word mercury__map__TypeInfo_for_V_7,
  MR_Box mercury__map__K_4,
  MR_Box mercury__map__V_5)
{
  {
    MR_Word mercury__map__HeadVar__3_3;
    MR_Word mercury__map__V_6_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__map__V_7_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 0) = mercury__map__K_4;
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 1) = mercury__map__V_5;
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 2) = ((MR_Box) (mercury__map__V_6_10));
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 3) = ((MR_Box) (mercury__map__V_7_11));
    }
    return mercury__map__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__map__init_1_p_0(
  MR_Word mercury__map__TypeInfo_3_3,
  MR_Word mercury__map__TypeInfo_4_4,
  MR_Word * mercury__map__M_2)
{
  *mercury__map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_Word MR_CALL 
mercury__map__init_0_f_0(
  MR_Word mercury__map__TypeInfo_for_K_3,
  MR_Word mercury__map__TypeInfo_for_V_4)
{
  {
    MR_Word mercury__map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__map__M_2;
  }
}

static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box mercury__map__wrapper_arg_2,
  MR_Box mercury__map__wrapper_arg_3,
  MR_Box mercury__map__wrapper_arg_4)
{
  {
    MR_bool mercury__map__succeeded;

    {
      mercury__map__succeeded = mercury__map____Unify____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), ((MR_Word) mercury__map__wrapper_arg_3), ((MR_Word) mercury__map__wrapper_arg_4));
    }
    return mercury__map__succeeded;
  }
}

static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
  MR_Box mercury__map__wrapper_arg_1,
  MR_Box mercury__map__wrapper_arg_2,
  MR_Box * mercury__map__wrapper_arg_3,
  MR_Box mercury__map__wrapper_arg_4,
  MR_Box mercury__map__wrapper_arg_5)
{
  {
    MR_Word mercury__map__conv0_HeadVar__1_1;

    {
      mercury__map____Compare____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), &mercury__map__conv0_HeadVar__1_1, ((MR_Word) mercury__map__wrapper_arg_4), ((MR_Word) mercury__map__wrapper_arg_5));
    }
    *mercury__map__wrapper_arg_3 = ((MR_Box) (mercury__map__conv0_HeadVar__1_1));
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

/* :- end_module map. */
