/*
** Automatically generated from `map.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 129 "map.m"
struct mercury__map__inverse_search_3_p_0_env_0_s {
#line 129 "map.m"
  MR_Word mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8;
#line 129 "map.m"
  MR_Box mercury__map__inverse_search_3_p_0_env_0__V_5;
#line 129 "map.m"
  MR_Cont mercury__map__inverse_search_3_p_0_env_0__cont;
#line 129 "map.m"
  void * mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr;
#line 1221 "map.m"
  MR_bool mercury__map__inverse_search_3_p_0_env_0__succeeded;
#line 1221 "map.m"
  MR_Box mercury__map__inverse_search_3_p_0_env_0__V_9_9;
#line 129 "map.m"
};


#line 110 "map.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1;

#line 113 "map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 116 "map.c"
static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
#line 119 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 121 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 123 "map.c"
  MR_Box mercury__map__wrapper_arg_3,
#line 125 "map.c"
  MR_Box mercury__map__wrapper_arg_4);

#line 128 "map.c"
static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
#line 131 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 133 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 135 "map.c"
  MR_Box * mercury__map__wrapper_arg_3,
#line 137 "map.c"
  MR_Box mercury__map__wrapper_arg_4,
#line 139 "map.c"
  MR_Box mercury__map__wrapper_arg_5);

#line 1553 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
#line 1553 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1553 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1553 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 1557 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
#line 1557 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1557 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1557 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 1445 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1445 "map.m"
  MR_Word mercury__map__V_36_36,
#line 1445 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1445 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1445 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23);

#line 1555 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
#line 1555 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1555 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1555 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 1559 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
#line 1559 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1559 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1559 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 1561 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1561 "map.m"
  MR_Word mercury__map__V_52_52,
#line 1561 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1561 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1561 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
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

#line 1563 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1563 "map.m"
  MR_Word mercury__map__V_52_52,
#line 1563 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1563 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1563 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19);

#line 1447 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1447 "map.m"
  MR_Word mercury__map__V_36_36,
#line 1447 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1447 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1447 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23);

#line 231 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
#line 231 "tree234.int"
  MR_Word mercury__map__V_64_64,
#line 231 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 231 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3);

#line 212 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
#line 212 "tree234.int"
  MR_Word mercury__map__V_65_65,
#line 212 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 212 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3);

#line 120 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 120 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 120 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 120 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 120 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4);

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
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

#line 1195 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1195 "map.m"
  MR_Word * mercury__map__L_3);

#line 1170 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
#line 1170 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 1170 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1170 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1170 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
#line 1170 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
#line 1170 "map.m"
  MR_Word * mercury__map__HeadVar__5_5);

#line 1075 "map.m"
static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1075__1_4_p_0(
#line 1075 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 1075 "map.m"
  MR_Word mercury__map__F_5,
#line 1075 "map.m"
  MR_Box mercury__map__HeadVar__3_14,
#line 1075 "map.m"
  MR_Box * mercury__map__HeadVar__4_15);

#line 1075 "map.m"
static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
#line 1075 "map.m"
  MR_Box mercury__map__closure_arg,
#line 1075 "map.m"
  MR_Box mercury__map__wrapper_arg_1,
#line 1075 "map.m"
  MR_Box * mercury__map__wrapper_arg_2);

#line 1221 "map.m"
static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
#line 1221 "map.m"
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



#line 751 "map.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__map____vpti_func_2__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 761 "map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__map__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 770 "map.c"
const MR_TypeCtorInfo_Struct mercury__map__map__type_ctor_info_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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

#line 787 "map.c"
static MR_bool MR_CALL 
mercury__map____Unify____map_2_0_10001(
#line 790 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 792 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 794 "map.c"
  MR_Box mercury__map__wrapper_arg_3,
#line 796 "map.c"
  MR_Box mercury__map__wrapper_arg_4)
#line 798 "map.c"
{
#line 800 "map.c"
  {
#line 802 "map.c"
    MR_bool mercury__map__succeeded;

#line 805 "map.c"
    {
#line 807 "map.c"
      mercury__map__succeeded = mercury__map____Unify____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), ((MR_Word) mercury__map__wrapper_arg_3), ((MR_Word) mercury__map__wrapper_arg_4));
    }
#line 810 "map.c"
    return mercury__map__succeeded;
#line 812 "map.c"
  }
#line 814 "map.c"
}

#line 817 "map.c"
static void MR_CALL 
mercury__map____Compare____map_2_0_10001(
#line 820 "map.c"
  MR_Box mercury__map__wrapper_arg_1,
#line 822 "map.c"
  MR_Box mercury__map__wrapper_arg_2,
#line 824 "map.c"
  MR_Box * mercury__map__wrapper_arg_3,
#line 826 "map.c"
  MR_Box mercury__map__wrapper_arg_4,
#line 828 "map.c"
  MR_Box mercury__map__wrapper_arg_5)
#line 830 "map.c"
{
#line 832 "map.c"
  {
#line 834 "map.c"
    MR_Word mercury__map__conv0_HeadVar__1_1;

#line 837 "map.c"
    {
#line 839 "map.c"
      mercury__map____Compare____map_2_0(((MR_Word) mercury__map__wrapper_arg_1), ((MR_Word) mercury__map__wrapper_arg_2), &mercury__map__conv0_HeadVar__1_1, ((MR_Word) mercury__map__wrapper_arg_4), ((MR_Word) mercury__map__wrapper_arg_5));
    }
#line 842 "map.c"
    *mercury__map__wrapper_arg_3 = ((MR_Box) (mercury__map__conv0_HeadVar__1_1));
#line 844 "map.c"
  }
#line 846 "map.c"
}

#line 1553 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
#line 1553 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1553 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1553 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1553 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
          {
#line 1568 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1568 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1568 "map.m"
          }
#line 1570 "map.m"
        else
#line 1576 "map.m"
          {
#line 1576 "map.m"
            MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
            MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
            {
#line 1578 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
            }
#line 1579 "map.m"
            /* direct tailcall eliminated */
#line 1579 "map.m"
            {
#line 1579 "map.m"
              MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_15;
#line 1579 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1579 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1579 "map.m"
              mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1579 "map.m"
            }
#line 1579 "map.m"
            continue;
#line 1576 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1553 "map.m"
}

#line 1557 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
#line 1557 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1557 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1557 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1557 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          {
#line 1570 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1570 "map.m"
          }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1573 "map.m"
            {
#line 1573 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
            }
#line 1574 "map.m"
            /* direct tailcall eliminated */
#line 1574 "map.m"
            {
#line 1574 "map.m"
              MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__AssocTail1_12;
#line 1574 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1574 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1574 "map.m"
              mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1574 "map.m"
            }
#line 1574 "map.m"
            continue;
#line 1570 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1557 "map.m"
}

#line 1445 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1445 "map.m"
  MR_Word mercury__map__V_36_36,
#line 1445 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1445 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1445 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
#line 1445 "map.m"
{
#line 1454 "map.m"
  while (MR_TRUE)
#line 1454 "map.m"
    {
#line 1454 "map.m"
      /* tailcall optimized into a loop */
#line 1454 "map.m"
      {
#line 1454 "map.m"
        MR_bool mercury__map__succeeded;

#line 1454 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "map.m"
          {
#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            else
#line 1458 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1454 "map.m"
          }
#line 1454 "map.m"
        else
#line 1454 "map.m"
          {
#line 1454 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1454 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "map.m"
              {
#line 1455 "map.m"
                *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1455 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1455 "map.m"
              }
#line 1454 "map.m"
            else
#line 1461 "map.m"
              {
#line 1461 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 0));
#line 1461 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 1));
#line 1461 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1461 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1461 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1461 "map.m"
                MR_Word mercury__map__R_20;
#line 1461 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1462 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1462 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1463 "map.m"
                {
#line 1463 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1471 "map.m"
                  {
#line 1471 "map.m"
                    /* direct tailcall eliminated */
#line 1471 "map.m"
                    {
#line 1471 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;

#line 1471 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1471 "map.m"
                    }
#line 1471 "map.m"
                    continue;
#line 1471 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1465 "map.m"
                  {
#line 1465 "map.m"
                    MR_Box mercury__map__Value_21;
#line 1465 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1465 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1433 "map.m"
                    MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__V_36_36, (MR_Integer) 1)));

#line 1433 "map.m"
                    {
#line 1433 "map.m"
                      mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__V_36_36), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                    }
#line 1465 "map.m"
                    if (mercury__map__succeeded)
#line 1465 "map.m"
                      {
#line 1467 "map.m"
                        {
#line 1467 "map.m"
                          mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__Key1_14;
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_21;
#line 1467 "map.m"
                        }
#line 1467 "map.m"
                        {
#line 1467 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
#line 1467 "map.m"
                        }
#line 1468 "map.m"
                        /* direct tailcall eliminated */
#line 1468 "map.m"
                        {
#line 1468 "map.m"
                          MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;
#line 1468 "map.m"
                          MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1468 "map.m"
                          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1468 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22;
#line 1468 "map.m"
                          mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1468 "map.m"
                          mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1468 "map.m"
                        }
#line 1468 "map.m"
                        continue;
#line 1465 "map.m"
                      }
#line 1465 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1475 "map.m"
                  {
#line 1475 "map.m"
                    /* direct tailcall eliminated */
#line 1475 "map.m"
                    {
#line 1475 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1475 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1475 "map.m"
                    }
#line 1475 "map.m"
                    continue;
#line 1475 "map.m"
                  }
#line 1461 "map.m"
              }
#line 1454 "map.m"
          }
#line 1454 "map.m"
        return mercury__map__succeeded;
#line 1454 "map.m"
      }
#line 1454 "map.m"
      break;
#line 1454 "map.m"
    }
#line 1445 "map.m"
}

#line 1555 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(
#line 1555 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1555 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1555 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1555 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
        else
#line 1576 "map.m"
          {
#line 1576 "map.m"
            MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
            MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
            {
#line 1578 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
            }
#line 1579 "map.m"
            /* direct tailcall eliminated */
#line 1579 "map.m"
            {
#line 1579 "map.m"
              MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_15;
#line 1579 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1579 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1579 "map.m"
              mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1579 "map.m"
            }
#line 1579 "map.m"
            continue;
#line 1576 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1555 "map.m"
}

#line 1559 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(
#line 1559 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1559 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1559 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1559 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1573 "map.m"
            {
#line 1573 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
            }
#line 1574 "map.m"
            /* direct tailcall eliminated */
#line 1574 "map.m"
            {
#line 1574 "map.m"
              MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__AssocTail1_12;
#line 1574 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1574 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1574 "map.m"
              mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1574 "map.m"
            }
#line 1574 "map.m"
            continue;
#line 1570 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1559 "map.m"
}

#line 1561 "map.m"
static MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1561 "map.m"
  MR_Word mercury__map__V_52_52,
#line 1561 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1561 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1561 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1561 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
            {
#line 1568 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1568 "map.m"
              mercury__map__succeeded = MR_TRUE;
#line 1568 "map.m"
            }
#line 1570 "map.m"
          else
#line 1576 "map.m"
            {
#line 1576 "map.m"
              MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
              MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
              {
#line 1578 "map.m"
                mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
              }
#line 1579 "map.m"
              {
#line 1579 "map.m"
                return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
              }
#line 1576 "map.m"
            }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
#line 1570 "map.m"
            MR_Box mercury__map__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 1));
#line 1570 "map.m"
            MR_Box mercury__map__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 0));

#line 1570 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "map.m"
              {
#line 1571 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1573 "map.m"
                {
#line 1573 "map.m"
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
                }
#line 1574 "map.m"
                {
#line 1574 "map.m"
                  return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(mercury__map__V_47_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
                }
#line 1571 "map.m"
              }
#line 1570 "map.m"
            else
#line 1581 "map.m"
              {
#line 1581 "map.m"
                MR_Word mercury__map__R_16;
#line 1581 "map.m"
                MR_Word mercury__map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1581 "map.m"
                MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 0));
#line 1581 "map.m"
                MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 1));
#line 1581 "map.m"
                MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

#line 1583 "map.m"
                {
#line 1583 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__V_50_50, mercury__map__Key2_42);
                }
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 1))
#line 1591 "map.m"
                  {
#line 1591 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1592 "map.m"
                    {
#line 1592 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1592 "map.m"
                    }
#line 1593 "map.m"
                    /* direct tailcall eliminated */
#line 1593 "map.m"
                    {
#line 1593 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1593 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1593 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1593 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1593 "map.m"
                    }
#line 1593 "map.m"
                    continue;
#line 1591 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 0))
#line 1585 "map.m"
                  {
#line 1585 "map.m"
                    MR_Box mercury__map__Value_17;
#line 1585 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1585 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1536 "map.m"
                    MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__V_52_52, (MR_Integer) 1)));

#line 1536 "map.m"
                    {
#line 1536 "map.m"
                      mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__V_52_52), mercury__map__V_49_49, mercury__map__Value2_43, &mercury__map__Value_17);
                    }
#line 1585 "map.m"
                    if (mercury__map__succeeded)
#line 1585 "map.m"
                      {
#line 1587 "map.m"
                        {
#line 1587 "map.m"
                          mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__V_50_50;
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_17;
#line 1587 "map.m"
                        }
#line 1587 "map.m"
                        {
#line 1587 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1587 "map.m"
                        }
#line 1588 "map.m"
                        /* direct tailcall eliminated */
#line 1588 "map.m"
                        {
#line 1588 "map.m"
                          MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1588 "map.m"
                          MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1588 "map.m"
                          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1588 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1588 "map.m"
                          mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1588 "map.m"
                          mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1588 "map.m"
                        }
#line 1588 "map.m"
                        continue;
#line 1585 "map.m"
                      }
#line 1585 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1596 "map.m"
                  {
#line 1596 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1597 "map.m"
                    {
#line 1597 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__V_21_21));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1597 "map.m"
                    }
#line 1598 "map.m"
                    /* direct tailcall eliminated */
#line 1598 "map.m"
                    {
#line 1598 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1598 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1598 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1598 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1598 "map.m"
                    }
#line 1598 "map.m"
                    continue;
#line 1596 "map.m"
                  }
#line 1581 "map.m"
              }
#line 1570 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1561 "map.m"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
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
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_43_38, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
            }
#line 118 "tree234.opt"
            {
#line 118 "tree234.opt"
              mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_50_50_44, &mercury__map__STATE_VARIABLE_A_51_51_45);
            }
#line 119 "tree234.opt"
            {
#line 119 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
            }
#line 120 "tree234.opt"
            {
#line 120 "tree234.opt"
              mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46, &mercury__map__STATE_VARIABLE_A_53_53_47);
            }
#line 121 "tree234.opt"
            {
#line 121 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
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
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_25_22, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
            }
#line 112 "tree234.opt"
            {
#line 112 "tree234.opt"
              mercury__map__reverse_map_2_4_p_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_31_31_27, &mercury__map__STATE_VARIABLE_A_32_32_28);
            }
#line 113 "tree234.opt"
            {
#line 113 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
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
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__V_58_58, mercury__map__V_59_59, mercury__map__T0_12_11, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
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

#line 1563 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1563 "map.m"
  MR_Word mercury__map__V_52_52,
#line 1563 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1563 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1563 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1563 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
          else
#line 1576 "map.m"
            {
#line 1576 "map.m"
              MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
              MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
              {
#line 1578 "map.m"
                mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
              }
#line 1579 "map.m"
              {
#line 1579 "map.m"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_93_95_48_5_p_0(mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1579 "map.m"
                return;
              }
#line 1576 "map.m"
            }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
#line 1570 "map.m"
            MR_Box mercury__map__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 1));
#line 1570 "map.m"
            MR_Box mercury__map__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 0));

#line 1570 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "map.m"
              {
#line 1571 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1573 "map.m"
                {
#line 1573 "map.m"
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
                }
#line 1574 "map.m"
                {
#line 1574 "map.m"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_93_95_48_5_p_0(mercury__map__V_47_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1574 "map.m"
                  return;
                }
#line 1571 "map.m"
              }
#line 1570 "map.m"
            else
#line 1581 "map.m"
              {
#line 1581 "map.m"
                MR_Word mercury__map__R_16;
#line 1581 "map.m"
                MR_Word mercury__map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1581 "map.m"
                MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 0));
#line 1581 "map.m"
                MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 1));
#line 1581 "map.m"
                MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

#line 1583 "map.m"
                {
#line 1583 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__V_50_50, mercury__map__Key2_42);
                }
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 1))
#line 1591 "map.m"
                  {
#line 1591 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1592 "map.m"
                    {
#line 1592 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1592 "map.m"
                    }
#line 1593 "map.m"
                    /* direct tailcall eliminated */
#line 1593 "map.m"
                    {
#line 1593 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1593 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1593 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1593 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1593 "map.m"
                    }
#line 1593 "map.m"
                    continue;
#line 1591 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 0))
#line 1585 "map.m"
                  {
#line 1585 "map.m"
                    MR_Box mercury__map__Value_17;
#line 1585 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1585 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1532 "map.m"
                    MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_52_52, (MR_Integer) 1)));

#line 1532 "map.m"
                    {
#line 1532 "map.m"
                      mercury__map__Value_17 = mercury__map__func_0(((MR_Box) mercury__map__V_52_52), mercury__map__V_49_49, mercury__map__Value2_43);
                    }
#line 1587 "map.m"
                    {
#line 1587 "map.m"
                      mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__V_50_50;
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_17;
#line 1587 "map.m"
                    }
#line 1587 "map.m"
                    {
#line 1587 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1587 "map.m"
                    }
#line 1588 "map.m"
                    /* direct tailcall eliminated */
#line 1588 "map.m"
                    {
#line 1588 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1588 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1588 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1588 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1588 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1588 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1588 "map.m"
                    }
#line 1588 "map.m"
                    continue;
#line 1585 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1596 "map.m"
                  {
#line 1596 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1597 "map.m"
                    {
#line 1597 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__V_21_21));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1597 "map.m"
                    }
#line 1598 "map.m"
                    /* direct tailcall eliminated */
#line 1598 "map.m"
                    {
#line 1598 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1598 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1598 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1598 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1598 "map.m"
                    }
#line 1598 "map.m"
                    continue;
#line 1596 "map.m"
                  }
#line 1581 "map.m"
              }
#line 1570 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1563 "map.m"
}

#line 1447 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(
#line 1447 "map.m"
  MR_Word mercury__map__V_36_36,
#line 1447 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1447 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1447 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
#line 1447 "map.m"
{
#line 1454 "map.m"
  while (MR_TRUE)
#line 1454 "map.m"
    {
#line 1454 "map.m"
      /* tailcall optimized into a loop */
#line 1454 "map.m"
      {
#line 1454 "map.m"
        MR_bool mercury__map__succeeded;

#line 1454 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
          else
#line 1458 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
        else
#line 1454 "map.m"
          {
#line 1454 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1454 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            else
#line 1461 "map.m"
              {
#line 1461 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 0));
#line 1461 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 1));
#line 1461 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1461 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1461 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1461 "map.m"
                MR_Word mercury__map__R_20;
#line 1461 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1462 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1462 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1463 "map.m"
                {
#line 1463 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1471 "map.m"
                  {
#line 1471 "map.m"
                    /* direct tailcall eliminated */
#line 1471 "map.m"
                    {
#line 1471 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;

#line 1471 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1471 "map.m"
                    }
#line 1471 "map.m"
                    continue;
#line 1471 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1465 "map.m"
                  {
#line 1465 "map.m"
                    MR_Box mercury__map__Value_21;
#line 1465 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1465 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1429 "map.m"
                    MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_36_36, (MR_Integer) 1)));

#line 1429 "map.m"
                    {
#line 1429 "map.m"
                      mercury__map__Value_21 = mercury__map__func_0(((MR_Box) mercury__map__V_36_36), mercury__map__Value1_15, mercury__map__Value2_18);
                    }
#line 1467 "map.m"
                    {
#line 1467 "map.m"
                      mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__Key1_14;
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_21;
#line 1467 "map.m"
                    }
#line 1467 "map.m"
                    {
#line 1467 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
#line 1467 "map.m"
                    }
#line 1468 "map.m"
                    /* direct tailcall eliminated */
#line 1468 "map.m"
                    {
#line 1468 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;
#line 1468 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1468 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1468 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22;
#line 1468 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1468 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1468 "map.m"
                    }
#line 1468 "map.m"
                    continue;
#line 1465 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1475 "map.m"
                  {
#line 1475 "map.m"
                    /* direct tailcall eliminated */
#line 1475 "map.m"
                    {
#line 1475 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1475 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1475 "map.m"
                    }
#line 1475 "map.m"
                    continue;
#line 1475 "map.m"
                  }
#line 1461 "map.m"
              }
#line 1454 "map.m"
          }
#line 1454 "map.m"
      }
#line 1454 "map.m"
      break;
#line 1454 "map.m"
    }
#line 1447 "map.m"
}

#line 231 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(
#line 231 "tree234.int"
  MR_Word mercury__map__V_64_64,
#line 231 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 231 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3)
#line 231 "tree234.int"
{
#line 285 "tree234.opt"
  {
#line 285 "tree234.opt"
    MR_bool mercury__map__succeeded;

#line 285 "tree234.opt"
    if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "tree234.opt"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "tree234.opt"
    else
#line 285 "tree234.opt"
    if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 300 "tree234.opt"
      {
#line 300 "tree234.opt"
        MR_Box mercury__map__K0_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 300 "tree234.opt"
        MR_Box mercury__map__V0_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 300 "tree234.opt"
        MR_Box mercury__map__K1_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 300 "tree234.opt"
        MR_Box mercury__map__V1_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 300 "tree234.opt"
        MR_Box mercury__map__K2_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 300 "tree234.opt"
        MR_Box mercury__map__V2_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 300 "tree234.opt"
        MR_Word mercury__map__Left0_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 300 "tree234.opt"
        MR_Word mercury__map__LMid0_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 300 "tree234.opt"
        MR_Word mercury__map__RMid0_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 300 "tree234.opt"
        MR_Word mercury__map__Right0_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 300 "tree234.opt"
        MR_Box mercury__map__W0_43_51;
#line 300 "tree234.opt"
        MR_Box mercury__map__W1_44_52;
#line 300 "tree234.opt"
        MR_Box mercury__map__W2_45_53;
#line 300 "tree234.opt"
        MR_Word mercury__map__Left_46_54;
#line 300 "tree234.opt"
        MR_Word mercury__map__LMid_47_55;
#line 300 "tree234.opt"
        MR_Word mercury__map__RMid_48_56;
#line 300 "tree234.opt"
        MR_Word mercury__map__Right_49_57;
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box);
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box);

#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W0_43_51 = mercury__map__func_0(((MR_Box) mercury__map__V_64_64), mercury__map__V0_34_40);
        }
#line 1402 "map.m"
        mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W1_44_52 = mercury__map__func_1(((MR_Box) mercury__map__V_64_64), mercury__map__V1_36_42);
        }
#line 1402 "map.m"
        mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W2_45_53 = mercury__map__func_2(((MR_Box) mercury__map__V_64_64), mercury__map__V2_38_44);
        }
#line 305 "tree234.opt"
        {
#line 305 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_39_45, &mercury__map__Left_46_54);
        }
#line 306 "tree234.opt"
        {
#line 306 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__LMid0_40_46, &mercury__map__LMid_47_55);
        }
#line 307 "tree234.opt"
        {
#line 307 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__RMid0_41_47, &mercury__map__RMid_48_56);
        }
#line 308 "tree234.opt"
        {
#line 308 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_42_48, &mercury__map__Right_49_57);
        }
#line 309 "tree234.opt"
        {
#line 309 "tree234.opt"
          MR_Word base;
#line 309 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 309 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 0) = mercury__map__K0_33_39;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 1) = mercury__map__W0_43_51;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 2) = mercury__map__K1_35_41;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 3) = mercury__map__W1_44_52;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 4) = mercury__map__K2_37_43;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 5) = mercury__map__W2_45_53;
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__Left_46_54));
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__LMid_47_55));
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__RMid_48_56));
#line 309 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__Right_49_57));
#line 309 "tree234.opt"
        }
#line 300 "tree234.opt"
      }
#line 285 "tree234.opt"
    else
#line 285 "tree234.opt"
    if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 292 "tree234.opt"
      {
#line 292 "tree234.opt"
        MR_Box mercury__map__K0_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 292 "tree234.opt"
        MR_Box mercury__map__V0_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 292 "tree234.opt"
        MR_Box mercury__map__K1_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 292 "tree234.opt"
        MR_Box mercury__map__V1_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 292 "tree234.opt"
        MR_Word mercury__map__Left0_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 292 "tree234.opt"
        MR_Word mercury__map__Middle0_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 292 "tree234.opt"
        MR_Word mercury__map__Right0_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 292 "tree234.opt"
        MR_Box mercury__map__W0_25_30;
#line 292 "tree234.opt"
        MR_Box mercury__map__W1_26_31;
#line 292 "tree234.opt"
        MR_Word mercury__map__Left_27_32;
#line 292 "tree234.opt"
        MR_Word mercury__map__Middle_28_33;
#line 292 "tree234.opt"
        MR_Word mercury__map__Right_29_34;
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box);

#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W0_25_30 = mercury__map__func_3(((MR_Box) mercury__map__V_64_64), mercury__map__V0_19_22);
        }
#line 1402 "map.m"
        mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));
#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W1_26_31 = mercury__map__func_4(((MR_Box) mercury__map__V_64_64), mercury__map__V1_21_24);
        }
#line 296 "tree234.opt"
        {
#line 296 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_22_25, &mercury__map__Left_27_32);
        }
#line 297 "tree234.opt"
        {
#line 297 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Middle0_23_26, &mercury__map__Middle_28_33);
        }
#line 298 "tree234.opt"
        {
#line 298 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_24_27, &mercury__map__Right_29_34);
        }
#line 299 "tree234.opt"
        {
#line 299 "tree234.opt"
          MR_Word base;
#line 299 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 299 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__map__K0_18_21;
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__map__W0_25_30;
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 2) = mercury__map__K1_20_23;
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 3) = mercury__map__W1_26_31;
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__Left_27_32));
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__Middle_28_33));
#line 299 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__Right_29_34));
#line 299 "tree234.opt"
        }
#line 292 "tree234.opt"
      }
#line 285 "tree234.opt"
    else
#line 286 "tree234.opt"
      {
#line 286 "tree234.opt"
        MR_Box mercury__map__K0_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 286 "tree234.opt"
        MR_Box mercury__map__V0_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 286 "tree234.opt"
        MR_Word mercury__map__Left0_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 286 "tree234.opt"
        MR_Word mercury__map__Right0_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 286 "tree234.opt"
        MR_Box mercury__map__W0_12_14;
#line 286 "tree234.opt"
        MR_Word mercury__map__Left_13_15;
#line 286 "tree234.opt"
        MR_Word mercury__map__Right_14_16;
#line 1402 "map.m"
        MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_64_64, (MR_Integer) 1)));

#line 1402 "map.m"
        {
#line 1402 "map.m"
          mercury__map__W0_12_14 = mercury__map__func_5(((MR_Box) mercury__map__V_64_64), mercury__map__V0_9_9);
        }
#line 289 "tree234.opt"
        {
#line 289 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Left0_10_10, &mercury__map__Left_13_15);
        }
#line 290 "tree234.opt"
        {
#line 290 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__V_64_64, mercury__map__Right0_11_11, &mercury__map__Right_14_16);
        }
#line 291 "tree234.opt"
        {
#line 291 "tree234.opt"
          MR_Word base;
#line 291 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 291 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 291 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__K0_8_8;
#line 291 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__map__W0_12_14;
#line 291 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__Left_13_15));
#line 291 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__Right_14_16));
#line 291 "tree234.opt"
        }
#line 286 "tree234.opt"
      }
#line 285 "tree234.opt"
  }
#line 231 "tree234.int"
}

#line 212 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
#line 212 "tree234.int"
  MR_Word mercury__map__V_65_65,
#line 212 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 212 "tree234.int"
  MR_Word * mercury__map__HeadVar__3_3)
#line 212 "tree234.int"
{
#line 250 "tree234.opt"
  {
#line 250 "tree234.opt"
    MR_bool mercury__map__succeeded;

#line 250 "tree234.opt"
    if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "tree234.opt"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "tree234.opt"
    else
#line 250 "tree234.opt"
    if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 265 "tree234.opt"
      {
#line 265 "tree234.opt"
        MR_Box mercury__map__K0_33_39 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 265 "tree234.opt"
        MR_Box mercury__map__V0_34_40 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 265 "tree234.opt"
        MR_Box mercury__map__K1_35_41 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 265 "tree234.opt"
        MR_Box mercury__map__V1_36_42 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 265 "tree234.opt"
        MR_Box mercury__map__K2_37_43 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 265 "tree234.opt"
        MR_Box mercury__map__V2_38_44 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 265 "tree234.opt"
        MR_Word mercury__map__Left0_39_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 265 "tree234.opt"
        MR_Word mercury__map__LMid0_40_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 265 "tree234.opt"
        MR_Word mercury__map__RMid0_41_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 265 "tree234.opt"
        MR_Word mercury__map__Right0_42_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 265 "tree234.opt"
        MR_Box mercury__map__W0_43_51;
#line 265 "tree234.opt"
        MR_Box mercury__map__W1_44_52;
#line 265 "tree234.opt"
        MR_Box mercury__map__W2_45_53;
#line 265 "tree234.opt"
        MR_Word mercury__map__Left_46_54;
#line 265 "tree234.opt"
        MR_Word mercury__map__LMid_47_55;
#line 265 "tree234.opt"
        MR_Word mercury__map__RMid_48_56;
#line 265 "tree234.opt"
        MR_Word mercury__map__Right_49_57;
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box);
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box);

#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W0_43_51 = mercury__map__func_0(((MR_Box) mercury__map__V_65_65), mercury__map__K0_33_39, mercury__map__V0_34_40);
        }
#line 1395 "map.m"
        mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W1_44_52 = mercury__map__func_1(((MR_Box) mercury__map__V_65_65), mercury__map__K1_35_41, mercury__map__V1_36_42);
        }
#line 1395 "map.m"
        mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W2_45_53 = mercury__map__func_2(((MR_Box) mercury__map__V_65_65), mercury__map__K2_37_43, mercury__map__V2_38_44);
        }
#line 270 "tree234.opt"
        {
#line 270 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_39_45, &mercury__map__Left_46_54);
        }
#line 271 "tree234.opt"
        {
#line 271 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__LMid0_40_46, &mercury__map__LMid_47_55);
        }
#line 272 "tree234.opt"
        {
#line 272 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__RMid0_41_47, &mercury__map__RMid_48_56);
        }
#line 273 "tree234.opt"
        {
#line 273 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_42_48, &mercury__map__Right_49_57);
        }
#line 274 "tree234.opt"
        {
#line 274 "tree234.opt"
          MR_Word base;
#line 274 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
#line 274 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 0) = mercury__map__K0_33_39;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 1) = mercury__map__W0_43_51;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 2) = mercury__map__K1_35_41;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 3) = mercury__map__W1_44_52;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 4) = mercury__map__K2_37_43;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 5) = mercury__map__W2_45_53;
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mercury__map__Left_46_54));
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__map__LMid_47_55));
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (mercury__map__RMid_48_56));
#line 274 "tree234.opt"
          MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (mercury__map__Right_49_57));
#line 274 "tree234.opt"
        }
#line 265 "tree234.opt"
      }
#line 250 "tree234.opt"
    else
#line 250 "tree234.opt"
    if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 257 "tree234.opt"
      {
#line 257 "tree234.opt"
        MR_Box mercury__map__K0_18_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 257 "tree234.opt"
        MR_Box mercury__map__V0_19_22 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 257 "tree234.opt"
        MR_Box mercury__map__K1_20_23 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 257 "tree234.opt"
        MR_Box mercury__map__V1_21_24 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 257 "tree234.opt"
        MR_Word mercury__map__Left0_22_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 257 "tree234.opt"
        MR_Word mercury__map__Middle0_23_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 257 "tree234.opt"
        MR_Word mercury__map__Right0_24_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 257 "tree234.opt"
        MR_Box mercury__map__W0_25_30;
#line 257 "tree234.opt"
        MR_Box mercury__map__W1_26_31;
#line 257 "tree234.opt"
        MR_Word mercury__map__Left_27_32;
#line 257 "tree234.opt"
        MR_Word mercury__map__Middle_28_33;
#line 257 "tree234.opt"
        MR_Word mercury__map__Right_29_34;
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box);

#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W0_25_30 = mercury__map__func_3(((MR_Box) mercury__map__V_65_65), mercury__map__K0_18_21, mercury__map__V0_19_22);
        }
#line 1395 "map.m"
        mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));
#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W1_26_31 = mercury__map__func_4(((MR_Box) mercury__map__V_65_65), mercury__map__K1_20_23, mercury__map__V1_21_24);
        }
#line 261 "tree234.opt"
        {
#line 261 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_22_25, &mercury__map__Left_27_32);
        }
#line 262 "tree234.opt"
        {
#line 262 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Middle0_23_26, &mercury__map__Middle_28_33);
        }
#line 263 "tree234.opt"
        {
#line 263 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_24_27, &mercury__map__Right_29_34);
        }
#line 264 "tree234.opt"
        {
#line 264 "tree234.opt"
          MR_Word base;
#line 264 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 264 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__map__K0_18_21;
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__map__W0_25_30;
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 2) = mercury__map__K1_20_23;
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 3) = mercury__map__W1_26_31;
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (mercury__map__Left_27_32));
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__map__Middle_28_33));
#line 264 "tree234.opt"
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (mercury__map__Right_29_34));
#line 264 "tree234.opt"
        }
#line 257 "tree234.opt"
      }
#line 250 "tree234.opt"
    else
#line 251 "tree234.opt"
      {
#line 251 "tree234.opt"
        MR_Box mercury__map__K0_8_8 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 251 "tree234.opt"
        MR_Box mercury__map__V0_9_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 251 "tree234.opt"
        MR_Word mercury__map__Left0_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 251 "tree234.opt"
        MR_Word mercury__map__Right0_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 251 "tree234.opt"
        MR_Box mercury__map__W0_12_14;
#line 251 "tree234.opt"
        MR_Word mercury__map__Left_13_15;
#line 251 "tree234.opt"
        MR_Word mercury__map__Right_14_16;
#line 1395 "map.m"
        MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_65_65, (MR_Integer) 1)));

#line 1395 "map.m"
        {
#line 1395 "map.m"
          mercury__map__W0_12_14 = mercury__map__func_5(((MR_Box) mercury__map__V_65_65), mercury__map__K0_8_8, mercury__map__V0_9_9);
        }
#line 254 "tree234.opt"
        {
#line 254 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Left0_10_10, &mercury__map__Left_13_15);
        }
#line 255 "tree234.opt"
        {
#line 255 "tree234.opt"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__V_65_65, mercury__map__Right0_11_11, &mercury__map__Right_14_16);
        }
