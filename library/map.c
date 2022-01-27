/*
** Automatically generated from `map.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"



#line 121 "map.m"
struct mercury__map__inverse_search_3_p_0_env_0_s {
#line 121 "map.m"
  MR_Word mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8;
#line 121 "map.m"
  MR_Box mercury__map__inverse_search_3_p_0_env_0__V_5;
#line 121 "map.m"
  MR_Cont mercury__map__inverse_search_3_p_0_env_0__cont;
#line 121 "map.m"
  void * mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr;
#line 1101 "map.m"
  MR_bool mercury__map__inverse_search_3_p_0_env_0__succeeded;
#line 1101 "map.m"
  MR_Box mercury__map__inverse_search_3_p_0_env_0__V_9_9;
#line 121 "map.m"
};


#line 102 "map.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1;

#line 105 "map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 108 "map.c"
static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
#line 111 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 113 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 115 "map.c"
  MR_Box mercury__map__wrapper_arg_3,
#line 117 "map.c"
  MR_Box mercury__map__wrapper_arg_4);

#line 120 "map.c"
static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
#line 123 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 125 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 127 "map.c"
  MR_Box * mercury__map__wrapper_arg_3,
#line 129 "map.c"
  MR_Box mercury__map__wrapper_arg_4,
#line 131 "map.c"
  MR_Box mercury__map__wrapper_arg_5);

#line 1312 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_51_49_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1312 "map.m"
  MR_Word mercury__map__V_35_35,
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1312 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1312 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23);

#line 1412 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_51_48_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1412 "map.m"
  MR_Word mercury__map__V_39_39,
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1412 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1412 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23);

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__map__V_58_58,
#line 41 "tree234.int"
  MR_Word mercury__map__V_59_59,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Word * mercury__map__HeadVar__4_4);

#line 1413 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_50_55_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1413 "map.m"
  MR_Word mercury__map__V_39_39,
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1413 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1413 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23);

#line 1314 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_50_53_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1314 "map.m"
  MR_Word mercury__map__V_35_35,
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1314 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1314 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23);

#line 194 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
#line 194 "tree234.int"
  MR_Word mercury__map__V_64_64,
#line 194 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 194 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3);

#line 175 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
#line 175 "tree234.int"
  MR_Word mercury__map__V_65_65,
#line 175 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 175 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3);

#line 90 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 90 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 90 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 90 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 90 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4);

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1075 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1075 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1075 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1075 "map.m"
  MR_Word * mercury__map__L_3);

#line 1050 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
#line 1050 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 1050 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1050 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1050 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
#line 1050 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
#line 1050 "map.m"
  MR_Word * mercury__map__HeadVar__5_5);

#line 955 "map.m"
static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__955__1_4_p_0(
#line 955 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 955 "map.m"
  MR_Word mercury__map__F_5,
#line 955 "map.m"
  MR_Box mercury__map__HeadVar__3_14,
#line 955 "map.m"
  MR_Box * mercury__map__HeadVar__4_15);

#line 955 "map.m"
static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
#line 955 "map.m"
  MR_Box mercury__map__closure_arg,
#line 955 "map.m"
  MR_Box mercury__map__wrapper_arg_1,
#line 955 "map.m"
  MR_Box * mercury__map__wrapper_arg_2);

#line 1101 "map.m"
static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
#line 1101 "map.m"
  void * mercury__map__env_ptr_arg);


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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 709 "map.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 719 "map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 728 "map.c"
const MR_TypeCtorInfo_Struct mercury__map__map__type_ctor_info_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__map____Unify____map_2_0_10001)),
  ((MR_Box) (mercury__map____Compare____map_2_0_10001)),
  (MR_String) "map",
  (MR_String) "map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 749 "map.c"
static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
#line 752 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 754 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 756 "map.c"
  MR_Box mercury__map__wrapper_arg_3,
#line 758 "map.c"
  MR_Box mercury__map__wrapper_arg_4)
#line 760 "map.c"
{
#line 762 "map.c"
  {
#line 764 "map.c"
    MR_bool mercury__map__succeeded;

#line 767 "map.c"
    {
#line 769 "map.c"
      mercury__map__succeeded = mercury__map____Unify____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), ((MR_Word) mercury__map__wrapper_arg_3), ((MR_Word) mercury__map__wrapper_arg_4));
    }
#line 772 "map.c"
    return mercury__map__succeeded;
#line 774 "map.c"
  }
#line 776 "map.c"
}

#line 779 "map.c"
static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
#line 782 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 784 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 786 "map.c"
  MR_Box * mercury__map__wrapper_arg_3,
#line 788 "map.c"
  MR_Box mercury__map__wrapper_arg_4,
#line 790 "map.c"
  MR_Box mercury__map__wrapper_arg_5)
#line 792 "map.c"
{
#line 794 "map.c"
  {
#line 796 "map.c"
    MR_Word mercury__map__conv0_HeadVar__1_1;

#line 799 "map.c"
    {
#line 801 "map.c"
      mercury__map____Compare____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), &mercury__map__conv0_HeadVar__1_1, ((MR_Word) mercury__map__wrapper_arg_4), ((MR_Word) mercury__map__wrapper_arg_5));
    }
#line 804 "map.c"
    *mercury__map__wrapper_arg_3 = ((MR_Box) (mercury__map__conv0_HeadVar__1_1));
#line 806 "map.c"
  }
#line 808 "map.c"
}

#line 1312 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_51_49_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1312 "map.m"
  MR_Word mercury__map__V_35_35,
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1312 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1312 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1312 "map.m"
{
#line 1321 "map.m"
  while (MR_TRUE)
#line 1321 "map.m"
    {
#line 1321 "map.m"
      /* tailcall optimized into a loop */
#line 1321 "map.m"
      {
#line 1321 "map.m"
        MR_bool mercury__map__succeeded;

#line 1321 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "map.m"
          {
#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            else
#line 1326 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1321 "map.m"
          }
#line 1321 "map.m"
        else
#line 1321 "map.m"
          {
#line 1321 "map.m"
            MR_Word mercury__map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1321 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "map.m"
              {
#line 1323 "map.m"
                *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1323 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1323 "map.m"
              }
#line 1321 "map.m"
            else
#line 1328 "map.m"
              {
#line 1328 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 0));
#line 1328 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 1));
#line 1328 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1328 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1328 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1328 "map.m"
                MR_Word mercury__map__R_20;
#line 1328 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1329 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1329 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1330 "map.m"
                {
#line 1330 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_30, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1336 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1337 "map.m"
                  {
#line 1337 "map.m"
                    /* direct tailcall eliminated */
#line 1337 "map.m"
                    {
#line 1337 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;

#line 1337 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1337 "map.m"
                    }
#line 1337 "map.m"
                    continue;
#line 1337 "map.m"
                  }
#line 1336 "map.m"
                else
#line 1336 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1332 "map.m"
                    {
#line 1332 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1332 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 1301 "map.m"
                      MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__V_35_35, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_56;

#line 1301 "map.m"
                      {
#line 1301 "map.m"
                        mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__V_35_35), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 1332 "map.m"
                      if (mercury__map__succeeded)
#line 1332 "map.m"
                        {
#line 879 "map.m"
                          {
#line 879 "map.m"
                            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_56);
                          }
#line 881 "map.m"
                          if (mercury__map__succeeded)
#line 880 "map.m"
                            mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_56;
#line 881 "map.m"
                          else
#line 882 "map.m"
                            {
#line 882 "map.m"
                              MR_Box mercury__map__V_59_59;

#line 882 "map.m"
                              {
#line 882 "map.m"
                                mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                              }
#line 882 "map.m"
                            }
#line 1335 "map.m"
                          /* direct tailcall eliminated */
#line 1335 "map.m"
                          {
#line 1335 "map.m"
                            MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;
#line 1335 "map.m"
                            MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1335 "map.m"
                            MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1335 "map.m"
                            mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1335 "map.m"
                            mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1335 "map.m"
                            mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1335 "map.m"
                          }
#line 1335 "map.m"
                          continue;
#line 1332 "map.m"
                        }
#line 1332 "map.m"
                    }
#line 1336 "map.m"
                  else
#line 1340 "map.m"
                    {
#line 1340 "map.m"
                      /* direct tailcall eliminated */
#line 1340 "map.m"
                      {
#line 1340 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1340 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1340 "map.m"
                      }
#line 1340 "map.m"
                      continue;
#line 1340 "map.m"
                    }
#line 1328 "map.m"
              }
#line 1321 "map.m"
          }
#line 1321 "map.m"
        return mercury__map__succeeded;
#line 1321 "map.m"
      }
#line 1321 "map.m"
      break;
#line 1321 "map.m"
    }
#line 1312 "map.m"
}

#line 1412 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_51_48_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1412 "map.m"
  MR_Word mercury__map__V_39_39,
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1412 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1412 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1412 "map.m"
{
#line 1419 "map.m"
  while (MR_TRUE)
#line 1419 "map.m"
    {
#line 1419 "map.m"
      /* tailcall optimized into a loop */
#line 1419 "map.m"
      {
#line 1419 "map.m"
        MR_bool mercury__map__succeeded;

#line 1419 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "map.m"
          {
#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1417 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1419 "map.m"
            else
#line 1426 "map.m"
              {
#line 1426 "map.m"
                mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
              }
#line 1419 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1419 "map.m"
          }
#line 1419 "map.m"
        else
#line 1419 "map.m"
          {
#line 1419 "map.m"
            MR_Word mercury__map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1419 "map.m"
            MR_Word mercury__map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "map.m"
              {
#line 1422 "map.m"
                {
#line 1422 "map.m"
                  mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
                }
#line 1422 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1422 "map.m"
              }
#line 1419 "map.m"
            else
#line 1428 "map.m"
              {
#line 1428 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 0));
#line 1428 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 1));
#line 1428 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1428 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1428 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1428 "map.m"
                MR_Word mercury__map__R_20;
#line 1428 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1429 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1429 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1430 "map.m"
                {
#line 1430 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_34, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1436 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1437 "map.m"
                  {
#line 1437 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 881 "map.m"
                    MR_Word mercury__map__NewMap_45;

#line 879 "map.m"
                    {
#line 879 "map.m"
                      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value1_15, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_45);
                    }
#line 881 "map.m"
                    if (mercury__map__succeeded)
#line 880 "map.m"
                      mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_45;
#line 881 "map.m"
                    else
#line 882 "map.m"
                      {
#line 882 "map.m"
                        MR_Box mercury__map__V_48_48;

#line 882 "map.m"
                        {
#line 882 "map.m"
                          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                        }
#line 882 "map.m"
                      }
#line 1439 "map.m"
                    /* direct tailcall eliminated */
#line 1439 "map.m"
                    {
#line 1439 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1439 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1439 "map.m"
                      mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1439 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1439 "map.m"
                    }
#line 1439 "map.m"
                    continue;
#line 1437 "map.m"
                  }
#line 1436 "map.m"
                else
#line 1436 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1432 "map.m"
                    {
#line 1432 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1432 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_30_30;
#line 1401 "map.m"
                      MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__V_39_39, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_69;

#line 1401 "map.m"
                      {
#line 1401 "map.m"
                        mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__V_39_39), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 1432 "map.m"
                      if (mercury__map__succeeded)
#line 1432 "map.m"
                        {
#line 879 "map.m"
                          {
#line 879 "map.m"
                            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_69);
                          }
#line 881 "map.m"
                          if (mercury__map__succeeded)
#line 880 "map.m"
                            mercury__map__STATE_VARIABLE_Common_30_30 = mercury__map__NewMap_69;
#line 881 "map.m"
                          else
#line 882 "map.m"
                            {
#line 882 "map.m"
                              MR_Box mercury__map__V_72_72;

#line 882 "map.m"
                              {
#line 882 "map.m"
                                mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                              }
#line 882 "map.m"
                            }
#line 1435 "map.m"
                          /* direct tailcall eliminated */
#line 1435 "map.m"
                          {
#line 1435 "map.m"
                            MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1435 "map.m"
                            MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1435 "map.m"
                            MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_30_30;

#line 1435 "map.m"
                            mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1435 "map.m"
                            mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1435 "map.m"
                            mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1435 "map.m"
                          }
#line 1435 "map.m"
                          continue;
#line 1432 "map.m"
                        }
#line 1432 "map.m"
                    }
#line 1436 "map.m"
                  else
#line 1441 "map.m"
                    {
#line 1441 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_26_26;
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_78;

#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key2_17, mercury__map__Value2_18, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_78);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_26_26 = mercury__map__NewMap_78;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_81_81;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key2_17);
                          }
#line 882 "map.m"
                        }
#line 1443 "map.m"
                      /* direct tailcall eliminated */
#line 1443 "map.m"
                      {
#line 1443 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1443 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_26_26;

#line 1443 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1443 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1443 "map.m"
                      }
#line 1443 "map.m"
                      continue;
#line 1441 "map.m"
                    }
#line 1428 "map.m"
              }
#line 1419 "map.m"
          }
#line 1419 "map.m"
        return mercury__map__succeeded;
#line 1419 "map.m"
      }
#line 1419 "map.m"
      break;
#line 1419 "map.m"
    }
#line 1412 "map.m"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__map__V_58_58,
#line 41 "tree234.int"
  MR_Word mercury__map__V_59_59,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Word * mercury__map__HeadVar__4_4)
#line 41 "tree234.int"
{
#line 104 "tree234.opt"
  while (MR_TRUE)
#line 104 "tree234.opt"
    {
#line 104 "tree234.opt"
      /* tailcall optimized into a loop */
#line 104 "tree234.opt"
      {
#line 104 "tree234.opt"
        MR_bool mercury__map__succeeded;

#line 104 "tree234.opt"
        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "tree234.opt"
          *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
          if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 116 "tree234.opt"
            {
#line 116 "tree234.opt"
              MR_Box mercury__map__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 116 "tree234.opt"
              MR_Box mercury__map__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 116 "tree234.opt"
              MR_Box mercury__map__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 116 "tree234.opt"
              MR_Box mercury__map__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 116 "tree234.opt"
              MR_Box mercury__map__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 116 "tree234.opt"
              MR_Box mercury__map__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 116 "tree234.opt"
              MR_Word mercury__map__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_50_50_44;
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_51_51_45;
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_52_52_46;
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_53_53_47;
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_54_54_48;
#line 116 "tree234.opt"
              MR_Word mercury__map__STATE_VARIABLE_A_55_55_49;

#line 117 "tree234.opt"
              {
#line 117 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_43_38, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
              }
#line 118 "tree234.opt"
              {
#line 118 "tree234.opt"
                mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_50_50_44, &mercury__map__STATE_VARIABLE_A_51_51_45);
              }
#line 119 "tree234.opt"
              {
#line 119 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
              }
#line 120 "tree234.opt"
              {
#line 120 "tree234.opt"
                mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46, &mercury__map__STATE_VARIABLE_A_53_53_47);
              }
#line 121 "tree234.opt"
              {
#line 121 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
              }
#line 122 "tree234.opt"
              {
#line 122 "tree234.opt"
                mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K2_41_36, mercury__map__V2_42_37, mercury__map__STATE_VARIABLE_A_54_54_48, &mercury__map__STATE_VARIABLE_A_55_55_49);
              }
#line 123 "tree234.opt"
              /* direct tailcall eliminated */
#line 123 "tree234.opt"
              {
#line 123 "tree234.opt"
                MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T3_46_41;
#line 123 "tree234.opt"
                MR_Word mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_55_55_49;

#line 123 "tree234.opt"
                mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 123 "tree234.opt"
                mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 123 "tree234.opt"
              }
#line 123 "tree234.opt"
              continue;
#line 116 "tree234.opt"
            }
#line 104 "tree234.opt"
          else
#line 104 "tree234.opt"
            if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 110 "tree234.opt"
              {
#line 110 "tree234.opt"
                MR_Box mercury__map__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 110 "tree234.opt"
                MR_Box mercury__map__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 110 "tree234.opt"
                MR_Box mercury__map__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 110 "tree234.opt"
                MR_Box mercury__map__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 110 "tree234.opt"
                MR_Word mercury__map__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "tree234.opt"
                MR_Word mercury__map__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "tree234.opt"
                MR_Word mercury__map__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_31_31_27;
#line 110 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_32_32_28;
#line 110 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_33_33_29;
#line 110 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_34_34_30;

#line 111 "tree234.opt"
                {
#line 111 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_25_22, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
                }
#line 112 "tree234.opt"
                {
#line 112 "tree234.opt"
                  mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_31_31_27, &mercury__map__STATE_VARIABLE_A_32_32_28);
                }
#line 113 "tree234.opt"
                {
#line 113 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
                }
#line 114 "tree234.opt"
                {
#line 114 "tree234.opt"
                  mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K1_23_20, mercury__map__V1_24_21, mercury__map__STATE_VARIABLE_A_33_33_29, &mercury__map__STATE_VARIABLE_A_34_34_30);
                }
#line 115 "tree234.opt"
                /* direct tailcall eliminated */
#line 115 "tree234.opt"
                {
#line 115 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T2_27_24;
#line 115 "tree234.opt"
                  MR_Word mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_34_34_30;

#line 115 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 115 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 115 "tree234.opt"
                }
#line 115 "tree234.opt"
                continue;
#line 110 "tree234.opt"
              }
#line 104 "tree234.opt"
            else
#line 106 "tree234.opt"
              {
#line 106 "tree234.opt"
                MR_Box mercury__map__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 106 "tree234.opt"
                MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 106 "tree234.opt"
                MR_Word mercury__map__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "tree234.opt"
                MR_Word mercury__map__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 106 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_17_17_15;
#line 106 "tree234.opt"
                MR_Word mercury__map__STATE_VARIABLE_A_18_18_16;

#line 107 "tree234.opt"
                {
#line 107 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_12_11, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
                }
#line 108 "tree234.opt"
                {
#line 108 "tree234.opt"
                  mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K_10_9, mercury__map__V_11_10, mercury__map__STATE_VARIABLE_A_17_17_15, &mercury__map__STATE_VARIABLE_A_18_18_16);
                }
#line 109 "tree234.opt"
                /* direct tailcall eliminated */
#line 109 "tree234.opt"
                {
#line 109 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T1_13_12;
#line 109 "tree234.opt"
                  MR_Word mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_18_18_16;

#line 109 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 109 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 109 "tree234.opt"
                }
#line 109 "tree234.opt"
                continue;
#line 106 "tree234.opt"
              }
#line 104 "tree234.opt"
      }
#line 104 "tree234.opt"
      break;
#line 104 "tree234.opt"
    }
#line 41 "tree234.int"
}

#line 1413 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_50_55_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1413 "map.m"
  MR_Word mercury__map__V_39_39,
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1413 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1413 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1413 "map.m"
{
#line 1419 "map.m"
  while (MR_TRUE)
#line 1419 "map.m"
    {
#line 1419 "map.m"
      /* tailcall optimized into a loop */
#line 1419 "map.m"
      {
#line 1419 "map.m"
        MR_bool mercury__map__succeeded;

#line 1419 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1417 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1419 "map.m"
          else
#line 1426 "map.m"
            {
#line 1426 "map.m"
              mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
#line 1426 "map.m"
              return;
            }
#line 1419 "map.m"
        else
#line 1419 "map.m"
          {
#line 1419 "map.m"
            MR_Word mercury__map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1419 "map.m"
            MR_Word mercury__map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "map.m"
              {
#line 1422 "map.m"
                mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
#line 1422 "map.m"
                return;
              }
#line 1419 "map.m"
            else
#line 1428 "map.m"
              {
#line 1428 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 0));
#line 1428 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 1));
#line 1428 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1428 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1428 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1428 "map.m"
                MR_Word mercury__map__R_20;
#line 1428 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1429 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1429 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1430 "map.m"
                {
#line 1430 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_34, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1436 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1437 "map.m"
                  {
#line 1437 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 881 "map.m"
                    MR_Word mercury__map__NewMap_45;

#line 879 "map.m"
                    {
#line 879 "map.m"
                      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value1_15, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_45);
                    }
#line 881 "map.m"
                    if (mercury__map__succeeded)
#line 880 "map.m"
                      mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_45;
#line 881 "map.m"
                    else
#line 882 "map.m"
                      {
#line 882 "map.m"
                        MR_Box mercury__map__V_48_48;

#line 882 "map.m"
                        {
#line 882 "map.m"
                          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                          return;
                        }
#line 882 "map.m"
                      }
#line 1439 "map.m"
                    /* direct tailcall eliminated */
#line 1439 "map.m"
                    {
#line 1439 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1439 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1439 "map.m"
                      mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1439 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1439 "map.m"
                    }
#line 1439 "map.m"
                    continue;
#line 1437 "map.m"
                  }
#line 1436 "map.m"
                else
#line 1436 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1432 "map.m"
                    {
#line 1432 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1432 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_30_30;
#line 1397 "map.m"
                      MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_39_39, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_69;

#line 1397 "map.m"
                      {
#line 1397 "map.m"
                        mercury__map__Value_21 = mercury__map__func_0(((MR_Box) mercury__map__V_39_39), mercury__map__Value1_15, mercury__map__Value2_18);
                      }
#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_69);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_30_30 = mercury__map__NewMap_69;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_72_72;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1435 "map.m"
                      /* direct tailcall eliminated */
#line 1435 "map.m"
                      {
#line 1435 "map.m"
                        MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1435 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1435 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_30_30;

#line 1435 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1435 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1435 "map.m"
                        mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1435 "map.m"
                      }
#line 1435 "map.m"
                      continue;
#line 1432 "map.m"
                    }
#line 1436 "map.m"
                  else
#line 1441 "map.m"
                    {
#line 1441 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_26_26;
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_78;

#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key2_17, mercury__map__Value2_18, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_78);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_26_26 = mercury__map__NewMap_78;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_81_81;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key2_17);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1443 "map.m"
                      /* direct tailcall eliminated */
#line 1443 "map.m"
                      {
#line 1443 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1443 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_26_26;

#line 1443 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1443 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1443 "map.m"
                      }
#line 1443 "map.m"
                      continue;
#line 1441 "map.m"
                    }
#line 1428 "map.m"
              }
#line 1419 "map.m"
          }
#line 1419 "map.m"
      }
#line 1419 "map.m"
      break;
#line 1419 "map.m"
    }
#line 1413 "map.m"
}

#line 1314 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_50_53_95_95_91_49_44_32_55_93_95_48_5_p_0(
#line 1314 "map.m"
  MR_Word mercury__map__V_35_35,
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1314 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1314 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1314 "map.m"
{
#line 1321 "map.m"
  while (MR_TRUE)
#line 1321 "map.m"
    {
#line 1321 "map.m"
      /* tailcall optimized into a loop */
#line 1321 "map.m"
      {
#line 1321 "map.m"
        MR_bool mercury__map__succeeded;

#line 1321 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
          else
#line 1326 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
        else
#line 1321 "map.m"
          {
#line 1321 "map.m"
            MR_Word mercury__map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1321 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            else
#line 1328 "map.m"
              {
#line 1328 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 0));
#line 1328 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 1));
#line 1328 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1328 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1328 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1328 "map.m"
                MR_Word mercury__map__R_20;
#line 1328 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1329 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1329 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1330 "map.m"
                {
#line 1330 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_30, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1336 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1337 "map.m"
                  {
#line 1337 "map.m"
                    /* direct tailcall eliminated */
#line 1337 "map.m"
                    {
#line 1337 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;

#line 1337 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1337 "map.m"
                    }
#line 1337 "map.m"
                    continue;
#line 1337 "map.m"
                  }
#line 1336 "map.m"
                else
#line 1336 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1332 "map.m"
                    {
#line 1332 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1332 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 1297 "map.m"
                      MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_35_35, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_56;

#line 1297 "map.m"
                      {
#line 1297 "map.m"
                        mercury__map__Value_21 = mercury__map__func_0(((MR_Box) mercury__map__V_35_35), mercury__map__Value1_15, mercury__map__Value2_18);
                      }
#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_56);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_56;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_59_59;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1335 "map.m"
                      /* direct tailcall eliminated */
#line 1335 "map.m"
                      {
#line 1335 "map.m"
                        MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;
#line 1335 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1335 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1335 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1335 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1335 "map.m"
                        mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1335 "map.m"
                      }
#line 1335 "map.m"
                      continue;
#line 1332 "map.m"
                    }
#line 1336 "map.m"
                  else
#line 1340 "map.m"
                    {
#line 1340 "map.m"
                      /* direct tailcall eliminated */
#line 1340 "map.m"
                      {
#line 1340 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1340 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1340 "map.m"
                      }
#line 1340 "map.m"
                      continue;
#line 1340 "map.m"
                    }
#line 1328 "map.m"
              }
#line 1321 "map.m"
          }
#line 1321 "map.m"
      }
#line 1321 "map.m"
      break;
#line 1321 "map.m"
    }
#line 1314 "map.m"
}

#line 194 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
#line 194 "tree234.int"
  MR_Word mercury__map__V_64_64,
#line 194 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 194 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3)
#line 194 "tree234.int"
{
#line 264 "tree234.opt"
  {
#line 264 "tree234.opt"
    MR_bool mercury__map__succeeded;

#line 264 "tree234.opt"
    if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "tree234.opt"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "tree234.opt"
    else
#line 264 "tree234.opt"
      if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 279 "tree234.opt"
        {
#line 279 "tree234.opt"
          MR_Box mercury__map__K0_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 279 "tree234.opt"
          MR_Box mercury__map__V0_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 279 "tree234.opt"
          MR_Box mercury__map__K1_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 279 "tree234.opt"
          MR_Box mercury__map__V1_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 279 "tree234.opt"
          MR_Box mercury__map__K2_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 279 "tree234.opt"
          MR_Box mercury__map__V2_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 279 "tree234.opt"
          MR_Word mercury__map__Left0_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 279 "tree234.opt"
          MR_Word mercury__map__LMid0_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 279 "tree234.opt"
          MR_Word mercury__map__RMid0_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 279 "tree234.opt"
          MR_Word mercury__map__Right0_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 279 "tree234.opt"
          MR_Box mercury__map__W0_43_51;
#line 279 "tree234.opt"
          MR_Box mercury__map__W1_44_52;
#line 279 "tree234.opt"
          MR_Box mercury__map__W2_45_53;
#line 279 "tree234.opt"
          MR_Word mercury__map__Left_46_54;
#line 279 "tree234.opt"
          MR_Word mercury__map__LMid_47_55;
#line 279 "tree234.opt"
          MR_Word mercury__map__RMid_48_56;
#line 279 "tree234.opt"
          MR_Word mercury__map__Right_49_57;
#line 1270 "map.m"
          MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1270 "map.m"
          MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box);
#line 1270 "map.m"
          MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box);

#line 1270 "map.m"
          {
#line 1270 "map.m"
            mercury__map__W0_43_51 = mercury__map__func_0(((MR_Box) mercury__map__V_64_64), mercury__map__V0_34_40);
          }
#line 1270 "map.m"
          mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1270 "map.m"
          {
#line 1270 "map.m"
            mercury__map__W1_44_52 = mercury__map__func_1(((MR_Box) mercury__map__V_64_64), mercury__map__V1_36_42);
          }
#line 1270 "map.m"
          mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1270 "map.m"
          {
#line 1270 "map.m"
            mercury__map__W2_45_53 = mercury__map__func_2(((MR_Box) mercury__map__V_64_64), mercury__map__V2_38_44);
          }
#line 284 "tree234.opt"
          {
#line 284 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_39_45, &mercury__map__Left_46_54);
          }
#line 285 "tree234.opt"
          {
#line 285 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__LMid0_40_46, &mercury__map__LMid_47_55);
          }
#line 286 "tree234.opt"
          {
#line 286 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__RMid0_41_47, &mercury__map__RMid_48_56);
          }
#line 287 "tree234.opt"
          {
#line 287 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_42_48, &mercury__map__Right_49_57);
          }
#line 288 "tree234.opt"
          {
#line 288 "tree234.opt"
            MR_Word base;
#line 288 "tree234.opt"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 288 "tree234.opt"
            *mercury__map__HeadVar__3_3 = base;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 0) = mercury__map__K0_33_39;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 1) = mercury__map__W0_43_51;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 2) = mercury__map__K1_35_41;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 3) = mercury__map__W1_44_52;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 4) = mercury__map__K2_37_43;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 5) = mercury__map__W2_45_53;
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__Left_46_54));
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__LMid_47_55));
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__RMid_48_56));
#line 288 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__Right_49_57));
#line 288 "tree234.opt"
          }
#line 279 "tree234.opt"
        }
#line 264 "tree234.opt"
      else
#line 264 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 271 "tree234.opt"
          {
#line 271 "tree234.opt"
            MR_Box mercury__map__K0_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 271 "tree234.opt"
            MR_Box mercury__map__V0_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 271 "tree234.opt"
            MR_Box mercury__map__K1_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 271 "tree234.opt"
            MR_Box mercury__map__V1_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 271 "tree234.opt"
            MR_Word mercury__map__Left0_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 271 "tree234.opt"
            MR_Word mercury__map__Middle0_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 271 "tree234.opt"
            MR_Word mercury__map__Right0_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 271 "tree234.opt"
            MR_Box mercury__map__W0_25_30;
#line 271 "tree234.opt"
            MR_Box mercury__map__W1_26_31;
#line 271 "tree234.opt"
            MR_Word mercury__map__Left_27_32;
#line 271 "tree234.opt"
            MR_Word mercury__map__Middle_28_33;
#line 271 "tree234.opt"
            MR_Word mercury__map__Right_29_34;
#line 1270 "map.m"
            MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1270 "map.m"
            MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box);

#line 1270 "map.m"
            {
#line 1270 "map.m"
              mercury__map__W0_25_30 = mercury__map__func_3(((MR_Box) mercury__map__V_64_64), mercury__map__V0_19_22);
            }
#line 1270 "map.m"
            mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1270 "map.m"
            {
#line 1270 "map.m"
              mercury__map__W1_26_31 = mercury__map__func_4(((MR_Box) mercury__map__V_64_64), mercury__map__V1_21_24);
            }
#line 275 "tree234.opt"
            {
#line 275 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_22_25, &mercury__map__Left_27_32);
            }
#line 276 "tree234.opt"
            {
#line 276 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Middle0_23_26, &mercury__map__Middle_28_33);
            }
#line 277 "tree234.opt"
            {
#line 277 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_24_27, &mercury__map__Right_29_34);
            }
#line 278 "tree234.opt"
            {
#line 278 "tree234.opt"
              MR_Word base;
#line 278 "tree234.opt"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 278 "tree234.opt"
              *mercury__map__HeadVar__3_3 = base;
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__map__K0_18_21;
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__map__W0_25_30;
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 2) = mercury__map__K1_20_23;
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 3) = mercury__map__W1_26_31;
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__Left_27_32));
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__Middle_28_33));
#line 278 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__Right_29_34));
#line 278 "tree234.opt"
            }
#line 271 "tree234.opt"
          }
#line 264 "tree234.opt"
        else
#line 265 "tree234.opt"
          {
#line 265 "tree234.opt"
            MR_Box mercury__map__K0_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 265 "tree234.opt"
            MR_Box mercury__map__V0_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 265 "tree234.opt"
            MR_Word mercury__map__Left0_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 265 "tree234.opt"
            MR_Word mercury__map__Right0_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 265 "tree234.opt"
            MR_Box mercury__map__W0_12_14;
#line 265 "tree234.opt"
            MR_Word mercury__map__Left_13_15;
#line 265 "tree234.opt"
            MR_Word mercury__map__Right_14_16;
#line 1270 "map.m"
            MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));

#line 1270 "map.m"
            {
#line 1270 "map.m"
              mercury__map__W0_12_14 = mercury__map__func_5(((MR_Box) mercury__map__V_64_64), mercury__map__V0_9_9);
            }
#line 268 "tree234.opt"
            {
#line 268 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_10_10, &mercury__map__Left_13_15);
            }
#line 269 "tree234.opt"
            {
#line 269 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_11_11, &mercury__map__Right_14_16);
            }
#line 270 "tree234.opt"
            {
#line 270 "tree234.opt"
              MR_Word base;
#line 270 "tree234.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 270 "tree234.opt"
              *mercury__map__HeadVar__3_3 = base;
#line 270 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__map__K0_8_8;
#line 270 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__map__W0_12_14;
#line 270 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__Left_13_15));
#line 270 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__Right_14_16));
#line 270 "tree234.opt"
            }
#line 265 "tree234.opt"
          }
