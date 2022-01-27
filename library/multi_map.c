/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version DEV
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
#line 47 "map.opt"
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
#line 47 "map.opt"
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

#line 222 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 222 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 222 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 222 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 222 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 222 "map.opt"
  MR_Word * mercury__multi_map__HeadVar__8_24);

#line 35 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_65_65,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_71_71,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_72_72,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 126 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__multi_map__V_35_35,
#line 126 "list.int"
  MR_Word mercury__multi_map__V_36_36,
#line 126 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 310 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2);

#line 16 "ops.opt"
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

#line 47 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 47 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 488 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 488 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);

#line 47 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 47 "map.opt"
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
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 436 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 444 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__multi_map__list__pti_list_1__pseudo_2
  }
};

#line 453 "multi_map.c"
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

#line 470 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 473 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 475 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 477 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 479 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4)
#line 481 "multi_map.c"
{
#line 483 "multi_map.c"
  {
#line 485 "multi_map.c"
    MR_bool mercury__multi_map__succeeded;

#line 488 "multi_map.c"
    {
#line 490 "multi_map.c"
      mercury__multi_map__succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), ((MR_Word) mercury__multi_map__wrapper_arg_3), ((MR_Word) mercury__multi_map__wrapper_arg_4));
    }
#line 493 "multi_map.c"
    return mercury__multi_map__succeeded;
#line 495 "multi_map.c"
  }
#line 497 "multi_map.c"
}

#line 500 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 503 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 505 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 507 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 509 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 511 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5)
#line 513 "multi_map.c"
{
#line 515 "multi_map.c"
  {
#line 517 "multi_map.c"
    MR_Word mercury__multi_map__conv0_HeadVar__1_1;

#line 520 "multi_map.c"
    {
#line 522 "multi_map.c"
      mercury__multi_map____Compare____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), &mercury__multi_map__conv0_HeadVar__1_1, ((MR_Word) mercury__multi_map__wrapper_arg_4), ((MR_Word) mercury__multi_map__wrapper_arg_5));
    }
#line 525 "multi_map.c"
    *mercury__multi_map__wrapper_arg_3 = ((MR_Box) (mercury__multi_map__conv0_HeadVar__1_1));
#line 527 "multi_map.c"
  }
#line 529 "multi_map.c"
}

#line 222 "map.opt"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_33_33,
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_39_39,
#line 222 "map.opt"
  MR_Word mercury__multi_map__V_40_40,
#line 222 "map.opt"
  MR_Word mercury__multi_map__TypeInfo_for_K_29,
#line 222 "map.opt"
  MR_Box mercury__multi_map__HeadVar__5_21,
#line 222 "map.opt"
  MR_Word mercury__multi_map__HeadVar__6_22,
#line 222 "map.opt"
  MR_Word mercury__multi_map__HeadVar__7_23,
#line 222 "map.opt"
  MR_Word * mercury__multi_map__HeadVar__8_24)
#line 222 "map.opt"
{
#line 222 "map.opt"
  {
#line 222 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 222 "map.opt"
    MR_Word mercury__multi_map__TypeCtorInfo_32_66 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 222 "map.opt"
    MR_Word mercury__multi_map__TypeInfo_33_67;
#line 222 "map.opt"
    MR_Word mercury__multi_map__V_51_51;
#line 222 "map.opt"
    MR_Word mercury__multi_map__V_52_52;
#line 131 "list.opt"
    MR_Word mercury__multi_map__conv0_V_51_51;
#line 56 "list.opt"
    MR_Word mercury__multi_map__conv1_HeadVar__8_24;

#line 570 "multi_map.c"
    {
#line 572 "multi_map.c"
      mercury__multi_map__TypeInfo_33_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 574 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_32_66));
#line 576 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 1) = ((MR_Box) (mercury__multi_map__V_39_39));
#line 578 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_33_67, 2) = ((MR_Box) (mercury__multi_map__V_40_40));
#line 580 "multi_map.c"
    }