#line 256 "tree234.opt"
        {
#line 256 "tree234.opt"
          MR_Word base;
#line 256 "tree234.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 256 "tree234.opt"
          *mercury__map__HeadVar__3_3 = base;
#line 256 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__K0_8_8;
#line 256 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__map__W0_12_14;
#line 256 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__map__Left_13_15));
#line 256 "tree234.opt"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__map__Right_14_16));
#line 256 "tree234.opt"
        }
#line 251 "tree234.opt"
      }
#line 250 "tree234.opt"
  }
#line 212 "tree234.int"
}

#line 120 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 120 "tree234.int"
  MR_Word mercury__map__V_56_56,
#line 120 "tree234.int"
  MR_Word mercury__map__HeadVar__2_2,
#line 120 "tree234.int"
  MR_Box mercury__map__HeadVar__3_3,
#line 120 "tree234.int"
  MR_Box * mercury__map__HeadVar__4_4)
#line 120 "tree234.int"
{
#line 198 "tree234.opt"
  while (MR_TRUE)
#line 198 "tree234.opt"
    {
#line 198 "tree234.opt"
      /* tailcall optimized into a loop */
#line 198 "tree234.opt"
      {
#line 198 "tree234.opt"
        MR_bool mercury__map__succeeded;

#line 198 "tree234.opt"
        if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "tree234.opt"
          *mercury__map__HeadVar__4_4 = mercury__map__HeadVar__3_3;
#line 198 "tree234.opt"
        else
#line 198 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 210 "tree234.opt"
          {
#line 210 "tree234.opt"
            MR_Box mercury__map__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 210 "tree234.opt"
            MR_Box mercury__map__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 210 "tree234.opt"
            MR_Box mercury__map__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 210 "tree234.opt"
            MR_Box mercury__map__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 210 "tree234.opt"
            MR_Box mercury__map__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 4));
#line 210 "tree234.opt"
            MR_Box mercury__map__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 5));
#line 210 "tree234.opt"
            MR_Word mercury__map__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 210 "tree234.opt"
            MR_Word mercury__map__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 7)));
#line 210 "tree234.opt"
            MR_Word mercury__map__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 8)));
#line 210 "tree234.opt"
            MR_Word mercury__map__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__map__HeadVar__2_2, (MR_Integer) 9)));
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_50_50_44;
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_51_51_45;
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_52_52_46;
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_53_53_47;
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_54_54_48;
#line 210 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_55_55_49;
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 211 "tree234.opt"
            {
#line 211 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T3_46_41, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
            }
#line 1374 "map.m"
            mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_51_51_45 = mercury__map__func_0(((MR_Box) mercury__map__V_56_56), mercury__map__K2_41_36, mercury__map__V2_42_37, mercury__map__STATE_VARIABLE_A_50_50_44);
            }
#line 213 "tree234.opt"
            {
#line 213 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
            }
#line 1374 "map.m"
            mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_53_53_47 = mercury__map__func_1(((MR_Box) mercury__map__V_56_56), mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46);
            }
#line 215 "tree234.opt"
            {
#line 215 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
            }
#line 1374 "map.m"
            mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_55_55_49 = mercury__map__func_2(((MR_Box) mercury__map__V_56_56), mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_54_54_48);
            }
#line 217 "tree234.opt"
            /* direct tailcall eliminated */
#line 217 "tree234.opt"
            {
#line 217 "tree234.opt"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_43_38;
#line 217 "tree234.opt"
              MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_55_55_49;

#line 217 "tree234.opt"
              mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 217 "tree234.opt"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 217 "tree234.opt"
            }
#line 217 "tree234.opt"
            continue;
#line 210 "tree234.opt"
          }
#line 198 "tree234.opt"
        else
#line 198 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__map__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 204 "tree234.opt"
          {
#line 204 "tree234.opt"
            MR_Box mercury__map__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 204 "tree234.opt"
            MR_Box mercury__map__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 204 "tree234.opt"
            MR_Box mercury__map__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 2));
#line 204 "tree234.opt"
            MR_Box mercury__map__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 3));
#line 204 "tree234.opt"
            MR_Word mercury__map__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "tree234.opt"
            MR_Word mercury__map__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "tree234.opt"
            MR_Word mercury__map__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__map__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_31_31_27;
#line 204 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_32_32_28;
#line 204 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_33_33_29;
#line 204 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_34_34_30;
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 205 "tree234.opt"
            {
#line 205 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_27_24, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
            }
#line 1374 "map.m"
            mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_32_32_28 = mercury__map__func_3(((MR_Box) mercury__map__V_56_56), mercury__map__K1_23_20, mercury__map__V1_24_21, mercury__map__STATE_VARIABLE_A_31_31_27);
            }
#line 207 "tree234.opt"
            {
#line 207 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
            }
#line 1374 "map.m"
            mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_34_34_30 = mercury__map__func_4(((MR_Box) mercury__map__V_56_56), mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_33_33_29);
            }
#line 209 "tree234.opt"
            /* direct tailcall eliminated */
#line 209 "tree234.opt"
            {
#line 209 "tree234.opt"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_25_22;
#line 209 "tree234.opt"
              MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_34_34_30;

#line 209 "tree234.opt"
              mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 209 "tree234.opt"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 209 "tree234.opt"
            }
#line 209 "tree234.opt"
            continue;
#line 204 "tree234.opt"
          }
#line 198 "tree234.opt"
        else
#line 200 "tree234.opt"
          {
#line 200 "tree234.opt"
            MR_Box mercury__map__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 200 "tree234.opt"
            MR_Box mercury__map__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1));
#line 200 "tree234.opt"
            MR_Word mercury__map__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "tree234.opt"
            MR_Word mercury__map__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_17_17_15;
#line 200 "tree234.opt"
            MR_Box mercury__map__STATE_VARIABLE_A_18_18_16;
#line 1374 "map.m"
            MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 201 "tree234.opt"
            {
#line 201 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_13_12, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
            }
#line 1374 "map.m"
            mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1374 "map.m"
            {
#line 1374 "map.m"
              mercury__map__STATE_VARIABLE_A_18_18_16 = mercury__map__func_5(((MR_Box) mercury__map__V_56_56), mercury__map__K_10_9, mercury__map__V_11_10, mercury__map__STATE_VARIABLE_A_17_17_15);
            }
#line 203 "tree234.opt"
            /* direct tailcall eliminated */
#line 203 "tree234.opt"
            {
#line 203 "tree234.opt"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__T0_12_11;
#line 203 "tree234.opt"
              MR_Box mercury__map__HeadVar__3__tmp_copy_3 = mercury__map__STATE_VARIABLE_A_18_18_16;

#line 203 "tree234.opt"
              mercury__map__HeadVar__3_3 = mercury__map__HeadVar__3__tmp_copy_3;
#line 203 "tree234.opt"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 203 "tree234.opt"
            }
#line 203 "tree234.opt"
            continue;
#line 200 "tree234.opt"
          }
#line 198 "tree234.opt"
      }
#line 198 "tree234.opt"
      break;
#line 198 "tree234.opt"
    }
#line 120 "tree234.int"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
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
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 117 "tree234.opt"
            {
#line 117 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_43_38, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_50_50_44);
            }
#line 1346 "map.m"
            mercury__map__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
              mercury__map__STATE_VARIABLE_A_51_51_45 = mercury__map__func_0(((MR_Box) mercury__map__V_56_56), mercury__map__K0_37_32, mercury__map__V0_38_33, mercury__map__STATE_VARIABLE_A_50_50_44);
            }
#line 119 "tree234.opt"
            {
#line 119 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_44_39, mercury__map__STATE_VARIABLE_A_51_51_45, &mercury__map__STATE_VARIABLE_A_52_52_46);
            }
#line 1346 "map.m"
            mercury__map__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
              mercury__map__STATE_VARIABLE_A_53_53_47 = mercury__map__func_1(((MR_Box) mercury__map__V_56_56), mercury__map__K1_39_34, mercury__map__V1_40_35, mercury__map__STATE_VARIABLE_A_52_52_46);
            }
#line 121 "tree234.opt"
            {
#line 121 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T2_45_40, mercury__map__STATE_VARIABLE_A_53_53_47, &mercury__map__STATE_VARIABLE_A_54_54_48);
            }
#line 1346 "map.m"
            mercury__map__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
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
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_4)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 111 "tree234.opt"
            {
#line 111 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_25_22, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_31_31_27);
            }
#line 1346 "map.m"
            mercury__map__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
              mercury__map__STATE_VARIABLE_A_32_32_28 = mercury__map__func_3(((MR_Box) mercury__map__V_56_56), mercury__map__K0_21_18, mercury__map__V0_22_19, mercury__map__STATE_VARIABLE_A_31_31_27);
            }
#line 113 "tree234.opt"
            {
#line 113 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T1_26_23, mercury__map__STATE_VARIABLE_A_32_32_28, &mercury__map__STATE_VARIABLE_A_33_33_29);
            }
#line 1346 "map.m"
            mercury__map__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
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
#line 1346 "map.m"
            MR_Box MR_CALL (* mercury__map__func_5)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 107 "tree234.opt"
            {
#line 107 "tree234.opt"
              mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__V_56_56, mercury__map__T0_12_11, mercury__map__HeadVar__3_3, &mercury__map__STATE_VARIABLE_A_17_17_15);
            }
#line 1346 "map.m"
            mercury__map__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__V_56_56, (MR_Integer) 1)));
#line 1346 "map.m"
            {
#line 1346 "map.m"
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

#line 1559 "map.m"
void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(
#line 1559 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1559 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1559 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1559 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1559 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1559 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1573 "map.m"
            {
#line 1573 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
            }
#line 1574 "map.m"
            /* direct tailcall eliminated */
#line 1574 "map.m"
            {
#line 1574 "map.m"
              MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__AssocTail1_12;
#line 1574 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1574 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1574 "map.m"
              mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1574 "map.m"
            }
#line 1574 "map.m"
            continue;
#line 1570 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1559 "map.m"
}

#line 1557 "map.m"
MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(
#line 1557 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1557 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1557 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1557 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1557 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1557 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          {
#line 1570 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1570 "map.m"
          }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__AssocTail1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1573 "map.m"
            {
#line 1573 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
            }
#line 1574 "map.m"
            /* direct tailcall eliminated */
#line 1574 "map.m"
            {
#line 1574 "map.m"
              MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__AssocTail1_12;
#line 1574 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1574 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1574 "map.m"
              mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1574 "map.m"
            }
#line 1574 "map.m"
            continue;
#line 1570 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1557 "map.m"
}

#line 1555 "map.m"
void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(
#line 1555 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1555 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1555 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1555 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1555 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1555 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
          *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
        else
#line 1576 "map.m"
          {
#line 1576 "map.m"
            MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
            MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
            {
#line 1578 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
            }
#line 1579 "map.m"
            /* direct tailcall eliminated */
#line 1579 "map.m"
            {
#line 1579 "map.m"
              MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_15;
#line 1579 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1579 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1579 "map.m"
              mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1579 "map.m"
            }
#line 1579 "map.m"
            continue;
#line 1576 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1555 "map.m"
}

#line 1553 "map.m"
MR_bool MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(
#line 1553 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1553 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1553 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1553 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1553 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1553 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
          {
#line 1568 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1568 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1568 "map.m"
          }
#line 1570 "map.m"
        else
#line 1576 "map.m"
          {
#line 1576 "map.m"
            MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
            MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
            {
#line 1578 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
            }
#line 1579 "map.m"
            /* direct tailcall eliminated */
#line 1579 "map.m"
            {
#line 1579 "map.m"
              MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_15;
#line 1579 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1579 "map.m"
              mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1579 "map.m"
              mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1579 "map.m"
            }
#line 1579 "map.m"
            continue;
#line 1576 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1553 "map.m"
}

#line 1195 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0(
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1195 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1195 "map.m"
  MR_Word * mercury__map__L_3)
#line 1195 "map.m"
{
#line 1197 "map.m"
  while (MR_TRUE)
#line 1197 "map.m"
    {
#line 1197 "map.m"
      /* tailcall optimized into a loop */
#line 1197 "map.m"
      {
#line 1197 "map.m"
        MR_bool mercury__map__succeeded;

#line 1197 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "map.m"
          *mercury__map__L_3 = mercury__map__HeadVar__2_2;
#line 1197 "map.m"
        else
#line 1198 "map.m"
          {
#line 1198 "map.m"
            MR_Box mercury__map__X_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1198 "map.m"
            MR_Word mercury__map__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1198 "map.m"
            MR_Word mercury__map__V_9_9;

#line 1199 "map.m"
            {
#line 1199 "map.m"
              mercury__map__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__V_9_9, 0) = mercury__map__X_5;
#line 1199 "map.m"
              MR_hl_field(MR_mktag(1), mercury__map__V_9_9, 1) = ((MR_Box) (mercury__map__HeadVar__2_2));
#line 1199 "map.m"
            }
#line 1199 "map.m"
            /* direct tailcall eliminated */
#line 1199 "map.m"
            {
#line 1199 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Xs_6;
#line 1199 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__V_9_9;

#line 1199 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1199 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1199 "map.m"
            }
#line 1199 "map.m"
            continue;
#line 1198 "map.m"
          }
#line 1197 "map.m"
      }
#line 1197 "map.m"
      break;
#line 1197 "map.m"
    }
#line 1195 "map.m"
}

#line 1170 "map.m"
static void MR_CALL 
mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(
#line 1170 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 1170 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1170 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1170 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevPairs_0_3,
#line 1170 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevPairs_4,
#line 1170 "map.m"
  MR_Word * mercury__map__HeadVar__5_5)
#line 1170 "map.m"
{
#line 1174 "map.m"
  while (MR_TRUE)
#line 1174 "map.m"
    {
#line 1174 "map.m"
      /* tailcall optimized into a loop */
#line 1174 "map.m"
      {
#line 1174 "map.m"
        MR_bool mercury__map__succeeded;

#line 1174 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "map.m"
          {
#line 1174 "map.m"
            *mercury__map__HeadVar__5_5 = mercury__map__HeadVar__2_2;
#line 1174 "map.m"
            *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
#line 1174 "map.m"
          }
#line 1174 "map.m"
        else
#line 1174 "map.m"
          {
#line 1174 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1174 "map.m"
            MR_Box mercury__map__V_35_35 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 1174 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1175 "map.m"
              {
#line 1175 "map.m"
                *mercury__map__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "map.m"
                *mercury__map__STATE_VARIABLE_RevPairs_4 = mercury__map__STATE_VARIABLE_RevPairs_0_3;
#line 1175 "map.m"
              }
#line 1174 "map.m"
            else
#line 1177 "map.m"
              {
#line 1177 "map.m"
                MR_Word mercury__map__Pair0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0)));
#line 1177 "map.m"
                MR_Word mercury__map__Pairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 1177 "map.m"
                MR_Box mercury__map__Key0_21 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 0));
#line 1177 "map.m"
                MR_Word mercury__map__Result_23;
#line 1178 "map.m"
                MR_Box mercury__map__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__map__Pair0_17, (MR_Integer) 1));

#line 1179 "map.m"
                {
#line 1179 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_32, &mercury__map__Result_23, mercury__map__V_35_35, mercury__map__Key0_21);
                }
#line 1184 "map.m"
                if ((mercury__map__Result_23 == (MR_Integer) 1))
#line 1182 "map.m"
                  {
#line 1182 "map.m"
                    /* direct tailcall eliminated */
#line 1182 "map.m"
                    {
#line 1182 "map.m"
                      MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_34_34;

#line 1182 "map.m"
                      mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1182 "map.m"
                    }
#line 1182 "map.m"
                    continue;
#line 1182 "map.m"
                  }
#line 1184 "map.m"
                else
#line 1184 "map.m"
                if ((mercury__map__Result_23 == (MR_Integer) 0))
#line 1185 "map.m"
                  {
#line 1185 "map.m"
                    /* direct tailcall eliminated */
#line 1185 "map.m"
                    {
#line 1185 "map.m"
                      MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_34_34;
#line 1185 "map.m"
                      MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Pairs0_18;

#line 1185 "map.m"
                      mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1185 "map.m"
                      mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1185 "map.m"
                    }
#line 1185 "map.m"
                    continue;
#line 1185 "map.m"
                  }
#line 1184 "map.m"
                else
#line 1189 "map.m"
                  {
#line 1189 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevPairs_26_26;

#line 1190 "map.m"
                    {
#line 1190 "map.m"
                      mercury__map__STATE_VARIABLE_RevPairs_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 0) = ((MR_Box) (mercury__map__Pair0_17));
#line 1190 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevPairs_26_26, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevPairs_0_3));
#line 1190 "map.m"
                    }
#line 1191 "map.m"
                    /* direct tailcall eliminated */
#line 1191 "map.m"
                    {
#line 1191 "map.m"
                      MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Pairs0_18;
#line 1191 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevPairs_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_RevPairs_26_26;

#line 1191 "map.m"
                      mercury__map__STATE_VARIABLE_RevPairs_0_3 = mercury__map__STATE_VARIABLE_RevPairs_0__tmp_copy_3;
#line 1191 "map.m"
                      mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1191 "map.m"
                    }
#line 1191 "map.m"
                    continue;
#line 1189 "map.m"
                  }
#line 1177 "map.m"
              }
#line 1174 "map.m"
          }
#line 1174 "map.m"
      }
#line 1174 "map.m"
      break;
#line 1174 "map.m"
    }
#line 1170 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_12_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
#line 944 "map.m"
          return;
        }
#line 944 "map.m"
      }
#line 943 "map.m"
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
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
#line 944 "map.m"
          return;
        }
#line 944 "map.m"
      }
#line 943 "map.m"
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
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__V_6;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_14;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_14);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_14;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        }
#line 944 "map.m"
      }
#line 943 "map.m"
    return mercury__map__V_6;
#line 943 "map.m"
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
#line 938 "map.m"
  {
#line 938 "map.m"
    MR_bool mercury__map__succeeded;
#line 938 "map.m"
    MR_Box mercury__map__V_6;
#line 938 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_12;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_12;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__K_5)));
        }
#line 944 "map.m"
      }
#line 938 "map.m"
    return mercury__map__V_6;
#line 938 "map.m"
  }
#line 82 "map.m"
}

#line 135 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 135 "map.m"
  MR_Word mercury__map__V_14_14,
#line 135 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 135 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 135 "map.m"
  MR_Word mercury__map__K_5,
#line 135 "map.m"
  MR_Box mercury__map__V_6,
#line 135 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 135 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 135 "map.m"
{
#line 993 "map.m"
  {
#line 993 "map.m"
    MR_bool mercury__map__succeeded;
#line 993 "map.m"
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_9;

#line 993 "map.m"
    {
#line 993 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_8, &mercury__map__conv0_STATE_VARIABLE_Map_9);
    }
#line 993 "map.m"
    if (mercury__map__succeeded)
#line 993 "map.m"
      {
#line 993 "map.m"
        *mercury__map__STATE_VARIABLE_Map_9 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_9;
#line 993 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 993 "map.m"
      }
#line 993 "map.m"
    return mercury__map__succeeded;
#line 993 "map.m"
  }
#line 135 "map.m"
}

#line 135 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 135 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 135 "map.m"
  MR_Integer mercury__map__K_5,
#line 135 "map.m"
  MR_Box mercury__map__V_6,
#line 135 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 135 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 135 "map.m"
{
#line 993 "map.m"
  {
#line 993 "map.m"
    MR_bool mercury__map__succeeded;
#line 993 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 993 "map.m"
    {
#line 993 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 993 "map.m"
    return mercury__map__succeeded;
#line 993 "map.m"
  }
#line 135 "map.m"
}

#line 141 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 141 "map.m"
  MR_Word mercury__map__V_17_17,
#line 141 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 141 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 141 "map.m"
  MR_Word mercury__map__K_5,
#line 141 "map.m"
  MR_Box mercury__map__V_6,
#line 141 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 141 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 141 "map.m"
{
#line 1001 "map.m"
  {
#line 1001 "map.m"
    MR_bool mercury__map__succeeded;
#line 1001 "map.m"
    MR_Word mercury__map__NewMap_8;
#line 999 "map.m"
    MR_Word mercury__map__conv0_NewMap_8;

#line 999 "map.m"
    {
#line 999 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__conv0_NewMap_8);
    }
#line 999 "map.m"
    if (mercury__map__succeeded)
#line 999 "map.m"
      {
#line 999 "map.m"
        mercury__map__NewMap_8 = (MR_Word) mercury__map__conv0_NewMap_8;
#line 999 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 999 "map.m"
      }
#line 1001 "map.m"
    if (mercury__map__succeeded)
#line 1000 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1001 "map.m"
    else
#line 1002 "map.m"
      {
#line 1002 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1002 "map.m"
        {
#line 1002 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
#line 1002 "map.m"
          return;
        }
#line 1002 "map.m"
      }
#line 1001 "map.m"
  }
#line 141 "map.m"
}

#line 141 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 141 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 141 "map.m"
  MR_Integer mercury__map__K_5,
#line 141 "map.m"
  MR_Box mercury__map__V_6,
#line 141 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 141 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 141 "map.m"
{
#line 1001 "map.m"
  {
#line 1001 "map.m"
    MR_bool mercury__map__succeeded;
#line 1001 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1001 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 999 "map.m"
    {
#line 999 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1001 "map.m"
    if (mercury__map__succeeded)
#line 1000 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1001 "map.m"
    else
#line 1002 "map.m"
      {
#line 1002 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1002 "map.m"
        {
#line 1002 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_5)));
#line 1002 "map.m"
          return;
        }
#line 1002 "map.m"
      }
#line 1001 "map.m"
  }
#line 141 "map.m"
}

#line 207 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 207 "map.m"
  MR_Word mercury__map__V_14_14,
#line 207 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 207 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 207 "map.m"
  MR_Word mercury__map__K_5,
#line 207 "map.m"
  MR_Box mercury__map__V_6,
#line 207 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 207 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 207 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_14_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 1082 "map.m"
      return;
    }
#line 1082 "map.m"
  }
#line 207 "map.m"
}

#line 207 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 207 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 207 "map.m"
  MR_Integer mercury__map__K_5,
#line 207 "map.m"
  MR_Box mercury__map__V_6,
#line 207 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 207 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 207 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;
#line 1082 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 1082 "map.m"
      return;
    }
#line 1082 "map.m"
  }
#line 207 "map.m"
}

#line 172 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 172 "map.m"
  MR_Word mercury__map__V_14_14,
#line 172 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 172 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 172 "map.m"
  MR_Word mercury__map__K_5,
#line 172 "map.m"
  MR_Box mercury__map__V_6,
#line 172 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 172 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 172 "map.m"
{
#line 1049 "map.m"
  {
#line 1049 "map.m"
    MR_bool mercury__map__succeeded;

#line 1049 "map.m"
    {
#line 1049 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_14_14, mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 1049 "map.m"
    return mercury__map__succeeded;
#line 1049 "map.m"
  }
#line 172 "map.m"
}

#line 172 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 172 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 172 "map.m"
  MR_Integer mercury__map__K_5,
#line 172 "map.m"
  MR_Box mercury__map__V_6,
#line 172 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 172 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 172 "map.m"
{
#line 1049 "map.m"
  {
#line 1049 "map.m"
    MR_bool mercury__map__succeeded;

#line 1049 "map.m"
    {
#line 1049 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 1049 "map.m"
    return mercury__map__succeeded;
#line 1049 "map.m"
  }
#line 172 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 178 "map.m"
  MR_Word mercury__map__V_17_17,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Word mercury__map__K_5,
#line 178 "map.m"
  MR_Box mercury__map__V_6,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 178 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_17_17, mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
#line 1058 "map.m"
          return;
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
  }
#line 178 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Integer mercury__map__K_5,
#line 178 "map.m"
  MR_Box mercury__map__V_6,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 178 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__K_5)));
#line 1058 "map.m"
          return;
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
  }
#line 178 "map.m"
}

#line 186 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_5_p_0(
#line 186 "map.m"
  MR_Word mercury__map__V_16_16,
#line 186 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 186 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 186 "map.m"
  MR_Word mercury__map__K_6,
#line 186 "map.m"
  MR_Box mercury__map__V_7,
#line 186 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 186 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 186 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 186 "map.m"
{
#line 1062 "map.m"
  {
#line 1062 "map.m"
    MR_bool mercury__map__succeeded;
#line 1062 "map.m"
    MR_Word mercury__map__conv0_STATE_VARIABLE_Map_11;

#line 1062 "map.m"
    {
#line 1062 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, (MR_Word) mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__conv0_STATE_VARIABLE_Map_11);
    }
#line 1062 "map.m"
    *mercury__map__STATE_VARIABLE_Map_11 = (MR_Word) mercury__map__conv0_STATE_VARIABLE_Map_11;
#line 1062 "map.m"
  }
#line 186 "map.m"
}

#line 186 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_5_p_0(
#line 186 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 186 "map.m"
  MR_Integer mercury__map__K_6,
#line 186 "map.m"
  MR_Box mercury__map__V_7,
#line 186 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 186 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 186 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 186 "map.m"
{
#line 1062 "map.m"
  {
#line 1062 "map.m"
    MR_bool mercury__map__succeeded;
#line 1062 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 1062 "map.m"
    {
#line 1062 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_6)), mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
#line 1062 "map.m"
      return;
    }
#line 1062 "map.m"
  }
#line 186 "map.m"
}

#line 309 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 309 "map.m"
  MR_Word mercury__map__V_10_10,
#line 309 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 309 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 309 "map.m"
  MR_Word mercury__map__M1_4,
#line 309 "map.m"
  MR_Word mercury__map__M2_5)
#line 309 "map.m"
{
#line 1263 "map.m"
  {
#line 1263 "map.m"
    MR_bool mercury__map__succeeded;
#line 1263 "map.m"
    MR_Word mercury__map__M3_6;
#line 1263 "map.m"
    MR_Word mercury__map__AssocList_14;
#line 1263 "map.m"
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
#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_14, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1263 "map.m"
    return mercury__map__M3_6;
#line 1263 "map.m"
  }
#line 309 "map.m"
}

#line 310 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 310 "map.m"
  MR_Word mercury__map__V_11_11,
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 310 "map.m"
  MR_Word mercury__map__Map0_4,
#line 310 "map.m"
  MR_Word mercury__map__Map1_5,
#line 310 "map.m"
  MR_Word * mercury__map__Map_6)
#line 310 "map.m"
{
#line 1265 "map.m"
  {
#line 1265 "map.m"
    MR_bool mercury__map__succeeded;
#line 1265 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1265 "map.m"
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
#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_11_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
#line 1267 "map.m"
      return;
    }
#line 1265 "map.m"
  }
#line 310 "map.m"
}

#line 325 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 325 "map.m"
  MR_Word mercury__map__V_10_10,
#line 325 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 325 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 325 "map.m"
  MR_Word mercury__map__M1_4,
#line 325 "map.m"
  MR_Word mercury__map__S_5)
#line 325 "map.m"
{
#line 1301 "map.m"
  {
#line 1301 "map.m"
    MR_bool mercury__map__succeeded;
#line 1301 "map.m"
    MR_Word mercury__map__M2_6;
#line 1301 "map.m"
    MR_Word mercury__map__Keys_14 = (MR_Word) mercury__map__S_5;
#line 1301 "map.m"
    MR_Word mercury__map__NewMap0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1309 "map.m"
    {
#line 1309 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_14, mercury__map__M1_4, mercury__map__NewMap0_15, &mercury__map__M2_6);
    }
#line 1301 "map.m"
    return mercury__map__M2_6;
#line 1301 "map.m"
  }
#line 325 "map.m"
}

#line 326 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 326 "map.m"
  MR_Word mercury__map__V_12_12,
#line 326 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 326 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 326 "map.m"
  MR_Word mercury__map__Original_4,
#line 326 "map.m"
  MR_Word mercury__map__KeySet_5,
#line 326 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 326 "map.m"
{
#line 1306 "map.m"
  {
#line 1306 "map.m"
    MR_bool mercury__map__succeeded;
#line 1306 "map.m"
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
#line 1306 "map.m"
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1309 "map.m"
    {
#line 1309 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_12_12, mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
#line 1309 "map.m"
      return;
    }
#line 1306 "map.m"
  }
#line 326 "map.m"
}

#line 331 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 331 "map.m"
  MR_Word mercury__map__V_10_10,
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 331 "map.m"
  MR_Word mercury__map__M1_4,
#line 331 "map.m"
  MR_Word mercury__map__S_5)
#line 331 "map.m"
{
#line 1304 "map.m"
  {
#line 1304 "map.m"
    MR_bool mercury__map__succeeded;
#line 1304 "map.m"
    MR_Word mercury__map__M2_6;
#line 1304 "map.m"
    MR_Word mercury__map__NewMap0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1313 "map.m"
    {
#line 1313 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_10_10, mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_14, &mercury__map__M2_6);
    }
#line 1304 "map.m"
    return mercury__map__M2_6;
#line 1304 "map.m"
  }
#line 331 "map.m"
}

#line 332 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 332 "map.m"
  MR_Word mercury__map__V_11_11,
#line 332 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 332 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 332 "map.m"
  MR_Word mercury__map__Original_4,
#line 332 "map.m"
  MR_Word mercury__map__Keys_5,
#line 332 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 332 "map.m"
{
#line 1311 "map.m"
  {
#line 1311 "map.m"
    MR_bool mercury__map__succeeded;
#line 1311 "map.m"
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1313 "map.m"
    {
#line 1313 "map.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_11_11, mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
#line 1313 "map.m"
      return;
    }
#line 1311 "map.m"
  }
#line 332 "map.m"
}

#line 802 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 802 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 802 "map.m"
  MR_Integer mercury__map__Key_4,
#line 802 "map.m"
  MR_Word mercury__map__Map_5,
#line 802 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 802 "map.m"
{
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
  }
#line 802 "map.m"
}

#line 802 "map.m"
MR_bool MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 802 "map.m"
  MR_Word mercury__map__V_9_9,
#line 802 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 802 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 802 "map.m"
  MR_Word mercury__map__Key_4,
#line 802 "map.m"
  MR_Word mercury__map__Map_5,
#line 802 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 802 "map.m"
{
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_9_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
  }
#line 802 "map.m"
}

#line 806 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(
#line 806 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 806 "map.m"
  MR_Integer mercury__map__Key_4,
#line 806 "map.m"
  MR_Word mercury__map__Map_5)
#line 806 "map.m"
{
#line 1628 "map.m"
  {
#line 1628 "map.m"
    MR_bool mercury__map__succeeded;
#line 1628 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 1628 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_15;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_15);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_15;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
        }
#line 944 "map.m"
      }
#line 1628 "map.m"
    return mercury__map__HeadVar__3_3;
#line 1628 "map.m"
  }
#line 806 "map.m"
}

#line 806 "map.m"
MR_Box MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 806 "map.m"
  MR_Word mercury__map__V_9_9,
#line 806 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 806 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 806 "map.m"
  MR_Word mercury__map__Key_4,
#line 806 "map.m"
  MR_Word mercury__map__Map_5)
#line 806 "map.m"
{
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_17;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_9_9, mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_17);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_17;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", ((MR_Box) (mercury__map__Key_4)));
        }
#line 944 "map.m"
      }
#line 943 "map.m"
    return mercury__map__HeadVar__3_3;
#line 943 "map.m"
  }
#line 806 "map.m"
}

#line 812 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
#line 812 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 812 "map.m"
  MR_Integer mercury__map__Key_5,
#line 812 "map.m"
  MR_Word mercury__map__Map_6,
#line 812 "map.m"
  MR_Box mercury__map__Value_7)
#line 812 "map.m"
{
#line 1630 "map.m"
  {
#line 1630 "map.m"
    MR_bool mercury__map__succeeded;
#line 1630 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1630 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
#line 1630 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1630 "map.m"
  }
#line 812 "map.m"
}

#line 812 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
#line 812 "map.m"
  MR_Word mercury__map__V_11_11,
#line 812 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 812 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 812 "map.m"
  MR_Word mercury__map__Key_5,
#line 812 "map.m"
  MR_Word mercury__map__Map_6,
#line 812 "map.m"
  MR_Box mercury__map__Value_7)
#line 812 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;
#line 1082 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1082 "map.m"
    MR_Word mercury__map__conv0_HeadVar__4_4;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_HeadVar__4_4);
    }
#line 1082 "map.m"
    mercury__map__HeadVar__4_4 = (MR_Word) mercury__map__conv0_HeadVar__4_4;
#line 1082 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1082 "map.m"
  }
#line 812 "map.m"
}

#line 816 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
#line 816 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 816 "map.m"
  MR_Integer mercury__map__Key_5,
#line 816 "map.m"
  MR_Word mercury__map__Map_6,
#line 816 "map.m"
  MR_Box mercury__map__Value_7)
#line 816 "map.m"
{
#line 1632 "map.m"
  {
#line 1632 "map.m"
    MR_bool mercury__map__succeeded;
#line 1632 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1632 "map.m"
    MR_Word mercury__map__TypeInfo_for_K_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_19;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_22_22;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
        }
#line 1058 "map.m"
      }
#line 1632 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1632 "map.m"
  }
#line 816 "map.m"
}

#line 816 "map.m"
MR_Word MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(
#line 816 "map.m"
  MR_Word mercury__map__V_11_11,
#line 816 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 816 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 816 "map.m"
  MR_Word mercury__map__Key_5,
#line 816 "map.m"
  MR_Word mercury__map__Map_6,
#line 816 "map.m"
  MR_Box mercury__map__Value_7)
#line 816 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_21;
#line 1055 "map.m"
    MR_Word mercury__map__conv0_NewMap_21;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, ((MR_Box) (mercury__map__Key_5)), mercury__map__Value_7, (MR_Word) mercury__map__Map_6, &mercury__map__conv0_NewMap_21);
    }
#line 1055 "map.m"
    if (mercury__map__succeeded)
#line 1055 "map.m"
      {
#line 1055 "map.m"
        mercury__map__NewMap_21 = (MR_Word) mercury__map__conv0_NewMap_21;
#line 1055 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1055 "map.m"
      }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_21;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_24_24;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", ((MR_Box) (mercury__map__Key_5)));
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1057 "map.m"
  }
#line 816 "map.m"
}

#line 1269 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 1269 "map.m"
  MR_Word mercury__map__V_19_19,
#line 1269 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 1269 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 1269 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1269 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 1269 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 1269 "map.m"
{
#line 1273 "map.m"
  while (MR_TRUE)
#line 1273 "map.m"
    {
#line 1273 "map.m"
      /* tailcall optimized into a loop */
#line 1273 "map.m"
      {
#line 1273 "map.m"
        MR_bool mercury__map__succeeded;

#line 1273 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1273 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1273 "map.m"
        else
#line 1274 "map.m"
          {
#line 1274 "map.m"
            MR_Word mercury__map__K_7;
#line 1274 "map.m"
            MR_Box mercury__map__V_8;
#line 1274 "map.m"
            MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1274 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1274 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 1274 "map.m"
            mercury__map__K_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0)));
#line 1274 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 1082 "map.m"
            {
#line 1082 "map.m"
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__map__V_19_19, mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 1276 "map.m"
            /* direct tailcall eliminated */
#line 1276 "map.m"
            {
#line 1276 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_9;
#line 1276 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1276 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1276 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1276 "map.m"
            }
#line 1276 "map.m"
            continue;
#line 1274 "map.m"
          }
#line 1273 "map.m"
      }
