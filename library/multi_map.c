/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"



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
#line 409 "multi_map.m"
  MR_bool mercury__multi_map__inverse_search_3_p_0_env_0__succeeded;
#line 409 "multi_map.m"
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7;
#line 35 "map.opt"
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
#line 281 "multi_map.m"
  MR_Word mercury__multi_map__member_3_p_0_env_0__ValueList_7;
#line 35 "map.opt"
  MR_Box mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7;
#line 51 "multi_map.m"
};


#line 123 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2;

#line 126 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 129 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 132 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 134 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 136 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 138 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4);

#line 141 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 144 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 146 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 148 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 150 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 152 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5);

#line 210 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 210 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 210 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 210 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 210 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 210 "map.opt"
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

#line 35 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 35 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 409 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 409 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);

#line 35 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 35 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 281 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 281 "multi_map.m"
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



#line 607 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 615 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__multi_map__list__pti_list_1__pseudo_2
  }
};

#line 624 "multi_map.c"
const MR_TypeCtorInfo_Struct mercury__multi_map__multi_map__type_ctor_info_multi_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__multi_map____Unify____multi_map_2_0_10001)),
  ((MR_Box) (mercury__multi_map____Compare____multi_map_2_0_10001)),
  (MR_String) "multi_map",
  (MR_String) "multi_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 645 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 648 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 650 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 652 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 654 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4)
#line 656 "multi_map.c"
{
#line 658 "multi_map.c"
  {
#line 660 "multi_map.c"
    MR_bool mercury__multi_map__succeeded;

#line 663 "multi_map.c"
    {
#line 665 "multi_map.c"
      mercury__multi_map__succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), ((MR_Word) mercury__multi_map__wrapper_arg_3), ((MR_Word) mercury__multi_map__wrapper_arg_4));
    }
#line 668 "multi_map.c"
    return mercury__multi_map__succeeded;
#line 670 "multi_map.c"
  }
#line 672 "multi_map.c"
}

#line 675 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 678 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 680 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 682 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 684 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 686 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5)
#line 688 "multi_map.c"
{
#line 690 "multi_map.c"
  {
#line 692 "multi_map.c"
    MR_Word mercury__multi_map__conv0_HeadVar__1_1;

#line 695 "multi_map.c"
    {
#line 697 "multi_map.c"
      mercury__multi_map____Compare____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), &mercury__multi_map__conv0_HeadVar__1_1, ((MR_Word) mercury__multi_map__wrapper_arg_4), ((MR_Word) mercury__multi_map__wrapper_arg_5));
    }
#line 700 "multi_map.c"
    *mercury__multi_map__wrapper_arg_3 = ((MR_Box) (mercury__multi_map__conv0_HeadVar__1_1));
#line 702 "multi_map.c"
  }
#line 704 "multi_map.c"
}

#line 210 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 210 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 210 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 210 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 210 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 210 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 210 "map.opt"
  MR_Word * mercury__multi_map__HeadVar__8_24)
#line 210 "map.opt"
{
#line 210 "map.opt"
  {
#line 210 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 210 "map.opt"
    MR_Word mercury__multi_map__TypeCtorInfo_32_66 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 210 "map.opt"
    MR_Word mercury__multi_map__TypeInfo_33_67;
#line 210 "map.opt"
    MR_Word mercury__multi_map__V_51_51;
#line 210 "map.opt"
    MR_Word mercury__multi_map__V_52_52;
#line 118 "list.opt"
    MR_Word mercury__multi_map__conv0_V_51_51;
#line 46 "list.opt"
    MR_Word mercury__multi_map__conv1_HeadVar__8_24;

#line 745 "multi_map.c"
    {
#line 747 "multi_map.c"
      mercury__multi_map__TypeInfo_33_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 749 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_32_66));
#line 751 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 1) = ((MR_Box) (mercury__multi_map__V_39_39));
#line 753 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 2) = ((MR_Box) (mercury__multi_map__V_40_40));
#line 755 "multi_map.c"
    }
#line 352 "multi_map.m"
    {
#line 352 "multi_map.m"
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
#line 210 "map.opt"
  }
#line 210 "map.opt"
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
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K0_37_32, mercury__multi_map__V0_38_33, mercury__multi_map__STATE_VARIABLE_A_50_50_44, &mercury__multi_map__STATE_VARIABLE_A_51_51_45);
              }
#line 119 "tree234.opt"
              {
#line 119 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T1_44_39, mercury__multi_map__STATE_VARIABLE_A_51_51_45, &mercury__multi_map__STATE_VARIABLE_A_52_52_46);
              }
#line 120 "tree234.opt"
              {
#line 120 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K1_39_34, mercury__multi_map__V1_40_35, mercury__multi_map__STATE_VARIABLE_A_52_52_46, &mercury__multi_map__STATE_VARIABLE_A_53_53_47);
              }
#line 121 "tree234.opt"
              {
#line 121 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T2_45_40, mercury__multi_map__STATE_VARIABLE_A_53_53_47, &mercury__multi_map__STATE_VARIABLE_A_54_54_48);
              }
#line 122 "tree234.opt"
              {
#line 122 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K2_41_36, mercury__multi_map__V2_42_37, mercury__multi_map__STATE_VARIABLE_A_54_54_48, &mercury__multi_map__STATE_VARIABLE_A_55_55_49);
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
                  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K0_21_18, mercury__multi_map__V0_22_19, mercury__multi_map__STATE_VARIABLE_A_31_31_27, &mercury__multi_map__STATE_VARIABLE_A_32_32_28);
                }
#line 113 "tree234.opt"
                {
#line 113 "tree234.opt"
                  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__T1_26_23, mercury__multi_map__STATE_VARIABLE_A_32_32_28, &mercury__multi_map__STATE_VARIABLE_A_33_33_29);
                }
#line 114 "tree234.opt"
                {
#line 114 "tree234.opt"
                  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K1_23_20, mercury__multi_map__V1_24_21, mercury__multi_map__STATE_VARIABLE_A_33_33_29, &mercury__multi_map__STATE_VARIABLE_A_34_34_30);
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
                  mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_49_48_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__K_10_9, mercury__multi_map__V_11_10, mercury__multi_map__STATE_VARIABLE_A_17_17_15, &mercury__multi_map__STATE_VARIABLE_A_18_18_16);
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