#line 396 "multi_map.m"
    {
#line 396 "multi_map.m"
      mercury__multi_map__V_52_52 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__HeadVar__5_21, mercury__multi_map__HeadVar__6_22);
    }
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_33_67, (MR_Word) mercury__multi_map__V_52_52, &mercury__multi_map__conv0_V_51_51);
    }
#line 131 "list.opt"
    mercury__multi_map__V_51_51 = (MR_Word) mercury__multi_map__conv0_V_51_51;
#line 56 "list.opt"
    {
#line 56 "list.opt"
      mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_33_67, (MR_Word) mercury__multi_map__V_51_51, (MR_Word) mercury__multi_map__HeadVar__7_23, &mercury__multi_map__conv1_HeadVar__8_24);
    }
#line 56 "list.opt"
    *mercury__multi_map__HeadVar__8_24 = (MR_Word) mercury__multi_map__conv1_HeadVar__8_24;
#line 222 "map.opt"
  }
#line 222 "map.opt"
}

#line 35 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_65_65,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_71_71,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_72_72,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
#line 35 "tree234.int"
{
#line 120 "tree234.opt"
  while (MR_TRUE)
#line 120 "tree234.opt"
    {
#line 120 "tree234.opt"
      /* tailcall optimized into a loop */
#line 120 "tree234.opt"
      {
#line 120 "tree234.opt"
        MR_bool mercury__multi_map__succeeded;

#line 120 "tree234.opt"
#line 120 "tree234.opt"
        switch (MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) {
#line 120 "tree234.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 120 "tree234.opt"
          case (MR_Integer) 0:
#line 120 "tree234.opt"
            *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 120 "tree234.opt"
            break;
#line 120 "tree234.opt"
          case (MR_Integer) 1:
#line 122 "tree234.opt"
            {
#line 122 "tree234.opt"
              MR_Box mercury__multi_map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 122 "tree234.opt"
              MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 122 "tree234.opt"
              MR_Word mercury__multi_map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
#line 122 "tree234.opt"
              MR_Word mercury__multi_map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 122 "tree234.opt"
              MR_Word mercury__multi_map__V_17_15;
#line 122 "tree234.opt"
              MR_Word mercury__multi_map__V_18_16;

#line 123 "tree234.opt"
              {
#line 123 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_17_15);
              }
#line 124 "tree234.opt"
              {
#line 124 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_10_9, mercury__multi_map__V_11_10, mercury__multi_map__V_17_15, &mercury__multi_map__V_18_16);
              }
#line 125 "tree234.opt"
              /* direct tailcall eliminated */
#line 125 "tree234.opt"
              {
#line 125 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_13_12;
#line 125 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_18_16;

#line 125 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 125 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 125 "tree234.opt"
              }
#line 125 "tree234.opt"
              continue;
#line 122 "tree234.opt"
            }
#line 120 "tree234.opt"
            break;
#line 120 "tree234.opt"
          case (MR_Integer) 2:
#line 126 "tree234.opt"
            {
#line 126 "tree234.opt"
              MR_Box mercury__multi_map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 126 "tree234.opt"
              MR_Box mercury__multi_map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_31_27;
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_32_28;
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_33_29;
#line 126 "tree234.opt"
              MR_Word mercury__multi_map__V_34_30;

#line 127 "tree234.opt"
              {
#line 127 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_31_27);
              }
#line 128 "tree234.opt"
              {
#line 128 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_21_18, mercury__multi_map__V_22_19, mercury__multi_map__V_31_27, &mercury__multi_map__V_32_28);
              }
#line 129 "tree234.opt"
              {
#line 129 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_26_23, mercury__multi_map__V_32_28, &mercury__multi_map__V_33_29);
              }
#line 130 "tree234.opt"
              {
#line 130 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_23_20, mercury__multi_map__V_24_21, mercury__multi_map__V_33_29, &mercury__multi_map__V_34_30);
              }
#line 131 "tree234.opt"
              /* direct tailcall eliminated */
#line 131 "tree234.opt"
              {
#line 131 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_27_24;
#line 131 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_34_30;

#line 131 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 131 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 131 "tree234.opt"
              }
#line 131 "tree234.opt"
              continue;
#line 126 "tree234.opt"
            }
#line 120 "tree234.opt"
            break;
#line 120 "tree234.opt"
          case (MR_Integer) 3:
#line 132 "tree234.opt"
            {
#line 132 "tree234.opt"
              MR_Box mercury__multi_map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "tree234.opt"
              MR_Box mercury__multi_map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 132 "tree234.opt"
              MR_Box mercury__multi_map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_50_44;
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_51_45;
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_52_46;
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_53_47;
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_54_48;
#line 132 "tree234.opt"
              MR_Word mercury__multi_map__V_55_49;

#line 133 "tree234.opt"
              {
#line 133 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_50_44);
              }
#line 134 "tree234.opt"
              {
#line 134 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_37_32, mercury__multi_map__V_38_33, mercury__multi_map__V_50_44, &mercury__multi_map__V_51_45);
              }
#line 135 "tree234.opt"
              {
#line 135 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_44_39, mercury__multi_map__V_51_45, &mercury__multi_map__V_52_46);
              }
#line 136 "tree234.opt"
              {
#line 136 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_39_34, mercury__multi_map__V_40_35, mercury__multi_map__V_52_46, &mercury__multi_map__V_53_47);
              }
#line 137 "tree234.opt"
              {
#line 137 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_45_40, mercury__multi_map__V_53_47, &mercury__multi_map__V_54_48);
              }
#line 138 "tree234.opt"
              {
#line 138 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_50_50_50_95_95_49_95_95_104_111_49_50_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_p_0(mercury__multi_map__V_65_65, mercury__multi_map__V_71_71, mercury__multi_map__V_72_72, mercury__multi_map__V_60_60, mercury__multi_map__V_41_36, mercury__multi_map__V_42_37, mercury__multi_map__V_54_48, &mercury__multi_map__V_55_49);
              }
#line 139 "tree234.opt"
              /* direct tailcall eliminated */
#line 139 "tree234.opt"
              {
#line 139 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_46_41;
#line 139 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_55_49;

#line 139 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 139 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 139 "tree234.opt"
              }
#line 139 "tree234.opt"
              continue;
#line 132 "tree234.opt"
            }
#line 120 "tree234.opt"
            break;
#line 120 "tree234.opt"
        }
#line 120 "tree234.opt"
      }
#line 120 "tree234.opt"
      break;
#line 120 "tree234.opt"
    }
#line 35 "tree234.int"
}