#line 264 "tree234.opt"
  }
#line 194 "tree234.int"
}

#line 175 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
#line 175 "tree234.int"
  MR_Word mercury__map__V_65_65,
#line 175 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 175 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3)
#line 175 "tree234.int"
{
#line 229 "tree234.opt"
  {
#line 229 "tree234.opt"
    MR_bool mercury__map__succeeded;

#line 229 "tree234.opt"
    if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "tree234.opt"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "tree234.opt"
    else
#line 229 "tree234.opt"
      if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 244 "tree234.opt"
        {
#line 244 "tree234.opt"
          MR_Box mercury__map__K0_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 244 "tree234.opt"
          MR_Box mercury__map__V0_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 244 "tree234.opt"
          MR_Box mercury__map__K1_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 244 "tree234.opt"
          MR_Box mercury__map__V1_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 244 "tree234.opt"
          MR_Box mercury__map__K2_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 244 "tree234.opt"
          MR_Box mercury__map__V2_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 244 "tree234.opt"
          MR_Word mercury__map__Left0_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 244 "tree234.opt"
          MR_Word mercury__map__LMid0_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 244 "tree234.opt"
          MR_Word mercury__map__RMid0_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 244 "tree234.opt"
          MR_Word mercury__map__Right0_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 244 "tree234.opt"
          MR_Box mercury__map__W0_43_51;
#line 244 "tree234.opt"
          MR_Box mercury__map__W1_44_52;
#line 244 "tree234.opt"
          MR_Box mercury__map__W2_45_53;
#line 244 "tree234.opt"
          MR_Word mercury__map__Left_46_54;
#line 244 "tree234.opt"
          MR_Word mercury__map__LMid_47_55;
#line 244 "tree234.opt"
          MR_Word mercury__map__RMid_48_56;
#line 244 "tree234.opt"
          MR_Word mercury__map__Right_49_57;
#line 1263 "map.m"
          MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1263 "map.m"
          MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box);
#line 1263 "map.m"
          MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box);

#line 1263 "map.m"
          {
#line 1263 "map.m"
            mercury__map__W0_43_51 = mercury__map__func_0(((MR_Box) mercury__map__V_65_65), mercury__map__K0_33_39, mercury__map__V0_34_40);
          }
#line 1263 "map.m"
          mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1263 "map.m"
          {
#line 1263 "map.m"
            mercury__map__W1_44_52 = mercury__map__func_1(((MR_Box) mercury__map__V_65_65), mercury__map__K1_35_41, mercury__map__V1_36_42);
          }
#line 1263 "map.m"
          mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1263 "map.m"
          {
#line 1263 "map.m"
            mercury__map__W2_45_53 = mercury__map__func_2(((MR_Box) mercury__map__V_65_65), mercury__map__K2_37_43, mercury__map__V2_38_44);
          }
#line 249 "tree234.opt"
          {
#line 249 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_39_45, &mercury__map__Left_46_54);
          }
#line 250 "tree234.opt"
          {
#line 250 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__LMid0_40_46, &mercury__map__LMid_47_55);
          }
#line 251 "tree234.opt"
          {
#line 251 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__RMid0_41_47, &mercury__map__RMid_48_56);
          }
#line 252 "tree234.opt"
          {
#line 252 "tree234.opt"
            mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_42_48, &mercury__map__Right_49_57);
          }
#line 253 "tree234.opt"
          {
#line 253 "tree234.opt"
            MR_Word base;
#line 253 "tree234.opt"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 253 "tree234.opt"
            *mercury__map__HeadVar__3_3 = base;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 0) = mercury__map__K0_33_39;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 1) = mercury__map__W0_43_51;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 2) = mercury__map__K1_35_41;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 3) = mercury__map__W1_44_52;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 4) = mercury__map__K2_37_43;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 5) = mercury__map__W2_45_53;
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__Left_46_54));
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__LMid_47_55));
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__RMid_48_56));
#line 253 "tree234.opt"
            MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__Right_49_57));
#line 253 "tree234.opt"
          }
#line 244 "tree234.opt"
        }
#line 229 "tree234.opt"
      else
#line 229 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 236 "tree234.opt"
          {
#line 236 "tree234.opt"
            MR_Box mercury__map__K0_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 236 "tree234.opt"
            MR_Box mercury__map__V0_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 236 "tree234.opt"
            MR_Box mercury__map__K1_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 236 "tree234.opt"
            MR_Box mercury__map__V1_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 236 "tree234.opt"
            MR_Word mercury__map__Left0_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 236 "tree234.opt"
            MR_Word mercury__map__Middle0_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 236 "tree234.opt"
            MR_Word mercury__map__Right0_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 236 "tree234.opt"
            MR_Box mercury__map__W0_25_30;
#line 236 "tree234.opt"
            MR_Box mercury__map__W1_26_31;
#line 236 "tree234.opt"
            MR_Word mercury__map__Left_27_32;
#line 236 "tree234.opt"
            MR_Word mercury__map__Middle_28_33;
#line 236 "tree234.opt"
            MR_Word mercury__map__Right_29_34;
#line 1263 "map.m"
            MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1263 "map.m"
            MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box);

#line 1263 "map.m"
            {
#line 1263 "map.m"
              mercury__map__W0_25_30 = mercury__map__func_3(((MR_Box) mercury__map__V_65_65), mercury__map__K0_18_21, mercury__map__V0_19_22);
            }
#line 1263 "map.m"
            mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1263 "map.m"
            {
#line 1263 "map.m"
              mercury__map__W1_26_31 = mercury__map__func_4(((MR_Box) mercury__map__V_65_65), mercury__map__K1_20_23, mercury__map__V1_21_24);
            }
#line 240 "tree234.opt"
            {
#line 240 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_22_25, &mercury__map__Left_27_32);
            }
#line 241 "tree234.opt"
            {
#line 241 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Middle0_23_26, &mercury__map__Middle_28_33);
            }
#line 242 "tree234.opt"
            {
#line 242 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_24_27, &mercury__map__Right_29_34);
            }
#line 243 "tree234.opt"
            {
#line 243 "tree234.opt"
              MR_Word base;
#line 243 "tree234.opt"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 243 "tree234.opt"
              *mercury__map__HeadVar__3_3 = base;
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__map__K0_18_21;
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__map__W0_25_30;
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 2) = mercury__map__K1_20_23;
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 3) = mercury__map__W1_26_31;
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__Left_27_32));
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__Middle_28_33));
#line 243 "tree234.opt"
              MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__Right_29_34));
#line 243 "tree234.opt"
            }
#line 236 "tree234.opt"
          }
#line 229 "tree234.opt"
        else
#line 230 "tree234.opt"
          {
#line 230 "tree234.opt"
            MR_Box mercury__map__K0_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 230 "tree234.opt"
            MR_Box mercury__map__V0_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 230 "tree234.opt"
            MR_Word mercury__map__Left0_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 230 "tree234.opt"
            MR_Word mercury__map__Right0_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 230 "tree234.opt"
            MR_Box mercury__map__W0_12_14;
#line 230 "tree234.opt"
            MR_Word mercury__map__Left_13_15;
#line 230 "tree234.opt"
            MR_Word mercury__map__Right_14_16;
#line 1263 "map.m"
            MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));

#line 1263 "map.m"
            {
#line 1263 "map.m"
              mercury__map__W0_12_14 = mercury__map__func_5(((MR_Box) mercury__map__V_65_65), mercury__map__K0_8_8, mercury__map__V0_9_9);
            }
#line 233 "tree234.opt"
            {
#line 233 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_10_10, &mercury__map__Left_13_15);
            }
#line 234 "tree234.opt"
            {
#line 234 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_11_11, &mercury__map__Right_14_16);
            }
#line 235 "tree234.opt"
            {
#line 235 "tree234.opt"
              MR_Word base;
#line 235 "tree234.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 235 "tree234.opt"
              *mercury__map__HeadVar__3_3 = base;
#line 235 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__map__K0_8_8;
#line 235 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__map__W0_12_14;
#line 235 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__Left_13_15));
#line 235 "tree234.opt"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__Right_14_16));
#line 235 "tree234.opt"
            }
#line 230 "tree234.opt"
          }
#line 229 "tree234.opt"
  }
#line 175 "tree234.int"
}

#line 90 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 90 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 90 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 90 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 90 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4)
#line 90 "tree234.int"
{
#line 177 "tree234.opt"
  while (MR_TRUE)
#line 177 "tree234.opt"
    {
#line 177 "tree234.opt"
      /* tailcall optimized into a loop */
#line 177 "tree234.opt"
      {
#line 177 "tree234.opt"
        MR_bool mercury__map__succeeded;

#line 177 "tree234.opt"
        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "tree234.opt"
          *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
#line 177 "tree234.opt"
        else
#line 177 "tree234.opt"
          if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 189 "tree234.opt"
            {
#line 189 "tree234.opt"
              MR_Box mercury__map__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 189 "tree234.opt"
              MR_Box mercury__map__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 189 "tree234.opt"
              MR_Box mercury__map__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 189 "tree234.opt"
              MR_Box mercury__map__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 189 "tree234.opt"
              MR_Box mercury__map__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 189 "tree234.opt"
              MR_Box mercury__map__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 189 "tree234.opt"
              MR_Word mercury__map__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 189 "tree234.opt"
              MR_Word mercury__map__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 189 "tree234.opt"
              MR_Word mercury__map__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 189 "tree234.opt"
              MR_Word mercury__map__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_50_50_44;
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_51_51_45;
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_52_52_46;
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_53_53_47;
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_54_54_48;
#line 189 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_55_55_49;
#line 1245 "map.m"
              MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1245 "map.m"
              MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1245 "map.m"
              MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 190 "tree234.opt"
              {
#line 190 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T3_46_41, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
              }
#line 1245 "map.m"
              mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
              {
#line 1245 "map.m"
                mercury__map__STATE_VARIABLE_A_51_51_45 = mercury__map__func_0(((MR_Box) mercury__map__V_56_56), mercury__map__K2_41_36, mercury__map__V2_42_37, mercury__map__STATE_VARIABLE_A_50_50_44);
              }
#line 192 "tree234.opt"
              {
#line 192 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
              }
#line 1245 "map.m"
              mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
              {
#line 1245 "map.m"
                mercury__map__STATE_VARIABLE_A_53_53_47 = mercury__map__func_1(((MR_Box) mercury__map__V_56_56), mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46);
              }
#line 194 "tree234.opt"
              {
#line 194 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
              }
#line 1245 "map.m"
              mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
              {
#line 1245 "map.m"
                mercury__map__STATE_VARIABLE_A_55_55_49 = mercury__map__func_2(((MR_Box) mercury__map__V_56_56), mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_54_54_48);
              }
#line 196 "tree234.opt"
              /* direct tailcall eliminated */
#line 196 "tree234.opt"
              {
#line 196 "tree234.opt"
                MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_43_38;
#line 196 "tree234.opt"
                MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_55_55_49;

#line 196 "tree234.opt"
                mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 196 "tree234.opt"
                mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 196 "tree234.opt"
              }
#line 196 "tree234.opt"
              continue;
#line 189 "tree234.opt"
            }
#line 177 "tree234.opt"
          else
#line 177 "tree234.opt"
            if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 183 "tree234.opt"
              {
#line 183 "tree234.opt"
                MR_Box mercury__map__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 183 "tree234.opt"
                MR_Box mercury__map__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 183 "tree234.opt"
                MR_Box mercury__map__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 183 "tree234.opt"
                MR_Box mercury__map__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 183 "tree234.opt"
                MR_Word mercury__map__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 183 "tree234.opt"
                MR_Word mercury__map__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 183 "tree234.opt"
                MR_Word mercury__map__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 183 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_31_31_27;
#line 183 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_32_32_28;
#line 183 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_33_33_29;
#line 183 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_34_34_30;
#line 1245 "map.m"
                MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1245 "map.m"
                MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 184 "tree234.opt"
                {
#line 184 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_27_24, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
                }
#line 1245 "map.m"
                mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
                {
#line 1245 "map.m"
                  mercury__map__STATE_VARIABLE_A_32_32_28 = mercury__map__func_3(((MR_Box) mercury__map__V_56_56), mercury__map__K1_23_20, mercury__map__V1_24_21, mercury__map__STATE_VARIABLE_A_31_31_27);
                }
#line 186 "tree234.opt"
                {
#line 186 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
                }
#line 1245 "map.m"
                mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
                {
#line 1245 "map.m"
                  mercury__map__STATE_VARIABLE_A_34_34_30 = mercury__map__func_4(((MR_Box) mercury__map__V_56_56), mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_33_33_29);
                }
#line 188 "tree234.opt"
                /* direct tailcall eliminated */
#line 188 "tree234.opt"
                {
#line 188 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_25_22;
#line 188 "tree234.opt"
                  MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_34_34_30;

#line 188 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 188 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 188 "tree234.opt"
                }
#line 188 "tree234.opt"
                continue;
#line 183 "tree234.opt"
              }
#line 177 "tree234.opt"
            else
#line 179 "tree234.opt"
              {
#line 179 "tree234.opt"
                MR_Box mercury__map__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 179 "tree234.opt"
                MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 179 "tree234.opt"
                MR_Word mercury__map__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 179 "tree234.opt"
                MR_Word mercury__map__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 179 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_17_17_15;
#line 179 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_18_18_16;
#line 1245 "map.m"
                MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 180 "tree234.opt"
                {
#line 180 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_13_12, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
                }
#line 1245 "map.m"
                mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1245 "map.m"
                {
#line 1245 "map.m"
                  mercury__map__STATE_VARIABLE_A_18_18_16 = mercury__map__func_5(((MR_Box) mercury__map__V_56_56), mercury__map__K_10_9, mercury__map__V_11_10, mercury__map__STATE_VARIABLE_A_17_17_15);
                }
#line 182 "tree234.opt"
                /* direct tailcall eliminated */
#line 182 "tree234.opt"
                {
#line 182 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_12_11;
#line 182 "tree234.opt"
                  MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_18_18_16;

#line 182 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 182 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 182 "tree234.opt"
                }
#line 182 "tree234.opt"
                continue;
#line 179 "tree234.opt"
              }
#line 177 "tree234.opt"
      }
#line 177 "tree234.opt"
      break;
#line 177 "tree234.opt"
    }
#line 90 "tree234.int"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 41 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4)
#line 41 "tree234.int"
{
#line 104 "tree234.opt"
  while (MR_TRUE)
#line 104 "tree234.opt"
    {
#line 104 "tree234.opt"
      /* tailcall optimized into a loop */
#line 104 "tree234.opt"
      {
#line 104 "tree234.opt"
        MR_bool mercury__map__succeeded;

#line 104 "tree234.opt"
        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "tree234.opt"
          *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
          if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 116 "tree234.opt"
            {
#line 116 "tree234.opt"
              MR_Box mercury__map__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 116 "tree234.opt"
              MR_Box mercury__map__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 116 "tree234.opt"
              MR_Box mercury__map__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 116 "tree234.opt"
              MR_Box mercury__map__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 116 "tree234.opt"
              MR_Box mercury__map__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 116 "tree234.opt"
              MR_Box mercury__map__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 116 "tree234.opt"
              MR_Word mercury__map__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "tree234.opt"
              MR_Word mercury__map__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_50_50_44;
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_51_51_45;
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_52_52_46;
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_53_53_47;
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_54_54_48;
#line 116 "tree234.opt"
              MR_Box mercury__map__STATE_VARIABLE_A_55_55_49;
#line 1226 "map.m"
              MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1226 "map.m"
              MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1226 "map.m"
              MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 117 "tree234.opt"
              {
#line 117 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_43_38, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
              }
#line 1226 "map.m"
              mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
              {
#line 1226 "map.m"
                mercury__map__STATE_VARIABLE_A_51_51_45 = mercury__map__func_0(((MR_Box) mercury__map__V_56_56), mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_50_50_44);
              }
#line 119 "tree234.opt"
              {
#line 119 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
              }
#line 1226 "map.m"
              mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
              {
#line 1226 "map.m"
                mercury__map__STATE_VARIABLE_A_53_53_47 = mercury__map__func_1(((MR_Box) mercury__map__V_56_56), mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46);
              }
#line 121 "tree234.opt"
              {
#line 121 "tree234.opt"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
              }
#line 1226 "map.m"
              mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
              {
#line 1226 "map.m"
                mercury__map__STATE_VARIABLE_A_55_55_49 = mercury__map__func_2(((MR_Box) mercury__map__V_56_56), mercury__map__K2_41_36, mercury__map__V2_42_37, mercury__map__STATE_VARIABLE_A_54_54_48);
              }
#line 123 "tree234.opt"
              /* direct tailcall eliminated */
#line 123 "tree234.opt"
              {
#line 123 "tree234.opt"
                MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T3_46_41;
#line 123 "tree234.opt"
                MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_55_55_49;

#line 123 "tree234.opt"
                mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 123 "tree234.opt"
                mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 123 "tree234.opt"
              }
#line 123 "tree234.opt"
              continue;
#line 116 "tree234.opt"
            }
#line 104 "tree234.opt"
          else
#line 104 "tree234.opt"
            if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 110 "tree234.opt"
              {
#line 110 "tree234.opt"
                MR_Box mercury__map__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 110 "tree234.opt"
                MR_Box mercury__map__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 110 "tree234.opt"
                MR_Box mercury__map__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 110 "tree234.opt"
                MR_Box mercury__map__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 110 "tree234.opt"
                MR_Word mercury__map__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "tree234.opt"
                MR_Word mercury__map__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "tree234.opt"
                MR_Word mercury__map__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_31_31_27;
#line 110 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_32_32_28;
#line 110 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_33_33_29;
#line 110 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_34_34_30;
#line 1226 "map.m"
                MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1226 "map.m"
                MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 111 "tree234.opt"
                {
#line 111 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_25_22, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
                }
#line 1226 "map.m"
                mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
                {
#line 1226 "map.m"
                  mercury__map__STATE_VARIABLE_A_32_32_28 = mercury__map__func_3(((MR_Box) mercury__map__V_56_56), mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_31_31_27);
                }
#line 113 "tree234.opt"
                {
#line 113 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
                }
#line 1226 "map.m"
                mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
                {
#line 1226 "map.m"
                  mercury__map__STATE_VARIABLE_A_34_34_30 = mercury__map__func_4(((MR_Box) mercury__map__V_56_56), mercury__map__K1_23_20, mercury__map__V1_24_21, mercury__map__STATE_VARIABLE_A_33_33_29);
                }
#line 115 "tree234.opt"
                /* direct tailcall eliminated */
#line 115 "tree234.opt"
                {
#line 115 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T2_27_24;
#line 115 "tree234.opt"
                  MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_34_34_30;

#line 115 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 115 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 115 "tree234.opt"
                }
#line 115 "tree234.opt"
                continue;
#line 110 "tree234.opt"
              }
#line 104 "tree234.opt"
            else
#line 106 "tree234.opt"
              {
#line 106 "tree234.opt"
                MR_Box mercury__map__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 106 "tree234.opt"
                MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 106 "tree234.opt"
                MR_Word mercury__map__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "tree234.opt"
                MR_Word mercury__map__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 106 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_17_17_15;
#line 106 "tree234.opt"
                MR_Box mercury__map__STATE_VARIABLE_A_18_18_16;
#line 1226 "map.m"
                MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 107 "tree234.opt"
                {
#line 107 "tree234.opt"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_12_11, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
                }
#line 1226 "map.m"
                mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1226 "map.m"
                {
#line 1226 "map.m"
                  mercury__map__STATE_VARIABLE_A_18_18_16 = mercury__map__func_5(((MR_Box) mercury__map__V_56_56), mercury__map__K_10_9, mercury__map__V_11_10, mercury__map__STATE_VARIABLE_A_17_17_15);
                }
#line 109 "tree234.opt"
                /* direct tailcall eliminated */
#line 109 "tree234.opt"
                {
#line 109 "tree234.opt"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T1_13_12;
#line 109 "tree234.opt"
                  MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_18_18_16;

#line 109 "tree234.opt"
                  mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 109 "tree234.opt"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 109 "tree234.opt"
                }
#line 109 "tree234.opt"
                continue;
#line 106 "tree234.opt"
              }
#line 104 "tree234.opt"
      }
#line 104 "tree234.opt"
      break;
#line 104 "tree234.opt"
    }
#line 41 "tree234.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__map__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1075 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1075 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1075 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1075 "map.m"
  MR_Word * mercury__map__L_3)
#line 1075 "map.m"
{
#line 1077 "map.m"
  while (MR_TRUE)
#line 1077 "map.m"
    {
#line 1077 "map.m"
      /* tailcall optimized into a loop */
#line 1077 "map.m"
      {
#line 1077 "map.m"
        MR_bool mercury__map__succeeded;

#line 1077 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "map.m"
          *mercury__map__L_3 = mercury__map__HeadVar__2_2;
#line 1077 "map.m"
        else
#line 1078 "map.m"
          {
#line 1078 "map.m"
            MR_Box mercury__map__X_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1078 "map.m"
            MR_Word mercury__map__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1078 "map.m"
            MR_Word mercury__map__V_9_9;

#line 1079 "map.m"
            {
#line 1079 "map.m"
              mercury__map__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__V_9_9, 0) = mercury__map__X_5;
#line 1079 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__V_9_9, 1) = ((MR_Box) (mercury__map__HeadVar__2_2));
#line 1079 "map.m"
            }
#line 1079 "map.m"
            /* direct tailcall eliminated */
#line 1079 "map.m"
            {
#line 1079 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Xs_6;
#line 1079 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__V_9_9;

#line 1079 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1079 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1079 "map.m"
            }
#line 1079 "map.m"
            continue;
#line 1078 "map.m"
          }
#line 1077 "map.m"
      }
#line 1077 "map.m"
      break;
#line 1077 "map.m"
    }
#line 1075 "map.m"
}

#line 1050 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
#line 1050 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 1050 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1050 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1050 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
#line 1050 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
#line 1050 "map.m"
  MR_Word * mercury__map__HeadVar__5_5)
#line 1050 "map.m"
{
#line 1054 "map.m"
  while (MR_TRUE)
#line 1054 "map.m"
    {
#line 1054 "map.m"
      /* tailcall optimized into a loop */
#line 1054 "map.m"
      {
#line 1054 "map.m"
        MR_bool mercury__map__succeeded;

#line 1054 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "map.m"
          {
#line 1054 "map.m"
            *mercury__map__HeadVar__5_5 = mercury__map__HeadVar__2_2;
#line 1054 "map.m"
            *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
#line 1054 "map.m"
          }
#line 1054 "map.m"
        else
#line 1054 "map.m"
          {
#line 1054 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1054 "map.m"
            MR_Box mercury__map__V_35_35 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 1054 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "map.m"
              {
#line 1055 "map.m"
                *mercury__map__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1055 "map.m"
                *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
#line 1055 "map.m"
              }
#line 1054 "map.m"
            else
#line 1057 "map.m"
              {
#line 1057 "map.m"
                MR_Word mercury__map__Pair0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0)));
#line 1057 "map.m"
                MR_Word mercury__map__Pairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 1057 "map.m"
                MR_Box mercury__map__Key0_21 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 0));
#line 1057 "map.m"
                MR_Word mercury__map__Result_23;
#line 1058 "map.m"
                MR_Box mercury__map__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 1));

#line 1059 "map.m"
                {
#line 1059 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_32, &mercury__map__Result_23, mercury__map__V_35_35, mercury__map__Key0_21);
                }
#line 1064 "map.m"
                if ((mercury__map__Result_23 == (MR_Integer) 1))
#line 1062 "map.m"
                  {
#line 1062 "map.m"
                    /* direct tailcall eliminated */
#line 1062 "map.m"
                    {
#line 1062 "map.m"
                      MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_34_34;

#line 1062 "map.m"
                      mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1062 "map.m"
                    }
#line 1062 "map.m"
                    continue;
#line 1062 "map.m"
                  }
#line 1064 "map.m"
                else
#line 1064 "map.m"
                  if ((mercury__map__Result_23 == (MR_Integer) 0))
#line 1065 "map.m"
                    {
#line 1065 "map.m"
                      /* direct tailcall eliminated */
#line 1065 "map.m"
                      {
#line 1065 "map.m"
                        MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_34_34;
#line 1065 "map.m"
                        MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Pairs0_18;

#line 1065 "map.m"
                        mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1065 "map.m"
                        mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1065 "map.m"
                      }
#line 1065 "map.m"
                      continue;
#line 1065 "map.m"
                    }
#line 1064 "map.m"
                  else
#line 1069 "map.m"
                    {
#line 1069 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevPairs_26_26;

#line 1070 "map.m"
                      {
#line 1070 "map.m"
                        mercury__map__STATE_VARIABLE_RevPairs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "map.m"
                        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 0) = ((MR_Box) (mercury__map__Pair0_17));
#line 1070 "map.m"
                        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevPairs_0_3));
#line 1070 "map.m"
                      }
#line 1071 "map.m"
                      /* direct tailcall eliminated */
#line 1071 "map.m"
                      {
#line 1071 "map.m"
                        MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Pairs0_18;
#line 1071 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_RevPairs_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_RevPairs_26_26;

#line 1071 "map.m"
                        mercury__map__STATE_VARIABLE_RevPairs_0_3 = mercury__map__STATE_VARIABLE_RevPairs_0__tmp_copy_3;
#line 1071 "map.m"
                        mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1071 "map.m"
                      }
#line 1071 "map.m"
                      continue;
#line 1069 "map.m"
                    }
#line 1057 "map.m"
              }
#line 1054 "map.m"
          }
#line 1054 "map.m"
      }
#line 1054 "map.m"
      break;
#line 1054 "map.m"
    }
#line 1050 "map.m"
}

#line 78 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 78 "map.m"
  MR_Word mercury__map__V_10_10,
#line 78 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 78 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 78 "map.m"
  MR_Word mercury__map__Map_4,
#line 78 "map.m"
  MR_Word mercury__map__K_5,
#line 78 "map.m"
  MR_Box * mercury__map__V_6)
#line 78 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 78 "map.m"
}

#line 78 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 78 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 78 "map.m"
  MR_Word mercury__map__Map_4,
#line 78 "map.m"
  MR_Integer mercury__map__K_5,
#line 78 "map.m"
  MR_Box * mercury__map__V_6)
#line 78 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 78 "map.m"
}

#line 77 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 77 "map.m"
  MR_Word mercury__map__V_10_10,
#line 77 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 77 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 77 "map.m"
  MR_Word mercury__map__M_4,
#line 77 "map.m"
  MR_Word mercury__map__K_5,
#line 77 "map.m"
  MR_Box * mercury__map__V_6)
#line 77 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 77 "map.m"
}

#line 77 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 77 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 77 "map.m"
  MR_Word mercury__map__M_4,
#line 77 "map.m"
  MR_Integer mercury__map__K_5,
#line 77 "map.m"
  MR_Box * mercury__map__V_6)
#line 77 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 77 "map.m"
}

#line 83 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 83 "map.m"
  MR_Word mercury__map__V_12_12,
#line 83 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 83 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 83 "map.m"
  MR_Word mercury__map__Map_4,
#line 83 "map.m"
  MR_Word mercury__map__K_5,
#line 83 "map.m"
  MR_Box * mercury__map__V_6)
#line 83 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_12_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
#line 838 "map.m"
          return;
        }
#line 838 "map.m"
      }
#line 837 "map.m"
  }
#line 83 "map.m"
}

#line 83 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(
#line 83 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 83 "map.m"
  MR_Word mercury__map__Map_4,
#line 83 "map.m"
  MR_Integer mercury__map__K_5,
#line 83 "map.m"
  MR_Box * mercury__map__V_6)
#line 83 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
#line 838 "map.m"
          return;
        }
#line 838 "map.m"
      }
#line 837 "map.m"
  }
#line 83 "map.m"
}

#line 82 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 82 "map.m"
  MR_Word mercury__map__V_10_10,
#line 82 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 82 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 82 "map.m"
  MR_Word mercury__map__M_4,
#line 82 "map.m"
  MR_Word mercury__map__K_5)
#line 82 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__V_6;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_14;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_14);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_14;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        }
#line 838 "map.m"
      }
#line 837 "map.m"
    return mercury__map__V_6;
#line 837 "map.m"
  }
#line 82 "map.m"
}

#line 82 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 82 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 82 "map.m"
  MR_Word mercury__map__M_4,
#line 82 "map.m"
  MR_Integer mercury__map__K_5)
#line 82 "map.m"
{
#line 832 "map.m"
  {
#line 832 "map.m"
    MR_bool mercury__map__succeeded;
#line 832 "map.m"
    MR_Box mercury__map__V_6;
#line 832 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_12;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_12;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        }
#line 838 "map.m"
      }
#line 832 "map.m"
    return mercury__map__V_6;
#line 832 "map.m"
  }
#line 82 "map.m"
}

#line 127 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 127 "map.m"
  MR_Word mercury__map__V_14_14,
#line 127 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 127 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 127 "map.m"
  MR_Word mercury__map__K_5,
#line 127 "map.m"
  MR_Box mercury__map__V_6,
#line 127 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 127 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 127 "map.m"
{
#line 873 "map.m"
  {
#line 873 "map.m"
    MR_bool mercury__map__succeeded;
#line 873 "map.m"
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_9;

#line 873 "map.m"
    {
#line 873 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_8, &mercury__map__conv0_STATE_VARIABLE_Map_9);
    }
#line 873 "map.m"
    if (mercury__map__succeeded)
#line 873 "map.m"
      {
#line 873 "map.m"
        *mercury__map__STATE_VARIABLE_Map_9 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_9;
#line 873 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 873 "map.m"
      }
#line 873 "map.m"
    return mercury__map__succeeded;
#line 873 "map.m"
  }
#line 127 "map.m"
}

#line 127 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 127 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 127 "map.m"
  MR_Integer mercury__map__K_5,
#line 127 "map.m"
  MR_Box mercury__map__V_6,
#line 127 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 127 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 127 "map.m"
{
#line 873 "map.m"
  {
#line 873 "map.m"
    MR_bool mercury__map__succeeded;
#line 873 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 873 "map.m"
    {
#line 873 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 873 "map.m"
    return mercury__map__succeeded;
#line 873 "map.m"
  }
#line 127 "map.m"
}

#line 133 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 133 "map.m"
  MR_Word mercury__map__V_17_17,
#line 133 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 133 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 133 "map.m"
  MR_Word mercury__map__K_5,
#line 133 "map.m"
  MR_Box mercury__map__V_6,
#line 133 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 133 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 133 "map.m"
{
#line 881 "map.m"
  {
#line 881 "map.m"
    MR_bool mercury__map__succeeded;
#line 881 "map.m"
    MR_Word mercury__map__NewMap_8;
#line 879 "map.m"
    MR_Word mercury__map__conv0_NewMap_8;

#line 879 "map.m"
    {
#line 879 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__conv0_NewMap_8);
    }
#line 879 "map.m"
    if (mercury__map__succeeded)
#line 879 "map.m"
      {
#line 879 "map.m"
        mercury__map__NewMap_8 = (MR_Word) mercury__map__conv0_NewMap_8;
#line 879 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 879 "map.m"
      }
#line 881 "map.m"
    if (mercury__map__succeeded)
#line 880 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 881 "map.m"
    else
#line 882 "map.m"
      {
#line 882 "map.m"
        MR_Box mercury__map__V_15_15;

#line 882 "map.m"
        {
#line 882 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
#line 882 "map.m"
          return;
        }
#line 882 "map.m"
      }
#line 881 "map.m"
  }
#line 133 "map.m"
}

#line 133 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 133 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 133 "map.m"
  MR_Integer mercury__map__K_5,
#line 133 "map.m"
  MR_Box mercury__map__V_6,
#line 133 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 133 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 133 "map.m"
{
#line 881 "map.m"
  {
#line 881 "map.m"
    MR_bool mercury__map__succeeded;
#line 881 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 881 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 879 "map.m"
    {
#line 879 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 881 "map.m"
    if (mercury__map__succeeded)
#line 880 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 881 "map.m"
    else
#line 882 "map.m"
      {
#line 882 "map.m"
        MR_Box mercury__map__V_15_15;

#line 882 "map.m"
        {
#line 882 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
#line 882 "map.m"
          return;
        }
#line 882 "map.m"
      }
#line 881 "map.m"
  }
#line 133 "map.m"
}

#line 199 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 199 "map.m"
  MR_Word mercury__map__V_14_14,
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 199 "map.m"
  MR_Word mercury__map__K_5,
#line 199 "map.m"
  MR_Box mercury__map__V_6,
#line 199 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 199 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 199 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_14_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 962 "map.m"
      return;
    }
#line 962 "map.m"
  }