#line 1273 "map.m"
      break;
#line 1273 "map.m"
    }
#line 1269 "map.m"
}

#line 1285 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_108_97_114_103_101_95_109_97_112_95_50_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 1285 "map.m"
  MR_Word mercury__map__V_16_16,
#line 1285 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 1285 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 1285 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1285 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1285 "map.m"
  MR_Word * mercury__map__Map_3)
#line 1285 "map.m"
{
#line 1289 "map.m"
  while (MR_TRUE)
#line 1289 "map.m"
    {
#line 1289 "map.m"
      /* tailcall optimized into a loop */
#line 1289 "map.m"
      {
#line 1289 "map.m"
        MR_bool mercury__map__succeeded;

#line 1289 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "map.m"
          *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
#line 1289 "map.m"
        else
#line 1290 "map.m"
          {
#line 1290 "map.m"
            MR_Word mercury__map__K_5;
#line 1290 "map.m"
            MR_Box mercury__map__V_6;
#line 1290 "map.m"
            MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1290 "map.m"
            MR_Word mercury__map__Map2_11;
#line 1290 "map.m"
            MR_Word mercury__map__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1293 "map.m"
            MR_Word mercury__map__Map1_10;
#line 993 "map.m"
            MR_Word mercury__map__conv0_Map1_10;

#line 1290 "map.m"
            mercury__map__K_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 0)));
#line 1290 "map.m"
            mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 1));
#line 993 "map.m"
            {
#line 993 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, ((MR_Box) (mercury__map__K_5)), mercury__map__V_6, (MR_Word) mercury__map__HeadVar__2_2, &mercury__map__conv0_Map1_10);
            }
#line 993 "map.m"
            if (mercury__map__succeeded)
#line 993 "map.m"
              {
#line 993 "map.m"
                mercury__map__Map1_10 = (MR_Word) mercury__map__conv0_Map1_10;
#line 993 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 993 "map.m"
              }
#line 1293 "map.m"
            if (mercury__map__succeeded)
#line 1292 "map.m"
              mercury__map__Map2_11 = mercury__map__Map1_10;
#line 1293 "map.m"
            else
#line 1294 "map.m"
              mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
#line 1296 "map.m"
            /* direct tailcall eliminated */
#line 1296 "map.m"
            {
#line 1296 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_7;
#line 1296 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Map2_11;

#line 1296 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1296 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1296 "map.m"
            }
#line 1296 "map.m"
            continue;
#line 1290 "map.m"
          }
#line 1289 "map.m"
      }
#line 1289 "map.m"
      break;
#line 1289 "map.m"
    }
#line 1285 "map.m"
}

#line 1315 "map.m"
void MR_CALL 
mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(
#line 1315 "map.m"
  MR_Word mercury__map__V_21_21,
#line 1315 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 1315 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 1315 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1315 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1315 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
#line 1315 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
#line 1315 "map.m"
{
#line 1319 "map.m"
  while (MR_TRUE)
#line 1319 "map.m"
    {
#line 1319 "map.m"
      /* tailcall optimized into a loop */
#line 1319 "map.m"
      {
#line 1319 "map.m"
        MR_bool mercury__map__succeeded;

#line 1319 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
          *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1319 "map.m"
        else
#line 1320 "map.m"
          {
#line 1320 "map.m"
            MR_Word mercury__map__K_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1320 "map.m"
            MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1320 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_New_16_16;
#line 1323 "map.m"
            MR_Box mercury__map__V_13;

#line 935 "map.m"
            {
#line 935 "map.m"
              mercury__map__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__map__V_21_21, mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
            }
#line 1323 "map.m"
            if (mercury__map__succeeded)
#line 1001 "map.m"
              {
#line 1001 "map.m"
                MR_Word mercury__map__NewMap_31;
#line 999 "map.m"
                MR_Word mercury__map__conv0_NewMap_31;

#line 999 "map.m"
                {
#line 999 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, ((MR_Box) (mercury__map__K_9)), mercury__map__V_13, (MR_Word) mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__conv0_NewMap_31);
                }
#line 999 "map.m"
                if (mercury__map__succeeded)
#line 999 "map.m"
                  {
#line 999 "map.m"
                    mercury__map__NewMap_31 = (MR_Word) mercury__map__conv0_NewMap_31;
#line 999 "map.m"
                    mercury__map__succeeded = MR_TRUE;
#line 999 "map.m"
                  }
#line 1001 "map.m"
                if (mercury__map__succeeded)
#line 1000 "map.m"
                  mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_31;
#line 1001 "map.m"
                else
#line 1002 "map.m"
                  {
#line 1002 "map.m"
                    MR_Box mercury__map__V_34_34;

#line 1002 "map.m"
                    {
#line 1002 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", ((MR_Box) (mercury__map__K_9)));
#line 1002 "map.m"
                      return;
                    }
#line 1002 "map.m"
                  }
#line 1001 "map.m"
              }
#line 1323 "map.m"
            else
#line 1323 "map.m"
              mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1326 "map.m"
            /* direct tailcall eliminated */
#line 1326 "map.m"
            {
#line 1326 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Ks_10;
#line 1326 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_New_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_New_16_16;

#line 1326 "map.m"
              mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_0__tmp_copy_3;
#line 1326 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1326 "map.m"
            }
#line 1326 "map.m"
            continue;
#line 1320 "map.m"
          }
#line 1319 "map.m"
      }
#line 1319 "map.m"
      break;
#line 1319 "map.m"
    }
#line 1315 "map.m"
}

#line 1075 "map.m"
static void MR_CALL 
mercury__map__IntroducedFrom__pred__det_transform_value__1075__1_4_p_0(
#line 1075 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 1075 "map.m"
  MR_Word mercury__map__F_5,
#line 1075 "map.m"
  MR_Box mercury__map__HeadVar__3_14,
#line 1075 "map.m"
  MR_Box * mercury__map__HeadVar__4_15)
#line 1075 "map.m"
{
#line 1075 "map.m"
  {
#line 1075 "map.m"
    MR_bool mercury__map__succeeded;
#line 1075 "map.m"
    MR_Box MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__map__F_5, (MR_Integer) 1)));

#line 1075 "map.m"
    {
#line 1075 "map.m"
      *mercury__map__HeadVar__4_15 = mercury__map__func_0(((MR_Box) mercury__map__F_5), mercury__map__HeadVar__3_14);
    }
#line 1075 "map.m"
  }
#line 1075 "map.m"
}

#line 831 "map.m"
void MR_CALL 
mercury__map____Compare____map_2_0(
#line 831 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 831 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 831 "map.m"
  MR_Word * mercury__map__HeadVar__1_1,
#line 831 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 831 "map.m"
  MR_Word mercury__map__HeadVar__3_3)
#line 831 "map.m"
{
#line 831 "map.m"
  {
#line 831 "map.m"
    MR_bool mercury__map__succeeded;
#line 831 "map.m"
    MR_Word mercury__map__Cast_HeadVar1_4 = mercury__map__HeadVar__2_2;
#line 831 "map.m"
    MR_Word mercury__map__Cast_HeadVar2_5 = mercury__map__HeadVar__3_3;

#line 831 "map.m"
    {
#line 831 "map.m"
      mercury__tree234____Compare____tree234_2_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__HeadVar__1_1, mercury__map__Cast_HeadVar1_4, mercury__map__Cast_HeadVar2_5);
#line 831 "map.m"
      return;
    }
#line 831 "map.m"
  }
#line 831 "map.m"
}

#line 831 "map.m"
MR_bool MR_CALL 
mercury__map____Unify____map_2_0(
#line 831 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 831 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 831 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 831 "map.m"
  MR_Word mercury__map__HeadVar__2_2)
#line 831 "map.m"
{
#line 831 "map.m"
  {
#line 831 "map.m"
    MR_bool mercury__map__succeeded;
#line 831 "map.m"
    MR_Word mercury__map__Cast_HeadVar1_3 = mercury__map__HeadVar__1_1;
#line 831 "map.m"
    MR_Word mercury__map__Cast_HeadVar2_4 = mercury__map__HeadVar__2_2;

#line 831 "map.m"
    {
#line 831 "map.m"
      return mercury__map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Cast_HeadVar1_3, mercury__map__Cast_HeadVar2_4);
    }
#line 831 "map.m"
    return mercury__map__succeeded;
#line 831 "map.m"
  }
#line 831 "map.m"
}

#line 1615 "map.m"
void MR_CALL 
mercury__map__reverse_map_2_4_p_0(
#line 1615 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 1615 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 1615 "map.m"
  MR_Box mercury__map__Key_5,
#line 1615 "map.m"
  MR_Box mercury__map__Value_6,
#line 1615 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevMap_0_10,
#line 1615 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevMap_11)
#line 1615 "map.m"
{
#line 1622 "map.m"
  {
#line 1622 "map.m"
    MR_bool mercury__map__succeeded;
#line 1622 "map.m"
    MR_Word mercury__map__TypeInfo_18_18;
#line 1622 "map.m"
    MR_Word mercury__map__Keys0_8;
#line 1619 "map.m"
    MR_Word mercury__map__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 935 "map.m"
    MR_Box mercury__map__conv0_Keys0_8;

#line 5966 "map.c"
    {
#line 5968 "map.c"
      mercury__map__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5970 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_17_17));
#line 5972 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_18_18, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
#line 5974 "map.c"
    }
#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, mercury__map__Value_6, &mercury__map__conv0_Keys0_8);
    }
#line 935 "map.m"
    if (mercury__map__succeeded)
#line 935 "map.m"
      {
#line 935 "map.m"
        mercury__map__Keys0_8 = ((MR_Word) mercury__map__conv0_Keys0_8);
#line 935 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 935 "map.m"
      }
#line 1622 "map.m"
    if (mercury__map__succeeded)
#line 1620 "map.m"
      {
#line 1620 "map.m"
        MR_Word mercury__map__Keys_9;
#line 1620 "map.m"
        MR_Word mercury__map__List0_5_30 = (MR_Word) mercury__map__Keys0_8;
#line 1620 "map.m"
        MR_Word mercury__map__List_6_31;
#line 1057 "map.m"
        MR_Word mercury__map__NewMap_37;
#line 1055 "map.m"
        MR_Word mercury__map__conv1_NewMap_37;

#line 68 "set_ordlist.opt"
        {
#line 68 "set_ordlist.opt"
          mercury__set_ordlist__insert_loop_3_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__List0_5_30, mercury__map__Key_5, &mercury__map__List_6_31);
        }
#line 67 "set_ordlist.opt"
        mercury__map__Keys_9 = (MR_Word) mercury__map__List_6_31;
#line 1055 "map.m"
        {
#line 1055 "map.m"
          mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, mercury__map__Value_6, ((MR_Box) (mercury__map__Keys_9)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv1_NewMap_37);
        }
#line 1055 "map.m"
        if (mercury__map__succeeded)
#line 1055 "map.m"
          {
#line 1055 "map.m"
            mercury__map__NewMap_37 = (MR_Word) mercury__map__conv1_NewMap_37;
#line 1055 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1055 "map.m"
          }
#line 1057 "map.m"
        if (mercury__map__succeeded)
#line 1056 "map.m"
          *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_37;
#line 1057 "map.m"
        else
#line 1058 "map.m"
          {
#line 1058 "map.m"
            MR_Word mercury__map__V_40_40;

#line 1058 "map.m"
            {
#line 1058 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_18_18, (MR_String) "map.det_update: key not found", mercury__map__Value_6);
#line 1058 "map.m"
              return;
            }
#line 1058 "map.m"
          }
#line 1620 "map.m"
      }
#line 1622 "map.m"
    else
#line 1623 "map.m"
      {
#line 1623 "map.m"
        MR_Word mercury__map__TypeCtorInfo_21_21;
#line 1623 "map.m"
        MR_Word mercury__map__TypeInfo_22_22;
#line 1623 "map.m"
        MR_Word mercury__map__V_13_13;
#line 1623 "map.m"
        MR_Word mercury__map__V_4_46;
#line 1623 "map.m"
        MR_Word mercury__map__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "map.m"
        MR_Word mercury__map__NewMap_54;
#line 999 "map.m"
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
#line 6081 "map.c"
        mercury__map__TypeCtorInfo_21_21 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 6083 "map.c"
        {
#line 6085 "map.c"
          mercury__map__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6087 "map.c"
          MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_21_21));
#line 6089 "map.c"
          MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_22_22, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_15));
#line 6091 "map.c"
        }
#line 999 "map.m"
        {
#line 999 "map.m"
          mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, mercury__map__Value_6, ((MR_Box) (mercury__map__V_13_13)), (MR_Word) mercury__map__STATE_VARIABLE_RevMap_0_10, &mercury__map__conv2_NewMap_54);
        }
#line 999 "map.m"
        if (mercury__map__succeeded)
#line 999 "map.m"
          {
#line 999 "map.m"
            mercury__map__NewMap_54 = (MR_Word) mercury__map__conv2_NewMap_54;
#line 999 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 999 "map.m"
          }
#line 1001 "map.m"
        if (mercury__map__succeeded)
#line 1000 "map.m"
          *mercury__map__STATE_VARIABLE_RevMap_11 = mercury__map__NewMap_54;
#line 1001 "map.m"
        else
#line 1002 "map.m"
          {
#line 1002 "map.m"
            MR_Word mercury__map__V_57_57;

#line 1002 "map.m"
            {
#line 1002 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_22_22, (MR_String) "map.det_insert: key already present", mercury__map__Value_6);
#line 1002 "map.m"
              return;
            }
#line 1002 "map.m"
          }
#line 1623 "map.m"
      }
#line 1622 "map.m"
  }
#line 1615 "map.m"
}

#line 1563 "map.m"
void MR_CALL 
mercury__map__union_loop_5_p_5(
#line 1563 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1563 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1563 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1563 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1563 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1563 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1563 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1570 "map.m"
          else
#line 1576 "map.m"
            {
#line 1576 "map.m"
              MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
              MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
              {
#line 1578 "map.m"
                mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
              }
#line 1579 "map.m"
              {
#line 1579 "map.m"
                mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1579 "map.m"
                return;
              }
#line 1576 "map.m"
            }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
#line 1570 "map.m"
            MR_Box mercury__map__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 1));
#line 1570 "map.m"
            MR_Box mercury__map__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 0));

#line 1570 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "map.m"
              {
#line 1571 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1573 "map.m"
                {
#line 1573 "map.m"
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
                }
#line 1574 "map.m"
                {
#line 1574 "map.m"
                  mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__V_47_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1574 "map.m"
                  return;
                }
#line 1571 "map.m"
              }
#line 1570 "map.m"
            else
#line 1581 "map.m"
              {
#line 1581 "map.m"
                MR_Word mercury__map__R_16;
#line 1581 "map.m"
                MR_Word mercury__map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1581 "map.m"
                MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 0));
#line 1581 "map.m"
                MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 1));
#line 1581 "map.m"
                MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

#line 1583 "map.m"
                {
#line 1583 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__V_50_50, mercury__map__Key2_42);
                }
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 1))
#line 1591 "map.m"
                  {
#line 1591 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1592 "map.m"
                    {
#line 1592 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1592 "map.m"
                    }
#line 1593 "map.m"
                    /* direct tailcall eliminated */
#line 1593 "map.m"
                    {
#line 1593 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1593 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1593 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1593 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1593 "map.m"
                    }
#line 1593 "map.m"
                    continue;
#line 1591 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 0))
#line 1585 "map.m"
                  {
#line 1585 "map.m"
                    MR_Box mercury__map__Value_17;
#line 1585 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1585 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1586 "map.m"
                    void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

#line 1586 "map.m"
                    {
#line 1586 "map.m"
                      mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__V_49_49, mercury__map__Value2_43, &mercury__map__Value_17);
                    }
#line 1587 "map.m"
                    {
#line 1587 "map.m"
                      mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__V_50_50;
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_17;
#line 1587 "map.m"
                    }
#line 1587 "map.m"
                    {
#line 1587 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1587 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1587 "map.m"
                    }
#line 1588 "map.m"
                    /* direct tailcall eliminated */
#line 1588 "map.m"
                    {
#line 1588 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1588 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1588 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1588 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1588 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1588 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1588 "map.m"
                    }
#line 1588 "map.m"
                    continue;
#line 1585 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1596 "map.m"
                  {
#line 1596 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1597 "map.m"
                    {
#line 1597 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__V_21_21));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1597 "map.m"
                    }
#line 1598 "map.m"
                    /* direct tailcall eliminated */
#line 1598 "map.m"
                    {
#line 1598 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1598 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1598 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1598 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1598 "map.m"
                    }
#line 1598 "map.m"
                    continue;
#line 1596 "map.m"
                  }
#line 1581 "map.m"
              }
#line 1570 "map.m"
          }
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1563 "map.m"
}

#line 1561 "map.m"
MR_bool MR_CALL 
mercury__map__union_loop_5_p_4(
#line 1561 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1561 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1561 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1561 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1561 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1561 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1561 "map.m"
{
#line 1570 "map.m"
  while (MR_TRUE)
#line 1570 "map.m"
    {
#line 1570 "map.m"
      /* tailcall optimized into a loop */
#line 1570 "map.m"
      {
#line 1570 "map.m"
        MR_bool mercury__map__succeeded;

#line 1570 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "map.m"
            {
#line 1568 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18;
#line 1568 "map.m"
              mercury__map__succeeded = MR_TRUE;
#line 1568 "map.m"
            }
#line 1570 "map.m"
          else
#line 1576 "map.m"
            {
#line 1576 "map.m"
              MR_Word mercury__map__AssocTail2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1576 "map.m"
              MR_Word mercury__map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1576 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32;

#line 1578 "map.m"
              {
#line 1578 "map.m"
                mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 0) = ((MR_Box) (mercury__map__V_31_31));
#line 1578 "map.m"
                MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1578 "map.m"
              }
#line 1579 "map.m"
              {
#line 1579 "map.m"
                return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocTail2_15, mercury__map__STATE_VARIABLE_RevCommonAssocList_32_32, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
              }
#line 1576 "map.m"
            }
#line 1570 "map.m"
        else
#line 1570 "map.m"
          {
#line 1570 "map.m"
            MR_Word mercury__map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1570 "map.m"
            MR_Word mercury__map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));
#line 1570 "map.m"
            MR_Box mercury__map__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 1));
#line 1570 "map.m"
            MR_Box mercury__map__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__map__V_48_48, (MR_Integer) 0));

#line 1570 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "map.m"
              {
#line 1571 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36;

#line 1573 "map.m"
                {
#line 1573 "map.m"
                  mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1573 "map.m"
                  MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1573 "map.m"
                }
#line 1574 "map.m"
                {
#line 1574 "map.m"
                  return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__V_47_47, mercury__map__STATE_VARIABLE_RevCommonAssocList_36_36, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
                }
#line 1571 "map.m"
              }
#line 1570 "map.m"
            else
#line 1581 "map.m"
              {
#line 1581 "map.m"
                MR_Word mercury__map__R_16;
#line 1581 "map.m"
                MR_Word mercury__map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));
#line 1581 "map.m"
                MR_Box mercury__map__Key2_42 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 0));
#line 1581 "map.m"
                MR_Box mercury__map__Value2_43 = (MR_hl_field(MR_mktag(0), mercury__map__V_21_21, (MR_Integer) 1));
#line 1581 "map.m"
                MR_Word mercury__map__AssocTail2_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));

#line 1583 "map.m"
                {
#line 1583 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_45, &mercury__map__R_16, mercury__map__V_50_50, mercury__map__Key2_42);
                }
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 1))
#line 1591 "map.m"
                  {
#line 1591 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1592 "map.m"
                    {
#line 1592 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 0) = ((MR_Box) (mercury__map__V_48_48));
#line 1592 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1592 "map.m"
                    }
#line 1593 "map.m"
                    /* direct tailcall eliminated */
#line 1593 "map.m"
                    {
#line 1593 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1593 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_25_25;

#line 1593 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1593 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1593 "map.m"
                    }
#line 1593 "map.m"
                    continue;
#line 1591 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1590 "map.m"
                if ((mercury__map__R_16 == (MR_Integer) 0))
#line 1585 "map.m"
                  {
#line 1585 "map.m"
                    MR_Box mercury__map__Value_17;
#line 1585 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1585 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1586 "map.m"
                    MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

#line 1586 "map.m"
                    {
#line 1586 "map.m"
                      mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__V_49_49, mercury__map__Value2_43, &mercury__map__Value_17);
                    }
#line 1585 "map.m"
                    if (mercury__map__succeeded)
#line 1585 "map.m"
                      {
#line 1587 "map.m"
                        {
#line 1587 "map.m"
                          mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__V_50_50;
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_17;
#line 1587 "map.m"
                        }
#line 1587 "map.m"
                        {
#line 1587 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1587 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1587 "map.m"
                        }
#line 1588 "map.m"
                        /* direct tailcall eliminated */
#line 1588 "map.m"
                        {
#line 1588 "map.m"
                          MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_47_47;
#line 1588 "map.m"
                          MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1588 "map.m"
                          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1588 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1588 "map.m"
                          mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1588 "map.m"
                          mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1588 "map.m"
                        }
#line 1588 "map.m"
                        continue;
#line 1585 "map.m"
                      }
#line 1585 "map.m"
                  }
#line 1590 "map.m"
                else
#line 1596 "map.m"
                  {
#line 1596 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1597 "map.m"
                    {
#line 1597 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 0) = ((MR_Box) (mercury__map__V_21_21));
#line 1597 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18));
#line 1597 "map.m"
                    }
#line 1598 "map.m"
                    /* direct tailcall eliminated */
#line 1598 "map.m"
                    {
#line 1598 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_44;
#line 1598 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_22_22;

#line 1598 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_18;
#line 1598 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1598 "map.m"
                    }
#line 1598 "map.m"
                    continue;
#line 1596 "map.m"
                  }
#line 1581 "map.m"
              }
#line 1570 "map.m"
          }
#line 1570 "map.m"
        return mercury__map__succeeded;
#line 1570 "map.m"
      }
#line 1570 "map.m"
      break;
#line 1570 "map.m"
    }
#line 1561 "map.m"
}

#line 1559 "map.m"
void MR_CALL 
mercury__map__union_loop_5_p_3(
#line 1559 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1559 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1559 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1559 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1559 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1559 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1559 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1559 "map.m"
{
#line 1570 "map.m"
  {
#line 1570 "map.m"
    MR_bool mercury__map__succeeded;

#line 1570 "map.m"
    {
#line 1570 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_51_5_p_3(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1570 "map.m"
      return;
    }
#line 1570 "map.m"
  }
#line 1559 "map.m"
}

#line 1557 "map.m"
MR_bool MR_CALL 
mercury__map__union_loop_5_p_2(
#line 1557 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1557 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1557 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1557 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1557 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1557 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1557 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1557 "map.m"
{
#line 1570 "map.m"
  {
#line 1570 "map.m"
    MR_bool mercury__map__succeeded;

#line 1570 "map.m"
    {
#line 1570 "map.m"
      return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_52_44_32_53_93_95_50_5_p_2(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList1_6, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
    }
#line 1570 "map.m"
    return mercury__map__succeeded;
#line 1570 "map.m"
  }
#line 1557 "map.m"
}

#line 1555 "map.m"
void MR_CALL 
mercury__map__union_loop_5_p_1(
#line 1555 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1555 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1555 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1555 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1555 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1555 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1555 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1555 "map.m"
{
#line 1570 "map.m"
  {
#line 1570 "map.m"
    MR_bool mercury__map__succeeded;

#line 1570 "map.m"
    {
#line 1570 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_49_5_p_1(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
#line 1570 "map.m"
      return;
    }
#line 1570 "map.m"
  }
#line 1555 "map.m"
}

#line 1553 "map.m"
MR_bool MR_CALL 
mercury__map__union_loop_5_p_0(
#line 1553 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_45,
#line 1553 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_46,
#line 1553 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1553 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1553 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1553 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18,
#line 1553 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_19)
#line 1553 "map.m"
{
#line 1570 "map.m"
  {
#line 1570 "map.m"
    MR_bool mercury__map__succeeded;

#line 1570 "map.m"
    {
#line 1570 "map.m"
      return mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_91_51_44_32_53_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_45, mercury__map__TypeInfo_for_V_46, mercury__map__AssocList2_7, mercury__map__STATE_VARIABLE_RevCommonAssocList_0_18, mercury__map__STATE_VARIABLE_RevCommonAssocList_19);
    }
#line 1570 "map.m"
    return mercury__map__succeeded;
#line 1570 "map.m"
  }
#line 1553 "map.m"
}

#line 1496 "map.m"
void MR_CALL 
mercury__map__common_subset_loop_4_p_0(
#line 1496 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 1496 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 1496 "map.m"
  MR_Word mercury__map__AssocList1_5,
#line 1496 "map.m"
  MR_Word mercury__map__AssocList2_6,
#line 1496 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19,
#line 1496 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_20)
#line 1496 "map.m"
{
#line 1503 "map.m"
  while (MR_TRUE)
#line 1503 "map.m"
    {
#line 1503 "map.m"
      /* tailcall optimized into a loop */
#line 1503 "map.m"
      {
#line 1503 "map.m"
        MR_bool mercury__map__succeeded;

#line 1503 "map.m"
        if ((mercury__map__AssocList1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1503 "map.m"
          if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1501 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
#line 1503 "map.m"
          else
#line 1507 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
#line 1503 "map.m"
        else
#line 1503 "map.m"
          {
#line 1503 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 1)));
#line 1503 "map.m"
            MR_Word mercury__map__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_5, (MR_Integer) 0)));

#line 1503 "map.m"
            if ((mercury__map__AssocList2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1504 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_20 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
#line 1503 "map.m"
            else
#line 1510 "map.m"
              {
#line 1510 "map.m"
                MR_Box mercury__map__Key1_12 = (MR_hl_field(MR_mktag(0), mercury__map__V_30_30, (MR_Integer) 0));
#line 1510 "map.m"
                MR_Box mercury__map__Value1_13 = (MR_hl_field(MR_mktag(0), mercury__map__V_30_30, (MR_Integer) 1));
#line 1510 "map.m"
                MR_Box mercury__map__Key2_15;
#line 1510 "map.m"
                MR_Box mercury__map__Value2_16;
#line 1510 "map.m"
                MR_Word mercury__map__AssocTail2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 1)));
#line 1510 "map.m"
                MR_Word mercury__map__R_18;
#line 1510 "map.m"
                MR_Word mercury__map__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_6, (MR_Integer) 0)));

#line 1511 "map.m"
                mercury__map__Key2_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_22_22, (MR_Integer) 0));
#line 1511 "map.m"
                mercury__map__Value2_16 = (MR_hl_field(MR_mktag(0), mercury__map__V_22_22, (MR_Integer) 1));
#line 1512 "map.m"
                {
#line 1512 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_27, &mercury__map__R_18, mercury__map__Key1_12, mercury__map__Key2_15);
                }
#line 1521 "map.m"
                if ((mercury__map__R_18 == (MR_Integer) 0))
#line 1514 "map.m"
                  {
#line 1514 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24;

#line 1515 "map.m"
                    {
#line 1515 "map.m"
                      mercury__map__succeeded = mercury__builtin__unify_2_p_0(mercury__map__TypeInfo_for_V_28, mercury__map__Value1_13, mercury__map__Value2_16);
                    }
#line 1517 "map.m"
                    if (mercury__map__succeeded)
#line 1516 "map.m"
                      {
#line 1516 "map.m"
                        mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "map.m"
                        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24, 0) = ((MR_Box) (mercury__map__V_30_30));
#line 1516 "map.m"
                        MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19));
#line 1516 "map.m"
                      }
#line 1517 "map.m"
                    else
#line 1517 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19;
#line 1520 "map.m"
                    /* direct tailcall eliminated */
#line 1520 "map.m"
                    {
#line 1520 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_5 = mercury__map__V_29_29;
#line 1520 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_6 = mercury__map__AssocTail2_17;
#line 1520 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_24_24;

#line 1520 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_19 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_19;
#line 1520 "map.m"
                      mercury__map__AssocList2_6 = mercury__map__AssocList2__tmp_copy_6;
#line 1520 "map.m"
                      mercury__map__AssocList1_5 = mercury__map__AssocList1__tmp_copy_5;
#line 1520 "map.m"
                    }
#line 1520 "map.m"
                    continue;
#line 1514 "map.m"
                  }
#line 1521 "map.m"
                else
#line 1524 "map.m"
                  {
#line 1524 "map.m"
                    /* direct tailcall eliminated */
#line 1524 "map.m"
                    {
#line 1524 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_6 = mercury__map__AssocTail2_17;

#line 1524 "map.m"
                      mercury__map__AssocList2_6 = mercury__map__AssocList2__tmp_copy_6;
#line 1524 "map.m"
                    }
#line 1524 "map.m"
                    continue;
#line 1524 "map.m"
                  }
#line 1510 "map.m"
              }
#line 1503 "map.m"
          }
#line 1503 "map.m"
      }
#line 1503 "map.m"
      break;
#line 1503 "map.m"
    }
#line 1496 "map.m"
}

#line 1447 "map.m"
void MR_CALL 
mercury__map__intersect_loop_5_p_1(
#line 1447 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1447 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_32,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1447 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1447 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1447 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1447 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
#line 1447 "map.m"
{
#line 1454 "map.m"
  while (MR_TRUE)
#line 1454 "map.m"
    {
#line 1454 "map.m"
      /* tailcall optimized into a loop */
#line 1454 "map.m"
      {
#line 1454 "map.m"
        MR_bool mercury__map__succeeded;

#line 1454 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "map.m"
          if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
          else
#line 1458 "map.m"
            *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
        else
#line 1454 "map.m"
          {
#line 1454 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1454 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            else
#line 1461 "map.m"
              {
#line 1461 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 0));
#line 1461 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 1));
#line 1461 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1461 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1461 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1461 "map.m"
                MR_Word mercury__map__R_20;
#line 1461 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1462 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1462 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1463 "map.m"
                {
#line 1463 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1471 "map.m"
                  {
#line 1471 "map.m"
                    /* direct tailcall eliminated */
#line 1471 "map.m"
                    {
#line 1471 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;

#line 1471 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1471 "map.m"
                    }
#line 1471 "map.m"
                    continue;
#line 1471 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1465 "map.m"
                  {
#line 1465 "map.m"
                    MR_Box mercury__map__Value_21;
#line 1465 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1465 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1466 "map.m"
                    void MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

#line 1466 "map.m"
                    {
#line 1466 "map.m"
                      mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                    }
#line 1467 "map.m"
                    {
#line 1467 "map.m"
                      mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__Key1_14;
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_21;
#line 1467 "map.m"
                    }
#line 1467 "map.m"
                    {
#line 1467 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1467 "map.m"
                      MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
#line 1467 "map.m"
                    }
#line 1468 "map.m"
                    /* direct tailcall eliminated */
#line 1468 "map.m"
                    {
#line 1468 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;
#line 1468 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1468 "map.m"
                      MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1468 "map.m"
                      mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22;
#line 1468 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1468 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1468 "map.m"
                    }
#line 1468 "map.m"
                    continue;
#line 1465 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1475 "map.m"
                  {
#line 1475 "map.m"
                    /* direct tailcall eliminated */
#line 1475 "map.m"
                    {
#line 1475 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1475 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1475 "map.m"
                    }
#line 1475 "map.m"
                    continue;
#line 1475 "map.m"
                  }
#line 1461 "map.m"
              }
#line 1454 "map.m"
          }
#line 1454 "map.m"
      }
#line 1454 "map.m"
      break;
#line 1454 "map.m"
    }
#line 1447 "map.m"
}

#line 1445 "map.m"
MR_bool MR_CALL 
mercury__map__intersect_loop_5_p_0(
#line 1445 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_31,
#line 1445 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_32,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList1_6,
#line 1445 "map.m"
  MR_Word mercury__map__AssocList2_7,
#line 1445 "map.m"
  MR_Word mercury__map__CommonPred_8,
#line 1445 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22,
#line 1445 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_RevCommonAssocList_23)
#line 1445 "map.m"
{
#line 1454 "map.m"
  while (MR_TRUE)
#line 1454 "map.m"
    {
#line 1454 "map.m"
      /* tailcall optimized into a loop */
#line 1454 "map.m"
      {
#line 1454 "map.m"
        MR_bool mercury__map__succeeded;

#line 1454 "map.m"
        if ((mercury__map__AssocList1_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "map.m"
          {
#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            else
#line 1458 "map.m"
              *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1454 "map.m"
            mercury__map__succeeded = MR_TRUE;
#line 1454 "map.m"
          }
#line 1454 "map.m"
        else
#line 1454 "map.m"
          {
#line 1454 "map.m"
            MR_Word mercury__map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 1)));
#line 1454 "map.m"
            MR_Word mercury__map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList1_6, (MR_Integer) 0)));

#line 1454 "map.m"
            if ((mercury__map__AssocList2_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "map.m"
              {
#line 1455 "map.m"
                *mercury__map__STATE_VARIABLE_RevCommonAssocList_23 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22;
#line 1455 "map.m"
                mercury__map__succeeded = MR_TRUE;
#line 1455 "map.m"
              }
#line 1454 "map.m"
            else
#line 1461 "map.m"
              {
#line 1461 "map.m"
                MR_Box mercury__map__Key1_14 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 0));
#line 1461 "map.m"
                MR_Box mercury__map__Value1_15 = (MR_hl_field(MR_mktag(0), mercury__map__V_34_34, (MR_Integer) 1));
#line 1461 "map.m"
                MR_Box mercury__map__Key2_17;
#line 1461 "map.m"
                MR_Box mercury__map__Value2_18;
#line 1461 "map.m"
                MR_Word mercury__map__AssocTail2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 1)));
#line 1461 "map.m"
                MR_Word mercury__map__R_20;
#line 1461 "map.m"
                MR_Word mercury__map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__AssocList2_7, (MR_Integer) 0)));

#line 1462 "map.m"
                mercury__map__Key2_17 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 0));
#line 1462 "map.m"
                mercury__map__Value2_18 = (MR_hl_field(MR_mktag(0), mercury__map__V_25_25, (MR_Integer) 1));
#line 1463 "map.m"
                {
#line 1463 "map.m"
                  mercury__builtin__compare_3_p_0(mercury__map__TypeInfo_for_K_31, &mercury__map__R_20, mercury__map__Key1_14, mercury__map__Key2_17);
                }
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 1))
#line 1471 "map.m"
                  {
#line 1471 "map.m"
                    /* direct tailcall eliminated */
#line 1471 "map.m"
                    {
#line 1471 "map.m"
                      MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;

#line 1471 "map.m"
                      mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1471 "map.m"
                    }
#line 1471 "map.m"
                    continue;
#line 1471 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1470 "map.m"
                if ((mercury__map__R_20 == (MR_Integer) 0))
#line 1465 "map.m"
                  {
#line 1465 "map.m"
                    MR_Box mercury__map__Value_21;
#line 1465 "map.m"
                    MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;
#line 1465 "map.m"
                    MR_Word mercury__map__V_29_29;
#line 1466 "map.m"
                    MR_bool MR_CALL (* mercury__map__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__map__CommonPred_8, (MR_Integer) 1)));