#line 126 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__multi_map__V_35_35,
#line 126 "list.int"
  MR_Word mercury__multi_map__V_36_36,
#line 126 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 126 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 126 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
#line 126 "list.int"
{
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__multi_map__succeeded;

#line 394 "list.opt"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Word mercury__multi_map__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "list.opt"
            MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Word mercury__multi_map__V_15_13;
#line 396 "list.opt"
            MR_Box mercury__multi_map__Key_69 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 0));
#line 396 "list.opt"
            MR_Box mercury__multi_map__Value_70 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 1));

#line 407 "multi_map.m"
            {
#line 407 "multi_map.m"
              mercury__multi_map__set_4_p_0(mercury__multi_map__V_35_35, mercury__multi_map__V_36_36, mercury__multi_map__Key_69, mercury__multi_map__Value_70, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_15_13);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_11_10;
#line 398 "list.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_15_13;

#line 398 "list.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
    }
#line 126 "list.int"
}

#line 310 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 310 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 310 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2)
#line 310 "list.int"
{
#line 184 "list.opt"
  {
#line 184 "list.opt"
    MR_bool mercury__multi_map__succeeded;
#line 184 "list.opt"
    MR_Word mercury__multi_map__HeadVar__3_3;

#line 184 "list.opt"
    if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "list.opt"
      mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "list.opt"
    else
#line 185 "list.opt"
      {
#line 185 "list.opt"
        MR_Box mercury__multi_map__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 185 "list.opt"
        MR_Word mercury__multi_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "list.opt"
        MR_Word mercury__multi_map__V_8_8;
#line 185 "list.opt"
        MR_Word mercury__multi_map__V_9_9;

#line 396 "multi_map.m"
        {
#line 396 "multi_map.m"
          mercury__multi_map__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 0) = mercury__multi_map__V_17_17;
#line 396 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 1) = mercury__multi_map__V_6_6;
#line 396 "multi_map.m"
        }
#line 187 "list.opt"
        {
#line 187 "list.opt"
          mercury__multi_map__V_9_9 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_17_17, mercury__multi_map__V_7_7);
        }
#line 185 "list.opt"
        {
#line 185 "list.opt"
          mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 0) = ((MR_Box) (mercury__multi_map__V_8_8));
#line 185 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 1) = ((MR_Box) (mercury__multi_map__V_9_9));
#line 185 "list.opt"
        }
