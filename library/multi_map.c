/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module multi_map. */
/* :- implementation. */

/*
INIT mercury__multi_map__init
ENDINIT
*/

#include "multi_map.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 72 "multi_map.m"
struct mercury__multi_map__inverse_search_3_p_0_env_0_s {
#line 72 "multi_map.m"
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9;
#line 72 "multi_map.m"
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__Value_5;
#line 72 "multi_map.m"
  MR_Cont mercury__multi_map__inverse_search_3_p_0_env_0__cont;
#line 72 "multi_map.m"
  void * mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr;
#line 488 "multi_map.m"
  MR_bool mercury__multi_map__inverse_search_3_p_0_env_0__succeeded;
#line 488 "multi_map.m"
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7;
#line 37 "map.opt"
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7;
#line 72 "multi_map.m"
};

#line 51 "multi_map.m"
struct mercury__multi_map__member_3_p_0_env_0_s {
#line 51 "multi_map.m"
  MR_Word mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9;
#line 51 "multi_map.m"
  MR_Box * mercury__multi_map__member_3_p_0_env_0__Value_6;
#line 51 "multi_map.m"
  MR_Cont mercury__multi_map__member_3_p_0_env_0__cont;
#line 51 "multi_map.m"
  void * mercury__multi_map__member_3_p_0_env_0__cont_env_ptr;
#line 293 "multi_map.m"
  MR_Word mercury__multi_map__member_3_p_0_env_0__ValueList_7;
#line 37 "map.opt"
  MR_Box mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7;
#line 51 "multi_map.m"
};


#line 130 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2;

#line 133 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 136 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 139 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 141 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 143 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 145 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4);

#line 148 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 151 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 153 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 155 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 157 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 159 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5);

#line 212 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 212 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 212 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 212 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 212 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 212 "map.opt"
  MR_Word * mercury__multi_map__HeadVar__8_24);

#line 41 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_65_65,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_71_71,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_72_72,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__multi_map__V_35_35,
#line 133 "list.int"
  MR_Word mercury__multi_map__V_36_36,
#line 133 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 324 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 508 "multi_map.m"
static MR_bool MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_17,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_18,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_3,
#line 508 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_4);

#line 37 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 37 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 488 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 488 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);

#line 37 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 37 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 293 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 293 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);


static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 630 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 638 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__multi_map__list__pti_list_1__pseudo_2
  }
};

#line 647 "multi_map.c"
const MR_TypeCtorInfo_Struct mercury__multi_map__multi_map__type_ctor_info_multi_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__multi_map____Unify____multi_map_2_0_10001)),
  ((MR_Box) (mercury__multi_map____Compare____multi_map_2_0_10001)),
  (MR_String) "multi_map",
  (MR_String) "multi_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 664 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 667 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 669 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 671 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 673 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4)
#line 675 "multi_map.c"
{
#line 677 "multi_map.c"
  {
#line 679 "multi_map.c"
    MR_bool mercury__multi_map__succeeded;

#line 682 "multi_map.c"
    {
#line 684 "multi_map.c"
      mercury__multi_map__succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), ((MR_Word) mercury__multi_map__wrapper_arg_3), ((MR_Word) mercury__multi_map__wrapper_arg_4));
    }
#line 687 "multi_map.c"
    return mercury__multi_map__succeeded;
#line 689 "multi_map.c"
  }
#line 691 "multi_map.c"
}

#line 694 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 697 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 699 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 701 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 703 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 705 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5)
#line 707 "multi_map.c"
{
#line 709 "multi_map.c"
  {
#line 711 "multi_map.c"
    MR_Word mercury__multi_map__conv0_HeadVar__1_1;

#line 714 "multi_map.c"
    {
#line 716 "multi_map.c"
      mercury__multi_map____Compare____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), &mercury__multi_map__conv0_HeadVar__1_1, ((MR_Word) mercury__multi_map__wrapper_arg_4), ((MR_Word) mercury__multi_map__wrapper_arg_5));
    }
#line 719 "multi_map.c"
    *mercury__multi_map__wrapper_arg_3 = ((MR_Box) (mercury__multi_map__conv0_HeadVar__1_1));
#line 721 "multi_map.c"
  }
#line 723 "multi_map.c"
}

#line 212 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 212 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 212 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 212 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 212 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 212 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 212 "map.opt"
  MR_Word * mercury__multi_map__HeadVar__8_24)
#line 212 "map.opt"
{
#line 212 "map.opt"
  {
#line 212 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 212 "map.opt"
    MR_Word mercury__multi_map__TypeCtorInfo_32_66 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 212 "map.opt"
    MR_Word mercury__multi_map__TypeInfo_33_67;
#line 212 "map.opt"
    MR_Word mercury__multi_map__V_51_51;
#line 212 "map.opt"
    MR_Word mercury__multi_map__V_52_52;
#line 118 "list.opt"
    MR_Word mercury__multi_map__conv0_V_51_51;
#line 46 "list.opt"
    MR_Word mercury__multi_map__conv1_HeadVar__8_24;

#line 764 "multi_map.c"
    {
#line 766 "multi_map.c"
      mercury__multi_map__TypeInfo_33_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_32_66));
#line 770 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 1) = ((MR_Box) (mercury__multi_map__V_39_39));
#line 772 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 2) = ((MR_Box) (mercury__multi_map__V_40_40));
#line 774 "multi_map.c"
    }
#line 396 "multi_map.m"
    {
#line 396 "multi_map.m"
      mercury__multi_map__V_52_52 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__HeadVar__5_21, mercury__multi_map__HeadVar__6_22);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_33_67, (MR_Word) mercury__multi_map__V_52_52, &mercury__multi_map__conv0_V_51_51);
    }
#line 118 "list.opt"
    mercury__multi_map__V_51_51 = (MR_Word) mercury__multi_map__conv0_V_51_51;
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_33_67, (MR_Word) mercury__multi_map__V_51_51, (MR_Word) mercury__multi_map__HeadVar__7_23, &mercury__multi_map__conv1_HeadVar__8_24);
    }
#line 46 "list.opt"
    *mercury__multi_map__HeadVar__8_24 = (MR_Word) mercury__multi_map__conv1_HeadVar__8_24;
#line 212 "map.opt"
  }
#line 212 "map.opt"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_65_65,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_71_71,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__V_72_72,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
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
        MR_bool mercury__multi_map__succeeded;