#line 199 "map.m"
}

#line 199 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 199 "map.m"
  MR_Integer mercury__map__K_5,
#line 199 "map.m"
  MR_Box mercury__map__V_6,
#line 199 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 199 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 199 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;
#line 962 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 962 "map.m"
      return;
    }
#line 962 "map.m"
  }
#line 199 "map.m"
}

#line 164 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 164 "map.m"
  MR_Word mercury__map__V_14_14,
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 164 "map.m"
  MR_Word mercury__map__K_5,
#line 164 "map.m"
  MR_Box mercury__map__V_6,
#line 164 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 164 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 164 "map.m"
{
#line 929 "map.m"
  {
#line 929 "map.m"
    MR_bool mercury__map__succeeded;

#line 929 "map.m"
    {
#line 929 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_14_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 929 "map.m"
    return mercury__map__succeeded;
#line 929 "map.m"
  }
#line 164 "map.m"
}

#line 164 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 164 "map.m"
  MR_Integer mercury__map__K_5,
#line 164 "map.m"
  MR_Box mercury__map__V_6,
#line 164 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 164 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 164 "map.m"
{
#line 929 "map.m"
  {
#line 929 "map.m"
    MR_bool mercury__map__succeeded;

#line 929 "map.m"
    {
#line 929 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 929 "map.m"
    return mercury__map__succeeded;
#line 929 "map.m"
  }
#line 164 "map.m"
}

#line 170 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 170 "map.m"
  MR_Word mercury__map__V_17_17,
#line 170 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 170 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 170 "map.m"
  MR_Word mercury__map__K_5,
#line 170 "map.m"
  MR_Box mercury__map__V_6,
#line 170 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 170 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 170 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_17_17, mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_15_15;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
#line 938 "map.m"
          return;
        }
#line 938 "map.m"
      }
#line 937 "map.m"
  }
#line 170 "map.m"
}

#line 170 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 170 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 170 "map.m"
  MR_Integer mercury__map__K_5,
#line 170 "map.m"
  MR_Box mercury__map__V_6,
#line 170 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 170 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 170 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_15_15;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
#line 938 "map.m"
          return;
        }
#line 938 "map.m"
      }
#line 937 "map.m"
  }
#line 170 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_5_p_0(
#line 178 "map.m"
  MR_Word mercury__map__V_16_16,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Word mercury__map__K_6,
#line 178 "map.m"
  MR_Box mercury__map__V_7,
#line 178 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 178 "map.m"
{
#line 942 "map.m"
  {
#line 942 "map.m"
    MR_bool mercury__map__succeeded;
#line 942 "map.m"
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_11;

#line 942 "map.m"
    {
#line 942 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__conv0_STATE_VARIABLE_Map_11);
    }
#line 942 "map.m"
    *mercury__map__STATE_VARIABLE_Map_11 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_11;
#line 942 "map.m"
  }
#line 178 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_5_p_0(
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Integer mercury__map__K_6,
#line 178 "map.m"
  MR_Box mercury__map__V_7,
#line 178 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 178 "map.m"
{
#line 942 "map.m"
  {
#line 942 "map.m"
    MR_bool mercury__map__succeeded;
#line 942 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 942 "map.m"
    {
#line 942 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
#line 942 "map.m"
      return;
    }
#line 942 "map.m"
  }
#line 178 "map.m"
}

#line 301 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 301 "map.m"
  MR_Word mercury__map__V_10_10,
#line 301 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 301 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 301 "map.m"
  MR_Word mercury__map__M1_4,
#line 301 "map.m"
  MR_Word mercury__map__M2_5)
#line 301 "map.m"
{
#line 1143 "map.m"
  {
#line 1143 "map.m"
    MR_bool mercury__map__succeeded;
#line 1143 "map.m"
    MR_Word mercury__map__M3_6;
#line 1143 "map.m"
    MR_Word mercury__map__AssocList_14;
#line 1143 "map.m"
    MR_Word mercury__map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    MR_Word mercury__map__conv0_AssocList_14;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_Word) mercury__map__M2_5, (MR_Word) mercury__map__V_5_20, &mercury__map__conv0_AssocList_14);
    }
#line 86 "tree234.opt"
    mercury__map__AssocList_14 = (MR_Word) mercury__map__conv0_AssocList_14;
#line 1147 "map.m"
    {
#line 1147 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_14, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1143 "map.m"
    return mercury__map__M3_6;
#line 1143 "map.m"
  }
#line 301 "map.m"
}

#line 302 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 302 "map.m"
  MR_Word mercury__map__V_11_11,
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 302 "map.m"
  MR_Word mercury__map__Map0_4,
#line 302 "map.m"
  MR_Word mercury__map__Map1_5,
#line 302 "map.m"
  MR_Word * mercury__map__Map_6)
#line 302 "map.m"
{
#line 1145 "map.m"
  {
#line 1145 "map.m"
    MR_bool mercury__map__succeeded;
#line 1145 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1145 "map.m"
    MR_Word mercury__map__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    MR_Word mercury__map__conv0_AssocList_7;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_Word) mercury__map__Map1_5, (MR_Word) mercury__map__V_5_16, &mercury__map__conv0_AssocList_7);
    }
#line 86 "tree234.opt"
    mercury__map__AssocList_7 = (MR_Word) mercury__map__conv0_AssocList_7;
#line 1147 "map.m"
    {
#line 1147 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_11_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
#line 1147 "map.m"
      return;
    }
#line 1145 "map.m"
  }
#line 302 "map.m"
}

#line 317 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 317 "map.m"
  MR_Word mercury__map__V_10_10,
#line 317 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 317 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 317 "map.m"
  MR_Word mercury__map__M1_4,
#line 317 "map.m"
  MR_Word mercury__map__S_5)
#line 317 "map.m"
{
#line 1181 "map.m"
  {
#line 1181 "map.m"
    MR_bool mercury__map__succeeded;
#line 1181 "map.m"
    MR_Word mercury__map__M2_6;
#line 1181 "map.m"
    MR_Word mercury__map__Keys_14 = (MR_Word) mercury__map__S_5;
#line 1181 "map.m"
    MR_Word mercury__map__NewMap0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1189 "map.m"
    {
#line 1189 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_14, mercury__map__M1_4, mercury__map__NewMap0_15, &mercury__map__M2_6);
    }
#line 1181 "map.m"
    return mercury__map__M2_6;
#line 1181 "map.m"
  }
#line 317 "map.m"
}

#line 318 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 318 "map.m"
  MR_Word mercury__map__V_12_12,
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 318 "map.m"
  MR_Word mercury__map__Original_4,
#line 318 "map.m"
  MR_Word mercury__map__KeySet_5,
#line 318 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 318 "map.m"
{
#line 1186 "map.m"
  {
#line 1186 "map.m"
    MR_bool mercury__map__succeeded;
#line 1186 "map.m"
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
#line 1186 "map.m"
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1189 "map.m"
    {
#line 1189 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_12_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
#line 1189 "map.m"
      return;
    }
#line 1186 "map.m"
  }
#line 318 "map.m"
}

#line 323 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 323 "map.m"
  MR_Word mercury__map__V_10_10,
#line 323 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 323 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 323 "map.m"
  MR_Word mercury__map__M1_4,
#line 323 "map.m"
  MR_Word mercury__map__S_5)
#line 323 "map.m"
{
#line 1184 "map.m"
  {
#line 1184 "map.m"
    MR_bool mercury__map__succeeded;
#line 1184 "map.m"
    MR_Word mercury__map__M2_6;
#line 1184 "map.m"
    MR_Word mercury__map__NewMap0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1193 "map.m"
    {
#line 1193 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_14, &mercury__map__M2_6);
    }
#line 1184 "map.m"
    return mercury__map__M2_6;
#line 1184 "map.m"
  }
#line 323 "map.m"
}

#line 324 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 324 "map.m"
  MR_Word mercury__map__V_11_11,
#line 324 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 324 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 324 "map.m"
  MR_Word mercury__map__Original_4,
#line 324 "map.m"
  MR_Word mercury__map__Keys_5,
#line 324 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 324 "map.m"
{
#line 1191 "map.m"
  {
#line 1191 "map.m"
    MR_bool mercury__map__succeeded;
#line 1191 "map.m"
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1193 "map.m"
    {
#line 1193 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_11_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
#line 1193 "map.m"
      return;
    }
#line 1191 "map.m"
  }
#line 324 "map.m"
}

#line 696 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 696 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 696 "map.m"
  MR_Integer mercury__map__Key_4,
#line 696 "map.m"
  MR_Word mercury__map__Map_5,
#line 696 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 696 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 696 "map.m"
}

#line 696 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 696 "map.m"
  MR_Word mercury__map__V_9_9,
#line 696 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 696 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 696 "map.m"
  MR_Word mercury__map__Key_4,
#line 696 "map.m"
  MR_Word mercury__map__Map_5,
#line 696 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 696 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_9_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 696 "map.m"
}

#line 700 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 700 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 700 "map.m"
  MR_Integer mercury__map__Key_4,
#line 700 "map.m"
  MR_Word mercury__map__Map_5)
#line 700 "map.m"
{
#line 1470 "map.m"
  {
#line 1470 "map.m"
    MR_bool mercury__map__succeeded;
#line 1470 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 1470 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_15;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_15);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_15;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
        }
#line 838 "map.m"
      }
#line 1470 "map.m"
    return mercury__map__HeadVar__3_3;
#line 1470 "map.m"
  }
#line 700 "map.m"
}

#line 700 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 700 "map.m"
  MR_Word mercury__map__V_9_9,
#line 700 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 700 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 700 "map.m"
  MR_Word mercury__map__Key_4,
#line 700 "map.m"
  MR_Word mercury__map__Map_5)
#line 700 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_17;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_9_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_17);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_17;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
        }
#line 838 "map.m"
      }
#line 837 "map.m"
    return mercury__map__HeadVar__3_3;
#line 837 "map.m"
  }
#line 700 "map.m"
}

#line 706 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
#line 706 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 706 "map.m"
  MR_Integer mercury__map__Key_5,
#line 706 "map.m"
  MR_Word mercury__map__Map_6,
#line 706 "map.m"
  MR_Box mercury__map__Value_7)
#line 706 "map.m"
{
#line 1472 "map.m"
  {
#line 1472 "map.m"
    MR_bool mercury__map__succeeded;
#line 1472 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1472 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
#line 1472 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1472 "map.m"
  }
#line 706 "map.m"
}

#line 706 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
#line 706 "map.m"
  MR_Word mercury__map__V_11_11,
#line 706 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 706 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 706 "map.m"
  MR_Word mercury__map__Key_5,
#line 706 "map.m"
  MR_Word mercury__map__Map_6,
#line 706 "map.m"
  MR_Box mercury__map__Value_7)
#line 706 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;
#line 962 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 962 "map.m"
    MR_Word mercury__map__conv0_HeadVar__4_4;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_HeadVar__4_4);
    }
#line 962 "map.m"
    mercury__map__HeadVar__4_4 = (MR_Word) mercury__map__conv0_HeadVar__4_4;
#line 962 "map.m"
    return mercury__map__HeadVar__4_4;
#line 962 "map.m"
  }
#line 706 "map.m"
}

#line 710 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 710 "map.m"
  MR_Integer mercury__map__Key_5,
#line 710 "map.m"
  MR_Word mercury__map__Map_6,
#line 710 "map.m"
  MR_Box mercury__map__Value_7)
#line 710 "map.m"
{
#line 1474 "map.m"
  {
#line 1474 "map.m"
    MR_bool mercury__map__succeeded;
#line 1474 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1474 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_19;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_22_22;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
        }
#line 938 "map.m"
      }
#line 1474 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1474 "map.m"
  }
#line 710 "map.m"
}

#line 710 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
#line 710 "map.m"
  MR_Word mercury__map__V_11_11,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 710 "map.m"
  MR_Word mercury__map__Key_5,
#line 710 "map.m"
  MR_Word mercury__map__Map_6,
#line 710 "map.m"
  MR_Box mercury__map__Value_7)
#line 710 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_21;
#line 935 "map.m"
    MR_Word mercury__map__conv0_NewMap_21;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_NewMap_21);
    }
#line 935 "map.m"
    if (mercury__map__succeeded)
#line 935 "map.m"
      {
#line 935 "map.m"
        mercury__map__NewMap_21 = (MR_Word) mercury__map__conv0_NewMap_21;
#line 935 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 935 "map.m"
      }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_21;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_24_24;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
        }
#line 938 "map.m"
      }
#line 937 "map.m"
    return mercury__map__HeadVar__4_4;
#line 937 "map.m"
  }
#line 710 "map.m"
}

#line 1149 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 1149 "map.m"
  MR_Word mercury__map__V_19_19,
#line 1149 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 1149 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 1149 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1149 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 1149 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 1149 "map.m"
{
#line 1153 "map.m"
  while (MR_TRUE)
#line 1153 "map.m"
    {
#line 1153 "map.m"
      /* tailcall optimized into a loop */
#line 1153 "map.m"
      {
#line 1153 "map.m"
        MR_bool mercury__map__succeeded;

#line 1153 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1153 "map.m"
        else
#line 1154 "map.m"
          {
#line 1154 "map.m"
            MR_Word mercury__map__K_7;
#line 1154 "map.m"
            MR_Box mercury__map__V_8;
#line 1154 "map.m"
            MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1154 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1154 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 1154 "map.m"
            mercury__map__K_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0)));
#line 1154 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 962 "map.m"
            {
#line 962 "map.m"
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_19_19, mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 1156 "map.m"
            /* direct tailcall eliminated */
#line 1156 "map.m"
            {
#line 1156 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_9;
#line 1156 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1156 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1156 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1156 "map.m"
            }
#line 1156 "map.m"
            continue;
#line 1154 "map.m"
          }
#line 1153 "map.m"
      }
#line 1153 "map.m"
      break;
#line 1153 "map.m"
    }
#line 1149 "map.m"
}

#line 1165 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_108_97_114_103_101_95_109_97_112_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 1165 "map.m"
  MR_Word mercury__map__V_16_16,
#line 1165 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 1165 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 1165 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1165 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1165 "map.m"
  MR_Word * mercury__map__Map_3)
#line 1165 "map.m"
{
#line 1169 "map.m"
  while (MR_TRUE)
#line 1169 "map.m"
    {
#line 1169 "map.m"
      /* tailcall optimized into a loop */
#line 1169 "map.m"
      {
#line 1169 "map.m"
        MR_bool mercury__map__succeeded;

#line 1169 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "map.m"
          *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
#line 1169 "map.m"
        else
#line 1170 "map.m"
          {
#line 1170 "map.m"
            MR_Word mercury__map__K_5;
#line 1170 "map.m"
            MR_Box mercury__map__V_6;
#line 1170 "map.m"
            MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1170 "map.m"
            MR_Word mercury__map__Map2_11;
#line 1170 "map.m"
            MR_Word mercury__map__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1173 "map.m"
            MR_Word mercury__map__Map1_10;
#line 873 "map.m"
            MR_Word mercury__map__conv0_Map1_10;

#line 1170 "map.m"
            mercury__map__K_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 0)));
#line 1170 "map.m"
            mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 1));
#line 873 "map.m"
            {
#line 873 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__HeadVar__2_2, &mercury__map__conv0_Map1_10);
            }
#line 873 "map.m"
            if (mercury__map__succeeded)
#line 873 "map.m"
              {
#line 873 "map.m"
                mercury__map__Map1_10 = (MR_Word) mercury__map__conv0_Map1_10;
#line 873 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 873 "map.m"
              }
#line 1173 "map.m"
            if (mercury__map__succeeded)
#line 1172 "map.m"
              mercury__map__Map2_11 = mercury__map__Map1_10;
#line 1173 "map.m"
            else
#line 1174 "map.m"
              mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
#line 1176 "map.m"
            /* direct tailcall eliminated */
#line 1176 "map.m"
            {
#line 1176 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_7;
#line 1176 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Map2_11;

#line 1176 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1176 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1176 "map.m"
            }
#line 1176 "map.m"
            continue;
#line 1170 "map.m"
          }
#line 1169 "map.m"
      }
#line 1169 "map.m"
      break;
#line 1169 "map.m"
    }
#line 1165 "map.m"
}

#line 1195 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 1195 "map.m"
  MR_Word mercury__map__V_21_21,
#line 1195 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 1195 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1195 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
#line 1195 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
#line 1195 "map.m"
{
#line 1199 "map.m"
  while (MR_TRUE)
#line 1199 "map.m"
    {
#line 1199 "map.m"
      /* tailcall optimized into a loop */
#line 1199 "map.m"
      {
#line 1199 "map.m"
        MR_bool mercury__map__succeeded;

#line 1199 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "map.m"
          *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1199 "map.m"
        else
#line 1200 "map.m"
          {
#line 1200 "map.m"
            MR_Word mercury__map__K_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1200 "map.m"
            MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1200 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_New_16_16;
#line 1203 "map.m"
            MR_Box mercury__map__V_13;

#line 829 "map.m"
            {
#line 829 "map.m"
              mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_21_21, mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
            }
#line 1203 "map.m"
            if (mercury__map__succeeded)
#line 881 "map.m"
              {
#line 881 "map.m"
                MR_Word mercury__map__NewMap_31;
#line 879 "map.m"
                MR_Word mercury__map__conv0_NewMap_31;

#line 879 "map.m"
                {
#line 879 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, ((MR_Box) (mercury__map__K_9)), mercury__map__V_13, (MR_Word) mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__conv0_NewMap_31);
                }
#line 879 "map.m"
                if (mercury__map__succeeded)
#line 879 "map.m"
                  {
#line 879 "map.m"
                    mercury__map__NewMap_31 = (MR_Word) mercury__map__conv0_NewMap_31;
#line 879 "map.m"
                    mercury__map__succeeded = MR_TRUE;
#line 879 "map.m"
                  }
#line 881 "map.m"
                if (mercury__map__succeeded)
#line 880 "map.m"
                  mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_31;
#line 881 "map.m"
                else
#line 882 "map.m"
                  {
#line 882 "map.m"
                    MR_Box mercury__map__V_34_34;

#line 882 "map.m"
                    {
#line 882 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_9)));
#line 882 "map.m"
                      return;
                    }
#line 882 "map.m"
                  }
#line 881 "map.m"
              }
#line 1203 "map.m"
            else
#line 1202 "map.m"
              mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1206 "map.m"
            /* direct tailcall eliminated */
#line 1206 "map.m"
            {
#line 1206 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Ks_10;
#line 1206 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_New_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_New_16_16;

#line 1206 "map.m"
              mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_0__tmp_copy_3;
#line 1206 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1206 "map.m"
            }
#line 1206 "map.m"
            continue;
#line 1200 "map.m"
          }
#line 1199 "map.m"
      }
#line 1199 "map.m"
      break;
#line 1199 "map.m"
    }
#line 1195 "map.m"
}

#line 955 "map.m"
static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__955__1_4_p_0(
#line 955 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 955 "map.m"
  MR_Word mercury__map__F_5,
#line 955 "map.m"
  MR_Box mercury__map__HeadVar__3_14,
#line 955 "map.m"
  MR_Box * mercury__map__HeadVar__4_15)
#line 955 "map.m"
{
#line 955 "map.m"
  {
#line 955 "map.m"
    MR_bool mercury__map__succeeded;
#line 955 "map.m"
    MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__F_5, (MR_Integer) 1)));

#line 955 "map.m"
    {
#line 955 "map.m"
      *mercury__map__HeadVar__4_15 = mercury__map__func_0(((MR_Box) mercury__map__F_5), mercury__map__HeadVar__3_14);
    }
#line 955 "map.m"
  }
#line 955 "map.m"
}

#line 725 "map.m"
void MR_CALL 
mercury__map____Compare____map_2_0(
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 725 "map.m"
  MR_Word * mercury__map__HeadVar__1_1,
#line 725 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 725 "map.m"
  MR_Word mercury__map__HeadVar__3_3)
#line 725 "map.m"
{
#line 725 "map.m"
  {
#line 725 "map.m"
    MR_bool mercury__map__succeeded;
#line 725 "map.m"
    MR_Word mercury__map__Cast_HeadVar1_4 = mercury__map__HeadVar__2_2;
#line 725 "map.m"
    MR_Word mercury__map__Cast_HeadVar2_5 = mercury__map__HeadVar__3_3;

#line 725 "map.m"
    {
#line 725 "map.m"
      mercury__tree234____Compare____tree234_2_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__HeadVar__1_1, mercury__map__Cast_HeadVar1_4, mercury__map__Cast_HeadVar2_5);
#line 725 "map.m"
      return;
    }
#line 725 "map.m"
  }
#line 725 "map.m"
}

#line 725 "map.m"
MR_bool MR_CALL 
mercury__map____Unify____map_2_0(
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 725 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 725 "map.m"
  MR_Word mercury__map__HeadVar__2_2)
#line 725 "map.m"
{
#line 725 "map.m"
  {
#line 725 "map.m"
    MR_bool mercury__map__succeeded;
#line 725 "map.m"
    MR_Word mercury__map__Cast_HeadVar1_3 = mercury__map__HeadVar__1_1;
#line 725 "map.m"
    MR_Word mercury__map__Cast_HeadVar2_4 = mercury__map__HeadVar__2_2;

#line 725 "map.m"
    {
#line 725 "map.m"
      return mercury__map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Cast_HeadVar1_3, mercury__map__Cast_HeadVar2_4);
    }
#line 725 "map.m"
    return mercury__map__succeeded;
#line 725 "map.m"
  }
#line 725 "map.m"
}

#line 1457 "map.m"
void MR_CALL 
mercury__map__reverse_map_2_4_p_0(
#line 1457 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 1457 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 1457 "map.m"
  MR_Box mercury__map__Key_5,
#line 1457 "map.m"
  MR_Box mercury__map__Value_6,
#line 1457 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevMap_0_10,
#line 1457 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevMap_11)
#line 1457 "map.m"
{
#line 1464 "map.m"
  {
#line 1464 "map.m"
    MR_bool mercury__map__succeeded;
#line 1464 "map.m"
    MR_Word mercury__map__TypeInfo_18_18;
#line 1464 "map.m"
    MR_Word mercury__map__Keys0_8;
#line 1461 "map.m"
    MR_Word mercury__map__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 829 "map.m"
    MR_Box mercury__map__conv0_Keys0_8;

#line 5306 "map.c"
    {
#line 5308 "map.c"
      mercury__map__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5310 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_17_17));
#line 5312 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
#line 5314 "map.c"
    }
#line 829 "map.m"
    {
#line 829 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, mercury__map__Value_6, &mercury__map__conv0_Keys0_8);
    }
#line 829 "map.m"
    if (mercury__map__succeeded)
#line 829 "map.m"
      {
#line 829 "map.m"
        mercury__map__Keys0_8 = ((MR_Word) mercury__map__conv0_Keys0_8);
#line 829 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 829 "map.m"
      }
#line 1464 "map.m"
    if (mercury__map__succeeded)
#line 1462 "map.m"
      {
#line 1462 "map.m"
        MR_Word mercury__map__Keys_9;
#line 1462 "map.m"
        MR_Word mercury__map__List0_5_30 = (MR_Word) mercury__map__Keys0_8;
#line 1462 "map.m"
        MR_Word mercury__map__List_6_31;
#line 937 "map.m"
        MR_Word mercury__map__NewMap_37;
#line 935 "map.m"
        MR_Word mercury__map__conv1_NewMap_37;

#line 68 "set_ordlist.opt"
        {
#line 68 "set_ordlist.opt"
          mercury__set_ordlist__insert_2_3_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__List0_5_30, mercury__map__Key_5, &mercury__map__List_6_31);
        }
#line 67 "set_ordlist.opt"
        mercury__map__Keys_9 = (MR_Word) mercury__map__List_6_31;
#line 935 "map.m"
        {
#line 935 "map.m"
          mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, mercury__map__Value_6, ((MR_Box) (mercury__map__Keys_9)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv1_NewMap_37);
        }
#line 935 "map.m"
        if (mercury__map__succeeded)
#line 935 "map.m"
          {
#line 935 "map.m"
            mercury__map__NewMap_37 = (MR_Word) mercury__map__conv1_NewMap_37;
#line 935 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 935 "map.m"
          }
#line 937 "map.m"
        if (mercury__map__succeeded)
#line 936 "map.m"
          *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_37;
#line 937 "map.m"
        else
#line 938 "map.m"
          {
#line 938 "map.m"
            MR_Word mercury__map__V_40_40;

#line 938 "map.m"
            {
#line 938 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_String) "map.det_update: key not found", mercury__map__Value_6);
#line 938 "map.m"
              return;
            }
#line 938 "map.m"
          }
#line 1462 "map.m"
      }
#line 1464 "map.m"
    else
#line 1465 "map.m"
      {
#line 1465 "map.m"
        MR_Word mercury__map__TypeCtorInfo_21_21;
#line 1465 "map.m"
        MR_Word mercury__map__TypeInfo_22_22;
#line 1465 "map.m"
        MR_Word mercury__map__V_13_13;
#line 1465 "map.m"
        MR_Word mercury__map__V_4_46;
#line 1465 "map.m"
        MR_Word mercury__map__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "map.m"
        MR_Word mercury__map__NewMap_54;
#line 879 "map.m"
        MR_Word mercury__map__conv2_NewMap_54;

#line 42 "set_ordlist.opt"
        {
#line 42 "set_ordlist.opt"
          mercury__map__V_4_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__map__V_4_46, 0) = mercury__map__Key_5;
#line 42 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__map__V_4_46, 1) = ((MR_Box) (mercury__map__V_5_47));
#line 42 "set_ordlist.opt"
        }
#line 41 "set_ordlist.opt"
        mercury__map__V_13_13 = (MR_Word) mercury__map__V_4_46;
#line 5421 "map.c"
        mercury__map__TypeCtorInfo_21_21 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 5423 "map.c"
        {
#line 5425 "map.c"
          mercury__map__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5427 "map.c"
          MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_21_21));
#line 5429 "map.c"
          MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
#line 5431 "map.c"
        }
#line 879 "map.m"
        {
#line 879 "map.m"
          mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, mercury__map__Value_6, ((MR_Box) (mercury__map__V_13_13)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv2_NewMap_54);
        }
#line 879 "map.m"
        if (mercury__map__succeeded)
#line 879 "map.m"
          {
#line 879 "map.m"
            mercury__map__NewMap_54 = (MR_Word) mercury__map__conv2_NewMap_54;
#line 879 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 879 "map.m"
          }
#line 881 "map.m"
        if (mercury__map__succeeded)
#line 880 "map.m"
          *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_54;
#line 881 "map.m"
        else
#line 882 "map.m"
          {
#line 882 "map.m"
            MR_Word mercury__map__V_57_57;

#line 882 "map.m"
            {
#line 882 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, (MR_String) "map.det_insert: key already present", mercury__map__Value_6);
#line 882 "map.m"
              return;
            }
#line 882 "map.m"
          }
#line 1465 "map.m"
      }
#line 1464 "map.m"
  }
#line 1457 "map.m"
}

#line 1413 "map.m"
void MR_CALL 
mercury__map__union_2_5_p_1(
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1413 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1413 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1413 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1413 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1413 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1413 "map.m"
{
#line 1419 "map.m"
  while (MR_TRUE)
#line 1419 "map.m"
    {
#line 1419 "map.m"
      /* tailcall optimized into a loop */
#line 1419 "map.m"
      {
#line 1419 "map.m"
        MR_bool mercury__map__succeeded;

#line 1419 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1417 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1419 "map.m"
          else
#line 1426 "map.m"
            {
#line 1426 "map.m"
              mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
#line 1426 "map.m"
              return;
            }
#line 1419 "map.m"
        else
#line 1419 "map.m"
          {
#line 1419 "map.m"
            MR_Word mercury__map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1419 "map.m"
            MR_Word mercury__map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "map.m"
              {
#line 1422 "map.m"
                mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
#line 1422 "map.m"
                return;
              }
#line 1419 "map.m"
            else
#line 1428 "map.m"
              {
#line 1428 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 0));
#line 1428 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 1));
#line 1428 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1428 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1428 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1428 "map.m"
                MR_Word mercury__map__R_20;
#line 1428 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1429 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1429 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1430 "map.m"
                {
#line 1430 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_34, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1436 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1437 "map.m"
                  {
#line 1437 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 881 "map.m"
                    MR_Word mercury__map__NewMap_43;

#line 879 "map.m"
                    {
#line 879 "map.m"
                      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value1_15, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_43);
                    }
#line 881 "map.m"
                    if (mercury__map__succeeded)
#line 880 "map.m"
                      mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_43;
#line 881 "map.m"
                    else
#line 882 "map.m"
                      {
#line 882 "map.m"
                        MR_Box mercury__map__V_46_46;

#line 882 "map.m"
                        {
#line 882 "map.m"
                          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                          return;
                        }
#line 882 "map.m"
                      }
#line 1439 "map.m"
                    /* direct tailcall eliminated */
#line 1439 "map.m"
                    {
#line 1439 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1439 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1439 "map.m"
                      mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1439 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1439 "map.m"
                    }
#line 1439 "map.m"
                    continue;
#line 1437 "map.m"
                  }
#line 1436 "map.m"
                else
#line 1436 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1432 "map.m"
                    {
#line 1432 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1432 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_30_30;
#line 1433 "map.m"
                      void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_52;

#line 1433 "map.m"
                      {
#line 1433 "map.m"
                        mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_52);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_30_30 = mercury__map__NewMap_52;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_55_55;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1435 "map.m"
                      /* direct tailcall eliminated */
#line 1435 "map.m"
                      {
#line 1435 "map.m"
                        MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1435 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1435 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_30_30;

#line 1435 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1435 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1435 "map.m"
                        mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1435 "map.m"
                      }
#line 1435 "map.m"
                      continue;
#line 1432 "map.m"
                    }
#line 1436 "map.m"
                  else
#line 1441 "map.m"
                    {
#line 1441 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_26_26;
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_61;

#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key2_17, mercury__map__Value2_18, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_61);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_26_26 = mercury__map__NewMap_61;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_64_64;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key2_17);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1443 "map.m"
                      /* direct tailcall eliminated */
#line 1443 "map.m"
                      {
#line 1443 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1443 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_26_26;

#line 1443 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1443 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1443 "map.m"
                      }
#line 1443 "map.m"
                      continue;
#line 1441 "map.m"
                    }
#line 1428 "map.m"
              }
#line 1419 "map.m"
          }
#line 1419 "map.m"
      }
#line 1419 "map.m"
      break;
#line 1419 "map.m"
    }
#line 1413 "map.m"
}

#line 1412 "map.m"
MR_bool MR_CALL 
mercury__map__union_2_5_p_0(
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_34,
#line 1412 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_35,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1412 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1412 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1412 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1412 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1412 "map.m"
{
#line 1419 "map.m"
  while (MR_TRUE)
#line 1419 "map.m"
    {
#line 1419 "map.m"
      /* tailcall optimized into a loop */
#line 1419 "map.m"
      {
#line 1419 "map.m"
        MR_bool mercury__map__succeeded;

#line 1419 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "map.m"
          {
#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1417 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1419 "map.m"
            else
#line 1426 "map.m"
              {
#line 1426 "map.m"
                mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
              }
#line 1419 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1419 "map.m"
          }
#line 1419 "map.m"
        else
#line 1419 "map.m"
          {
#line 1419 "map.m"
            MR_Word mercury__map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1419 "map.m"
            MR_Word mercury__map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1419 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "map.m"
              {
#line 1422 "map.m"
                {
#line 1422 "map.m"
                  mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_Common_0_22, mercury__map__STATE_VARIABLE_Common_23);
                }
#line 1422 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1422 "map.m"
              }
#line 1419 "map.m"
            else
#line 1428 "map.m"
              {
#line 1428 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 0));
#line 1428 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_37_37, (MR_Integer) 1));
#line 1428 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1428 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1428 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1428 "map.m"
                MR_Word mercury__map__R_20;
#line 1428 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1429 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1429 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1430 "map.m"
                {
#line 1430 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_34, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1436 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1437 "map.m"
                  {
#line 1437 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 881 "map.m"
                    MR_Word mercury__map__NewMap_43;

#line 879 "map.m"
                    {
#line 879 "map.m"
                      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value1_15, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_43);
                    }
#line 881 "map.m"
                    if (mercury__map__succeeded)
#line 880 "map.m"
                      mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_43;
#line 881 "map.m"
                    else
#line 882 "map.m"
                      {
#line 882 "map.m"
                        MR_Box mercury__map__V_46_46;

#line 882 "map.m"
                        {
#line 882 "map.m"
                          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                        }
#line 882 "map.m"
                      }
#line 1439 "map.m"
                    /* direct tailcall eliminated */
#line 1439 "map.m"
                    {
#line 1439 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1439 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1439 "map.m"
                      mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1439 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1439 "map.m"
                    }
#line 1439 "map.m"
                    continue;
#line 1437 "map.m"
                  }
#line 1436 "map.m"
                else
#line 1436 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1432 "map.m"
                    {
#line 1432 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1432 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_30_30;
#line 1433 "map.m"
                      MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_52;

#line 1433 "map.m"
                      {
#line 1433 "map.m"
                        mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 1432 "map.m"
                      if (mercury__map__succeeded)
#line 1432 "map.m"
                        {
#line 879 "map.m"
                          {
#line 879 "map.m"
                            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_52);
                          }
#line 881 "map.m"
                          if (mercury__map__succeeded)
#line 880 "map.m"
                            mercury__map__STATE_VARIABLE_Common_30_30 = mercury__map__NewMap_52;
#line 881 "map.m"
                          else
#line 882 "map.m"
                            {
#line 882 "map.m"
                              MR_Box mercury__map__V_55_55;

#line 882 "map.m"
                              {
#line 882 "map.m"
                                mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                              }
#line 882 "map.m"
                            }
#line 1435 "map.m"
                          /* direct tailcall eliminated */
#line 1435 "map.m"
                          {
#line 1435 "map.m"
                            MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_36_36;
#line 1435 "map.m"
                            MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1435 "map.m"
                            MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_30_30;

#line 1435 "map.m"
                            mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1435 "map.m"
                            mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1435 "map.m"
                            mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1435 "map.m"
                          }
#line 1435 "map.m"
                          continue;
#line 1432 "map.m"
                        }
#line 1432 "map.m"
                    }
#line 1436 "map.m"
                  else
#line 1441 "map.m"
                    {
#line 1441 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_26_26;
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_61;

#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, mercury__map__Key2_17, mercury__map__Value2_18, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_61);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_26_26 = mercury__map__NewMap_61;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_64_64;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_34, mercury__map__TypeInfo_for_V_35, (MR_String) "map.det_insert: key already present", mercury__map__Key2_17);
                          }
#line 882 "map.m"
                        }
#line 1443 "map.m"
                      /* direct tailcall eliminated */
#line 1443 "map.m"
                      {
#line 1443 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1443 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_26_26;

#line 1443 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1443 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1443 "map.m"
                      }
#line 1443 "map.m"
                      continue;
#line 1441 "map.m"
                    }
#line 1428 "map.m"
              }
#line 1419 "map.m"
          }
#line 1419 "map.m"
        return mercury__map__succeeded;
#line 1419 "map.m"
      }
#line 1419 "map.m"
      break;
#line 1419 "map.m"
    }