#line 344 "multi_map.m"
            {
#line 344 "multi_map.m"
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

#line 352 "multi_map.m"
        {
#line 352 "multi_map.m"
          mercury__multi_map__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 0) = mercury__multi_map__V_17_17;
#line 352 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 1) = mercury__multi_map__H_6_6;
#line 352 "multi_map.m"
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

#line 1216 "multi_map.c"
    {
#line 1218 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 1222 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_7));
#line 1224 "multi_map.c"
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

#line 1264 "multi_map.c"
    {
#line 1266 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1270 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_6));
#line 1272 "multi_map.c"
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

#line 445 "multi_map.m"
void MR_CALL 
mercury__multi_map__assoc_list_merge_3_p_0(
#line 445 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_24,
#line 445 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_25,
#line 445 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 445 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 445 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__3_3)
#line 445 "multi_map.m"
{
#line 448 "multi_map.m"
  {
#line 448 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 448 "multi_map.m"
    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "multi_map.m"
      *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__2_2;
#line 448 "multi_map.m"
    else
#line 448 "multi_map.m"
      {
#line 448 "multi_map.m"
        MR_Word mercury__multi_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 448 "multi_map.m"
        MR_Word mercury__multi_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0)));

#line 448 "multi_map.m"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "multi_map.m"
          *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__1_1;
#line 448 "multi_map.m"
        else
#line 451 "multi_map.m"
          {
#line 451 "multi_map.m"
            MR_Box mercury__multi_map__KeyA_7 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_27_27, (MR_Integer) 0));
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__DataA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__V_27_27, (MR_Integer) 1)));
#line 451 "multi_map.m"
            MR_Box mercury__multi_map__KeyB_10;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__DataB_11;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__ListB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 451 "multi_map.m"
            MR_Box mercury__multi_map__Key_13;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__Data_14;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__List_15;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__Res_16;
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
#line 451 "multi_map.m"
            MR_Word mercury__multi_map__V_19_19;

#line 450 "multi_map.m"
            mercury__multi_map__KeyB_10 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_18_18, (MR_Integer) 0));
#line 450 "multi_map.m"
            mercury__multi_map__DataB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__V_18_18, (MR_Integer) 1)));
#line 452 "multi_map.m"
            {
#line 452 "multi_map.m"
              mercury__builtin__compare_3_p_0(mercury__multi_map__TypeInfo_for_K_24, &mercury__multi_map__Res_16, mercury__multi_map__KeyA_7, mercury__multi_map__KeyB_10);
            }
#line 458 "multi_map.m"
            if ((mercury__multi_map__Res_16 == (MR_Integer) 1))
#line 459 "multi_map.m"
              {
#line 460 "multi_map.m"
                mercury__multi_map__Key_13 = mercury__multi_map__KeyA_7;
#line 461 "multi_map.m"
                mercury__multi_map__Data_14 = mercury__multi_map__DataA_8;
#line 462 "multi_map.m"
                {
#line 462 "multi_map.m"
                  mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__V_26_26, mercury__multi_map__HeadVar__2_2, &mercury__multi_map__List_15);
                }
#line 459 "multi_map.m"
              }
#line 458 "multi_map.m"
            else
#line 458 "multi_map.m"
              if ((mercury__multi_map__Res_16 == (MR_Integer) 0))
#line 454 "multi_map.m"
                {
#line 455 "multi_map.m"
                  mercury__multi_map__Key_13 = mercury__multi_map__KeyA_7;
#line 456 "multi_map.m"
                  {
#line 456 "multi_map.m"
                    mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__DataA_8, mercury__multi_map__DataB_11, &mercury__multi_map__Data_14);
                  }
#line 457 "multi_map.m"
                  {
#line 457 "multi_map.m"
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__V_26_26, mercury__multi_map__ListB_12, &mercury__multi_map__List_15);
                  }
#line 454 "multi_map.m"
                }
#line 458 "multi_map.m"
              else
#line 464 "multi_map.m"
                {
#line 465 "multi_map.m"
                  mercury__multi_map__Key_13 = mercury__multi_map__KeyB_10;
#line 466 "multi_map.m"
                  mercury__multi_map__Data_14 = mercury__multi_map__DataB_11;
#line 467 "multi_map.m"
                  {
#line 467 "multi_map.m"
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_24, mercury__multi_map__TypeInfo_for_V_25, mercury__multi_map__HeadVar__1_1, mercury__multi_map__ListB_12, &mercury__multi_map__List_15);
                  }
#line 464 "multi_map.m"
                }
#line 451 "multi_map.m"
            {
#line 451 "multi_map.m"
              mercury__multi_map__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 0) = mercury__multi_map__Key_13;
#line 451 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 1) = ((MR_Box) (mercury__multi_map__Data_14));
#line 451 "multi_map.m"
            }
#line 451 "multi_map.m"
            {
#line 451 "multi_map.m"
              MR_Word base;
#line 451 "multi_map.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "multi_map.m"
              *mercury__multi_map__HeadVar__3_3 = base;
#line 451 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__multi_map__V_19_19));
#line 451 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__multi_map__List_15));
#line 451 "multi_map.m"
            }
#line 451 "multi_map.m"
          }
#line 448 "multi_map.m"
      }
#line 448 "multi_map.m"
  }
#line 445 "multi_map.m"
}

#line 426 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
#line 426 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_17,
#line 426 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_18,
#line 426 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 426 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 426 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_3,
#line 426 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_4)
#line 426 "multi_map.m"
{
#line 429 "multi_map.m"
  while (MR_TRUE)
#line 429 "multi_map.m"
    {
#line 429 "multi_map.m"
      /* tailcall optimized into a loop */
#line 429 "multi_map.m"
      {
#line 429 "multi_map.m"
        MR_bool mercury__multi_map__succeeded;

#line 429 "multi_map.m"
        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "multi_map.m"
          {
#line 429 "multi_map.m"
            mercury__multi_map__succeeded = (mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "multi_map.m"
            if (mercury__multi_map__succeeded)
#line 429 "multi_map.m"
              {
#line 429 "multi_map.m"
                *mercury__multi_map__STATE_VARIABLE_MultiMap_4 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_3;
#line 429 "multi_map.m"
                mercury__multi_map__succeeded = MR_TRUE;
#line 429 "multi_map.m"
              }
#line 429 "multi_map.m"
          }
#line 429 "multi_map.m"
        else
#line 430 "multi_map.m"
          {
#line 430 "multi_map.m"
            MR_Box mercury__multi_map__Key_8 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));
#line 430 "multi_map.m"
            MR_Word mercury__multi_map__Keys_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "multi_map.m"
            MR_Box mercury__multi_map__Value_10;
#line 430 "multi_map.m"
            MR_Word mercury__multi_map__Values_11;
#line 430 "multi_map.m"
            MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_15_15;

#line 430 "multi_map.m"
            mercury__multi_map__succeeded = ((MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 430 "multi_map.m"
            if (mercury__multi_map__succeeded)
#line 430 "multi_map.m"
              {
#line 430 "multi_map.m"
                mercury__multi_map__Value_10 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 430 "multi_map.m"
                mercury__multi_map__Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 431 "multi_map.m"
                {
#line 431 "multi_map.m"
                  mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_17, mercury__multi_map__TypeInfo_for_V_18, mercury__multi_map__Key_8, mercury__multi_map__Value_10, mercury__multi_map__STATE_VARIABLE_MultiMap_0_3, &mercury__multi_map__STATE_VARIABLE_MultiMap_15_15);
                }
#line 432 "multi_map.m"
                {
#line 432 "multi_map.m"
                  /* direct tailcall eliminated */
#line 432 "multi_map.m"
                  {
#line 432 "multi_map.m"
                    MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__Keys_9;
#line 432 "multi_map.m"
                    MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Values_11;
#line 432 "multi_map.m"
                    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_15_15;

#line 432 "multi_map.m"
                    mercury__multi_map__STATE_VARIABLE_MultiMap_0_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3;
#line 432 "multi_map.m"
                    mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 432 "multi_map.m"
                    mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
#line 432 "multi_map.m"
                  }
#line 432 "multi_map.m"
                  continue;
#line 432 "multi_map.m"
                }
#line 430 "multi_map.m"
              }
#line 430 "multi_map.m"
          }
#line 429 "multi_map.m"
        return mercury__multi_map__succeeded;
#line 429 "multi_map.m"
      }
#line 429 "multi_map.m"
      break;
#line 429 "multi_map.m"
    }
#line 426 "multi_map.m"
}