#line 1466 "map.m"
                    {
#line 1466 "map.m"
                      mercury__map__succeeded = mercury__map__func_0(((MR_Box) mercury__map__CommonPred_8), mercury__map__Value1_15, mercury__map__Value2_18, &mercury__map__Value_21);
                    }
#line 1465 "map.m"
                    if (mercury__map__succeeded)
#line 1465 "map.m"
                      {
#line 1467 "map.m"
                        {
#line 1467 "map.m"
                          mercury__map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 0) = mercury__map__Key1_14;
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(0), mercury__map__V_29_29, 1) = mercury__map__Value_21;
#line 1467 "map.m"
                        }
#line 1467 "map.m"
                        {
#line 1467 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 0) = ((MR_Box) (mercury__map__V_29_29));
#line 1467 "map.m"
                          MR_hl_field(MR_mktag(1), mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28, 1) = ((MR_Box) (mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22));
#line 1467 "map.m"
                        }
#line 1468 "map.m"
                        /* direct tailcall eliminated */
#line 1468 "map.m"
                        {
#line 1468 "map.m"
                          MR_Word mercury__map__AssocList1__tmp_copy_6 = mercury__map__V_33_33;
#line 1468 "map.m"
                          MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;
#line 1468 "map.m"
                          MR_Word mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_28_28;

#line 1468 "map.m"
                          mercury__map__STATE_VARIABLE_RevCommonAssocList_0_22 = mercury__map__STATE_VARIABLE_RevCommonAssocList_0__tmp_copy_22;
#line 1468 "map.m"
                          mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1468 "map.m"
                          mercury__map__AssocList1_6 = mercury__map__AssocList1__tmp_copy_6;
#line 1468 "map.m"
                        }
#line 1468 "map.m"
                        continue;
#line 1465 "map.m"
                      }
#line 1465 "map.m"
                  }
#line 1470 "map.m"
                else
#line 1475 "map.m"
                  {
#line 1475 "map.m"
                    /* direct tailcall eliminated */
#line 1475 "map.m"
                    {
#line 1475 "map.m"
                      MR_Word mercury__map__AssocList2__tmp_copy_7 = mercury__map__AssocTail2_19;

#line 1475 "map.m"
                      mercury__map__AssocList2_7 = mercury__map__AssocList2__tmp_copy_7;
#line 1475 "map.m"
                    }
#line 1475 "map.m"
                    continue;
#line 1475 "map.m"
                  }
#line 1461 "map.m"
              }
#line 1454 "map.m"
          }
#line 1454 "map.m"
        return mercury__map__succeeded;
#line 1454 "map.m"
      }
#line 1454 "map.m"
      break;
#line 1454 "map.m"
    }
#line 1445 "map.m"
}

#line 1315 "map.m"
void MR_CALL 
mercury__map__select_loop_4_p_0(
#line 1315 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 1315 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 1315 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1315 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1315 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_New_0_3,
#line 1315 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_New_4)
#line 1315 "map.m"
{
#line 1319 "map.m"
  while (MR_TRUE)
#line 1319 "map.m"
    {
#line 1319 "map.m"
      /* tailcall optimized into a loop */
#line 1319 "map.m"
      {
#line 1319 "map.m"
        MR_bool mercury__map__succeeded;

#line 1319 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "map.m"
          *mercury__map__STATE_VARIABLE_New_4 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1319 "map.m"
        else
#line 1320 "map.m"
          {
#line 1320 "map.m"
            MR_Box mercury__map__K_9 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1320 "map.m"
            MR_Word mercury__map__Ks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1320 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_New_16_16;
#line 1323 "map.m"
            MR_Box mercury__map__V_13;

#line 935 "map.m"
            {
#line 935 "map.m"
              mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__HeadVar__2_2, mercury__map__K_9, &mercury__map__V_13);
            }
#line 1323 "map.m"
            if (mercury__map__succeeded)
#line 1001 "map.m"
              {
#line 1001 "map.m"
                MR_Word mercury__map__NewMap_28;

#line 999 "map.m"
                {
#line 999 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, mercury__map__K_9, mercury__map__V_13, mercury__map__STATE_VARIABLE_New_0_3, &mercury__map__NewMap_28);
                }
#line 1001 "map.m"
                if (mercury__map__succeeded)
#line 1000 "map.m"
                  mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__NewMap_28;
#line 1001 "map.m"
                else
#line 1002 "map.m"
                  {
#line 1002 "map.m"
                    MR_Box mercury__map__V_31_31;

#line 1002 "map.m"
                    {
#line 1002 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_18, mercury__map__TypeInfo_for_V_19, (MR_String) "map.det_insert: key already present", mercury__map__K_9);
#line 1002 "map.m"
                      return;
                    }
#line 1002 "map.m"
                  }
#line 1001 "map.m"
              }
#line 1323 "map.m"
            else
#line 1323 "map.m"
              mercury__map__STATE_VARIABLE_New_16_16 = mercury__map__STATE_VARIABLE_New_0_3;
#line 1326 "map.m"
            /* direct tailcall eliminated */
#line 1326 "map.m"
            {
#line 1326 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__Ks_10;
#line 1326 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_New_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_New_16_16;

#line 1326 "map.m"
              mercury__map__STATE_VARIABLE_New_0_3 = mercury__map__STATE_VARIABLE_New_0__tmp_copy_3;
#line 1326 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1326 "map.m"
            }
#line 1326 "map.m"
            continue;
#line 1320 "map.m"
          }
#line 1319 "map.m"
      }
#line 1319 "map.m"
      break;
#line 1319 "map.m"
    }
#line 1315 "map.m"
}

#line 1285 "map.m"
void MR_CALL 
mercury__map__overlay_large_map_2_3_p_0(
#line 1285 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 1285 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 1285 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1285 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 1285 "map.m"
  MR_Word * mercury__map__Map_3)
#line 1285 "map.m"
{
#line 1289 "map.m"
  while (MR_TRUE)
#line 1289 "map.m"
    {
#line 1289 "map.m"
      /* tailcall optimized into a loop */
#line 1289 "map.m"
      {
#line 1289 "map.m"
        MR_bool mercury__map__succeeded;

#line 1289 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "map.m"
          *mercury__map__Map_3 = mercury__map__HeadVar__2_2;
#line 1289 "map.m"
        else
#line 1290 "map.m"
          {
#line 1290 "map.m"
            MR_Box mercury__map__K_5;
#line 1290 "map.m"
            MR_Box mercury__map__V_6;
#line 1290 "map.m"
            MR_Word mercury__map__AssocList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1290 "map.m"
            MR_Word mercury__map__Map2_11;
#line 1290 "map.m"
            MR_Word mercury__map__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1293 "map.m"
            MR_Word mercury__map__Map1_10;

#line 1290 "map.m"
            mercury__map__K_5 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 0));
#line 1290 "map.m"
            mercury__map__V_6 = (MR_hl_field(MR_mktag(0), mercury__map__V_12_12, (MR_Integer) 1));
#line 993 "map.m"
            {
#line 993 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__HeadVar__2_2, &mercury__map__Map1_10);
            }
#line 1293 "map.m"
            if (mercury__map__succeeded)
#line 1292 "map.m"
              mercury__map__Map2_11 = mercury__map__Map1_10;
#line 1293 "map.m"
            else
#line 1294 "map.m"
              mercury__map__Map2_11 = mercury__map__HeadVar__2_2;
#line 1296 "map.m"
            /* direct tailcall eliminated */
#line 1296 "map.m"
            {
#line 1296 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_7;
#line 1296 "map.m"
              MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Map2_11;

#line 1296 "map.m"
              mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1296 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1296 "map.m"
            }
#line 1296 "map.m"
            continue;
#line 1290 "map.m"
          }
#line 1289 "map.m"
      }
#line 1289 "map.m"
      break;
#line 1289 "map.m"
    }
#line 1285 "map.m"
}

#line 1269 "map.m"
void MR_CALL 
mercury__map__overlay_2_3_p_0(
#line 1269 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 1269 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 1269 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 1269 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 1269 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 1269 "map.m"
{
#line 1273 "map.m"
  while (MR_TRUE)
#line 1273 "map.m"
    {
#line 1273 "map.m"
      /* tailcall optimized into a loop */
#line 1273 "map.m"
      {
#line 1273 "map.m"
        MR_bool mercury__map__succeeded;

#line 1273 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1273 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1273 "map.m"
        else
#line 1274 "map.m"
          {
#line 1274 "map.m"
            MR_Box mercury__map__K_7;
#line 1274 "map.m"
            MR_Box mercury__map__V_8;
#line 1274 "map.m"
            MR_Word mercury__map__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1274 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1274 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 1274 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 1274 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 1082 "map.m"
            {
#line 1082 "map.m"
              mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 1276 "map.m"
            /* direct tailcall eliminated */
#line 1276 "map.m"
            {
#line 1276 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__AssocList_9;
#line 1276 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1276 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1276 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1276 "map.m"
            }
#line 1276 "map.m"
            continue;
#line 1274 "map.m"
          }
#line 1273 "map.m"
      }
#line 1273 "map.m"
      break;
#line 1273 "map.m"
    }
#line 1269 "map.m"
}

#line 845 "map.m"
void MR_CALL 
mercury__map__old_merge_3_p_0(
#line 845 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_10,
#line 845 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 845 "map.m"
  MR_Word mercury__map__M0_4,
#line 845 "map.m"
  MR_Word mercury__map__M1_5,
#line 845 "map.m"
  MR_Word * mercury__map__M_6)
#line 845 "map.m"
{
#line 1246 "map.m"
  {
#line 1246 "map.m"
    MR_bool mercury__map__succeeded;
#line 1246 "map.m"
    MR_Word mercury__map__TypeCtorInfo_12_12;
#line 1246 "map.m"
    MR_Word mercury__map__TypeInfo_13_13;
#line 1246 "map.m"
    MR_Word mercury__map__ML0_7;
#line 1246 "map.m"
    MR_Word mercury__map__ML1_8;
#line 1246 "map.m"
    MR_Word mercury__map__ML_9;
#line 1246 "map.m"
    MR_Word mercury__map__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1246 "map.m"
    MR_Word mercury__map__V_5_25;
#line 1246 "map.m"
    MR_Word mercury__map__V_5_32;
#line 1249 "map.m"
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
#line 7747 "map.c"
    mercury__map__TypeCtorInfo_12_12 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 7749 "map.c"
    {
#line 7751 "map.c"
      mercury__map__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7753 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 0) = ((MR_Box) (mercury__map__TypeCtorInfo_12_12));
#line 7755 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 1) = ((MR_Box) (mercury__map__TypeInfo_for_K_10));
#line 7757 "map.c"
      MR_hl_field(MR_mktag(0), mercury__map__TypeInfo_13_13, 2) = ((MR_Box) (mercury__map__TypeInfo_for_V_11));
#line 7759 "map.c"
    }
#line 1249 "map.m"
    {
#line 1249 "map.m"
      mercury__list__merge_3_p_0(mercury__map__TypeInfo_13_13, (MR_Word) mercury__map__ML0_7, (MR_Word) mercury__map__ML1_8, &mercury__map__conv0_ML_9);
    }
#line 1249 "map.m"
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
#line 1246 "map.m"
  }
#line 845 "map.m"
}

#line 844 "map.m"
MR_Word MR_CALL 
mercury__map__old_merge_2_f_0(
#line 844 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 844 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 844 "map.m"
  MR_Word mercury__map__M1_4,
#line 844 "map.m"
  MR_Word mercury__map__M2_5)
#line 844 "map.m"
{
#line 1244 "map.m"
  {
#line 1244 "map.m"
    MR_bool mercury__map__succeeded;
#line 1244 "map.m"
    MR_Word mercury__map__M3_6;

#line 1244 "map.m"
    {
#line 1244 "map.m"
      mercury__map__old_merge_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__M2_5, &mercury__map__M3_6);
    }
#line 1244 "map.m"
    return mercury__map__M3_6;
#line 1244 "map.m"
  }
#line 844 "map.m"
}

#line 816 "map.m"
MR_Word MR_CALL 
mercury__map__f_100_101_116_95_101_108_101_109_32_58_61_3_f_0(
#line 816 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 816 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 816 "map.m"
  MR_Box mercury__map__Key_5,
#line 816 "map.m"
  MR_Word mercury__map__Map_6,
#line 816 "map.m"
  MR_Box mercury__map__Value_7)
#line 816 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__HeadVar__4_4;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_19;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__NewMap_19);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      mercury__map__HeadVar__4_4 = mercury__map__NewMap_19;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_22_22;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, (MR_String) "map.det_update: key not found", mercury__map__Key_5);
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1057 "map.m"
  }
#line 816 "map.m"
}

#line 812 "map.m"
MR_Word MR_CALL 
mercury__map__f_101_108_101_109_32_58_61_3_f_0(
#line 812 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 812 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 812 "map.m"
  MR_Box mercury__map__Key_5,
#line 812 "map.m"
  MR_Word mercury__map__Map_6,
#line 812 "map.m"
  MR_Box mercury__map__Value_7)
#line 812 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;
#line 1082 "map.m"
    MR_Word mercury__map__HeadVar__4_4;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Key_5, mercury__map__Value_7, mercury__map__Map_6, &mercury__map__HeadVar__4_4);
    }
#line 1082 "map.m"
    return mercury__map__HeadVar__4_4;
#line 1082 "map.m"
  }
#line 812 "map.m"
}

#line 806 "map.m"
MR_Box MR_CALL 
mercury__map__det_elem_2_f_0(
#line 806 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 806 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 806 "map.m"
  MR_Box mercury__map__Key_4,
#line 806 "map.m"
  MR_Word mercury__map__Map_5)
#line 806 "map.m"
{
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__HeadVar__3_3;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_14;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, &mercury__map__VPrime_14);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__HeadVar__3_3 = mercury__map__VPrime_14;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, (MR_String) "map.lookup: key not found", mercury__map__Key_4);
        }
#line 944 "map.m"
      }
#line 943 "map.m"
    return mercury__map__HeadVar__3_3;
#line 943 "map.m"
  }
#line 806 "map.m"
}

#line 802 "map.m"
MR_bool MR_CALL 
mercury__map__elem_2_f_0(
#line 802 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 802 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 802 "map.m"
  MR_Box mercury__map__Key_4,
#line 802 "map.m"
  MR_Word mercury__map__Map_5,
#line 802 "map.m"
  MR_Box * mercury__map__HeadVar__3_3)
#line 802 "map.m"
{
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__Map_5, mercury__map__Key_4, mercury__map__HeadVar__3_3);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
  }
#line 802 "map.m"
}

#line 796 "map.m"
MR_Word MR_CALL 
mercury__map__reverse_map_1_f_0(
#line 796 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 796 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 796 "map.m"
  MR_Word mercury__map__Map_3)
#line 796 "map.m"
{
#line 1612 "map.m"
  {
#line 1612 "map.m"
    MR_bool mercury__map__succeeded;
#line 1612 "map.m"
    MR_Word mercury__map__RevMap_4;
#line 1612 "map.m"
    MR_Word mercury__map__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_3, mercury__map__V_6_6, &mercury__map__RevMap_4);
    }
#line 1612 "map.m"
    return mercury__map__RevMap_4;
#line 1612 "map.m"
  }
#line 796 "map.m"
}

#line 790 "map.m"
MR_Word MR_CALL 
mercury__map__det_union_3_f_0(
#line 790 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 790 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 790 "map.m"
  MR_Word mercury__map__F_5,
#line 790 "map.m"
  MR_Word mercury__map__M1_6,
#line 790 "map.m"
  MR_Word mercury__map__M2_7)
#line 790 "map.m"
{
#line 1606 "map.m"
  {
#line 1606 "map.m"
    MR_bool mercury__map__succeeded;
#line 1606 "map.m"
    MR_Word mercury__map__M3_8;
#line 1606 "map.m"
    MR_Word mercury__map__UnionPrime_25;
#line 1604 "map.m"
    MR_Word mercury__map__AssocList1_31;
#line 1604 "map.m"
    MR_Word mercury__map__AssocList2_32;
#line 1604 "map.m"
    MR_Word mercury__map__RevCommonAssocList_33;
#line 1604 "map.m"
    MR_Word mercury__map__V_34_34;
#line 1604 "map.m"
    MR_Word mercury__map__V_5_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1604 "map.m"
    MR_Word mercury__map__V_5_46;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_39, &mercury__map__AssocList1_31);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_46, &mercury__map__AssocList2_32);
    }
#line 1542 "map.m"
    mercury__map__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "map.m"
    {
#line 1542 "map.m"
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_54_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_31, mercury__map__AssocList2_32, mercury__map__V_34_34, &mercury__map__RevCommonAssocList_33);
    }
#line 1604 "map.m"
    if (mercury__map__succeeded)
#line 1604 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_33, &mercury__map__UnionPrime_25);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1604 "map.m"
      }
#line 1606 "map.m"
    if (mercury__map__succeeded)
#line 1605 "map.m"
      mercury__map__M3_8 = mercury__map__UnionPrime_25;
#line 1606 "map.m"
    else
#line 1607 "map.m"
      {
#line 1607 "map.m"
        {
#line 1607 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_union: map.union failed");
        }
#line 1607 "map.m"
      }
#line 1606 "map.m"
    return mercury__map__M3_8;
#line 1606 "map.m"
  }
#line 790 "map.m"
}

#line 787 "map.m"
void MR_CALL 
mercury__map__det_union_4_p_0(
#line 787 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 787 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 787 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 787 "map.m"
  MR_Word mercury__map__Map1_6,
#line 787 "map.m"
  MR_Word mercury__map__Map2_7,
#line 787 "map.m"
  MR_Word * mercury__map__Union_8)
#line 787 "map.m"
{
#line 1606 "map.m"
  {
#line 1606 "map.m"
    MR_bool mercury__map__succeeded;
#line 1606 "map.m"
    MR_Word mercury__map__UnionPrime_9;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList1_17;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList2_18;
#line 1539 "map.m"
    MR_Word mercury__map__RevCommonAssocList_19;
#line 1539 "map.m"
    MR_Word mercury__map__V_20_20;
#line 1539 "map.m"
    MR_Word mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "map.m"
    MR_Word mercury__map__V_5_32;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map1_6, mercury__map__V_5_25, &mercury__map__AssocList1_17);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map2_7, mercury__map__V_5_32, &mercury__map__AssocList2_18);
    }
#line 1542 "map.m"
    mercury__map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "map.m"
    {
#line 1542 "map.m"
      mercury__map__succeeded = mercury__map__union_loop_5_p_4(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__AssocList1_17, mercury__map__AssocList2_18, mercury__map__CommonPred_5, mercury__map__V_20_20, &mercury__map__RevCommonAssocList_19);
    }
#line 1539 "map.m"
    if (mercury__map__succeeded)
#line 1539 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__RevCommonAssocList_19, &mercury__map__UnionPrime_9);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1539 "map.m"
      }
#line 1606 "map.m"
    if (mercury__map__succeeded)
#line 1605 "map.m"
      *mercury__map__Union_8 = mercury__map__UnionPrime_9;
#line 1606 "map.m"
    else
#line 1607 "map.m"
      {
#line 1607 "map.m"
        {
#line 1607 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_union: map.union failed");
#line 1607 "map.m"
          return;
        }
#line 1607 "map.m"
      }
#line 1606 "map.m"
  }
#line 787 "map.m"
}

#line 782 "map.m"
void MR_CALL 
mercury__map__union_4_p_1(
#line 782 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 782 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 782 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 782 "map.m"
  MR_Word mercury__map__Map1_6,
#line 782 "map.m"
  MR_Word mercury__map__Map2_7,
#line 782 "map.m"
  MR_Word * mercury__map__Common_8)
#line 782 "map.m"
{
#line 1539 "map.m"
  {
#line 1539 "map.m"
    MR_bool mercury__map__succeeded;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1539 "map.m"
    MR_Word mercury__map__RevCommonAssocList_11;
#line 1539 "map.m"
    MR_Word mercury__map__V_12_12;
#line 1539 "map.m"
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "map.m"
    MR_Word mercury__map__V_5_26;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
#line 1542 "map.m"
    mercury__map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "map.m"
    {
#line 1542 "map.m"
      mercury__map__union_loop_5_p_5(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__V_12_12, &mercury__map__RevCommonAssocList_11);
    }
#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
#line 1135 "map.m"
      return;
    }
#line 1539 "map.m"
  }
#line 782 "map.m"
}

#line 781 "map.m"
MR_bool MR_CALL 
mercury__map__union_4_p_0(
#line 781 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 781 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 781 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 781 "map.m"
  MR_Word mercury__map__Map1_6,
#line 781 "map.m"
  MR_Word mercury__map__Map2_7,
#line 781 "map.m"
  MR_Word * mercury__map__Common_8)
#line 781 "map.m"
{
#line 1539 "map.m"
  {
#line 1539 "map.m"
    MR_bool mercury__map__succeeded;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1539 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1539 "map.m"
    MR_Word mercury__map__RevCommonAssocList_11;
#line 1539 "map.m"
    MR_Word mercury__map__V_12_12;
#line 1539 "map.m"
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "map.m"
    MR_Word mercury__map__V_5_26;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
#line 1542 "map.m"
    mercury__map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "map.m"
    {
#line 1542 "map.m"
      mercury__map__succeeded = mercury__map__union_loop_5_p_4(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__V_12_12, &mercury__map__RevCommonAssocList_11);
    }
#line 1539 "map.m"
    if (mercury__map__succeeded)
#line 1539 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1539 "map.m"
      }
#line 1539 "map.m"
    return mercury__map__succeeded;
#line 1539 "map.m"
  }
#line 781 "map.m"
}

#line 779 "map.m"
MR_Word MR_CALL 
mercury__map__union_3_f_0(
#line 779 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 779 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 779 "map.m"
  MR_Word mercury__map__F_5,
#line 779 "map.m"
  MR_Word mercury__map__M1_6,
#line 779 "map.m"
  MR_Word mercury__map__M2_7)
#line 779 "map.m"
{
#line 1531 "map.m"
  {
#line 1531 "map.m"
    MR_bool mercury__map__succeeded;
#line 1531 "map.m"
    MR_Word mercury__map__M3_8;
#line 1531 "map.m"
    MR_Word mercury__map__AssocList1_25;
#line 1531 "map.m"
    MR_Word mercury__map__AssocList2_26;
#line 1531 "map.m"
    MR_Word mercury__map__RevCommonAssocList_27;
#line 1531 "map.m"
    MR_Word mercury__map__V_28_28;
#line 1531 "map.m"
    MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1531 "map.m"
    MR_Word mercury__map__V_5_40;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_33, &mercury__map__AssocList1_25);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_40, &mercury__map__AssocList2_26);
    }
#line 1542 "map.m"
    mercury__map__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1542 "map.m"
    {
#line 1542 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_111_110_95_108_111_111_112_95_95_104_111_50_51_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__V_28_28, &mercury__map__RevCommonAssocList_27);
    }
#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_27, &mercury__map__M3_8);
    }
#line 1531 "map.m"
    return mercury__map__M3_8;
#line 1531 "map.m"
  }
#line 779 "map.m"
}

#line 770 "map.m"
MR_Word MR_CALL 
mercury__map__common_subset_2_f_0(
#line 770 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 770 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 770 "map.m"
  MR_Word mercury__map__Map1_4,
#line 770 "map.m"
  MR_Word mercury__map__Map2_5)
#line 770 "map.m"
{
#line 1490 "map.m"
  {
#line 1490 "map.m"
    MR_bool mercury__map__succeeded;
#line 1490 "map.m"
    MR_Word mercury__map__Common_6;
#line 1490 "map.m"
    MR_Word mercury__map__AssocList1_7;
#line 1490 "map.m"
    MR_Word mercury__map__AssocList2_8;
#line 1490 "map.m"
    MR_Word mercury__map__RevCommonAssocList_9;
#line 1490 "map.m"
    MR_Word mercury__map__V_10_10;
#line 1490 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1490 "map.m"
    MR_Word mercury__map__V_5_24;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__Map1_4, mercury__map__V_5_17, &mercury__map__AssocList1_7);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__Map2_5, mercury__map__V_5_24, &mercury__map__AssocList2_8);
    }
#line 1493 "map.m"
    mercury__map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1493 "map.m"
    {
#line 1493 "map.m"
      mercury__map__common_subset_loop_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__AssocList1_7, mercury__map__AssocList2_8, mercury__map__V_10_10, &mercury__map__RevCommonAssocList_9);
    }
#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__RevCommonAssocList_9, &mercury__map__Common_6);
    }
#line 1490 "map.m"
    return mercury__map__Common_6;
#line 1490 "map.m"
  }
#line 770 "map.m"
}

#line 754 "map.m"
MR_Word MR_CALL 
mercury__map__det_intersect_3_f_0(
#line 754 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 754 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 754 "map.m"
  MR_Word mercury__map__PF_5,
#line 754 "map.m"
  MR_Word mercury__map__M1_6,
#line 754 "map.m"
  MR_Word mercury__map__M2_7)
#line 754 "map.m"
{
#line 1484 "map.m"
  {
#line 1484 "map.m"
    MR_bool mercury__map__succeeded;
#line 1484 "map.m"
    MR_Word mercury__map__M3_8;
#line 1484 "map.m"
    MR_Word mercury__map__CommonPrime_25;
#line 1482 "map.m"
    MR_Word mercury__map__AssocList1_31;
#line 1482 "map.m"
    MR_Word mercury__map__AssocList2_32;
#line 1482 "map.m"
    MR_Word mercury__map__RevCommonAssocList_33;
#line 1482 "map.m"
    MR_Word mercury__map__V_34_34;
#line 1482 "map.m"
    MR_Word mercury__map__V_5_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1482 "map.m"
    MR_Word mercury__map__V_5_46;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_39, &mercury__map__AssocList1_31);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_46, &mercury__map__AssocList2_32);
    }
#line 1440 "map.m"
    mercury__map__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "map.m"
    {
#line 1439 "map.m"
      mercury__map__succeeded = mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__PF_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_31, mercury__map__AssocList2_32, mercury__map__V_34_34, &mercury__map__RevCommonAssocList_33);
    }
#line 1482 "map.m"
    if (mercury__map__succeeded)
#line 1482 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_33, &mercury__map__CommonPrime_25);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1482 "map.m"
      }
#line 1484 "map.m"
    if (mercury__map__succeeded)
#line 1483 "map.m"
      mercury__map__M3_8 = mercury__map__CommonPrime_25;
#line 1484 "map.m"
    else
#line 1485 "map.m"
      {
#line 1485 "map.m"
        {
#line 1485 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_intersect: map.intersect failed");
        }
#line 1485 "map.m"
      }
#line 1484 "map.m"
    return mercury__map__M3_8;
#line 1484 "map.m"
  }
#line 754 "map.m"
}

#line 751 "map.m"
void MR_CALL 
mercury__map__det_intersect_4_p_0(
#line 751 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 751 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 751 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 751 "map.m"
  MR_Word mercury__map__Map1_6,
#line 751 "map.m"
  MR_Word mercury__map__Map2_7,
#line 751 "map.m"
  MR_Word * mercury__map__Common_8)
#line 751 "map.m"
{
#line 1484 "map.m"
  {
#line 1484 "map.m"
    MR_bool mercury__map__succeeded;
#line 1484 "map.m"
    MR_Word mercury__map__CommonPrime_9;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList1_17;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList2_18;
#line 1436 "map.m"
    MR_Word mercury__map__RevCommonAssocList_19;
#line 1436 "map.m"
    MR_Word mercury__map__V_20_20;
#line 1436 "map.m"
    MR_Word mercury__map__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1436 "map.m"
    MR_Word mercury__map__V_5_32;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map1_6, mercury__map__V_5_25, &mercury__map__AssocList1_17);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__Map2_7, mercury__map__V_5_32, &mercury__map__AssocList2_18);
    }
#line 1440 "map.m"
    mercury__map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "map.m"
    {
#line 1439 "map.m"
      mercury__map__succeeded = mercury__map__intersect_loop_5_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__AssocList1_17, mercury__map__AssocList2_18, mercury__map__CommonPred_5, mercury__map__V_20_20, &mercury__map__RevCommonAssocList_19);
    }
#line 1436 "map.m"
    if (mercury__map__succeeded)
#line 1436 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_11, mercury__map__RevCommonAssocList_19, &mercury__map__CommonPrime_9);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1436 "map.m"
      }
#line 1484 "map.m"
    if (mercury__map__succeeded)
#line 1483 "map.m"
      *mercury__map__Common_8 = mercury__map__CommonPrime_9;
#line 1484 "map.m"
    else
#line 1485 "map.m"
      {
#line 1485 "map.m"
        {
#line 1485 "map.m"
          mercury__require__error_1_p_0((MR_String) "map.det_intersect: map.intersect failed");
#line 1485 "map.m"
          return;
        }
#line 1485 "map.m"
      }
#line 1484 "map.m"
  }
#line 751 "map.m"
}

#line 746 "map.m"
MR_Word MR_CALL 
mercury__map__intersect_3_f_0(
#line 746 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_19,
#line 746 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 746 "map.m"
  MR_Word mercury__map__F_5,
#line 746 "map.m"
  MR_Word mercury__map__M1_6,
#line 746 "map.m"
  MR_Word mercury__map__M2_7)
#line 746 "map.m"
{
#line 1428 "map.m"
  {
#line 1428 "map.m"
    MR_bool mercury__map__succeeded;
#line 1428 "map.m"
    MR_Word mercury__map__M3_8;
#line 1428 "map.m"
    MR_Word mercury__map__AssocList1_25;
#line 1428 "map.m"
    MR_Word mercury__map__AssocList2_26;
#line 1428 "map.m"
    MR_Word mercury__map__RevCommonAssocList_27;
#line 1428 "map.m"
    MR_Word mercury__map__V_28_28;
#line 1428 "map.m"
    MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1428 "map.m"
    MR_Word mercury__map__V_5_40;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M1_6, mercury__map__V_5_33, &mercury__map__AssocList1_25);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__M2_7, mercury__map__V_5_40, &mercury__map__AssocList2_26);
    }
#line 1440 "map.m"
    mercury__map__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "map.m"
    {
#line 1439 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_115_101_99_116_95_108_111_111_112_95_95_104_111_50_49_95_95_91_49_44_32_52_44_32_55_93_95_48_5_p_0(mercury__map__F_5, mercury__map__TypeInfo_for_K_20, mercury__map__AssocList1_25, mercury__map__AssocList2_26, mercury__map__V_28_28, &mercury__map__RevCommonAssocList_27);
    }
#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_20, mercury__map__TypeInfo_for_V_19, mercury__map__RevCommonAssocList_27, &mercury__map__M3_8);
    }
#line 1428 "map.m"
    return mercury__map__M3_8;
#line 1428 "map.m"
  }
#line 746 "map.m"
}

#line 744 "map.m"
void MR_CALL 
mercury__map__intersect_4_p_1(
#line 744 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 744 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 744 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 744 "map.m"
  MR_Word mercury__map__Map1_6,
#line 744 "map.m"
  MR_Word mercury__map__Map2_7,
#line 744 "map.m"
  MR_Word * mercury__map__Common_8)
#line 744 "map.m"
{
#line 1436 "map.m"
  {
#line 1436 "map.m"
    MR_bool mercury__map__succeeded;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1436 "map.m"
    MR_Word mercury__map__RevCommonAssocList_11;
#line 1436 "map.m"
    MR_Word mercury__map__V_12_12;
#line 1436 "map.m"
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1436 "map.m"
    MR_Word mercury__map__V_5_26;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
#line 1440 "map.m"
    mercury__map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "map.m"
    {
#line 1439 "map.m"
      mercury__map__intersect_loop_5_p_1(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__V_12_12, &mercury__map__RevCommonAssocList_11);
    }
#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
#line 1135 "map.m"
      return;
    }
#line 1436 "map.m"
  }
#line 744 "map.m"
}

#line 743 "map.m"
MR_bool MR_CALL 
mercury__map__intersect_4_p_0(
#line 743 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 743 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 743 "map.m"
  MR_Word mercury__map__CommonPred_5,
#line 743 "map.m"
  MR_Word mercury__map__Map1_6,
#line 743 "map.m"
  MR_Word mercury__map__Map2_7,
#line 743 "map.m"
  MR_Word * mercury__map__Common_8)
#line 743 "map.m"
{
#line 1436 "map.m"
  {
#line 1436 "map.m"
    MR_bool mercury__map__succeeded;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList1_9;
#line 1436 "map.m"
    MR_Word mercury__map__AssocList2_10;
#line 1436 "map.m"
    MR_Word mercury__map__RevCommonAssocList_11;
#line 1436 "map.m"
    MR_Word mercury__map__V_12_12;
#line 1436 "map.m"
    MR_Word mercury__map__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1436 "map.m"
    MR_Word mercury__map__V_5_26;

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map1_6, mercury__map__V_5_19, &mercury__map__AssocList1_9);
    }
#line 85 "tree234.opt"
    mercury__map__V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__Map2_7, mercury__map__V_5_26, &mercury__map__AssocList2_10);
    }
#line 1440 "map.m"
    mercury__map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "map.m"
    {
#line 1439 "map.m"
      mercury__map__succeeded = mercury__map__intersect_loop_5_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__AssocList1_9, mercury__map__AssocList2_10, mercury__map__CommonPred_5, mercury__map__V_12_12, &mercury__map__RevCommonAssocList_11);
    }
#line 1436 "map.m"
    if (mercury__map__succeeded)
#line 1436 "map.m"
      {
#line 1135 "map.m"
        {
#line 1135 "map.m"
          mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_13, mercury__map__RevCommonAssocList_11, mercury__map__Common_8);
        }
#line 1135 "map.m"
        mercury__map__succeeded = MR_TRUE;
#line 1436 "map.m"
      }
#line 1436 "map.m"
    return mercury__map__succeeded;
#line 1436 "map.m"
  }
#line 743 "map.m"
}

#line 731 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl3_9_p_4(
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 731 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 731 "map.m"
  MR_Word mercury__map__Pred_10,