#line 104 "tree234.opt"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "tree234.opt"
          *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 116 "tree234.opt"
          {
#line 116 "tree234.opt"
            MR_Box mercury__multi_map__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__V0_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "tree234.opt"
            MR_Box mercury__multi_map__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__V1_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 116 "tree234.opt"
            MR_Box mercury__multi_map__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__V2_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_50_50_44;
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_51_51_45;
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_52_52_46;
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_53_53_47;
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_54_54_48;
#line 116 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_55_55_49;

#line 117 "tree234.opt"
            {
#line 117 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T0_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__STATE_VARIABLE_A_50_50_44);
            }
#line 118 "tree234.opt"
            {
#line 118 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K0_37_32, mercury__multi_map__V0_38_33, mercury__multi_map__STATE_VARIABLE_A_50_50_44, &mercury__multi_map__STATE_VARIABLE_A_51_51_45);
            }
#line 119 "tree234.opt"
            {
#line 119 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T1_44_39, mercury__multi_map__STATE_VARIABLE_A_51_51_45, &mercury__multi_map__STATE_VARIABLE_A_52_52_46);
            }
#line 120 "tree234.opt"
            {
#line 120 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K1_39_34, mercury__multi_map__V1_40_35, mercury__multi_map__STATE_VARIABLE_A_52_52_46, &mercury__multi_map__STATE_VARIABLE_A_53_53_47);
            }
#line 121 "tree234.opt"
            {
#line 121 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T2_45_40, mercury__multi_map__STATE_VARIABLE_A_53_53_47, &mercury__multi_map__STATE_VARIABLE_A_54_54_48);
            }
#line 122 "tree234.opt"
            {
#line 122 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K2_41_36, mercury__multi_map__V2_42_37, mercury__multi_map__STATE_VARIABLE_A_54_54_48, &mercury__multi_map__STATE_VARIABLE_A_55_55_49);
            }
#line 123 "tree234.opt"
            /* direct tailcall eliminated */
#line 123 "tree234.opt"
            {
#line 123 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__T3_46_41;
#line 123 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_A_55_55_49;

#line 123 "tree234.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 123 "tree234.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 123 "tree234.opt"
            }
#line 123 "tree234.opt"
            continue;
#line 116 "tree234.opt"
          }
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 110 "tree234.opt"
          {
#line 110 "tree234.opt"
            MR_Box mercury__multi_map__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__V0_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "tree234.opt"
            MR_Box mercury__multi_map__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__V1_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_31_31_27;
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_32_32_28;
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_33_33_29;
#line 110 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_34_34_30;

#line 111 "tree234.opt"
            {
#line 111 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T0_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__STATE_VARIABLE_A_31_31_27);
            }
#line 112 "tree234.opt"
            {
#line 112 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K0_21_18, mercury__multi_map__V0_22_19, mercury__multi_map__STATE_VARIABLE_A_31_31_27, &mercury__multi_map__STATE_VARIABLE_A_32_32_28);
            }
#line 113 "tree234.opt"
            {
#line 113 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T1_26_23, mercury__multi_map__STATE_VARIABLE_A_32_32_28, &mercury__multi_map__STATE_VARIABLE_A_33_33_29);
            }
#line 114 "tree234.opt"
            {
#line 114 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K1_23_20, mercury__multi_map__V1_24_21, mercury__multi_map__STATE_VARIABLE_A_33_33_29, &mercury__multi_map__STATE_VARIABLE_A_34_34_30);
            }
#line 115 "tree234.opt"
            /* direct tailcall eliminated */
#line 115 "tree234.opt"
            {
#line 115 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__T2_27_24;
#line 115 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_A_34_34_30;

#line 115 "tree234.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 115 "tree234.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
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
            MR_Box mercury__multi_map__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 106 "tree234.opt"
            MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "tree234.opt"
            MR_Word mercury__multi_map__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "tree234.opt"
            MR_Word mercury__multi_map__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 106 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_17_17_15;
#line 106 "tree234.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_18_18_16;

#line 107 "tree234.opt"
            {
#line 107 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T0_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__STATE_VARIABLE_A_17_17_15);
            }
#line 108 "tree234.opt"
            {
#line 108 "tree234.opt"
              mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K_10_9, mercury__multi_map__V_11_10, mercury__multi_map__STATE_VARIABLE_A_17_17_15, &mercury__multi_map__STATE_VARIABLE_A_18_18_16);
            }
#line 109 "tree234.opt"
            /* direct tailcall eliminated */
#line 109 "tree234.opt"
            {
#line 109 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__T1_13_12;
#line 109 "tree234.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_A_18_18_16;

#line 109 "tree234.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 109 "tree234.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
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

#line 133 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__multi_map__V_35_35,
#line 133 "list.int"
  MR_Word mercury__multi_map__V_36_36,
#line 133 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__multi_map__succeeded;

#line 380 "list.opt"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__multi_map__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__multi_map__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__multi_map__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Box mercury__multi_map__Key_69 = (MR_hl_field(MR_mktag(0), mercury__multi_map__H_10_9, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Box mercury__multi_map__Value_70 = (MR_hl_field(MR_mktag(0), mercury__multi_map__H_10_9, (MR_Integer) 1));

#line 407 "multi_map.m"
            {
#line 407 "multi_map.m"
              mercury__multi_map__set_4_p_0(mercury__multi_map__V_35_35, mercury__multi_map__V_36_36, mercury__multi_map__Key_69, mercury__multi_map__Value_70, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 324 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__multi_map__succeeded;
#line 170 "list.opt"
    MR_Word mercury__multi_map__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Box mercury__multi_map__H_6_6 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 171 "list.opt"
        MR_Word mercury__multi_map__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__multi_map__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__multi_map__V_9_9;

#line 396 "multi_map.m"
        {
#line 396 "multi_map.m"
          mercury__multi_map__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 0) = mercury__multi_map__V_17_17;
#line 396 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 1) = mercury__multi_map__H_6_6;
#line 396 "multi_map.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__multi_map__V_9_9 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_17_17, mercury__multi_map__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 0) = ((MR_Box) (mercury__multi_map__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 1) = ((MR_Box) (mercury__multi_map__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__multi_map__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__multi_map__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 34 "multi_map.m"
void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0(
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_Key_6,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_Data_7,
#line 34 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__1_1,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__3_3)
#line 34 "multi_map.m"
{
#line 34 "multi_map.m"
  {
#line 34 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_9_9;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar1_4 = mercury__multi_map__HeadVar__2_2;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar2_5 = mercury__multi_map__HeadVar__3_3;

#line 1235 "multi_map.c"
    {
#line 1237 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 1241 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_7));
#line 1243 "multi_map.c"
    }
#line 34 "multi_map.m"
    {
#line 34 "multi_map.m"
      mercury__tree234____Compare____tree234_2_0(mercury__multi_map__TypeInfo_for_Key_6, mercury__multi_map__TypeInfo_9_9, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__Cast_HeadVar1_4, (MR_Word) mercury__multi_map__Cast_HeadVar2_5);
#line 34 "multi_map.m"
      return;
    }
#line 34 "multi_map.m"
  }
#line 34 "multi_map.m"
}

#line 34 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0(
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_Key_5,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_Data_6,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 34 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2)
#line 34 "multi_map.m"
{
#line 34 "multi_map.m"
  {
#line 34 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar1_3 = mercury__multi_map__HeadVar__1_1;
#line 34 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar2_4 = mercury__multi_map__HeadVar__2_2;

#line 1283 "multi_map.c"
    {
#line 1285 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1287 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1289 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_6));
#line 1291 "multi_map.c"
    }
#line 34 "multi_map.m"
    {
#line 34 "multi_map.m"
      return mercury__multi_map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__multi_map__TypeInfo_for_Key_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__Cast_HeadVar1_3, (MR_Word) mercury__multi_map__Cast_HeadVar2_4);
    }
#line 34 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 34 "multi_map.m"
  }
#line 34 "multi_map.m"
}

#line 534 "multi_map.m"
void MR_CALL 
mercury__multi_map__assoc_list_merge_3_p_0(
#line 534 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_24,
#line 534 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_25,
#line 534 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 534 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 534 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__3_3)
#line 534 "multi_map.m"
{
#line 537 "multi_map.m"
  {
#line 537 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 537 "multi_map.m"
    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "multi_map.m"
      *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__2_2;
#line 537 "multi_map.m"
    else
#line 537 "multi_map.m"
      {
#line 537 "multi_map.m"
        MR_Word mercury__multi_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 537 "multi_map.m"
        MR_Word mercury__multi_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0)));

#line 537 "multi_map.m"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "multi_map.m"
          *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__1_1;
#line 537 "multi_map.m"
        else
#line 540 "multi_map.m"
          {
#line 540 "multi_map.m"
            MR_Box mercury__multi_map__KeyA_7 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_27_27, (MR_Integer) 0));
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__DataA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__V_27_27, (MR_Integer) 1)));
#line 540 "multi_map.m"
            MR_Box mercury__multi_map__KeyB_10;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__DataB_11;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__ListB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 540 "multi_map.m"
            MR_Box mercury__multi_map__Key_13;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__Data_14;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__List_15;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__Res_16;
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
#line 540 "multi_map.m"
            MR_Word mercury__multi_map__V_19_19;

#line 539 "multi_map.m"
            mercury__multi_map__KeyB_10 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_18_18, (MR_Integer) 0));
#line 539 "multi_map.m"
            mercury__multi_map__DataB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__V_18_18, (MR_Integer) 1)));
#line 541 "multi_map.m"
            {
#line 541 "multi_map.m"
              mercury__builtin__compare_3_p_0(mercury__multi_map__TypeInfo_for_K_24, &mercury__multi_map__Res_16, mercury__multi_map__KeyA_7, mercury__multi_map__KeyB_10);
            }
#line 547 "multi_map.m"
            if ((mercury__multi_map__Res_16 == (MR_Integer) 1))
#line 548 "multi_map.m"
              {
#line 549 "multi_map.m"
                mercury__multi_map__Key_13 = mercury__multi_map__KeyA_7;
#line 550 "multi_map.m"
                mercury__multi_map__Data_14 = mercury__multi_map__DataA_8;
#line 551 "multi_map.m"
                {
#line 551 "multi_map.m"
                  mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__V_26_26, mercury__multi_map__HeadVar__2_2, &mercury__multi_map__List_15);
                }
#line 548 "multi_map.m"
              }
#line 547 "multi_map.m"
            else
#line 547 "multi_map.m"
            if ((mercury__multi_map__Res_16 == (MR_Integer) 0))
#line 543 "multi_map.m"
              {
#line 544 "multi_map.m"
                mercury__multi_map__Key_13 = mercury__multi_map__KeyA_7;
#line 545 "multi_map.m"
                {
#line 545 "multi_map.m"
                  mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__DataA_8, mercury__multi_map__DataB_11, &mercury__multi_map__Data_14);
                }
#line 546 "multi_map.m"
                {
#line 546 "multi_map.m"
                  mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__V_26_26, mercury__multi_map__ListB_12, &mercury__multi_map__List_15);
                }
#line 543 "multi_map.m"
              }
#line 547 "multi_map.m"
            else
#line 553 "multi_map.m"
              {
#line 554 "multi_map.m"
                mercury__multi_map__Key_13 = mercury__multi_map__KeyB_10;
#line 555 "multi_map.m"
                mercury__multi_map__Data_14 = mercury__multi_map__DataB_11;
#line 556 "multi_map.m"
                {
#line 556 "multi_map.m"
                  mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__HeadVar__1_1, mercury__multi_map__ListB_12, &mercury__multi_map__List_15);
                }
#line 553 "multi_map.m"
              }