#line 1412 "map.m"
}

#line 1360 "map.m"
MR_Word MR_CALL 
mercury__map__common_subset_2_3_f_0(
#line 1360 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 1360 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 1360 "map.m"
  MR_Word mercury__map__AssocList1_5,
#line 1360 "map.m"
  MR_Word mercury__map__AssocList2_6,
#line 1360 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_19)
#line 1360 "map.m"
{
#line 1367 "map.m"
  while (MR_TRUE)
#line 1367 "map.m"
    {
#line 1367 "map.m"
      /* tailcall optimized into a loop */
#line 1367 "map.m"
      {
#line 1367 "map.m"
        MR_bool mercury__map__succeeded;
#line 1367 "map.m"
        MR_Word mercury__map__STATE_VARIABLE_Common_20;

#line 1367 "map.m"
        if ((mercury__map__AssocList1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1367 "map.m"
          if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "map.m"
            mercury__map__STATE_VARIABLE_Common_20 = mercury__map__STATE_VARIABLE_Common_0_19;
#line 1367 "map.m"
          else
#line 1372 "map.m"
            mercury__map__STATE_VARIABLE_Common_20 = mercury__map__STATE_VARIABLE_Common_0_19;
#line 1367 "map.m"
        else
#line 1367 "map.m"
          {
#line 1367 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 1)));
#line 1367 "map.m"
            MR_Word mercury__map__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 0)));

#line 1367 "map.m"
            if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1369 "map.m"
              mercury__map__STATE_VARIABLE_Common_20 = mercury__map__STATE_VARIABLE_Common_0_19;
#line 1367 "map.m"
            else
#line 1374 "map.m"
              {
#line 1374 "map.m"
                MR_Box mercury__map__Key1_12 = (MR_hl_field(MR_mktag(0), mercury__map__V_30_30, (MR_Integer) 0));
#line 1374 "map.m"
                MR_Box mercury__map__Value1_13 = (MR_hl_field(MR_mktag(0), mercury__map__V_30_30, (MR_Integer) 1));
#line 1374 "map.m"
                MR_Box mercury__map__Key2_15;
#line 1374 "map.m"
                MR_Box mercury__map__Value2_16;
#line 1374 "map.m"
                MR_Word mercury__map__AssocTail2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 1)));
#line 1374 "map.m"
                MR_Word mercury__map__R_18;
#line 1374 "map.m"
                MR_Word mercury__map__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 0)));

#line 1375 "map.m"
                mercury__map__Key2_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_22_22, (MR_Integer) 0));
#line 1375 "map.m"
                mercury__map__Value2_16 = (MR_hl_field(MR_mktag(0), mercury__map__V_22_22, (MR_Integer) 1));
#line 1376 "map.m"
                {
#line 1376 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_27, &mercury__map__R_18, mercury__map__Key1_12, mercury__map__Key2_15);
                }
#line 1385 "map.m"
                if ((mercury__map__R_18 == (MR_Integer) 1))
#line 1386 "map.m"
                  {
#line 1386 "map.m"
                    /* direct tailcall eliminated */
#line 1386 "map.m"
                    {
#line 1386 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_5 = mercury__map__V_29_29;

#line 1386 "map.m"
                      mercury__map__AssocList1_5 = mercury__map__AssocList1__tmp_copy_5;
#line 1386 "map.m"
                    }
#line 1386 "map.m"
                    continue;
#line 1386 "map.m"
                  }
#line 1385 "map.m"
                else
#line 1385 "map.m"
                  if ((mercury__map__R_18 == (MR_Integer) 0))
#line 1378 "map.m"
                    {
#line 1378 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_25_25;

#line 1379 "map.m"
                      {
#line 1379 "map.m"
                        mercury__map__succeeded = mercury__builtin__unify_2_p_0(mercury__map__TypeInfo_for_V_28, mercury__map__Value1_13, mercury__map__Value2_16);
                      }
#line 1381 "map.m"
                      if (mercury__map__succeeded)
#line 881 "map.m"
                        {
#line 881 "map.m"
                          MR_Word mercury__map__NewMap_36;

#line 879 "map.m"
                          {
#line 879 "map.m"
                            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__Key1_12, mercury__map__Value1_13, mercury__map__STATE_VARIABLE_Common_0_19, &mercury__map__NewMap_36);
                          }
#line 881 "map.m"
                          if (mercury__map__succeeded)
#line 880 "map.m"
                            mercury__map__STATE_VARIABLE_Common_25_25 = mercury__map__NewMap_36;
#line 881 "map.m"
                          else
#line 882 "map.m"
                            {
#line 882 "map.m"
                              MR_Box mercury__map__V_39_39;

#line 882 "map.m"
                              {
#line 882 "map.m"
                                mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, (MR_String) "map.det_insert: key already present", mercury__map__Key1_12);
                              }
#line 882 "map.m"
                            }
#line 881 "map.m"
                        }
#line 1381 "map.m"
                      else
#line 1380 "map.m"
                        mercury__map__STATE_VARIABLE_Common_25_25 = mercury__map__STATE_VARIABLE_Common_0_19;
#line 1384 "map.m"
                      /* direct tailcall eliminated */
#line 1384 "map.m"
                      {
#line 1384 "map.m"
                        MR_Word mercury__map__AssocList1__tmp_copy_5 = mercury__map__V_29_29;
#line 1384 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_6 = mercury__map__AssocTail2_17;
#line 1384 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_19 = mercury__map__STATE_VARIABLE_Common_25_25;

#line 1384 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_19 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_19;
#line 1384 "map.m"
                        mercury__map__AssocList2_6 = mercury__map__AssocList2__tmp_copy_6;
#line 1384 "map.m"
                        mercury__map__AssocList1_5 = mercury__map__AssocList1__tmp_copy_5;
#line 1384 "map.m"
                      }
#line 1384 "map.m"
                      continue;
#line 1378 "map.m"
                    }
#line 1385 "map.m"
                  else
#line 1389 "map.m"
                    {
#line 1389 "map.m"
                      /* direct tailcall eliminated */
#line 1389 "map.m"
                      {
#line 1389 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_6 = mercury__map__AssocTail2_17;

#line 1389 "map.m"
                        mercury__map__AssocList2_6 = mercury__map__AssocList2__tmp_copy_6;
#line 1389 "map.m"
                      }
#line 1389 "map.m"
                      continue;
#line 1389 "map.m"
                    }
#line 1374 "map.m"
              }
#line 1367 "map.m"
          }
#line 1367 "map.m"
        return mercury__map__STATE_VARIABLE_Common_20;
#line 1367 "map.m"
      }
#line 1367 "map.m"
      break;
#line 1367 "map.m"
    }
#line 1360 "map.m"
}

#line 1314 "map.m"
void MR_CALL 
mercury__map__intersect_2_5_p_1(
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1314 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1314 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1314 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1314 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1314 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1314 "map.m"
{
#line 1321 "map.m"
  while (MR_TRUE)
#line 1321 "map.m"
    {
#line 1321 "map.m"
      /* tailcall optimized into a loop */
#line 1321 "map.m"
      {
#line 1321 "map.m"
        MR_bool mercury__map__succeeded;

#line 1321 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
          else
#line 1326 "map.m"
            *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
        else
#line 1321 "map.m"
          {
#line 1321 "map.m"
            MR_Word mercury__map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1321 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            else
#line 1328 "map.m"
              {
#line 1328 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 0));
#line 1328 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 1));
#line 1328 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1328 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1328 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1328 "map.m"
                MR_Word mercury__map__R_20;
#line 1328 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1329 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1329 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1330 "map.m"
                {
#line 1330 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_30, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1336 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1337 "map.m"
                  {
#line 1337 "map.m"
                    /* direct tailcall eliminated */
#line 1337 "map.m"
                    {
#line 1337 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;

#line 1337 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1337 "map.m"
                    }
#line 1337 "map.m"
                    continue;
#line 1337 "map.m"
                  }
#line 1336 "map.m"
                else
#line 1336 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1332 "map.m"
                    {
#line 1332 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1332 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 1333 "map.m"
                      void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_39;

#line 1333 "map.m"
                      {
#line 1333 "map.m"
                        mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 879 "map.m"
                      {
#line 879 "map.m"
                        mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_39);
                      }
#line 881 "map.m"
                      if (mercury__map__succeeded)
#line 880 "map.m"
                        mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_39;
#line 881 "map.m"
                      else
#line 882 "map.m"
                        {
#line 882 "map.m"
                          MR_Box mercury__map__V_42_42;

#line 882 "map.m"
                          {
#line 882 "map.m"
                            mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
#line 882 "map.m"
                            return;
                          }
#line 882 "map.m"
                        }
#line 1335 "map.m"
                      /* direct tailcall eliminated */
#line 1335 "map.m"
                      {
#line 1335 "map.m"
                        MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;
#line 1335 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1335 "map.m"
                        MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1335 "map.m"
                        mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1335 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1335 "map.m"
                        mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1335 "map.m"
                      }
#line 1335 "map.m"
                      continue;
#line 1332 "map.m"
                    }
#line 1336 "map.m"
                  else
#line 1340 "map.m"
                    {
#line 1340 "map.m"
                      /* direct tailcall eliminated */
#line 1340 "map.m"
                      {
#line 1340 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1340 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1340 "map.m"
                      }
#line 1340 "map.m"
                      continue;
#line 1340 "map.m"
                    }
#line 1328 "map.m"
              }
#line 1321 "map.m"
          }
#line 1321 "map.m"
      }
#line 1321 "map.m"
      break;
#line 1321 "map.m"
    }
#line 1314 "map.m"
}

#line 1312 "map.m"
MR_bool MR_CALL 
mercury__map__intersect_2_5_p_0(
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_30,
#line 1312 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_31,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1312 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1312 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1312 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Common_0_22,
#line 1312 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Common_23)
#line 1312 "map.m"
{
#line 1321 "map.m"
  while (MR_TRUE)
#line 1321 "map.m"
    {
#line 1321 "map.m"
      /* tailcall optimized into a loop */
#line 1321 "map.m"
      {
#line 1321 "map.m"
        MR_bool mercury__map__succeeded;

#line 1321 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "map.m"
          {
#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            else
#line 1326 "map.m"
              *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1321 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1321 "map.m"
          }
#line 1321 "map.m"
        else
#line 1321 "map.m"
          {
#line 1321 "map.m"
            MR_Word mercury__map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1321 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1321 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "map.m"
              {
#line 1323 "map.m"
                *mercury__map__STATE_VARIABLE_Common_23 = mercury__map__STATE_VARIABLE_Common_0_22;
#line 1323 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1323 "map.m"
              }
#line 1321 "map.m"
            else
#line 1328 "map.m"
              {
#line 1328 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 0));
#line 1328 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_33_33, (MR_Integer) 1));
#line 1328 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1328 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1328 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1328 "map.m"
                MR_Word mercury__map__R_20;
#line 1328 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1329 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1329 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1330 "map.m"
                {
#line 1330 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_30, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1336 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1337 "map.m"
                  {
#line 1337 "map.m"
                    /* direct tailcall eliminated */
#line 1337 "map.m"
                    {
#line 1337 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;

#line 1337 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1337 "map.m"
                    }
#line 1337 "map.m"
                    continue;
#line 1337 "map.m"
                  }
#line 1336 "map.m"
                else
#line 1336 "map.m"
                  if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1332 "map.m"
                    {
#line 1332 "map.m"
                      MR_Box mercury__map__Value_21;
#line 1332 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_Common_28_28;
#line 1333 "map.m"
                      MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));
#line 881 "map.m"
                      MR_Word mercury__map__NewMap_39;

#line 1333 "map.m"
                      {
#line 1333 "map.m"
                        mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                      }
#line 1332 "map.m"
                      if (mercury__map__succeeded)
#line 1332 "map.m"
                        {
#line 879 "map.m"
                          {
#line 879 "map.m"
                            mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, mercury__map__Key1_14, mercury__map__Value_21, mercury__map__STATE_VARIABLE_Common_0_22, &mercury__map__NewMap_39);
                          }
#line 881 "map.m"
                          if (mercury__map__succeeded)
#line 880 "map.m"
                            mercury__map__STATE_VARIABLE_Common_28_28 = mercury__map__NewMap_39;
#line 881 "map.m"
                          else
#line 882 "map.m"
                            {
#line 882 "map.m"
                              MR_Box mercury__map__V_42_42;

#line 882 "map.m"
                              {
#line 882 "map.m"
                                mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_30, mercury__map__TypeInfo_for_V_31, (MR_String) "map.det_insert: key already present", mercury__map__Key1_14);
                              }
#line 882 "map.m"
                            }
#line 1335 "map.m"
                          /* direct tailcall eliminated */
#line 1335 "map.m"
                          {
#line 1335 "map.m"
                            MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_32_32;
#line 1335 "map.m"
                            MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1335 "map.m"
                            MR_Word mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_Common_28_28;

#line 1335 "map.m"
                            mercury__map__STATE_VARIABLE_Common_0_22 = mercury__map__STATE_VARIABLE_Common_0__tmp_copy_22;
#line 1335 "map.m"
                            mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1335 "map.m"
                            mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1335 "map.m"
                          }
#line 1335 "map.m"
                          continue;
#line 1332 "map.m"
                        }
#line 1332 "map.m"
                    }
#line 1336 "map.m"
                  else
#line 1340 "map.m"
                    {
#line 1340 "map.m"
                      /* direct tailcall eliminated */
#line 1340 "map.m"
                      {
#line 1340 "map.m"
                        MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1340 "map.m"
                        mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1340 "map.m"
                      }
#line 1340 "map.m"
                      continue;
#line 1340 "map.m"
                    }
#line 1328 "map.m"
              }
#line 1321 "map.m"
          }
#line 1321 "map.m"
        return mercury__map__succeeded;
#line 1321 "map.m"
      }
#line 1321 "map.m"
      break;
#line 1321 "map.m"
    }
#line 1312 "map.m"
}

#line 1195 "map.m"
void MR_CALL 
mercury__map__select_loop_4_p_0(
#line 1195 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 1195 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1195 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
#line 1195 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
#line 1195 "map.m"
{
#line 1199 "map.m"
  while (MR_TRUE)
#line 1199 "map.m"
    {
#line 1199 "map.m"
      /* tailcall optimized into a loop */
#line 1199 "map.m"
      {
#line 1199 "map.m"
        MR_bool mercury__map__succeeded;

#line 1199 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "map.m"
          *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1199 "map.m"
        else
#line 1200 "map.m"
          {
#line 1200 "map.m"
            MR_Box mercury__map__K_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1200 "map.m"
            MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1200 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_New_16_16;
#line 1203 "map.m"
            MR_Box mercury__map__V_13;

#line 829 "map.m"
            {
#line 829 "map.m"
              mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
            }
#line 1203 "map.m"
            if (mercury__map__succeeded)
#line 881 "map.m"
              {
#line 881 "map.m"
                MR_Word mercury__map__NewMap_28;

#line 879 "map.m"
                {
#line 879 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__K_9, mercury__map__V_13, mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__NewMap_28);
                }
#line 881 "map.m"
                if (mercury__map__succeeded)
#line 880 "map.m"
                  mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_28;
#line 881 "map.m"
                else
#line 882 "map.m"
                  {
#line 882 "map.m"
                    MR_Box mercury__map__V_31_31;

#line 882 "map.m"
                    {
#line 882 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", mercury__map__K_9);
#line 882 "map.m"
                      return;
                    }
#line 882 "map.m"
                  }
#line 881 "map.m"
              }
#line 1203 "map.m"
            else
#line 1202 "map.m"
              mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1206 "map.m"
            /* direct tailcall eliminated */
#line 1206 "map.m"
            {
#line 1206 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Ks_10;
#line 1206 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_New_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_New_16_16;

#line 1206 "map.m"
              mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_0__tmp_copy_3;
#line 1206 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1206 "map.m"
            }
#line 1206 "map.m"
            continue;
#line 1200 "map.m"
          }
#line 1199 "map.m"
      }
#line 1199 "map.m"
      break;
#line 1199 "map.m"
    }
#line 1195 "map.m"
}

#line 1165 "map.m"
void MR_CALL 
mercury__map__overlay_large_map_2_3_p_0(
#line 1165 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 1165 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 1165 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1165 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1165 "map.m"
  MR_Word * mercury__map__Map_3)
#line 1165 "map.m"
{
#line 1169 "map.m"
  while (MR_TRUE)
#line 1169 "map.m"
    {
#line 1169 "map.m"
      /* tailcall optimized into a loop */
#line 1169 "map.m"
      {
#line 1169 "map.m"
        MR_bool mercury__map__succeeded;

#line 1169 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "map.m"
          *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
#line 1169 "map.m"
        else
#line 1170 "map.m"
          {
#line 1170 "map.m"
            MR_Box mercury__map__K_5;
#line 1170 "map.m"
            MR_Box mercury__map__V_6;
#line 1170 "map.m"
            MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1170 "map.m"
            MR_Word mercury__map__Map2_11;
#line 1170 "map.m"
            MR_Word mercury__map__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1173 "map.m"
            MR_Word mercury__map__Map1_10;

#line 1170 "map.m"
            mercury__map__K_5 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 0));
#line 1170 "map.m"
            mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 1));
#line 873 "map.m"
            {
#line 873 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__HeadVar__2_2, &mercury__map__Map1_10);
            }
#line 1173 "map.m"
            if (mercury__map__succeeded)
#line 1172 "map.m"
              mercury__map__Map2_11 = mercury__map__Map1_10;
#line 1173 "map.m"
            else
#line 1174 "map.m"
              mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
#line 1176 "map.m"
            /* direct tailcall eliminated */
#line 1176 "map.m"
            {
#line 1176 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_7;
#line 1176 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Map2_11;

#line 1176 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1176 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1176 "map.m"
            }
#line 1176 "map.m"
            continue;
#line 1170 "map.m"
          }
#line 1169 "map.m"
      }
#line 1169 "map.m"
      break;
#line 1169 "map.m"
    }
#line 1165 "map.m"
}

#line 1149 "map.m"
void MR_CALL 
mercury__map__overlay_2_3_p_0(
#line 1149 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 1149 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 1149 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1149 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 1149 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 1149 "map.m"
{
#line 1153 "map.m"
  while (MR_TRUE)
#line 1153 "map.m"
    {
#line 1153 "map.m"
      /* tailcall optimized into a loop */
#line 1153 "map.m"
      {
#line 1153 "map.m"
        MR_bool mercury__map__succeeded;

#line 1153 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1153 "map.m"
        else
#line 1154 "map.m"
          {
#line 1154 "map.m"
            MR_Box mercury__map__K_7;
#line 1154 "map.m"
            MR_Box mercury__map__V_8;
#line 1154 "map.m"
            MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1154 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1154 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 1154 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 1154 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 962 "map.m"
            {
#line 962 "map.m"
              mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 1156 "map.m"
            /* direct tailcall eliminated */
#line 1156 "map.m"
            {
#line 1156 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_9;
#line 1156 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1156 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1156 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1156 "map.m"
            }
#line 1156 "map.m"
            continue;
#line 1154 "map.m"
          }
#line 1153 "map.m"
      }
#line 1153 "map.m"
      break;
#line 1153 "map.m"
    }
#line 1149 "map.m"
}

#line 739 "map.m"
void MR_CALL 
mercury__map__old_merge_3_p_0(
#line 739 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_10,
#line 739 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 739 "map.m"
  MR_Word mercury__map__M0_4,
#line 739 "map.m"
  MR_Word mercury__map__M1_5,
#line 739 "map.m"
  MR_Word * mercury__map__M_6)
#line 739 "map.m"
{
#line 1126 "map.m"
  {
#line 1126 "map.m"
    MR_bool mercury__map__succeeded;
#line 1126 "map.m"
    MR_Word mercury__map__TypeCtorInfo_12_12;
#line 1126 "map.m"
    MR_Word mercury__map__TypeInfo_13_13;
#line 1126 "map.m"
    MR_Word mercury__map__ML0_7;
#line 1126 "map.m"
    MR_Word mercury__map__ML1_8;
#line 1126 "map.m"
    MR_Word mercury__map__ML_9;
#line 1126 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "map.m"
    MR_Word mercury__map__V_5_25;
#line 1126 "map.m"
    MR_Word mercury__map__V_5_32;
#line 1129 "map.m"
    MR_Word mercury__map__conv0_ML_9;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__M0_4, mercury__map__V_5_18, &mercury__map__ML0_7);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__M1_5, mercury__map__V_5_25, &mercury__map__ML1_8);
    }
#line 7004 "map.c"
    mercury__map__TypeCtorInfo_12_12 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 7006 "map.c"
    {
#line 7008 "map.c"
      mercury__map__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7010 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_12_12));
#line 7012 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_10));
#line 7014 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 2) = ((MR_Box) (mercury__map__TypeInfo_for_V_11));
#line 7016 "map.c"
    }
#line 1129 "map.m"
    {
#line 1129 "map.m"
      mercury__list__merge_3_p_0(mercury__map__TypeInfo_13_13, (MR_Word) mercury__map__ML0_7, (MR_Word) mercury__map__ML1_8, &mercury__map__conv0_ML_9);
    }
#line 1129 "map.m"
    mercury__map__ML_9 = (MR_Word) mercury__map__conv0_ML_9;
#line 90 "tree234.opt"
    mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__ML_9, mercury__map__V_5_32, mercury__map__M_6);
#line 91 "tree234.opt"
      return;
    }
#line 1126 "map.m"
  }
#line 739 "map.m"
}

#line 738 "map.m"
MR_Word MR_CALL 
mercury__map__old_merge_2_f_0(
#line 738 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 738 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 738 "map.m"
  MR_Word mercury__map__M1_4,
#line 738 "map.m"
  MR_Word mercury__map__M2_5)
#line 738 "map.m"
{
#line 1124 "map.m"
  {
#line 1124 "map.m"
    MR_bool mercury__map__succeeded;
#line 1124 "map.m"
    MR_Word mercury__map__M3_6;

#line 1124 "map.m"
    {
#line 1124 "map.m"
      mercury__map__old_merge_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__M2_5, &mercury__map__M3_6);
    }
#line 1124 "map.m"
    return mercury__map__M3_6;
#line 1124 "map.m"
  }
#line 738 "map.m"
}

#line 710 "map.m"
MR_Word MR_CALL 
mercury__map__f_100_101_116_95_101_108_101_109_32_58_61_3_f_0(
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 710 "map.m"
  MR_Box mercury__map__Key_5,
#line 710 "map.m"
  MR_Word mercury__map__Map_6,
#line 710 "map.m"
  MR_Box mercury__map__Value_7)
#line 710 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_19;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_22_22;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", mercury__map__Key_5);
        }
#line 938 "map.m"
      }
#line 937 "map.m"
    return mercury__map__HeadVar__4_4;
#line 937 "map.m"
  }
#line 710 "map.m"
}

#line 706 "map.m"
MR_Word MR_CALL 
mercury__map__f_101_108_101_109_32_58_61_3_f_0(
#line 706 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 706 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 706 "map.m"
  MR_Box mercury__map__Key_5,
#line 706 "map.m"
  MR_Word mercury__map__Map_6,
#line 706 "map.m"
  MR_Box mercury__map__Value_7)
#line 706 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;
#line 962 "map.m"
    MR_Word mercury__map__HeadVar__4_4;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
#line 962 "map.m"
    return mercury__map__HeadVar__4_4;
#line 962 "map.m"
  }
#line 706 "map.m"
}

#line 700 "map.m"
MR_Box MR_CALL 
mercury__map__det_elem_2_f_0(
#line 700 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 700 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 700 "map.m"
  MR_Box mercury__map__Key_4,
#line 700 "map.m"
  MR_Word mercury__map__Map_5)
#line 700 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_14;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_14);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_14;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", mercury__map__Key_4);
        }
#line 838 "map.m"
      }
#line 837 "map.m"
    return mercury__map__HeadVar__3_3;
#line 837 "map.m"
  }
#line 700 "map.m"
}

#line 696 "map.m"
MR_bool MR_CALL 
mercury__map__elem_2_f_0(
#line 696 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 696 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 696 "map.m"
  MR_Box mercury__map__Key_4,
#line 696 "map.m"
  MR_Word mercury__map__Map_5,
#line 696 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 696 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 696 "map.m"
}

#line 690 "map.m"
MR_Word MR_CALL 
mercury__map__reverse_map_1_f_0(
#line 690 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 690 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 690 "map.m"
  MR_Word mercury__map__Map_3)
#line 690 "map.m"
{
#line 1454 "map.m"
  {
#line 1454 "map.m"
    MR_bool mercury__map__succeeded;
#line 1454 "map.m"
    MR_Word mercury__map__RevMap_4;
#line 1454 "map.m"
    MR_Word mercury__map__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_3, mercury__map__V_6_6, &mercury__map__RevMap_4);
    }
#line 1454 "map.m"
    return mercury__map__RevMap_4;
#line 1454 "map.m"
  }
#line 690 "map.m"
}

#line 684 "map.m"
MR_Word MR_CALL 
mercury__map__det_union_3_f_0(
#line 684 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 684 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 684 "map.m"
  MR_Word mercury__map__F_5,
#line 684 "map.m"
  MR_Word mercury__map__M1_6,
#line 684 "map.m"
  MR_Word mercury__map__M2_7)
#line 684 "map.m"
{
#line 1450 "map.m"
  {
#line 1450 "map.m"
    MR_bool mercury__map__succeeded;
#line 1450 "map.m"
    MR_Word mercury__map__M3_8;
#line 1450 "map.m"
    MR_Word mercury__map__UnionPrime_25;
#line 1448 "map.m"
    MR_Word mercury__map__AssocList1_31;
#line 1448 "map.m"
    MR_Word mercury__map__AssocList2_32;
#line 1448 "map.m"
    MR_Word mercury__map__Common0_33;
#line 1448 "map.m"
    MR_Word mercury__map__V_5_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1448 "map.m"
    MR_Word mercury__map__V_5_45;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_38, &mercury__map__AssocList1_31);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_45, &mercury__map__AssocList2_32);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "map.m"
    {
#line 1408 "map.m"
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_51_48_95_95_91_49_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__AssocList1_31, mercury__map__AssocList2_32, mercury__map__Common0_33, &mercury__map__UnionPrime_25);
    }
#line 1450 "map.m"
    if (mercury__map__succeeded)
#line 1449 "map.m"
      mercury__map__M3_8 = mercury__map__UnionPrime_25;
#line 1450 "map.m"
    else
#line 1451 "map.m"
      {
#line 1451 "map.m"
        {
#line 1451 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_union: map.union failed");
        }
#line 1451 "map.m"
      }
#line 1450 "map.m"
    return mercury__map__M3_8;
#line 1450 "map.m"
  }
#line 684 "map.m"
}

#line 681 "map.m"
void MR_CALL 
mercury__map__det_union_4_p_0(
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 681 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 681 "map.m"
  MR_Word mercury__map__Map1_6,
#line 681 "map.m"
  MR_Word mercury__map__Map2_7,
#line 681 "map.m"
  MR_Word * mercury__map__Union_8)
#line 681 "map.m"
{
#line 1450 "map.m"
  {
#line 1450 "map.m"
    MR_bool mercury__map__succeeded;
#line 1450 "map.m"
    MR_Word mercury__map__UnionPrime_9;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList1_17;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList2_18;
#line 1404 "map.m"
    MR_Word mercury__map__Common0_19;
#line 1404 "map.m"
    MR_Word mercury__map__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1404 "map.m"
    MR_Word mercury__map__V_5_31;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map1_6, mercury__map__V_5_24, &mercury__map__AssocList1_17);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map2_7, mercury__map__V_5_31, &mercury__map__AssocList2_18);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "map.m"
    {
#line 1408 "map.m"
      mercury__map__succeeded = mercury__map__union_2_5_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__AssocList1_17, mercury__map__AssocList2_18, mercury__map__CommonPred_5, mercury__map__Common0_19, &mercury__map__UnionPrime_9);
    }
#line 1450 "map.m"
    if (mercury__map__succeeded)
#line 1449 "map.m"
      *mercury__map__Union_8 = mercury__map__UnionPrime_9;
#line 1450 "map.m"
    else
#line 1451 "map.m"
      {
#line 1451 "map.m"
        {
#line 1451 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_union: map.union failed");
#line 1451 "map.m"
          return;
        }
#line 1451 "map.m"
      }
#line 1450 "map.m"
  }
#line 681 "map.m"
}

#line 676 "map.m"
void MR_CALL 
mercury__map__union_4_p_1(
#line 676 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 676 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 676 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 676 "map.m"
  MR_Word mercury__map__Map1_6,
#line 676 "map.m"
  MR_Word mercury__map__Map2_7,
#line 676 "map.m"
  MR_Word * mercury__map__Common_8)
#line 676 "map.m"
{
#line 1404 "map.m"
  {
#line 1404 "map.m"
    MR_bool mercury__map__succeeded;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1404 "map.m"
    MR_Word mercury__map__Common0_11;
#line 1404 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1404 "map.m"
    MR_Word mercury__map__V_5_25;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_18, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_25, &mercury__map__AssocList2_10);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "map.m"
    {
#line 1408 "map.m"
      mercury__map__union_2_5_p_1(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Common0_11, mercury__map__Common_8);
#line 1408 "map.m"
      return;
    }
#line 1404 "map.m"
  }
#line 676 "map.m"
}