#line 398 "multi_map.m"
void MR_CALL 
mercury__multi_map__count_list_3_p_0(
#line 398 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_A_11,
#line 398 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 398 "multi_map.m"
  MR_Integer mercury__multi_map__HeadVar__2_2,
#line 398 "multi_map.m"
  MR_Integer * mercury__multi_map__HeadVar__3_3)
#line 398 "multi_map.m"
{
#line 400 "multi_map.m"
  while (MR_TRUE)
#line 400 "multi_map.m"
    {
#line 400 "multi_map.m"
      /* tailcall optimized into a loop */
#line 400 "multi_map.m"
      {
#line 400 "multi_map.m"
        MR_bool mercury__multi_map__succeeded;

#line 400 "multi_map.m"
        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "multi_map.m"
          *mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__2_2;
#line 400 "multi_map.m"
        else
#line 401 "multi_map.m"
          {
#line 401 "multi_map.m"
            MR_Word mercury__multi_map__As_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "multi_map.m"
            MR_Integer mercury__multi_map__Count1_9 = (mercury__multi_map__HeadVar__2_2 + (MR_Integer) 1);
#line 401 "multi_map.m"
            MR_Box mercury__multi_map___A_5 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));

#line 403 "multi_map.m"
            /* direct tailcall eliminated */
#line 403 "multi_map.m"
            {
#line 403 "multi_map.m"
              MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__As_6;
#line 403 "multi_map.m"
              MR_Integer mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Count1_9;

#line 403 "multi_map.m"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 403 "multi_map.m"
              mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
#line 403 "multi_map.m"
            }
#line 403 "multi_map.m"
            continue;
#line 401 "multi_map.m"
          }
#line 400 "multi_map.m"
      }
#line 400 "multi_map.m"
      break;
#line 400 "multi_map.m"
    }
#line 398 "multi_map.m"
}

#line 258 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_smallest_4_p_0(
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 258 "multi_map.m"
  MR_Box * mercury__multi_map__MultiMap0_5,
#line 258 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 258 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 258 "multi_map.m"
{
#line 490 "multi_map.m"
  {
#line 490 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 490 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 490 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 65 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 65 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 65 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 1657 "multi_map.c"
    {
#line 1659 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1661 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 1663 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 1665 "multi_map.c"
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
#line 490 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 490 "multi_map.m"
  }
#line 258 "multi_map.m"
}

#line 253 "multi_map.m"
void MR_CALL 
mercury__multi_map__optimize_2_p_0(
#line 253 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 253 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 253 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3,
#line 253 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 253 "multi_map.m"
{
#line 201 "map.opt"
  {
#line 201 "map.opt"
    MR_bool mercury__multi_map__succeeded;

#line 201 "map.opt"
    *mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;
#line 201 "map.opt"
  }
#line 253 "multi_map.m"
}

#line 252 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__optimize_1_f_0(
#line 252 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 252 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 252 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 252 "multi_map.m"
{
#line 201 "map.opt"
  {
#line 201 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 201 "map.opt"
    MR_Word mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;

#line 201 "map.opt"
    return mercury__multi_map__MultiMap_4;
#line 201 "map.opt"
  }
#line 252 "multi_map.m"
}

#line 244 "multi_map.m"
void MR_CALL 
mercury__multi_map__apply_to_list_3_p_0(
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 244 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_2,
#line 244 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__3_3)
#line 244 "multi_map.m"
{
#line 482 "multi_map.m"
  {
#line 482 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 482 "multi_map.m"
    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "multi_map.m"
      *mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "multi_map.m"
    else
#line 483 "multi_map.m"
      {
#line 483 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 483 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_10_21;
#line 483 "multi_map.m"
        MR_Word mercury__multi_map__Values0_9;
#line 483 "multi_map.m"
        MR_Word mercury__multi_map__RevXss_5_17;
#line 483 "multi_map.m"
        MR_Word mercury__multi_map__V_6_18;
#line 484 "multi_map.m"
        MR_Word mercury__multi_map__conv0_Values0_9;

#line 1782 "multi_map.c"
        {
#line 1784 "multi_map.c"
          mercury__multi_map__TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 1788 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 1790 "multi_map.c"
        }
#line 484 "multi_map.m"
        {
#line 484 "multi_map.m"
          mercury__map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_10_21, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__MultiMap_2, &mercury__multi_map__conv0_Values0_9);
        }
#line 484 "multi_map.m"
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
#line 483 "multi_map.m"
      }
#line 482 "multi_map.m"
  }
#line 244 "multi_map.m"
}

#line 243 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__apply_to_list_2_f_0(
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_5)
#line 243 "multi_map.m"
{
#line 563 "multi_map.m"
  {
#line 563 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__Values_6;

#line 563 "multi_map.m"
    {
#line 563 "multi_map.m"
      mercury__multi_map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__MultiMap_5, &mercury__multi_map__Values_6);
    }
#line 563 "multi_map.m"
    return mercury__multi_map__Values_6;
#line 563 "multi_map.m"
  }
#line 243 "multi_map.m"
}

#line 237 "multi_map.m"
void MR_CALL 
mercury__multi_map__select_3_p_0(
#line 237 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 237 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 237 "multi_map.m"
  MR_Word mercury__multi_map__Original_4,
#line 237 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5,
#line 237 "multi_map.m"
  MR_Word * mercury__multi_map__NewMultiMap_6)