#line 540 "multi_map.m"
            {
#line 540 "multi_map.m"
              mercury__multi_map__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 0) = mercury__multi_map__Key_13;
#line 540 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 1) = ((MR_Box) (mercury__multi_map__Data_14));
#line 540 "multi_map.m"
            }
#line 540 "multi_map.m"
            {
#line 540 "multi_map.m"
              MR_Word base;
#line 540 "multi_map.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "multi_map.m"
              *mercury__multi_map__HeadVar__3_3 = base;
#line 540 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__multi_map__V_19_19));
#line 540 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__multi_map__List_15));
#line 540 "multi_map.m"
            }
#line 540 "multi_map.m"
          }
#line 537 "multi_map.m"
      }
#line 537 "multi_map.m"
  }
#line 534 "multi_map.m"
}

#line 508 "multi_map.m"
static MR_bool MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_17,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_18,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 508 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_3,
#line 508 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_4)
#line 508 "multi_map.m"
{
#line 511 "multi_map.m"
  while (MR_TRUE)
#line 511 "multi_map.m"
    {
#line 511 "multi_map.m"
      /* tailcall optimized into a loop */
#line 511 "multi_map.m"
      {
#line 511 "multi_map.m"
        MR_bool mercury__multi_map__succeeded;

#line 511 "multi_map.m"
        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "multi_map.m"
          {
#line 511 "multi_map.m"
            mercury__multi_map__succeeded = (mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "multi_map.m"
            if (mercury__multi_map__succeeded)
#line 511 "multi_map.m"
              {
#line 511 "multi_map.m"
                *mercury__multi_map__STATE_VARIABLE_MultiMap_4 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_3;
#line 511 "multi_map.m"
                mercury__multi_map__succeeded = MR_TRUE;
#line 511 "multi_map.m"
              }
#line 511 "multi_map.m"
          }
#line 511 "multi_map.m"
        else
#line 513 "multi_map.m"
          {
#line 513 "multi_map.m"
            MR_Box mercury__multi_map__Key_8 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));
#line 513 "multi_map.m"
            MR_Word mercury__multi_map__Keys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "multi_map.m"
            MR_Box mercury__multi_map__Value_10;
#line 513 "multi_map.m"
            MR_Word mercury__multi_map__Values_11;
#line 513 "multi_map.m"
            MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_15_15;

#line 512 "multi_map.m"
            mercury__multi_map__succeeded = ((MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 512 "multi_map.m"
            if (mercury__multi_map__succeeded)
#line 512 "multi_map.m"
              {
#line 512 "multi_map.m"
                mercury__multi_map__Value_10 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 512 "multi_map.m"
                mercury__multi_map__Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 514 "multi_map.m"
                {
#line 514 "multi_map.m"
                  mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_17, mercury__multi_map__TypeInfo_for_V_18, mercury__multi_map__Key_8, mercury__multi_map__Value_10, mercury__multi_map__STATE_VARIABLE_MultiMap_0_3, &mercury__multi_map__STATE_VARIABLE_MultiMap_15_15);
                }
#line 515 "multi_map.m"
                {
#line 515 "multi_map.m"
                  /* direct tailcall eliminated */
#line 515 "multi_map.m"
                  {
#line 515 "multi_map.m"
                    MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__Keys_9;
#line 515 "multi_map.m"
                    MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Values_11;
#line 515 "multi_map.m"
                    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_15_15;

#line 515 "multi_map.m"
                    mercury__multi_map__STATE_VARIABLE_MultiMap_0_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3;
#line 515 "multi_map.m"
                    mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 515 "multi_map.m"
                    mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
#line 515 "multi_map.m"
                  }
#line 515 "multi_map.m"
                  continue;
#line 515 "multi_map.m"
                }
#line 512 "multi_map.m"
              }
#line 513 "multi_map.m"
          }
#line 511 "multi_map.m"
        return mercury__multi_map__succeeded;
#line 511 "multi_map.m"
      }
#line 511 "multi_map.m"
      break;
#line 511 "multi_map.m"
    }
#line 508 "multi_map.m"
}

#line 477 "multi_map.m"
void MR_CALL 
mercury__multi_map__count_list_3_p_0(
#line 477 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_A_11,
#line 477 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 477 "multi_map.m"
  MR_Integer mercury__multi_map__HeadVar__2_2,
#line 477 "multi_map.m"
  MR_Integer * mercury__multi_map__HeadVar__3_3)
#line 477 "multi_map.m"
{
#line 479 "multi_map.m"
  while (MR_TRUE)
#line 479 "multi_map.m"
    {
#line 479 "multi_map.m"
      /* tailcall optimized into a loop */
#line 479 "multi_map.m"
      {
#line 479 "multi_map.m"
        MR_bool mercury__multi_map__succeeded;

#line 479 "multi_map.m"
        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "multi_map.m"
          *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__2_2;
#line 479 "multi_map.m"
        else
#line 480 "multi_map.m"
          {
#line 480 "multi_map.m"
            MR_Word mercury__multi_map__As_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "multi_map.m"
            MR_Integer mercury__multi_map__Count1_9 = (mercury__multi_map__HeadVar__2_2 + (MR_Integer) 1);
#line 480 "multi_map.m"
            MR_Box mercury__multi_map___A_5 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));

#line 482 "multi_map.m"
            /* direct tailcall eliminated */
#line 482 "multi_map.m"
            {
#line 482 "multi_map.m"
              MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__As_6;
#line 482 "multi_map.m"
              MR_Integer mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Count1_9;

#line 482 "multi_map.m"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 482 "multi_map.m"
              mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
#line 482 "multi_map.m"
            }
#line 482 "multi_map.m"
            continue;
#line 480 "multi_map.m"
          }
#line 479 "multi_map.m"
      }
#line 479 "multi_map.m"
      break;
#line 479 "multi_map.m"
    }
#line 477 "multi_map.m"
}

#line 265 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_smallest_4_p_0(
#line 265 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 265 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 265 "multi_map.m"
  MR_Box * mercury__multi_map__MultiMap0_5,
#line 265 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 265 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 265 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 265 "multi_map.m"
{
#line 588 "multi_map.m"
  {
#line 588 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 588 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 588 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 65 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 65 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 65 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 1676 "multi_map.c"
    {
#line 1678 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1680 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 1682 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 1684 "multi_map.c"
    }
#line 65 "tree234.opt"
    {
#line 65 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 65 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 65 "tree234.opt"
      {
#line 65 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 65 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 65 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 65 "tree234.opt"
      }
#line 588 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 588 "multi_map.m"
  }
#line 265 "multi_map.m"
}

#line 260 "multi_map.m"
void MR_CALL 
mercury__multi_map__optimize_2_p_0(
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3,
#line 260 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 260 "multi_map.m"
{
#line 203 "map.opt"
  {
#line 203 "map.opt"
    MR_bool mercury__multi_map__succeeded;

#line 203 "map.opt"
    *mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;
#line 203 "map.opt"
  }
#line 260 "multi_map.m"
}

#line 259 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__optimize_1_f_0(
#line 259 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 259 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 259 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 259 "multi_map.m"
{
#line 203 "map.opt"
  {
#line 203 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 203 "map.opt"
    MR_Word mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;

#line 203 "map.opt"
    return mercury__multi_map__MultiMap_4;
#line 203 "map.opt"
  }
#line 259 "multi_map.m"
}

#line 251 "multi_map.m"
void MR_CALL 
mercury__multi_map__apply_to_list_3_p_0(
#line 251 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 251 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 251 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 251 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_2,
#line 251 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__3_3)
#line 251 "multi_map.m"
{
#line 580 "multi_map.m"
  {
#line 580 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 580 "multi_map.m"
    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "multi_map.m"
      *mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "multi_map.m"
    else
#line 581 "multi_map.m"
      {
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_10_21;
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__Values0_9;
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__RevXss_5_17;
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__V_6_18;
#line 582 "multi_map.m"
        MR_Word mercury__multi_map__conv0_Values0_9;

#line 1801 "multi_map.c"
        {
#line 1803 "multi_map.c"
          mercury__multi_map__TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1805 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 1807 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 1809 "multi_map.c"
        }
#line 582 "multi_map.m"
        {
#line 582 "multi_map.m"
          mercury__map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_10_21, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__MultiMap_2, &mercury__multi_map__conv0_Values0_9);
        }
#line 582 "multi_map.m"
        mercury__multi_map__Values0_9 = (MR_Word) mercury__multi_map__conv0_Values0_9;
#line 150 "list.opt"
        {
#line 150 "list.opt"
          mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_21, mercury__multi_map__Values0_9, &mercury__multi_map__RevXss_5_17);
        }
#line 151 "list.opt"
        mercury__multi_map__V_6_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "list.opt"
        {
#line 152 "list.opt"
          mercury__list__condense_2_3_p_0(mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__RevXss_5_17, mercury__multi_map__V_6_18, mercury__multi_map__HeadVar__3_3);
#line 152 "list.opt"
          return;
        }
#line 581 "multi_map.m"
      }
#line 580 "multi_map.m"
  }
#line 251 "multi_map.m"
}

#line 250 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__apply_to_list_2_f_0(
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_5)
#line 250 "multi_map.m"
{
#line 578 "multi_map.m"
  {
#line 578 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 578 "multi_map.m"
    MR_Word mercury__multi_map__Values_6;

#line 578 "multi_map.m"
    {
#line 578 "multi_map.m"
      mercury__multi_map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__MultiMap_5, &mercury__multi_map__Values_6);
    }
#line 578 "multi_map.m"
    return mercury__multi_map__Values_6;
#line 578 "multi_map.m"
  }