#line 675 "map.m"
MR_bool MR_CALL 
mercury__map__union_4_p_0(
#line 675 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 675 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 675 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 675 "map.m"
  MR_Word mercury__map__Map1_6,
#line 675 "map.m"
  MR_Word mercury__map__Map2_7,
#line 675 "map.m"
  MR_Word * mercury__map__Common_8)
#line 675 "map.m"
{
#line 1404 "map.m"
  {
#line 1404 "map.m"
    MR_bool mercury__map__succeeded;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1404 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1404 "map.m"
    MR_Word mercury__map__Common0_11;
#line 1404 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1404 "map.m"
    MR_Word mercury__map__V_5_25;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_18, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_25, &mercury__map__AssocList2_10);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "map.m"
    {
#line 1408 "map.m"
      return mercury__map__succeeded = mercury__map__union_2_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Common0_11, mercury__map__Common_8);
    }
#line 1404 "map.m"
    return mercury__map__succeeded;
#line 1404 "map.m"
  }
#line 675 "map.m"
}

#line 673 "map.m"
MR_Word MR_CALL 
mercury__map__union_3_f_0(
#line 673 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 673 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 673 "map.m"
  MR_Word mercury__map__F_5,
#line 673 "map.m"
  MR_Word mercury__map__M1_6,
#line 673 "map.m"
  MR_Word mercury__map__M2_7)
#line 673 "map.m"
{
#line 1396 "map.m"
  {
#line 1396 "map.m"
    MR_bool mercury__map__succeeded;
#line 1396 "map.m"
    MR_Word mercury__map__M3_8;
#line 1396 "map.m"
    MR_Word mercury__map__AssocList1_25;
#line 1396 "map.m"
    MR_Word mercury__map__AssocList2_26;
#line 1396 "map.m"
    MR_Word mercury__map__Common0_27;
#line 1396 "map.m"
    MR_Word mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1396 "map.m"
    MR_Word mercury__map__V_5_39;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_32, &mercury__map__AssocList1_25);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_39, &mercury__map__AssocList2_26);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "map.m"
    {
#line 1408 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_50_95_95_104_111_50_55_95_95_91_49_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__Common0_27, &mercury__map__M3_8);
    }
#line 1396 "map.m"
    return mercury__map__M3_8;
#line 1396 "map.m"
  }
#line 673 "map.m"
}

#line 664 "map.m"
MR_Word MR_CALL 
mercury__map__common_subset_2_f_0(
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_10,
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 664 "map.m"
  MR_Word mercury__map__Map1_4,
#line 664 "map.m"
  MR_Word mercury__map__Map2_5)
#line 664 "map.m"
{
#line 1354 "map.m"
  {
#line 1354 "map.m"
    MR_bool mercury__map__succeeded;
#line 1354 "map.m"
    MR_Word mercury__map__Common_6;
#line 1354 "map.m"
    MR_Word mercury__map__AssocList1_7;
#line 1354 "map.m"
    MR_Word mercury__map__AssocList2_8;
#line 1354 "map.m"
    MR_Word mercury__map__Common0_9;
#line 1354 "map.m"
    MR_Word mercury__map__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "map.m"
    MR_Word mercury__map__V_5_23;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Map1_4, mercury__map__V_5_16, &mercury__map__AssocList1_7);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Map2_5, mercury__map__V_5_23, &mercury__map__AssocList2_8);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1358 "map.m"
    {
#line 1358 "map.m"
      return mercury__map__Common_6 = mercury__map__common_subset_2_3_f_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__AssocList1_7, mercury__map__AssocList2_8, mercury__map__Common0_9);
    }
#line 1354 "map.m"
    return mercury__map__Common_6;
#line 1354 "map.m"
  }
#line 664 "map.m"
}

#line 648 "map.m"
MR_Word MR_CALL 
mercury__map__det_intersect_3_f_0(
#line 648 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 648 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 648 "map.m"
  MR_Word mercury__map__PF_5,
#line 648 "map.m"
  MR_Word mercury__map__M1_6,
#line 648 "map.m"
  MR_Word mercury__map__M2_7)
#line 648 "map.m"
{
#line 1348 "map.m"
  {
#line 1348 "map.m"
    MR_bool mercury__map__succeeded;
#line 1348 "map.m"
    MR_Word mercury__map__M3_8;
#line 1348 "map.m"
    MR_Word mercury__map__CommonPrime_25;
#line 1346 "map.m"
    MR_Word mercury__map__AssocList1_31;
#line 1346 "map.m"
    MR_Word mercury__map__AssocList2_32;
#line 1346 "map.m"
    MR_Word mercury__map__Common0_33;
#line 1346 "map.m"
    MR_Word mercury__map__V_5_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "map.m"
    MR_Word mercury__map__V_5_45;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_38, &mercury__map__AssocList1_31);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_45, &mercury__map__AssocList2_32);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "map.m"
    {
#line 1308 "map.m"
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_51_49_95_95_91_49_44_32_55_93_95_48_5_p_0(mercury__map__PF_5, mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__AssocList1_31, mercury__map__AssocList2_32, mercury__map__Common0_33, &mercury__map__CommonPrime_25);
    }
#line 1348 "map.m"
    if (mercury__map__succeeded)
#line 1347 "map.m"
      mercury__map__M3_8 = mercury__map__CommonPrime_25;
#line 1348 "map.m"
    else
#line 1349 "map.m"
      {
#line 1349 "map.m"
        {
#line 1349 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_intersect: map.intersect failed");
        }
#line 1349 "map.m"
      }
#line 1348 "map.m"
    return mercury__map__M3_8;
#line 1348 "map.m"
  }
#line 648 "map.m"
}

#line 645 "map.m"
void MR_CALL 
mercury__map__det_intersect_4_p_0(
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 645 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 645 "map.m"
  MR_Word mercury__map__Map1_6,
#line 645 "map.m"
  MR_Word mercury__map__Map2_7,
#line 645 "map.m"
  MR_Word * mercury__map__Common_8)
#line 645 "map.m"
{
#line 1348 "map.m"
  {
#line 1348 "map.m"
    MR_bool mercury__map__succeeded;
#line 1348 "map.m"
    MR_Word mercury__map__CommonPrime_9;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList1_17;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList2_18;
#line 1304 "map.m"
    MR_Word mercury__map__Common0_19;
#line 1304 "map.m"
    MR_Word mercury__map__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "map.m"
    MR_Word mercury__map__V_5_31;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map1_6, mercury__map__V_5_24, &mercury__map__AssocList1_17);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map2_7, mercury__map__V_5_31, &mercury__map__AssocList2_18);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "map.m"
    {
#line 1308 "map.m"
      mercury__map__succeeded = mercury__map__intersect_2_5_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__AssocList1_17, mercury__map__AssocList2_18, mercury__map__CommonPred_5, mercury__map__Common0_19, &mercury__map__CommonPrime_9);
    }
#line 1348 "map.m"
    if (mercury__map__succeeded)
#line 1347 "map.m"
      *mercury__map__Common_8 = mercury__map__CommonPrime_9;
#line 1348 "map.m"
    else
#line 1349 "map.m"
      {
#line 1349 "map.m"
        {
#line 1349 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_intersect: map.intersect failed");
#line 1349 "map.m"
          return;
        }
#line 1349 "map.m"
      }
#line 1348 "map.m"
  }
#line 645 "map.m"
}

#line 640 "map.m"
MR_Word MR_CALL 
mercury__map__intersect_3_f_0(
#line 640 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 640 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 640 "map.m"
  MR_Word mercury__map__F_5,
#line 640 "map.m"
  MR_Word mercury__map__M1_6,
#line 640 "map.m"
  MR_Word mercury__map__M2_7)
#line 640 "map.m"
{
#line 1296 "map.m"
  {
#line 1296 "map.m"
    MR_bool mercury__map__succeeded;
#line 1296 "map.m"
    MR_Word mercury__map__M3_8;
#line 1296 "map.m"
    MR_Word mercury__map__AssocList1_25;
#line 1296 "map.m"
    MR_Word mercury__map__AssocList2_26;
#line 1296 "map.m"
    MR_Word mercury__map__Common0_27;
#line 1296 "map.m"
    MR_Word mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1296 "map.m"
    MR_Word mercury__map__V_5_39;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_32, &mercury__map__AssocList1_25);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_39, &mercury__map__AssocList2_26);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "map.m"
    {
#line 1308 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_50_95_95_104_111_50_53_95_95_91_49_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__Common0_27, &mercury__map__M3_8);
    }
#line 1296 "map.m"
    return mercury__map__M3_8;
#line 1296 "map.m"
  }
#line 640 "map.m"
}

#line 638 "map.m"
void MR_CALL 
mercury__map__intersect_4_p_1(
#line 638 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 638 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 638 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 638 "map.m"
  MR_Word mercury__map__Map1_6,
#line 638 "map.m"
  MR_Word mercury__map__Map2_7,
#line 638 "map.m"
  MR_Word * mercury__map__Common_8)
#line 638 "map.m"
{
#line 1304 "map.m"
  {
#line 1304 "map.m"
    MR_bool mercury__map__succeeded;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1304 "map.m"
    MR_Word mercury__map__Common0_11;
#line 1304 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "map.m"
    MR_Word mercury__map__V_5_25;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_18, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_25, &mercury__map__AssocList2_10);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "map.m"
    {
#line 1308 "map.m"
      mercury__map__intersect_2_5_p_1(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Common0_11, mercury__map__Common_8);
#line 1308 "map.m"
      return;
    }
#line 1304 "map.m"
  }
#line 638 "map.m"
}

#line 637 "map.m"
MR_bool MR_CALL 
mercury__map__intersect_4_p_0(
#line 637 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 637 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 637 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 637 "map.m"
  MR_Word mercury__map__Map1_6,
#line 637 "map.m"
  MR_Word mercury__map__Map2_7,
#line 637 "map.m"
  MR_Word * mercury__map__Common_8)
#line 637 "map.m"
{
#line 1304 "map.m"
  {
#line 1304 "map.m"
    MR_bool mercury__map__succeeded;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1304 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1304 "map.m"
    MR_Word mercury__map__Common0_11;
#line 1304 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "map.m"
    MR_Word mercury__map__V_5_25;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_6, mercury__map__V_5_18, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_7, mercury__map__V_5_25, &mercury__map__AssocList2_10);
    }
#line 48 "tree234.opt"
    mercury__map__Common0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "map.m"
    {
#line 1308 "map.m"
      return mercury__map__succeeded = mercury__map__intersect_2_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__Common0_11, mercury__map__Common_8);
    }
#line 1304 "map.m"
    return mercury__map__succeeded;
#line 1304 "map.m"
  }
#line 637 "map.m"
}

#line 625 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl3_9_p_4(
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 625 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 625 "map.m"
  MR_Word mercury__map__Pred_10,
#line 625 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 625 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 625 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 625 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 625 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 625 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 625 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 625 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 625 "map.m"
{
#line 1292 "map.m"
  {
#line 1292 "map.m"
    MR_bool mercury__map__succeeded;

#line 1292 "map.m"
    {
#line 1292 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl3_9_p_4(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1292 "map.m"
    return mercury__map__succeeded;
#line 1292 "map.m"
  }
#line 625 "map.m"
}

#line 623 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_3(
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 623 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 623 "map.m"
  MR_Word mercury__map__Pred_10,
#line 623 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 623 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 623 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 623 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 623 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 623 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 623 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 623 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 623 "map.m"
{
#line 1292 "map.m"
  {
#line 1292 "map.m"
    MR_bool mercury__map__succeeded;

#line 1292 "map.m"
    {
#line 1292 "map.m"
      mercury__tree234__map_values_foldl3_9_p_3(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1292 "map.m"
      return;
    }
#line 1292 "map.m"
  }
#line 623 "map.m"
}

#line 621 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_2(
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 621 "map.m"
  MR_Word mercury__map__Pred_10,
#line 621 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 621 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 621 "map.m"
{
#line 1292 "map.m"
  {
#line 1292 "map.m"
    MR_bool mercury__map__succeeded;

#line 1292 "map.m"
    {
#line 1292 "map.m"
      mercury__tree234__map_values_foldl3_9_p_2(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1292 "map.m"
      return;
    }
#line 1292 "map.m"
  }
#line 621 "map.m"
}

#line 619 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_1(
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 619 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 619 "map.m"
  MR_Word mercury__map__Pred_10,
#line 619 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 619 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 619 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 619 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 619 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 619 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 619 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 619 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 619 "map.m"
{
#line 1292 "map.m"
  {
#line 1292 "map.m"
    MR_bool mercury__map__succeeded;

#line 1292 "map.m"
    {
#line 1292 "map.m"
      mercury__tree234__map_values_foldl3_9_p_1(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1292 "map.m"
      return;
    }
#line 1292 "map.m"
  }
#line 619 "map.m"
}

#line 617 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_0(
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 617 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 617 "map.m"
  MR_Word mercury__map__Pred_10,
#line 617 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 617 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 617 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 617 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 617 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 617 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 617 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 617 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 617 "map.m"
{
#line 1292 "map.m"
  {
#line 1292 "map.m"
    MR_bool mercury__map__succeeded;

#line 1292 "map.m"
    {
#line 1292 "map.m"
      mercury__tree234__map_values_foldl3_9_p_0(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1292 "map.m"
      return;
    }
#line 1292 "map.m"
  }
#line 617 "map.m"
}

#line 610 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl2_7_p_3(
#line 610 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 610 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 610 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 610 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 610 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 610 "map.m"
  MR_Word mercury__map__Pred_8,
#line 610 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 610 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 610 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 610 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 610 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 610 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 610 "map.m"
{
#line 1289 "map.m"
  {
#line 1289 "map.m"
    MR_bool mercury__map__succeeded;

#line 1289 "map.m"
    {
#line 1289 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl2_7_p_3(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1289 "map.m"
    return mercury__map__succeeded;
#line 1289 "map.m"
  }
#line 610 "map.m"
}

#line 608 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_2(
#line 608 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 608 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 608 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 608 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 608 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 608 "map.m"
  MR_Word mercury__map__Pred_8,
#line 608 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 608 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 608 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 608 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 608 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 608 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 608 "map.m"
{
#line 1289 "map.m"
  {
#line 1289 "map.m"
    MR_bool mercury__map__succeeded;

#line 1289 "map.m"
    {
#line 1289 "map.m"
      mercury__tree234__map_values_foldl2_7_p_2(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1289 "map.m"
      return;
    }
#line 1289 "map.m"
  }
#line 608 "map.m"
}

#line 606 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_1(
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 606 "map.m"
  MR_Word mercury__map__Pred_8,
#line 606 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 606 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 606 "map.m"
{
#line 1289 "map.m"
  {
#line 1289 "map.m"
    MR_bool mercury__map__succeeded;

#line 1289 "map.m"
    {
#line 1289 "map.m"
      mercury__tree234__map_values_foldl2_7_p_1(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1289 "map.m"
      return;
    }
#line 1289 "map.m"
  }
#line 606 "map.m"
}

#line 604 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_0(
#line 604 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 604 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 604 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 604 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 604 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 604 "map.m"
  MR_Word mercury__map__Pred_8,
#line 604 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 604 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 604 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 604 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 604 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 604 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 604 "map.m"
{
#line 1289 "map.m"
  {
#line 1289 "map.m"
    MR_bool mercury__map__succeeded;

#line 1289 "map.m"
    {
#line 1289 "map.m"
      mercury__tree234__map_values_foldl2_7_p_0(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1289 "map.m"
      return;
    }
#line 1289 "map.m"
  }
#line 604 "map.m"
}

#line 597 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl_5_p_2(
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 597 "map.m"
  MR_Word mercury__map__Pred_6,
#line 597 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 597 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 597 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 597 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 597 "map.m"
{
#line 1286 "map.m"
  {
#line 1286 "map.m"
    MR_bool mercury__map__succeeded;

#line 1286 "map.m"
    {
#line 1286 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl_5_p_2(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1286 "map.m"
    return mercury__map__succeeded;
#line 1286 "map.m"
  }
#line 597 "map.m"
}

#line 595 "map.m"
void MR_CALL 
mercury__map__map_values_foldl_5_p_1(
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 595 "map.m"
  MR_Word mercury__map__Pred_6,
#line 595 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 595 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 595 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 595 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 595 "map.m"
{
#line 1286 "map.m"
  {
#line 1286 "map.m"
    MR_bool mercury__map__succeeded;

#line 1286 "map.m"
    {
#line 1286 "map.m"
      mercury__tree234__map_values_foldl_5_p_1(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1286 "map.m"
      return;
    }
#line 1286 "map.m"
  }
#line 595 "map.m"
}

#line 593 "map.m"
void MR_CALL 
mercury__map__map_values_foldl_5_p_0(
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 593 "map.m"
  MR_Word mercury__map__Pred_6,
#line 593 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 593 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 593 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 593 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 593 "map.m"
{
#line 1286 "map.m"
  {
#line 1286 "map.m"
    MR_bool mercury__map__succeeded;

#line 1286 "map.m"
    {
#line 1286 "map.m"
      mercury__tree234__map_values_foldl_5_p_0(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1286 "map.m"
      return;
    }
#line 1286 "map.m"
  }
#line 593 "map.m"
}

#line 587 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_7(
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 587 "map.m"
  MR_Word mercury__map__Pred_10,
#line 587 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 587 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 587 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_7(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1283 "map.m"
    return mercury__map__succeeded;
#line 1283 "map.m"
  }
#line 587 "map.m"
}

#line 585 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_6(
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 585 "map.m"
  MR_Word mercury__map__Pred_10,
#line 585 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 585 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 585 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_6(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1283 "map.m"
    return mercury__map__succeeded;
#line 1283 "map.m"
  }
#line 585 "map.m"
}

#line 583 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_5(
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 583 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 583 "map.m"
  MR_Word mercury__map__Pred_10,
#line 583 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 583 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 583 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 583 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 583 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 583 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 583 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 583 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 583 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_5(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1283 "map.m"
    return mercury__map__succeeded;
#line 1283 "map.m"
  }
#line 583 "map.m"
}

#line 581 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_4(
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 581 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 581 "map.m"
  MR_Word mercury__map__Pred_10,
#line 581 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 581 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 581 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 581 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 581 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 581 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 581 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 581 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 581 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__tree234__map_foldl3_9_p_3(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1283 "map.m"
      return;
    }
#line 1283 "map.m"
  }
#line 581 "map.m"
}

#line 579 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_3(
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 579 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 579 "map.m"
  MR_Word mercury__map__Pred_10,
#line 579 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 579 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 579 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 579 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 579 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 579 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 579 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 579 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 579 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__tree234__map_foldl3_9_p_4(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1283 "map.m"
      return;
    }
#line 1283 "map.m"
  }
#line 579 "map.m"
}

#line 577 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_2(
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 577 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 577 "map.m"
  MR_Word mercury__map__Pred_10,
#line 577 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 577 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 577 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 577 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 577 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 577 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 577 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 577 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 577 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__tree234__map_foldl3_9_p_2(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1283 "map.m"
      return;
    }
#line 1283 "map.m"
  }
#line 577 "map.m"
}

#line 575 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_1(
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 575 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 575 "map.m"
  MR_Word mercury__map__Pred_10,
#line 575 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 575 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 575 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 575 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 575 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 575 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 575 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 575 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 575 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__tree234__map_foldl3_9_p_1(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1283 "map.m"
      return;
    }
#line 1283 "map.m"
  }
#line 575 "map.m"
}

#line 573 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_0(
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 573 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 573 "map.m"
  MR_Word mercury__map__Pred_10,
#line 573 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 573 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 573 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 573 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 573 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 573 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 573 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 573 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 573 "map.m"
{
#line 1283 "map.m"
  {
#line 1283 "map.m"
    MR_bool mercury__map__succeeded;

#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__tree234__map_foldl3_9_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1283 "map.m"
      return;
    }
#line 1283 "map.m"
  }
#line 573 "map.m"
}

#line 566 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_6(
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 566 "map.m"
  MR_Word mercury__map__Pred_8,
#line 566 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 566 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 566 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 566 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 566 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 566 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 566 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_6(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1280 "map.m"
    return mercury__map__succeeded;
#line 1280 "map.m"
  }
#line 566 "map.m"
}

#line 564 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_5(
#line 564 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 564 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 564 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 564 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 564 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 564 "map.m"
  MR_Word mercury__map__Pred_8,
#line 564 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 564 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 564 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 564 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 564 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 564 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 564 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_5(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1280 "map.m"
    return mercury__map__succeeded;
#line 1280 "map.m"
  }
#line 564 "map.m"
}

#line 562 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_4(
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 562 "map.m"
  MR_Word mercury__map__Pred_8,
#line 562 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 562 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 562 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 562 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 562 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 562 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 562 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_4(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1280 "map.m"
    return mercury__map__succeeded;
#line 1280 "map.m"
  }
#line 562 "map.m"
}

#line 560 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_3(
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 560 "map.m"
  MR_Word mercury__map__Pred_8,
#line 560 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 560 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 560 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 560 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 560 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 560 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 560 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      mercury__tree234__map_foldl2_7_p_2(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1280 "map.m"
      return;
    }
#line 1280 "map.m"
  }
#line 560 "map.m"
}

#line 558 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_2(
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 558 "map.m"
  MR_Word mercury__map__Pred_8,
#line 558 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 558 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 558 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 558 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 558 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 558 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 558 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      mercury__tree234__map_foldl2_7_p_3(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1280 "map.m"
      return;
    }
#line 1280 "map.m"
  }
#line 558 "map.m"
}

#line 556 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_1(
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 556 "map.m"
  MR_Word mercury__map__Pred_8,
#line 556 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 556 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 556 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 556 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 556 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 556 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 556 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      mercury__tree234__map_foldl2_7_p_1(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1280 "map.m"
      return;
    }
#line 1280 "map.m"
  }
#line 556 "map.m"
}

#line 554 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_0(
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 554 "map.m"
  MR_Word mercury__map__Pred_8,
#line 554 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 554 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 554 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 554 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 554 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 554 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 554 "map.m"
{
#line 1280 "map.m"
  {
#line 1280 "map.m"
    MR_bool mercury__map__succeeded;

#line 1280 "map.m"
    {
#line 1280 "map.m"
      mercury__tree234__map_foldl2_7_p_0(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1280 "map.m"
      return;
    }
#line 1280 "map.m"
  }
#line 554 "map.m"
}

#line 547 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_5(
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 547 "map.m"
  MR_Word mercury__map__Pred_6,
#line 547 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 547 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 547 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 547 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 547 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_5(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1277 "map.m"
    return mercury__map__succeeded;
#line 1277 "map.m"
  }
#line 547 "map.m"
}

#line 545 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_4(
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 545 "map.m"
  MR_Word mercury__map__Pred_6,
#line 545 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 545 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 545 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 545 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 545 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_4(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1277 "map.m"
    return mercury__map__succeeded;
#line 1277 "map.m"
  }
#line 545 "map.m"
}

#line 543 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_3(
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 543 "map.m"
  MR_Word mercury__map__Pred_6,
#line 543 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 543 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 543 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 543 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 543 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_3(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1277 "map.m"
    return mercury__map__succeeded;
#line 1277 "map.m"
  }
#line 543 "map.m"
}

#line 541 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_2(
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 541 "map.m"
  MR_Word mercury__map__Pred_6,
#line 541 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 541 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 541 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 541 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 541 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      mercury__tree234__map_foldl_5_p_2(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1277 "map.m"
      return;
    }
#line 1277 "map.m"
  }
#line 541 "map.m"
}

#line 539 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_1(
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 539 "map.m"
  MR_Word mercury__map__Pred_6,
#line 539 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 539 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 539 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 539 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 539 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      mercury__tree234__map_foldl_5_p_1(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1277 "map.m"
      return;
    }
#line 1277 "map.m"
  }
#line 539 "map.m"
}

#line 537 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_0(
#line 537 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 537 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 537 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 537 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 537 "map.m"
  MR_Word mercury__map__Pred_6,
#line 537 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 537 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 537 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 537 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 537 "map.m"
{
#line 1277 "map.m"
  {
#line 1277 "map.m"
    MR_bool mercury__map__succeeded;

#line 1277 "map.m"
    {
#line 1277 "map.m"
      mercury__tree234__map_foldl_5_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1277 "map.m"
      return;
    }
#line 1277 "map.m"
  }
#line 537 "map.m"
}

#line 531 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_only_3_p_1(
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_8,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 531 "map.m"
  MR_Word mercury__map__Pred_4,
#line 531 "map.m"
  MR_Word mercury__map__Map0_5,
#line 531 "map.m"
  MR_Word * mercury__map__Map_6)
#line 531 "map.m"
{
#line 1274 "map.m"
  {
#line 1274 "map.m"
    MR_bool mercury__map__succeeded;

#line 1274 "map.m"
    {
#line 1274 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_only_3_p_1(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
#line 1274 "map.m"
    return mercury__map__succeeded;
#line 1274 "map.m"
  }
#line 531 "map.m"
}

#line 530 "map.m"
void MR_CALL 
mercury__map__map_values_only_3_p_0(
#line 530 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 530 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_8,
#line 530 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 530 "map.m"
  MR_Word mercury__map__Pred_4,
#line 530 "map.m"
  MR_Word mercury__map__Map0_5,
#line 530 "map.m"
  MR_Word * mercury__map__Map_6)
#line 530 "map.m"
{
#line 1274 "map.m"
  {
#line 1274 "map.m"
    MR_bool mercury__map__succeeded;

#line 1274 "map.m"
    {
#line 1274 "map.m"
      mercury__tree234__map_values_only_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
#line 1274 "map.m"
      return;
    }
#line 1274 "map.m"
  }
#line 530 "map.m"
}

#line 528 "map.m"
MR_Word MR_CALL 
mercury__map__map_values_only_2_f_0(
#line 528 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 528 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_15,
#line 528 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 528 "map.m"
  MR_Word mercury__map__F_4,
#line 528 "map.m"
  MR_Word mercury__map__M1_5)
#line 528 "map.m"
{
#line 1274 "map.m"
  {
#line 1274 "map.m"
    MR_bool mercury__map__succeeded;
#line 1274 "map.m"
    MR_Word mercury__map__M2_6;

#line 1274 "map.m"
    {
#line 1274 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
#line 1274 "map.m"
    return mercury__map__M2_6;
#line 1274 "map.m"
  }
#line 528 "map.m"
}

#line 524 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_3_p_1(
#line 524 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 524 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 524 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_9,
#line 524 "map.m"
  MR_Word mercury__map__Pred_4,
#line 524 "map.m"
  MR_Word mercury__map__Map0_5,
#line 524 "map.m"
  MR_Word * mercury__map__Map_6)
#line 524 "map.m"
{
#line 1267 "map.m"
  {
#line 1267 "map.m"
    MR_bool mercury__map__succeeded;

#line 1267 "map.m"
    {
#line 1267 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_3_p_1(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
#line 1267 "map.m"
    return mercury__map__succeeded;
#line 1267 "map.m"
  }
#line 524 "map.m"
}

#line 523 "map.m"
void MR_CALL 
mercury__map__map_values_3_p_0(
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_9,
#line 523 "map.m"
  MR_Word mercury__map__Pred_4,
#line 523 "map.m"
  MR_Word mercury__map__Map0_5,
#line 523 "map.m"
  MR_Word * mercury__map__Map_6)
#line 523 "map.m"
{
#line 1267 "map.m"
  {
#line 1267 "map.m"
    MR_bool mercury__map__succeeded;

#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__tree234__map_values_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
#line 1267 "map.m"
      return;
    }
#line 1267 "map.m"
  }
#line 523 "map.m"
}

#line 521 "map.m"
MR_Word MR_CALL 
mercury__map__map_values_2_f_0(
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_19,
#line 521 "map.m"
  MR_Word mercury__map__F_4,
#line 521 "map.m"
  MR_Word mercury__map__M1_5)
#line 521 "map.m"
{
#line 1267 "map.m"
  {
#line 1267 "map.m"
    MR_bool mercury__map__succeeded;
#line 1267 "map.m"
    MR_Word mercury__map__M2_6;

#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
#line 1267 "map.m"
    return mercury__map__M2_6;
#line 1267 "map.m"
  }
#line 521 "map.m"
}

#line 516 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_8(
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 516 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 516 "map.m"
  MR_Word mercury__map__Pred_11,
#line 516 "map.m"
  MR_Word mercury__map__Map_12,
#line 516 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 516 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 516 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 516 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 516 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 516 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 516 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 516 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 516 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_8(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1258 "map.m"
    return mercury__map__succeeded;
#line 1258 "map.m"
  }
#line 516 "map.m"
}

#line 514 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_7(
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 514 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 514 "map.m"
  MR_Word mercury__map__Pred_11,
#line 514 "map.m"
  MR_Word mercury__map__Map_12,
#line 514 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 514 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 514 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 514 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 514 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 514 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 514 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 514 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 514 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_7(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1258 "map.m"
    return mercury__map__succeeded;
#line 1258 "map.m"
  }
#line 514 "map.m"
}

#line 512 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_6(
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 512 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 512 "map.m"
  MR_Word mercury__map__Pred_11,
#line 512 "map.m"
  MR_Word mercury__map__Map_12,
#line 512 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 512 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 512 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 512 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 512 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 512 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 512 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 512 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 512 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_6(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1258 "map.m"
    return mercury__map__succeeded;
#line 1258 "map.m"
  }
#line 512 "map.m"
}

#line 510 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_5(
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 510 "map.m"
  MR_Word mercury__map__Pred_11,
#line 510 "map.m"
  MR_Word mercury__map__Map_12,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 510 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 510 "map.m"
}

#line 508 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_4(
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 508 "map.m"
  MR_Word mercury__map__Pred_11,
#line 508 "map.m"
  MR_Word mercury__map__Map_12,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 508 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 508 "map.m"
}

#line 506 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_3(
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 506 "map.m"
  MR_Word mercury__map__Pred_11,
#line 506 "map.m"
  MR_Word mercury__map__Map_12,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 506 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 506 "map.m"
}

#line 504 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_2(
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 504 "map.m"
  MR_Word mercury__map__Pred_11,
#line 504 "map.m"
  MR_Word mercury__map__Map_12,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 504 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 504 "map.m"
}

#line 502 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_1(
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 502 "map.m"
  MR_Word mercury__map__Pred_11,
#line 502 "map.m"
  MR_Word mercury__map__Map_12,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 502 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 502 "map.m"
}

#line 500 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_0(
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 500 "map.m"
  MR_Word mercury__map__Pred_11,
#line 500 "map.m"
  MR_Word mercury__map__Map_12,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 500 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    {
#line 1258 "map.m"
      mercury__tree234__foldr4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1258 "map.m"
      return;
    }
#line 1258 "map.m"
  }
#line 500 "map.m"
}

#line 495 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_7(
#line 495 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 495 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 495 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 495 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 495 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 495 "map.m"
  MR_Word mercury__map__Pred_9,
#line 495 "map.m"
  MR_Word mercury__map__Map_10,
#line 495 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 495 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 495 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 495 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 495 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 495 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 495 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1255 "map.m"
    return mercury__map__succeeded;
#line 1255 "map.m"
  }
#line 495 "map.m"
}

#line 493 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_6(
#line 493 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 493 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 493 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 493 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 493 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 493 "map.m"
  MR_Word mercury__map__Pred_9,
#line 493 "map.m"
  MR_Word mercury__map__Map_10,
#line 493 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 493 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 493 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 493 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 493 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 493 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 493 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1255 "map.m"
    return mercury__map__succeeded;
#line 1255 "map.m"
  }
#line 493 "map.m"
}

#line 491 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_5(
#line 491 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 491 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 491 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 491 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 491 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 491 "map.m"
  MR_Word mercury__map__Pred_9,
#line 491 "map.m"
  MR_Word mercury__map__Map_10,
#line 491 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 491 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 491 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 491 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 491 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 491 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 491 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1255 "map.m"
    return mercury__map__succeeded;
#line 1255 "map.m"
  }
#line 491 "map.m"
}

#line 489 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_4(
#line 489 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 489 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 489 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 489 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 489 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 489 "map.m"
  MR_Word mercury__map__Pred_9,
#line 489 "map.m"
  MR_Word mercury__map__Map_10,
#line 489 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 489 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 489 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 489 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 489 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 489 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 489 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      mercury__tree234__foldr3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1255 "map.m"
      return;
    }
#line 1255 "map.m"
  }
#line 489 "map.m"
}