#line 185 "list.opt"
      }
#line 184 "list.opt"
    return mercury__multi_map__HeadVar__3_3;
#line 184 "list.opt"
  }
#line 310 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__multi_map__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
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

#line 1052 "multi_map.c"
    {
#line 1054 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 1058 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_7));
#line 1060 "multi_map.c"
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

#line 1100 "multi_map.c"
    {
#line 1102 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1106 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_Data_6));
#line 1108 "multi_map.c"
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
#line 547 "multi_map.m"
            switch (mercury__multi_map__Res_16) {
#line 547 "multi_map.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 547 "multi_map.m"
              case (MR_Integer) 1:
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
                break;
#line 547 "multi_map.m"
              case (MR_Integer) 0:
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
                break;
#line 547 "multi_map.m"
              case (MR_Integer) 2:
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
#line 547 "multi_map.m"
                break;
#line 547 "multi_map.m"
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
#line 81 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 81 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 81 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 1504 "multi_map.c"
    {
#line 1506 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 1510 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 1512 "multi_map.c"
    }
#line 81 "tree234.opt"
    {
#line 81 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 81 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 81 "tree234.opt"
      {
#line 81 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 81 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 81 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 81 "tree234.opt"
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
#line 213 "map.opt"
  {
#line 213 "map.opt"
    MR_bool mercury__multi_map__succeeded;

#line 213 "map.opt"
    *mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;
#line 213 "map.opt"
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
#line 213 "map.opt"
  {
#line 213 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 213 "map.opt"
    MR_Word mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;

#line 213 "map.opt"
    return mercury__multi_map__MultiMap_4;
#line 213 "map.opt"
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
        MR_Word mercury__multi_map__V_5_17;
#line 581 "multi_map.m"
        MR_Word mercury__multi_map__V_6_18;
#line 582 "multi_map.m"
        MR_Word mercury__multi_map__conv0_Values0_9;

#line 1629 "multi_map.c"
        {
#line 1631 "multi_map.c"
          mercury__multi_map__TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 1635 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 1637 "multi_map.c"
        }
#line 582 "multi_map.m"
        {
#line 582 "multi_map.m"
          mercury__map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_10_21, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__MultiMap_2, &mercury__multi_map__conv0_Values0_9);
        }
#line 582 "multi_map.m"
        mercury__multi_map__Values0_9 = (MR_Word) mercury__multi_map__conv0_Values0_9;
#line 164 "list.opt"
        {
#line 164 "list.opt"
          mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_21, mercury__multi_map__Values0_9, &mercury__multi_map__V_5_17);
        }
#line 165 "list.opt"
        mercury__multi_map__V_6_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
        {
#line 166 "list.opt"
          mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__V_5_17, mercury__multi_map__V_6_18, mercury__multi_map__HeadVar__3_3);
#line 166 "list.opt"
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
    MR_Word mercury__multi_map__V_7_14;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__V_8_15;
#line 203 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1729 "multi_map.c"
    {
#line 1731 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1733 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 1735 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1737 "multi_map.c"
    }
#line 43 "set_ordlist.opt"
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__KeySet_5;
#line 64 "tree234.opt"
    mercury__multi_map__V_8_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "map.opt"
    {
#line 203 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__Original_4, (MR_Word) mercury__multi_map__V_8_15, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 203 "map.opt"
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
    MR_Word mercury__multi_map__V_7_17;
#line 573 "multi_map.m"
    MR_Word mercury__multi_map__V_8_18;
#line 203 "map.opt"
    MR_Word mercury__multi_map__conv0_NewMultiMap_6;

#line 1785 "multi_map.c"
    {
#line 1787 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1789 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 1791 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1793 "multi_map.c"
    }
#line 43 "set_ordlist.opt"
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__KeySet_5;
#line 64 "tree234.opt"
    mercury__multi_map__V_8_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "map.opt"
    {
#line 203 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__MultiMap_4, (MR_Word) mercury__multi_map__V_8_18, &mercury__multi_map__conv0_NewMultiMap_6);
    }
#line 203 "map.opt"
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
#line 102 "tree234.opt"
    MR_Word mercury__multi_map__conv0_ML0_7;
#line 102 "tree234.opt"
    MR_Word mercury__multi_map__conv1_ML1_8;
#line 159 "map.opt"
    MR_Word mercury__multi_map__conv2_M_6;

#line 1853 "multi_map.c"
    {
#line 1855 "multi_map.c"
      mercury__multi_map__TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1857 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_14));
#line 1859 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_11));
#line 1861 "multi_map.c"
    }
#line 101 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "tree234.opt"
    {
#line 102 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M0_4, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv0_ML0_7);
    }
#line 102 "tree234.opt"
    mercury__multi_map__ML0_7 = (MR_Word) mercury__multi_map__conv0_ML0_7;
#line 101 "tree234.opt"
    mercury__multi_map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "tree234.opt"
    {
#line 102 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M1_5, (MR_Word) mercury__multi_map__V_5_31, &mercury__multi_map__conv1_ML1_8);
    }
#line 102 "tree234.opt"
    mercury__multi_map__ML1_8 = (MR_Word) mercury__multi_map__conv1_ML1_8;
#line 531 "multi_map.m"
    {
#line 531 "multi_map.m"
      mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__ML0_7, mercury__multi_map__ML1_8, &mercury__multi_map__ML_9);
    }
#line 159 "map.opt"
    {
#line 159 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__ML_9, &mercury__multi_map__conv2_M_6);
    }
#line 159 "map.opt"
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
    MR_Word mercury__multi_map__V_7_14;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__V_5_17;
#line 181 "map.opt"
    MR_Word mercury__multi_map__conv0_V_7_14;
#line 107 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 1962 "multi_map.c"
    {
#line 1964 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 1968 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 1970 "multi_map.c"
    }
#line 181 "map.opt"
    {
#line 181 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_14);
    }
#line 181 "map.opt"
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__conv0_V_7_14;
#line 106 "tree234.opt"
    mercury__multi_map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "tree234.opt"
    {
#line 107 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__V_5_17, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 107 "tree234.opt"
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
    MR_Word mercury__multi_map__V_7_17;
#line 521 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 181 "map.opt"
    MR_Word mercury__multi_map__conv0_V_7_17;
#line 107 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2025 "multi_map.c"
    {
#line 2027 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2029 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 2031 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2033 "multi_map.c"
    }
#line 181 "map.opt"
    {
#line 181 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_17);
    }
#line 181 "map.opt"
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__conv0_V_7_17;
#line 106 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "tree234.opt"
    {
#line 107 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 107 "tree234.opt"
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

#line 2237 "multi_map.c"
    {
#line 2239 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2241 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2243 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2245 "multi_map.c"
    }
#line 177 "map.opt"
    {
#line 177 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Count_4);
#line 177 "map.opt"
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

#line 2281 "multi_map.c"
    {
#line 2283 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2285 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2287 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2289 "multi_map.c"
    }
#line 177 "map.opt"
    {
#line 177 "map.opt"
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

#line 2333 "multi_map.c"
    {
#line 2335 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2337 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2339 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2341 "multi_map.c"
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
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 79 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 2389 "multi_map.c"
    {
#line 2391 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2393 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2395 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2397 "multi_map.c"
    }
#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 79 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 79 "tree234.opt"
      {
#line 79 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 79 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 79 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 79 "tree234.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 2455 "multi_map.c"
    {
#line 2457 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2459 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 2461 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 2463 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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
#line 77 "tree234.opt"
        {
#line 77 "tree234.opt"
          MR_Word mercury__multi_map__V_7_33;
#line 77 "tree234.opt"
          MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;

#line 77 "tree234.opt"
          {
#line 77 "tree234.opt"
            mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13, &mercury__multi_map__V_7_33);
          }
#line 77 "tree234.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;
#line 77 "tree234.opt"
        }
#line 448 "multi_map.m"
      else
#line 129 "map.opt"
        {
#line 129 "map.opt"
          MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;

#line 129 "map.opt"
          {
#line 129 "map.opt"
            mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13);
          }
#line 129 "map.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;
#line 129 "map.opt"
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
#line 77 "tree234.opt"
    MR_Word mercury__multi_map__V_7_19;
#line 77 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2600 "multi_map.c"
    {
#line 2602 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2604 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 2606 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2608 "multi_map.c"
    }
#line 77 "tree234.opt"
    {
#line 77 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_4, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_19);
    }
#line 77 "tree234.opt"
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
#line 77 "tree234.opt"
    MR_Word mercury__multi_map__V_7_24;
#line 77 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 2650 "multi_map.c"
    {
#line 2652 "multi_map.c"
      mercury__multi_map__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2654 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_16));
#line 2656 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 2658 "multi_map.c"
    }
#line 77 "tree234.opt"
    {
#line 77 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_17, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_5, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_24);
    }
#line 77 "tree234.opt"
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
#line 159 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2698 "multi_map.c"
    {
#line 2700 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2702 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2704 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2706 "multi_map.c"
    }
#line 159 "map.opt"
    {
#line 159 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 159 "map.opt"
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
#line 159 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2744 "multi_map.c"
    {
#line 2746 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2748 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2750 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2752 "multi_map.c"
    }
#line 159 "map.opt"
    {
#line 159 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 159 "map.opt"
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
#line 107 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2794 "multi_map.c"
    {
#line 2796 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2798 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2800 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2802 "multi_map.c"
    }
#line 106 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "tree234.opt"
    {
#line 107 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AList_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 107 "tree234.opt"
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
#line 107 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2844 "multi_map.c"
    {
#line 2846 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2848 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2850 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2852 "multi_map.c"
    }
#line 106 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "tree234.opt"
    {
#line 107 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 107 "tree234.opt"
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
#line 102 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 2896 "multi_map.c"
    {
#line 2898 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2900 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2902 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2904 "multi_map.c"
    }
#line 101 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "tree234.opt"
    {
#line 102 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_AList_4);
    }
#line 102 "tree234.opt"
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
#line 102 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 2946 "multi_map.c"
    {
#line 2948 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2950 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2952 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2954 "multi_map.c"
    }
#line 101 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "tree234.opt"
    {
#line 102 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_AssocList_4);
    }
#line 102 "tree234.opt"
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

#line 409 "list.opt"
    {
#line 409 "list.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__list_0(mercury__multi_map__TypeInfo_for_K_17, mercury__multi_map__TypeInfo_for_V_18, mercury__multi_map__AList_3, mercury__multi_map__V_13_13, mercury__multi_map__MultiMap_4);
#line 409 "list.opt"
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
#line 131 "list.opt"
    MR_Word mercury__multi_map__conv0_AList_4;

#line 3062 "multi_map.c"
    {
#line 3064 "multi_map.c"
      mercury__multi_map__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3066 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_27_27));
#line 3068 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_25));
#line 3070 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_28_28, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_26));
#line 3072 "multi_map.c"
    }
#line 399 "multi_map.m"
    mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "map.opt"
    {
#line 229 "map.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__TypeInfo_for_K_25, mercury__multi_map__TypeInfo_for_V_26, mercury__multi_map__MultiMap_3, mercury__multi_map__V_20_20, &mercury__multi_map__V_9_9);
    }
#line 131 "list.opt"
    {
#line 131 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_28_28, (MR_Word) mercury__multi_map__V_9_9, &mercury__multi_map__conv0_AList_4);
    }
#line 131 "list.opt"
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
    MR_Word mercury__multi_map__V_5_18;
#line 383 "multi_map.m"
    MR_Word mercury__multi_map__V_6_19;
#line 91 "tree234.opt"
    MR_Word mercury__multi_map__conv0_KeyList0_5;

#line 3155 "multi_map.c"
    {
#line 3157 "multi_map.c"
      mercury__multi_map__TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3159 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 3161 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
#line 3163 "multi_map.c"
    }
#line 90 "tree234.opt"
    mercury__multi_map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__multi_map__TypeInfo_for__K_6, mercury__multi_map__TypeInfo_10_22, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_14, &mercury__multi_map__conv0_KeyList0_5);
    }
#line 91 "tree234.opt"
    mercury__multi_map__KeyList0_5 = (MR_Word) mercury__multi_map__conv0_KeyList0_5;
#line 164 "list.opt"
    {
#line 164 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_22, mercury__multi_map__KeyList0_5, &mercury__multi_map__V_5_18);
    }
#line 165 "list.opt"
    mercury__multi_map__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
    {
#line 166 "list.opt"
      mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_7, mercury__multi_map__V_5_18, mercury__multi_map__V_6_19, mercury__multi_map__KeyList_4);
#line 166 "list.opt"
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

#line 3247 "multi_map.c"
    {
#line 3249 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3251 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 3253 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3255 "multi_map.c"
    }
#line 85 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_13, mercury__multi_map__KeyList_4);
#line 86 "tree234.opt"
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

#line 3295 "multi_map.c"
    {
#line 3297 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3299 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 3301 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 3303 "multi_map.c"
    }
#line 85 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 3485 "multi_map.c"
    {
#line 3487 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3489 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 3491 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3493 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
      }
#line 356 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 354 "multi_map.m"
      {
#line 354 "multi_map.m"
        MR_Word mercury__multi_map__Values_9;
#line 129 "map.opt"
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
#line 129 "map.opt"
        {
#line 129 "map.opt"
          mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 129 "map.opt"
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
#line 3563 "multi_map.c"
        mercury__multi_map__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3565 "multi_map.c"
        {
#line 3567 "multi_map.c"
          mercury__multi_map__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3569 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_22_22));
#line 3571 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3573 "multi_map.c"
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

#line 3651 "multi_map.c"
    {
#line 3653 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3655 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3657 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3659 "multi_map.c"
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

#line 3701 "multi_map.c"
    {
#line 3703 "multi_map.c"
      mercury__multi_map__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3705 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_19));
#line 3707 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3709 "multi_map.c"
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
#line 99 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3753 "multi_map.c"
    {
#line 3755 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3757 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3759 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3761 "multi_map.c"
    }
#line 99 "map.opt"
    {
#line 99 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 99 "map.opt"
    if (mercury__multi_map__succeeded)
#line 99 "map.opt"
      {
#line 99 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 99 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 99 "map.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_20;
#line 99 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;

#line 3821 "multi_map.c"
    {
#line 3823 "multi_map.c"
      mercury__multi_map__TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3825 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_23));
#line 3827 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 3829 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_20);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values0_20 = ((MR_Word) mercury__multi_map__conv0_Values0_20);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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
#line 99 "map.opt"
        {
#line 99 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_21)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10);
        }
#line 99 "map.opt"
        if (mercury__multi_map__succeeded)
#line 99 "map.opt"
          {
#line 99 "map.opt"
            mercury__multi_map__STATE_VARIABLE_MultiMap_10_10 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;
#line 99 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 99 "map.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;
#line 99 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 3967 "multi_map.c"
    {
#line 3969 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3971 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 3973 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 3975 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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
#line 99 "map.opt"
        {
#line 99 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 99 "map.opt"
        if (mercury__multi_map__succeeded)
#line 99 "map.opt"
          {
#line 99 "map.opt"
            *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 99 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 99 "map.opt"
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
#line 4072 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4074 "multi_map.c"
    {
#line 4076 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4078 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4080 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4082 "multi_map.c"
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
#line 4138 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4140 "multi_map.c"
    {
#line 4142 "multi_map.c"
      mercury__multi_map__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4144 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_21));
#line 4146 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 4148 "multi_map.c"
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
#line 85 "map.opt"
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
#line 4206 "multi_map.c"
    {
#line 4208 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4210 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4212 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4214 "multi_map.c"
    }
#line 85 "map.opt"
    {
#line 85 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 85 "map.opt"
    if (mercury__multi_map__succeeded)
#line 85 "map.opt"
      {
#line 85 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 85 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 85 "map.opt"
      }
#line 316 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 316 "multi_map.m"
  }
#line 77 "multi_map.m"
}

#line 47 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 47 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 47 "map.opt"
{
#line 47 "map.opt"
  {
#line 47 "map.opt"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 47 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7);
#line 47 "map.opt"
    {
#line 47 "map.opt"
      mercury__multi_map__inverse_search_3_p_0_1(mercury__multi_map__env_ptr);
#line 47 "map.opt"
      return;
    }
#line 47 "map.opt"
  }
#line 47 "map.opt"
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

#line 4334 "multi_map.c"
      {
#line 4336 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4338 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4340 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
#line 4342 "multi_map.c"
      }
#line 47 "map.opt"
      {
#line 47 "map.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4388 "multi_map.c"
    {
#line 4390 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4392 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4394 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4396 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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

#line 4453 "multi_map.c"
    {
#line 4455 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4457 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4459 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4461 "multi_map.c"
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

#line 4501 "multi_map.c"
    {
#line 4503 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4505 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 4507 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4509 "multi_map.c"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4557 "multi_map.c"
    {
#line 4559 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4561 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4563 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4565 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4622 "multi_map.c"
    {
#line 4624 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4626 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4628 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4630 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
      }
#line 298 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 298 "multi_map.m"
  }
#line 55 "multi_map.m"
}

#line 47 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 47 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 47 "map.opt"
{
#line 47 "map.opt"
  {
#line 47 "map.opt"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 47 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7);
#line 47 "map.opt"
    {
#line 47 "map.opt"
      mercury__multi_map__member_3_p_0_1(mercury__multi_map__env_ptr);
#line 47 "map.opt"
      return;
    }
#line 47 "map.opt"
  }
#line 47 "map.opt"
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

#line 4745 "multi_map.c"
      {
#line 4747 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4749 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4751 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
#line 4753 "multi_map.c"
      }
#line 47 "map.opt"
      {
#line 47 "map.opt"
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
#line 51 "map.opt"
    MR_Word mercury__multi_map__V_5_5;
#line 51 "map.opt"
    MR_Box mercury__multi_map__conv0_V_5_5;

#line 4793 "multi_map.c"
    {
#line 4795 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4797 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 4799 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_7));
#line 4801 "multi_map.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Key_4, &mercury__multi_map__conv0_V_5_5);
    }
#line 51 "map.opt"
    if (mercury__multi_map__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__multi_map__V_5_5 = ((MR_Word) mercury__multi_map__conv0_V_5_5);
#line 51 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 51 "map.opt"
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
#line 69 "tree234.opt"
  {
#line 69 "tree234.opt"
    MR_bool mercury__multi_map__succeeded = (mercury__multi_map__M_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 69 "tree234.opt"
    return mercury__multi_map__succeeded;
#line 69 "tree234.opt"
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
#line 64 "tree234.opt"
  {
#line 64 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;

#line 64 "tree234.opt"
    *mercury__multi_map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "tree234.opt"
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
#line 64 "tree234.opt"
  {
#line 64 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;
#line 64 "tree234.opt"
    MR_Word mercury__multi_map__M_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 64 "tree234.opt"
    return mercury__multi_map__M_2;
#line 64 "tree234.opt"
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