#line 250 "multi_map.m"
}

#line 244 "multi_map.m"
void MR_CALL 
mercury__multi_map__select_3_p_0(
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__Original_4,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5,
#line 244 "multi_map.m"
  MR_Word * mercury__multi_map__NewMultiMap_6)
#line 244 "multi_map.m"
{
#line 573 "multi_map.m"
  {
#line 573 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__Keys_7_14;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__NewMap0_8_15;
#line 193 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1901 "multi_map.c"
    {
#line 1903 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1905 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 1907 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1909 "multi_map.c"
    }
#line 38 "set_ordlist.opt"
    mercury__multi_map__Keys_7_14 = (MR_Word) mercury__multi_map__KeySet_5;
#line 48 "tree234.opt"
    mercury__multi_map__NewMap0_8_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "map.opt"
    {
#line 193 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_7_14, (MR_Word) mercury__multi_map__Original_4, (MR_Word) mercury__multi_map__NewMap0_8_15, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 193 "map.opt"
    *mercury__multi_map__NewMultiMap_6 = (MR_Word) mercury__multi_map__conv0_NewMultiMap_6;
#line 573 "multi_map.m"
  }
#line 244 "multi_map.m"
}

#line 243 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__select_2_f_0(
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5)
#line 243 "multi_map.m"
{
#line 573 "multi_map.m"
  {
#line 573 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__NewMultiMap_6;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__Keys_7_17;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__NewMap0_8_18;
#line 193 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1957 "multi_map.c"
    {
#line 1959 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1961 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 1963 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1965 "multi_map.c"
    }
#line 38 "set_ordlist.opt"
    mercury__multi_map__Keys_7_17 = (MR_Word) mercury__multi_map__KeySet_5;
#line 48 "tree234.opt"
    mercury__multi_map__NewMap0_8_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "map.opt"
    {
#line 193 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_7_17, (MR_Word) mercury__multi_map__MultiMap_4, (MR_Word) mercury__multi_map__NewMap0_8_18, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 193 "map.opt"
    mercury__multi_map__NewMultiMap_6 = (MR_Word) mercury__multi_map__conv0_NewMultiMap_6;
#line 573 "multi_map.m"
    return mercury__multi_map__NewMultiMap_6;
#line 573 "multi_map.m"
  }
#line 243 "multi_map.m"
}

#line 236 "multi_map.m"
void MR_CALL 
mercury__multi_map__merge_3_p_0(
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__M0_4,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__M1_5,
#line 236 "multi_map.m"
  MR_Word * mercury__multi_map__M_6)
#line 236 "multi_map.m"
{
#line 528 "multi_map.m"
  {
#line 528 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_37;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__ML0_7;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__ML1_8;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__ML_9;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 528 "multi_map.m"
    MR_Word mercury__multi_map__V_5_31;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_ML0_7;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv1_ML1_8;
#line 149 "map.opt"
    MR_Word mercury__multi_map__conv2_M_6;

#line 2025 "multi_map.c"
    {
#line 2027 "multi_map.c"
      mercury__multi_map__TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2029 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_14));
#line 2031 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_11));
#line 2033 "multi_map.c"
    }
#line 85 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M0_4, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv0_ML0_7);
    }
#line 86 "tree234.opt"
    mercury__multi_map__ML0_7 = (MR_Word) mercury__multi_map__conv0_ML0_7;
#line 85 "tree234.opt"
    mercury__multi_map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M1_5, (MR_Word) mercury__multi_map__V_5_31, &mercury__multi_map__conv1_ML1_8);
    }
#line 86 "tree234.opt"
    mercury__multi_map__ML1_8 = (MR_Word) mercury__multi_map__conv1_ML1_8;
#line 531 "multi_map.m"
    {
#line 531 "multi_map.m"
      mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__ML0_7, mercury__multi_map__ML1_8, &mercury__multi_map__ML_9);
    }
#line 149 "map.opt"
    {
#line 149 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__ML_9, &mercury__multi_map__conv2_M_6);
    }
#line 149 "map.opt"
    *mercury__multi_map__M_6 = (MR_Word) mercury__multi_map__conv2_M_6;
#line 528 "multi_map.m"
  }
#line 236 "multi_map.m"
}

#line 234 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__merge_2_f_0(
#line 234 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 234 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 234 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapA_4,
#line 234 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapB_5)
#line 234 "multi_map.m"
{
#line 526 "multi_map.m"
  {
#line 526 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 526 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;

#line 526 "multi_map.m"
    {
#line 526 "multi_map.m"
      mercury__multi_map__merge_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMapA_4, mercury__multi_map__MultiMapB_5, &mercury__multi_map__MultiMap_6);
    }
#line 526 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 526 "multi_map.m"
  }
#line 234 "multi_map.m"
}

#line 224 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_list_lists_3_p_0(
#line 224 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 224 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 224 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 224 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 224 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 224 "multi_map.m"
{
#line 521 "multi_map.m"
  {
#line 521 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_7_14;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__V_5_17;
#line 171 "map.opt"
    MR_Word mercury__multi_map__conv0_AssocList_7_14;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2134 "multi_map.c"
    {
#line 2136 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2138 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 2140 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2142 "multi_map.c"
    }
#line 171 "map.opt"
    {
#line 171 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_AssocList_7_14);
    }
#line 171 "map.opt"
    mercury__multi_map__AssocList_7_14 = (MR_Word) mercury__multi_map__conv0_AssocList_7_14;
#line 90 "tree234.opt"
    mercury__multi_map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__AssocList_7_14, (MR_Word) mercury__multi_map__V_5_17, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 91 "tree234.opt"
    *mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
#line 521 "multi_map.m"
  }
#line 224 "multi_map.m"
}

#line 222 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_list_lists_2_f_0(
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 222 "multi_map.m"
{
#line 521 "multi_map.m"
  {
#line 521 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_7_17;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 171 "map.opt"
    MR_Word mercury__multi_map__conv0_AssocList_7_17;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2197 "multi_map.c"
    {
#line 2199 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2201 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 2203 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2205 "multi_map.c"
    }
#line 171 "map.opt"
    {
#line 171 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_AssocList_7_17);
    }
#line 171 "map.opt"
    mercury__multi_map__AssocList_7_17 = (MR_Word) mercury__multi_map__conv0_AssocList_7_17;
#line 90 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__AssocList_7_17, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 91 "tree234.opt"
    mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
#line 521 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 521 "multi_map.m"
  }
#line 222 "multi_map.m"
}

#line 216 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_lists_3_p_0(
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_12,
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_13,
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 216 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 216 "multi_map.m"
{
#line 497 "multi_map.m"
  {
#line 497 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 497 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap1_8;

#line 500 "multi_map.m"
    {
#line 500 "multi_map.m"
      mercury__multi_map__succeeded = mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_12, mercury__multi_map__TypeInfo_for_V_13, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_7, &mercury__multi_map__MultiMap1_8);
    }
#line 504 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 503 "multi_map.m"
      *mercury__multi_map__MultiMap_6 = mercury__multi_map__MultiMap1_8;
#line 504 "multi_map.m"
    else
#line 505 "multi_map.m"
      {
#line 505 "multi_map.m"
        {
#line 505 "multi_map.m"
          mercury__require__unexpected_3_p_0((MR_String) "multi_map", (MR_String) "predicate \140multi_map.from_corresponding_lists\'/3", (MR_String) "list length mismatch");
#line 505 "multi_map.m"
          return;
        }
#line 505 "multi_map.m"
      }
#line 497 "multi_map.m"
  }
#line 216 "multi_map.m"
}

#line 214 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_lists_2_f_0(
#line 214 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 214 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 214 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 214 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 214 "multi_map.m"
{
#line 495 "multi_map.m"
  {
#line 495 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 495 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;

#line 495 "multi_map.m"
    {
#line 495 "multi_map.m"
      mercury__multi_map__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, &mercury__multi_map__MultiMap_6);
    }
#line 495 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 495 "multi_map.m"
  }
#line 214 "multi_map.m"
}