#line 487 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_3(
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 487 "map.m"
  MR_Word mercury__map__Pred_9,
#line 487 "map.m"
  MR_Word mercury__map__Map_10,
#line 487 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 487 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 487 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 487 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 487 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 487 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 487 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      mercury__tree234__foldr3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1255 "map.m"
      return;
    }
#line 1255 "map.m"
  }
#line 487 "map.m"
}

#line 485 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_2(
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 485 "map.m"
  MR_Word mercury__map__Pred_9,
#line 485 "map.m"
  MR_Word mercury__map__Map_10,
#line 485 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 485 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 485 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 485 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 485 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 485 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 485 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      mercury__tree234__foldr3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1255 "map.m"
      return;
    }
#line 1255 "map.m"
  }
#line 485 "map.m"
}

#line 483 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_1(
#line 483 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 483 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 483 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 483 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 483 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 483 "map.m"
  MR_Word mercury__map__Pred_9,
#line 483 "map.m"
  MR_Word mercury__map__Map_10,
#line 483 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 483 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 483 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 483 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 483 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 483 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 483 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      mercury__tree234__foldr3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1255 "map.m"
      return;
    }
#line 1255 "map.m"
  }
#line 483 "map.m"
}

#line 481 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_0(
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 481 "map.m"
  MR_Word mercury__map__Pred_9,
#line 481 "map.m"
  MR_Word mercury__map__Map_10,
#line 481 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 481 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 481 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 481 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 481 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 481 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 481 "map.m"
{
#line 1255 "map.m"
  {
#line 1255 "map.m"
    MR_bool mercury__map__succeeded;

#line 1255 "map.m"
    {
#line 1255 "map.m"
      mercury__tree234__foldr3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1255 "map.m"
      return;
    }
#line 1255 "map.m"
  }
#line 481 "map.m"
}

#line 477 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_6(
#line 477 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 477 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 477 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 477 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 477 "map.m"
  MR_Word mercury__map__Pred_7,
#line 477 "map.m"
  MR_Word mercury__map__Map_8,
#line 477 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 477 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 477 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 477 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 477 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1252 "map.m"
    return mercury__map__succeeded;
#line 1252 "map.m"
  }
#line 477 "map.m"
}

#line 475 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_5(
#line 475 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 475 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 475 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 475 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 475 "map.m"
  MR_Word mercury__map__Pred_7,
#line 475 "map.m"
  MR_Word mercury__map__Map_8,
#line 475 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 475 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 475 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 475 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 475 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1252 "map.m"
    return mercury__map__succeeded;
#line 1252 "map.m"
  }
#line 475 "map.m"
}

#line 473 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_4(
#line 473 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 473 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 473 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 473 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 473 "map.m"
  MR_Word mercury__map__Pred_7,
#line 473 "map.m"
  MR_Word mercury__map__Map_8,
#line 473 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 473 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 473 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 473 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 473 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1252 "map.m"
    return mercury__map__succeeded;
#line 1252 "map.m"
  }
#line 473 "map.m"
}

#line 471 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_3(
#line 471 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 471 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 471 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 471 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 471 "map.m"
  MR_Word mercury__map__Pred_7,
#line 471 "map.m"
  MR_Word mercury__map__Map_8,
#line 471 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 471 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 471 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 471 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 471 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      mercury__tree234__foldr2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1252 "map.m"
      return;
    }
#line 1252 "map.m"
  }
#line 471 "map.m"
}

#line 469 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_2(
#line 469 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 469 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 469 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 469 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 469 "map.m"
  MR_Word mercury__map__Pred_7,
#line 469 "map.m"
  MR_Word mercury__map__Map_8,
#line 469 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 469 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 469 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 469 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 469 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      mercury__tree234__foldr2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1252 "map.m"
      return;
    }
#line 1252 "map.m"
  }
#line 469 "map.m"
}

#line 467 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_1(
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 467 "map.m"
  MR_Word mercury__map__Pred_7,
#line 467 "map.m"
  MR_Word mercury__map__Map_8,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 467 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      mercury__tree234__foldr2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1252 "map.m"
      return;
    }
#line 1252 "map.m"
  }
#line 467 "map.m"
}

#line 465 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_0(
#line 465 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 465 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 465 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 465 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 465 "map.m"
  MR_Word mercury__map__Pred_7,
#line 465 "map.m"
  MR_Word mercury__map__Map_8,
#line 465 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 465 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 465 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 465 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 465 "map.m"
{
#line 1252 "map.m"
  {
#line 1252 "map.m"
    MR_bool mercury__map__succeeded;

#line 1252 "map.m"
    {
#line 1252 "map.m"
      mercury__tree234__foldr2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1252 "map.m"
      return;
    }
#line 1252 "map.m"
  }
#line 465 "map.m"
}

#line 462 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_8(
#line 462 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 462 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 462 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 462 "map.m"
  MR_Word mercury__map__Pred_5,
#line 462 "map.m"
  MR_Word mercury__map__Map_6,
#line 462 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 462 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 462 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 462 "map.m"
}

#line 460 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_7(
#line 460 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 460 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 460 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 460 "map.m"
  MR_Word mercury__map__Pred_5,
#line 460 "map.m"
  MR_Word mercury__map__Map_6,
#line 460 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 460 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 460 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 460 "map.m"
}

#line 459 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_6(
#line 459 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 459 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 459 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 459 "map.m"
  MR_Word mercury__map__Pred_5,
#line 459 "map.m"
  MR_Word mercury__map__Map_6,
#line 459 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 459 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 459 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 459 "map.m"
}

#line 458 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_5(
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 458 "map.m"
  MR_Word mercury__map__Pred_5,
#line 458 "map.m"
  MR_Word mercury__map__Map_6,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 458 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1249 "map.m"
    return mercury__map__succeeded;
#line 1249 "map.m"
  }
#line 458 "map.m"
}

#line 457 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_4(
#line 457 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 457 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 457 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 457 "map.m"
  MR_Word mercury__map__Pred_5,
#line 457 "map.m"
  MR_Word mercury__map__Map_6,
#line 457 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 457 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 457 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1249 "map.m"
    return mercury__map__succeeded;
#line 1249 "map.m"
  }
#line 457 "map.m"
}

#line 456 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_3(
#line 456 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 456 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 456 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 456 "map.m"
  MR_Word mercury__map__Pred_5,
#line 456 "map.m"
  MR_Word mercury__map__Map_6,
#line 456 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 456 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 456 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1249 "map.m"
    return mercury__map__succeeded;
#line 1249 "map.m"
  }
#line 456 "map.m"
}

#line 455 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_2(
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 455 "map.m"
  MR_Word mercury__map__Pred_5,
#line 455 "map.m"
  MR_Word mercury__map__Map_6,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 455 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 455 "map.m"
}

#line 454 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_1(
#line 454 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 454 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 454 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 454 "map.m"
  MR_Word mercury__map__Pred_5,
#line 454 "map.m"
  MR_Word mercury__map__Map_6,
#line 454 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 454 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 454 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 454 "map.m"
}

#line 453 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_0(
#line 453 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 453 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 453 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 453 "map.m"
  MR_Word mercury__map__Pred_5,
#line 453 "map.m"
  MR_Word mercury__map__Map_6,
#line 453 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 453 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 453 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__tree234__foldr_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1249 "map.m"
      return;
    }
#line 1249 "map.m"
  }
#line 453 "map.m"
}

#line 451 "map.m"
MR_Box MR_CALL 
mercury__map__foldr_3_f_0(
#line 451 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_22,
#line 451 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 451 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 451 "map.m"
  MR_Word mercury__map__F_5,
#line 451 "map.m"
  MR_Word mercury__map__M_6,
#line 451 "map.m"
  MR_Box mercury__map__A_7)
#line 451 "map.m"
{
#line 1249 "map.m"
  {
#line 1249 "map.m"
    MR_bool mercury__map__succeeded;
#line 1249 "map.m"
    MR_Box mercury__map__B_8;

#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
#line 1249 "map.m"
    return mercury__map__B_8;
#line 1249 "map.m"
  }
#line 451 "map.m"
}

#line 448 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_8(
#line 448 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 448 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 448 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 448 "map.m"
  MR_Word mercury__map__Pred_5,
#line 448 "map.m"
  MR_Word mercury__map__Map_6,
#line 448 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 448 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 448 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_8(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 448 "map.m"
}

#line 447 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_7(
#line 447 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 447 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 447 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 447 "map.m"
  MR_Word mercury__map__Pred_5,
#line 447 "map.m"
  MR_Word mercury__map__Map_6,
#line 447 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 447 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 447 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_7(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 447 "map.m"
}

#line 445 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_6(
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 445 "map.m"
  MR_Word mercury__map__Pred_5,
#line 445 "map.m"
  MR_Word mercury__map__Map_6,
#line 445 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 445 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 445 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_6(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 445 "map.m"
}

#line 444 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_5(
#line 444 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 444 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 444 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 444 "map.m"
  MR_Word mercury__map__Pred_5,
#line 444 "map.m"
  MR_Word mercury__map__Map_6,
#line 444 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 444 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 444 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_5(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1242 "map.m"
    return mercury__map__succeeded;
#line 1242 "map.m"
  }
#line 444 "map.m"
}

#line 442 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_4(
#line 442 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 442 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 442 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 442 "map.m"
  MR_Word mercury__map__Pred_5,
#line 442 "map.m"
  MR_Word mercury__map__Map_6,
#line 442 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 442 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 442 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_4(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1242 "map.m"
    return mercury__map__succeeded;
#line 1242 "map.m"
  }
#line 442 "map.m"
}

#line 441 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_3(
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 441 "map.m"
  MR_Word mercury__map__Pred_5,
#line 441 "map.m"
  MR_Word mercury__map__Map_6,
#line 441 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 441 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 441 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_3(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1242 "map.m"
    return mercury__map__succeeded;
#line 1242 "map.m"
  }
#line 441 "map.m"
}

#line 440 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_2(
#line 440 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 440 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 440 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 440 "map.m"
  MR_Word mercury__map__Pred_5,
#line 440 "map.m"
  MR_Word mercury__map__Map_6,
#line 440 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 440 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 440 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_2(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 440 "map.m"
}

#line 439 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_1(
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 439 "map.m"
  MR_Word mercury__map__Pred_5,
#line 439 "map.m"
  MR_Word mercury__map__Map_6,
#line 439 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 439 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 439 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_1(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 439 "map.m"
}

#line 438 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_0(
#line 438 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 438 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 438 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 438 "map.m"
  MR_Word mercury__map__Pred_5,
#line 438 "map.m"
  MR_Word mercury__map__Map_6,
#line 438 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 438 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 438 "map.m"
{
#line 1242 "map.m"
  {
#line 1242 "map.m"
    MR_bool mercury__map__succeeded;

#line 1242 "map.m"
    {
#line 1242 "map.m"
      mercury__tree234__foldl_values_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1242 "map.m"
      return;
    }
#line 1242 "map.m"
  }
#line 438 "map.m"
}

#line 431 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_5(
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 431 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 431 "map.m"
  MR_Word mercury__map__Pred_11,
#line 431 "map.m"
  MR_Word mercury__map__Map_12,
#line 431 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 431 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 431 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 431 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 431 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 431 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 431 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 431 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 431 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__tree234__foldl4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1239 "map.m"
      return;
    }
#line 1239 "map.m"
  }
#line 431 "map.m"
}

#line 429 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_4(
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 429 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 429 "map.m"
  MR_Word mercury__map__Pred_11,
#line 429 "map.m"
  MR_Word mercury__map__Map_12,
#line 429 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 429 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 429 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 429 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 429 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 429 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 429 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 429 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 429 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__tree234__foldl4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1239 "map.m"
      return;
    }
#line 1239 "map.m"
  }
#line 429 "map.m"
}

#line 427 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_3(
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 427 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 427 "map.m"
  MR_Word mercury__map__Pred_11,
#line 427 "map.m"
  MR_Word mercury__map__Map_12,
#line 427 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 427 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 427 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 427 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 427 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 427 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 427 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 427 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 427 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__tree234__foldl4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1239 "map.m"
      return;
    }
#line 1239 "map.m"
  }
#line 427 "map.m"
}

#line 425 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_2(
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 425 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 425 "map.m"
  MR_Word mercury__map__Pred_11,
#line 425 "map.m"
  MR_Word mercury__map__Map_12,
#line 425 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 425 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 425 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 425 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 425 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 425 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 425 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 425 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 425 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__tree234__foldl4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1239 "map.m"
      return;
    }
#line 1239 "map.m"
  }
#line 425 "map.m"
}

#line 423 "map.m"
MR_bool MR_CALL 
mercury__map__foldl4_10_p_1(
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 423 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 423 "map.m"
  MR_Word mercury__map__Pred_11,
#line 423 "map.m"
  MR_Word mercury__map__Map_12,
#line 423 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 423 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 423 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 423 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 423 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 423 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 423 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 423 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 423 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1239 "map.m"
    return mercury__map__succeeded;
#line 1239 "map.m"
  }
#line 423 "map.m"
}

#line 421 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_0(
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 421 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 421 "map.m"
  MR_Word mercury__map__Pred_11,
#line 421 "map.m"
  MR_Word mercury__map__Map_12,
#line 421 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 421 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 421 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 421 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 421 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 421 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 421 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 421 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 421 "map.m"
{
#line 1239 "map.m"
  {
#line 1239 "map.m"
    MR_bool mercury__map__succeeded;

#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__tree234__foldl4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1239 "map.m"
      return;
    }
#line 1239 "map.m"
  }
#line 421 "map.m"
}

#line 411 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_7(
#line 411 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 411 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 411 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 411 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 411 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 411 "map.m"
  MR_Word mercury__map__Pred_9,
#line 411 "map.m"
  MR_Word mercury__map__Map_10,
#line 411 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 411 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 411 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 411 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 411 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 411 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 411 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1236 "map.m"
    return mercury__map__succeeded;
#line 1236 "map.m"
  }
#line 411 "map.m"
}

#line 409 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_6(
#line 409 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 409 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 409 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 409 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 409 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 409 "map.m"
  MR_Word mercury__map__Pred_9,
#line 409 "map.m"
  MR_Word mercury__map__Map_10,
#line 409 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 409 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 409 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 409 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 409 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 409 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 409 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1236 "map.m"
    return mercury__map__succeeded;
#line 1236 "map.m"
  }
#line 409 "map.m"
}

#line 407 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_5(
#line 407 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 407 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 407 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 407 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 407 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 407 "map.m"
  MR_Word mercury__map__Pred_9,
#line 407 "map.m"
  MR_Word mercury__map__Map_10,
#line 407 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 407 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 407 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 407 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 407 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 407 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 407 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1236 "map.m"
    return mercury__map__succeeded;
#line 1236 "map.m"
  }
#line 407 "map.m"
}

#line 405 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_4(
#line 405 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 405 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 405 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 405 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 405 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 405 "map.m"
  MR_Word mercury__map__Pred_9,
#line 405 "map.m"
  MR_Word mercury__map__Map_10,
#line 405 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 405 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 405 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 405 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 405 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 405 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 405 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      mercury__tree234__foldl3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1236 "map.m"
      return;
    }
#line 1236 "map.m"
  }
#line 405 "map.m"
}

#line 403 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_3(
#line 403 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 403 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 403 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 403 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 403 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 403 "map.m"
  MR_Word mercury__map__Pred_9,
#line 403 "map.m"
  MR_Word mercury__map__Map_10,
#line 403 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 403 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 403 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 403 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 403 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 403 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 403 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      mercury__tree234__foldl3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1236 "map.m"
      return;
    }
#line 1236 "map.m"
  }
#line 403 "map.m"
}

#line 401 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_2(
#line 401 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 401 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 401 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 401 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 401 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 401 "map.m"
  MR_Word mercury__map__Pred_9,
#line 401 "map.m"
  MR_Word mercury__map__Map_10,
#line 401 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 401 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 401 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 401 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 401 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 401 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 401 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      mercury__tree234__foldl3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1236 "map.m"
      return;
    }
#line 1236 "map.m"
  }
#line 401 "map.m"
}

#line 399 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_1(
#line 399 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 399 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 399 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 399 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 399 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 399 "map.m"
  MR_Word mercury__map__Pred_9,
#line 399 "map.m"
  MR_Word mercury__map__Map_10,
#line 399 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 399 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 399 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 399 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 399 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 399 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 399 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      mercury__tree234__foldl3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1236 "map.m"
      return;
    }
#line 1236 "map.m"
  }
#line 399 "map.m"
}

#line 397 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_0(
#line 397 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 397 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 397 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 397 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 397 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 397 "map.m"
  MR_Word mercury__map__Pred_9,
#line 397 "map.m"
  MR_Word mercury__map__Map_10,
#line 397 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 397 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 397 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 397 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 397 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 397 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 397 "map.m"
{
#line 1236 "map.m"
  {
#line 1236 "map.m"
    MR_bool mercury__map__succeeded;

#line 1236 "map.m"
    {
#line 1236 "map.m"
      mercury__tree234__foldl3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1236 "map.m"
      return;
    }
#line 1236 "map.m"
  }
#line 397 "map.m"
}

#line 388 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_10(
#line 388 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 388 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 388 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 388 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 388 "map.m"
  MR_Word mercury__map__Pred_7,
#line 388 "map.m"
  MR_Word mercury__map__Map_8,
#line 388 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 388 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 388 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 388 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 388 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_10(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 388 "map.m"
}

#line 386 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_9(
#line 386 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 386 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 386 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 386 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 386 "map.m"
  MR_Word mercury__map__Pred_7,
#line 386 "map.m"
  MR_Word mercury__map__Map_8,
#line 386 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 386 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 386 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 386 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 386 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_9(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 386 "map.m"
}

#line 384 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_8(
#line 384 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 384 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 384 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 384 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 384 "map.m"
  MR_Word mercury__map__Pred_7,
#line 384 "map.m"
  MR_Word mercury__map__Map_8,
#line 384 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 384 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 384 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 384 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 384 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_8(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 384 "map.m"
}

#line 382 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_7(
#line 382 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 382 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 382 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 382 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 382 "map.m"
  MR_Word mercury__map__Pred_7,
#line 382 "map.m"
  MR_Word mercury__map__Map_8,
#line 382 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 382 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 382 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 382 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 382 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_7(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 382 "map.m"
}

#line 380 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_6(
#line 380 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 380 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 380 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 380 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 380 "map.m"
  MR_Word mercury__map__Pred_7,
#line 380 "map.m"
  MR_Word mercury__map__Map_8,
#line 380 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 380 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 380 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 380 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 380 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1233 "map.m"
    return mercury__map__succeeded;
#line 1233 "map.m"
  }
#line 380 "map.m"
}

#line 378 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_5(
#line 378 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 378 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 378 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 378 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 378 "map.m"
  MR_Word mercury__map__Pred_7,
#line 378 "map.m"
  MR_Word mercury__map__Map_8,
#line 378 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 378 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 378 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 378 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 378 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1233 "map.m"
    return mercury__map__succeeded;
#line 1233 "map.m"
  }
#line 378 "map.m"
}

#line 376 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_4(
#line 376 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 376 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 376 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 376 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 376 "map.m"
  MR_Word mercury__map__Pred_7,
#line 376 "map.m"
  MR_Word mercury__map__Map_8,
#line 376 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 376 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 376 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 376 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 376 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1233 "map.m"
    return mercury__map__succeeded;
#line 1233 "map.m"
  }
#line 376 "map.m"
}

#line 374 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_3(
#line 374 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 374 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 374 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 374 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 374 "map.m"
  MR_Word mercury__map__Pred_7,
#line 374 "map.m"
  MR_Word mercury__map__Map_8,
#line 374 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 374 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 374 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 374 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 374 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 374 "map.m"
}

#line 372 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_2(
#line 372 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 372 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 372 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 372 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 372 "map.m"
  MR_Word mercury__map__Pred_7,
#line 372 "map.m"
  MR_Word mercury__map__Map_8,
#line 372 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 372 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 372 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 372 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 372 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 372 "map.m"
}

#line 370 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_1(
#line 370 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 370 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 370 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 370 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 370 "map.m"
  MR_Word mercury__map__Pred_7,
#line 370 "map.m"
  MR_Word mercury__map__Map_8,
#line 370 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 370 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 370 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 370 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 370 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 370 "map.m"
}

#line 368 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_0(
#line 368 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 368 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 368 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 368 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 368 "map.m"
  MR_Word mercury__map__Pred_7,
#line 368 "map.m"
  MR_Word mercury__map__Map_8,
#line 368 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 368 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 368 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 368 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 368 "map.m"
{
#line 1233 "map.m"
  {
#line 1233 "map.m"
    MR_bool mercury__map__succeeded;

#line 1233 "map.m"
    {
#line 1233 "map.m"
      mercury__tree234__foldl2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1233 "map.m"
      return;
    }
#line 1233 "map.m"
  }
#line 368 "map.m"
}

#line 359 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_8(
#line 359 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 359 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 359 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 359 "map.m"
  MR_Word mercury__map__Pred_5,
#line 359 "map.m"
  MR_Word mercury__map__Map_6,
#line 359 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 359 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 359 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 359 "map.m"
}

#line 358 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_7(
#line 358 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 358 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 358 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 358 "map.m"
  MR_Word mercury__map__Pred_5,
#line 358 "map.m"
  MR_Word mercury__map__Map_6,
#line 358 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 358 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 358 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 358 "map.m"
}

#line 357 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_6(
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 357 "map.m"
  MR_Word mercury__map__Pred_5,
#line 357 "map.m"
  MR_Word mercury__map__Map_6,
#line 357 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 357 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 357 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 357 "map.m"
}

#line 356 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_5(
#line 356 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 356 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 356 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 356 "map.m"
  MR_Word mercury__map__Pred_5,
#line 356 "map.m"
  MR_Word mercury__map__Map_6,
#line 356 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 356 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 356 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1230 "map.m"
    return mercury__map__succeeded;
#line 1230 "map.m"
  }
#line 356 "map.m"
}

#line 355 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_4(
#line 355 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 355 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 355 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 355 "map.m"
  MR_Word mercury__map__Pred_5,
#line 355 "map.m"
  MR_Word mercury__map__Map_6,
#line 355 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 355 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 355 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1230 "map.m"
    return mercury__map__succeeded;
#line 1230 "map.m"
  }
#line 355 "map.m"
}

#line 354 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_3(
#line 354 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 354 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 354 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 354 "map.m"
  MR_Word mercury__map__Pred_5,
#line 354 "map.m"
  MR_Word mercury__map__Map_6,
#line 354 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 354 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 354 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1230 "map.m"
    return mercury__map__succeeded;
#line 1230 "map.m"
  }
#line 354 "map.m"
}

#line 353 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_2(
#line 353 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 353 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 353 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 353 "map.m"
  MR_Word mercury__map__Pred_5,
#line 353 "map.m"
  MR_Word mercury__map__Map_6,
#line 353 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 353 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 353 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 353 "map.m"
}

#line 352 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_1(
#line 352 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 352 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 352 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 352 "map.m"
  MR_Word mercury__map__Pred_5,
#line 352 "map.m"
  MR_Word mercury__map__Map_6,
#line 352 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 352 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 352 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 352 "map.m"
}

#line 351 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_0(
#line 351 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 351 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 351 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 351 "map.m"
  MR_Word mercury__map__Pred_5,
#line 351 "map.m"
  MR_Word mercury__map__Map_6,
#line 351 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 351 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 351 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__tree234__foldl_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1230 "map.m"
      return;
    }
#line 1230 "map.m"
  }
#line 351 "map.m"
}

#line 349 "map.m"
MR_Box MR_CALL 
mercury__map__foldl_3_f_0(
#line 349 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_22,
#line 349 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 349 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 349 "map.m"
  MR_Word mercury__map__F_5,
#line 349 "map.m"
  MR_Word mercury__map__M_6,
#line 349 "map.m"
  MR_Box mercury__map__A_7)
#line 349 "map.m"
{
#line 1230 "map.m"
  {
#line 1230 "map.m"
    MR_bool mercury__map__succeeded;
#line 1230 "map.m"
    MR_Box mercury__map__B_8;

#line 1230 "map.m"
    {
#line 1230 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
#line 1230 "map.m"
    return mercury__map__B_8;
#line 1230 "map.m"
  }
#line 349 "map.m"
}

#line 343 "map.m"
MR_bool MR_CALL 
mercury__map__remove_smallest_4_p_0(
#line 343 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 343 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 343 "map.m"
  MR_Box * mercury__map__K_5,
#line 343 "map.m"
  MR_Box * mercury__map__V_6,
#line 343 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 343 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 343 "map.m"
{
#line 65 "tree234.opt"
  {
#line 65 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 65 "tree234.opt"
    MR_Word mercury__map__V_9_17;

#line 65 "tree234.opt"
    {
#line 65 "tree234.opt"
      mercury__map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_9, &mercury__map__V_9_17);
    }
#line 65 "tree234.opt"
    return mercury__map__succeeded;
#line 65 "tree234.opt"
  }
#line 343 "map.m"
}

#line 339 "map.m"
void MR_CALL 
mercury__map__optimize_2_p_0(
#line 339 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_4,
#line 339 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_5,
#line 339 "map.m"
  MR_Word mercury__map__Map_3,
#line 339 "map.m"
  MR_Word * mercury__map__Map_2)
#line 339 "map.m"
{
#line 1138 "map.m"
  {
#line 1138 "map.m"
    MR_bool mercury__map__succeeded;

#line 1138 "map.m"
    *mercury__map__Map_2 = mercury__map__Map_3;
#line 1138 "map.m"
  }
#line 339 "map.m"
}

#line 338 "map.m"
MR_Word MR_CALL 
mercury__map__optimize_1_f_0(
#line 338 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 338 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 338 "map.m"
  MR_Word mercury__map__M1_3)
#line 338 "map.m"
{
#line 1138 "map.m"
  {
#line 1138 "map.m"
    MR_bool mercury__map__succeeded;
#line 1138 "map.m"
    MR_Word mercury__map__M2_4 = mercury__map__M1_3;

#line 1138 "map.m"
    return mercury__map__M2_4;
#line 1138 "map.m"
  }
#line 338 "map.m"
}

#line 331 "map.m"
void MR_CALL 
mercury__map__apply_to_list_3_p_0(
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_10,
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 331 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 331 "map.m"
  MR_Word mercury__map__Map_2,
#line 331 "map.m"
  MR_Word * mercury__map__HeadVar__3_3)
#line 331 "map.m"
{
#line 1213 "map.m"
  {
#line 1213 "map.m"
    MR_bool mercury__map__succeeded;

#line 1213 "map.m"
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "map.m"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1213 "map.m"
    else
#line 1214 "map.m"
      {
#line 1214 "map.m"
        MR_Box mercury__map__K_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1214 "map.m"
        MR_Word mercury__map__Ks_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1214 "map.m"
        MR_Box mercury__map__V_8;
#line 1214 "map.m"
        MR_Word mercury__map__Vs_9;
#line 837 "map.m"
        MR_Box mercury__map__VPrime_15;

#line 835 "map.m"
        {
#line 835 "map.m"
          mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Map_2, mercury__map__K_5, &mercury__map__VPrime_15);
        }
#line 837 "map.m"
        if (mercury__map__succeeded)
#line 836 "map.m"
          mercury__map__V_8 = mercury__map__VPrime_15;
#line 837 "map.m"
        else
#line 838 "map.m"
          {
#line 838 "map.m"
            {
#line 838 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", mercury__map__K_5);
#line 838 "map.m"
              return;
            }
#line 838 "map.m"
          }
#line 1216 "map.m"
        {
#line 1216 "map.m"
          mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Ks_6, mercury__map__Map_2, &mercury__map__Vs_9);
        }
#line 1214 "map.m"
        {
#line 1214 "map.m"
          MR_Word base;
#line 1214 "map.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "map.m"
          *mercury__map__HeadVar__3_3 = base;
#line 1214 "map.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__V_8;
#line 1214 "map.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__map__Vs_9));
#line 1214 "map.m"
        }
#line 1214 "map.m"
      }
#line 1213 "map.m"
  }
#line 331 "map.m"
}

#line 330 "map.m"
MR_Word MR_CALL 
mercury__map__apply_to_list_2_f_0(
#line 330 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 330 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 330 "map.m"
  MR_Word mercury__map__Ks_4,
#line 330 "map.m"
  MR_Word mercury__map__M_5)
#line 330 "map.m"
{
#line 1211 "map.m"
  {
#line 1211 "map.m"
    MR_bool mercury__map__succeeded;
#line 1211 "map.m"
    MR_Word mercury__map__Vs_6;

#line 1211 "map.m"
    {
#line 1211 "map.m"
      mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__M_5, &mercury__map__Vs_6);
    }
#line 1211 "map.m"
    return mercury__map__Vs_6;
#line 1211 "map.m"
  }
#line 330 "map.m"
}

#line 324 "map.m"
void MR_CALL 
mercury__map__select_sorted_list_3_p_0(
#line 324 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 324 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 324 "map.m"
  MR_Word mercury__map__Original_4,
#line 324 "map.m"
  MR_Word mercury__map__Keys_5,
#line 324 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 324 "map.m"
{
#line 1191 "map.m"
  {
#line 1191 "map.m"
    MR_bool mercury__map__succeeded;
#line 1191 "map.m"
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1193 "map.m"
    {
#line 1193 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
#line 1193 "map.m"
      return;
    }
#line 1191 "map.m"
  }
#line 324 "map.m"
}

#line 323 "map.m"
MR_Word MR_CALL 
mercury__map__select_sorted_list_2_f_0(
#line 323 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 323 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 323 "map.m"
  MR_Word mercury__map__M1_4,
#line 323 "map.m"
  MR_Word mercury__map__S_5)
#line 323 "map.m"
{
#line 1191 "map.m"
  {
#line 1191 "map.m"
    MR_bool mercury__map__succeeded;
#line 1191 "map.m"
    MR_Word mercury__map__M2_6;
#line 1191 "map.m"
    MR_Word mercury__map__NewMap0_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1193 "map.m"
    {
#line 1193 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_12, &mercury__map__M2_6);
    }
#line 1191 "map.m"
    return mercury__map__M2_6;
#line 1191 "map.m"
  }
#line 323 "map.m"
}

#line 318 "map.m"
void MR_CALL 
mercury__map__select_3_p_0(
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 318 "map.m"
  MR_Word mercury__map__Original_4,
#line 318 "map.m"
  MR_Word mercury__map__KeySet_5,
#line 318 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 318 "map.m"
{
#line 1186 "map.m"
  {
#line 1186 "map.m"
    MR_bool mercury__map__succeeded;
#line 1186 "map.m"
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
#line 1186 "map.m"
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1189 "map.m"
    {
#line 1189 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
#line 1189 "map.m"
      return;
    }
#line 1186 "map.m"
  }
#line 318 "map.m"
}

#line 317 "map.m"
MR_Word MR_CALL 
mercury__map__select_2_f_0(
#line 317 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 317 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 317 "map.m"
  MR_Word mercury__map__M1_4,
#line 317 "map.m"
  MR_Word mercury__map__S_5)
#line 317 "map.m"
{
#line 1186 "map.m"
  {
#line 1186 "map.m"
    MR_bool mercury__map__succeeded;
#line 1186 "map.m"
    MR_Word mercury__map__M2_6;
#line 1186 "map.m"
    MR_Word mercury__map__Keys_12 = (MR_Word) mercury__map__S_5;
#line 1186 "map.m"
    MR_Word mercury__map__NewMap0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1189 "map.m"
    {
#line 1189 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_12, mercury__map__M1_4, mercury__map__NewMap0_13, &mercury__map__M2_6);
    }
#line 1186 "map.m"
    return mercury__map__M2_6;
#line 1186 "map.m"
  }
#line 317 "map.m"
}

#line 311 "map.m"
void MR_CALL 
mercury__map__overlay_large_map_3_p_0(
#line 311 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 311 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 311 "map.m"
  MR_Word mercury__map__Map0_4,
#line 311 "map.m"
  MR_Word mercury__map__Map1_5,
#line 311 "map.m"
  MR_Word * mercury__map__Map_6)
#line 311 "map.m"
{
#line 1161 "map.m"
  {
#line 1161 "map.m"
    MR_bool mercury__map__succeeded;
#line 1161 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1161 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map0_4, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
#line 1163 "map.m"
    {
#line 1163 "map.m"
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map1_5, mercury__map__Map_6);
#line 1163 "map.m"
      return;
    }
#line 1161 "map.m"
  }
#line 311 "map.m"
}

#line 310 "map.m"
MR_Word MR_CALL 
mercury__map__overlay_large_map_2_f_0(
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 310 "map.m"
  MR_Word mercury__map__M1_4,
#line 310 "map.m"
  MR_Word mercury__map__M2_5)
#line 310 "map.m"
{
#line 1161 "map.m"
  {
#line 1161 "map.m"
    MR_bool mercury__map__succeeded;
#line 1161 "map.m"
    MR_Word mercury__map__M3_6;
#line 1161 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1161 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
#line 1163 "map.m"
    {
#line 1163 "map.m"
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M2_5, &mercury__map__M3_6);
    }
#line 1161 "map.m"
    return mercury__map__M3_6;
#line 1161 "map.m"
  }
#line 310 "map.m"
}