#line 237 "multi_map.m"
{
#line 478 "multi_map.m"
  {
#line 478 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__Keys_7_14;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__NewMap0_8_15;
#line 191 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1882 "multi_map.c"
    {
#line 1884 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1886 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 1888 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1890 "multi_map.c"
    }
#line 38 "set_ordlist.opt"
    mercury__multi_map__Keys_7_14 = (MR_Word) mercury__multi_map__KeySet_5;
#line 48 "tree234.opt"
    mercury__multi_map__NewMap0_8_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "map.opt"
    {
#line 191 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_7_14, (MR_Word) mercury__multi_map__Original_4, (MR_Word) mercury__multi_map__NewMap0_8_15, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 191 "map.opt"
    *mercury__multi_map__NewMultiMap_6 = (MR_Word) mercury__multi_map__conv0_NewMultiMap_6;
#line 478 "multi_map.m"
  }
#line 237 "multi_map.m"
}

#line 236 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__select_2_f_0(
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5)
#line 236 "multi_map.m"
{
#line 478 "multi_map.m"
  {
#line 478 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__NewMultiMap_6;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__Keys_7_17;
#line 478 "multi_map.m"
    MR_Word mercury__multi_map__NewMap0_8_18;
#line 191 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1938 "multi_map.c"
    {
#line 1940 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 1944 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1946 "multi_map.c"
    }
#line 38 "set_ordlist.opt"
    mercury__multi_map__Keys_7_17 = (MR_Word) mercury__multi_map__KeySet_5;
#line 48 "tree234.opt"
    mercury__multi_map__NewMap0_8_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "map.opt"
    {
#line 191 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_7_17, (MR_Word) mercury__multi_map__MultiMap_4, (MR_Word) mercury__multi_map__NewMap0_8_18, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 191 "map.opt"
    mercury__multi_map__NewMultiMap_6 = (MR_Word) mercury__multi_map__conv0_NewMultiMap_6;
#line 478 "multi_map.m"
    return mercury__multi_map__NewMultiMap_6;
#line 478 "multi_map.m"
  }
#line 236 "multi_map.m"
}

#line 229 "multi_map.m"
void MR_CALL 
mercury__multi_map__merge_3_p_0(
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__M0_4,
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__M1_5,
#line 229 "multi_map.m"
  MR_Word * mercury__multi_map__M_6)
#line 229 "multi_map.m"
{
#line 439 "multi_map.m"
  {
#line 439 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_37;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__ML0_7;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__ML1_8;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__ML_9;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 439 "multi_map.m"
    MR_Word mercury__multi_map__V_5_31;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_ML0_7;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv1_ML1_8;
#line 147 "map.opt"
    MR_Word mercury__multi_map__conv2_M_6;

#line 2006 "multi_map.c"
    {
#line 2008 "multi_map.c"
      mercury__multi_map__TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2010 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_14));
#line 2012 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_11));
#line 2014 "multi_map.c"
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
#line 442 "multi_map.m"
    {
#line 442 "multi_map.m"
      mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__ML0_7, mercury__multi_map__ML1_8, &mercury__multi_map__ML_9);
    }
#line 147 "map.opt"
    {
#line 147 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__ML_9, &mercury__multi_map__conv2_M_6);
    }
#line 147 "map.opt"
    *mercury__multi_map__M_6 = (MR_Word) mercury__multi_map__conv2_M_6;
#line 439 "multi_map.m"
  }
#line 229 "multi_map.m"
}

#line 227 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__merge_2_f_0(
#line 227 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 227 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 227 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapA_4,
#line 227 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapB_5)
#line 227 "multi_map.m"
{
#line 557 "multi_map.m"
  {
#line 557 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;

#line 557 "multi_map.m"
    {
#line 557 "multi_map.m"
      mercury__multi_map__merge_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMapA_4, mercury__multi_map__MultiMapB_5, &mercury__multi_map__MultiMap_6);
    }
#line 557 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 557 "multi_map.m"
  }
#line 227 "multi_map.m"
}

#line 217 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_list_lists_3_p_0(
#line 217 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 217 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 217 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 217 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 217 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 217 "multi_map.m"
{
#line 435 "multi_map.m"
  {
#line 435 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_7_14;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__V_5_17;
#line 169 "map.opt"
    MR_Word mercury__multi_map__conv0_AssocList_7_14;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2115 "multi_map.c"
    {
#line 2117 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2119 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 2121 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2123 "multi_map.c"
    }
#line 169 "map.opt"
    {
#line 169 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_AssocList_7_14);
    }
#line 169 "map.opt"
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
#line 435 "multi_map.m"
  }
#line 217 "multi_map.m"
}

#line 215 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_list_lists_2_f_0(
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 215 "multi_map.m"
{
#line 435 "multi_map.m"
  {
#line 435 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_7_17;
#line 435 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 169 "map.opt"
    MR_Word mercury__multi_map__conv0_AssocList_7_17;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2178 "multi_map.c"
    {
#line 2180 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2182 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 2184 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2186 "multi_map.c"
    }
#line 169 "map.opt"
    {
#line 169 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_AssocList_7_17);
    }
#line 169 "map.opt"
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
#line 435 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 435 "multi_map.m"
  }
#line 215 "multi_map.m"
}

#line 209 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_lists_3_p_0(
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 209 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 209 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 209 "multi_map.m"
{
#line 415 "multi_map.m"
  {
#line 415 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 415 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap1_8;

#line 418 "multi_map.m"
    {
#line 418 "multi_map.m"
      mercury__multi_map__succeeded = mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_7, &mercury__multi_map__MultiMap1_8);
    }
#line 422 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 421 "multi_map.m"
      *mercury__multi_map__MultiMap_6 = mercury__multi_map__MultiMap1_8;
#line 422 "multi_map.m"
    else
#line 423 "multi_map.m"
      {
#line 423 "multi_map.m"
        {
#line 423 "multi_map.m"
          mercury__require__error_1_p_0((MR_String) "multi_map.from_corresponding_lists: list length mismatch");
#line 423 "multi_map.m"
          return;
        }
#line 423 "multi_map.m"
      }
#line 415 "multi_map.m"
  }
#line 209 "multi_map.m"
}

#line 207 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_lists_2_f_0(
#line 207 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 207 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 207 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 207 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 207 "multi_map.m"
{
#line 551 "multi_map.m"
  {
#line 551 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;

#line 551 "multi_map.m"
    {
#line 551 "multi_map.m"
      mercury__multi_map__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, &mercury__multi_map__MultiMap_6);
    }
#line 551 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 551 "multi_map.m"
  }
#line 207 "multi_map.m"
}