#line 731 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 731 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 731 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 731 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 731 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 731 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 731 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 731 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 731 "map.m"
{
#line 1424 "map.m"
  {
#line 1424 "map.m"
    MR_bool mercury__map__succeeded;

#line 1424 "map.m"
    {
#line 1424 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl3_9_p_4(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1424 "map.m"
    return mercury__map__succeeded;
#line 1424 "map.m"
  }
#line 731 "map.m"
}

#line 729 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_3(
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 729 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 729 "map.m"
  MR_Word mercury__map__Pred_10,
#line 729 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 729 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 729 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 729 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 729 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 729 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 729 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 729 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 729 "map.m"
{
#line 1424 "map.m"
  {
#line 1424 "map.m"
    MR_bool mercury__map__succeeded;

#line 1424 "map.m"
    {
#line 1424 "map.m"
      mercury__tree234__map_values_foldl3_9_p_3(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1424 "map.m"
      return;
    }
#line 1424 "map.m"
  }
#line 729 "map.m"
}

#line 727 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_2(
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 727 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 727 "map.m"
  MR_Word mercury__map__Pred_10,
#line 727 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 727 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 727 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 727 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 727 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 727 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 727 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 727 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 727 "map.m"
{
#line 1424 "map.m"
  {
#line 1424 "map.m"
    MR_bool mercury__map__succeeded;

#line 1424 "map.m"
    {
#line 1424 "map.m"
      mercury__tree234__map_values_foldl3_9_p_2(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1424 "map.m"
      return;
    }
#line 1424 "map.m"
  }
#line 727 "map.m"
}

#line 725 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_1(
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 725 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 725 "map.m"
  MR_Word mercury__map__Pred_10,
#line 725 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 725 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 725 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 725 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 725 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 725 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 725 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 725 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 725 "map.m"
{
#line 1424 "map.m"
  {
#line 1424 "map.m"
    MR_bool mercury__map__succeeded;

#line 1424 "map.m"
    {
#line 1424 "map.m"
      mercury__tree234__map_values_foldl3_9_p_1(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1424 "map.m"
      return;
    }
#line 1424 "map.m"
  }
#line 725 "map.m"
}

#line 723 "map.m"
void MR_CALL 
mercury__map__map_values_foldl3_9_p_0(
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_27,
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_28,
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_29,
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_30,
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_31,
#line 723 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_32,
#line 723 "map.m"
  MR_Word mercury__map__Pred_10,
#line 723 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 723 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 723 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 723 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 723 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 723 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 723 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 723 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 723 "map.m"
{
#line 1424 "map.m"
  {
#line 1424 "map.m"
    MR_bool mercury__map__succeeded;

#line 1424 "map.m"
    {
#line 1424 "map.m"
      mercury__tree234__map_values_foldl3_9_p_0(mercury__map__TypeInfo_for_V_27, mercury__map__TypeInfo_for_W_28, mercury__map__TypeInfo_for_A_29, mercury__map__TypeInfo_for_B_30, mercury__map__TypeInfo_for_C_31, mercury__map__TypeInfo_for_K_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1424 "map.m"
      return;
    }
#line 1424 "map.m"
  }
#line 723 "map.m"
}

#line 716 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl2_7_p_3(
#line 716 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 716 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 716 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 716 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 716 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 716 "map.m"
  MR_Word mercury__map__Pred_8,
#line 716 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 716 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 716 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 716 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 716 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 716 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 716 "map.m"
{
#line 1421 "map.m"
  {
#line 1421 "map.m"
    MR_bool mercury__map__succeeded;

#line 1421 "map.m"
    {
#line 1421 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl2_7_p_3(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1421 "map.m"
    return mercury__map__succeeded;
#line 1421 "map.m"
  }
#line 716 "map.m"
}

#line 714 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_2(
#line 714 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 714 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 714 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 714 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 714 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 714 "map.m"
  MR_Word mercury__map__Pred_8,
#line 714 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 714 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 714 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 714 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 714 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 714 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 714 "map.m"
{
#line 1421 "map.m"
  {
#line 1421 "map.m"
    MR_bool mercury__map__succeeded;

#line 1421 "map.m"
    {
#line 1421 "map.m"
      mercury__tree234__map_values_foldl2_7_p_2(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1421 "map.m"
      return;
    }
#line 1421 "map.m"
  }
#line 714 "map.m"
}

#line 712 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_1(
#line 712 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 712 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 712 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 712 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 712 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 712 "map.m"
  MR_Word mercury__map__Pred_8,
#line 712 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 712 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 712 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 712 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 712 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 712 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 712 "map.m"
{
#line 1421 "map.m"
  {
#line 1421 "map.m"
    MR_bool mercury__map__succeeded;

#line 1421 "map.m"
    {
#line 1421 "map.m"
      mercury__tree234__map_values_foldl2_7_p_1(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1421 "map.m"
      return;
    }
#line 1421 "map.m"
  }
#line 712 "map.m"
}

#line 710 "map.m"
void MR_CALL 
mercury__map__map_values_foldl2_7_p_0(
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_21,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_22,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_23,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_24,
#line 710 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_25,
#line 710 "map.m"
  MR_Word mercury__map__Pred_8,
#line 710 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 710 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 710 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 710 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 710 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 710 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 710 "map.m"
{
#line 1421 "map.m"
  {
#line 1421 "map.m"
    MR_bool mercury__map__succeeded;

#line 1421 "map.m"
    {
#line 1421 "map.m"
      mercury__tree234__map_values_foldl2_7_p_0(mercury__map__TypeInfo_for_V_21, mercury__map__TypeInfo_for_W_22, mercury__map__TypeInfo_for_A_23, mercury__map__TypeInfo_for_B_24, mercury__map__TypeInfo_for_K_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1421 "map.m"
      return;
    }
#line 1421 "map.m"
  }
#line 710 "map.m"
}

#line 703 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_foldl_5_p_2(
#line 703 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 703 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 703 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 703 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 703 "map.m"
  MR_Word mercury__map__Pred_6,
#line 703 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 703 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 703 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 703 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 703 "map.m"
{
#line 1418 "map.m"
  {
#line 1418 "map.m"
    MR_bool mercury__map__succeeded;

#line 1418 "map.m"
    {
#line 1418 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_foldl_5_p_2(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1418 "map.m"
    return mercury__map__succeeded;
#line 1418 "map.m"
  }
#line 703 "map.m"
}

#line 701 "map.m"
void MR_CALL 
mercury__map__map_values_foldl_5_p_1(
#line 701 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 701 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 701 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 701 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 701 "map.m"
  MR_Word mercury__map__Pred_6,
#line 701 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 701 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 701 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 701 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 701 "map.m"
{
#line 1418 "map.m"
  {
#line 1418 "map.m"
    MR_bool mercury__map__succeeded;

#line 1418 "map.m"
    {
#line 1418 "map.m"
      mercury__tree234__map_values_foldl_5_p_1(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1418 "map.m"
      return;
    }
#line 1418 "map.m"
  }
#line 701 "map.m"
}

#line 699 "map.m"
void MR_CALL 
mercury__map__map_values_foldl_5_p_0(
#line 699 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 699 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_16,
#line 699 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_17,
#line 699 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_18,
#line 699 "map.m"
  MR_Word mercury__map__Pred_6,
#line 699 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 699 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 699 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 699 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 699 "map.m"
{
#line 1418 "map.m"
  {
#line 1418 "map.m"
    MR_bool mercury__map__succeeded;

#line 1418 "map.m"
    {
#line 1418 "map.m"
      mercury__tree234__map_values_foldl_5_p_0(mercury__map__TypeInfo_for_V_15, mercury__map__TypeInfo_for_W_16, mercury__map__TypeInfo_for_A_17, mercury__map__TypeInfo_for_K_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1418 "map.m"
      return;
    }
#line 1418 "map.m"
  }
#line 699 "map.m"
}

#line 693 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_7(
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 693 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 693 "map.m"
  MR_Word mercury__map__Pred_10,
#line 693 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 693 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 693 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 693 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 693 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 693 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 693 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 693 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 693 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_7(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1415 "map.m"
    return mercury__map__succeeded;
#line 1415 "map.m"
  }
#line 693 "map.m"
}

#line 691 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_6(
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 691 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 691 "map.m"
  MR_Word mercury__map__Pred_10,
#line 691 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 691 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 691 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 691 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 691 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 691 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 691 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 691 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 691 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_6(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1415 "map.m"
    return mercury__map__succeeded;
#line 1415 "map.m"
  }
#line 691 "map.m"
}

#line 689 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl3_9_p_5(
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 689 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 689 "map.m"
  MR_Word mercury__map__Pred_10,
#line 689 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 689 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 689 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 689 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 689 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 689 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 689 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 689 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 689 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl3_9_p_5(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
    }
#line 1415 "map.m"
    return mercury__map__succeeded;
#line 1415 "map.m"
  }
#line 689 "map.m"
}

#line 687 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_4(
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 687 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 687 "map.m"
  MR_Word mercury__map__Pred_10,
#line 687 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 687 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 687 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 687 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 687 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 687 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 687 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 687 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 687 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      mercury__tree234__map_foldl3_9_p_3(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1415 "map.m"
      return;
    }
#line 1415 "map.m"
  }
#line 687 "map.m"
}

#line 685 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_3(
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 685 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 685 "map.m"
  MR_Word mercury__map__Pred_10,
#line 685 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 685 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 685 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 685 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 685 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 685 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 685 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 685 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 685 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      mercury__tree234__map_foldl3_9_p_4(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1415 "map.m"
      return;
    }
#line 1415 "map.m"
  }
#line 685 "map.m"
}

#line 683 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_2(
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 683 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 683 "map.m"
  MR_Word mercury__map__Pred_10,
#line 683 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 683 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 683 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 683 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 683 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 683 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 683 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 683 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 683 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      mercury__tree234__map_foldl3_9_p_2(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1415 "map.m"
      return;
    }
#line 1415 "map.m"
  }
#line 683 "map.m"
}

#line 681 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_1(
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 681 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 681 "map.m"
  MR_Word mercury__map__Pred_10,
#line 681 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 681 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 681 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 681 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 681 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 681 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 681 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 681 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 681 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      mercury__tree234__map_foldl3_9_p_1(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1415 "map.m"
      return;
    }
#line 1415 "map.m"
  }
#line 681 "map.m"
}

#line 679 "map.m"
void MR_CALL 
mercury__map__map_foldl3_9_p_0(
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_29,
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_30,
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_31,
#line 679 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_32,
#line 679 "map.m"
  MR_Word mercury__map__Pred_10,
#line 679 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_15,
#line 679 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_16,
#line 679 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_17,
#line 679 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_18,
#line 679 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_19,
#line 679 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_20,
#line 679 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccC_0_21,
#line 679 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccC_22)
#line 679 "map.m"
{
#line 1415 "map.m"
  {
#line 1415 "map.m"
    MR_bool mercury__map__succeeded;

#line 1415 "map.m"
    {
#line 1415 "map.m"
      mercury__tree234__map_foldl3_9_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__TypeInfo_for_W_29, mercury__map__TypeInfo_for_A_30, mercury__map__TypeInfo_for_B_31, mercury__map__TypeInfo_for_C_32, mercury__map__Pred_10, mercury__map__STATE_VARIABLE_Map_0_15, mercury__map__STATE_VARIABLE_Map_16, mercury__map__STATE_VARIABLE_AccA_0_17, mercury__map__STATE_VARIABLE_AccA_18, mercury__map__STATE_VARIABLE_AccB_0_19, mercury__map__STATE_VARIABLE_AccB_20, mercury__map__STATE_VARIABLE_AccC_0_21, mercury__map__STATE_VARIABLE_AccC_22);
#line 1415 "map.m"
      return;
    }
#line 1415 "map.m"
  }
#line 679 "map.m"
}

#line 672 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_6(
#line 672 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 672 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 672 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 672 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 672 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 672 "map.m"
  MR_Word mercury__map__Pred_8,
#line 672 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 672 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 672 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 672 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 672 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 672 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 672 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_6(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1412 "map.m"
    return mercury__map__succeeded;
#line 1412 "map.m"
  }
#line 672 "map.m"
}

#line 670 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_5(
#line 670 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 670 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 670 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 670 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 670 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 670 "map.m"
  MR_Word mercury__map__Pred_8,
#line 670 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 670 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 670 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 670 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 670 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 670 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 670 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_5(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1412 "map.m"
    return mercury__map__succeeded;
#line 1412 "map.m"
  }
#line 670 "map.m"
}

#line 668 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl2_7_p_4(
#line 668 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 668 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 668 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 668 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 668 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 668 "map.m"
  MR_Word mercury__map__Pred_8,
#line 668 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 668 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 668 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 668 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 668 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 668 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 668 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl2_7_p_4(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
    }
#line 1412 "map.m"
    return mercury__map__succeeded;
#line 1412 "map.m"
  }
#line 668 "map.m"
}

#line 666 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_3(
#line 666 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 666 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 666 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 666 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 666 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 666 "map.m"
  MR_Word mercury__map__Pred_8,
#line 666 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 666 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 666 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 666 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 666 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 666 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 666 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      mercury__tree234__map_foldl2_7_p_2(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1412 "map.m"
      return;
    }
#line 1412 "map.m"
  }
#line 666 "map.m"
}

#line 664 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_2(
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 664 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 664 "map.m"
  MR_Word mercury__map__Pred_8,
#line 664 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 664 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 664 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 664 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 664 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 664 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 664 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      mercury__tree234__map_foldl2_7_p_3(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1412 "map.m"
      return;
    }
#line 1412 "map.m"
  }
#line 664 "map.m"
}

#line 662 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_1(
#line 662 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 662 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 662 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 662 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 662 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 662 "map.m"
  MR_Word mercury__map__Pred_8,
#line 662 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 662 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 662 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 662 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 662 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 662 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 662 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      mercury__tree234__map_foldl2_7_p_1(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1412 "map.m"
      return;
    }
#line 1412 "map.m"
  }
#line 662 "map.m"
}

#line 660 "map.m"
void MR_CALL 
mercury__map__map_foldl2_7_p_0(
#line 660 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_21,
#line 660 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_22,
#line 660 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_23,
#line 660 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 660 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 660 "map.m"
  MR_Word mercury__map__Pred_8,
#line 660 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 660 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13,
#line 660 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_14,
#line 660 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_15,
#line 660 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccB_0_16,
#line 660 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccB_17)
#line 660 "map.m"
{
#line 1412 "map.m"
  {
#line 1412 "map.m"
    MR_bool mercury__map__succeeded;

#line 1412 "map.m"
    {
#line 1412 "map.m"
      mercury__tree234__map_foldl2_7_p_0(mercury__map__TypeInfo_for_K_21, mercury__map__TypeInfo_for_V_22, mercury__map__TypeInfo_for_W_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__Pred_8, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13, mercury__map__STATE_VARIABLE_AccA_0_14, mercury__map__STATE_VARIABLE_AccA_15, mercury__map__STATE_VARIABLE_AccB_0_16, mercury__map__STATE_VARIABLE_AccB_17);
#line 1412 "map.m"
      return;
    }
#line 1412 "map.m"
  }
#line 660 "map.m"
}

#line 653 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_5(
#line 653 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 653 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 653 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 653 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 653 "map.m"
  MR_Word mercury__map__Pred_6,
#line 653 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 653 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 653 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 653 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 653 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_5(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1409 "map.m"
    return mercury__map__succeeded;
#line 1409 "map.m"
  }
#line 653 "map.m"
}

#line 651 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_4(
#line 651 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 651 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 651 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 651 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 651 "map.m"
  MR_Word mercury__map__Pred_6,
#line 651 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 651 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 651 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 651 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 651 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_4(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1409 "map.m"
    return mercury__map__succeeded;
#line 1409 "map.m"
  }
#line 651 "map.m"
}

#line 649 "map.m"
MR_bool MR_CALL 
mercury__map__map_foldl_5_p_3(
#line 649 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 649 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 649 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 649 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 649 "map.m"
  MR_Word mercury__map__Pred_6,
#line 649 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 649 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 649 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 649 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 649 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_foldl_5_p_3(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
    }
#line 1409 "map.m"
    return mercury__map__succeeded;
#line 1409 "map.m"
  }
#line 649 "map.m"
}

#line 647 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_2(
#line 647 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 647 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 647 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 647 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 647 "map.m"
  MR_Word mercury__map__Pred_6,
#line 647 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 647 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 647 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 647 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 647 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      mercury__tree234__map_foldl_5_p_2(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1409 "map.m"
      return;
    }
#line 1409 "map.m"
  }
#line 647 "map.m"
}

#line 645 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_1(
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 645 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 645 "map.m"
  MR_Word mercury__map__Pred_6,
#line 645 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 645 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 645 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 645 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 645 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      mercury__tree234__map_foldl_5_p_1(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1409 "map.m"
      return;
    }
#line 1409 "map.m"
  }
#line 645 "map.m"
}

#line 643 "map.m"
void MR_CALL 
mercury__map__map_foldl_5_p_0(
#line 643 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_15,
#line 643 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_16,
#line 643 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_17,
#line 643 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 643 "map.m"
  MR_Word mercury__map__Pred_6,
#line 643 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 643 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10,
#line 643 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_AccA_0_11,
#line 643 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_AccA_12)
#line 643 "map.m"
{
#line 1409 "map.m"
  {
#line 1409 "map.m"
    MR_bool mercury__map__succeeded;

#line 1409 "map.m"
    {
#line 1409 "map.m"
      mercury__tree234__map_foldl_5_p_0(mercury__map__TypeInfo_for_K_15, mercury__map__TypeInfo_for_V_16, mercury__map__TypeInfo_for_W_17, mercury__map__TypeInfo_for_A_18, mercury__map__Pred_6, mercury__map__STATE_VARIABLE_Map_0_9, mercury__map__STATE_VARIABLE_Map_10, mercury__map__STATE_VARIABLE_AccA_0_11, mercury__map__STATE_VARIABLE_AccA_12);
#line 1409 "map.m"
      return;
    }
#line 1409 "map.m"
  }
#line 643 "map.m"
}

#line 637 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_only_3_p_1(
#line 637 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 637 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_8,
#line 637 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 637 "map.m"
  MR_Word mercury__map__Pred_4,
#line 637 "map.m"
  MR_Word mercury__map__Map0_5,
#line 637 "map.m"
  MR_Word * mercury__map__Map_6)
#line 637 "map.m"
{
#line 1406 "map.m"
  {
#line 1406 "map.m"
    MR_bool mercury__map__succeeded;

#line 1406 "map.m"
    {
#line 1406 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_only_3_p_1(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
#line 1406 "map.m"
    return mercury__map__succeeded;
#line 1406 "map.m"
  }
#line 637 "map.m"
}

#line 636 "map.m"
void MR_CALL 
mercury__map__map_values_only_3_p_0(
#line 636 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 636 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_8,
#line 636 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 636 "map.m"
  MR_Word mercury__map__Pred_4,
#line 636 "map.m"
  MR_Word mercury__map__Map0_5,
#line 636 "map.m"
  MR_Word * mercury__map__Map_6)
#line 636 "map.m"
{
#line 1406 "map.m"
  {
#line 1406 "map.m"
    MR_bool mercury__map__succeeded;

#line 1406 "map.m"
    {
#line 1406 "map.m"
      mercury__tree234__map_values_only_3_p_0(mercury__map__TypeInfo_for_V_7, mercury__map__TypeInfo_for_W_8, mercury__map__TypeInfo_for_K_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
#line 1406 "map.m"
      return;
    }
#line 1406 "map.m"
  }
#line 636 "map.m"
}

#line 634 "map.m"
MR_Word MR_CALL 
mercury__map__map_values_only_2_f_0(
#line 634 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 634 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_15,
#line 634 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 634 "map.m"
  MR_Word mercury__map__F_4,
#line 634 "map.m"
  MR_Word mercury__map__M1_5)
#line 634 "map.m"
{
#line 1406 "map.m"
  {
#line 1406 "map.m"
    MR_bool mercury__map__succeeded;
#line 1406 "map.m"
    MR_Word mercury__map__M2_6;

#line 1406 "map.m"
    {
#line 1406 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_111_110_108_121_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
#line 1406 "map.m"
    return mercury__map__M2_6;
#line 1406 "map.m"
  }
#line 634 "map.m"
}

#line 630 "map.m"
MR_bool MR_CALL 
mercury__map__map_values_3_p_1(
#line 630 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 630 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 630 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_9,
#line 630 "map.m"
  MR_Word mercury__map__Pred_4,
#line 630 "map.m"
  MR_Word mercury__map__Map0_5,
#line 630 "map.m"
  MR_Word * mercury__map__Map_6)
#line 630 "map.m"
{
#line 1399 "map.m"
  {
#line 1399 "map.m"
    MR_bool mercury__map__succeeded;

#line 1399 "map.m"
    {
#line 1399 "map.m"
      return mercury__map__succeeded = mercury__tree234__map_values_3_p_1(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
    }
#line 1399 "map.m"
    return mercury__map__succeeded;
#line 1399 "map.m"
  }
#line 630 "map.m"
}

#line 629 "map.m"
void MR_CALL 
mercury__map__map_values_3_p_0(
#line 629 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 629 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 629 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_9,
#line 629 "map.m"
  MR_Word mercury__map__Pred_4,
#line 629 "map.m"
  MR_Word mercury__map__Map0_5,
#line 629 "map.m"
  MR_Word * mercury__map__Map_6)
#line 629 "map.m"
{
#line 1399 "map.m"
  {
#line 1399 "map.m"
    MR_bool mercury__map__succeeded;

#line 1399 "map.m"
    {
#line 1399 "map.m"
      mercury__tree234__map_values_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__TypeInfo_for_W_9, mercury__map__Pred_4, mercury__map__Map0_5, mercury__map__Map_6);
#line 1399 "map.m"
      return;
    }
#line 1399 "map.m"
  }
#line 629 "map.m"
}

#line 627 "map.m"
MR_Word MR_CALL 
mercury__map__map_values_2_f_0(
#line 627 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 627 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 627 "map.m"
  MR_Word mercury__map__TypeInfo_for_W_19,
#line 627 "map.m"
  MR_Word mercury__map__F_4,
#line 627 "map.m"
  MR_Word mercury__map__M1_5)
#line 627 "map.m"
{
#line 1399 "map.m"
  {
#line 1399 "map.m"
    MR_bool mercury__map__succeeded;
#line 1399 "map.m"
    MR_Word mercury__map__M2_6;

#line 1399 "map.m"
    {
#line 1399 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(mercury__map__F_4, mercury__map__M1_5, &mercury__map__M2_6);
    }
#line 1399 "map.m"
    return mercury__map__M2_6;
#line 1399 "map.m"
  }
#line 627 "map.m"
}

#line 621 "map.m"
MR_bool MR_CALL 
mercury__map__foldr5_12_p_5(
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 621 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 621 "map.m"
  MR_Word mercury__map__Pred_13,
#line 621 "map.m"
  MR_Word mercury__map__Map_14,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 621 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 621 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 621 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr5_12_p_5(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1390 "map.m"
    return mercury__map__succeeded;
#line 1390 "map.m"
  }
#line 621 "map.m"
}

#line 618 "map.m"
MR_bool MR_CALL 
mercury__map__foldr5_12_p_4(
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 618 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 618 "map.m"
  MR_Word mercury__map__Pred_13,
#line 618 "map.m"
  MR_Word mercury__map__Map_14,
#line 618 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 618 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 618 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 618 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 618 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 618 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 618 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 618 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 618 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 618 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 618 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr5_12_p_4(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1390 "map.m"
    return mercury__map__succeeded;
#line 1390 "map.m"
  }
#line 618 "map.m"
}

#line 615 "map.m"
MR_bool MR_CALL 
mercury__map__foldr5_12_p_3(
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 615 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 615 "map.m"
  MR_Word mercury__map__Pred_13,
#line 615 "map.m"
  MR_Word mercury__map__Map_14,
#line 615 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 615 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 615 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 615 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 615 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 615 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 615 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 615 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 615 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 615 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 615 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr5_12_p_3(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1390 "map.m"
    return mercury__map__succeeded;
#line 1390 "map.m"
  }
#line 615 "map.m"
}

#line 612 "map.m"
void MR_CALL 
mercury__map__foldr5_12_p_2(
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 612 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 612 "map.m"
  MR_Word mercury__map__Pred_13,
#line 612 "map.m"
  MR_Word mercury__map__Map_14,
#line 612 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 612 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 612 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 612 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 612 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 612 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 612 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 612 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 612 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 612 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 612 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      mercury__tree234__foldr5_12_p_2(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1390 "map.m"
      return;
    }
#line 1390 "map.m"
  }
#line 612 "map.m"
}

#line 609 "map.m"
void MR_CALL 
mercury__map__foldr5_12_p_1(
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 609 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 609 "map.m"
  MR_Word mercury__map__Pred_13,
#line 609 "map.m"
  MR_Word mercury__map__Map_14,
#line 609 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 609 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 609 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 609 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 609 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 609 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 609 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 609 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 609 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 609 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 609 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      mercury__tree234__foldr5_12_p_1(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1390 "map.m"
      return;
    }
#line 1390 "map.m"
  }
#line 609 "map.m"
}

#line 606 "map.m"
void MR_CALL 
mercury__map__foldr5_12_p_0(
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 606 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 606 "map.m"
  MR_Word mercury__map__Pred_13,
#line 606 "map.m"
  MR_Word mercury__map__Map_14,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 606 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 606 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 606 "map.m"
{
#line 1390 "map.m"
  {
#line 1390 "map.m"
    MR_bool mercury__map__succeeded;

#line 1390 "map.m"
    {
#line 1390 "map.m"
      mercury__tree234__foldr5_12_p_0(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1390 "map.m"
      return;
    }
#line 1390 "map.m"
  }
#line 606 "map.m"
}

#line 601 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_8(
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 601 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 601 "map.m"
  MR_Word mercury__map__Pred_11,
#line 601 "map.m"
  MR_Word mercury__map__Map_12,
#line 601 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 601 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 601 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 601 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 601 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 601 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 601 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 601 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 601 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_8(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1387 "map.m"
    return mercury__map__succeeded;
#line 1387 "map.m"
  }
#line 601 "map.m"
}

#line 599 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_7(
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 599 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 599 "map.m"
  MR_Word mercury__map__Pred_11,
#line 599 "map.m"
  MR_Word mercury__map__Map_12,
#line 599 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 599 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 599 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 599 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 599 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 599 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 599 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 599 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 599 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_7(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1387 "map.m"
    return mercury__map__succeeded;
#line 1387 "map.m"
  }
#line 599 "map.m"
}

#line 597 "map.m"
MR_bool MR_CALL 
mercury__map__foldr4_10_p_6(
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 597 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 597 "map.m"
  MR_Word mercury__map__Pred_11,
#line 597 "map.m"
  MR_Word mercury__map__Map_12,
#line 597 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 597 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 597 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 597 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 597 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 597 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 597 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 597 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 597 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr4_10_p_6(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1387 "map.m"
    return mercury__map__succeeded;
#line 1387 "map.m"
  }
#line 597 "map.m"
}

#line 595 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_5(
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 595 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 595 "map.m"
  MR_Word mercury__map__Pred_11,
#line 595 "map.m"
  MR_Word mercury__map__Map_12,
#line 595 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 595 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 595 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 595 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 595 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 595 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 595 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 595 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 595 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 595 "map.m"
}

#line 593 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_4(
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 593 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 593 "map.m"
  MR_Word mercury__map__Pred_11,
#line 593 "map.m"
  MR_Word mercury__map__Map_12,
#line 593 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 593 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 593 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 593 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 593 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 593 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 593 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 593 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 593 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 593 "map.m"
}

#line 591 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_3(
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 591 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 591 "map.m"
  MR_Word mercury__map__Pred_11,
#line 591 "map.m"
  MR_Word mercury__map__Map_12,
#line 591 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 591 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 591 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 591 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 591 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 591 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 591 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 591 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 591 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 591 "map.m"
}

#line 589 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_2(
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 589 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 589 "map.m"
  MR_Word mercury__map__Pred_11,
#line 589 "map.m"
  MR_Word mercury__map__Map_12,
#line 589 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 589 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 589 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 589 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 589 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 589 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 589 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 589 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 589 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 589 "map.m"
}

#line 587 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_1(
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 587 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 587 "map.m"
  MR_Word mercury__map__Pred_11,
#line 587 "map.m"
  MR_Word mercury__map__Map_12,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 587 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 587 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 587 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 587 "map.m"
}

#line 585 "map.m"
void MR_CALL 
mercury__map__foldr4_10_p_0(
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 585 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 585 "map.m"
  MR_Word mercury__map__Pred_11,
#line 585 "map.m"
  MR_Word mercury__map__Map_12,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 585 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 585 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 585 "map.m"
{
#line 1387 "map.m"
  {
#line 1387 "map.m"
    MR_bool mercury__map__succeeded;

#line 1387 "map.m"
    {
#line 1387 "map.m"
      mercury__tree234__foldr4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1387 "map.m"
      return;
    }
#line 1387 "map.m"
  }
#line 585 "map.m"
}

#line 580 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_7(
#line 580 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 580 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 580 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 580 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 580 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 580 "map.m"
  MR_Word mercury__map__Pred_9,
#line 580 "map.m"
  MR_Word mercury__map__Map_10,
#line 580 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 580 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 580 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 580 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 580 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 580 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 580 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1384 "map.m"
    return mercury__map__succeeded;
#line 1384 "map.m"
  }
#line 580 "map.m"
}

#line 578 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_6(
#line 578 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 578 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 578 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 578 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 578 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 578 "map.m"
  MR_Word mercury__map__Pred_9,
#line 578 "map.m"
  MR_Word mercury__map__Map_10,
#line 578 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 578 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 578 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 578 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 578 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 578 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 578 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1384 "map.m"
    return mercury__map__succeeded;
#line 1384 "map.m"
  }
#line 578 "map.m"
}

#line 576 "map.m"
MR_bool MR_CALL 
mercury__map__foldr3_8_p_5(
#line 576 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 576 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 576 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 576 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 576 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 576 "map.m"
  MR_Word mercury__map__Pred_9,
#line 576 "map.m"
  MR_Word mercury__map__Map_10,
#line 576 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 576 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 576 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 576 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 576 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 576 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 576 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1384 "map.m"
    return mercury__map__succeeded;
#line 1384 "map.m"
  }
#line 576 "map.m"
}

#line 574 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_4(
#line 574 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 574 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 574 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 574 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 574 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 574 "map.m"
  MR_Word mercury__map__Pred_9,
#line 574 "map.m"
  MR_Word mercury__map__Map_10,
#line 574 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 574 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 574 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 574 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 574 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 574 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 574 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      mercury__tree234__foldr3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1384 "map.m"
      return;
    }
#line 1384 "map.m"
  }
#line 574 "map.m"
}

#line 572 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_3(
#line 572 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 572 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 572 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 572 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 572 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 572 "map.m"
  MR_Word mercury__map__Pred_9,
#line 572 "map.m"
  MR_Word mercury__map__Map_10,
#line 572 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 572 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 572 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 572 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 572 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 572 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 572 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      mercury__tree234__foldr3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1384 "map.m"
      return;
    }
#line 1384 "map.m"
  }
#line 572 "map.m"
}

#line 570 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_2(
#line 570 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 570 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 570 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 570 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 570 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 570 "map.m"
  MR_Word mercury__map__Pred_9,
#line 570 "map.m"
  MR_Word mercury__map__Map_10,
#line 570 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 570 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 570 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 570 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 570 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 570 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 570 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      mercury__tree234__foldr3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1384 "map.m"
      return;
    }
#line 1384 "map.m"
  }
#line 570 "map.m"
}

#line 568 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_1(
#line 568 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 568 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 568 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 568 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 568 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 568 "map.m"
  MR_Word mercury__map__Pred_9,
#line 568 "map.m"
  MR_Word mercury__map__Map_10,
#line 568 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 568 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 568 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 568 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 568 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 568 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 568 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      mercury__tree234__foldr3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1384 "map.m"
      return;
    }
#line 1384 "map.m"
  }
#line 568 "map.m"
}

#line 566 "map.m"
void MR_CALL 
mercury__map__foldr3_8_p_0(
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 566 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 566 "map.m"
  MR_Word mercury__map__Pred_9,
#line 566 "map.m"
  MR_Word mercury__map__Map_10,
#line 566 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 566 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 566 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 566 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 566 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 566 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 566 "map.m"
{
#line 1384 "map.m"
  {
#line 1384 "map.m"
    MR_bool mercury__map__succeeded;

#line 1384 "map.m"
    {
#line 1384 "map.m"
      mercury__tree234__foldr3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1384 "map.m"
      return;
    }
#line 1384 "map.m"
  }
#line 566 "map.m"
}

#line 562 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_6(
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 562 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 562 "map.m"
  MR_Word mercury__map__Pred_7,
#line 562 "map.m"
  MR_Word mercury__map__Map_8,
#line 562 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 562 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 562 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 562 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 562 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1381 "map.m"
    return mercury__map__succeeded;
#line 1381 "map.m"
  }
#line 562 "map.m"
}

#line 560 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_5(
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 560 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 560 "map.m"
  MR_Word mercury__map__Pred_7,
#line 560 "map.m"
  MR_Word mercury__map__Map_8,
#line 560 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 560 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 560 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 560 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 560 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1381 "map.m"
    return mercury__map__succeeded;
#line 1381 "map.m"
  }
#line 560 "map.m"
}

#line 558 "map.m"
MR_bool MR_CALL 
mercury__map__foldr2_6_p_4(
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 558 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 558 "map.m"
  MR_Word mercury__map__Pred_7,
#line 558 "map.m"
  MR_Word mercury__map__Map_8,
#line 558 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 558 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 558 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 558 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 558 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1381 "map.m"
    return mercury__map__succeeded;
#line 1381 "map.m"
  }
#line 558 "map.m"
}

#line 556 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_3(
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 556 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 556 "map.m"
  MR_Word mercury__map__Pred_7,
#line 556 "map.m"
  MR_Word mercury__map__Map_8,
#line 556 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 556 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 556 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 556 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 556 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      mercury__tree234__foldr2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1381 "map.m"
      return;
    }
#line 1381 "map.m"
  }
#line 556 "map.m"
}

#line 554 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_2(
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 554 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 554 "map.m"
  MR_Word mercury__map__Pred_7,
#line 554 "map.m"
  MR_Word mercury__map__Map_8,
#line 554 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 554 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 554 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 554 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 554 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      mercury__tree234__foldr2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1381 "map.m"
      return;
    }
#line 1381 "map.m"
  }
#line 554 "map.m"
}

#line 552 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_1(
#line 552 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 552 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 552 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 552 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 552 "map.m"
  MR_Word mercury__map__Pred_7,
#line 552 "map.m"
  MR_Word mercury__map__Map_8,
#line 552 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 552 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 552 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 552 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 552 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      mercury__tree234__foldr2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1381 "map.m"
      return;
    }
#line 1381 "map.m"
  }
#line 552 "map.m"
}

#line 550 "map.m"
void MR_CALL 
mercury__map__foldr2_6_p_0(
#line 550 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 550 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 550 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 550 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 550 "map.m"
  MR_Word mercury__map__Pred_7,
#line 550 "map.m"
  MR_Word mercury__map__Map_8,
#line 550 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 550 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 550 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 550 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 550 "map.m"
{
#line 1381 "map.m"
  {
#line 1381 "map.m"
    MR_bool mercury__map__succeeded;

#line 1381 "map.m"
    {
#line 1381 "map.m"
      mercury__tree234__foldr2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1381 "map.m"
      return;
    }
#line 1381 "map.m"
  }
#line 550 "map.m"
}

#line 547 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_8(
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 547 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 547 "map.m"
  MR_Word mercury__map__Pred_5,
#line 547 "map.m"
  MR_Word mercury__map__Map_6,
#line 547 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 547 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 547 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 547 "map.m"
}