#line 302 "map.m"
void MR_CALL 
mercury__map__overlay_3_p_0(
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 302 "map.m"
  MR_Word mercury__map__Map0_4,
#line 302 "map.m"
  MR_Word mercury__map__Map1_5,
#line 302 "map.m"
  MR_Word * mercury__map__Map_6)
#line 302 "map.m"
{
#line 1145 "map.m"
  {
#line 1145 "map.m"
    MR_bool mercury__map__succeeded;
#line 1145 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1145 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map1_5, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
#line 1147 "map.m"
    {
#line 1147 "map.m"
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
#line 1147 "map.m"
      return;
    }
#line 1145 "map.m"
  }
#line 302 "map.m"
}

#line 301 "map.m"
MR_Word MR_CALL 
mercury__map__overlay_2_f_0(
#line 301 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 301 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 301 "map.m"
  MR_Word mercury__map__M1_4,
#line 301 "map.m"
  MR_Word mercury__map__M2_5)
#line 301 "map.m"
{
#line 1145 "map.m"
  {
#line 1145 "map.m"
    MR_bool mercury__map__succeeded;
#line 1145 "map.m"
    MR_Word mercury__map__M3_6;
#line 1145 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1145 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
#line 1147 "map.m"
    {
#line 1147 "map.m"
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1145 "map.m"
    return mercury__map__M3_6;
#line 1145 "map.m"
  }
#line 301 "map.m"
}

#line 295 "map.m"
void MR_CALL 
mercury__map__merge_3_p_0(
#line 295 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 295 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 295 "map.m"
  MR_Word mercury__map__MA_4,
#line 295 "map.m"
  MR_Word mercury__map__MB_5,
#line 295 "map.m"
  MR_Word * mercury__map__M_6)
#line 295 "map.m"
{
#line 1117 "map.m"
  {
#line 1117 "map.m"
    MR_bool mercury__map__succeeded;
#line 1117 "map.m"
    MR_Word mercury__map__MBList_7;
#line 1117 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MB_5, mercury__map__V_5_14, &mercury__map__MBList_7);
    }
#line 1119 "map.m"
    {
#line 1119 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MBList_7, mercury__map__MA_4, mercury__map__M_6);
#line 1119 "map.m"
      return;
    }
#line 1117 "map.m"
  }
#line 295 "map.m"
}

#line 294 "map.m"
MR_Word MR_CALL 
mercury__map__merge_2_f_0(
#line 294 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 294 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 294 "map.m"
  MR_Word mercury__map__M1_4,
#line 294 "map.m"
  MR_Word mercury__map__M2_5)
#line 294 "map.m"
{
#line 1117 "map.m"
  {
#line 1117 "map.m"
    MR_bool mercury__map__succeeded;
#line 1117 "map.m"
    MR_Word mercury__map__M3_6;
#line 1117 "map.m"
    MR_Word mercury__map__MBList_12;
#line 1117 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__MBList_12);
    }
#line 1119 "map.m"
    {
#line 1119 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__MBList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1117 "map.m"
    return mercury__map__M3_6;
#line 1117 "map.m"
  }
#line 294 "map.m"
}

#line 284 "map.m"
void MR_CALL 
mercury__map__from_corresponding_lists_3_p_0(
#line 284 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 284 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 284 "map.m"
  MR_Word mercury__map__Keys_4,
#line 284 "map.m"
  MR_Word mercury__map__Values_5,
#line 284 "map.m"
  MR_Word * mercury__map__Map_6)
#line 284 "map.m"
{
#line 1108 "map.m"
  {
#line 1108 "map.m"
    MR_bool mercury__map__succeeded;
#line 1108 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1108 "map.m"
    MR_Word mercury__map__V_5_12;

#line 1109 "map.m"
    {
#line 1109 "map.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_4, mercury__map__Values_5, &mercury__map__AssocList_7);
    }
#line 90 "tree234.opt"
    mercury__map__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__V_5_12, mercury__map__Map_6);
#line 91 "tree234.opt"
      return;
    }
#line 1108 "map.m"
  }
#line 284 "map.m"
}

#line 283 "map.m"
MR_Word MR_CALL 
mercury__map__from_corresponding_lists_2_f_0(
#line 283 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 283 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 283 "map.m"
  MR_Word mercury__map__Ks_4,
#line 283 "map.m"
  MR_Word mercury__map__Vs_5)
#line 283 "map.m"
{
#line 1108 "map.m"
  {
#line 1108 "map.m"
    MR_bool mercury__map__succeeded;
#line 1108 "map.m"
    MR_Word mercury__map__M_6;
#line 1108 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1108 "map.m"
    MR_Word mercury__map__V_5_15;

#line 1109 "map.m"
    {
#line 1109 "map.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__Vs_5, &mercury__map__AssocList_12);
    }
#line 90 "tree234.opt"
    mercury__map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__V_5_15, &mercury__map__M_6);
    }
#line 1108 "map.m"
    return mercury__map__M_6;
#line 1108 "map.m"
  }
#line 283 "map.m"
}

#line 279 "map.m"
void MR_CALL 
mercury__map__count_2_p_0(
#line 279 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 279 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 279 "map.m"
  MR_Word mercury__map__Map_3,
#line 279 "map.m"
  MR_Integer * mercury__map__Count_4)
#line 279 "map.m"
{
#line 1096 "map.m"
  {
#line 1096 "map.m"
    MR_bool mercury__map__succeeded;

#line 1096 "map.m"
    {
#line 1096 "map.m"
      mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Map_3, mercury__map__Count_4);
#line 1096 "map.m"
      return;
    }
#line 1096 "map.m"
  }
#line 279 "map.m"
}

#line 278 "map.m"
MR_Integer MR_CALL 
mercury__map__count_1_f_0(
#line 278 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 278 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 278 "map.m"
  MR_Word mercury__map__M_3)
#line 278 "map.m"
{
#line 1096 "map.m"
  {
#line 1096 "map.m"
    MR_bool mercury__map__succeeded;
#line 1096 "map.m"
    MR_Integer mercury__map__N_4;

#line 1096 "map.m"
    {
#line 1096 "map.m"
      mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, &mercury__map__N_4);
    }
#line 1096 "map.m"
    return mercury__map__N_4;
#line 1096 "map.m"
  }
#line 278 "map.m"
}

#line 274 "map.m"
void MR_CALL 
mercury__map__det_remove_4_p_0(
#line 274 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 274 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 274 "map.m"
  MR_Box mercury__map__Key_5,
#line 274 "map.m"
  MR_Box * mercury__map__Value_6,
#line 274 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 274 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 274 "map.m"
{
#line 1088 "map.m"
  {
#line 1088 "map.m"
    MR_bool mercury__map__succeeded;
#line 1088 "map.m"
    MR_Box mercury__map__ValuePrime_8;
#line 1088 "map.m"
    MR_Word mercury__map__MapPrime_9;
#line 63 "tree234.opt"
    MR_Word mercury__map__V_9_20;

#line 63 "tree234.opt"
    {
#line 63 "tree234.opt"
      mercury__map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__Key_5, &mercury__map__ValuePrime_8, &mercury__map__MapPrime_9, &mercury__map__V_9_20);
    }
#line 1088 "map.m"
    if (mercury__map__succeeded)
#line 1086 "map.m"
      {
#line 1086 "map.m"
        *mercury__map__Value_6 = mercury__map__ValuePrime_8;
#line 1087 "map.m"
        *mercury__map__STATE_VARIABLE_Map_11 = mercury__map__MapPrime_9;
#line 1086 "map.m"
      }
#line 1088 "map.m"
    else
#line 1089 "map.m"
      {
#line 1089 "map.m"
        {
#line 1089 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, (MR_String) "map.det_remove: key not found", mercury__map__Key_5);
#line 1089 "map.m"
          return;
        }
#line 1089 "map.m"
      }
#line 1088 "map.m"
  }
#line 274 "map.m"
}

#line 269 "map.m"
MR_bool MR_CALL 
mercury__map__remove_4_p_0(
#line 269 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 269 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 269 "map.m"
  MR_Box mercury__map__Key_5,
#line 269 "map.m"
  MR_Box * mercury__map__Value_6,
#line 269 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 269 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 269 "map.m"
{
#line 63 "tree234.opt"
  {
#line 63 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 63 "tree234.opt"
    MR_Word mercury__map__V_9_17;

#line 63 "tree234.opt"
    {
#line 63 "tree234.opt"
      mercury__map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__Key_5, mercury__map__Value_6, mercury__map__STATE_VARIABLE_Map_9, &mercury__map__V_9_17);
    }
#line 63 "tree234.opt"
    return mercury__map__succeeded;
#line 63 "tree234.opt"
  }
#line 269 "map.m"
}

#line 263 "map.m"
void MR_CALL 
mercury__map__delete_sorted_list_3_p_0(
#line 263 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_19,
#line 263 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_20,
#line 263 "map.m"
  MR_Word mercury__map__DeleteKeys_4,
#line 263 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 263 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13)
#line 263 "map.m"
{
#line 1034 "map.m"
  {
#line 1034 "map.m"
    MR_bool mercury__map__succeeded;
#line 1034 "map.m"
    MR_Integer mercury__map__NumDeleteKeys_6;
#line 1034 "map.m"
    MR_Integer mercury__map__MinSize_7;
#line 1034 "map.m"
    MR_Integer mercury__map__Depth_5_28;
#line 1037 "map.m"
    MR_Integer mercury__map__V_14_14;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, (MR_Integer) 0, &mercury__map__NumDeleteKeys_6);
    }
#line 342 "tree234.opt"
    {
#line 342 "tree234.opt"
      mercury__tree234__find_depth_2_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, &mercury__map__Depth_5_28);
    }
#line 343 "tree234.opt"
    {
#line 343 "tree234.opt"
      mercury__tree234__min_size_based_on_depth_2_p_0(mercury__map__Depth_5_28, &mercury__map__MinSize_7);
    }
#line 1037 "map.m"
    mercury__map__V_14_14 = (mercury__map__NumDeleteKeys_6 * (MR_Integer) 5);
#line 1037 "map.m"
    mercury__map__succeeded = (mercury__map__V_14_14 < mercury__map__MinSize_7);
#line 1040 "map.m"
    if (mercury__map__succeeded)
#line 1039 "map.m"
      {
#line 1039 "map.m"
        mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__DeleteKeys_4, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13);
#line 1039 "map.m"
        return;
      }
#line 1040 "map.m"
    else
#line 1042 "map.m"
      {
#line 1042 "map.m"
        MR_Word mercury__map__Pairs0_8;
#line 1042 "map.m"
        MR_Word mercury__map__RevPairs_9;
#line 1042 "map.m"
        MR_Word mercury__map__LeftOverPairs_10;
#line 1042 "map.m"
        MR_Word mercury__map__Pairs_11;
#line 1042 "map.m"
        MR_Word mercury__map__V_17_17;
#line 1042 "map.m"
        MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "map.m"
        MR_Word mercury__map__V_5_40;
#line 1045 "map.m"
        MR_Word mercury__map__conv0_Pairs_11;

#line 86 "tree234.opt"
        {
#line 86 "tree234.opt"
          mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__V_5_33, &mercury__map__Pairs0_8);
        }
#line 1043 "map.m"
        mercury__map__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1043 "map.m"
        {
#line 1043 "map.m"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, mercury__map__Pairs0_8, mercury__map__V_17_17, &mercury__map__RevPairs_9, &mercury__map__LeftOverPairs_10);
        }
#line 1045 "map.m"
        {
#line 1045 "map.m"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0((MR_Word) mercury__map__RevPairs_9, (MR_Word) mercury__map__LeftOverPairs_10, &mercury__map__conv0_Pairs_11);
        }
#line 1045 "map.m"
        mercury__map__Pairs_11 = (MR_Word) mercury__map__conv0_Pairs_11;
#line 90 "tree234.opt"
        mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
        {
#line 91 "tree234.opt"
          mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__Pairs_11, mercury__map__V_5_40, mercury__map__STATE_VARIABLE_Map_13);
#line 91 "tree234.opt"
          return;
        }
#line 1042 "map.m"
      }
#line 1034 "map.m"
  }
#line 263 "map.m"
}

#line 262 "map.m"
MR_Word MR_CALL 
mercury__map__delete_sorted_list_2_f_0(
#line 262 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 262 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 262 "map.m"
  MR_Word mercury__map__M0_4,
#line 262 "map.m"
  MR_Word mercury__map__Ks_5)
#line 262 "map.m"
{
#line 1032 "map.m"
  {
#line 1032 "map.m"
    MR_bool mercury__map__succeeded;
#line 1032 "map.m"
    MR_Word mercury__map__M_6;

#line 1032 "map.m"
    {
#line 1032 "map.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
#line 1032 "map.m"
    return mercury__map__M_6;
#line 1032 "map.m"
  }
#line 262 "map.m"
}

#line 256 "map.m"
void MR_CALL 
mercury__map__delete_list_3_p_0(
#line 256 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 256 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 256 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 256 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 256 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 256 "map.m"
{
#line 1026 "map.m"
  while (MR_TRUE)
#line 1026 "map.m"
    {
#line 1026 "map.m"
      /* tailcall optimized into a loop */
#line 1026 "map.m"
      {
#line 1026 "map.m"
        MR_bool mercury__map__succeeded;

#line 1026 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1026 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1026 "map.m"
        else
#line 1027 "map.m"
          {
#line 1027 "map.m"
            MR_Box mercury__map__DeleteKey_7 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1027 "map.m"
            MR_Word mercury__map__DeleteKeys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1027 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_12_12;
#line 61 "tree234.opt"
            MR_Word mercury__map__V_7_24;

#line 61 "tree234.opt"
            {
#line 61 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_2, mercury__map__DeleteKey_7, &mercury__map__STATE_VARIABLE_Map_12_12, &mercury__map__V_7_24);
            }
#line 1029 "map.m"
            /* direct tailcall eliminated */
#line 1029 "map.m"
            {
#line 1029 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__DeleteKeys_8;
#line 1029 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_12_12;

#line 1029 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1029 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1029 "map.m"
            }
#line 1029 "map.m"
            continue;
#line 1027 "map.m"
          }
#line 1026 "map.m"
      }
#line 1026 "map.m"
      break;
#line 1026 "map.m"
    }
#line 256 "map.m"
}

#line 255 "map.m"
MR_Word MR_CALL 
mercury__map__delete_list_2_f_0(
#line 255 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 255 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 255 "map.m"
  MR_Word mercury__map__M0_4,
#line 255 "map.m"
  MR_Word mercury__map__Ks_5)
#line 255 "map.m"
{
#line 1024 "map.m"
  {
#line 1024 "map.m"
    MR_bool mercury__map__succeeded;
#line 1024 "map.m"
    MR_Word mercury__map__M_6;

#line 1024 "map.m"
    {
#line 1024 "map.m"
      mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
#line 1024 "map.m"
    return mercury__map__M_6;
#line 1024 "map.m"
  }
#line 255 "map.m"
}

#line 251 "map.m"
void MR_CALL 
mercury__map__delete_3_p_0(
#line 251 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 251 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 251 "map.m"
  MR_Box mercury__map__Key_4,
#line 251 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_6,
#line 251 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_7)
#line 251 "map.m"
{
#line 61 "tree234.opt"
  {
#line 61 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 61 "tree234.opt"
    MR_Word mercury__map__V_7_14;

#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__STATE_VARIABLE_Map_0_6, mercury__map__Key_4, mercury__map__STATE_VARIABLE_Map_7, &mercury__map__V_7_14);
    }
#line 61 "tree234.opt"
  }
#line 251 "map.m"
}

#line 250 "map.m"
MR_Word MR_CALL 
mercury__map__delete_2_f_0(
#line 250 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 250 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 250 "map.m"
  MR_Word mercury__map__M0_4,
#line 250 "map.m"
  MR_Box mercury__map__K_5)
#line 250 "map.m"
{
#line 61 "tree234.opt"
  {
#line 61 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 61 "tree234.opt"
    MR_Word mercury__map__M_6;
#line 61 "tree234.opt"
    MR_Word mercury__map__V_7_17;

#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M0_4, mercury__map__K_5, &mercury__map__M_6, &mercury__map__V_7_17);
    }
#line 61 "tree234.opt"
    return mercury__map__M_6;
#line 61 "tree234.opt"
  }
#line 250 "map.m"
}

#line 244 "map.m"
void MR_CALL 
mercury__map__from_rev_sorted_assoc_list_2_p_0(
#line 244 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 244 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 244 "map.m"
  MR_Word mercury__map__L_3,
#line 244 "map.m"
  MR_Word * mercury__map__M_4)
#line 244 "map.m"
{
#line 1015 "map.m"
  {
#line 1015 "map.m"
    MR_bool mercury__map__succeeded;

#line 1015 "map.m"
    {
#line 1015 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
#line 1015 "map.m"
      return;
    }
#line 1015 "map.m"
  }
#line 244 "map.m"
}

#line 243 "map.m"
MR_Word MR_CALL 
mercury__map__from_rev_sorted_assoc_list_1_f_0(
#line 243 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 243 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 243 "map.m"
  MR_Word mercury__map__AL_3)
#line 243 "map.m"
{
#line 1015 "map.m"
  {
#line 1015 "map.m"
    MR_bool mercury__map__succeeded;
#line 1015 "map.m"
    MR_Word mercury__map__M_4;

#line 1015 "map.m"
    {
#line 1015 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
#line 1015 "map.m"
    return mercury__map__M_4;
#line 1015 "map.m"
  }
#line 243 "map.m"
}

#line 237 "map.m"
void MR_CALL 
mercury__map__from_sorted_assoc_list_2_p_0(
#line 237 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 237 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 237 "map.m"
  MR_Word mercury__map__L_3,
#line 237 "map.m"
  MR_Word * mercury__map__M_4)
#line 237 "map.m"
{
#line 1009 "map.m"
  {
#line 1009 "map.m"
    MR_bool mercury__map__succeeded;

#line 1009 "map.m"
    {
#line 1009 "map.m"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
#line 1009 "map.m"
      return;
    }
#line 1009 "map.m"
  }
#line 237 "map.m"
}

#line 236 "map.m"
MR_Word MR_CALL 
mercury__map__from_sorted_assoc_list_1_f_0(
#line 236 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 236 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 236 "map.m"
  MR_Word mercury__map__AL_3)
#line 236 "map.m"
{
#line 1009 "map.m"
  {
#line 1009 "map.m"
    MR_bool mercury__map__succeeded;
#line 1009 "map.m"
    MR_Word mercury__map__M_4;

#line 1009 "map.m"
    {
#line 1009 "map.m"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
#line 1009 "map.m"
    return mercury__map__M_4;
#line 1009 "map.m"
  }
#line 236 "map.m"
}

#line 232 "map.m"
void MR_CALL 
mercury__map__from_assoc_list_2_p_0(
#line 232 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 232 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 232 "map.m"
  MR_Word mercury__map__L_3,
#line 232 "map.m"
  MR_Word * mercury__map__M_4)
#line 232 "map.m"
{
#line 89 "tree234.opt"
  {
#line 89 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 89 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__V_5_9, mercury__map__M_4);
#line 91 "tree234.opt"
      return;
    }
#line 89 "tree234.opt"
  }
#line 232 "map.m"
}

#line 231 "map.m"
MR_Word MR_CALL 
mercury__map__from_assoc_list_1_f_0(
#line 231 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 231 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 231 "map.m"
  MR_Word mercury__map__AL_3)
#line 231 "map.m"
{
#line 89 "tree234.opt"
  {
#line 89 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 89 "tree234.opt"
    MR_Word mercury__map__M_4;
#line 89 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, mercury__map__V_5_11, &mercury__map__M_4);
    }
#line 89 "tree234.opt"
    return mercury__map__M_4;
#line 89 "tree234.opt"
  }
#line 231 "map.m"
}

#line 227 "map.m"
void MR_CALL 
mercury__map__to_sorted_assoc_list_2_p_0(
#line 227 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 227 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 227 "map.m"
  MR_Word mercury__map__M_3,
#line 227 "map.m"
  MR_Word * mercury__map__L_4)
#line 227 "map.m"
{
#line 84 "tree234.opt"
  {
#line 84 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 84 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_9, mercury__map__L_4);
#line 86 "tree234.opt"
      return;
    }
#line 84 "tree234.opt"
  }
#line 227 "map.m"
}

#line 226 "map.m"
MR_Word MR_CALL 
mercury__map__to_sorted_assoc_list_1_f_0(
#line 226 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 226 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 226 "map.m"
  MR_Word mercury__map__M_3)
#line 226 "map.m"
{
#line 84 "tree234.opt"
  {
#line 84 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 84 "tree234.opt"
    MR_Word mercury__map__AL_4;
#line 84 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__AL_4);
    }
#line 84 "tree234.opt"
    return mercury__map__AL_4;
#line 84 "tree234.opt"
  }
#line 226 "map.m"
}

#line 222 "map.m"
void MR_CALL 
mercury__map__to_assoc_list_2_p_0(
#line 222 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 222 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 222 "map.m"
  MR_Word mercury__map__M_3,
#line 222 "map.m"
  MR_Word * mercury__map__L_4)
#line 222 "map.m"
{
#line 84 "tree234.opt"
  {
#line 84 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 84 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_9, mercury__map__L_4);
#line 86 "tree234.opt"
      return;
    }
#line 84 "tree234.opt"
  }
#line 222 "map.m"
}

#line 221 "map.m"
MR_Word MR_CALL 
mercury__map__to_assoc_list_1_f_0(
#line 221 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 221 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 221 "map.m"
  MR_Word mercury__map__M_3)
#line 221 "map.m"
{
#line 84 "tree234.opt"
  {
#line 84 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 84 "tree234.opt"
    MR_Word mercury__map__AL_4;
#line 84 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__AL_4);
    }
#line 84 "tree234.opt"
    return mercury__map__AL_4;
#line 84 "tree234.opt"
  }
#line 221 "map.m"
}

#line 217 "map.m"
void MR_CALL 
mercury__map__keys_and_values_3_p_0(
#line 217 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 217 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 217 "map.m"
  MR_Word mercury__map__Map_4,
#line 217 "map.m"
  MR_Word * mercury__map__KeyList_5,
#line 217 "map.m"
  MR_Word * mercury__map__ValueList_6)
#line 217 "map.m"
{
#line 76 "tree234.opt"
  {
#line 76 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 76 "tree234.opt"
    MR_Word mercury__map__V_7_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 76 "tree234.opt"
    MR_Word mercury__map__V_8_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__keys_and_values_acc_5_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__V_7_12, mercury__map__KeyList_5, mercury__map__V_8_14, mercury__map__ValueList_6);
#line 79 "tree234.opt"
      return;
    }
#line 76 "tree234.opt"
  }
#line 217 "map.m"
}

#line 215 "map.m"
void MR_CALL 
mercury__map__values_2_p_0(
#line 215 "map.m"
  MR_Word mercury__map__TypeInfo_for__K_5,
#line 215 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 215 "map.m"
  MR_Word mercury__map__Map_3,
#line 215 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 215 "map.m"
{
#line 73 "tree234.opt"
  {
#line 73 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 73 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 75 "tree234.opt"
    {
#line 75 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__map__TypeInfo_for__K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
#line 75 "tree234.opt"
      return;
    }
#line 73 "tree234.opt"
  }
#line 215 "map.m"
}

#line 214 "map.m"
MR_Word MR_CALL 
mercury__map__values_1_f_0(
#line 214 "map.m"
  MR_Word mercury__map__TypeInfo_for__K_5,
#line 214 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 214 "map.m"
  MR_Word mercury__map__M_3)
#line 214 "map.m"
{
#line 73 "tree234.opt"
  {
#line 73 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 73 "tree234.opt"
    MR_Word mercury__map__Vs_4;
#line 73 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 75 "tree234.opt"
    {
#line 75 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__map__TypeInfo_for__K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Vs_4);
    }
#line 73 "tree234.opt"
    return mercury__map__Vs_4;
#line 73 "tree234.opt"
  }
#line 214 "map.m"
}

#line 210 "map.m"
void MR_CALL 
mercury__map__sorted_keys_2_p_0(
#line 210 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 210 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 210 "map.m"
  MR_Word mercury__map__Map_3,
#line 210 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 210 "map.m"
{
#line 68 "tree234.opt"
  {
#line 68 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 68 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
#line 70 "tree234.opt"
      return;
    }
#line 68 "tree234.opt"
  }
#line 210 "map.m"
}

#line 209 "map.m"
MR_Word MR_CALL 
mercury__map__sorted_keys_1_f_0(
#line 209 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 209 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 209 "map.m"
  MR_Word mercury__map__M_3)
#line 209 "map.m"
{
#line 68 "tree234.opt"
  {
#line 68 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 68 "tree234.opt"
    MR_Word mercury__map__Ks_4;
#line 68 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Ks_4);
    }
#line 68 "tree234.opt"
    return mercury__map__Ks_4;
#line 68 "tree234.opt"
  }
#line 209 "map.m"
}

#line 204 "map.m"
void MR_CALL 
mercury__map__keys_2_p_0(
#line 204 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 204 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 204 "map.m"
  MR_Word mercury__map__Map_3,
#line 204 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 204 "map.m"
{
#line 68 "tree234.opt"
  {
#line 68 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 68 "tree234.opt"
    MR_Word mercury__map__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__Map_3, mercury__map__V_5_9, mercury__map__KeyList_4);
#line 70 "tree234.opt"
      return;
    }
#line 68 "tree234.opt"
  }
#line 204 "map.m"
}

#line 203 "map.m"
MR_Word MR_CALL 
mercury__map__keys_1_f_0(
#line 203 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 203 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 203 "map.m"
  MR_Word mercury__map__M_3)
#line 203 "map.m"
{
#line 68 "tree234.opt"
  {
#line 68 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 68 "tree234.opt"
    MR_Word mercury__map__Ks_4;
#line 68 "tree234.opt"
    MR_Word mercury__map__V_5_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for__V_6, mercury__map__M_3, mercury__map__V_5_11, &mercury__map__Ks_4);
    }
#line 68 "tree234.opt"
    return mercury__map__Ks_4;
#line 68 "tree234.opt"
  }
#line 203 "map.m"
}

#line 199 "map.m"
void MR_CALL 
mercury__map__set_4_p_0(
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 199 "map.m"
  MR_Box mercury__map__K_5,
#line 199 "map.m"
  MR_Box mercury__map__V_6,
#line 199 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 199 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 199 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 962 "map.m"
      return;
    }
#line 962 "map.m"
  }
#line 199 "map.m"
}

#line 198 "map.m"
MR_Word MR_CALL 
mercury__map__set_3_f_0(
#line 198 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 198 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 198 "map.m"
  MR_Word mercury__map__M1_5,
#line 198 "map.m"
  MR_Box mercury__map__K_6,
#line 198 "map.m"
  MR_Box mercury__map__V_7)
#line 198 "map.m"
{
#line 962 "map.m"
  {
#line 962 "map.m"
    MR_bool mercury__map__succeeded;
#line 962 "map.m"
    MR_Word mercury__map__M2_8;

#line 962 "map.m"
    {
#line 962 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 962 "map.m"
    return mercury__map__M2_8;
#line 962 "map.m"
  }
#line 198 "map.m"
}

#line 192 "map.m"
void MR_CALL 
mercury__map__det_transform_value_4_p_0(
#line 192 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 192 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 192 "map.m"
  MR_Word mercury__map__P_5,
#line 192 "map.m"
  MR_Box mercury__map__K_6,
#line 192 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 192 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 192 "map.m"
{
#line 950 "map.m"
  {
#line 950 "map.m"
    MR_bool mercury__map__succeeded;
#line 950 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 945 "map.m"
    {
#line 945 "map.m"
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_13, mercury__map__TypeInfo_for_K_14, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 950 "map.m"
    if (mercury__map__succeeded)
#line 949 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 950 "map.m"
    else
#line 951 "map.m"
      {
#line 951 "map.m"
        {
#line 951 "map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_14, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
#line 951 "map.m"
          return;
        }
#line 951 "map.m"
      }
#line 950 "map.m"
  }
#line 192 "map.m"
}

#line 955 "map.m"
static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
#line 955 "map.m"
  MR_Box mercury__map__closure_arg,
#line 955 "map.m"
  MR_Box mercury__map__wrapper_arg_1,
#line 955 "map.m"
  MR_Box * mercury__map__wrapper_arg_2)
#line 955 "map.m"
{
#line 955 "map.m"
  {
#line 955 "map.m"
    MR_Box mercury__map__closure = mercury__map__closure_arg;

#line 955 "map.m"
    {
#line 955 "map.m"
      mercury__map__IntroducedFrom__pred__det_transform_value__955__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 4))), mercury__map__wrapper_arg_1, mercury__map__wrapper_arg_2);
#line 955 "map.m"
      return;
    }
#line 955 "map.m"
  }
#line 955 "map.m"
}

#line 191 "map.m"
MR_Word MR_CALL 
mercury__map__det_transform_value_3_f_0(
#line 191 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 191 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_19,
#line 191 "map.m"
  MR_Word mercury__map__F_5,
#line 191 "map.m"
  MR_Box mercury__map__K_6,
#line 191 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10)
#line 191 "map.m"
{
#line 954 "map.m"
  {
#line 954 "map.m"
    MR_bool mercury__map__succeeded;
#line 954 "map.m"
    MR_Word mercury__map__STATE_VARIABLE_Map_11;
#line 954 "map.m"
    MR_Word mercury__map__V_12_12;
#line 950 "map.m"
    MR_Word mercury__map__NewMap_25;

#line 955 "map.m"
    {
#line 955 "map.m"
      mercury__map__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 955 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 0) = ((MR_Box) (&mercury__map_scalar_common_5[0]));
#line 955 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 1) = ((MR_Box) (mercury__map__det_transform_value_3_f_0_1));
#line 955 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 955 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 3) = ((MR_Box) (mercury__map__TypeInfo_for_V_18));
#line 955 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 4) = ((MR_Box) (mercury__map__F_5));
#line 955 "map.m"
    }
#line 945 "map.m"
    {
#line 945 "map.m"
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_K_19, mercury__map__V_12_12, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__NewMap_25);
    }
#line 950 "map.m"
    if (mercury__map__succeeded)
#line 949 "map.m"
      mercury__map__STATE_VARIABLE_Map_11 = mercury__map__NewMap_25;
#line 950 "map.m"
    else
#line 951 "map.m"
      {
#line 951 "map.m"
        {
#line 951 "map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_19, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
        }
#line 951 "map.m"
      }
#line 954 "map.m"
    return mercury__map__STATE_VARIABLE_Map_11;
#line 954 "map.m"
  }
#line 191 "map.m"
}

#line 185 "map.m"
MR_bool MR_CALL 
mercury__map__transform_value_4_p_0(
#line 185 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 185 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 185 "map.m"
  MR_Word mercury__map__P_5,
#line 185 "map.m"
  MR_Box mercury__map__K_6,
#line 185 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 185 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 185 "map.m"
{
#line 945 "map.m"
  {
#line 945 "map.m"
    MR_bool mercury__map__succeeded;

#line 945 "map.m"
    {
#line 945 "map.m"
      return mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_K_12, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 945 "map.m"
    return mercury__map__succeeded;
#line 945 "map.m"
  }
#line 185 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__search_insert_5_p_0(
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Box mercury__map__K_6,
#line 178 "map.m"
  MR_Box mercury__map__V_7,
#line 178 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 178 "map.m"
{
#line 942 "map.m"
  {
#line 942 "map.m"
    MR_bool mercury__map__succeeded;

#line 942 "map.m"
    {
#line 942 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_6, mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
#line 942 "map.m"
      return;
    }
#line 942 "map.m"
  }
#line 178 "map.m"
}

#line 170 "map.m"
void MR_CALL 
mercury__map__det_update_4_p_0(
#line 170 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 170 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 170 "map.m"
  MR_Box mercury__map__K_5,
#line 170 "map.m"
  MR_Box mercury__map__V_6,
#line 170 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 170 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 170 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_15_15;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", mercury__map__K_5);
#line 938 "map.m"
          return;
        }
#line 938 "map.m"
      }
#line 937 "map.m"
  }
#line 170 "map.m"
}