#line 202 "multi_map.m"
void MR_CALL 
mercury__multi_map__all_count_2_p_0(
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 202 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 202 "multi_map.m"
{
#line 394 "multi_map.m"
  {
#line 394 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 394 "multi_map.m"
    MR_Word mercury__multi_map__List_5;

#line 395 "multi_map.m"
    {
#line 395 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMap_3, &mercury__multi_map__List_5);
    }
#line 396 "multi_map.m"
    {
#line 396 "multi_map.m"
      mercury__multi_map__count_list_3_p_0(mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__List_5, (MR_Integer) 0, mercury__multi_map__Count_4);
#line 396 "multi_map.m"
      return;
    }
#line 394 "multi_map.m"
  }
#line 202 "multi_map.m"
}

#line 201 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__all_count_1_f_0(
#line 201 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 201 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 201 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 201 "multi_map.m"
{
#line 394 "multi_map.m"
  {
#line 394 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 394 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;
#line 394 "multi_map.m"
    MR_Word mercury__multi_map__List_9;

#line 395 "multi_map.m"
    {
#line 395 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap0_3, &mercury__multi_map__List_9);
    }
#line 396 "multi_map.m"
    {
#line 396 "multi_map.m"
      mercury__multi_map__count_list_3_p_0(mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__List_9, (MR_Integer) 0, &mercury__multi_map__Count_4);
    }
#line 394 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 394 "multi_map.m"
  }
#line 201 "multi_map.m"
}

#line 197 "multi_map.m"
void MR_CALL 
mercury__multi_map__count_2_p_0(
#line 197 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 197 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 197 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 197 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 197 "multi_map.m"
{
#line 392 "multi_map.m"
  {
#line 392 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;

#line 2390 "multi_map.c"
    {
#line 2392 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2394 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2396 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2398 "multi_map.c"
    }
#line 165 "map.opt"
    {
#line 165 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Count_4);
#line 165 "map.opt"
      return;
    }
#line 392 "multi_map.m"
  }
#line 197 "multi_map.m"
}

#line 196 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__count_1_f_0(
#line 196 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 196 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 196 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 196 "multi_map.m"
{
#line 392 "multi_map.m"
  {
#line 392 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 392 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 392 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;

#line 2434 "multi_map.c"
    {
#line 2436 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2438 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2440 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2442 "multi_map.c"
    }
#line 165 "map.opt"
    {
#line 165 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
#line 392 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 392 "multi_map.m"
  }
#line 196 "multi_map.m"
}

#line 191 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_remove_4_p_0(
#line 191 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 191 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 191 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 191 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 191 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 191 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 191 "multi_map.m"
{
#line 389 "multi_map.m"
  {
#line 389 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 389 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 389 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 389 "multi_map.m"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 389 "multi_map.m"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 2486 "multi_map.c"
    {
#line 2488 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2490 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2492 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2494 "multi_map.c"
    }
#line 389 "multi_map.m"
    {
#line 389 "multi_map.m"
      mercury__map__det_remove_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, (MR_Word) mercury__multi_map__Values_7, &mercury__multi_map__conv0_MultiMap_8);
    }
#line 389 "multi_map.m"
    *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 389 "multi_map.m"
    *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 389 "multi_map.m"
  }
#line 191 "multi_map.m"
}

#line 185 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_4_p_0(
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 185 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 185 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 185 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 185 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 185 "multi_map.m"
{
#line 386 "multi_map.m"
  {
#line 386 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 386 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 386 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 63 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 63 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 63 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 2542 "multi_map.c"
    {
#line 2544 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2546 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2548 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2550 "multi_map.c"
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
#line 386 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 386 "multi_map.m"
  }
#line 185 "multi_map.m"
}

#line 179 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_4_p_0(
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
#line 179 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 179 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 179 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_12,
#line 179 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_13)
#line 179 "multi_map.m"
{
#line 381 "multi_map.m"
  {
#line 381 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 381 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 381 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 371 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 371 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 2608 "multi_map.c"
    {
#line 2610 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2612 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 2614 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 2616 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 371 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 371 "multi_map.m"
      {
#line 372 "multi_map.m"
        {
#line 372 "multi_map.m"
          mercury__list__delete_all_3_p_1(mercury__multi_map__TypeInfo_for_V_17, mercury__multi_map__Values0_8, mercury__multi_map__Value_6, &mercury__multi_map__Values_9);
        }
#line 372 "multi_map.m"
        mercury__multi_map__succeeded = MR_TRUE;
#line 371 "multi_map.m"
      }
#line 381 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 377 "multi_map.m"
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
#line 377 "multi_map.m"
      else
#line 117 "map.opt"
        {
#line 117 "map.opt"
          MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;

#line 117 "map.opt"
          {
#line 117 "map.opt"
            mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13);
          }
#line 117 "map.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;
#line 117 "map.opt"
        }
#line 381 "multi_map.m"
    else
#line 379 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_12;
#line 381 "multi_map.m"
  }
#line 179 "multi_map.m"
}

#line 178 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_3_f_0(
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 178 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 178 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 178 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 178 "multi_map.m"
{
#line 542 "multi_map.m"
  {
#line 542 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 542 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 542 "multi_map.m"
    {
#line 542 "multi_map.m"
      mercury__multi_map__delete_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 542 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 542 "multi_map.m"
  }
#line 178 "multi_map.m"
}

#line 172 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_3_p_0(
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 172 "multi_map.m"
  MR_Box mercury__multi_map__Key_4,
#line 172 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 172 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_7)
#line 172 "multi_map.m"
{
#line 367 "multi_map.m"
  {
#line 367 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__V_7_19;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2753 "multi_map.c"
    {
#line 2755 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2757 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2759 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2761 "multi_map.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_4, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_19);
    }
#line 61 "tree234.opt"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 367 "multi_map.m"
  }
#line 172 "multi_map.m"
}

#line 171 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_2_f_0(
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 171 "multi_map.m"
  MR_Box mercury__multi_map__Key_5)
#line 171 "multi_map.m"
{
#line 367 "multi_map.m"
  {
#line 367 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 367 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_17;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__V_7_24;
#line 61 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2803 "multi_map.c"
    {
#line 2805 "multi_map.c"
      mercury__multi_map__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2807 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_16));
#line 2809 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2811 "multi_map.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_17, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_5, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_24);
    }
#line 61 "tree234.opt"
    mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 367 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 367 "multi_map.m"
  }
#line 171 "multi_map.m"
}

#line 165 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_sorted_assoc_list_2_p_0(
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
#line 361 "multi_map.m"
  {
#line 361 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 361 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 361 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 147 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2851 "multi_map.c"
    {
#line 2853 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2855 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2857 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2859 "multi_map.c"
    }
#line 147 "map.opt"
    {
#line 147 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 147 "map.opt"
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 361 "multi_map.m"
  }
#line 165 "multi_map.m"
}

#line 163 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_sorted_assoc_list_1_f_0(
#line 163 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 163 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 163 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 163 "multi_map.m"
{
#line 361 "multi_map.m"
  {
#line 361 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 361 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 361 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 361 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 147 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2897 "multi_map.c"
    {
#line 2899 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2901 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2903 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2905 "multi_map.c"
    }
#line 147 "map.opt"
    {
#line 147 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 147 "map.opt"
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 361 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 361 "multi_map.m"
  }
#line 163 "multi_map.m"
}

#line 158 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_assoc_list_2_p_0(
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 158 "multi_map.m"
  MR_Word mercury__multi_map__AList_3,
#line 158 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 158 "multi_map.m"
{
#line 358 "multi_map.m"
  {
#line 358 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2947 "multi_map.c"
    {
#line 2949 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2951 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2953 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2955 "multi_map.c"
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
#line 358 "multi_map.m"
  }
#line 158 "multi_map.m"
}

#line 157 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_assoc_list_1_f_0(
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 157 "multi_map.m"
{
#line 358 "multi_map.m"
  {
#line 358 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 358 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2997 "multi_map.c"
    {
#line 2999 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3001 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3003 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3005 "multi_map.c"
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
#line 358 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 358 "multi_map.m"
  }
#line 157 "multi_map.m"
}

#line 151 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_assoc_list_2_p_0(
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 151 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 151 "multi_map.m"
  MR_Word * mercury__multi_map__AList_4)
#line 151 "multi_map.m"
{
#line 364 "multi_map.m"
  {
#line 364 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 3049 "multi_map.c"
    {
#line 3051 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3053 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 3055 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3057 "multi_map.c"
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
#line 364 "multi_map.m"
  }
#line 151 "multi_map.m"
}

#line 150 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_assoc_list_1_f_0(
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 150 "multi_map.m"
{
#line 364 "multi_map.m"
  {
#line 364 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 364 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 86 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 3099 "multi_map.c"
    {
#line 3101 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3103 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3105 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 3107 "multi_map.c"
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
#line 364 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 364 "multi_map.m"
  }
#line 150 "multi_map.m"
}

#line 144 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_flat_assoc_list_2_p_0(
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_17,
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_18,
#line 144 "multi_map.m"
  MR_Word mercury__multi_map__AList_3,
#line 144 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 144 "multi_map.m"
{
#line 341 "multi_map.m"
  {
#line 341 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 341 "multi_map.m"
    MR_Word mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(mercury__multi_map__TypeInfo_for_K_17, mercury__multi_map__TypeInfo_for_V_18, mercury__multi_map__AList_3, mercury__multi_map__V_13_13, mercury__multi_map__MultiMap_4);
#line 395 "list.opt"
      return;
    }
#line 341 "multi_map.m"
  }
#line 144 "multi_map.m"
}

#line 143 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_flat_assoc_list_1_f_0(
#line 143 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 143 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 143 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 143 "multi_map.m"
{
#line 527 "multi_map.m"
  {
#line 527 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 527 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;

#line 527 "multi_map.m"
    {
#line 527 "multi_map.m"
      mercury__multi_map__from_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__AssocList_3, &mercury__multi_map__MultiMap_4);
    }
#line 527 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 527 "multi_map.m"
  }
#line 143 "multi_map.m"
}

#line 138 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_flat_assoc_list_2_p_0(
#line 138 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_25,
#line 138 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_26,
#line 138 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 138 "multi_map.m"
  MR_Word * mercury__multi_map__AList_4)
#line 138 "multi_map.m"
{
#line 348 "multi_map.m"
  {
#line 348 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 348 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_27_27 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 348 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_28_28;
#line 348 "multi_map.m"
    MR_Word mercury__multi_map__V_9_9;
#line 348 "multi_map.m"
    MR_Word mercury__multi_map__V_20_20;
#line 118 "list.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 3215 "multi_map.c"
    {
#line 3217 "multi_map.c"
      mercury__multi_map__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3219 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_27_27));
#line 3221 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_25));
#line 3223 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_26));
#line 3225 "multi_map.c"
    }
#line 355 "multi_map.m"
    mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 217 "map.opt"
    {
#line 217 "map.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__MultiMap_3, mercury__multi_map__V_20_20, &mercury__multi_map__V_9_9);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_28_28, (MR_Word) mercury__multi_map__V_9_9, &mercury__multi_map__conv0_AList_4);
    }
#line 118 "list.opt"
    *mercury__multi_map__AList_4 = (MR_Word) mercury__multi_map__conv0_AList_4;
#line 348 "multi_map.m"
  }
#line 138 "multi_map.m"
}