#line 545 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_7(
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 545 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 545 "map.m"
  MR_Word mercury__map__Pred_5,
#line 545 "map.m"
  MR_Word mercury__map__Map_6,
#line 545 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 545 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 545 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 545 "map.m"
}

#line 544 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_6(
#line 544 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 544 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 544 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 544 "map.m"
  MR_Word mercury__map__Pred_5,
#line 544 "map.m"
  MR_Word mercury__map__Map_6,
#line 544 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 544 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 544 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 544 "map.m"
}

#line 543 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_5(
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 543 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 543 "map.m"
  MR_Word mercury__map__Pred_5,
#line 543 "map.m"
  MR_Word mercury__map__Map_6,
#line 543 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 543 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 543 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1378 "map.m"
    return mercury__map__succeeded;
#line 1378 "map.m"
  }
#line 543 "map.m"
}

#line 542 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_4(
#line 542 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 542 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 542 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 542 "map.m"
  MR_Word mercury__map__Pred_5,
#line 542 "map.m"
  MR_Word mercury__map__Map_6,
#line 542 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 542 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 542 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1378 "map.m"
    return mercury__map__succeeded;
#line 1378 "map.m"
  }
#line 542 "map.m"
}

#line 541 "map.m"
MR_bool MR_CALL 
mercury__map__foldr_4_p_3(
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 541 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 541 "map.m"
  MR_Word mercury__map__Pred_5,
#line 541 "map.m"
  MR_Word mercury__map__Map_6,
#line 541 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 541 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 541 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldr_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1378 "map.m"
    return mercury__map__succeeded;
#line 1378 "map.m"
  }
#line 541 "map.m"
}

#line 540 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_2(
#line 540 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 540 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 540 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 540 "map.m"
  MR_Word mercury__map__Pred_5,
#line 540 "map.m"
  MR_Word mercury__map__Map_6,
#line 540 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 540 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 540 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 540 "map.m"
}

#line 539 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_1(
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 539 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 539 "map.m"
  MR_Word mercury__map__Pred_5,
#line 539 "map.m"
  MR_Word mercury__map__Map_6,
#line 539 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 539 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 539 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 539 "map.m"
}

#line 538 "map.m"
void MR_CALL 
mercury__map__foldr_4_p_0(
#line 538 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 538 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 538 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 538 "map.m"
  MR_Word mercury__map__Pred_5,
#line 538 "map.m"
  MR_Word mercury__map__Map_6,
#line 538 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 538 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 538 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__tree234__foldr_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1378 "map.m"
      return;
    }
#line 1378 "map.m"
  }
#line 538 "map.m"
}

#line 536 "map.m"
MR_Box MR_CALL 
mercury__map__foldr_3_f_0(
#line 536 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_22,
#line 536 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 536 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 536 "map.m"
  MR_Word mercury__map__F_5,
#line 536 "map.m"
  MR_Word mercury__map__M_6,
#line 536 "map.m"
  MR_Box mercury__map__A_7)
#line 536 "map.m"
{
#line 1378 "map.m"
  {
#line 1378 "map.m"
    MR_bool mercury__map__succeeded;
#line 1378 "map.m"
    MR_Box mercury__map__B_8;

#line 1378 "map.m"
    {
#line 1378 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
#line 1378 "map.m"
    return mercury__map__B_8;
#line 1378 "map.m"
  }
#line 536 "map.m"
}

#line 533 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_8(
#line 533 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 533 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 533 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 533 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 533 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 533 "map.m"
  MR_Word mercury__map__Pred_9,
#line 533 "map.m"
  MR_Word mercury__map__Map_10,
#line 533 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 533 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 533 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 533 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 533 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 533 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 533 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_8(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 533 "map.m"
}

#line 531 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_7(
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 531 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 531 "map.m"
  MR_Word mercury__map__Pred_9,
#line 531 "map.m"
  MR_Word mercury__map__Map_10,
#line 531 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 531 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 531 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 531 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 531 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 531 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 531 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_7(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 531 "map.m"
}

#line 529 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_6(
#line 529 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 529 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 529 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 529 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 529 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 529 "map.m"
  MR_Word mercury__map__Pred_9,
#line 529 "map.m"
  MR_Word mercury__map__Map_10,
#line 529 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 529 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 529 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 529 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 529 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 529 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 529 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_6(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 529 "map.m"
}

#line 527 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_5(
#line 527 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 527 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 527 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 527 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 527 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 527 "map.m"
  MR_Word mercury__map__Pred_9,
#line 527 "map.m"
  MR_Word mercury__map__Map_10,
#line 527 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 527 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 527 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 527 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 527 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 527 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 527 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_5(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1371 "map.m"
    return mercury__map__succeeded;
#line 1371 "map.m"
  }
#line 527 "map.m"
}

#line 525 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_4(
#line 525 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 525 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 525 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 525 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 525 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 525 "map.m"
  MR_Word mercury__map__Pred_9,
#line 525 "map.m"
  MR_Word mercury__map__Map_10,
#line 525 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 525 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 525 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 525 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 525 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 525 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 525 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_4(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1371 "map.m"
    return mercury__map__succeeded;
#line 1371 "map.m"
  }
#line 525 "map.m"
}

#line 523 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_values_8_p_3(
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 523 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 523 "map.m"
  MR_Word mercury__map__Pred_9,
#line 523 "map.m"
  MR_Word mercury__map__Map_10,
#line 523 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 523 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 523 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 523 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 523 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 523 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 523 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_values_8_p_3(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1371 "map.m"
    return mercury__map__succeeded;
#line 1371 "map.m"
  }
#line 523 "map.m"
}

#line 521 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_2(
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 521 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 521 "map.m"
  MR_Word mercury__map__Pred_9,
#line 521 "map.m"
  MR_Word mercury__map__Map_10,
#line 521 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 521 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 521 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 521 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 521 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 521 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 521 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_2(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 521 "map.m"
}

#line 519 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_1(
#line 519 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 519 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 519 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 519 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 519 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 519 "map.m"
  MR_Word mercury__map__Pred_9,
#line 519 "map.m"
  MR_Word mercury__map__Map_10,
#line 519 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 519 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 519 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 519 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 519 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 519 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 519 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_1(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 519 "map.m"
}

#line 517 "map.m"
void MR_CALL 
mercury__map__foldl3_values_8_p_0(
#line 517 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 517 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 517 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_25,
#line 517 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_26,
#line 517 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 517 "map.m"
  MR_Word mercury__map__Pred_9,
#line 517 "map.m"
  MR_Word mercury__map__Map_10,
#line 517 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 517 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 517 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 517 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 517 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 517 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 517 "map.m"
{
#line 1371 "map.m"
  {
#line 1371 "map.m"
    MR_bool mercury__map__succeeded;

#line 1371 "map.m"
    {
#line 1371 "map.m"
      mercury__tree234__foldl3_values_8_p_0(mercury__map__TypeInfo_for_V_23, mercury__map__TypeInfo_for_A_24, mercury__map__TypeInfo_for_B_25, mercury__map__TypeInfo_for_C_26, mercury__map__TypeInfo_for_K_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1371 "map.m"
      return;
    }
#line 1371 "map.m"
  }
#line 517 "map.m"
}

#line 510 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_8(
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 510 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 510 "map.m"
  MR_Word mercury__map__Pred_7,
#line 510 "map.m"
  MR_Word mercury__map__Map_8,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 510 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 510 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 510 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_8(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 510 "map.m"
}

#line 508 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_7(
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 508 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 508 "map.m"
  MR_Word mercury__map__Pred_7,
#line 508 "map.m"
  MR_Word mercury__map__Map_8,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 508 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 508 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 508 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_7(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 508 "map.m"
}

#line 506 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_6(
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 506 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 506 "map.m"
  MR_Word mercury__map__Pred_7,
#line 506 "map.m"
  MR_Word mercury__map__Map_8,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 506 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 506 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 506 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_6(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 506 "map.m"
}

#line 504 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_5(
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 504 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 504 "map.m"
  MR_Word mercury__map__Pred_7,
#line 504 "map.m"
  MR_Word mercury__map__Map_8,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 504 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 504 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 504 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_5(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1368 "map.m"
    return mercury__map__succeeded;
#line 1368 "map.m"
  }
#line 504 "map.m"
}

#line 502 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_4(
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 502 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 502 "map.m"
  MR_Word mercury__map__Pred_7,
#line 502 "map.m"
  MR_Word mercury__map__Map_8,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 502 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 502 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 502 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_4(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1368 "map.m"
    return mercury__map__succeeded;
#line 1368 "map.m"
  }
#line 502 "map.m"
}

#line 500 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_values_6_p_3(
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 500 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 500 "map.m"
  MR_Word mercury__map__Pred_7,
#line 500 "map.m"
  MR_Word mercury__map__Map_8,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 500 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 500 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 500 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_values_6_p_3(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1368 "map.m"
    return mercury__map__succeeded;
#line 1368 "map.m"
  }
#line 500 "map.m"
}

#line 498 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_2(
#line 498 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 498 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 498 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 498 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 498 "map.m"
  MR_Word mercury__map__Pred_7,
#line 498 "map.m"
  MR_Word mercury__map__Map_8,
#line 498 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 498 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 498 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 498 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 498 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_2(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 498 "map.m"
}

#line 496 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_1(
#line 496 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 496 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 496 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 496 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 496 "map.m"
  MR_Word mercury__map__Pred_7,
#line 496 "map.m"
  MR_Word mercury__map__Map_8,
#line 496 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 496 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 496 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 496 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 496 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_1(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 496 "map.m"
}

#line 494 "map.m"
void MR_CALL 
mercury__map__foldl2_values_6_p_0(
#line 494 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 494 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_18,
#line 494 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_19,
#line 494 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_20,
#line 494 "map.m"
  MR_Word mercury__map__Pred_7,
#line 494 "map.m"
  MR_Word mercury__map__Map_8,
#line 494 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 494 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 494 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 494 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 494 "map.m"
{
#line 1368 "map.m"
  {
#line 1368 "map.m"
    MR_bool mercury__map__succeeded;

#line 1368 "map.m"
    {
#line 1368 "map.m"
      mercury__tree234__foldl2_values_6_p_0(mercury__map__TypeInfo_for_V_17, mercury__map__TypeInfo_for_A_18, mercury__map__TypeInfo_for_B_19, mercury__map__TypeInfo_for_K_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1368 "map.m"
      return;
    }
#line 1368 "map.m"
  }
#line 494 "map.m"
}

#line 488 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_8(
#line 488 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 488 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 488 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 488 "map.m"
  MR_Word mercury__map__Pred_5,
#line 488 "map.m"
  MR_Word mercury__map__Map_6,
#line 488 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 488 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 488 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_8(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 488 "map.m"
}

#line 487 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_7(
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 487 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 487 "map.m"
  MR_Word mercury__map__Pred_5,
#line 487 "map.m"
  MR_Word mercury__map__Map_6,
#line 487 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 487 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 487 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_7(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 487 "map.m"
}

#line 485 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_6(
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 485 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 485 "map.m"
  MR_Word mercury__map__Pred_5,
#line 485 "map.m"
  MR_Word mercury__map__Map_6,
#line 485 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 485 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 485 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_6(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 485 "map.m"
}

#line 484 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_5(
#line 484 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 484 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 484 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 484 "map.m"
  MR_Word mercury__map__Pred_5,
#line 484 "map.m"
  MR_Word mercury__map__Map_6,
#line 484 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 484 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 484 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_5(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1365 "map.m"
    return mercury__map__succeeded;
#line 1365 "map.m"
  }
#line 484 "map.m"
}

#line 482 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_4(
#line 482 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 482 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 482 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 482 "map.m"
  MR_Word mercury__map__Pred_5,
#line 482 "map.m"
  MR_Word mercury__map__Map_6,
#line 482 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 482 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 482 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_4(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1365 "map.m"
    return mercury__map__succeeded;
#line 1365 "map.m"
  }
#line 482 "map.m"
}

#line 481 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_values_4_p_3(
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 481 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 481 "map.m"
  MR_Word mercury__map__Pred_5,
#line 481 "map.m"
  MR_Word mercury__map__Map_6,
#line 481 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 481 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 481 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_values_4_p_3(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1365 "map.m"
    return mercury__map__succeeded;
#line 1365 "map.m"
  }
#line 481 "map.m"
}

#line 480 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_2(
#line 480 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 480 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 480 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 480 "map.m"
  MR_Word mercury__map__Pred_5,
#line 480 "map.m"
  MR_Word mercury__map__Map_6,
#line 480 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 480 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 480 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_2(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 480 "map.m"
}

#line 479 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_1(
#line 479 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 479 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 479 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 479 "map.m"
  MR_Word mercury__map__Pred_5,
#line 479 "map.m"
  MR_Word mercury__map__Map_6,
#line 479 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 479 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 479 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_1(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 479 "map.m"
}

#line 478 "map.m"
void MR_CALL 
mercury__map__foldl_values_4_p_0(
#line 478 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 478 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_12,
#line 478 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 478 "map.m"
  MR_Word mercury__map__Pred_5,
#line 478 "map.m"
  MR_Word mercury__map__Map_6,
#line 478 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 478 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 478 "map.m"
{
#line 1365 "map.m"
  {
#line 1365 "map.m"
    MR_bool mercury__map__succeeded;

#line 1365 "map.m"
    {
#line 1365 "map.m"
      mercury__tree234__foldl_values_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_A_12, mercury__map__TypeInfo_for_K_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1365 "map.m"
      return;
    }
#line 1365 "map.m"
  }
#line 478 "map.m"
}

#line 470 "map.m"
MR_bool MR_CALL 
mercury__map__foldl5_12_p_5(
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 470 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 470 "map.m"
  MR_Word mercury__map__Pred_13,
#line 470 "map.m"
  MR_Word mercury__map__Map_14,
#line 470 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 470 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 470 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 470 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 470 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 470 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 470 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 470 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 470 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 470 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 470 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl5_12_p_5(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1362 "map.m"
    return mercury__map__succeeded;
#line 1362 "map.m"
  }
#line 470 "map.m"
}

#line 467 "map.m"
MR_bool MR_CALL 
mercury__map__foldl5_12_p_4(
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 467 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 467 "map.m"
  MR_Word mercury__map__Pred_13,
#line 467 "map.m"
  MR_Word mercury__map__Map_14,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 467 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 467 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 467 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl5_12_p_4(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1362 "map.m"
    return mercury__map__succeeded;
#line 1362 "map.m"
  }
#line 467 "map.m"
}

#line 464 "map.m"
MR_bool MR_CALL 
mercury__map__foldl5_12_p_3(
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 464 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 464 "map.m"
  MR_Word mercury__map__Pred_13,
#line 464 "map.m"
  MR_Word mercury__map__Map_14,
#line 464 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 464 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 464 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 464 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 464 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 464 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 464 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 464 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 464 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 464 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 464 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl5_12_p_3(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
    }
#line 1362 "map.m"
    return mercury__map__succeeded;
#line 1362 "map.m"
  }
#line 464 "map.m"
}

#line 461 "map.m"
void MR_CALL 
mercury__map__foldl5_12_p_2(
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 461 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 461 "map.m"
  MR_Word mercury__map__Pred_13,
#line 461 "map.m"
  MR_Word mercury__map__Map_14,
#line 461 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 461 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 461 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 461 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 461 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 461 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 461 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 461 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 461 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 461 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 461 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      mercury__tree234__foldl5_12_p_2(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1362 "map.m"
      return;
    }
#line 1362 "map.m"
  }
#line 461 "map.m"
}

#line 458 "map.m"
void MR_CALL 
mercury__map__foldl5_12_p_1(
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 458 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 458 "map.m"
  MR_Word mercury__map__Pred_13,
#line 458 "map.m"
  MR_Word mercury__map__Map_14,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 458 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 458 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 458 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      mercury__tree234__foldl5_12_p_1(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1362 "map.m"
      return;
    }
#line 1362 "map.m"
  }
#line 458 "map.m"
}

#line 455 "map.m"
void MR_CALL 
mercury__map__foldl5_12_p_0(
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_35,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_36,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_37,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_38,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_39,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_40,
#line 455 "map.m"
  MR_Word mercury__map__TypeInfo_for_E_41,
#line 455 "map.m"
  MR_Word mercury__map__Pred_13,
#line 455 "map.m"
  MR_Word mercury__map__Map_14,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_20,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_21,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_22,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_23,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_24,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_25,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_26,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_27,
#line 455 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_E_0_28,
#line 455 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_E_29)
#line 455 "map.m"
{
#line 1362 "map.m"
  {
#line 1362 "map.m"
    MR_bool mercury__map__succeeded;

#line 1362 "map.m"
    {
#line 1362 "map.m"
      mercury__tree234__foldl5_12_p_0(mercury__map__TypeInfo_for_K_35, mercury__map__TypeInfo_for_V_36, mercury__map__TypeInfo_for_A_37, mercury__map__TypeInfo_for_B_38, mercury__map__TypeInfo_for_C_39, mercury__map__TypeInfo_for_D_40, mercury__map__TypeInfo_for_E_41, mercury__map__Pred_13, mercury__map__Map_14, mercury__map__STATE_VARIABLE_A_0_20, mercury__map__STATE_VARIABLE_A_21, mercury__map__STATE_VARIABLE_B_0_22, mercury__map__STATE_VARIABLE_B_23, mercury__map__STATE_VARIABLE_C_0_24, mercury__map__STATE_VARIABLE_C_25, mercury__map__STATE_VARIABLE_D_0_26, mercury__map__STATE_VARIABLE_D_27, mercury__map__STATE_VARIABLE_E_0_28, mercury__map__STATE_VARIABLE_E_29);
#line 1362 "map.m"
      return;
    }
#line 1362 "map.m"
  }
#line 455 "map.m"
}

#line 445 "map.m"
MR_bool MR_CALL 
mercury__map__foldl4_10_p_8(
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 445 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 445 "map.m"
  MR_Word mercury__map__Pred_11,
#line 445 "map.m"
  MR_Word mercury__map__Map_12,
#line 445 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 445 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 445 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 445 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 445 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 445 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 445 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 445 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 445 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl4_10_p_8(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1359 "map.m"
    return mercury__map__succeeded;
#line 1359 "map.m"
  }
#line 445 "map.m"
}

#line 443 "map.m"
MR_bool MR_CALL 
mercury__map__foldl4_10_p_7(
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 443 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 443 "map.m"
  MR_Word mercury__map__Pred_11,
#line 443 "map.m"
  MR_Word mercury__map__Map_12,
#line 443 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 443 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 443 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 443 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 443 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 443 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 443 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 443 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 443 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl4_10_p_7(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1359 "map.m"
    return mercury__map__succeeded;
#line 1359 "map.m"
  }
#line 443 "map.m"
}

#line 441 "map.m"
MR_bool MR_CALL 
mercury__map__foldl4_10_p_6(
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 441 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 441 "map.m"
  MR_Word mercury__map__Pred_11,
#line 441 "map.m"
  MR_Word mercury__map__Map_12,
#line 441 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 441 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 441 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 441 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 441 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 441 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 441 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 441 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 441 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl4_10_p_6(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
    }
#line 1359 "map.m"
    return mercury__map__succeeded;
#line 1359 "map.m"
  }
#line 441 "map.m"
}

#line 439 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_5(
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 439 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 439 "map.m"
  MR_Word mercury__map__Pred_11,
#line 439 "map.m"
  MR_Word mercury__map__Map_12,
#line 439 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 439 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 439 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 439 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 439 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 439 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 439 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 439 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 439 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_5(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 439 "map.m"
}

#line 437 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_4(
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 437 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 437 "map.m"
  MR_Word mercury__map__Pred_11,
#line 437 "map.m"
  MR_Word mercury__map__Map_12,
#line 437 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 437 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 437 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 437 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 437 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 437 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 437 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 437 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 437 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_4(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 437 "map.m"
}

#line 435 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_3(
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 435 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 435 "map.m"
  MR_Word mercury__map__Pred_11,
#line 435 "map.m"
  MR_Word mercury__map__Map_12,
#line 435 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 435 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 435 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 435 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 435 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 435 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 435 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 435 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 435 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_3(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 435 "map.m"
}

#line 433 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_2(
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_29,
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_30,
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_31,
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_32,
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_33,
#line 433 "map.m"
  MR_Word mercury__map__TypeInfo_for_D_34,
#line 433 "map.m"
  MR_Word mercury__map__Pred_11,
#line 433 "map.m"
  MR_Word mercury__map__Map_12,
#line 433 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_17,
#line 433 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_18,
#line 433 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_19,
#line 433 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_20,
#line 433 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_21,
#line 433 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_22,
#line 433 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_D_0_23,
#line 433 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_D_24)
#line 433 "map.m"
{
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_2(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 433 "map.m"
}

#line 431 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_1(
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
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_1(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 431 "map.m"
}

#line 429 "map.m"
void MR_CALL 
mercury__map__foldl4_10_p_0(
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
#line 1359 "map.m"
  {
#line 1359 "map.m"
    MR_bool mercury__map__succeeded;

#line 1359 "map.m"
    {
#line 1359 "map.m"
      mercury__tree234__foldl4_10_p_0(mercury__map__TypeInfo_for_K_29, mercury__map__TypeInfo_for_V_30, mercury__map__TypeInfo_for_A_31, mercury__map__TypeInfo_for_B_32, mercury__map__TypeInfo_for_C_33, mercury__map__TypeInfo_for_D_34, mercury__map__Pred_11, mercury__map__Map_12, mercury__map__STATE_VARIABLE_A_0_17, mercury__map__STATE_VARIABLE_A_18, mercury__map__STATE_VARIABLE_B_0_19, mercury__map__STATE_VARIABLE_B_20, mercury__map__STATE_VARIABLE_C_0_21, mercury__map__STATE_VARIABLE_C_22, mercury__map__STATE_VARIABLE_D_0_23, mercury__map__STATE_VARIABLE_D_24);
#line 1359 "map.m"
      return;
    }
#line 1359 "map.m"
  }
#line 429 "map.m"
}

#line 419 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_7(
#line 419 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 419 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 419 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 419 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 419 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 419 "map.m"
  MR_Word mercury__map__Pred_9,
#line 419 "map.m"
  MR_Word mercury__map__Map_10,
#line 419 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 419 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 419 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 419 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 419 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 419 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 419 "map.m"
{
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_7(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1356 "map.m"
    return mercury__map__succeeded;
#line 1356 "map.m"
  }
#line 419 "map.m"
}

#line 417 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_6(
#line 417 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 417 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 417 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 417 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 417 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 417 "map.m"
  MR_Word mercury__map__Pred_9,
#line 417 "map.m"
  MR_Word mercury__map__Map_10,
#line 417 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 417 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 417 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 417 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 417 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 417 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 417 "map.m"
{
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_6(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1356 "map.m"
    return mercury__map__succeeded;
#line 1356 "map.m"
  }
#line 417 "map.m"
}

#line 415 "map.m"
MR_bool MR_CALL 
mercury__map__foldl3_8_p_5(
#line 415 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 415 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 415 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 415 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 415 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 415 "map.m"
  MR_Word mercury__map__Pred_9,
#line 415 "map.m"
  MR_Word mercury__map__Map_10,
#line 415 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 415 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 415 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 415 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 415 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 415 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 415 "map.m"
{
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl3_8_p_5(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
    }
#line 1356 "map.m"
    return mercury__map__succeeded;
#line 1356 "map.m"
  }
#line 415 "map.m"
}

#line 413 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_4(
#line 413 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_23,
#line 413 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_24,
#line 413 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_25,
#line 413 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_26,
#line 413 "map.m"
  MR_Word mercury__map__TypeInfo_for_C_27,
#line 413 "map.m"
  MR_Word mercury__map__Pred_9,
#line 413 "map.m"
  MR_Word mercury__map__Map_10,
#line 413 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_14,
#line 413 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_15,
#line 413 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_16,
#line 413 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_17,
#line 413 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_C_0_18,
#line 413 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_C_19)
#line 413 "map.m"
{
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      mercury__tree234__foldl3_8_p_4(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1356 "map.m"
      return;
    }
#line 1356 "map.m"
  }
#line 413 "map.m"
}

#line 411 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_3(
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
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      mercury__tree234__foldl3_8_p_3(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1356 "map.m"
      return;
    }
#line 1356 "map.m"
  }
#line 411 "map.m"
}

#line 409 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_2(
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
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      mercury__tree234__foldl3_8_p_2(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1356 "map.m"
      return;
    }
#line 1356 "map.m"
  }
#line 409 "map.m"
}

#line 407 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_1(
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
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      mercury__tree234__foldl3_8_p_1(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1356 "map.m"
      return;
    }
#line 1356 "map.m"
  }
#line 407 "map.m"
}

#line 405 "map.m"
void MR_CALL 
mercury__map__foldl3_8_p_0(
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
#line 1356 "map.m"
  {
#line 1356 "map.m"
    MR_bool mercury__map__succeeded;

#line 1356 "map.m"
    {
#line 1356 "map.m"
      mercury__tree234__foldl3_8_p_0(mercury__map__TypeInfo_for_K_23, mercury__map__TypeInfo_for_V_24, mercury__map__TypeInfo_for_A_25, mercury__map__TypeInfo_for_B_26, mercury__map__TypeInfo_for_C_27, mercury__map__Pred_9, mercury__map__Map_10, mercury__map__STATE_VARIABLE_A_0_14, mercury__map__STATE_VARIABLE_A_15, mercury__map__STATE_VARIABLE_B_0_16, mercury__map__STATE_VARIABLE_B_17, mercury__map__STATE_VARIABLE_C_0_18, mercury__map__STATE_VARIABLE_C_19);
#line 1356 "map.m"
      return;
    }
#line 1356 "map.m"
  }
#line 405 "map.m"
}

#line 396 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_10(
#line 396 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 396 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 396 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 396 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 396 "map.m"
  MR_Word mercury__map__Pred_7,
#line 396 "map.m"
  MR_Word mercury__map__Map_8,
#line 396 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 396 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 396 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 396 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 396 "map.m"
{
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_10(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 396 "map.m"
}

#line 394 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_9(
#line 394 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 394 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 394 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 394 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 394 "map.m"
  MR_Word mercury__map__Pred_7,
#line 394 "map.m"
  MR_Word mercury__map__Map_8,
#line 394 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 394 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 394 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 394 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 394 "map.m"
{
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_9(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 394 "map.m"
}

#line 392 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_8(
#line 392 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 392 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 392 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 392 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 392 "map.m"
  MR_Word mercury__map__Pred_7,
#line 392 "map.m"
  MR_Word mercury__map__Map_8,
#line 392 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 392 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 392 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 392 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 392 "map.m"
{
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_8(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 392 "map.m"
}

#line 390 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_7(
#line 390 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_17,
#line 390 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 390 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_19,
#line 390 "map.m"
  MR_Word mercury__map__TypeInfo_for_B_20,
#line 390 "map.m"
  MR_Word mercury__map__Pred_7,
#line 390 "map.m"
  MR_Word mercury__map__Map_8,
#line 390 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_11,
#line 390 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_12,
#line 390 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_B_0_13,
#line 390 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_B_14)
#line 390 "map.m"
{
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_7(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 390 "map.m"
}

#line 388 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_6(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_6(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1353 "map.m"
    return mercury__map__succeeded;
#line 1353 "map.m"
  }
#line 388 "map.m"
}

#line 386 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_5(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_5(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1353 "map.m"
    return mercury__map__succeeded;
#line 1353 "map.m"
  }
#line 386 "map.m"
}

#line 384 "map.m"
MR_bool MR_CALL 
mercury__map__foldl2_6_p_4(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl2_6_p_4(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
    }
#line 1353 "map.m"
    return mercury__map__succeeded;
#line 1353 "map.m"
  }
#line 384 "map.m"
}

#line 382 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_3(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_3(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 382 "map.m"
}

#line 380 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_2(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_2(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 380 "map.m"
}

#line 378 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_1(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_1(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 378 "map.m"
}

#line 376 "map.m"
void MR_CALL 
mercury__map__foldl2_6_p_0(
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
#line 1353 "map.m"
  {
#line 1353 "map.m"
    MR_bool mercury__map__succeeded;

#line 1353 "map.m"
    {
#line 1353 "map.m"
      mercury__tree234__foldl2_6_p_0(mercury__map__TypeInfo_for_K_17, mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_A_19, mercury__map__TypeInfo_for_B_20, mercury__map__Pred_7, mercury__map__Map_8, mercury__map__STATE_VARIABLE_A_0_11, mercury__map__STATE_VARIABLE_A_12, mercury__map__STATE_VARIABLE_B_0_13, mercury__map__STATE_VARIABLE_B_14);
#line 1353 "map.m"
      return;
    }
#line 1353 "map.m"
  }
#line 376 "map.m"
}

#line 367 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_8(
#line 367 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 367 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 367 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 367 "map.m"
  MR_Word mercury__map__Pred_5,
#line 367 "map.m"
  MR_Word mercury__map__Map_6,
#line 367 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 367 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 367 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_8(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 367 "map.m"
}

#line 366 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_7(
#line 366 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 366 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 366 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 366 "map.m"
  MR_Word mercury__map__Pred_5,
#line 366 "map.m"
  MR_Word mercury__map__Map_6,
#line 366 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 366 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 366 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_7(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 366 "map.m"
}

#line 365 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_6(
#line 365 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 365 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 365 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 365 "map.m"
  MR_Word mercury__map__Pred_5,
#line 365 "map.m"
  MR_Word mercury__map__Map_6,
#line 365 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 365 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 365 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_6(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 365 "map.m"
}

#line 364 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_5(
#line 364 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 364 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 364 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 364 "map.m"
  MR_Word mercury__map__Pred_5,
#line 364 "map.m"
  MR_Word mercury__map__Map_6,
#line 364 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 364 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 364 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_5(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1350 "map.m"
    return mercury__map__succeeded;
#line 1350 "map.m"
  }
#line 364 "map.m"
}

#line 363 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_4(
#line 363 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 363 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 363 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 363 "map.m"
  MR_Word mercury__map__Pred_5,
#line 363 "map.m"
  MR_Word mercury__map__Map_6,
#line 363 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 363 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 363 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_4(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1350 "map.m"
    return mercury__map__succeeded;
#line 1350 "map.m"
  }
#line 363 "map.m"
}

#line 362 "map.m"
MR_bool MR_CALL 
mercury__map__foldl_4_p_3(
#line 362 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 362 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 362 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 362 "map.m"
  MR_Word mercury__map__Pred_5,
#line 362 "map.m"
  MR_Word mercury__map__Map_6,
#line 362 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 362 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 362 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      return mercury__map__succeeded = mercury__tree234__foldl_4_p_3(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
    }
#line 1350 "map.m"
    return mercury__map__succeeded;
#line 1350 "map.m"
  }
#line 362 "map.m"
}

#line 361 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_2(
#line 361 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 361 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 361 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 361 "map.m"
  MR_Word mercury__map__Pred_5,
#line 361 "map.m"
  MR_Word mercury__map__Map_6,
#line 361 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 361 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 361 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_2(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 361 "map.m"
}

#line 360 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_1(
#line 360 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 360 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 360 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_13,
#line 360 "map.m"
  MR_Word mercury__map__Pred_5,
#line 360 "map.m"
  MR_Word mercury__map__Map_6,
#line 360 "map.m"
  MR_Box mercury__map__STATE_VARIABLE_A_0_8,
#line 360 "map.m"
  MR_Box * mercury__map__STATE_VARIABLE_A_9)
#line 360 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_1(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 360 "map.m"
}

#line 359 "map.m"
void MR_CALL 
mercury__map__foldl_4_p_0(
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
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__tree234__foldl_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__TypeInfo_for_A_13, mercury__map__Pred_5, mercury__map__Map_6, mercury__map__STATE_VARIABLE_A_0_8, mercury__map__STATE_VARIABLE_A_9);
#line 1350 "map.m"
      return;
    }
#line 1350 "map.m"
  }
#line 359 "map.m"
}

#line 357 "map.m"
MR_Box MR_CALL 
mercury__map__foldl_3_f_0(
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_22,
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_23,
#line 357 "map.m"
  MR_Word mercury__map__TypeInfo_for_A_24,
#line 357 "map.m"
  MR_Word mercury__map__F_5,
#line 357 "map.m"
  MR_Word mercury__map__M_6,
#line 357 "map.m"
  MR_Box mercury__map__A_7)
#line 357 "map.m"
{
#line 1350 "map.m"
  {
#line 1350 "map.m"
    MR_bool mercury__map__succeeded;
#line 1350 "map.m"
    MR_Box mercury__map__B_8;

#line 1350 "map.m"
    {
#line 1350 "map.m"
      mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__map__F_5, mercury__map__M_6, mercury__map__A_7, &mercury__map__B_8);
    }
#line 1350 "map.m"
    return mercury__map__B_8;
#line 1350 "map.m"
  }
#line 357 "map.m"
}

#line 351 "map.m"
MR_bool MR_CALL 
mercury__map__remove_smallest_4_p_0(
#line 351 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 351 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 351 "map.m"
  MR_Box * mercury__map__K_5,
#line 351 "map.m"
  MR_Box * mercury__map__V_6,
#line 351 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 351 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 351 "map.m"
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
#line 351 "map.m"
}

#line 347 "map.m"
void MR_CALL 
mercury__map__optimize_2_p_0(
#line 347 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_4,
#line 347 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_5,
#line 347 "map.m"
  MR_Word mercury__map__Map_3,
#line 347 "map.m"
  MR_Word * mercury__map__Map_2)
#line 347 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;

#line 1258 "map.m"
    *mercury__map__Map_2 = mercury__map__Map_3;
#line 1258 "map.m"
  }
#line 347 "map.m"
}

#line 346 "map.m"
MR_Word MR_CALL 
mercury__map__optimize_1_f_0(
#line 346 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 346 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 346 "map.m"
  MR_Word mercury__map__M1_3)
#line 346 "map.m"
{
#line 1258 "map.m"
  {
#line 1258 "map.m"
    MR_bool mercury__map__succeeded;
#line 1258 "map.m"
    MR_Word mercury__map__M2_4 = mercury__map__M1_3;

#line 1258 "map.m"
    return mercury__map__M2_4;
#line 1258 "map.m"
  }
#line 346 "map.m"
}

#line 339 "map.m"
void MR_CALL 
mercury__map__apply_to_list_3_p_0(
#line 339 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_10,
#line 339 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 339 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 339 "map.m"
  MR_Word mercury__map__Map_2,
#line 339 "map.m"
  MR_Word * mercury__map__HeadVar__3_3)