#line 169 "map.m"
MR_Word MR_CALL 
mercury__map__det_update_3_f_0(
#line 169 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 169 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 169 "map.m"
  MR_Word mercury__map__M0_5,
#line 169 "map.m"
  MR_Box mercury__map__K_6,
#line 169 "map.m"
  MR_Box mercury__map__V_7)
#line 169 "map.m"
{
#line 937 "map.m"
  {
#line 937 "map.m"
    MR_bool mercury__map__succeeded;
#line 937 "map.m"
    MR_Word mercury__map__M_8;
#line 937 "map.m"
    MR_Word mercury__map__NewMap_16;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, &mercury__map__NewMap_16);
    }
#line 937 "map.m"
    if (mercury__map__succeeded)
#line 936 "map.m"
      mercury__map__M_8 = mercury__map__NewMap_16;
#line 937 "map.m"
    else
#line 938 "map.m"
      {
#line 938 "map.m"
        MR_Box mercury__map__V_19_19;

#line 938 "map.m"
        {
#line 938 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_update: key not found", mercury__map__K_6);
        }
#line 938 "map.m"
      }
#line 937 "map.m"
    return mercury__map__M_8;
#line 937 "map.m"
  }
#line 169 "map.m"
}

#line 164 "map.m"
MR_bool MR_CALL 
mercury__map__update_4_p_0(
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 164 "map.m"
  MR_Box mercury__map__K_5,
#line 164 "map.m"
  MR_Box mercury__map__V_6,
#line 164 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 164 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 164 "map.m"
{
#line 929 "map.m"
  {
#line 929 "map.m"
    MR_bool mercury__map__succeeded;

#line 929 "map.m"
    {
#line 929 "map.m"
      return mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 929 "map.m"
    return mercury__map__succeeded;
#line 929 "map.m"
  }
#line 164 "map.m"
}

#line 163 "map.m"
MR_bool MR_CALL 
mercury__map__update_3_f_0(
#line 163 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 163 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 163 "map.m"
  MR_Word mercury__map__M0_5,
#line 163 "map.m"
  MR_Box mercury__map__K_6,
#line 163 "map.m"
  MR_Box mercury__map__V_7,
#line 163 "map.m"
  MR_Word * mercury__map__M_8)
#line 163 "map.m"
{
#line 929 "map.m"
  {
#line 929 "map.m"
    MR_bool mercury__map__succeeded;

#line 929 "map.m"
    {
#line 929 "map.m"
      return mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, mercury__map__M_8);
    }
#line 929 "map.m"
    return mercury__map__succeeded;
#line 929 "map.m"
  }
#line 163 "map.m"
}

#line 157 "map.m"
void MR_CALL 
mercury__map__set_from_assoc_list_3_p_0(
#line 157 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 157 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 157 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 157 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 157 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 157 "map.m"
{
#line 920 "map.m"
  while (MR_TRUE)
#line 920 "map.m"
    {
#line 920 "map.m"
      /* tailcall optimized into a loop */
#line 920 "map.m"
      {
#line 920 "map.m"
        MR_bool mercury__map__succeeded;

#line 920 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 920 "map.m"
        else
#line 921 "map.m"
          {
#line 921 "map.m"
            MR_Box mercury__map__K_7;
#line 921 "map.m"
            MR_Box mercury__map__V_8;
#line 921 "map.m"
            MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 921 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 921 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 921 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 921 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 962 "map.m"
            {
#line 962 "map.m"
              mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 923 "map.m"
            /* direct tailcall eliminated */
#line 923 "map.m"
            {
#line 923 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__KVs_9;
#line 923 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 923 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 923 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 923 "map.m"
            }
#line 923 "map.m"
            continue;
#line 921 "map.m"
          }
#line 920 "map.m"
      }
#line 920 "map.m"
      break;
#line 920 "map.m"
    }
#line 157 "map.m"
}

#line 156 "map.m"
MR_Word MR_CALL 
mercury__map__set_from_assoc_list_2_f_0(
#line 156 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 156 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 156 "map.m"
  MR_Word mercury__map__M1_4,
#line 156 "map.m"
  MR_Word mercury__map__AL_5)
#line 156 "map.m"
{
#line 918 "map.m"
  {
#line 918 "map.m"
    MR_bool mercury__map__succeeded;
#line 918 "map.m"
    MR_Word mercury__map__M2_6;

#line 918 "map.m"
    {
#line 918 "map.m"
      mercury__map__set_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
#line 918 "map.m"
    return mercury__map__M2_6;
#line 918 "map.m"
  }
#line 156 "map.m"
}

#line 153 "map.m"
void MR_CALL 
mercury__map__set_from_corresponding_lists_4_p_0(
#line 153 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 153 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 153 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 153 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 153 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
#line 153 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
#line 153 "map.m"
{
#line 908 "map.m"
  while (MR_TRUE)
#line 908 "map.m"
    {
#line 908 "map.m"
      /* tailcall optimized into a loop */
#line 908 "map.m"
      {
#line 908 "map.m"
        MR_bool mercury__map__succeeded;

#line 908 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "map.m"
          if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "map.m"
            *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
#line 908 "map.m"
          else
#line 909 "map.m"
            {
#line 910 "map.m"
              {
#line 910 "map.m"
                mercury__require__error_1_p_0((MR_String) "map.set_from_corresponding_lists - lists do not correspond");
#line 910 "map.m"
                return;
              }
#line 909 "map.m"
            }
#line 908 "map.m"
        else
#line 908 "map.m"
          {
#line 908 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 908 "map.m"
            MR_Box mercury__map__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 908 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "map.m"
              {
#line 912 "map.m"
                {
#line 912 "map.m"
                  mercury__require__error_1_p_0((MR_String) "map.set_from_corresponding_lists - lists do not correspond");
#line 912 "map.m"
                  return;
                }
#line 911 "map.m"
              }
#line 908 "map.m"
            else
#line 913 "map.m"
              {
#line 913 "map.m"
                MR_Box mercury__map__V_20 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 913 "map.m"
                MR_Word mercury__map__Vs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 913 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_Map_25_25;

#line 962 "map.m"
                {
#line 962 "map.m"
                  mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__V_30_30, mercury__map__V_20, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__STATE_VARIABLE_Map_25_25);
                }
#line 915 "map.m"
                /* direct tailcall eliminated */
#line 915 "map.m"
                {
#line 915 "map.m"
                  MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_29_29;
#line 915 "map.m"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Vs_21;
#line 915 "map.m"
                  MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_Map_25_25;

#line 915 "map.m"
                  mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3;
#line 915 "map.m"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 915 "map.m"
                  mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 915 "map.m"
                }
#line 915 "map.m"
                continue;
#line 913 "map.m"
              }
#line 908 "map.m"
          }
#line 908 "map.m"
      }
#line 908 "map.m"
      break;
#line 908 "map.m"
    }
#line 153 "map.m"
}

#line 151 "map.m"
MR_Word MR_CALL 
mercury__map__set_from_corresponding_lists_3_f_0(
#line 151 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 151 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 151 "map.m"
  MR_Word mercury__map__M1_5,
#line 151 "map.m"
  MR_Word mercury__map__Ks_6,
#line 151 "map.m"
  MR_Word mercury__map__Vs_7)
#line 151 "map.m"
{
#line 906 "map.m"
  {
#line 906 "map.m"
    MR_bool mercury__map__succeeded;
#line 906 "map.m"
    MR_Word mercury__map__M2_8;

#line 906 "map.m"
    {
#line 906 "map.m"
      mercury__map__set_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 906 "map.m"
    return mercury__map__M2_8;
#line 906 "map.m"
  }
#line 151 "map.m"
}

#line 146 "map.m"
void MR_CALL 
mercury__map__det_insert_from_assoc_list_3_p_0(
#line 146 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 146 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 146 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 146 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 146 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 146 "map.m"
{
#line 900 "map.m"
  while (MR_TRUE)
#line 900 "map.m"
    {
#line 900 "map.m"
      /* tailcall optimized into a loop */
#line 900 "map.m"
      {
#line 900 "map.m"
        MR_bool mercury__map__succeeded;

#line 900 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 900 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 900 "map.m"
        else
#line 901 "map.m"
          {
#line 901 "map.m"
            MR_Box mercury__map__K_7;
#line 901 "map.m"
            MR_Box mercury__map__V_8;
#line 901 "map.m"
            MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 901 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;
#line 881 "map.m"
            MR_Word mercury__map__NewMap_23;

#line 901 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 901 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 879 "map.m"
            {
#line 879 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__NewMap_23);
            }
#line 881 "map.m"
            if (mercury__map__succeeded)
#line 880 "map.m"
              mercury__map__STATE_VARIABLE_Map_14_14 = mercury__map__NewMap_23;
#line 881 "map.m"
            else
#line 882 "map.m"
              {
#line 882 "map.m"
                MR_Box mercury__map__V_26_26;

#line 882 "map.m"
                {
#line 882 "map.m"
                  mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, (MR_String) "map.det_insert: key already present", mercury__map__K_7);
#line 882 "map.m"
                  return;
                }
#line 882 "map.m"
              }
#line 903 "map.m"
            /* direct tailcall eliminated */
#line 903 "map.m"
            {
#line 903 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__KVs_9;
#line 903 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 903 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 903 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 903 "map.m"
            }
#line 903 "map.m"
            continue;
#line 901 "map.m"
          }
#line 900 "map.m"
      }
#line 900 "map.m"
      break;
#line 900 "map.m"
    }
#line 146 "map.m"
}

#line 144 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_from_assoc_list_2_f_0(
#line 144 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 144 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 144 "map.m"
  MR_Word mercury__map__M1_4,
#line 144 "map.m"
  MR_Word mercury__map__AL_5)
#line 144 "map.m"
{
#line 898 "map.m"
  {
#line 898 "map.m"
    MR_bool mercury__map__succeeded;
#line 898 "map.m"
    MR_Word mercury__map__M2_6;

#line 898 "map.m"
    {
#line 898 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
#line 898 "map.m"
    return mercury__map__M2_6;
#line 898 "map.m"
  }
#line 144 "map.m"
}

#line 139 "map.m"
void MR_CALL 
mercury__map__det_insert_from_corresponding_lists_4_p_0(
#line 139 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 139 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 139 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 139 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 139 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
#line 139 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
#line 139 "map.m"
{
#line 888 "map.m"
  while (MR_TRUE)
#line 888 "map.m"
    {
#line 888 "map.m"
      /* tailcall optimized into a loop */
#line 888 "map.m"
      {
#line 888 "map.m"
        MR_bool mercury__map__succeeded;

#line 888 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "map.m"
          if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "map.m"
            *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
#line 888 "map.m"
          else
#line 889 "map.m"
            {
#line 890 "map.m"
              {
#line 890 "map.m"
                mercury__require__error_1_p_0((MR_String) "map.det_insert_from_corresponding_lists - lists do not correspond");
#line 890 "map.m"
                return;
              }
#line 889 "map.m"
            }
#line 888 "map.m"
        else
#line 888 "map.m"
          {
#line 888 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "map.m"
            MR_Box mercury__map__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 888 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "map.m"
              {
#line 892 "map.m"
                {
#line 892 "map.m"
                  mercury__require__error_1_p_0((MR_String) "map.det_insert_from_corresponding_lists - lists do not correspond");
#line 892 "map.m"
                  return;
                }
#line 891 "map.m"
              }
#line 888 "map.m"
            else
#line 893 "map.m"
              {
#line 893 "map.m"
                MR_Box mercury__map__V_20 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 893 "map.m"
                MR_Word mercury__map__Vs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 893 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_Map_25_25;
#line 881 "map.m"
                MR_Word mercury__map__NewMap_36;

#line 879 "map.m"
                {
#line 879 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__V_30_30, mercury__map__V_20, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__NewMap_36);
                }
#line 881 "map.m"
                if (mercury__map__succeeded)
#line 880 "map.m"
                  mercury__map__STATE_VARIABLE_Map_25_25 = mercury__map__NewMap_36;
#line 881 "map.m"
                else
#line 882 "map.m"
                  {
#line 882 "map.m"
                    MR_Box mercury__map__V_39_39;

#line 882 "map.m"
                    {
#line 882 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, (MR_String) "map.det_insert: key already present", mercury__map__V_30_30);
#line 882 "map.m"
                      return;
                    }
#line 882 "map.m"
                  }
#line 895 "map.m"
                /* direct tailcall eliminated */
#line 895 "map.m"
                {
#line 895 "map.m"
                  MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_29_29;
#line 895 "map.m"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Vs_21;
#line 895 "map.m"
                  MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_Map_25_25;

#line 895 "map.m"
                  mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3;
#line 895 "map.m"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 895 "map.m"
                  mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 895 "map.m"
                }
#line 895 "map.m"
                continue;
#line 893 "map.m"
              }
#line 888 "map.m"
          }
#line 888 "map.m"
      }
#line 888 "map.m"
      break;
#line 888 "map.m"
    }
#line 139 "map.m"
}

#line 137 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_from_corresponding_lists_3_f_0(
#line 137 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 137 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 137 "map.m"
  MR_Word mercury__map__M1_5,
#line 137 "map.m"
  MR_Word mercury__map__Ks_6,
#line 137 "map.m"
  MR_Word mercury__map__Vs_7)
#line 137 "map.m"
{
#line 886 "map.m"
  {
#line 886 "map.m"
    MR_bool mercury__map__succeeded;
#line 886 "map.m"
    MR_Word mercury__map__M2_8;

#line 886 "map.m"
    {
#line 886 "map.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 886 "map.m"
    return mercury__map__M2_8;
#line 886 "map.m"
  }
#line 137 "map.m"
}

#line 133 "map.m"
void MR_CALL 
mercury__map__det_insert_4_p_0(
#line 133 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 133 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 133 "map.m"
  MR_Box mercury__map__K_5,
#line 133 "map.m"
  MR_Box mercury__map__V_6,
#line 133 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 133 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 133 "map.m"
{
#line 881 "map.m"
  {
#line 881 "map.m"
    MR_bool mercury__map__succeeded;
#line 881 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 879 "map.m"
    {
#line 879 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 881 "map.m"
    if (mercury__map__succeeded)
#line 880 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 881 "map.m"
    else
#line 882 "map.m"
      {
#line 882 "map.m"
        MR_Box mercury__map__V_15_15;

#line 882 "map.m"
        {
#line 882 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", mercury__map__K_5);
#line 882 "map.m"
          return;
        }
#line 882 "map.m"
      }
#line 881 "map.m"
  }
#line 133 "map.m"
}

#line 132 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_3_f_0(
#line 132 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 132 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 132 "map.m"
  MR_Word mercury__map__M1_5,
#line 132 "map.m"
  MR_Box mercury__map__K_6,
#line 132 "map.m"
  MR_Box mercury__map__V_7)
#line 132 "map.m"
{
#line 881 "map.m"
  {
#line 881 "map.m"
    MR_bool mercury__map__succeeded;
#line 881 "map.m"
    MR_Word mercury__map__M2_8;
#line 881 "map.m"
    MR_Word mercury__map__NewMap_16;

#line 879 "map.m"
    {
#line 879 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__NewMap_16);
    }
#line 881 "map.m"
    if (mercury__map__succeeded)
#line 880 "map.m"
      mercury__map__M2_8 = mercury__map__NewMap_16;
#line 881 "map.m"
    else
#line 882 "map.m"
      {
#line 882 "map.m"
        MR_Box mercury__map__V_19_19;

#line 882 "map.m"
        {
#line 882 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_insert: key already present", mercury__map__K_6);
        }
#line 882 "map.m"
      }
#line 881 "map.m"
    return mercury__map__M2_8;
#line 881 "map.m"
  }
#line 132 "map.m"
}

#line 127 "map.m"
MR_bool MR_CALL 
mercury__map__insert_4_p_0(
#line 127 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 127 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 127 "map.m"
  MR_Box mercury__map__K_5,
#line 127 "map.m"
  MR_Box mercury__map__V_6,
#line 127 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 127 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 127 "map.m"
{
#line 873 "map.m"
  {
#line 873 "map.m"
    MR_bool mercury__map__succeeded;

#line 873 "map.m"
    {
#line 873 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 873 "map.m"
    return mercury__map__succeeded;
#line 873 "map.m"
  }
#line 127 "map.m"
}

#line 126 "map.m"
MR_bool MR_CALL 
mercury__map__insert_3_f_0(
#line 126 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 126 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 126 "map.m"
  MR_Word mercury__map__M1_5,
#line 126 "map.m"
  MR_Box mercury__map__K_6,
#line 126 "map.m"
  MR_Box mercury__map__V_7,
#line 126 "map.m"
  MR_Word * mercury__map__M2_8)
#line 126 "map.m"
{
#line 873 "map.m"
  {
#line 873 "map.m"
    MR_bool mercury__map__succeeded;

#line 873 "map.m"
    {
#line 873 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, mercury__map__M2_8);
    }
#line 873 "map.m"
    return mercury__map__succeeded;
#line 873 "map.m"
  }
#line 126 "map.m"
}

#line 1101 "map.m"
static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
#line 1101 "map.m"
  void * mercury__map__env_ptr_arg)
#line 1101 "map.m"
{
#line 1101 "map.m"
  {
#line 1101 "map.m"
    struct mercury__map__inverse_search_3_p_0_env_0_s * mercury__map__env_ptr = (struct mercury__map__inverse_search_3_p_0_env_0_s *) mercury__map__env_ptr_arg;

#line 1101 "map.m"
    {
#line 1101 "map.m"
      (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_5, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_9_9);
    }
#line 1101 "map.m"
    if ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded)
#line 1101 "map.m"
      {
#line 1101 "map.m"
        ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont)((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr);
#line 1101 "map.m"
        return;
      }
#line 1101 "map.m"
  }
#line 1101 "map.m"
}

#line 121 "map.m"
void MR_CALL 
mercury__map__inverse_search_3_p_0(
#line 121 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 121 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 121 "map.m"
  MR_Word mercury__map__Map_4,
#line 121 "map.m"
  MR_Box mercury__map__V_5,
#line 121 "map.m"
  MR_Box * mercury__map__K_6,
#line 121 "map.m"
  MR_Cont mercury__map__cont,
#line 121 "map.m"
  void * mercury__map__cont_env_ptr)
#line 121 "map.m"
{
#line 121 "map.m"
  {
#line 121 "map.m"
    struct mercury__map__inverse_search_3_p_0_env_0_s mercury__map__env;

#line 121 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8 = mercury__map__TypeInfo_for_V_8;
#line 121 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__V_5 = mercury__map__V_5;
#line 121 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont = mercury__map__cont;
#line 121 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__map__cont_env_ptr;
#line 823 "map.m"
    {
#line 823 "map.m"
      mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_6, &(mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__V_9_9, mercury__map__inverse_search_3_p_0_1, &mercury__map__env);
    }
#line 121 "map.m"
  }
#line 121 "map.m"
}

#line 117 "map.m"
MR_bool MR_CALL 
mercury__map__min_key_1_f_0(
#line 117 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_4,
#line 117 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_5,
#line 117 "map.m"
  MR_Word mercury__map__M_3,
#line 117 "map.m"
  MR_Box * mercury__map__HeadVar__2_2)
#line 117 "map.m"
{
#line 867 "map.m"
  {
#line 867 "map.m"
    MR_bool mercury__map__succeeded;

#line 867 "map.m"
    {
#line 867 "map.m"
      return mercury__map__succeeded = mercury__tree234__min_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
#line 867 "map.m"
    return mercury__map__succeeded;
#line 867 "map.m"
  }
#line 117 "map.m"
}

#line 113 "map.m"
MR_bool MR_CALL 
mercury__map__max_key_1_f_0(
#line 113 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_4,
#line 113 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_5,
#line 113 "map.m"
  MR_Word mercury__map__M_3,
#line 113 "map.m"
  MR_Box * mercury__map__HeadVar__2_2)
#line 113 "map.m"
{
#line 865 "map.m"
  {
#line 865 "map.m"
    MR_bool mercury__map__succeeded;

#line 865 "map.m"
    {
#line 865 "map.m"
      return mercury__map__succeeded = mercury__tree234__max_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
#line 865 "map.m"
    return mercury__map__succeeded;
#line 865 "map.m"
  }
#line 113 "map.m"
}

#line 109 "map.m"
void MR_CALL 
mercury__map__upper_bound_lookup_4_p_0(
#line 109 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 109 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 109 "map.m"
  MR_Word mercury__map__Map_5,
#line 109 "map.m"
  MR_Box mercury__map__SearchK_6,
#line 109 "map.m"
  MR_Box * mercury__map__K_7,
#line 109 "map.m"
  MR_Box * mercury__map__V_8)
#line 109 "map.m"
{
#line 860 "map.m"
  {
#line 860 "map.m"
    MR_bool mercury__map__succeeded;
#line 860 "map.m"
    MR_Box mercury__map__KPrime_9;
#line 860 "map.m"
    MR_Box mercury__map__VPrime_10;

#line 857 "map.m"
    {
#line 857 "map.m"
      mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
#line 860 "map.m"
    if (mercury__map__succeeded)
#line 858 "map.m"
      {
#line 858 "map.m"
        *mercury__map__K_7 = mercury__map__KPrime_9;
#line 859 "map.m"
        *mercury__map__V_8 = mercury__map__VPrime_10;
#line 858 "map.m"
      }
#line 860 "map.m"
    else
#line 861 "map.m"
      {
#line 861 "map.m"
        {
#line 861 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.upper_bound_lookup: key not found", mercury__map__SearchK_6);
#line 861 "map.m"
          return;
        }
#line 861 "map.m"
      }
#line 860 "map.m"
  }
#line 109 "map.m"
}

#line 102 "map.m"
MR_bool MR_CALL 
mercury__map__upper_bound_search_4_p_0(
#line 102 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 102 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 102 "map.m"
  MR_Word mercury__map__Map_5,
#line 102 "map.m"
  MR_Box mercury__map__SearchK_6,
#line 102 "map.m"
  MR_Box * mercury__map__K_7,
#line 102 "map.m"
  MR_Box * mercury__map__V_8)
#line 102 "map.m"
{
#line 854 "map.m"
  {
#line 854 "map.m"
    MR_bool mercury__map__succeeded;

#line 854 "map.m"
    {
#line 854 "map.m"
      return mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
#line 854 "map.m"
    return mercury__map__succeeded;
#line 854 "map.m"
  }
#line 102 "map.m"
}

#line 96 "map.m"
void MR_CALL 
mercury__map__lower_bound_lookup_4_p_0(
#line 96 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 96 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 96 "map.m"
  MR_Word mercury__map__Map_5,
#line 96 "map.m"
  MR_Box mercury__map__SearchK_6,
#line 96 "map.m"
  MR_Box * mercury__map__K_7,
#line 96 "map.m"
  MR_Box * mercury__map__V_8)
#line 96 "map.m"
{
#line 848 "map.m"
  {
#line 848 "map.m"
    MR_bool mercury__map__succeeded;
#line 848 "map.m"
    MR_Box mercury__map__KPrime_9;
#line 848 "map.m"
    MR_Box mercury__map__VPrime_10;

#line 845 "map.m"
    {
#line 845 "map.m"
      mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
#line 848 "map.m"
    if (mercury__map__succeeded)
#line 846 "map.m"
      {
#line 846 "map.m"
        *mercury__map__K_7 = mercury__map__KPrime_9;
#line 847 "map.m"
        *mercury__map__V_8 = mercury__map__VPrime_10;
#line 846 "map.m"
      }
#line 848 "map.m"
    else
#line 849 "map.m"
      {
#line 849 "map.m"
        {
#line 849 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.lower_bound_lookup: key not found", mercury__map__SearchK_6);
#line 849 "map.m"
          return;
        }
#line 849 "map.m"
      }
#line 848 "map.m"
  }
#line 96 "map.m"
}

#line 89 "map.m"
MR_bool MR_CALL 
mercury__map__lower_bound_search_4_p_0(
#line 89 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 89 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 89 "map.m"
  MR_Word mercury__map__Map_5,
#line 89 "map.m"
  MR_Box mercury__map__SearchK_6,
#line 89 "map.m"
  MR_Box * mercury__map__K_7,
#line 89 "map.m"
  MR_Box * mercury__map__V_8)
#line 89 "map.m"
{
#line 842 "map.m"
  {
#line 842 "map.m"
    MR_bool mercury__map__succeeded;

#line 842 "map.m"
    {
#line 842 "map.m"
      return mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
#line 842 "map.m"
    return mercury__map__succeeded;
#line 842 "map.m"
  }
#line 89 "map.m"
}

#line 83 "map.m"
void MR_CALL 
mercury__map__lookup_3_p_0(
#line 83 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 83 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 83 "map.m"
  MR_Word mercury__map__Map_4,
#line 83 "map.m"
  MR_Box mercury__map__K_5,
#line 83 "map.m"
  MR_Box * mercury__map__V_6)
#line 83 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", mercury__map__K_5);
#line 838 "map.m"
          return;
        }
#line 838 "map.m"
      }
#line 837 "map.m"
  }
#line 83 "map.m"
}

#line 82 "map.m"
MR_Box MR_CALL 
mercury__map__lookup_2_f_0(
#line 82 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 82 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 82 "map.m"
  MR_Word mercury__map__M_4,
#line 82 "map.m"
  MR_Box mercury__map__K_5)
#line 82 "map.m"
{
#line 837 "map.m"
  {
#line 837 "map.m"
    MR_bool mercury__map__succeeded;
#line 837 "map.m"
    MR_Box mercury__map__V_6;
#line 837 "map.m"
    MR_Box mercury__map__VPrime_12;

#line 835 "map.m"
    {
#line 835 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
#line 837 "map.m"
    if (mercury__map__succeeded)
#line 836 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_12;
#line 837 "map.m"
    else
#line 838 "map.m"
      {
#line 838 "map.m"
        {
#line 838 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", mercury__map__K_5);
        }
#line 838 "map.m"
      }
#line 837 "map.m"
    return mercury__map__V_6;
#line 837 "map.m"
  }
#line 82 "map.m"
}

#line 78 "map.m"
MR_bool MR_CALL 
mercury__map__search_3_p_0(
#line 78 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 78 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 78 "map.m"
  MR_Word mercury__map__Map_4,
#line 78 "map.m"
  MR_Box mercury__map__K_5,
#line 78 "map.m"
  MR_Box * mercury__map__V_6)
#line 78 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 78 "map.m"
}

#line 77 "map.m"
MR_bool MR_CALL 
mercury__map__search_2_f_0(
#line 77 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 77 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 77 "map.m"
  MR_Word mercury__map__M_4,
#line 77 "map.m"
  MR_Box mercury__map__K_5,
#line 77 "map.m"
  MR_Box * mercury__map__V_6)
#line 77 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;

#line 829 "map.m"
    {
#line 829 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 77 "map.m"
}

#line 73 "map.m"
void MR_CALL 
mercury__map__member_3_p_0(
#line 73 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 73 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 73 "map.m"
  MR_Word mercury__map__Map_4,
#line 73 "map.m"
  MR_Box * mercury__map__K_5,
#line 73 "map.m"
  MR_Box * mercury__map__V_6,
#line 73 "map.m"
  MR_Cont mercury__map__cont,
#line 73 "map.m"
  void * mercury__map__cont_env_ptr)
#line 73 "map.m"
{
#line 823 "map.m"
  {
#line 823 "map.m"
    MR_bool mercury__map__succeeded;

#line 823 "map.m"
    {
#line 823 "map.m"
      mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6, mercury__map__cont, mercury__map__cont_env_ptr);
#line 823 "map.m"
      return;
    }
#line 823 "map.m"
  }
#line 73 "map.m"
}

#line 71 "map.m"
MR_bool MR_CALL 
mercury__map__contains_2_p_0(
#line 71 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 71 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_7,
#line 71 "map.m"
  MR_Word mercury__map__Map_3,
#line 71 "map.m"
  MR_Box mercury__map__K_4)
#line 71 "map.m"
{
#line 829 "map.m"
  {
#line 829 "map.m"
    MR_bool mercury__map__succeeded;
#line 829 "map.m"
    MR_Box mercury__map__V_5_5;

#line 829 "map.m"
    {
#line 829 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for__V_7, mercury__map__Map_3, mercury__map__K_4, &mercury__map__V_5_5);
    }
#line 829 "map.m"
    return mercury__map__succeeded;
#line 829 "map.m"
  }
#line 71 "map.m"
}

#line 67 "map.m"
MR_bool MR_CALL 
mercury__map__equal_2_p_0(
#line 67 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 67 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 67 "map.m"
  MR_Word mercury__map__MapA_3,
#line 67 "map.m"
  MR_Word mercury__map__MapB_4)
#line 67 "map.m"
{
#line 817 "map.m"
  {
#line 817 "map.m"
    MR_bool mercury__map__succeeded;

#line 817 "map.m"
    {
#line 817 "map.m"
      return mercury__map__succeeded = mercury__tree234__equal_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__MapA_3, mercury__map__MapB_4);
    }
#line 817 "map.m"
    return mercury__map__succeeded;
#line 817 "map.m"
  }
#line 67 "map.m"
}

#line 58 "map.m"
MR_bool MR_CALL 
mercury__map__is_empty_1_p_0(
#line 58 "map.m"
  MR_Word mercury__map__TypeInfo_3_3,
#line 58 "map.m"
  MR_Word mercury__map__TypeInfo_4_4,
#line 58 "map.m"
  MR_Word mercury__map__M_2)
#line 58 "map.m"
{
#line 53 "tree234.opt"
  {
#line 53 "tree234.opt"
    MR_bool mercury__map__succeeded = (mercury__map__M_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 53 "tree234.opt"
    return mercury__map__succeeded;
#line 53 "tree234.opt"
  }
#line 58 "map.m"
}

#line 54 "map.m"
MR_Word MR_CALL 
mercury__map__singleton_2_f_0(
#line 54 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 54 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 54 "map.m"
  MR_Box mercury__map__K_4,
#line 54 "map.m"
  MR_Box mercury__map__V_5)
#line 54 "map.m"
{
#line 49 "tree234.opt"
  {
#line 49 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 49 "tree234.opt"
    MR_Word mercury__map__HeadVar__3_3;
#line 49 "tree234.opt"
    MR_Word mercury__map__V_6_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "tree234.opt"
    MR_Word mercury__map__V_7_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 49 "tree234.opt"
    {
#line 49 "tree234.opt"
      mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 0) = mercury__map__K_4;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 1) = mercury__map__V_5;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 2) = ((MR_Box) (mercury__map__V_6_10));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__map__HeadVar__3_3, 3) = ((MR_Box) (mercury__map__V_7_11));
#line 49 "tree234.opt"
    }
#line 49 "tree234.opt"
    return mercury__map__HeadVar__3_3;
#line 49 "tree234.opt"
  }
#line 54 "map.m"
}

#line 50 "map.m"
MR_Word MR_CALL 
mercury__map__init_0_f_0(
#line 50 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_3,
#line 50 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_4)
#line 50 "map.m"
{
#line 48 "tree234.opt"
  {
#line 48 "tree234.opt"
    MR_bool mercury__map__succeeded;
#line 48 "tree234.opt"
    MR_Word mercury__map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 48 "tree234.opt"
    return mercury__map__M_2;
#line 48 "tree234.opt"
  }
#line 50 "map.m"
}

#line 49 "map.m"
void MR_CALL 
mercury__map__init_1_p_0(
#line 49 "map.m"
  MR_Word mercury__map__TypeInfo_3_3,
#line 49 "map.m"
  MR_Word mercury__map__TypeInfo_4_4,
#line 49 "map.m"
  MR_Word * mercury__map__M_2)
#line 49 "map.m"
{
#line 48 "tree234.opt"
  {
#line 48 "tree234.opt"
    MR_bool mercury__map__succeeded;

#line 48 "tree234.opt"
    *mercury__map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
  }
#line 49 "map.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module map. */