#line 209 "multi_map.m"
void MR_CALL 
mercury__multi_map__all_count_2_p_0(
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 209 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 209 "multi_map.m"
{
#line 473 "multi_map.m"
  {
#line 473 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 473 "multi_map.m"
    MR_Word mercury__multi_map__List_5;

#line 474 "multi_map.m"
    {
#line 474 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMap_3, &mercury__multi_map__List_5);
    }
#line 475 "multi_map.m"
    {
#line 475 "multi_map.m"
      mercury__multi_map__count_list_3_p_0(mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__List_5, (MR_Integer) 0, mercury__multi_map__Count_4);
#line 475 "multi_map.m"
      return;
    }
#line 473 "multi_map.m"
  }
#line 209 "multi_map.m"
}

#line 208 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__all_count_1_f_0(
#line 208 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 208 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 208 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 208 "multi_map.m"
{
#line 473 "multi_map.m"
  {
#line 473 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 473 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;
#line 473 "multi_map.m"
    MR_Word mercury__multi_map__List_9;

#line 474 "multi_map.m"
    {
#line 474 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap0_3, &mercury__multi_map__List_9);
    }
#line 475 "multi_map.m"
    {
#line 475 "multi_map.m"
      mercury__multi_map__count_list_3_p_0(mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__List_9, (MR_Integer) 0, &mercury__multi_map__Count_4);
    }
#line 473 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 473 "multi_map.m"
  }
#line 208 "multi_map.m"
}

#line 204 "multi_map.m"
void MR_CALL 
mercury__multi_map__count_2_p_0(
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 204 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 204 "multi_map.m"
{
#line 468 "multi_map.m"
  {
#line 468 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 468 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 468 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;

#line 2409 "multi_map.c"
    {
#line 2411 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2413 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2415 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2417 "multi_map.c"
    }
#line 167 "map.opt"
    {
#line 167 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Count_4);
#line 167 "map.opt"
      return;
    }
#line 468 "multi_map.m"
  }
#line 204 "multi_map.m"
}

#line 203 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__count_1_f_0(
#line 203 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 203 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 203 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 203 "multi_map.m"
{
#line 468 "multi_map.m"
  {
#line 468 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 468 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;
#line 468 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 468 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;

#line 2453 "multi_map.c"
    {
#line 2455 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2457 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2459 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2461 "multi_map.c"
    }
#line 167 "map.opt"
    {
#line 167 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
#line 468 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 468 "multi_map.m"
  }
#line 203 "multi_map.m"
}

#line 198 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_remove_4_p_0(
#line 198 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 198 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 198 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 198 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 198 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 198 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 198 "multi_map.m"
{
#line 460 "multi_map.m"
  {
#line 460 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 460 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 460 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 460 "multi_map.m"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 460 "multi_map.m"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 2505 "multi_map.c"
    {
#line 2507 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2509 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2511 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2513 "multi_map.c"
    }
#line 460 "multi_map.m"
    {
#line 460 "multi_map.m"
      mercury__map__det_remove_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, (MR_Word) mercury__multi_map__Values_7, &mercury__multi_map__conv0_MultiMap_8);
    }
#line 460 "multi_map.m"
    *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 460 "multi_map.m"
    *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 460 "multi_map.m"
  }
#line 198 "multi_map.m"
}

#line 192 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_4_p_0(
#line 192 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 192 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 192 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 192 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 192 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 192 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 192 "multi_map.m"
{
#line 457 "multi_map.m"
  {
#line 457 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 63 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 63 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 63 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 2561 "multi_map.c"
    {
#line 2563 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2565 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2567 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2569 "multi_map.c"
    }
#line 63 "tree234.opt"
    {
#line 63 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 63 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 63 "tree234.opt"
      {
#line 63 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 63 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 63 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 63 "tree234.opt"
      }
#line 457 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 457 "multi_map.m"
  }
#line 192 "multi_map.m"
}

#line 186 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_4_p_0(
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
#line 186 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 186 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_12,
#line 186 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_13)
#line 186 "multi_map.m"
{
#line 452 "multi_map.m"
  {
#line 452 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 452 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 452 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 442 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 442 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 2627 "multi_map.c"
    {
#line 2629 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2631 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 2633 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 2635 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 442 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 442 "multi_map.m"
      {
#line 443 "multi_map.m"
        {
#line 443 "multi_map.m"
          mercury__list__delete_all_3_p_1(mercury__multi_map__TypeInfo_for_V_17, mercury__multi_map__Values0_8, mercury__multi_map__Value_6, &mercury__multi_map__Values_9);
        }
#line 443 "multi_map.m"
        mercury__multi_map__succeeded = MR_TRUE;
#line 442 "multi_map.m"
      }
#line 452 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 448 "multi_map.m"
      if ((mercury__multi_map__Values_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          MR_Word mercury__multi_map__V_7_33;
#line 61 "tree234.opt"
          MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;

#line 61 "tree234.opt"
          {
#line 61 "tree234.opt"
            mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13, &mercury__multi_map__V_7_33);
          }
#line 61 "tree234.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;
#line 61 "tree234.opt"
        }
#line 448 "multi_map.m"
      else
#line 119 "map.opt"
        {
#line 119 "map.opt"
          MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;

#line 119 "map.opt"
          {
#line 119 "map.opt"
            mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13);
          }
#line 119 "map.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;
#line 119 "map.opt"
        }
#line 452 "multi_map.m"
    else
#line 452 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_12;
#line 452 "multi_map.m"
  }
#line 186 "multi_map.m"
}

#line 185 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_3_f_0(
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 185 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 185 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 185 "multi_map.m"
{
#line 438 "multi_map.m"
  {
#line 438 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 438 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 438 "multi_map.m"
    {
#line 438 "multi_map.m"
      mercury__multi_map__delete_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 438 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 438 "multi_map.m"
  }
#line 185 "multi_map.m"
}

#line 179 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_3_p_0(
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 179 "multi_map.m"
  MR_Box mercury__multi_map__Key_4,
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 179 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_7)
#line 179 "multi_map.m"
{
#line 435 "multi_map.m"
  {
#line 435 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__V_7_19;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2772 "multi_map.c"
    {
#line 2774 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2776 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2778 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2780 "multi_map.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_4, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_19);
    }
#line 61 "tree234.opt"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 435 "multi_map.m"
  }
#line 179 "multi_map.m"
}

#line 178 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_2_f_0(
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 178 "multi_map.m"
  MR_Box mercury__multi_map__Key_5)
#line 178 "multi_map.m"
{
#line 435 "multi_map.m"
  {
#line 435 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_17;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__V_7_24;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2822 "multi_map.c"
    {
#line 2824 "multi_map.c"
      mercury__multi_map__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2826 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_16));
#line 2828 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2830 "multi_map.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_17, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_5, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_24);
    }
#line 61 "tree234.opt"
    mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 435 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 435 "multi_map.m"
  }
#line 178 "multi_map.m"
}

#line 172 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_sorted_assoc_list_2_p_0(
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__AList_3,
#line 172 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 172 "multi_map.m"
{
#line 427 "multi_map.m"
  {
#line 427 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 427 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 427 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 149 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2870 "multi_map.c"
    {
#line 2872 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2874 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2876 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2878 "multi_map.c"
    }
#line 149 "map.opt"
    {
#line 149 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 149 "map.opt"
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 427 "multi_map.m"
  }
#line 172 "multi_map.m"
}

#line 170 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_sorted_assoc_list_1_f_0(
#line 170 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 170 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 170 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 170 "multi_map.m"
{
#line 427 "multi_map.m"
  {
#line 427 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 427 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 427 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 427 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 149 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2916 "multi_map.c"
    {
#line 2918 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2920 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2922 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2924 "multi_map.c"
    }
#line 149 "map.opt"
    {
#line 149 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 149 "map.opt"
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 427 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 427 "multi_map.m"
  }
#line 170 "multi_map.m"
}

#line 165 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_assoc_list_2_p_0(
#line 165 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 165 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 165 "multi_map.m"
  MR_Word mercury__multi_map__AList_3,
#line 165 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 165 "multi_map.m"
{
#line 421 "multi_map.m"
  {
#line 421 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2966 "multi_map.c"
    {
#line 2968 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2970 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2972 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2974 "multi_map.c"
    }
#line 90 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AList_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 91 "tree234.opt"
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 421 "multi_map.m"
  }
#line 165 "multi_map.m"
}

#line 164 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_assoc_list_1_f_0(
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 164 "multi_map.m"
{
#line 421 "multi_map.m"
  {
#line 421 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 3016 "multi_map.c"
    {
#line 3018 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3020 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3022 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3024 "multi_map.c"
    }
#line 90 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 91 "tree234.opt"
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 421 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 421 "multi_map.m"
  }
#line 164 "multi_map.m"
}

#line 158 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_assoc_list_2_p_0(
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 158 "multi_map.m"
  MR_Word * mercury__multi_map__AList_4)
#line 158 "multi_map.m"
{
#line 415 "multi_map.m"
  {
#line 415 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 3068 "multi_map.c"
    {
#line 3070 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3072 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 3074 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3076 "multi_map.c"
    }
#line 85 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_AList_4);
    }
#line 86 "tree234.opt"
    *mercury__multi_map__AList_4 = (MR_Word) mercury__multi_map__conv0_AList_4;
#line 415 "multi_map.m"
  }
#line 158 "multi_map.m"
}