#line 339 "map.m"
{
#line 1333 "map.m"
  {
#line 1333 "map.m"
    MR_bool mercury__map__succeeded;

#line 1333 "map.m"
    if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "map.m"
      *mercury__map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "map.m"
    else
#line 1334 "map.m"
      {
#line 1334 "map.m"
        MR_Box mercury__map__K_5 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1334 "map.m"
        MR_Word mercury__map__Ks_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1334 "map.m"
        MR_Box mercury__map__V_8;
#line 1334 "map.m"
        MR_Word mercury__map__Vs_9;
#line 943 "map.m"
        MR_Box mercury__map__VPrime_15;

#line 941 "map.m"
        {
#line 941 "map.m"
          mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Map_2, mercury__map__K_5, &mercury__map__VPrime_15);
        }
#line 943 "map.m"
        if (mercury__map__succeeded)
#line 942 "map.m"
          mercury__map__V_8 = mercury__map__VPrime_15;
#line 943 "map.m"
        else
#line 944 "map.m"
          {
#line 944 "map.m"
            {
#line 944 "map.m"
              mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, (MR_String) "map.lookup: key not found", mercury__map__K_5);
#line 944 "map.m"
              return;
            }
#line 944 "map.m"
          }
#line 1336 "map.m"
        {
#line 1336 "map.m"
          mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_10, mercury__map__TypeInfo_for_V_11, mercury__map__Ks_6, mercury__map__Map_2, &mercury__map__Vs_9);
        }
#line 1334 "map.m"
        {
#line 1334 "map.m"
          MR_Word base;
#line 1334 "map.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "map.m"
          *mercury__map__HeadVar__3_3 = base;
#line 1334 "map.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__map__V_8;
#line 1334 "map.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__map__Vs_9));
#line 1334 "map.m"
        }
#line 1334 "map.m"
      }
#line 1333 "map.m"
  }
#line 339 "map.m"
}

#line 338 "map.m"
MR_Word MR_CALL 
mercury__map__apply_to_list_2_f_0(
#line 338 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 338 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 338 "map.m"
  MR_Word mercury__map__Ks_4,
#line 338 "map.m"
  MR_Word mercury__map__M_5)
#line 338 "map.m"
{
#line 1331 "map.m"
  {
#line 1331 "map.m"
    MR_bool mercury__map__succeeded;
#line 1331 "map.m"
    MR_Word mercury__map__Vs_6;

#line 1331 "map.m"
    {
#line 1331 "map.m"
      mercury__map__apply_to_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__M_5, &mercury__map__Vs_6);
    }
#line 1331 "map.m"
    return mercury__map__Vs_6;
#line 1331 "map.m"
  }
#line 338 "map.m"
}

#line 332 "map.m"
void MR_CALL 
mercury__map__select_sorted_list_3_p_0(
#line 332 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 332 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 332 "map.m"
  MR_Word mercury__map__Original_4,
#line 332 "map.m"
  MR_Word mercury__map__Keys_5,
#line 332 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 332 "map.m"
{
#line 1311 "map.m"
  {
#line 1311 "map.m"
    MR_bool mercury__map__succeeded;
#line 1311 "map.m"
    MR_Word mercury__map__NewMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1313 "map.m"
    {
#line 1313 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Keys_5, mercury__map__Original_4, mercury__map__NewMap0_7, mercury__map__NewMap_6);
#line 1313 "map.m"
      return;
    }
#line 1311 "map.m"
  }
#line 332 "map.m"
}

#line 331 "map.m"
MR_Word MR_CALL 
mercury__map__select_sorted_list_2_f_0(
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 331 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 331 "map.m"
  MR_Word mercury__map__M1_4,
#line 331 "map.m"
  MR_Word mercury__map__S_5)
#line 331 "map.m"
{
#line 1311 "map.m"
  {
#line 1311 "map.m"
    MR_bool mercury__map__succeeded;
#line 1311 "map.m"
    MR_Word mercury__map__M2_6;
#line 1311 "map.m"
    MR_Word mercury__map__NewMap0_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1313 "map.m"
    {
#line 1313 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__S_5, mercury__map__M1_4, mercury__map__NewMap0_12, &mercury__map__M2_6);
    }
#line 1311 "map.m"
    return mercury__map__M2_6;
#line 1311 "map.m"
  }
#line 331 "map.m"
}

#line 326 "map.m"
void MR_CALL 
mercury__map__select_3_p_0(
#line 326 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 326 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 326 "map.m"
  MR_Word mercury__map__Original_4,
#line 326 "map.m"
  MR_Word mercury__map__KeySet_5,
#line 326 "map.m"
  MR_Word * mercury__map__NewMap_6)
#line 326 "map.m"
{
#line 1306 "map.m"
  {
#line 1306 "map.m"
    MR_bool mercury__map__succeeded;
#line 1306 "map.m"
    MR_Word mercury__map__Keys_7 = (MR_Word) mercury__map__KeySet_5;
#line 1306 "map.m"
    MR_Word mercury__map__NewMap0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1309 "map.m"
    {
#line 1309 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Keys_7, mercury__map__Original_4, mercury__map__NewMap0_8, mercury__map__NewMap_6);
#line 1309 "map.m"
      return;
    }
#line 1306 "map.m"
  }
#line 326 "map.m"
}

#line 325 "map.m"
MR_Word MR_CALL 
mercury__map__select_2_f_0(
#line 325 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 325 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 325 "map.m"
  MR_Word mercury__map__M1_4,
#line 325 "map.m"
  MR_Word mercury__map__S_5)
#line 325 "map.m"
{
#line 1306 "map.m"
  {
#line 1306 "map.m"
    MR_bool mercury__map__succeeded;
#line 1306 "map.m"
    MR_Word mercury__map__M2_6;
#line 1306 "map.m"
    MR_Word mercury__map__Keys_12 = (MR_Word) mercury__map__S_5;
#line 1306 "map.m"
    MR_Word mercury__map__NewMap0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1309 "map.m"
    {
#line 1309 "map.m"
      mercury__map__select_loop_4_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Keys_12, mercury__map__M1_4, mercury__map__NewMap0_13, &mercury__map__M2_6);
    }
#line 1306 "map.m"
    return mercury__map__M2_6;
#line 1306 "map.m"
  }
#line 325 "map.m"
}

#line 319 "map.m"
void MR_CALL 
mercury__map__overlay_large_map_3_p_0(
#line 319 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 319 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 319 "map.m"
  MR_Word mercury__map__Map0_4,
#line 319 "map.m"
  MR_Word mercury__map__Map1_5,
#line 319 "map.m"
  MR_Word * mercury__map__Map_6)
#line 319 "map.m"
{
#line 1281 "map.m"
  {
#line 1281 "map.m"
    MR_bool mercury__map__succeeded;
#line 1281 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1281 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map0_4, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map1_5, mercury__map__Map_6);
#line 1283 "map.m"
      return;
    }
#line 1281 "map.m"
  }
#line 319 "map.m"
}

#line 318 "map.m"
MR_Word MR_CALL 
mercury__map__overlay_large_map_2_f_0(
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 318 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 318 "map.m"
  MR_Word mercury__map__M1_4,
#line 318 "map.m"
  MR_Word mercury__map__M2_5)
#line 318 "map.m"
{
#line 1281 "map.m"
  {
#line 1281 "map.m"
    MR_bool mercury__map__succeeded;
#line 1281 "map.m"
    MR_Word mercury__map__M3_6;
#line 1281 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1281 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M1_4, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
#line 1283 "map.m"
    {
#line 1283 "map.m"
      mercury__map__overlay_large_map_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M2_5, &mercury__map__M3_6);
    }
#line 1281 "map.m"
    return mercury__map__M3_6;
#line 1281 "map.m"
  }
#line 318 "map.m"
}

#line 310 "map.m"
void MR_CALL 
mercury__map__overlay_3_p_0(
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 310 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 310 "map.m"
  MR_Word mercury__map__Map0_4,
#line 310 "map.m"
  MR_Word mercury__map__Map1_5,
#line 310 "map.m"
  MR_Word * mercury__map__Map_6)
#line 310 "map.m"
{
#line 1265 "map.m"
  {
#line 1265 "map.m"
    MR_bool mercury__map__succeeded;
#line 1265 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1265 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__Map1_5, mercury__map__V_5_14, &mercury__map__AssocList_7);
    }
#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__AssocList_7, mercury__map__Map0_4, mercury__map__Map_6);
#line 1267 "map.m"
      return;
    }
#line 1265 "map.m"
  }
#line 310 "map.m"
}

#line 309 "map.m"
MR_Word MR_CALL 
mercury__map__overlay_2_f_0(
#line 309 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 309 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 309 "map.m"
  MR_Word mercury__map__M1_4,
#line 309 "map.m"
  MR_Word mercury__map__M2_5)
#line 309 "map.m"
{
#line 1265 "map.m"
  {
#line 1265 "map.m"
    MR_bool mercury__map__succeeded;
#line 1265 "map.m"
    MR_Word mercury__map__M3_6;
#line 1265 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1265 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__AssocList_12);
    }
#line 1267 "map.m"
    {
#line 1267 "map.m"
      mercury__map__overlay_2_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1265 "map.m"
    return mercury__map__M3_6;
#line 1265 "map.m"
  }
#line 309 "map.m"
}

#line 303 "map.m"
void MR_CALL 
mercury__map__merge_3_p_0(
#line 303 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 303 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 303 "map.m"
  MR_Word mercury__map__MA_4,
#line 303 "map.m"
  MR_Word mercury__map__MB_5,
#line 303 "map.m"
  MR_Word * mercury__map__M_6)
#line 303 "map.m"
{
#line 1237 "map.m"
  {
#line 1237 "map.m"
    MR_bool mercury__map__succeeded;
#line 1237 "map.m"
    MR_Word mercury__map__MBList_7;
#line 1237 "map.m"
    MR_Word mercury__map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MB_5, mercury__map__V_5_14, &mercury__map__MBList_7);
    }
#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_8, mercury__map__TypeInfo_for_V_9, mercury__map__MBList_7, mercury__map__MA_4, mercury__map__M_6);
#line 1239 "map.m"
      return;
    }
#line 1237 "map.m"
  }
#line 303 "map.m"
}

#line 302 "map.m"
MR_Word MR_CALL 
mercury__map__merge_2_f_0(
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 302 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 302 "map.m"
  MR_Word mercury__map__M1_4,
#line 302 "map.m"
  MR_Word mercury__map__M2_5)
#line 302 "map.m"
{
#line 1237 "map.m"
  {
#line 1237 "map.m"
    MR_bool mercury__map__succeeded;
#line 1237 "map.m"
    MR_Word mercury__map__M3_6;
#line 1237 "map.m"
    MR_Word mercury__map__MBList_12;
#line 1237 "map.m"
    MR_Word mercury__map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M2_5, mercury__map__V_5_17, &mercury__map__MBList_12);
    }
#line 1239 "map.m"
    {
#line 1239 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__MBList_12, mercury__map__M1_4, &mercury__map__M3_6);
    }
#line 1237 "map.m"
    return mercury__map__M3_6;
#line 1237 "map.m"
  }
#line 302 "map.m"
}

#line 292 "map.m"
void MR_CALL 
mercury__map__from_corresponding_lists_3_p_0(
#line 292 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_8,
#line 292 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_9,
#line 292 "map.m"
  MR_Word mercury__map__Keys_4,
#line 292 "map.m"
  MR_Word mercury__map__Values_5,
#line 292 "map.m"
  MR_Word * mercury__map__Map_6)
#line 292 "map.m"
{
#line 1228 "map.m"
  {
#line 1228 "map.m"
    MR_bool mercury__map__succeeded;
#line 1228 "map.m"
    MR_Word mercury__map__AssocList_7;
#line 1228 "map.m"
    MR_Word mercury__map__V_5_12;

#line 1229 "map.m"
    {
#line 1229 "map.m"
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
#line 1228 "map.m"
  }
#line 292 "map.m"
}

#line 291 "map.m"
MR_Word MR_CALL 
mercury__map__from_corresponding_lists_2_f_0(
#line 291 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 291 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 291 "map.m"
  MR_Word mercury__map__Ks_4,
#line 291 "map.m"
  MR_Word mercury__map__Vs_5)
#line 291 "map.m"
{
#line 1228 "map.m"
  {
#line 1228 "map.m"
    MR_bool mercury__map__succeeded;
#line 1228 "map.m"
    MR_Word mercury__map__M_6;
#line 1228 "map.m"
    MR_Word mercury__map__AssocList_12;
#line 1228 "map.m"
    MR_Word mercury__map__V_5_15;

#line 1229 "map.m"
    {
#line 1229 "map.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_4, mercury__map__Vs_5, &mercury__map__AssocList_12);
    }
#line 90 "tree234.opt"
    mercury__map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AssocList_12, mercury__map__V_5_15, &mercury__map__M_6);
    }
#line 1228 "map.m"
    return mercury__map__M_6;
#line 1228 "map.m"
  }
#line 291 "map.m"
}

#line 287 "map.m"
void MR_CALL 
mercury__map__count_2_p_0(
#line 287 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 287 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 287 "map.m"
  MR_Word mercury__map__Map_3,
#line 287 "map.m"
  MR_Integer * mercury__map__Count_4)
#line 287 "map.m"
{
#line 1216 "map.m"
  {
#line 1216 "map.m"
    MR_bool mercury__map__succeeded;

#line 1216 "map.m"
    {
#line 1216 "map.m"
      mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__Map_3, mercury__map__Count_4);
#line 1216 "map.m"
      return;
    }
#line 1216 "map.m"
  }
#line 287 "map.m"
}

#line 286 "map.m"
MR_Integer MR_CALL 
mercury__map__count_1_f_0(
#line 286 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 286 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 286 "map.m"
  MR_Word mercury__map__M_3)
#line 286 "map.m"
{
#line 1216 "map.m"
  {
#line 1216 "map.m"
    MR_bool mercury__map__succeeded;
#line 1216 "map.m"
    MR_Integer mercury__map__N_4;

#line 1216 "map.m"
    {
#line 1216 "map.m"
      mercury__tree234__count_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__M_3, &mercury__map__N_4);
    }
#line 1216 "map.m"
    return mercury__map__N_4;
#line 1216 "map.m"
  }
#line 286 "map.m"
}

#line 282 "map.m"
void MR_CALL 
mercury__map__det_remove_4_p_0(
#line 282 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 282 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 282 "map.m"
  MR_Box mercury__map__Key_5,
#line 282 "map.m"
  MR_Box * mercury__map__Value_6,
#line 282 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 282 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 282 "map.m"
{
#line 1208 "map.m"
  {
#line 1208 "map.m"
    MR_bool mercury__map__succeeded;
#line 1208 "map.m"
    MR_Box mercury__map__ValuePrime_8;
#line 1208 "map.m"
    MR_Word mercury__map__MapPrime_9;
#line 63 "tree234.opt"
    MR_Word mercury__map__V_9_20;

#line 63 "tree234.opt"
    {
#line 63 "tree234.opt"
      mercury__map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__Key_5, &mercury__map__ValuePrime_8, &mercury__map__MapPrime_9, &mercury__map__V_9_20);
    }
#line 1208 "map.m"
    if (mercury__map__succeeded)
#line 1206 "map.m"
      {
#line 1206 "map.m"
        *mercury__map__Value_6 = mercury__map__ValuePrime_8;
#line 1207 "map.m"
        *mercury__map__STATE_VARIABLE_Map_11 = mercury__map__MapPrime_9;
#line 1206 "map.m"
      }
#line 1208 "map.m"
    else
#line 1209 "map.m"
      {
#line 1209 "map.m"
        {
#line 1209 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, (MR_String) "map.det_remove: key not found", mercury__map__Key_5);
#line 1209 "map.m"
          return;
        }
#line 1209 "map.m"
      }
#line 1208 "map.m"
  }
#line 282 "map.m"
}

#line 277 "map.m"
MR_bool MR_CALL 
mercury__map__remove_4_p_0(
#line 277 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 277 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 277 "map.m"
  MR_Box mercury__map__Key_5,
#line 277 "map.m"
  MR_Box * mercury__map__Value_6,
#line 277 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 277 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 277 "map.m"
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
#line 277 "map.m"
}

#line 271 "map.m"
void MR_CALL 
mercury__map__delete_sorted_list_3_p_0(
#line 271 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_19,
#line 271 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_20,
#line 271 "map.m"
  MR_Word mercury__map__DeleteKeys_4,
#line 271 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_12,
#line 271 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_13)
#line 271 "map.m"
{
#line 1154 "map.m"
  {
#line 1154 "map.m"
    MR_bool mercury__map__succeeded;
#line 1154 "map.m"
    MR_Integer mercury__map__NumDeleteKeys_6;
#line 1154 "map.m"
    MR_Integer mercury__map__MinSize_7;
#line 1154 "map.m"
    MR_Integer mercury__map__Depth_5_28;
#line 1157 "map.m"
    MR_Integer mercury__map__V_14_14;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, (MR_Integer) 0, &mercury__map__NumDeleteKeys_6);
    }
#line 363 "tree234.opt"
    {
#line 363 "tree234.opt"
      mercury__tree234__find_depth_2_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, &mercury__map__Depth_5_28);
    }
#line 364 "tree234.opt"
    {
#line 364 "tree234.opt"
      mercury__tree234__min_size_based_on_depth_2_p_0(mercury__map__Depth_5_28, &mercury__map__MinSize_7);
    }
#line 1157 "map.m"
    mercury__map__V_14_14 = (mercury__map__NumDeleteKeys_6 * (MR_Integer) 5);
#line 1157 "map.m"
    mercury__map__succeeded = (mercury__map__V_14_14 < mercury__map__MinSize_7);
#line 1160 "map.m"
    if (mercury__map__succeeded)
#line 1159 "map.m"
      {
#line 1159 "map.m"
        mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__DeleteKeys_4, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__STATE_VARIABLE_Map_13);
#line 1159 "map.m"
        return;
      }
#line 1160 "map.m"
    else
#line 1162 "map.m"
      {
#line 1162 "map.m"
        MR_Word mercury__map__Pairs0_8;
#line 1162 "map.m"
        MR_Word mercury__map__RevPairs_9;
#line 1162 "map.m"
        MR_Word mercury__map__LeftOverPairs_10;
#line 1162 "map.m"
        MR_Word mercury__map__Pairs_11;
#line 1162 "map.m"
        MR_Word mercury__map__V_17_17;
#line 1162 "map.m"
        MR_Word mercury__map__V_5_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "map.m"
        MR_Word mercury__map__V_5_40;
#line 1165 "map.m"
        MR_Word mercury__map__conv0_Pairs_11;

#line 86 "tree234.opt"
        {
#line 86 "tree234.opt"
          mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__TypeInfo_for_V_20, mercury__map__STATE_VARIABLE_Map_0_12, mercury__map__V_5_33, &mercury__map__Pairs0_8);
        }
#line 1163 "map.m"
        mercury__map__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1163 "map.m"
        {
#line 1163 "map.m"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_115_111_114_116_101_100_95_108_105_115_116_95_108_111_111_112_95_95_91_50_93_95_48_5_p_0(mercury__map__TypeInfo_for_K_19, mercury__map__DeleteKeys_4, mercury__map__Pairs0_8, mercury__map__V_17_17, &mercury__map__RevPairs_9, &mercury__map__LeftOverPairs_10);
        }
#line 1165 "map.m"
        {
#line 1165 "map.m"
          mercury__map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_108_105_115_116_95_97_99_99_95_95_91_49_93_95_48_3_p_0((MR_Word) mercury__map__RevPairs_9, (MR_Word) mercury__map__LeftOverPairs_10, &mercury__map__conv0_Pairs_11);
        }
#line 1165 "map.m"
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
#line 1162 "map.m"
      }
#line 1154 "map.m"
  }
#line 271 "map.m"
}

#line 270 "map.m"
MR_Word MR_CALL 
mercury__map__delete_sorted_list_2_f_0(
#line 270 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 270 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 270 "map.m"
  MR_Word mercury__map__M0_4,
#line 270 "map.m"
  MR_Word mercury__map__Ks_5)
#line 270 "map.m"
{
#line 1152 "map.m"
  {
#line 1152 "map.m"
    MR_bool mercury__map__succeeded;
#line 1152 "map.m"
    MR_Word mercury__map__M_6;

#line 1152 "map.m"
    {
#line 1152 "map.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
#line 1152 "map.m"
    return mercury__map__M_6;
#line 1152 "map.m"
  }
#line 270 "map.m"
}

#line 264 "map.m"
void MR_CALL 
mercury__map__delete_list_3_p_0(
#line 264 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 264 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_15,
#line 264 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 264 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 264 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 264 "map.m"
{
#line 1146 "map.m"
  while (MR_TRUE)
#line 1146 "map.m"
    {
#line 1146 "map.m"
      /* tailcall optimized into a loop */
#line 1146 "map.m"
      {
#line 1146 "map.m"
        MR_bool mercury__map__succeeded;

#line 1146 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1146 "map.m"
        else
#line 1147 "map.m"
          {
#line 1147 "map.m"
            MR_Box mercury__map__DeleteKey_7 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));
#line 1147 "map.m"
            MR_Word mercury__map__DeleteKeys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1147 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_12_12;
#line 61 "tree234.opt"
            MR_Word mercury__map__V_7_24;

#line 61 "tree234.opt"
            {
#line 61 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__map__TypeInfo_for_K_14, mercury__map__TypeInfo_for_V_15, mercury__map__STATE_VARIABLE_Map_0_2, mercury__map__DeleteKey_7, &mercury__map__STATE_VARIABLE_Map_12_12, &mercury__map__V_7_24);
            }
#line 1149 "map.m"
            /* direct tailcall eliminated */
#line 1149 "map.m"
            {
#line 1149 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__DeleteKeys_8;
#line 1149 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_12_12;

#line 1149 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1149 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1149 "map.m"
            }
#line 1149 "map.m"
            continue;
#line 1147 "map.m"
          }
#line 1146 "map.m"
      }
#line 1146 "map.m"
      break;
#line 1146 "map.m"
    }
#line 264 "map.m"
}

#line 263 "map.m"
MR_Word MR_CALL 
mercury__map__delete_list_2_f_0(
#line 263 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 263 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 263 "map.m"
  MR_Word mercury__map__M0_4,
#line 263 "map.m"
  MR_Word mercury__map__Ks_5)
#line 263 "map.m"
{
#line 1144 "map.m"
  {
#line 1144 "map.m"
    MR_bool mercury__map__succeeded;
#line 1144 "map.m"
    MR_Word mercury__map__M_6;

#line 1144 "map.m"
    {
#line 1144 "map.m"
      mercury__map__delete_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Ks_5, mercury__map__M0_4, &mercury__map__M_6);
    }
#line 1144 "map.m"
    return mercury__map__M_6;
#line 1144 "map.m"
  }
#line 263 "map.m"
}

#line 259 "map.m"
void MR_CALL 
mercury__map__delete_3_p_0(
#line 259 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 259 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 259 "map.m"
  MR_Box mercury__map__Key_4,
#line 259 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_6,
#line 259 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_7)
#line 259 "map.m"
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
#line 259 "map.m"
}

#line 258 "map.m"
MR_Word MR_CALL 
mercury__map__delete_2_f_0(
#line 258 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 258 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 258 "map.m"
  MR_Word mercury__map__M0_4,
#line 258 "map.m"
  MR_Box mercury__map__K_5)
#line 258 "map.m"
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
#line 258 "map.m"
}

#line 252 "map.m"
void MR_CALL 
mercury__map__from_rev_sorted_assoc_list_2_p_0(
#line 252 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 252 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 252 "map.m"
  MR_Word mercury__map__L_3,
#line 252 "map.m"
  MR_Word * mercury__map__M_4)
#line 252 "map.m"
{
#line 1135 "map.m"
  {
#line 1135 "map.m"
    MR_bool mercury__map__succeeded;

#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
#line 1135 "map.m"
      return;
    }
#line 1135 "map.m"
  }
#line 252 "map.m"
}

#line 251 "map.m"
MR_Word MR_CALL 
mercury__map__from_rev_sorted_assoc_list_1_f_0(
#line 251 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 251 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 251 "map.m"
  MR_Word mercury__map__AL_3)
#line 251 "map.m"
{
#line 1135 "map.m"
  {
#line 1135 "map.m"
    MR_bool mercury__map__succeeded;
#line 1135 "map.m"
    MR_Word mercury__map__M_4;

#line 1135 "map.m"
    {
#line 1135 "map.m"
      mercury__tree234__from_rev_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
#line 1135 "map.m"
    return mercury__map__M_4;
#line 1135 "map.m"
  }
#line 251 "map.m"
}

#line 245 "map.m"
void MR_CALL 
mercury__map__from_sorted_assoc_list_2_p_0(
#line 245 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 245 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 245 "map.m"
  MR_Word mercury__map__L_3,
#line 245 "map.m"
  MR_Word * mercury__map__M_4)
#line 245 "map.m"
{
#line 1129 "map.m"
  {
#line 1129 "map.m"
    MR_bool mercury__map__succeeded;

#line 1129 "map.m"
    {
#line 1129 "map.m"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__L_3, mercury__map__M_4);
#line 1129 "map.m"
      return;
    }
#line 1129 "map.m"
  }
#line 245 "map.m"
}

#line 244 "map.m"
MR_Word MR_CALL 
mercury__map__from_sorted_assoc_list_1_f_0(
#line 244 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 244 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 244 "map.m"
  MR_Word mercury__map__AL_3)
#line 244 "map.m"
{
#line 1129 "map.m"
  {
#line 1129 "map.m"
    MR_bool mercury__map__succeeded;
#line 1129 "map.m"
    MR_Word mercury__map__M_4;

#line 1129 "map.m"
    {
#line 1129 "map.m"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__AL_3, &mercury__map__M_4);
    }
#line 1129 "map.m"
    return mercury__map__M_4;
#line 1129 "map.m"
  }
#line 244 "map.m"
}

#line 240 "map.m"
void MR_CALL 
mercury__map__from_assoc_list_2_p_0(
#line 240 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 240 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 240 "map.m"
  MR_Word mercury__map__L_3,
#line 240 "map.m"
  MR_Word * mercury__map__M_4)
#line 240 "map.m"
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
#line 240 "map.m"
}

#line 239 "map.m"
MR_Word MR_CALL 
mercury__map__from_assoc_list_1_f_0(
#line 239 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 239 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 239 "map.m"
  MR_Word mercury__map__AL_3)
#line 239 "map.m"
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
#line 239 "map.m"
}

#line 235 "map.m"
void MR_CALL 
mercury__map__to_sorted_assoc_list_2_p_0(
#line 235 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 235 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 235 "map.m"
  MR_Word mercury__map__M_3,
#line 235 "map.m"
  MR_Word * mercury__map__L_4)
#line 235 "map.m"
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
#line 235 "map.m"
}

#line 234 "map.m"
MR_Word MR_CALL 
mercury__map__to_sorted_assoc_list_1_f_0(
#line 234 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 234 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 234 "map.m"
  MR_Word mercury__map__M_3)
#line 234 "map.m"
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
#line 234 "map.m"
}

#line 230 "map.m"
void MR_CALL 
mercury__map__to_assoc_list_2_p_0(
#line 230 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 230 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 230 "map.m"
  MR_Word mercury__map__M_3,
#line 230 "map.m"
  MR_Word * mercury__map__L_4)
#line 230 "map.m"
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
#line 230 "map.m"
}

#line 229 "map.m"
MR_Word MR_CALL 
mercury__map__to_assoc_list_1_f_0(
#line 229 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 229 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 229 "map.m"
  MR_Word mercury__map__M_3)
#line 229 "map.m"
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
#line 229 "map.m"
}

#line 225 "map.m"
void MR_CALL 
mercury__map__keys_and_values_3_p_0(
#line 225 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 225 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 225 "map.m"
  MR_Word mercury__map__Map_4,
#line 225 "map.m"
  MR_Word * mercury__map__KeyList_5,
#line 225 "map.m"
  MR_Word * mercury__map__ValueList_6)
#line 225 "map.m"
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
#line 225 "map.m"
}

#line 223 "map.m"
void MR_CALL 
mercury__map__values_2_p_0(
#line 223 "map.m"
  MR_Word mercury__map__TypeInfo_for__K_5,
#line 223 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 223 "map.m"
  MR_Word mercury__map__Map_3,
#line 223 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 223 "map.m"
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
#line 223 "map.m"
}

#line 222 "map.m"
MR_Word MR_CALL 
mercury__map__values_1_f_0(
#line 222 "map.m"
  MR_Word mercury__map__TypeInfo_for__K_5,
#line 222 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_6,
#line 222 "map.m"
  MR_Word mercury__map__M_3)
#line 222 "map.m"
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
#line 222 "map.m"
}

#line 218 "map.m"
void MR_CALL 
mercury__map__sorted_keys_2_p_0(
#line 218 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 218 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 218 "map.m"
  MR_Word mercury__map__Map_3,
#line 218 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 218 "map.m"
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
#line 218 "map.m"
}

#line 217 "map.m"
MR_Word MR_CALL 
mercury__map__sorted_keys_1_f_0(
#line 217 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 217 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 217 "map.m"
  MR_Word mercury__map__M_3)
#line 217 "map.m"
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
#line 217 "map.m"
}

#line 212 "map.m"
void MR_CALL 
mercury__map__keys_2_p_0(
#line 212 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 212 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 212 "map.m"
  MR_Word mercury__map__Map_3,
#line 212 "map.m"
  MR_Word * mercury__map__KeyList_4)
#line 212 "map.m"
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
#line 212 "map.m"
}

#line 211 "map.m"
MR_Word MR_CALL 
mercury__map__keys_1_f_0(
#line 211 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_5,
#line 211 "map.m"
  MR_Word mercury__map__TypeInfo_for__V_6,
#line 211 "map.m"
  MR_Word mercury__map__M_3)
#line 211 "map.m"
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
#line 211 "map.m"
}

#line 207 "map.m"
void MR_CALL 
mercury__map__set_4_p_0(
#line 207 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 207 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 207 "map.m"
  MR_Box mercury__map__K_5,
#line 207 "map.m"
  MR_Box mercury__map__V_6,
#line 207 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 207 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 207 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
#line 1082 "map.m"
      return;
    }
#line 1082 "map.m"
  }
#line 207 "map.m"
}

#line 206 "map.m"
MR_Word MR_CALL 
mercury__map__set_3_f_0(
#line 206 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 206 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 206 "map.m"
  MR_Word mercury__map__M1_5,
#line 206 "map.m"
  MR_Box mercury__map__K_6,
#line 206 "map.m"
  MR_Box mercury__map__V_7)
#line 206 "map.m"
{
#line 1082 "map.m"
  {
#line 1082 "map.m"
    MR_bool mercury__map__succeeded;
#line 1082 "map.m"
    MR_Word mercury__map__M2_8;

#line 1082 "map.m"
    {
#line 1082 "map.m"
      mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 1082 "map.m"
    return mercury__map__M2_8;
#line 1082 "map.m"
  }
#line 206 "map.m"
}

#line 200 "map.m"
void MR_CALL 
mercury__map__det_transform_value_4_p_0(
#line 200 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_13,
#line 200 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_14,
#line 200 "map.m"
  MR_Word mercury__map__P_5,
#line 200 "map.m"
  MR_Box mercury__map__K_6,
#line 200 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 200 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 200 "map.m"
{
#line 1070 "map.m"
  {
#line 1070 "map.m"
    MR_bool mercury__map__succeeded;
#line 1070 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 1065 "map.m"
    {
#line 1065 "map.m"
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_13, mercury__map__TypeInfo_for_K_14, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1070 "map.m"
    if (mercury__map__succeeded)
#line 1069 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1070 "map.m"
    else
#line 1071 "map.m"
      {
#line 1071 "map.m"
        {
#line 1071 "map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_14, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
#line 1071 "map.m"
          return;
        }
#line 1071 "map.m"
      }
#line 1070 "map.m"
  }
#line 200 "map.m"
}

#line 1075 "map.m"
static void MR_CALL 
mercury__map__det_transform_value_3_f_0_1(
#line 1075 "map.m"
  MR_Box mercury__map__closure_arg,
#line 1075 "map.m"
  MR_Box mercury__map__wrapper_arg_1,
#line 1075 "map.m"
  MR_Box * mercury__map__wrapper_arg_2)
#line 1075 "map.m"
{
#line 1075 "map.m"
  {
#line 1075 "map.m"
    MR_Box mercury__map__closure = mercury__map__closure_arg;

#line 1075 "map.m"
    {
#line 1075 "map.m"
      mercury__map__IntroducedFrom__pred__det_transform_value__1075__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__map__closure, (MR_Integer) 4))), mercury__map__wrapper_arg_1, mercury__map__wrapper_arg_2);
#line 1075 "map.m"
      return;
    }
#line 1075 "map.m"
  }
#line 1075 "map.m"
}

#line 199 "map.m"
MR_Word MR_CALL 
mercury__map__det_transform_value_3_f_0(
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_18,
#line 199 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_19,
#line 199 "map.m"
  MR_Word mercury__map__F_5,
#line 199 "map.m"
  MR_Box mercury__map__K_6,
#line 199 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10)
#line 199 "map.m"
{
#line 1074 "map.m"
  {
#line 1074 "map.m"
    MR_bool mercury__map__succeeded;
#line 1074 "map.m"
    MR_Word mercury__map__STATE_VARIABLE_Map_11;
#line 1074 "map.m"
    MR_Word mercury__map__V_12_12;
#line 1070 "map.m"
    MR_Word mercury__map__NewMap_25;

#line 1075 "map.m"
    {
#line 1075 "map.m"
      mercury__map__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 0) = ((MR_Box) (&mercury__map_scalar_common_5[0]));
#line 1075 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 1) = ((MR_Box) (mercury__map__det_transform_value_3_f_0_1));
#line 1075 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1075 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 3) = ((MR_Box) (mercury__map__TypeInfo_for_V_18));
#line 1075 "map.m"
      MR_hl_field(MR_mktag(0), mercury__map__V_12_12, 4) = ((MR_Box) (mercury__map__F_5));
#line 1075 "map.m"
    }
#line 1065 "map.m"
    {
#line 1065 "map.m"
      mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_18, mercury__map__TypeInfo_for_K_19, mercury__map__V_12_12, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_10, &mercury__map__NewMap_25);
    }
#line 1070 "map.m"
    if (mercury__map__succeeded)
#line 1069 "map.m"
      mercury__map__STATE_VARIABLE_Map_11 = mercury__map__NewMap_25;
#line 1070 "map.m"
    else
#line 1071 "map.m"
      {
#line 1071 "map.m"
        {
#line 1071 "map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__map__TypeInfo_for_K_19, (MR_String) "map.det_transform_value: key not found", mercury__map__K_6);
        }
#line 1071 "map.m"
      }
#line 1074 "map.m"
    return mercury__map__STATE_VARIABLE_Map_11;
#line 1074 "map.m"
  }
#line 199 "map.m"
}