#line 137 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_flat_assoc_list_1_f_0(
#line 137 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 137 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 137 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 137 "multi_map.m"
{
#line 524 "multi_map.m"
  {
#line 524 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 524 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;

#line 524 "multi_map.m"
    {
#line 524 "multi_map.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__AssocList_4);
    }
#line 524 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 524 "multi_map.m"
  }
#line 137 "multi_map.m"
}

#line 133 "multi_map.m"
void MR_CALL 
mercury__multi_map__values_2_p_0(
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_6,
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
#line 133 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 133 "multi_map.m"
  MR_Word * mercury__multi_map__KeyList_4)
#line 133 "multi_map.m"
{
#line 337 "multi_map.m"
  {
#line 337 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_22;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__KeyList0_5;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__V_5_14;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__RevXss_5_18;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__V_6_19;
#line 75 "tree234.opt"
    MR_Word mercury__multi_map__conv0_KeyList0_5;

#line 3308 "multi_map.c"
    {
#line 3310 "multi_map.c"
      mercury__multi_map__TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3312 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 3314 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
#line 3316 "multi_map.c"
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
#line 337 "multi_map.m"
  }
#line 133 "multi_map.m"
}

#line 132 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__values_1_f_0(
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_5,
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 132 "multi_map.m"
{
#line 521 "multi_map.m"
  {
#line 521 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__Valyes_4;

#line 521 "multi_map.m"
    {
#line 521 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for__K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__Valyes_4);
    }
#line 521 "multi_map.m"
    return mercury__multi_map__Valyes_4;
#line 521 "multi_map.m"
  }
#line 132 "multi_map.m"
}

#line 127 "multi_map.m"
void MR_CALL 
mercury__multi_map__keys_2_p_0(
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 127 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 127 "multi_map.m"
  MR_Word * mercury__multi_map__KeyList_4)
#line 127 "multi_map.m"
{
#line 335 "multi_map.m"
  {
#line 335 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;

#line 3400 "multi_map.c"
    {
#line 3402 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3404 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 3406 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3408 "multi_map.c"
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
#line 335 "multi_map.m"
  }
#line 127 "multi_map.m"
}

#line 126 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
#line 126 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 126 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 126 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 126 "multi_map.m"
{
#line 335 "multi_map.m"
  {
#line 335 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__Keys_4;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 335 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;

#line 3448 "multi_map.c"
    {
#line 3450 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3452 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3454 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3456 "multi_map.c"
    }
#line 69 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_15, &mercury__multi_map__Keys_4);
    }
#line 335 "multi_map.m"
    return mercury__multi_map__Keys_4;
#line 335 "multi_map.m"
  }
#line 126 "multi_map.m"
}

#line 121 "multi_map.m"
void MR_CALL 
mercury__multi_map__add_4_p_0(
#line 121 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 121 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 121 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 121 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 121 "multi_map.m"
  MR_Word mercury__multi_map__Value_7,
#line 121 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 121 "multi_map.m"
{
#line 332 "multi_map.m"
  {
#line 332 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 332 "multi_map.m"
    {
#line 332 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_for_V_10, mercury__multi_map__MultiMap0_5, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__MultiMap_8);
#line 332 "multi_map.m"
      return;
    }
#line 332 "multi_map.m"
  }
#line 121 "multi_map.m"
}

#line 120 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__add_3_f_0(
#line 120 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 120 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 120 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 120 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 120 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 120 "multi_map.m"
{
#line 515 "multi_map.m"
  {
#line 515 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 515 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 515 "multi_map.m"
    {
#line 515 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 515 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 515 "multi_map.m"
  }
#line 120 "multi_map.m"
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
#line 327 "multi_map.m"
  {
#line 327 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 327 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 327 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 324 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 3570 "multi_map.c"
    {
#line 3572 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3574 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 3576 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3578 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 327 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 325 "multi_map.m"
      {
#line 325 "multi_map.m"
        MR_Word mercury__multi_map__Values_9;
#line 117 "map.opt"
        MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 325 "multi_map.m"
        {
#line 325 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 325 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 325 "multi_map.m"
        }
#line 117 "map.opt"
        {
#line 117 "map.opt"
          mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 117 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 325 "multi_map.m"
      }
#line 327 "multi_map.m"
    else
#line 328 "multi_map.m"
      {
#line 328 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_22_22;
#line 328 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_23_23;
#line 328 "multi_map.m"
        MR_Word mercury__multi_map__V_13_13;
#line 328 "multi_map.m"
        MR_Word mercury__multi_map__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 328 "multi_map.m"
        MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;

#line 328 "multi_map.m"
        {
#line 328 "multi_map.m"
          mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 0) = mercury__multi_map__Value_6;
#line 328 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 1) = ((MR_Box) (mercury__multi_map__V_15_15));
#line 328 "multi_map.m"
        }
#line 3648 "multi_map.c"
        mercury__multi_map__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3650 "multi_map.c"
        {
#line 3652 "multi_map.c"
          mercury__multi_map__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3654 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_22_22));
#line 3656 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3658 "multi_map.c"
        }
#line 328 "multi_map.m"
        {
#line 328 "multi_map.m"
          mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_23_23, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_13_13)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11);
        }
#line 328 "multi_map.m"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;
#line 328 "multi_map.m"
      }
#line 327 "multi_map.m"
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
#line 512 "multi_map.m"
  {
#line 512 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 512 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 512 "multi_map.m"
    {
#line 512 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 512 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 512 "multi_map.m"
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
  MR_Word mercury__multi_map__Value_6,
#line 110 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 110 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 110 "multi_map.m"
{
#line 321 "multi_map.m"
  {
#line 321 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3736 "multi_map.c"
    {
#line 3738 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3740 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3742 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3744 "multi_map.c"
    }
#line 321 "multi_map.m"
    {
#line 321 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 321 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 321 "multi_map.m"
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
  MR_Word mercury__multi_map__Value_7)
#line 109 "multi_map.m"
{
#line 321 "multi_map.m"
  {
#line 321 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_20;
#line 321 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3786 "multi_map.c"
    {
#line 3788 "multi_map.c"
      mercury__multi_map__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3790 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_19));
#line 3792 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3794 "multi_map.c"
    }
#line 321 "multi_map.m"
    {
#line 321 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_20, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__Value_7)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 321 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 321 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 321 "multi_map.m"
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
#line 318 "multi_map.m"
  {
#line 318 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 318 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 318 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 87 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3838 "multi_map.c"
    {
#line 3840 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3842 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3844 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3846 "multi_map.c"
    }
#line 87 "map.opt"
    {
#line 87 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 87 "map.opt"
    if (mercury__multi_map__succeeded)
#line 87 "map.opt"
      {
#line 87 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 87 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 87 "map.opt"
      }
#line 318 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 318 "multi_map.m"
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
#line 313 "multi_map.m"
  {
#line 313 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 313 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_24;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__Values0_20;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__Values_21;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_20;
#line 87 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;

#line 3906 "multi_map.c"
    {
#line 3908 "multi_map.c"
      mercury__multi_map__TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3910 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_23));
#line 3912 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 3914 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_20);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values0_20 = ((MR_Word) mercury__multi_map__conv0_Values0_20);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 305 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 305 "multi_map.m"
      {
#line 307 "multi_map.m"
        {
#line 307 "multi_map.m"
          mercury__multi_map__Values_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 0) = mercury__multi_map__Value_6;
#line 307 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 1) = ((MR_Box) (mercury__multi_map__Values0_20));
#line 307 "multi_map.m"
        }
#line 87 "map.opt"
        {
#line 87 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_21)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10);
        }
#line 87 "map.opt"
        if (mercury__multi_map__succeeded)
#line 87 "map.opt"
          {
#line 87 "map.opt"
            mercury__multi_map__STATE_VARIABLE_MultiMap_10_10 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;
#line 87 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 87 "map.opt"
          }
#line 305 "multi_map.m"
      }
#line 313 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 311 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 313 "multi_map.m"
    else
#line 314 "multi_map.m"
      {
#line 314 "multi_map.m"
        {
#line 314 "multi_map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__multi_map__TypeInfo_for_K_13, (MR_String) "multi_map.det_update: key not found", mercury__multi_map__Key_5);
#line 314 "multi_map.m"
          return;
        }
#line 314 "multi_map.m"
      }
#line 313 "multi_map.m"
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
#line 506 "multi_map.m"
  {
#line 506 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 506 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 506 "multi_map.m"
    {
#line 506 "multi_map.m"
      mercury__multi_map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 506 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 506 "multi_map.m"
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
#line 305 "multi_map.m"
  {
#line 305 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 305 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;
#line 87 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 4052 "multi_map.c"
    {
#line 4054 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4056 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4058 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4060 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 305 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 305 "multi_map.m"
      {
#line 307 "multi_map.m"
        {
#line 307 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 307 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 307 "multi_map.m"
        }
#line 87 "map.opt"
        {
#line 87 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 87 "map.opt"
        if (mercury__multi_map__succeeded)
#line 87 "map.opt"
          {
#line 87 "map.opt"
            *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 87 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 87 "map.opt"
          }
#line 305 "multi_map.m"
      }
#line 305 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 305 "multi_map.m"
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
#line 302 "multi_map.m"
  {
#line 302 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 303 "multi_map.m"
    {
#line 303 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 303 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 303 "multi_map.m"
    }
#line 4157 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4159 "multi_map.c"
    {
#line 4161 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4163 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4165 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4167 "multi_map.c"
    }
#line 303 "multi_map.m"
    {
#line 303 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 303 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 302 "multi_map.m"
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
#line 302 "multi_map.m"
  {
#line 302 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_21;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_22;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__V_18_18;
#line 302 "multi_map.m"
    MR_Word mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 303 "multi_map.m"
    {
#line 303 "multi_map.m"
      mercury__multi_map__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 0) = mercury__multi_map__Value_7;
#line 303 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 1) = ((MR_Box) (mercury__multi_map__V_20_20));
#line 303 "multi_map.m"
    }
#line 4223 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4225 "multi_map.c"
    {
#line 4227 "multi_map.c"
      mercury__multi_map__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4229 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_21));
#line 4231 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 4233 "multi_map.c"
    }
#line 303 "multi_map.m"
    {
#line 303 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_16_22, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__V_18_18)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 303 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 302 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 302 "multi_map.m"
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
#line 299 "multi_map.m"
  {
#line 299 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 299 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 299 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 299 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 299 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 73 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 300 "multi_map.m"
    {
#line 300 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 300 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 300 "multi_map.m"
    }
#line 4291 "multi_map.c"
    {
#line 4293 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4295 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4297 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4299 "multi_map.c"
    }
#line 73 "map.opt"
    {
#line 73 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 73 "map.opt"
    if (mercury__multi_map__succeeded)
#line 73 "map.opt"
      {
#line 73 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 73 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 73 "map.opt"
      }
#line 299 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 299 "multi_map.m"
  }
#line 77 "multi_map.m"
}

#line 35 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 35 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 35 "map.opt"
{
#line 35 "map.opt"
  {
#line 35 "map.opt"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 35 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7);
#line 35 "map.opt"
    {
#line 35 "map.opt"
      mercury__multi_map__inverse_search_3_p_0_1(mercury__multi_map__env_ptr);
#line 35 "map.opt"
      return;
    }
#line 35 "map.opt"
  }
#line 35 "map.opt"
}

#line 409 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 409 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 409 "multi_map.m"
{
#line 409 "multi_map.m"
  {
#line 409 "multi_map.m"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 411 "multi_map.m"
    {
#line 411 "multi_map.m"
      (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__Value_5, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7);
    }
#line 411 "multi_map.m"
    if ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded)
#line 411 "multi_map.m"
      {
#line 411 "multi_map.m"
        ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont)((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr);
#line 411 "multi_map.m"
        return;
      }
#line 409 "multi_map.m"
  }
#line 409 "multi_map.m"
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
#line 409 "multi_map.m"
    {
#line 409 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 409 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4419 "multi_map.c"
      {
#line 4421 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4423 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4425 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
#line 4427 "multi_map.c"
      }
#line 35 "map.opt"
      {
#line 35 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_6, &(mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__inverse_search_3_p_0_2, &mercury__multi_map__env);
      }
#line 409 "multi_map.m"
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
#line 295 "multi_map.m"
  {
#line 295 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 295 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 295 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 295 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4473 "multi_map.c"
    {
#line 4475 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4477 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4479 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4481 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 295 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 297 "multi_map.m"
      {
#line 297 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
#line 297 "multi_map.m"
        return;
      }
#line 295 "multi_map.m"
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
#line 293 "multi_map.m"
  {
#line 293 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 293 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 293 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 293 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4538 "multi_map.c"
    {
#line 4540 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4542 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4544 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4546 "multi_map.c"
    }
#line 293 "multi_map.m"
    {
#line 293 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 293 "multi_map.m"
    *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 293 "multi_map.m"
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
#line 293 "multi_map.m"
  {
#line 293 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 293 "multi_map.m"
    MR_Word mercury__multi_map__Value_6;
#line 293 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 293 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 293 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Value_6;

#line 4586 "multi_map.c"
    {
#line 4588 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4590 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 4592 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4594 "multi_map.c"
    }
#line 293 "multi_map.m"
    {
#line 293 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Value_6);
    }
#line 293 "multi_map.m"
    mercury__multi_map__Value_6 = ((MR_Word) mercury__multi_map__conv0_Value_6);
#line 293 "multi_map.m"
    return mercury__multi_map__Value_6;
#line 293 "multi_map.m"
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
#line 288 "multi_map.m"
  {
#line 288 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 288 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 288 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 288 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4642 "multi_map.c"
    {
#line 4644 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4646 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4648 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4650 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 288 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 290 "multi_map.m"
      {
#line 290 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
#line 290 "multi_map.m"
        return;
      }
#line 288 "multi_map.m"
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
#line 286 "multi_map.m"
  {
#line 286 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 286 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 286 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4707 "multi_map.c"
    {
#line 4709 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4711 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4713 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4715 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 286 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 286 "multi_map.m"
  }
#line 55 "multi_map.m"
}

#line 35 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 35 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 35 "map.opt"
{
#line 35 "map.opt"
  {
#line 35 "map.opt"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 35 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7);
#line 35 "map.opt"
    {
#line 35 "map.opt"
      mercury__multi_map__member_3_p_0_1(mercury__multi_map__env_ptr);
#line 35 "map.opt"
      return;
    }
#line 35 "map.opt"
  }
#line 35 "map.opt"
}

#line 281 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 281 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 281 "multi_map.m"
{
#line 281 "multi_map.m"
  {
#line 281 "multi_map.m"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 283 "multi_map.m"
    {
#line 283 "multi_map.m"
      mercury__list__member_2_p_1((mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__Value_6, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont_env_ptr);
#line 283 "multi_map.m"
      return;
    }
#line 281 "multi_map.m"
  }
#line 281 "multi_map.m"
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
#line 281 "multi_map.m"
    {
#line 281 "multi_map.m"
      MR_bool mercury__multi_map__succeeded;
#line 281 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 281 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4830 "multi_map.c"
      {
#line 4832 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4834 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4836 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
#line 4838 "multi_map.c"
      }
#line 35 "map.opt"
      {
#line 35 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &(mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__member_3_p_0_2, &mercury__multi_map__env);
      }
#line 281 "multi_map.m"
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
#line 279 "multi_map.m"
  {
#line 279 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 279 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 279 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_9_9;
#line 39 "map.opt"
    MR_Word mercury__multi_map__V_5_5;
#line 39 "map.opt"
    MR_Box mercury__multi_map__conv0_V_5_5;

#line 4878 "multi_map.c"
    {
#line 4880 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4882 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 4884 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_7));
#line 4886 "multi_map.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Key_4, &mercury__multi_map__conv0_V_5_5);
    }
#line 39 "map.opt"
    if (mercury__multi_map__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__multi_map__V_5_5 = ((MR_Word) mercury__multi_map__conv0_V_5_5);
#line 39 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 279 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 279 "multi_map.m"
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