#line 157 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_assoc_list_1_f_0(
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 157 "multi_map.m"
{
#line 415 "multi_map.m"
  {
#line 415 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 3118 "multi_map.c"
    {
#line 3120 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3122 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3124 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3126 "multi_map.c"
    }
#line 85 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_AssocList_4);
    }
#line 86 "tree234.opt"
    mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
#line 415 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 415 "multi_map.m"
  }
#line 157 "multi_map.m"
}

#line 151 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_flat_assoc_list_2_p_0(
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_17,
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_18,
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__AList_3,
#line 151 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 151 "multi_map.m"
{
#line 404 "multi_map.m"
  {
#line 404 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 404 "multi_map.m"
    MR_Word mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(mercury__multi_map__TypeInfo_for_K_17, mercury__multi_map__TypeInfo_for_V_18, mercury__multi_map__AList_3, mercury__multi_map__V_13_13, mercury__multi_map__MultiMap_4);
#line 395 "list.opt"
      return;
    }
#line 404 "multi_map.m"
  }
#line 151 "multi_map.m"
}

#line 150 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_flat_assoc_list_1_f_0(
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 150 "multi_map.m"
{
#line 402 "multi_map.m"
  {
#line 402 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 402 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;

#line 402 "multi_map.m"
    {
#line 402 "multi_map.m"
      mercury__multi_map__from_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__AssocList_3, &mercury__multi_map__MultiMap_4);
    }
#line 402 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 402 "multi_map.m"
  }
#line 150 "multi_map.m"
}

#line 145 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_flat_assoc_list_2_p_0(
#line 145 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_25,
#line 145 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_26,
#line 145 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 145 "multi_map.m"
  MR_Word * mercury__multi_map__AList_4)
#line 145 "multi_map.m"
{
#line 392 "multi_map.m"
  {
#line 392 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_27_27 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_28_28;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__V_9_9;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__V_20_20;
#line 118 "list.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 3234 "multi_map.c"
    {
#line 3236 "multi_map.c"
      mercury__multi_map__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3238 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_27_27));
#line 3240 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_25));
#line 3242 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_26));
#line 3244 "multi_map.c"
    }
#line 399 "multi_map.m"
    mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "map.opt"
    {
#line 219 "map.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__MultiMap_3, mercury__multi_map__V_20_20, &mercury__multi_map__V_9_9);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_28_28, (MR_Word) mercury__multi_map__V_9_9, &mercury__multi_map__conv0_AList_4);
    }
#line 118 "list.opt"
    *mercury__multi_map__AList_4 = (MR_Word) mercury__multi_map__conv0_AList_4;
#line 392 "multi_map.m"
  }
#line 145 "multi_map.m"
}

#line 144 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_flat_assoc_list_1_f_0(
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 144 "multi_map.m"
{
#line 390 "multi_map.m"
  {
#line 390 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;

#line 390 "multi_map.m"
    {
#line 390 "multi_map.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__AssocList_4);
    }
#line 390 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 390 "multi_map.m"
  }
#line 144 "multi_map.m"
}

#line 140 "multi_map.m"
void MR_CALL 
mercury__multi_map__values_2_p_0(
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_6,
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 140 "multi_map.m"
  MR_Word * mercury__multi_map__KeyList_4)
#line 140 "multi_map.m"
{
#line 383 "multi_map.m"
  {
#line 383 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_22;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__KeyList0_5;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__V_5_14;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__RevXss_5_18;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__V_6_19;
#line 75 "tree234.opt"
    MR_Word mercury__multi_map__conv0_KeyList0_5;

#line 3327 "multi_map.c"
    {
#line 3329 "multi_map.c"
      mercury__multi_map__TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3331 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 3333 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
#line 3335 "multi_map.c"
    }
#line 74 "tree234.opt"
    mercury__multi_map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 75 "tree234.opt"
    {
#line 75 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__multi_map__TypeInfo_for__K_6, mercury__multi_map__TypeInfo_10_22, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_14, &mercury__multi_map__conv0_KeyList0_5);
    }
#line 75 "tree234.opt"
    mercury__multi_map__KeyList0_5 = (MR_Word) mercury__multi_map__conv0_KeyList0_5;
#line 150 "list.opt"
    {
#line 150 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_22, mercury__multi_map__KeyList0_5, &mercury__multi_map__RevXss_5_18);
    }
#line 151 "list.opt"
    mercury__multi_map__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "list.opt"
    {
#line 152 "list.opt"
      mercury__list__condense_2_3_p_0(mercury__multi_map__TypeInfo_for_V_7, mercury__multi_map__RevXss_5_18, mercury__multi_map__V_6_19, mercury__multi_map__KeyList_4);
#line 152 "list.opt"
      return;
    }
#line 383 "multi_map.m"
  }
#line 140 "multi_map.m"
}

#line 139 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__values_1_f_0(
#line 139 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_5,
#line 139 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 139 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 139 "multi_map.m"
{
#line 381 "multi_map.m"
  {
#line 381 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 381 "multi_map.m"
    MR_Word mercury__multi_map__Valyes_4;

#line 381 "multi_map.m"
    {
#line 381 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for__K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__Valyes_4);
    }
#line 381 "multi_map.m"
    return mercury__multi_map__Valyes_4;
#line 381 "multi_map.m"
  }
#line 139 "multi_map.m"
}

#line 134 "multi_map.m"
void MR_CALL 
mercury__multi_map__keys_2_p_0(
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 134 "multi_map.m"
  MR_Word * mercury__multi_map__KeyList_4)
#line 134 "multi_map.m"
{
#line 378 "multi_map.m"
  {
#line 378 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;

#line 3419 "multi_map.c"
    {
#line 3421 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3423 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 3425 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3427 "multi_map.c"
    }
#line 69 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_13, mercury__multi_map__KeyList_4);
#line 70 "tree234.opt"
      return;
    }
#line 378 "multi_map.m"
  }
#line 134 "multi_map.m"
}

#line 133 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 133 "multi_map.m"
{
#line 378 "multi_map.m"
  {
#line 378 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__Keys_4;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 378 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;

#line 3467 "multi_map.c"
    {
#line 3469 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3471 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3473 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3475 "multi_map.c"
    }
#line 69 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_15, &mercury__multi_map__Keys_4);
    }
#line 378 "multi_map.m"
    return mercury__multi_map__Keys_4;
#line 378 "multi_map.m"
  }
#line 133 "multi_map.m"
}