#line 193 "map.m"
MR_bool MR_CALL 
mercury__map__transform_value_4_p_0(
#line 193 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_11,
#line 193 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_12,
#line 193 "map.m"
  MR_Word mercury__map__P_5,
#line 193 "map.m"
  MR_Box mercury__map__K_6,
#line 193 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 193 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 193 "map.m"
{
#line 1065 "map.m"
  {
#line 1065 "map.m"
    MR_bool mercury__map__succeeded;

#line 1065 "map.m"
    {
#line 1065 "map.m"
      return mercury__map__succeeded = mercury__tree234__transform_value_4_p_0(mercury__map__TypeInfo_for_V_11, mercury__map__TypeInfo_for_K_12, mercury__map__P_5, mercury__map__K_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 1065 "map.m"
    return mercury__map__succeeded;
#line 1065 "map.m"
  }
#line 193 "map.m"
}

#line 186 "map.m"
void MR_CALL 
mercury__map__search_insert_5_p_0(
#line 186 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 186 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 186 "map.m"
  MR_Box mercury__map__K_6,
#line 186 "map.m"
  MR_Box mercury__map__V_7,
#line 186 "map.m"
  MR_Word * mercury__map__MaybeOldV_8,
#line 186 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_10,
#line 186 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_11)
#line 186 "map.m"
{
#line 1062 "map.m"
  {
#line 1062 "map.m"
    MR_bool mercury__map__succeeded;

#line 1062 "map.m"
    {
#line 1062 "map.m"
      mercury__tree234__search_insert_5_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_6, mercury__map__V_7, mercury__map__MaybeOldV_8, mercury__map__STATE_VARIABLE_Map_0_10, mercury__map__STATE_VARIABLE_Map_11);
#line 1062 "map.m"
      return;
    }
#line 1062 "map.m"
  }
#line 186 "map.m"
}

#line 178 "map.m"
void MR_CALL 
mercury__map__det_update_4_p_0(
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 178 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 178 "map.m"
  MR_Box mercury__map__K_5,
#line 178 "map.m"
  MR_Box mercury__map__V_6,
#line 178 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 178 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 178 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_update: key not found", mercury__map__K_5);
#line 1058 "map.m"
          return;
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
  }
#line 178 "map.m"
}

#line 177 "map.m"
MR_Word MR_CALL 
mercury__map__det_update_3_f_0(
#line 177 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 177 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 177 "map.m"
  MR_Word mercury__map__M0_5,
#line 177 "map.m"
  MR_Box mercury__map__K_6,
#line 177 "map.m"
  MR_Box mercury__map__V_7)
#line 177 "map.m"
{
#line 1057 "map.m"
  {
#line 1057 "map.m"
    MR_bool mercury__map__succeeded;
#line 1057 "map.m"
    MR_Word mercury__map__M_8;
#line 1057 "map.m"
    MR_Word mercury__map__NewMap_16;

#line 1055 "map.m"
    {
#line 1055 "map.m"
      mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, &mercury__map__NewMap_16);
    }
#line 1057 "map.m"
    if (mercury__map__succeeded)
#line 1056 "map.m"
      mercury__map__M_8 = mercury__map__NewMap_16;
#line 1057 "map.m"
    else
#line 1058 "map.m"
      {
#line 1058 "map.m"
        MR_Box mercury__map__V_19_19;

#line 1058 "map.m"
        {
#line 1058 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_update: key not found", mercury__map__K_6);
        }
#line 1058 "map.m"
      }
#line 1057 "map.m"
    return mercury__map__M_8;
#line 1057 "map.m"
  }
#line 177 "map.m"
}

#line 172 "map.m"
MR_bool MR_CALL 
mercury__map__update_4_p_0(
#line 172 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 172 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 172 "map.m"
  MR_Box mercury__map__K_5,
#line 172 "map.m"
  MR_Box mercury__map__V_6,
#line 172 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 172 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 172 "map.m"
{
#line 1049 "map.m"
  {
#line 1049 "map.m"
    MR_bool mercury__map__succeeded;

#line 1049 "map.m"
    {
#line 1049 "map.m"
      return mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 1049 "map.m"
    return mercury__map__succeeded;
#line 1049 "map.m"
  }
#line 172 "map.m"
}

#line 171 "map.m"
MR_bool MR_CALL 
mercury__map__update_3_f_0(
#line 171 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 171 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 171 "map.m"
  MR_Word mercury__map__M0_5,
#line 171 "map.m"
  MR_Box mercury__map__K_6,
#line 171 "map.m"
  MR_Box mercury__map__V_7,
#line 171 "map.m"
  MR_Word * mercury__map__M_8)
#line 171 "map.m"
{
#line 1049 "map.m"
  {
#line 1049 "map.m"
    MR_bool mercury__map__succeeded;

#line 1049 "map.m"
    {
#line 1049 "map.m"
      return mercury__map__succeeded = mercury__tree234__update_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M0_5, mercury__map__M_8);
    }
#line 1049 "map.m"
    return mercury__map__succeeded;
#line 1049 "map.m"
  }
#line 171 "map.m"
}

#line 165 "map.m"
void MR_CALL 
mercury__map__set_from_assoc_list_3_p_0(
#line 165 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 165 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 165 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 165 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 165 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 165 "map.m"
{
#line 1040 "map.m"
  while (MR_TRUE)
#line 1040 "map.m"
    {
#line 1040 "map.m"
      /* tailcall optimized into a loop */
#line 1040 "map.m"
      {
#line 1040 "map.m"
        MR_bool mercury__map__succeeded;

#line 1040 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1040 "map.m"
        else
#line 1041 "map.m"
          {
#line 1041 "map.m"
            MR_Box mercury__map__K_7;
#line 1041 "map.m"
            MR_Box mercury__map__V_8;
#line 1041 "map.m"
            MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1041 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1041 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;

#line 1041 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 1041 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 1082 "map.m"
            {
#line 1082 "map.m"
              mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__STATE_VARIABLE_Map_14_14);
            }
#line 1043 "map.m"
            /* direct tailcall eliminated */
#line 1043 "map.m"
            {
#line 1043 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__KVs_9;
#line 1043 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1043 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1043 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1043 "map.m"
            }
#line 1043 "map.m"
            continue;
#line 1041 "map.m"
          }
#line 1040 "map.m"
      }
#line 1040 "map.m"
      break;
#line 1040 "map.m"
    }
#line 165 "map.m"
}

#line 164 "map.m"
MR_Word MR_CALL 
mercury__map__set_from_assoc_list_2_f_0(
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 164 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 164 "map.m"
  MR_Word mercury__map__M1_4,
#line 164 "map.m"
  MR_Word mercury__map__AL_5)
#line 164 "map.m"
{
#line 1038 "map.m"
  {
#line 1038 "map.m"
    MR_bool mercury__map__succeeded;
#line 1038 "map.m"
    MR_Word mercury__map__M2_6;

#line 1038 "map.m"
    {
#line 1038 "map.m"
      mercury__map__set_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
#line 1038 "map.m"
    return mercury__map__M2_6;
#line 1038 "map.m"
  }
#line 164 "map.m"
}

#line 161 "map.m"
void MR_CALL 
mercury__map__set_from_corresponding_lists_4_p_0(
#line 161 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 161 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 161 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 161 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 161 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
#line 161 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
#line 161 "map.m"
{
#line 1028 "map.m"
  while (MR_TRUE)
#line 1028 "map.m"
    {
#line 1028 "map.m"
      /* tailcall optimized into a loop */
#line 1028 "map.m"
      {
#line 1028 "map.m"
        MR_bool mercury__map__succeeded;

#line 1028 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "map.m"
          if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1028 "map.m"
            *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
#line 1028 "map.m"
          else
#line 1029 "map.m"
            {
#line 1030 "map.m"
              {
#line 1030 "map.m"
                mercury__require__error_1_p_0((MR_String) "map.set_from_corresponding_lists - lists do not correspond");
#line 1030 "map.m"
                return;
              }
#line 1029 "map.m"
            }
#line 1028 "map.m"
        else
#line 1028 "map.m"
          {
#line 1028 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1028 "map.m"
            MR_Box mercury__map__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 1028 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "map.m"
              {
#line 1032 "map.m"
                {
#line 1032 "map.m"
                  mercury__require__error_1_p_0((MR_String) "map.set_from_corresponding_lists - lists do not correspond");
#line 1032 "map.m"
                  return;
                }
#line 1031 "map.m"
              }
#line 1028 "map.m"
            else
#line 1033 "map.m"
              {
#line 1033 "map.m"
                MR_Box mercury__map__V_20 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 1033 "map.m"
                MR_Word mercury__map__Vs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 1033 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_Map_25_25;

#line 1082 "map.m"
                {
#line 1082 "map.m"
                  mercury__tree234__set_4_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__V_30_30, mercury__map__V_20, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__STATE_VARIABLE_Map_25_25);
                }
#line 1035 "map.m"
                /* direct tailcall eliminated */
#line 1035 "map.m"
                {
#line 1035 "map.m"
                  MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_29_29;
#line 1035 "map.m"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Vs_21;
#line 1035 "map.m"
                  MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_Map_25_25;

#line 1035 "map.m"
                  mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3;
#line 1035 "map.m"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1035 "map.m"
                  mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1035 "map.m"
                }
#line 1035 "map.m"
                continue;
#line 1033 "map.m"
              }
#line 1028 "map.m"
          }
#line 1028 "map.m"
      }
#line 1028 "map.m"
      break;
#line 1028 "map.m"
    }
#line 161 "map.m"
}

#line 159 "map.m"
MR_Word MR_CALL 
mercury__map__set_from_corresponding_lists_3_f_0(
#line 159 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 159 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 159 "map.m"
  MR_Word mercury__map__M1_5,
#line 159 "map.m"
  MR_Word mercury__map__Ks_6,
#line 159 "map.m"
  MR_Word mercury__map__Vs_7)
#line 159 "map.m"
{
#line 1026 "map.m"
  {
#line 1026 "map.m"
    MR_bool mercury__map__succeeded;
#line 1026 "map.m"
    MR_Word mercury__map__M2_8;

#line 1026 "map.m"
    {
#line 1026 "map.m"
      mercury__map__set_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 1026 "map.m"
    return mercury__map__M2_8;
#line 1026 "map.m"
  }
#line 159 "map.m"
}

#line 154 "map.m"
void MR_CALL 
mercury__map__det_insert_from_assoc_list_3_p_0(
#line 154 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_16,
#line 154 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_17,
#line 154 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 154 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_2,
#line 154 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_3)
#line 154 "map.m"
{
#line 1020 "map.m"
  while (MR_TRUE)
#line 1020 "map.m"
    {
#line 1020 "map.m"
      /* tailcall optimized into a loop */
#line 1020 "map.m"
      {
#line 1020 "map.m"
        MR_bool mercury__map__succeeded;

#line 1020 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "map.m"
          *mercury__map__STATE_VARIABLE_Map_3 = mercury__map__STATE_VARIABLE_Map_0_2;
#line 1020 "map.m"
        else
#line 1021 "map.m"
          {
#line 1021 "map.m"
            MR_Box mercury__map__K_7;
#line 1021 "map.m"
            MR_Box mercury__map__V_8;
#line 1021 "map.m"
            MR_Word mercury__map__KVs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1021 "map.m"
            MR_Word mercury__map__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0)));
#line 1021 "map.m"
            MR_Word mercury__map__STATE_VARIABLE_Map_14_14;
#line 1001 "map.m"
            MR_Word mercury__map__NewMap_23;

#line 1021 "map.m"
            mercury__map__K_7 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 0));
#line 1021 "map.m"
            mercury__map__V_8 = (MR_hl_field(MR_mktag(0), mercury__map__V_13_13, (MR_Integer) 1));
#line 999 "map.m"
            {
#line 999 "map.m"
              mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, mercury__map__K_7, mercury__map__V_8, mercury__map__STATE_VARIABLE_Map_0_2, &mercury__map__NewMap_23);
            }
#line 1001 "map.m"
            if (mercury__map__succeeded)
#line 1000 "map.m"
              mercury__map__STATE_VARIABLE_Map_14_14 = mercury__map__NewMap_23;
#line 1001 "map.m"
            else
#line 1002 "map.m"
              {
#line 1002 "map.m"
                MR_Box mercury__map__V_26_26;

#line 1002 "map.m"
                {
#line 1002 "map.m"
                  mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_16, mercury__map__TypeInfo_for_V_17, (MR_String) "map.det_insert: key already present", mercury__map__K_7);
#line 1002 "map.m"
                  return;
                }
#line 1002 "map.m"
              }
#line 1023 "map.m"
            /* direct tailcall eliminated */
#line 1023 "map.m"
            {
#line 1023 "map.m"
              MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__KVs_9;
#line 1023 "map.m"
              MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2 = mercury__map__STATE_VARIABLE_Map_14_14;

#line 1023 "map.m"
              mercury__map__STATE_VARIABLE_Map_0_2 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_2;
#line 1023 "map.m"
              mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1023 "map.m"
            }
#line 1023 "map.m"
            continue;
#line 1021 "map.m"
          }
#line 1020 "map.m"
      }
#line 1020 "map.m"
      break;
#line 1020 "map.m"
    }
#line 154 "map.m"
}

#line 152 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_from_assoc_list_2_f_0(
#line 152 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 152 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 152 "map.m"
  MR_Word mercury__map__M1_4,
#line 152 "map.m"
  MR_Word mercury__map__AL_5)
#line 152 "map.m"
{
#line 1018 "map.m"
  {
#line 1018 "map.m"
    MR_bool mercury__map__succeeded;
#line 1018 "map.m"
    MR_Word mercury__map__M2_6;

#line 1018 "map.m"
    {
#line 1018 "map.m"
      mercury__map__det_insert_from_assoc_list_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__AL_5, mercury__map__M1_4, &mercury__map__M2_6);
    }
#line 1018 "map.m"
    return mercury__map__M2_6;
#line 1018 "map.m"
  }
#line 152 "map.m"
}

#line 147 "map.m"
void MR_CALL 
mercury__map__det_insert_from_corresponding_lists_4_p_0(
#line 147 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_27,
#line 147 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_28,
#line 147 "map.m"
  MR_Word mercury__map__HeadVar__1_1,
#line 147 "map.m"
  MR_Word mercury__map__HeadVar__2_2,
#line 147 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_3,
#line 147 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_4)
#line 147 "map.m"
{
#line 1008 "map.m"
  while (MR_TRUE)
#line 1008 "map.m"
    {
#line 1008 "map.m"
      /* tailcall optimized into a loop */
#line 1008 "map.m"
      {
#line 1008 "map.m"
        MR_bool mercury__map__succeeded;

#line 1008 "map.m"
        if ((mercury__map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "map.m"
          if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "map.m"
            *mercury__map__STATE_VARIABLE_Map_4 = mercury__map__STATE_VARIABLE_Map_0_3;
#line 1008 "map.m"
          else
#line 1009 "map.m"
            {
#line 1010 "map.m"
              {
#line 1010 "map.m"
                mercury__require__error_1_p_0((MR_String) "map.det_insert_from_corresponding_lists - lists do not correspond");
#line 1010 "map.m"
                return;
              }
#line 1009 "map.m"
            }
#line 1008 "map.m"
        else
#line 1008 "map.m"
          {
#line 1008 "map.m"
            MR_Word mercury__map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 1)));
#line 1008 "map.m"
            MR_Box mercury__map__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__1_1, (MR_Integer) 0));

#line 1008 "map.m"
            if ((mercury__map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "map.m"
              {
#line 1012 "map.m"
                {
#line 1012 "map.m"
                  mercury__require__error_1_p_0((MR_String) "map.det_insert_from_corresponding_lists - lists do not correspond");
#line 1012 "map.m"
                  return;
                }
#line 1011 "map.m"
              }
#line 1008 "map.m"
            else
#line 1013 "map.m"
              {
#line 1013 "map.m"
                MR_Box mercury__map__V_20 = (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 0));
#line 1013 "map.m"
                MR_Word mercury__map__Vs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__map__HeadVar__2_2, (MR_Integer) 1)));
#line 1013 "map.m"
                MR_Word mercury__map__STATE_VARIABLE_Map_25_25;
#line 1001 "map.m"
                MR_Word mercury__map__NewMap_36;

#line 999 "map.m"
                {
#line 999 "map.m"
                  mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, mercury__map__V_30_30, mercury__map__V_20, mercury__map__STATE_VARIABLE_Map_0_3, &mercury__map__NewMap_36);
                }
#line 1001 "map.m"
                if (mercury__map__succeeded)
#line 1000 "map.m"
                  mercury__map__STATE_VARIABLE_Map_25_25 = mercury__map__NewMap_36;
#line 1001 "map.m"
                else
#line 1002 "map.m"
                  {
#line 1002 "map.m"
                    MR_Box mercury__map__V_39_39;

#line 1002 "map.m"
                    {
#line 1002 "map.m"
                      mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_27, mercury__map__TypeInfo_for_V_28, (MR_String) "map.det_insert: key already present", mercury__map__V_30_30);
#line 1002 "map.m"
                      return;
                    }
#line 1002 "map.m"
                  }
#line 1015 "map.m"
                /* direct tailcall eliminated */
#line 1015 "map.m"
                {
#line 1015 "map.m"
                  MR_Word mercury__map__HeadVar__1__tmp_copy_1 = mercury__map__V_29_29;
#line 1015 "map.m"
                  MR_Word mercury__map__HeadVar__2__tmp_copy_2 = mercury__map__Vs_21;
#line 1015 "map.m"
                  MR_Word mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3 = mercury__map__STATE_VARIABLE_Map_25_25;

#line 1015 "map.m"
                  mercury__map__STATE_VARIABLE_Map_0_3 = mercury__map__STATE_VARIABLE_Map_0__tmp_copy_3;
#line 1015 "map.m"
                  mercury__map__HeadVar__2_2 = mercury__map__HeadVar__2__tmp_copy_2;
#line 1015 "map.m"
                  mercury__map__HeadVar__1_1 = mercury__map__HeadVar__1__tmp_copy_1;
#line 1015 "map.m"
                }
#line 1015 "map.m"
                continue;
#line 1013 "map.m"
              }
#line 1008 "map.m"
          }
#line 1008 "map.m"
      }
#line 1008 "map.m"
      break;
#line 1008 "map.m"
    }
#line 147 "map.m"
}

#line 145 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_from_corresponding_lists_3_f_0(
#line 145 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 145 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 145 "map.m"
  MR_Word mercury__map__M1_5,
#line 145 "map.m"
  MR_Word mercury__map__Ks_6,
#line 145 "map.m"
  MR_Word mercury__map__Vs_7)
#line 145 "map.m"
{
#line 1006 "map.m"
  {
#line 1006 "map.m"
    MR_bool mercury__map__succeeded;
#line 1006 "map.m"
    MR_Word mercury__map__M2_8;

#line 1006 "map.m"
    {
#line 1006 "map.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Ks_6, mercury__map__Vs_7, mercury__map__M1_5, &mercury__map__M2_8);
    }
#line 1006 "map.m"
    return mercury__map__M2_8;
#line 1006 "map.m"
  }
#line 145 "map.m"
}

#line 141 "map.m"
void MR_CALL 
mercury__map__det_insert_4_p_0(
#line 141 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_13,
#line 141 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_14,
#line 141 "map.m"
  MR_Box mercury__map__K_5,
#line 141 "map.m"
  MR_Box mercury__map__V_6,
#line 141 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_9,
#line 141 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_10)
#line 141 "map.m"
{
#line 1001 "map.m"
  {
#line 1001 "map.m"
    MR_bool mercury__map__succeeded;
#line 1001 "map.m"
    MR_Word mercury__map__NewMap_8;

#line 999 "map.m"
    {
#line 999 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_9, &mercury__map__NewMap_8);
    }
#line 1001 "map.m"
    if (mercury__map__succeeded)
#line 1000 "map.m"
      *mercury__map__STATE_VARIABLE_Map_10 = mercury__map__NewMap_8;
#line 1001 "map.m"
    else
#line 1002 "map.m"
      {
#line 1002 "map.m"
        MR_Box mercury__map__V_15_15;

#line 1002 "map.m"
        {
#line 1002 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_13, mercury__map__TypeInfo_for_V_14, (MR_String) "map.det_insert: key already present", mercury__map__K_5);
#line 1002 "map.m"
          return;
        }
#line 1002 "map.m"
      }
#line 1001 "map.m"
  }
#line 141 "map.m"
}

#line 140 "map.m"
MR_Word MR_CALL 
mercury__map__det_insert_3_f_0(
#line 140 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 140 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 140 "map.m"
  MR_Word mercury__map__M1_5,
#line 140 "map.m"
  MR_Box mercury__map__K_6,
#line 140 "map.m"
  MR_Box mercury__map__V_7)
#line 140 "map.m"
{
#line 1001 "map.m"
  {
#line 1001 "map.m"
    MR_bool mercury__map__succeeded;
#line 1001 "map.m"
    MR_Word mercury__map__M2_8;
#line 1001 "map.m"
    MR_Word mercury__map__NewMap_16;

#line 999 "map.m"
    {
#line 999 "map.m"
      mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, &mercury__map__NewMap_16);
    }
#line 1001 "map.m"
    if (mercury__map__succeeded)
#line 1000 "map.m"
      mercury__map__M2_8 = mercury__map__NewMap_16;
#line 1001 "map.m"
    else
#line 1002 "map.m"
      {
#line 1002 "map.m"
        MR_Box mercury__map__V_19_19;

#line 1002 "map.m"
        {
#line 1002 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.det_insert: key already present", mercury__map__K_6);
        }
#line 1002 "map.m"
      }
#line 1001 "map.m"
    return mercury__map__M2_8;
#line 1001 "map.m"
  }
#line 140 "map.m"
}

#line 135 "map.m"
MR_bool MR_CALL 
mercury__map__insert_4_p_0(
#line 135 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_11,
#line 135 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_12,
#line 135 "map.m"
  MR_Box mercury__map__K_5,
#line 135 "map.m"
  MR_Box mercury__map__V_6,
#line 135 "map.m"
  MR_Word mercury__map__STATE_VARIABLE_Map_0_8,
#line 135 "map.m"
  MR_Word * mercury__map__STATE_VARIABLE_Map_9)
#line 135 "map.m"
{
#line 993 "map.m"
  {
#line 993 "map.m"
    MR_bool mercury__map__succeeded;

#line 993 "map.m"
    {
#line 993 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_11, mercury__map__TypeInfo_for_V_12, mercury__map__K_5, mercury__map__V_6, mercury__map__STATE_VARIABLE_Map_0_8, mercury__map__STATE_VARIABLE_Map_9);
    }
#line 993 "map.m"
    return mercury__map__succeeded;
#line 993 "map.m"
  }
#line 135 "map.m"
}

#line 134 "map.m"
MR_bool MR_CALL 
mercury__map__insert_3_f_0(
#line 134 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_9,
#line 134 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_10,
#line 134 "map.m"
  MR_Word mercury__map__M1_5,
#line 134 "map.m"
  MR_Box mercury__map__K_6,
#line 134 "map.m"
  MR_Box mercury__map__V_7,
#line 134 "map.m"
  MR_Word * mercury__map__M2_8)
#line 134 "map.m"
{
#line 993 "map.m"
  {
#line 993 "map.m"
    MR_bool mercury__map__succeeded;

#line 993 "map.m"
    {
#line 993 "map.m"
      return mercury__map__succeeded = mercury__tree234__insert_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__K_6, mercury__map__V_7, mercury__map__M1_5, mercury__map__M2_8);
    }
#line 993 "map.m"
    return mercury__map__succeeded;
#line 993 "map.m"
  }
#line 134 "map.m"
}

#line 1221 "map.m"
static void MR_CALL 
mercury__map__inverse_search_3_p_0_1(
#line 1221 "map.m"
  void * mercury__map__env_ptr_arg)
#line 1221 "map.m"
{
#line 1221 "map.m"
  {
#line 1221 "map.m"
    struct mercury__map__inverse_search_3_p_0_env_0_s * mercury__map__env_ptr = (struct mercury__map__inverse_search_3_p_0_env_0_s *) mercury__map__env_ptr_arg;

#line 1221 "map.m"
    {
#line 1221 "map.m"
      (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_5, (mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__V_9_9);
    }
#line 1221 "map.m"
    if ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__succeeded)
#line 1221 "map.m"
      {
#line 1221 "map.m"
        ((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont)((mercury__map__env_ptr)->mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr);
#line 1221 "map.m"
        return;
      }
#line 1221 "map.m"
  }
#line 1221 "map.m"
}

#line 129 "map.m"
void MR_CALL 
mercury__map__inverse_search_3_p_0(
#line 129 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_7,
#line 129 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_8,
#line 129 "map.m"
  MR_Word mercury__map__Map_4,
#line 129 "map.m"
  MR_Box mercury__map__V_5,
#line 129 "map.m"
  MR_Box * mercury__map__K_6,
#line 129 "map.m"
  MR_Cont mercury__map__cont,
#line 129 "map.m"
  void * mercury__map__cont_env_ptr)
#line 129 "map.m"
{
#line 129 "map.m"
  {
#line 129 "map.m"
    struct mercury__map__inverse_search_3_p_0_env_0_s mercury__map__env;

#line 129 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8 = mercury__map__TypeInfo_for_V_8;
#line 129 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__V_5 = mercury__map__V_5;
#line 129 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont = mercury__map__cont;
#line 129 "map.m"
    (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__map__cont_env_ptr;
#line 929 "map.m"
    {
#line 929 "map.m"
      mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, (mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_6, &(mercury__map__env).mercury__map__inverse_search_3_p_0_env_0__V_9_9, mercury__map__inverse_search_3_p_0_1, &mercury__map__env);
    }
#line 129 "map.m"
  }
#line 129 "map.m"
}

#line 125 "map.m"
MR_Box MR_CALL 
mercury__map__det_min_key_1_f_0(
#line 125 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 125 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 125 "map.m"
  MR_Word mercury__map__M_3)
#line 125 "map.m"
{
#line 982 "map.m"
  {
#line 982 "map.m"
    MR_bool mercury__map__succeeded;
#line 982 "map.m"
    MR_Box mercury__map__HeadVar__2_2;
#line 982 "map.m"
    MR_Box mercury__map__K_4;

#line 980 "map.m"
    {
#line 980 "map.m"
      mercury__map__succeeded = mercury__tree234__min_key_1_f_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__M_3, &mercury__map__K_4);
    }
#line 982 "map.m"
    if (mercury__map__succeeded)
#line 984 "map.m"
      mercury__map__HeadVar__2_2 = mercury__map__K_4;
#line 982 "map.m"
    else
#line 986 "map.m"
      {
#line 986 "map.m"
        {
#line 986 "map.m"
          return mercury__map__HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__map__TypeInfo_for_K_6, (MR_String) "map.det_min_key: map.min_key failed");
        }
#line 986 "map.m"
      }
#line 982 "map.m"
    return mercury__map__HeadVar__2_2;
#line 982 "map.m"
  }
#line 125 "map.m"
}

#line 121 "map.m"
MR_bool MR_CALL 
mercury__map__min_key_1_f_0(
#line 121 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_4,
#line 121 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_5,
#line 121 "map.m"
  MR_Word mercury__map__M_3,
#line 121 "map.m"
  MR_Box * mercury__map__HeadVar__2_2)
#line 121 "map.m"
{
#line 980 "map.m"
  {
#line 980 "map.m"
    MR_bool mercury__map__succeeded;

#line 980 "map.m"
    {
#line 980 "map.m"
      return mercury__map__succeeded = mercury__tree234__min_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
#line 980 "map.m"
    return mercury__map__succeeded;
#line 980 "map.m"
  }
#line 121 "map.m"
}

#line 117 "map.m"
MR_Box MR_CALL 
mercury__map__det_max_key_1_f_0(
#line 117 "map.m"
  MR_Word mercury__map__TypeInfo_for_K_6,
#line 117 "map.m"
  MR_Word mercury__map__TypeInfo_for_V_7,
#line 117 "map.m"
  MR_Word mercury__map__M_3)
#line 117 "map.m"
{
#line 973 "map.m"
  {
#line 973 "map.m"
    MR_bool mercury__map__succeeded;
#line 973 "map.m"
    MR_Box mercury__map__HeadVar__2_2;
#line 973 "map.m"
    MR_Box mercury__map__K_4;

#line 971 "map.m"
    {
#line 971 "map.m"
      mercury__map__succeeded = mercury__tree234__max_key_1_f_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for_V_7, mercury__map__M_3, &mercury__map__K_4);
    }
#line 973 "map.m"
    if (mercury__map__succeeded)
#line 975 "map.m"
      mercury__map__HeadVar__2_2 = mercury__map__K_4;
#line 973 "map.m"
    else
#line 977 "map.m"
      {
#line 977 "map.m"
        {
#line 977 "map.m"
          return mercury__map__HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__map__TypeInfo_for_K_6, (MR_String) "map.det_max_key: map.max_key failed");
        }
#line 977 "map.m"
      }
#line 973 "map.m"
    return mercury__map__HeadVar__2_2;
#line 973 "map.m"
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
#line 971 "map.m"
  {
#line 971 "map.m"
    MR_bool mercury__map__succeeded;

#line 971 "map.m"
    {
#line 971 "map.m"
      return mercury__map__succeeded = mercury__tree234__max_key_1_f_0(mercury__map__TypeInfo_for_K_4, mercury__map__TypeInfo_for_V_5, mercury__map__M_3, mercury__map__HeadVar__2_2);
    }
#line 971 "map.m"
    return mercury__map__succeeded;
#line 971 "map.m"
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
#line 966 "map.m"
  {
#line 966 "map.m"
    MR_bool mercury__map__succeeded;
#line 966 "map.m"
    MR_Box mercury__map__KPrime_9;
#line 966 "map.m"
    MR_Box mercury__map__VPrime_10;

#line 963 "map.m"
    {
#line 963 "map.m"
      mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
#line 966 "map.m"
    if (mercury__map__succeeded)
#line 964 "map.m"
      {
#line 964 "map.m"
        *mercury__map__K_7 = mercury__map__KPrime_9;
#line 965 "map.m"
        *mercury__map__V_8 = mercury__map__VPrime_10;
#line 964 "map.m"
      }
#line 966 "map.m"
    else
#line 967 "map.m"
      {
#line 967 "map.m"
        {
#line 967 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.upper_bound_lookup: key not found", mercury__map__SearchK_6);
#line 967 "map.m"
          return;
        }
#line 967 "map.m"
      }
#line 966 "map.m"
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
#line 960 "map.m"
  {
#line 960 "map.m"
    MR_bool mercury__map__succeeded;

#line 960 "map.m"
    {
#line 960 "map.m"
      return mercury__map__succeeded = mercury__tree234__upper_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
#line 960 "map.m"
    return mercury__map__succeeded;
#line 960 "map.m"
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
#line 954 "map.m"
  {
#line 954 "map.m"
    MR_bool mercury__map__succeeded;
#line 954 "map.m"
    MR_Box mercury__map__KPrime_9;
#line 954 "map.m"
    MR_Box mercury__map__VPrime_10;

#line 951 "map.m"
    {
#line 951 "map.m"
      mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, mercury__map__Map_5, mercury__map__SearchK_6, &mercury__map__KPrime_9, &mercury__map__VPrime_10);
    }
#line 954 "map.m"
    if (mercury__map__succeeded)
#line 952 "map.m"
      {
#line 952 "map.m"
        *mercury__map__K_7 = mercury__map__KPrime_9;
#line 953 "map.m"
        *mercury__map__V_8 = mercury__map__VPrime_10;
#line 952 "map.m"
      }
#line 954 "map.m"
    else
#line 955 "map.m"
      {
#line 955 "map.m"
        {
#line 955 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_12, mercury__map__TypeInfo_for_V_13, (MR_String) "map.lower_bound_lookup: key not found", mercury__map__SearchK_6);
#line 955 "map.m"
          return;
        }
#line 955 "map.m"
      }
#line 954 "map.m"
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
#line 948 "map.m"
  {
#line 948 "map.m"
    MR_bool mercury__map__succeeded;

#line 948 "map.m"
    {
#line 948 "map.m"
      return mercury__map__succeeded = mercury__tree234__lower_bound_search_4_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_5, mercury__map__SearchK_6, mercury__map__K_7, mercury__map__V_8);
    }
#line 948 "map.m"
    return mercury__map__succeeded;
#line 948 "map.m"
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
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_7;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, mercury__map__Map_4, mercury__map__K_5, &mercury__map__VPrime_7);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      *mercury__map__V_6 = mercury__map__VPrime_7;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_9, mercury__map__TypeInfo_for_V_10, (MR_String) "map.lookup: key not found", mercury__map__K_5);
#line 944 "map.m"
          return;
        }
#line 944 "map.m"
      }
#line 943 "map.m"
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
#line 943 "map.m"
  {
#line 943 "map.m"
    MR_bool mercury__map__succeeded;
#line 943 "map.m"
    MR_Box mercury__map__V_6;
#line 943 "map.m"
    MR_Box mercury__map__VPrime_12;

#line 941 "map.m"
    {
#line 941 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, &mercury__map__VPrime_12);
    }
#line 943 "map.m"
    if (mercury__map__succeeded)
#line 942 "map.m"
      mercury__map__V_6 = mercury__map__VPrime_12;
#line 943 "map.m"
    else
#line 944 "map.m"
      {
#line 944 "map.m"
        {
#line 944 "map.m"
          mercury__require__report_lookup_error_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, (MR_String) "map.lookup: key not found", mercury__map__K_5);
        }
#line 944 "map.m"
      }
#line 943 "map.m"
    return mercury__map__V_6;
#line 943 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;

#line 935 "map.m"
    {
#line 935 "map.m"
      return mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__M_4, mercury__map__K_5, mercury__map__V_6);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 929 "map.m"
  {
#line 929 "map.m"
    MR_bool mercury__map__succeeded;

#line 929 "map.m"
    {
#line 929 "map.m"
      mercury__tree234__member_3_p_0(mercury__map__TypeInfo_for_K_7, mercury__map__TypeInfo_for_V_8, mercury__map__Map_4, mercury__map__K_5, mercury__map__V_6, mercury__map__cont, mercury__map__cont_env_ptr);
#line 929 "map.m"
      return;
    }
#line 929 "map.m"
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
#line 935 "map.m"
  {
#line 935 "map.m"
    MR_bool mercury__map__succeeded;
#line 935 "map.m"
    MR_Box mercury__map__V_5_5;

#line 935 "map.m"
    {
#line 935 "map.m"
      mercury__map__succeeded = mercury__tree234__search_3_p_0(mercury__map__TypeInfo_for_K_6, mercury__map__TypeInfo_for__V_7, mercury__map__Map_3, mercury__map__K_4, &mercury__map__V_5_5);
    }
#line 935 "map.m"
    return mercury__map__succeeded;
#line 935 "map.m"
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
#line 923 "map.m"
  {
#line 923 "map.m"
    MR_bool mercury__map__succeeded;

#line 923 "map.m"
    {
#line 923 "map.m"
      return mercury__map__succeeded = mercury__tree234__equal_2_p_0(mercury__map__TypeInfo_for_K_5, mercury__map__TypeInfo_for_V_6, mercury__map__MapA_3, mercury__map__MapB_4);
    }
#line 923 "map.m"
    return mercury__map__succeeded;
#line 923 "map.m"
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