#line 128 "multi_map.m"
void MR_CALL 
mercury__multi_map__add_4_p_0(
#line 128 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 128 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 128 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 128 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 128 "multi_map.m"
  MR_Word mercury__multi_map__Value_7,
#line 128 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 128 "multi_map.m"
{
#line 370 "multi_map.m"
  {
#line 370 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 370 "multi_map.m"
    {
#line 370 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_for_V_10, mercury__multi_map__MultiMap0_5, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__MultiMap_8);
#line 370 "multi_map.m"
      return;
    }
#line 370 "multi_map.m"
  }
#line 128 "multi_map.m"
}

#line 127 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__add_3_f_0(
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 127 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 127 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 127 "multi_map.m"
{
#line 367 "multi_map.m"
  {
#line 367 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 367 "multi_map.m"
    {
#line 367 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 367 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 367 "multi_map.m"
  }
#line 127 "multi_map.m"
}

#line 124 "multi_map.m"
void MR_CALL 
mercury__multi_map__reverse_set_4_p_0(
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_12,
#line 124 "multi_map.m"
  MR_Box mercury__multi_map__Value_5,
#line 124 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 124 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 124 "multi_map.m"
{
#line 364 "multi_map.m"
  {
#line 364 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 364 "multi_map.m"
    {
#line 364 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_12, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__Key_6, mercury__multi_map__Value_5, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__STATE_VARIABLE_MultiMap_9);
#line 364 "multi_map.m"
      return;
    }
#line 364 "multi_map.m"
  }
#line 124 "multi_map.m"
}

#line 123 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__reverse_set_3_f_0(
#line 123 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 123 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 123 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 123 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 123 "multi_map.m"
  MR_Box mercury__multi_map__Key_7)
#line 123 "multi_map.m"
{
#line 364 "multi_map.m"
  {
#line 364 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 364 "multi_map.m"
    {
#line 364 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_7, mercury__multi_map__Value_6, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 364 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 364 "multi_map.m"
  }
#line 123 "multi_map.m"
}

#line 117 "multi_map.m"
void MR_CALL 
mercury__multi_map__set_4_p_0(
#line 117 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
#line 117 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
#line 117 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 117 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 117 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
#line 117 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
#line 117 "multi_map.m"
{
#line 356 "multi_map.m"
  {
#line 356 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 356 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 356 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 353 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 3657 "multi_map.c"
    {
#line 3659 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3661 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 3663 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3665 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 356 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 354 "multi_map.m"
      {
#line 354 "multi_map.m"
        MR_Word mercury__multi_map__Values_9;
#line 119 "map.opt"
        MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 354 "multi_map.m"
        {
#line 354 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 354 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 354 "multi_map.m"
        }
#line 119 "map.opt"
        {
#line 119 "map.opt"
          mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 119 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 354 "multi_map.m"
      }
#line 356 "multi_map.m"
    else
#line 357 "multi_map.m"
      {
#line 357 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_22_22;
#line 357 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_23_23;
#line 357 "multi_map.m"
        MR_Word mercury__multi_map__V_13_13;
#line 357 "multi_map.m"
        MR_Word mercury__multi_map__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "multi_map.m"
        MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;

#line 357 "multi_map.m"
        {
#line 357 "multi_map.m"
          mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 0) = mercury__multi_map__Value_6;
#line 357 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 1) = ((MR_Box) (mercury__multi_map__V_15_15));
#line 357 "multi_map.m"
        }
#line 3735 "multi_map.c"
        mercury__multi_map__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3737 "multi_map.c"
        {
#line 3739 "multi_map.c"
          mercury__multi_map__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3741 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_22_22));
#line 3743 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3745 "multi_map.c"
        }
#line 357 "multi_map.m"
        {
#line 357 "multi_map.m"
          mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_23_23, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_13_13)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11);
        }
#line 357 "multi_map.m"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;
#line 357 "multi_map.m"
      }
#line 356 "multi_map.m"
  }
#line 117 "multi_map.m"
}

#line 116 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__set_3_f_0(
#line 116 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 116 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 116 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 116 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 116 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 116 "multi_map.m"
{
#line 350 "multi_map.m"
  {
#line 350 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 350 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 350 "multi_map.m"
    {
#line 350 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 350 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 350 "multi_map.m"
  }
#line 116 "multi_map.m"
}

#line 110 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_replace_4_p_0(
#line 110 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 110 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 110 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 110 "multi_map.m"
  MR_Word mercury__multi_map__Values_6,
#line 110 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 110 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 110 "multi_map.m"
{
#line 347 "multi_map.m"
  {
#line 347 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3823 "multi_map.c"
    {
#line 3825 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3827 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3829 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3831 "multi_map.c"
    }
#line 347 "multi_map.m"
    {
#line 347 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 347 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 347 "multi_map.m"
  }
#line 110 "multi_map.m"
}

#line 109 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_replace_3_f_0(
#line 109 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 109 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 109 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 109 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 109 "multi_map.m"
  MR_Word mercury__multi_map__Values_7)
#line 109 "multi_map.m"
{
#line 347 "multi_map.m"
  {
#line 347 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_20;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3873 "multi_map.c"
    {
#line 3875 "multi_map.c"
      mercury__multi_map__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3877 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_19));
#line 3879 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3881 "multi_map.c"
    }
#line 347 "multi_map.m"
    {
#line 347 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_20, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__Values_7)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 347 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 347 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 347 "multi_map.m"
  }
#line 109 "multi_map.m"
}

#line 103 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__replace_4_p_0(
#line 103 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 103 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 103 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 103 "multi_map.m"
  MR_Word mercury__multi_map__Value_6,
#line 103 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 103 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 103 "multi_map.m"
{
#line 341 "multi_map.m"
  {
#line 341 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 341 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 341 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 89 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3925 "multi_map.c"
    {
#line 3927 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3929 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3931 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3933 "multi_map.c"
    }
#line 89 "map.opt"
    {
#line 89 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 89 "map.opt"
    if (mercury__multi_map__succeeded)
#line 89 "map.opt"
      {
#line 89 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 89 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 89 "map.opt"
      }
#line 341 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 341 "multi_map.m"
  }
#line 103 "multi_map.m"
}

#line 97 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_update_4_p_0(
#line 97 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 97 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 97 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 97 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 97 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 97 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 97 "multi_map.m"
{
#line 336 "multi_map.m"
  {
#line 336 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 336 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_24;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__Values0_20;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__Values_21;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_20;
#line 89 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;

#line 3993 "multi_map.c"
    {
#line 3995 "multi_map.c"
      mercury__multi_map__TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3997 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_23));
#line 3999 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4001 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_20);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values0_20 = ((MR_Word) mercury__multi_map__conv0_Values0_20);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 325 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 325 "multi_map.m"
      {
#line 327 "multi_map.m"
        {
#line 327 "multi_map.m"
          mercury__multi_map__Values_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 0) = mercury__multi_map__Value_6;
#line 327 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 1) = ((MR_Box) (mercury__multi_map__Values0_20));
#line 327 "multi_map.m"
        }
#line 89 "map.opt"
        {
#line 89 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_21)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10);
        }
#line 89 "map.opt"
        if (mercury__multi_map__succeeded)
#line 89 "map.opt"
          {
#line 89 "map.opt"
            mercury__multi_map__STATE_VARIABLE_MultiMap_10_10 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;
#line 89 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 89 "map.opt"
          }
#line 325 "multi_map.m"
      }
#line 336 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 336 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 336 "multi_map.m"
    else
#line 337 "multi_map.m"
      {
#line 337 "multi_map.m"
        {
#line 337 "multi_map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__multi_map__TypeInfo_for_K_13, (MR_String) "multi_map.det_update: key not found", mercury__multi_map__Key_5);
#line 337 "multi_map.m"
          return;
        }
#line 337 "multi_map.m"
      }
#line 336 "multi_map.m"
  }
#line 97 "multi_map.m"
}

#line 96 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_update_3_f_0(
#line 96 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 96 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 96 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 96 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 96 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 96 "multi_map.m"
{
#line 331 "multi_map.m"
  {
#line 331 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 331 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 331 "multi_map.m"
    {
#line 331 "multi_map.m"
      mercury__multi_map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 331 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 331 "multi_map.m"
  }
#line 96 "multi_map.m"
}

#line 90 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__update_4_p_0(
#line 90 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 90 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 90 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 90 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 90 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
#line 90 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
#line 90 "multi_map.m"
{
#line 325 "multi_map.m"
  {
#line 325 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 325 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;
#line 89 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 4139 "multi_map.c"
    {
#line 4141 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4143 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4145 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4147 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 325 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 325 "multi_map.m"
      {
#line 327 "multi_map.m"
        {
#line 327 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 327 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 327 "multi_map.m"
        }
#line 89 "map.opt"
        {
#line 89 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 89 "map.opt"
        if (mercury__multi_map__succeeded)
#line 89 "map.opt"
          {
#line 89 "map.opt"
            *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 89 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 89 "map.opt"
          }
#line 325 "multi_map.m"
      }
#line 325 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 325 "multi_map.m"
  }
#line 90 "multi_map.m"
}

#line 84 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_insert_4_p_0(
#line 84 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 84 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 84 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 84 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 84 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 84 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 84 "multi_map.m"
{
#line 322 "multi_map.m"
  {
#line 322 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 323 "multi_map.m"
    {
#line 323 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 323 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 323 "multi_map.m"
    }
#line 4244 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4246 "multi_map.c"
    {
#line 4248 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4250 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4252 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4254 "multi_map.c"
    }
#line 323 "multi_map.m"
    {
#line 323 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 323 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 322 "multi_map.m"
  }
#line 84 "multi_map.m"
}

#line 83 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_insert_3_f_0(
#line 83 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 83 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 83 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 83 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 83 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 83 "multi_map.m"
{
#line 322 "multi_map.m"
  {
#line 322 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_21;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_22;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__V_18_18;
#line 322 "multi_map.m"
    MR_Word mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 323 "multi_map.m"
    {
#line 323 "multi_map.m"
      mercury__multi_map__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 0) = mercury__multi_map__Value_7;
#line 323 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 1) = ((MR_Box) (mercury__multi_map__V_20_20));
#line 323 "multi_map.m"
    }
#line 4310 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4312 "multi_map.c"
    {
#line 4314 "multi_map.c"
      mercury__multi_map__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4316 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_21));
#line 4318 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 4320 "multi_map.c"
    }
#line 323 "multi_map.m"
    {
#line 323 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_16_22, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__V_18_18)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 323 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 322 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 322 "multi_map.m"
  }
#line 83 "multi_map.m"
}

#line 77 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__insert_4_p_0(
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 77 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 77 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 77 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 77 "multi_map.m"
{
#line 316 "multi_map.m"
  {
#line 316 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 316 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 316 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 316 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 316 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 75 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 317 "multi_map.m"
    {
#line 317 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 317 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 317 "multi_map.m"
    }
#line 4378 "multi_map.c"
    {
#line 4380 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4382 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4384 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4386 "multi_map.c"
    }
#line 75 "map.opt"
    {
#line 75 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 75 "map.opt"
    if (mercury__multi_map__succeeded)
#line 75 "map.opt"
      {
#line 75 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 75 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 75 "map.opt"
      }
#line 316 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 316 "multi_map.m"
  }
#line 77 "multi_map.m"
}

#line 37 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 37 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 37 "map.opt"
{
#line 37 "map.opt"
  {
#line 37 "map.opt"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 37 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7);
#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__multi_map__inverse_search_3_p_0_1(mercury__multi_map__env_ptr);
#line 37 "map.opt"
      return;
    }
#line 37 "map.opt"
  }
#line 37 "map.opt"
}

#line 488 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 488 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 488 "multi_map.m"
{
#line 488 "multi_map.m"
  {
#line 488 "multi_map.m"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 490 "multi_map.m"
    {
#line 490 "multi_map.m"
      (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__Value_5, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7);
    }
#line 490 "multi_map.m"
    if ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded)
#line 490 "multi_map.m"
      {
#line 490 "multi_map.m"
        ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont)((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr);
#line 490 "multi_map.m"
        return;
      }
#line 488 "multi_map.m"
  }
#line 488 "multi_map.m"
}

#line 72 "multi_map.m"
void MR_CALL 
mercury__multi_map__inverse_search_3_p_0(
#line 72 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 72 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 72 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 72 "multi_map.m"
  MR_Box mercury__multi_map__Value_5,
#line 72 "multi_map.m"
  MR_Box * mercury__multi_map__Key_6,
#line 72 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 72 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 72 "multi_map.m"
{
#line 72 "multi_map.m"
  {
#line 72 "multi_map.m"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s mercury__multi_map__env;

#line 72 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
#line 72 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__Value_5 = mercury__multi_map__Value_5;
#line 72 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont = mercury__multi_map__cont;
#line 72 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
#line 488 "multi_map.m"
    {
#line 488 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 488 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4506 "multi_map.c"
      {
#line 4508 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4510 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4512 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
#line 4514 "multi_map.c"
      }
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_6, &(mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__inverse_search_3_p_0_2, &mercury__multi_map__env);
      }
#line 488 "multi_map.m"
    }
#line 72 "multi_map.m"
  }
#line 72 "multi_map.m"
}

#line 68 "multi_map.m"
void MR_CALL 
mercury__multi_map__nondet_lookup_3_p_0(
#line 68 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 68 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 68 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 68 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 68 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 68 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 68 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 68 "multi_map.m"
{
#line 310 "multi_map.m"
  {
#line 310 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 310 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 310 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 310 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4560 "multi_map.c"
    {
#line 4562 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4564 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4566 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4568 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 310 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 312 "multi_map.m"
      {
#line 312 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
#line 312 "multi_map.m"
        return;
      }
#line 310 "multi_map.m"
  }
#line 68 "multi_map.m"
}

#line 64 "multi_map.m"
void MR_CALL 
mercury__multi_map__lookup_3_p_0(
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 64 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 64 "multi_map.m"
  MR_Word * mercury__multi_map__Values_6)
#line 64 "multi_map.m"
{
#line 308 "multi_map.m"
  {
#line 308 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 308 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 308 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 308 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4625 "multi_map.c"
    {
#line 4627 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4629 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4631 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4633 "multi_map.c"
    }
#line 308 "multi_map.m"
    {
#line 308 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 308 "multi_map.m"
    *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 308 "multi_map.m"
  }
#line 64 "multi_map.m"
}

#line 63 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__lookup_2_f_0(
#line 63 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 63 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 63 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 63 "multi_map.m"
  MR_Box mercury__multi_map__Key_5)
#line 63 "multi_map.m"
{
#line 308 "multi_map.m"
  {
#line 308 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 308 "multi_map.m"
    MR_Word mercury__multi_map__Value_6;
#line 308 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 308 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 308 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Value_6;

#line 4673 "multi_map.c"
    {
#line 4675 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4677 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 4679 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4681 "multi_map.c"
    }
#line 308 "multi_map.m"
    {
#line 308 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Value_6);
    }
#line 308 "multi_map.m"
    mercury__multi_map__Value_6 = ((MR_Word) mercury__multi_map__conv0_Value_6);
#line 308 "multi_map.m"
    return mercury__multi_map__Value_6;
#line 308 "multi_map.m"
  }
#line 63 "multi_map.m"
}

#line 59 "multi_map.m"
void MR_CALL 
mercury__multi_map__nondet_search_3_p_0(
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 59 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 59 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 59 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 59 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 59 "multi_map.m"
{
#line 300 "multi_map.m"
  {
#line 300 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 300 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 300 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 300 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4729 "multi_map.c"
    {
#line 4731 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4733 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4735 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4737 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 300 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 302 "multi_map.m"
      {
#line 302 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
#line 302 "multi_map.m"
        return;
      }
#line 300 "multi_map.m"
  }
#line 59 "multi_map.m"
}

#line 55 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__search_3_p_0(
#line 55 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 55 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 55 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 55 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 55 "multi_map.m"
  MR_Word * mercury__multi_map__Values_6)
#line 55 "multi_map.m"
{
#line 298 "multi_map.m"
  {
#line 298 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 298 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 298 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4794 "multi_map.c"
    {
#line 4796 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4798 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4800 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4802 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 298 "multi_map.m"
  }
#line 55 "multi_map.m"
}

#line 37 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 37 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 37 "map.opt"
{
#line 37 "map.opt"
  {
#line 37 "map.opt"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 37 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7);
#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__multi_map__member_3_p_0_1(mercury__multi_map__env_ptr);
#line 37 "map.opt"
      return;
    }
#line 37 "map.opt"
  }
#line 37 "map.opt"
}

#line 293 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 293 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 293 "multi_map.m"
{
#line 293 "multi_map.m"
  {
#line 293 "multi_map.m"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 295 "multi_map.m"
    {
#line 295 "multi_map.m"
      mercury__list__member_2_p_1((mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__Value_6, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont_env_ptr);
#line 295 "multi_map.m"
      return;
    }
#line 293 "multi_map.m"
  }
#line 293 "multi_map.m"
}

#line 51 "multi_map.m"
void MR_CALL 
mercury__multi_map__member_3_p_0(
#line 51 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 51 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 51 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 51 "multi_map.m"
  MR_Box * mercury__multi_map__Key_5,
#line 51 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 51 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 51 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 51 "multi_map.m"
{
#line 51 "multi_map.m"
  {
#line 51 "multi_map.m"
    struct mercury__multi_map__member_3_p_0_env_0_s mercury__multi_map__env;

#line 51 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
#line 51 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__Value_6 = mercury__multi_map__Value_6;
#line 51 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont = mercury__multi_map__cont;
#line 51 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
#line 293 "multi_map.m"
    {
#line 293 "multi_map.m"
      MR_bool mercury__multi_map__succeeded;
#line 293 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 293 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4917 "multi_map.c"
      {
#line 4919 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4921 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4923 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
#line 4925 "multi_map.c"
      }
#line 37 "map.opt"
      {
#line 37 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &(mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__member_3_p_0_2, &mercury__multi_map__env);
      }
#line 293 "multi_map.m"
    }
#line 51 "multi_map.m"
  }
#line 51 "multi_map.m"
}

#line 49 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__contains_2_p_0(
#line 49 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_6,
#line 49 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_7,
#line 49 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 49 "multi_map.m"
  MR_Box mercury__multi_map__Key_4)
#line 49 "multi_map.m"
{
#line 291 "multi_map.m"
  {
#line 291 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 291 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 291 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_9_9;
#line 41 "map.opt"
    MR_Word mercury__multi_map__V_5_5;
#line 41 "map.opt"
    MR_Box mercury__multi_map__conv0_V_5_5;

#line 4965 "multi_map.c"
    {
#line 4967 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4969 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 4971 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_7));
#line 4973 "multi_map.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Key_4, &mercury__multi_map__conv0_V_5_5);
    }
#line 41 "map.opt"
    if (mercury__multi_map__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__multi_map__V_5_5 = ((MR_Word) mercury__multi_map__conv0_V_5_5);
#line 41 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 291 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 291 "multi_map.m"
  }
#line 49 "multi_map.m"
}

#line 45 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__is_empty_1_p_0(
#line 45 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_3_3,
#line 45 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_4_4,
#line 45 "multi_map.m"
  MR_Word mercury__multi_map__M_2)
#line 45 "multi_map.m"
{
#line 53 "tree234.opt"
  {
#line 53 "tree234.opt"
    MR_bool mercury__multi_map__succeeded = (mercury__multi_map__M_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 53 "tree234.opt"
    return mercury__multi_map__succeeded;
#line 53 "tree234.opt"
  }
#line 45 "multi_map.m"
}

#line 41 "multi_map.m"
void MR_CALL 
mercury__multi_map__init_1_p_0(
#line 41 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_3_3,
#line 41 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_4_4,
#line 41 "multi_map.m"
  MR_Word * mercury__multi_map__M_2)
#line 41 "multi_map.m"
{
#line 48 "tree234.opt"
  {
#line 48 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;

#line 48 "tree234.opt"
    *mercury__multi_map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
  }
#line 41 "multi_map.m"
}

#line 40 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__init_0_f_0(
#line 40 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_3_3,
#line 40 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_4_4)
#line 40 "multi_map.m"
{
#line 48 "tree234.opt"
  {
#line 48 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;
#line 48 "tree234.opt"
    MR_Word mercury__multi_map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 48 "tree234.opt"
    return mercury__multi_map__M_2;
#line 48 "tree234.opt"
  }
#line 40 "multi_map.m"
}

void mercury__multi_map__init(void)
{
}

void mercury__multi_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__multi_map__multi_map__type_ctor_info_multi_map_2);
}

void mercury__multi_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module multi_map. */
