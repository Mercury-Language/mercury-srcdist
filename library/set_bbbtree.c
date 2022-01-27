/*
** Automatically generated from `set_bbbtree.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module set_bbbtree. */
/* :- implementation. */

/*
INIT mercury__set_bbbtree__init
ENDINIT
*/

#include "set_bbbtree.mih"


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



#line 54 "set_bbbtree.m"
struct mercury__set_bbbtree__member_2_p_1_env_0_s {
#line 54 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9;
#line 54 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__member_2_p_1_env_0__X_3;
#line 54 "set_bbbtree.m"
  MR_Cont mercury__set_bbbtree__member_2_p_1_env_0__cont;
#line 54 "set_bbbtree.m"
  void * mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr;
#line 496 "set_bbbtree.m"
  MR_bool mercury__set_bbbtree__member_2_p_1_env_0__succeeded;
#line 496 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 496 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__Result_8;
#line 496 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__V_10_10;
#line 54 "set_bbbtree.m"
};


#line 107 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0;

#line 110 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1;

#line 113 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4];

#line 116 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1;

#line 119 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1];

#line 122 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1];

#line 125 "set_bbbtree.c"
static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2];

#line 128 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2];

#line 131 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2];

#line 134 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 137 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 139 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 141 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3);

#line 144 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 147 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 149 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 151 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 153 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_4);

#line 130 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__V_27_27,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 108 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 108 "list.int"
  MR_Word mercury__set_bbbtree__V_16_16,
#line 108 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 108 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3);

#line 130 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__V_18_18,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__set_bbbtree__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1185 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1185 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1185 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1185 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1185 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1185 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10);

#line 1162 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1162 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1162 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1162 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1162 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1121 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1121 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1121 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1088 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1088 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1088 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1088 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1088 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8);

#line 822 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 822 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 822 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 822 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 822 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8);

#line 1344 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1344 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1344 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1322 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1322 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1322 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1289 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1289 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1289 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1289 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5);

#line 1013 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1013 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1013 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 496 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 496 "set_bbbtree.m"
  void * mercury__set_bbbtree__env_ptr_arg);


static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_2[0])),
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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



#line 682 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 697 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1 = {
  &mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 705 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1
};

#line 713 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1 = {
  (MR_String) "tree",
  (MR_Integer) 4,
  (MR_Integer) 13,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1,
  NULL,
  NULL,
  NULL
};

#line 728 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0
};

#line 733 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 738 "set_bbbtree.c"
static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1
  }
};

#line 752 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0,
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 758 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 764 "set_bbbtree.c"
const MR_TypeCtorInfo_Struct mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001)),
  ((MR_Box) (mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001)),
  (MR_String) "set_bbbtree",
  (MR_String) "set_bbbtree",
  {
    mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1
  },
  {
    mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1
};

#line 785 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 788 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 790 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 792 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3)
#line 794 "set_bbbtree.c"
{
#line 796 "set_bbbtree.c"
  {
#line 798 "set_bbbtree.c"
    MR_bool mercury__set_bbbtree__succeeded;

#line 801 "set_bbbtree.c"
    {
#line 803 "set_bbbtree.c"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), ((MR_Word) mercury__set_bbbtree__wrapper_arg_2), ((MR_Word) mercury__set_bbbtree__wrapper_arg_3));
    }
#line 806 "set_bbbtree.c"
    return mercury__set_bbbtree__succeeded;
#line 808 "set_bbbtree.c"
  }
#line 810 "set_bbbtree.c"
}

#line 813 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 816 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 818 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 820 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 822 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_4)
#line 824 "set_bbbtree.c"
{
#line 826 "set_bbbtree.c"
  {
#line 828 "set_bbbtree.c"
    MR_Word mercury__set_bbbtree__conv0_HeadVar__1_1;

#line 831 "set_bbbtree.c"
    {
#line 833 "set_bbbtree.c"
      mercury__set_bbbtree____Compare____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), &mercury__set_bbbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__set_bbbtree__wrapper_arg_3), ((MR_Word) mercury__set_bbbtree__wrapper_arg_4));
    }
#line 836 "set_bbbtree.c"
    *mercury__set_bbbtree__wrapper_arg_2 = ((MR_Box) (mercury__set_bbbtree__conv0_HeadVar__1_1));
#line 838 "set_bbbtree.c"
  }
#line 840 "set_bbbtree.c"
}

#line 130 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__V_27_27,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 130 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__set_bbbtree__succeeded;

#line 332 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Word mercury__set_bbbtree__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__set_bbbtree__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 907 "set_bbbtree.m"
            {
#line 907 "set_bbbtree.m"
              mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__V_27_27, mercury__set_bbbtree__H_10_9, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13, (MR_Integer) 5);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T_11_10;
#line 336 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 130 "list.int"
}

#line 108 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 108 "list.int"
  MR_Word mercury__set_bbbtree__V_16_16,
#line 108 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 108 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3)
#line 108 "list.int"
{
#line 630 "list.opt"
  while (MR_TRUE)
#line 630 "list.opt"
    {
#line 630 "list.opt"
      /* tailcall optimized into a loop */
#line 630 "list.opt"
      {
#line 630 "list.opt"
        MR_bool mercury__set_bbbtree__succeeded;

#line 630 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "list.opt"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "list.opt"
        else
#line 631 "list.opt"
          {
#line 631 "list.opt"
            MR_Box mercury__set_bbbtree__H0_6_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 631 "list.opt"
            MR_Word mercury__set_bbbtree__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 637 "list.opt"
            MR_Box mercury__set_bbbtree__H_9_9;
#line 644 "list.opt"
            MR_bool MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__V_16_16, (MR_Integer) 1)));

#line 644 "list.opt"
            {
#line 644 "list.opt"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__V_16_16), mercury__set_bbbtree__H0_6_6, &mercury__set_bbbtree__H_9_9);
            }
#line 637 "list.opt"
            if (mercury__set_bbbtree__succeeded)
#line 635 "list.opt"
              {
#line 635 "list.opt"
                MR_Word mercury__set_bbbtree__TrueTail_10_10;

#line 635 "list.opt"
                {
#line 635 "list.opt"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__V_16_16, mercury__set_bbbtree__T0_7_7, &mercury__set_bbbtree__TrueTail_10_10);
                }
#line 636 "list.opt"
                {
#line 636 "list.opt"
                  MR_Word base;
#line 636 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "list.opt"
                  *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 636 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__H_9_9;
#line 636 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__TrueTail_10_10));
#line 636 "list.opt"
                }
#line 635 "list.opt"
              }
#line 637 "list.opt"
            else
#line 638 "list.opt"
              {
#line 638 "list.opt"
                /* direct tailcall eliminated */
#line 638 "list.opt"
                {
#line 638 "list.opt"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T0_7_7;

#line 638 "list.opt"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 638 "list.opt"
                }
#line 638 "list.opt"
                continue;
#line 638 "list.opt"
              }
#line 631 "list.opt"
          }
#line 630 "list.opt"
      }
#line 630 "list.opt"
      break;
#line 630 "list.opt"
    }
#line 108 "list.int"
}

#line 130 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__V_18_18,
#line 130 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__set_bbbtree__HeadVar__4_4)
#line 130 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__set_bbbtree__succeeded;

#line 332 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Box mercury__set_bbbtree__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 334 "list.opt"
            MR_Word mercury__set_bbbtree__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;
#line 342 "list.opt"
            MR_Box MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__V_18_18, (MR_Integer) 1)));

#line 342 "list.opt"
            {
#line 342 "list.opt"
              mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13 = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__V_18_18), mercury__set_bbbtree__H_10_9, mercury__set_bbbtree__HeadVar__3_3);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T_11_10;
#line 336 "list.opt"
              MR_Box mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 130 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__set_bbbtree__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1185 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1185 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1185 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1185 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1185 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1185 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10)
#line 1185 "set_bbbtree.m"
{
#line 1188 "set_bbbtree.m"
  {
#line 1188 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1188 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_11;
#line 1188 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_12;
#line 1192 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Val_13;

#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_11 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_36;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_37;

#line 491 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_12 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_38 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_40;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_41;

#line 491 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 1192 "set_bbbtree.m"
    mercury__set_bbbtree__Val_13 = (mercury__set_bbbtree__LSize_11 + mercury__set_bbbtree__RSize_12);
#line 1193 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_13 < (MR_Integer) 2);
#line 1197 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 1196 "set_bbbtree.m"
      {
#line 1196 "set_bbbtree.m"
        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1196 "set_bbbtree.m"
        return;
      }
#line 1197 "set_bbbtree.m"
    else
#line 1214 "set_bbbtree.m"
      {
#line 1198 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__LSize_11);

#line 1199 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_12 > mercury__set_bbbtree__Val_29);
#line 1214 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1210 "set_bbbtree.m"
          if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1211 "set_bbbtree.m"
            {
#line 1212 "set_bbbtree.m"
              {
#line 1212 "set_bbbtree.m"
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.1");
#line 1212 "set_bbbtree.m"
                return;
              }
#line 1211 "set_bbbtree.m"
            }
#line 1210 "set_bbbtree.m"
          else
#line 1202 "set_bbbtree.m"
            {
#line 1202 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1202 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RR_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1202 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RLSize_18;
#line 1202 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RRSize_19;
#line 1202 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree___V0_14 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1202 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree___N0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 490 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                mercury__set_bbbtree__RLSize_18 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
              else
#line 491 "set_bbbtree.m"
                {
#line 491 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_42 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_44;
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_45;

#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree__RLSize_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___L_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___R_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                }
#line 490 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                mercury__set_bbbtree__RRSize_19 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
              else
#line 491 "set_bbbtree.m"
                {
#line 491 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_46 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_48;
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_49;

#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree__RRSize_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___L_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___R_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                }
#line 1205 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RLSize_18 < mercury__set_bbbtree__RRSize_19);
#line 1207 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 1113 "set_bbbtree.m"
                {
#line 1113 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__B_56 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1113 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1113 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1113 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__A_X_and_Y_61;
#line 1113 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1114 "set_bbbtree.m"
                  {
#line 1114 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y_58, &mercury__set_bbbtree__A_X_and_Y_61);
                  }
#line 1115 "set_bbbtree.m"
                  {
#line 1115 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_56, mercury__set_bbbtree__A_X_and_Y_61, mercury__set_bbbtree__Z_59, mercury__set_bbbtree__Set_9);
#line 1115 "set_bbbtree.m"
                    return;
                  }
#line 1113 "set_bbbtree.m"
                }
#line 1207 "set_bbbtree.m"
              else
#line 1147 "set_bbbtree.m"
                {
#line 1147 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__C_68 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1147 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1147 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1147 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N0_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1153 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__Y_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "set_bbbtree.m"
                    {
#line 1155 "set_bbbtree.m"
                      {
#line 1155 "set_bbbtree.m"
                        mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_l.2");
#line 1155 "set_bbbtree.m"
                        return;
                      }
#line 1154 "set_bbbtree.m"
                    }
#line 1153 "set_bbbtree.m"
                  else
#line 1149 "set_bbbtree.m"
                    {
#line 1149 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree__B_73 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 0));
#line 1149 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y1_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 2)));
#line 1149 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y2_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 3)));
#line 1149 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__A_X_and_Y1_77;
#line 1149 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__C_Y2_and_Z_78;
#line 1149 "set_bbbtree.m"
                      MR_Integer mercury__set_bbbtree___N1_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 1)));

#line 1150 "set_bbbtree.m"
                      {
#line 1150 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y1_75, &mercury__set_bbbtree__A_X_and_Y1_77);
                      }
#line 1151 "set_bbbtree.m"
                      {
#line 1151 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__C_68, mercury__set_bbbtree__Y2_76, mercury__set_bbbtree__Z_71, &mercury__set_bbbtree__C_Y2_and_Z_78);
                      }
#line 1152 "set_bbbtree.m"
                      {
#line 1152 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_73, mercury__set_bbbtree__A_X_and_Y1_77, mercury__set_bbbtree__C_Y2_and_Z_78, mercury__set_bbbtree__Set_9);
#line 1152 "set_bbbtree.m"
                        return;
                      }
#line 1149 "set_bbbtree.m"
                    }
#line 1147 "set_bbbtree.m"
                }
#line 1202 "set_bbbtree.m"
            }
#line 1214 "set_bbbtree.m"
        else
#line 1231 "set_bbbtree.m"
          {
#line 1215 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_30 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__RSize_12);

#line 1216 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_11 > mercury__set_bbbtree__Val_30);
#line 1231 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1227 "set_bbbtree.m"
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "set_bbbtree.m"
                {
#line 1229 "set_bbbtree.m"
                  {
#line 1229 "set_bbbtree.m"
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.2");
#line 1229 "set_bbbtree.m"
                    return;
                  }
#line 1228 "set_bbbtree.m"
                }
#line 1227 "set_bbbtree.m"
              else
#line 1219 "set_bbbtree.m"
                {
#line 1219 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 1219 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 1219 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LLSize_24;
#line 1219 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LRSize_25;
#line 1219 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V1_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 1219 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));

#line 490 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LL_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                    mercury__set_bbbtree__LLSize_24 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
                  else
#line 491 "set_bbbtree.m"
                    {
#line 491 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_80 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_82;
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_83;

#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree__LLSize_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___L_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___R_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                    }
#line 490 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LR_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                    mercury__set_bbbtree__LRSize_25 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
                  else
#line 491 "set_bbbtree.m"
                    {
#line 491 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_84 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_86;
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_87;

#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree__LRSize_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___L_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___R_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                    }
#line 1222 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LRSize_25 < mercury__set_bbbtree__LLSize_24);
#line 1224 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 1223 "set_bbbtree.m"
                    {
#line 1223 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1223 "set_bbbtree.m"
                      return;
                    }
#line 1224 "set_bbbtree.m"
                  else
#line 1225 "set_bbbtree.m"
                    {
#line 1225 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1225 "set_bbbtree.m"
                      return;
                    }
#line 1219 "set_bbbtree.m"
                }
#line 1231 "set_bbbtree.m"
            else
#line 1232 "set_bbbtree.m"
              {
#line 1232 "set_bbbtree.m"
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1232 "set_bbbtree.m"
                return;
              }
#line 1231 "set_bbbtree.m"
          }
#line 1214 "set_bbbtree.m"
      }
#line 1188 "set_bbbtree.m"
  }
#line 1185 "set_bbbtree.m"
}

#line 1162 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1162 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1162 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1162 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1162 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1162 "set_bbbtree.m"
{
#line 1165 "set_bbbtree.m"
  {
#line 1165 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1165 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "set_bbbtree.m"
      {
#line 1166 "set_bbbtree.m"
        {
#line 1166 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.1");
#line 1166 "set_bbbtree.m"
          return;
        }
#line 1165 "set_bbbtree.m"
      }
#line 1165 "set_bbbtree.m"
    else
#line 1167 "set_bbbtree.m"
      {
#line 1167 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1167 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1167 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1167 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1173 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Y_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "set_bbbtree.m"
          {
#line 1175 "set_bbbtree.m"
            {
#line 1175 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.2");
#line 1175 "set_bbbtree.m"
              return;
            }
#line 1174 "set_bbbtree.m"
          }
#line 1173 "set_bbbtree.m"
        else
#line 1169 "set_bbbtree.m"
          {
#line 1169 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__B_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 0));
#line 1169 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 2)));
#line 1169 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 3)));
#line 1169 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__A_X_and_Y1_20;
#line 1169 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__C_Y2_and_Z_21;
#line 1169 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 1)));

#line 1170 "set_bbbtree.m"
            {
#line 1170 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__Y1_18, &mercury__set_bbbtree__A_X_and_Y1_20);
            }
#line 1171 "set_bbbtree.m"
            {
#line 1171 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y2_19, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__C_Y2_and_Z_21);
            }
#line 1172 "set_bbbtree.m"
            {
#line 1172 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_16, mercury__set_bbbtree__A_X_and_Y1_20, mercury__set_bbbtree__C_Y2_and_Z_21, mercury__set_bbbtree__HeadVar__4_4);
#line 1172 "set_bbbtree.m"
              return;
            }
#line 1169 "set_bbbtree.m"
          }
#line 1167 "set_bbbtree.m"
      }
#line 1165 "set_bbbtree.m"
  }
#line 1162 "set_bbbtree.m"
}

#line 1121 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1121 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1121 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1121 "set_bbbtree.m"
{
#line 1124 "set_bbbtree.m"
  {
#line 1124 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1124 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1124 "set_bbbtree.m"
      {
#line 1125 "set_bbbtree.m"
        {
#line 1125 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.single_rot_r");
#line 1125 "set_bbbtree.m"
          return;
        }
#line 1124 "set_bbbtree.m"
      }
#line 1124 "set_bbbtree.m"
    else
#line 1126 "set_bbbtree.m"
      {
#line 1126 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1126 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1126 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1126 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__B_Y_and_Z_16;
#line 1126 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1127 "set_bbbtree.m"
        {
#line 1127 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y_13, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__B_Y_and_Z_16);
        }
#line 1128 "set_bbbtree.m"
        {
#line 1128 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__B_Y_and_Z_16, mercury__set_bbbtree__HeadVar__4_4);
#line 1128 "set_bbbtree.m"
          return;
        }
#line 1126 "set_bbbtree.m"
      }
#line 1124 "set_bbbtree.m"
  }
#line 1121 "set_bbbtree.m"
}

#line 1088 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1088 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1088 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1088 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1088 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8)
#line 1088 "set_bbbtree.m"
{
#line 1091 "set_bbbtree.m"
  {
#line 1091 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1091 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_9;
#line 1091 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_10;
#line 1091 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_11;
#line 1091 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Tree0_12;
#line 1091 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_13_13;

#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_9 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_18;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_19;

#line 491 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_10 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_22;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_23;

#line 491 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 1094 "set_bbbtree.m"
    mercury__set_bbbtree__V_13_13 = ((MR_Integer) 1 + mercury__set_bbbtree__LSize_9);
#line 1094 "set_bbbtree.m"
    mercury__set_bbbtree__N_11 = (mercury__set_bbbtree__V_13_13 + mercury__set_bbbtree__RSize_10);
#line 1095 "set_bbbtree.m"
    {
#line 1095 "set_bbbtree.m"
      mercury__set_bbbtree__Tree0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 0) = mercury__set_bbbtree__X_5;
#line 1095 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 1) = ((MR_Box) (mercury__set_bbbtree__N_11));
#line 1095 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 2) = ((MR_Box) (mercury__set_bbbtree__L_6));
#line 1095 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 3) = ((MR_Box) (mercury__set_bbbtree__R_7));
#line 1095 "set_bbbtree.m"
    }
#line 1096 "set_bbbtree.m"
    *mercury__set_bbbtree__Tree_8 = mercury__set_bbbtree__Tree0_12;
#line 1091 "set_bbbtree.m"
  }
#line 1088 "set_bbbtree.m"
}

#line 822 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 822 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 822 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 822 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 822 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8)
#line 822 "set_bbbtree.m"
{
#line 840 "set_bbbtree.m"
  {
#line 840 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 > (MR_Integer) 3);

#line 840 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 827 "set_bbbtree.m"
      {
#line 827 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NL_9 = (mercury__set_bbbtree__N_7 / (MR_Integer) 2);
#line 827 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NR_10;
#line 827 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList0_11;
#line 827 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12;
#line 827 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__V_21_21 = (mercury__set_bbbtree__N_7 - mercury__set_bbbtree__NL_9);

#line 828 "set_bbbtree.m"
        mercury__set_bbbtree__NR_10 = (mercury__set_bbbtree__V_21_21 - (MR_Integer) 1);
#line 829 "set_bbbtree.m"
        {
#line 829 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_5, &mercury__set_bbbtree__RestOfList0_11, mercury__set_bbbtree__NL_9, &mercury__set_bbbtree__L_12);
        }
#line 835 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "set_bbbtree.m"
          {
#line 838 "set_bbbtree.m"
            {
#line 838 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.1");
#line 838 "set_bbbtree.m"
              return;
            }
#line 837 "set_bbbtree.m"
          }
#line 835 "set_bbbtree.m"
        else
#line 831 "set_bbbtree.m"
          {
#line 831 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_13 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 0));
#line 831 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 1)));
#line 831 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_15;

#line 832 "set_bbbtree.m"
            {
#line 832 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__RestOfList1_14, mercury__set_bbbtree__RestOfList_6, mercury__set_bbbtree__NR_10, &mercury__set_bbbtree__R_15);
            }
#line 834 "set_bbbtree.m"
            {
#line 834 "set_bbbtree.m"
              MR_Word base;
#line 834 "set_bbbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 834 "set_bbbtree.m"
              *mercury__set_bbbtree__Set_8 = base;
#line 834 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_13;
#line 834 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 834 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_12));
#line 834 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_15));
#line 834 "set_bbbtree.m"
            }
#line 831 "set_bbbtree.m"
          }
#line 827 "set_bbbtree.m"
      }
#line 840 "set_bbbtree.m"
    else
#line 850 "set_bbbtree.m"
      {
#line 840 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 3);
#line 850 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 846 "set_bbbtree.m"
          {
#line 846 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_16;
#line 846 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Y_17;
#line 846 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Z_18;
#line 846 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList0_45;
#line 841 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_24_24;
#line 841 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_25_25;

#line 841 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 841 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 841 "set_bbbtree.m"
              {
#line 841 "set_bbbtree.m"
                mercury__set_bbbtree__X_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 841 "set_bbbtree.m"
                mercury__set_bbbtree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 841 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 841 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 841 "set_bbbtree.m"
                  {
#line 841 "set_bbbtree.m"
                    mercury__set_bbbtree__Y_17 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 0));
#line 841 "set_bbbtree.m"
                    mercury__set_bbbtree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 1)));
#line 841 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 841 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 841 "set_bbbtree.m"
                      {
#line 841 "set_bbbtree.m"
                        mercury__set_bbbtree__Z_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 0));
#line 841 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 1)));
#line 841 "set_bbbtree.m"
                      }
#line 841 "set_bbbtree.m"
                  }
#line 841 "set_bbbtree.m"
              }
#line 846 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 842 "set_bbbtree.m"
              {
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_26_26;
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_28_28;
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_29_29;
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_30_30;
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_32_32;
#line 842 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_33_33;

#line 842 "set_bbbtree.m"
                *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_45;
#line 844 "set_bbbtree.m"
                mercury__set_bbbtree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "set_bbbtree.m"
                mercury__set_bbbtree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "set_bbbtree.m"
                {
#line 843 "set_bbbtree.m"
                  mercury__set_bbbtree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 0) = mercury__set_bbbtree__X_16;
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 1) = ((MR_Box) ((MR_Integer) 1));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 2) = ((MR_Box) (mercury__set_bbbtree__V_28_28));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 3) = ((MR_Box) (mercury__set_bbbtree__V_29_29));
#line 843 "set_bbbtree.m"
                }
#line 845 "set_bbbtree.m"
                mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "set_bbbtree.m"
                mercury__set_bbbtree__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "set_bbbtree.m"
                {
#line 843 "set_bbbtree.m"
                  mercury__set_bbbtree__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 0) = mercury__set_bbbtree__Z_18;
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 2) = ((MR_Box) (mercury__set_bbbtree__V_32_32));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 3) = ((MR_Box) (mercury__set_bbbtree__V_33_33));
#line 843 "set_bbbtree.m"
                }
#line 843 "set_bbbtree.m"
                {
#line 843 "set_bbbtree.m"
                  MR_Word base;
#line 843 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 843 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_8 = base;
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_17;
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_26_26));
#line 843 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_30_30));
#line 843 "set_bbbtree.m"
                }
#line 842 "set_bbbtree.m"
              }
#line 846 "set_bbbtree.m"
            else
#line 848 "set_bbbtree.m"
              {
#line 848 "set_bbbtree.m"
                {
#line 848 "set_bbbtree.m"
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.2");
#line 848 "set_bbbtree.m"
                  return;
                }
#line 848 "set_bbbtree.m"
              }
#line 846 "set_bbbtree.m"
          }
#line 850 "set_bbbtree.m"
        else
#line 858 "set_bbbtree.m"
          {
#line 850 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 2);
#line 858 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 854 "set_bbbtree.m"
              {
#line 854 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__RestOfList0_46;
#line 854 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__X_47;
#line 854 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__Y_48;
#line 851 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_35_35;

#line 851 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 851 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 851 "set_bbbtree.m"
                  {
#line 851 "set_bbbtree.m"
                    mercury__set_bbbtree__X_47 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 851 "set_bbbtree.m"
                    mercury__set_bbbtree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 851 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 851 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 851 "set_bbbtree.m"
                      {
#line 851 "set_bbbtree.m"
                        mercury__set_bbbtree__Y_48 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 0));
#line 851 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 1)));
#line 851 "set_bbbtree.m"
                      }
#line 851 "set_bbbtree.m"
                  }
#line 854 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 852 "set_bbbtree.m"
                  {
#line 852 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_36_36;
#line 852 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_38_38;
#line 852 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_39_39;
#line 852 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_40_40;

#line 852 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_46;
#line 853 "set_bbbtree.m"
                    mercury__set_bbbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "set_bbbtree.m"
                    mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "set_bbbtree.m"
                    {
#line 853 "set_bbbtree.m"
                      mercury__set_bbbtree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 0) = mercury__set_bbbtree__X_47;
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 1) = ((MR_Box) ((MR_Integer) 1));
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 2) = ((MR_Box) (mercury__set_bbbtree__V_38_38));
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 3) = ((MR_Box) (mercury__set_bbbtree__V_39_39));
#line 853 "set_bbbtree.m"
                    }
#line 853 "set_bbbtree.m"
                    mercury__set_bbbtree__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "set_bbbtree.m"
                    {
#line 853 "set_bbbtree.m"
                      MR_Word base;
#line 853 "set_bbbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 853 "set_bbbtree.m"
                      *mercury__set_bbbtree__Set_8 = base;
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_48;
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_36_36));
#line 853 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_40_40));
#line 853 "set_bbbtree.m"
                    }
#line 852 "set_bbbtree.m"
                  }
#line 854 "set_bbbtree.m"
                else
#line 856 "set_bbbtree.m"
                  {
#line 856 "set_bbbtree.m"
                    {
#line 856 "set_bbbtree.m"
                      mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.3");
#line 856 "set_bbbtree.m"
                      return;
                    }
#line 856 "set_bbbtree.m"
                  }
#line 854 "set_bbbtree.m"
              }
#line 858 "set_bbbtree.m"
            else
#line 866 "set_bbbtree.m"
              {
#line 858 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 1);
#line 866 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 862 "set_bbbtree.m"
                  {
#line 862 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__RestOfList0_49;
#line 862 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree__X_50;

#line 859 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 859 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 859 "set_bbbtree.m"
                      {
#line 859 "set_bbbtree.m"
                        mercury__set_bbbtree__X_50 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 859 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 860 "set_bbbtree.m"
                        {
#line 860 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_42_42;
#line 860 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_43_43;

#line 860 "set_bbbtree.m"
                          *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_49;
#line 861 "set_bbbtree.m"
                          mercury__set_bbbtree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "set_bbbtree.m"
                          mercury__set_bbbtree__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "set_bbbtree.m"
                          {
#line 861 "set_bbbtree.m"
                            MR_Word base;
#line 861 "set_bbbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 861 "set_bbbtree.m"
                            *mercury__set_bbbtree__Set_8 = base;
#line 861 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_50;
#line 861 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 861 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_42_42));
#line 861 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_43_43));
#line 861 "set_bbbtree.m"
                          }
#line 860 "set_bbbtree.m"
                        }
#line 859 "set_bbbtree.m"
                      }
#line 859 "set_bbbtree.m"
                    else
#line 864 "set_bbbtree.m"
                      {
#line 864 "set_bbbtree.m"
                        {
#line 864 "set_bbbtree.m"
                          mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.4");
#line 864 "set_bbbtree.m"
                          return;
                        }
#line 864 "set_bbbtree.m"
                      }
#line 862 "set_bbbtree.m"
                  }
#line 866 "set_bbbtree.m"
                else
#line 868 "set_bbbtree.m"
                  {
#line 868 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__List_5;
#line 869 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "set_bbbtree.m"
                  }
#line 866 "set_bbbtree.m"
              }
#line 858 "set_bbbtree.m"
          }
#line 850 "set_bbbtree.m"
      }
#line 840 "set_bbbtree.m"
  }
#line 822 "set_bbbtree.m"
}

#line 459 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0(
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_25,
#line 459 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__1_1,
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3)
#line 459 "set_bbbtree.m"
{
#line 459 "set_bbbtree.m"
  while (MR_TRUE)
#line 459 "set_bbbtree.m"
    {
#line 459 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 459 "set_bbbtree.m"
      {
#line 459 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 459 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_23 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;
#line 459 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_24 = (MR_Integer) mercury__set_bbbtree__HeadVar__3_3;

#line 459 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_23 == mercury__set_bbbtree__CastY_24);
#line 459 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 2249 "set_bbbtree.c"
          *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "set_bbbtree.m"
        else
#line 459 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "set_bbbtree.m"
            else
#line 2261 "set_bbbtree.c"
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 459 "set_bbbtree.m"
          else
#line 459 "set_bbbtree.m"
            {
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 459 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 459 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_34_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));

#line 459 "set_bbbtree.m"
              if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2278 "set_bbbtree.c"
                *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 459 "set_bbbtree.m"
              else
#line 459 "set_bbbtree.m"
                {
#line 459 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 0));
#line 459 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 1)));
#line 459 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 459 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 459 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_20_20;

#line 459 "set_bbbtree.m"
                  {
#line 459 "set_bbbtree.m"
                    mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__V_34_34, mercury__set_bbbtree__V_16_16);
                  }
#line 2300 "set_bbbtree.c"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_20_20 == (MR_Integer) 0);
#line 459 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 459 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                    *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_20_20;
#line 459 "set_bbbtree.m"
                  else
#line 459 "set_bbbtree.m"
                    {
#line 459 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__V_21_21;

#line 66 "private_builtin.opt"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_33_33 < mercury__set_bbbtree__V_17_17);
#line 69 "private_builtin.opt"
                      if (mercury__set_bbbtree__succeeded)
#line 68 "private_builtin.opt"
                        mercury__set_bbbtree__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_33_33 == mercury__set_bbbtree__V_17_17);
#line 74 "private_builtin.opt"
                          if (mercury__set_bbbtree__succeeded)
#line 73 "private_builtin.opt"
                            mercury__set_bbbtree__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__set_bbbtree__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 2337 "set_bbbtree.c"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_21_21 == (MR_Integer) 0);
#line 459 "set_bbbtree.m"
                      mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 459 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                        *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_21_21;
#line 459 "set_bbbtree.m"
                      else
#line 459 "set_bbbtree.m"
                        {
#line 459 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_22_22;

#line 459 "set_bbbtree.m"
                          {
#line 459 "set_bbbtree.m"
                            mercury__set_bbbtree____Compare____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_22_22, mercury__set_bbbtree__V_32_32, mercury__set_bbbtree__V_18_18);
                          }
#line 2357 "set_bbbtree.c"
                          mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_22_22 == (MR_Integer) 0);
#line 459 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 459 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                            *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_22_22;
#line 459 "set_bbbtree.m"
                          else
#line 459 "set_bbbtree.m"
                            {
#line 459 "set_bbbtree.m"
                              /* direct tailcall eliminated */
#line 459 "set_bbbtree.m"
                              {
#line 459 "set_bbbtree.m"
                                MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_31_31;
#line 459 "set_bbbtree.m"
                                MR_Word mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__V_19_19;

#line 459 "set_bbbtree.m"
                                mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 459 "set_bbbtree.m"
                                mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 459 "set_bbbtree.m"
                              }
#line 459 "set_bbbtree.m"
                              continue;
#line 459 "set_bbbtree.m"
                            }
#line 459 "set_bbbtree.m"
                        }
#line 459 "set_bbbtree.m"
                    }
#line 459 "set_bbbtree.m"
                }
#line 459 "set_bbbtree.m"
            }
#line 459 "set_bbbtree.m"
      }
#line 459 "set_bbbtree.m"
      break;
#line 459 "set_bbbtree.m"
    }
#line 459 "set_bbbtree.m"
}

#line 459 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0(
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 459 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 459 "set_bbbtree.m"
{
#line 459 "set_bbbtree.m"
  while (MR_TRUE)
#line 459 "set_bbbtree.m"
    {
#line 459 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 459 "set_bbbtree.m"
      {
#line 459 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 459 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_13 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 459 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_14 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 459 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_13 == mercury__set_bbbtree__CastY_14);
#line 459 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = MR_TRUE;
#line 459 "set_bbbtree.m"
        else
#line 459 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "set_bbbtree.m"
            {
#line 459 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__CastX_3 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 459 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__CastY_4 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 459 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastY_4 == mercury__set_bbbtree__CastX_3);
#line 459 "set_bbbtree.m"
            }
#line 459 "set_bbbtree.m"
          else
#line 459 "set_bbbtree.m"
            {
#line 459 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 459 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 459 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_9_9;
#line 459 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_10_10;
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_11_11;
#line 459 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_12_12;

#line 459 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 459 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                {
#line 459 "set_bbbtree.m"
                  mercury__set_bbbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 459 "set_bbbtree.m"
                  mercury__set_bbbtree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 459 "set_bbbtree.m"
                  mercury__set_bbbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 459 "set_bbbtree.m"
                  mercury__set_bbbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 2487 "set_bbbtree.c"
                  {
#line 2489 "set_bbbtree.c"
                    mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__V_9_9);
                  }
#line 459 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                    {
#line 2496 "set_bbbtree.c"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == mercury__set_bbbtree__V_10_10);
#line 459 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 459 "set_bbbtree.m"
                        {
#line 2502 "set_bbbtree.c"
                          {
#line 2504 "set_bbbtree.c"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_7_7, mercury__set_bbbtree__V_11_11);
                          }
#line 459 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 2509 "set_bbbtree.c"
                            {
#line 2511 "set_bbbtree.c"
                              /* direct tailcall eliminated */
#line 2513 "set_bbbtree.c"
                              {
#line 2515 "set_bbbtree.c"
                                MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_8_8;
#line 2517 "set_bbbtree.c"
                                MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 2520 "set_bbbtree.c"
                                mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 2522 "set_bbbtree.c"
                                mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 2524 "set_bbbtree.c"
                              }
#line 2526 "set_bbbtree.c"
                              continue;
#line 2528 "set_bbbtree.c"
                            }
#line 459 "set_bbbtree.m"
                        }
#line 459 "set_bbbtree.m"
                    }
#line 459 "set_bbbtree.m"
                }
#line 459 "set_bbbtree.m"
            }
#line 459 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 459 "set_bbbtree.m"
      }
#line 459 "set_bbbtree.m"
      break;
#line 459 "set_bbbtree.m"
    }
#line 459 "set_bbbtree.m"
}

#line 1344 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1344 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1344 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1344 "set_bbbtree.m"
{
#line 1347 "set_bbbtree.m"
  while (MR_TRUE)
#line 1347 "set_bbbtree.m"
    {
#line 1347 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1347 "set_bbbtree.m"
      {
#line 1347 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1347 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1347 "set_bbbtree.m"
        else
#line 1348 "set_bbbtree.m"
          {
#line 1348 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1348 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1348 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1348 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1348 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1349 "set_bbbtree.m"
            {
#line 1349 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1353 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1354 "set_bbbtree.m"
              {
#line 1354 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Set0_15;

#line 1355 "set_bbbtree.m"
                {
#line 1355 "set_bbbtree.m"
                  mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1356 "set_bbbtree.m"
                {
#line 1356 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__R_10, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1356 "set_bbbtree.m"
                  return;
                }
#line 1354 "set_bbbtree.m"
              }
#line 1353 "set_bbbtree.m"
            else
#line 1353 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1359 "set_bbbtree.m"
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__R_10;
#line 1353 "set_bbbtree.m"
              else
#line 1352 "set_bbbtree.m"
                {
#line 1352 "set_bbbtree.m"
                  /* direct tailcall eliminated */
#line 1352 "set_bbbtree.m"
                  {
#line 1352 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_10;

#line 1352 "set_bbbtree.m"
                    mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1352 "set_bbbtree.m"
                  }
#line 1352 "set_bbbtree.m"
                  continue;
#line 1352 "set_bbbtree.m"
                }
#line 1348 "set_bbbtree.m"
          }
#line 1347 "set_bbbtree.m"
      }
#line 1347 "set_bbbtree.m"
      break;
#line 1347 "set_bbbtree.m"
    }
#line 1344 "set_bbbtree.m"
}

#line 1322 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1322 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1322 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1322 "set_bbbtree.m"
{
#line 1325 "set_bbbtree.m"
  while (MR_TRUE)
#line 1325 "set_bbbtree.m"
    {
#line 1325 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1325 "set_bbbtree.m"
      {
#line 1325 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1325 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1325 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1325 "set_bbbtree.m"
        else
#line 1326 "set_bbbtree.m"
          {
#line 1326 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1326 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1326 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1326 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1326 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1327 "set_bbbtree.m"
            {
#line 1327 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1331 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1330 "set_bbbtree.m"
              {
#line 1330 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1330 "set_bbbtree.m"
                {
#line 1330 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_9;

#line 1330 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1330 "set_bbbtree.m"
                }
#line 1330 "set_bbbtree.m"
                continue;
#line 1330 "set_bbbtree.m"
              }
#line 1331 "set_bbbtree.m"
            else
#line 1331 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1337 "set_bbbtree.m"
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__L_9;
#line 1331 "set_bbbtree.m"
              else
#line 1332 "set_bbbtree.m"
                {
#line 1332 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Set0_15;

#line 1333 "set_bbbtree.m"
                  {
#line 1333 "set_bbbtree.m"
                    mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__R_10, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                  }
#line 1334 "set_bbbtree.m"
                  {
#line 1334 "set_bbbtree.m"
                    mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1334 "set_bbbtree.m"
                    return;
                  }
#line 1332 "set_bbbtree.m"
                }
#line 1326 "set_bbbtree.m"
          }
#line 1325 "set_bbbtree.m"
      }
#line 1325 "set_bbbtree.m"
      break;
#line 1325 "set_bbbtree.m"
    }
#line 1322 "set_bbbtree.m"
}

#line 1289 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1289 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1289 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1289 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5)
#line 1289 "set_bbbtree.m"
{
#line 1292 "set_bbbtree.m"
  {
#line 1292 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1292 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "set_bbbtree.m"
      {
#line 1293 "set_bbbtree.m"
        mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1293 "set_bbbtree.m"
        return;
      }
#line 1292 "set_bbbtree.m"
    else
#line 1295 "set_bbbtree.m"
      {
#line 1295 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__LV_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1295 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__LN_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1295 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1295 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 1299 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1298 "set_bbbtree.m"
          {
#line 1298 "set_bbbtree.m"
            mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1298 "set_bbbtree.m"
            return;
          }
#line 1299 "set_bbbtree.m"
        else
#line 1300 "set_bbbtree.m"
          {
#line 1300 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__RV_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 0));
#line 1300 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__RN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 1)));
#line 1300 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RL_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 2)));
#line 1300 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RR_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 3)));
#line 1302 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_22 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__LN_11);

#line 1303 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_22 < mercury__set_bbbtree__RN_19);
#line 1307 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1305 "set_bbbtree.m"
              {
#line 1305 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__NewL_23;

#line 1305 "set_bbbtree.m"
                {
#line 1305 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__RL_20, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__Ratio_5);
                }
#line 1306 "set_bbbtree.m"
                {
#line 1306 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__RV_18, mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__RR_21, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1306 "set_bbbtree.m"
                  return;
                }
#line 1305 "set_bbbtree.m"
              }
#line 1307 "set_bbbtree.m"
            else
#line 1313 "set_bbbtree.m"
              {
#line 1308 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__RN_19);

#line 1309 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_29 < mercury__set_bbbtree__LN_11);
#line 1313 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1311 "set_bbbtree.m"
                  {
#line 1311 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__NewR_24;

#line 1311 "set_bbbtree.m"
                    {
#line 1311 "set_bbbtree.m"
                      mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__LR_13, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Ratio_5);
                    }
#line 1312 "set_bbbtree.m"
                    {
#line 1312 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__LV_10, mercury__set_bbbtree__LL_12, mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1312 "set_bbbtree.m"
                      return;
                    }
#line 1311 "set_bbbtree.m"
                  }
#line 1313 "set_bbbtree.m"
                else
#line 1314 "set_bbbtree.m"
                  {
#line 1314 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_3, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__R_2, mercury__set_bbbtree__Set_4);
#line 1314 "set_bbbtree.m"
                    return;
                  }
#line 1313 "set_bbbtree.m"
              }
#line 1300 "set_bbbtree.m"
          }
#line 1295 "set_bbbtree.m"
      }
#line 1292 "set_bbbtree.m"
  }
#line 1289 "set_bbbtree.m"
}

#line 1056 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_r_4_p_0(
#line 1056 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 1056 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1056 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1056 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1056 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1056 "set_bbbtree.m"
{
#line 1059 "set_bbbtree.m"
  {
#line 1059 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1059 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1059 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1059 "set_bbbtree.m"
    else
#line 1060 "set_bbbtree.m"
      {
#line 1060 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 1060 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 1060 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1061 "set_bbbtree.m"
        {
#line 1061 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1062 "set_bbbtree.m"
        {
#line 1062 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1063 "set_bbbtree.m"
        {
#line 1063 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1064 "set_bbbtree.m"
        {
#line 1064 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1065 "set_bbbtree.m"
        {
#line 1065 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 1067 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1249 "set_bbbtree.m"
          {
#line 1249 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 490 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
            else
#line 491 "set_bbbtree.m"
              {
#line 491 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 491 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 491 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
              }
#line 1251 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1254 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1253 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1254 "set_bbbtree.m"
            else
#line 1255 "set_bbbtree.m"
              {
#line 1255 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 490 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
                else
#line 491 "set_bbbtree.m"
                  {
#line 491 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 491 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                  }
#line 1256 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1259 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1258 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1259 "set_bbbtree.m"
                else
#line 1272 "set_bbbtree.m"
                  {
#line 1266 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1272 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1269 "set_bbbtree.m"
                      {
#line 1269 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1269 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1267 "set_bbbtree.m"
                        {
#line 1267 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1269 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                          {
#line 1268 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1268 "set_bbbtree.m"
                            return;
                          }
#line 1269 "set_bbbtree.m"
                        else
#line 1270 "set_bbbtree.m"
                          {
#line 1270 "set_bbbtree.m"
                            {
#line 1270 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1270 "set_bbbtree.m"
                              return;
                            }
#line 1270 "set_bbbtree.m"
                          }
#line 1269 "set_bbbtree.m"
                      }
#line 1272 "set_bbbtree.m"
                    else
#line 1275 "set_bbbtree.m"
                      {
#line 1275 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1275 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1273 "set_bbbtree.m"
                        {
#line 1273 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1275 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1274 "set_bbbtree.m"
                          {
#line 1274 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
#line 1274 "set_bbbtree.m"
                            return;
                          }
#line 1275 "set_bbbtree.m"
                        else
#line 1276 "set_bbbtree.m"
                          {
#line 1276 "set_bbbtree.m"
                            {
#line 1276 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1276 "set_bbbtree.m"
                              return;
                            }
#line 1276 "set_bbbtree.m"
                          }
#line 1275 "set_bbbtree.m"
                      }
#line 1272 "set_bbbtree.m"
                  }
#line 1255 "set_bbbtree.m"
              }
#line 1249 "set_bbbtree.m"
          }
#line 1067 "set_bbbtree.m"
        else
#line 1068 "set_bbbtree.m"
          {
#line 1068 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1068 "set_bbbtree.m"
            return;
          }
#line 1060 "set_bbbtree.m"
      }
#line 1059 "set_bbbtree.m"
  }
#line 1056 "set_bbbtree.m"
}

#line 1032 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_r_3_f_0(
#line 1032 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 1032 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1032 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1032 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 1032 "set_bbbtree.m"
{
#line 1035 "set_bbbtree.m"
  while (MR_TRUE)
#line 1035 "set_bbbtree.m"
    {
#line 1035 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1035 "set_bbbtree.m"
      {
#line 1035 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 1035 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__HeadVar__4_4;

#line 1035 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "set_bbbtree.m"
          mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__1_1;
#line 1035 "set_bbbtree.m"
        else
#line 1037 "set_bbbtree.m"
          {
#line 1037 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1037 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Sets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1037 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Intersect1_11;

#line 1038 "set_bbbtree.m"
            {
#line 1038 "set_bbbtree.m"
              mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Set_8, &mercury__set_bbbtree__Intersect1_11, mercury__set_bbbtree__HeadVar__3_3);
            }
#line 1037 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 1037 "set_bbbtree.m"
            {
#line 1037 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Intersect1_11;
#line 1037 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Sets_9;

#line 1037 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1037 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1037 "set_bbbtree.m"
            }
#line 1037 "set_bbbtree.m"
            continue;
#line 1037 "set_bbbtree.m"
          }
#line 1035 "set_bbbtree.m"
        return mercury__set_bbbtree__HeadVar__4_4;
#line 1035 "set_bbbtree.m"
      }
#line 1035 "set_bbbtree.m"
      break;
#line 1035 "set_bbbtree.m"
    }
#line 1032 "set_bbbtree.m"
}

#line 1013 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1013 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1013 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1013 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1013 "set_bbbtree.m"
{
#line 1016 "set_bbbtree.m"
  while (MR_TRUE)
#line 1016 "set_bbbtree.m"
    {
#line 1016 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1016 "set_bbbtree.m"
      {
#line 1016 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1016 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "set_bbbtree.m"
          else
#line 1017 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "set_bbbtree.m"
        else
#line 1016 "set_bbbtree.m"
          {
#line 1016 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1016 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1016 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1018 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1016 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "set_bbbtree.m"
            else
#line 1020 "set_bbbtree.m"
              {
#line 1020 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection0_26;
#line 1020 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection1_27;

#line 1021 "set_bbbtree.m"
                {
#line 1021 "set_bbbtree.m"
                  mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_33_33, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Intersection0_26, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1023 "set_bbbtree.m"
                {
#line 1023 "set_bbbtree.m"
                  mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_31_31, mercury__set_bbbtree__Intersection0_26, &mercury__set_bbbtree__Intersection1_27, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1025 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1025 "set_bbbtree.m"
                {
#line 1025 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_30_30;
#line 1025 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Intersection1_27;

#line 1025 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1025 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1025 "set_bbbtree.m"
                }
#line 1025 "set_bbbtree.m"
                continue;
#line 1020 "set_bbbtree.m"
              }
#line 1016 "set_bbbtree.m"
          }
#line 1016 "set_bbbtree.m"
      }
#line 1016 "set_bbbtree.m"
      break;
#line 1016 "set_bbbtree.m"
    }
#line 1013 "set_bbbtree.m"
}

#line 1005 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_intersect_r_3_p_0(
#line 1005 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 1005 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1005 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 1005 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 1005 "set_bbbtree.m"
{
#line 1008 "set_bbbtree.m"
  {
#line 1008 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1008 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "set_bbbtree.m"
    else
#line 1009 "set_bbbtree.m"
      {
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_11;
#line 1009 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1010 "set_bbbtree.m"
        {
#line 1010 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__L_7, mercury__set_bbbtree__V_5, &mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 1011 "set_bbbtree.m"
        {
#line 1011 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 1011 "set_bbbtree.m"
          return;
        }
#line 1009 "set_bbbtree.m"
      }
#line 1008 "set_bbbtree.m"
  }
#line 1005 "set_bbbtree.m"
}

#line 974 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__intersect_r_4_p_0(
#line 974 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 974 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 974 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 974 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 974 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 974 "set_bbbtree.m"
{
#line 977 "set_bbbtree.m"
  {
#line 977 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 977 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 977 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 977 "set_bbbtree.m"
    else
#line 978 "set_bbbtree.m"
      {
#line 978 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 978 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 978 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 979 "set_bbbtree.m"
        {
#line 979 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 980 "set_bbbtree.m"
        {
#line 980 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 981 "set_bbbtree.m"
        {
#line 981 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 982 "set_bbbtree.m"
        {
#line 982 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 983 "set_bbbtree.m"
        {
#line 983 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 985 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 984 "set_bbbtree.m"
          {
#line 984 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 984 "set_bbbtree.m"
            return;
          }
#line 985 "set_bbbtree.m"
        else
#line 1249 "set_bbbtree.m"
          {
#line 1249 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 490 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
            else
#line 491 "set_bbbtree.m"
              {
#line 491 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 491 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 491 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
              }
#line 1251 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1254 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1253 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1254 "set_bbbtree.m"
            else
#line 1255 "set_bbbtree.m"
              {
#line 1255 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 490 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
                else
#line 491 "set_bbbtree.m"
                  {
#line 491 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 491 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                  }
#line 1256 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1259 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1258 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1259 "set_bbbtree.m"
                else
#line 1272 "set_bbbtree.m"
                  {
#line 1266 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1272 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1269 "set_bbbtree.m"
                      {
#line 1269 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1269 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1267 "set_bbbtree.m"
                        {
#line 1267 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1269 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                          {
#line 1268 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1268 "set_bbbtree.m"
                            return;
                          }
#line 1269 "set_bbbtree.m"
                        else
#line 1270 "set_bbbtree.m"
                          {
#line 1270 "set_bbbtree.m"
                            {
#line 1270 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1270 "set_bbbtree.m"
                              return;
                            }
#line 1270 "set_bbbtree.m"
                          }
#line 1269 "set_bbbtree.m"
                      }
#line 1272 "set_bbbtree.m"
                    else
#line 1275 "set_bbbtree.m"
                      {
#line 1275 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1275 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1273 "set_bbbtree.m"
                        {
#line 1273 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1275 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1274 "set_bbbtree.m"
                          {
#line 1274 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
#line 1274 "set_bbbtree.m"
                            return;
                          }
#line 1275 "set_bbbtree.m"
                        else
#line 1276 "set_bbbtree.m"
                          {
#line 1276 "set_bbbtree.m"
                            {
#line 1276 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1276 "set_bbbtree.m"
                              return;
                            }
#line 1276 "set_bbbtree.m"
                          }
#line 1275 "set_bbbtree.m"
                      }
#line 1272 "set_bbbtree.m"
                  }
#line 1255 "set_bbbtree.m"
              }
#line 1249 "set_bbbtree.m"
          }
#line 978 "set_bbbtree.m"
      }
#line 977 "set_bbbtree.m"
  }
#line 974 "set_bbbtree.m"
}

#line 948 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_union_r_3_p_0(
#line 948 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 948 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 948 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 948 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 948 "set_bbbtree.m"
{
#line 951 "set_bbbtree.m"
  {
#line 951 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 951 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "set_bbbtree.m"
    else
#line 952 "set_bbbtree.m"
      {
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LUnion_11;
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RUnion_12;
#line 952 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Union_13;
#line 952 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 953 "set_bbbtree.m"
        {
#line 953 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 954 "set_bbbtree.m"
        {
#line 954 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__RUnion_12, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 955 "set_bbbtree.m"
        {
#line 955 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__RUnion_12, &mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 956 "set_bbbtree.m"
        {
#line 956 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__V_5, mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 956 "set_bbbtree.m"
          return;
        }
#line 952 "set_bbbtree.m"
      }
#line 951 "set_bbbtree.m"
  }
#line 948 "set_bbbtree.m"
}

#line 909 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__union_r_4_p_0(
#line 909 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 909 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 909 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 909 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_3,
#line 909 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 909 "set_bbbtree.m"
{
#line 912 "set_bbbtree.m"
  {
#line 912 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 912 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 912 "set_bbbtree.m"
    else
#line 914 "set_bbbtree.m"
      {
#line 914 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 914 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 914 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 915 "set_bbbtree.m"
        {
#line 915 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 916 "set_bbbtree.m"
        {
#line 916 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 917 "set_bbbtree.m"
        {
#line 917 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 918 "set_bbbtree.m"
        {
#line 918 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 919 "set_bbbtree.m"
        {
#line 919 "set_bbbtree.m"
          mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__HeadVar__4_4);
#line 919 "set_bbbtree.m"
          return;
        }
#line 914 "set_bbbtree.m"
      }
#line 912 "set_bbbtree.m"
  }
#line 909 "set_bbbtree.m"
}

#line 888 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_1(
#line 888 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 888 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 888 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 888 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 888 "set_bbbtree.m"
{
#line 890 "set_bbbtree.m"
  while (MR_TRUE)
#line 890 "set_bbbtree.m"
    {
#line 890 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 890 "set_bbbtree.m"
      {
#line 890 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 890 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 890 "set_bbbtree.m"
        else
#line 892 "set_bbbtree.m"
          {
#line 892 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 892 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 893 "set_bbbtree.m"
            {
#line 893 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 894 "set_bbbtree.m"
            {
#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 894 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 894 "set_bbbtree.m"
            }
#line 894 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 894 "set_bbbtree.m"
            {
#line 894 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 894 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 894 "set_bbbtree.m"
            }
#line 894 "set_bbbtree.m"
            continue;
#line 892 "set_bbbtree.m"
          }
#line 890 "set_bbbtree.m"
      }
#line 890 "set_bbbtree.m"
      break;
#line 890 "set_bbbtree.m"
    }
#line 888 "set_bbbtree.m"
}

#line 887 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_0(
#line 887 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 887 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 887 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 887 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 887 "set_bbbtree.m"
{
#line 890 "set_bbbtree.m"
  while (MR_TRUE)
#line 890 "set_bbbtree.m"
    {
#line 890 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 890 "set_bbbtree.m"
      {
#line 890 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 890 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 890 "set_bbbtree.m"
        else
#line 892 "set_bbbtree.m"
          {
#line 892 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 892 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 892 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 893 "set_bbbtree.m"
            {
#line 893 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 894 "set_bbbtree.m"
            {
#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 894 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 894 "set_bbbtree.m"
            }
#line 894 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 894 "set_bbbtree.m"
            {
#line 894 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 894 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 894 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 894 "set_bbbtree.m"
            }
#line 894 "set_bbbtree.m"
            continue;
#line 892 "set_bbbtree.m"
          }
#line 890 "set_bbbtree.m"
      }
#line 890 "set_bbbtree.m"
      break;
#line 890 "set_bbbtree.m"
    }
#line 887 "set_bbbtree.m"
}

#line 776 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__list_to_set_r_3_p_0(
#line 776 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 776 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_4,
#line 776 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_5,
#line 776 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_6)
#line 776 "set_bbbtree.m"
{
#line 779 "set_bbbtree.m"
  {
#line 779 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 779 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__InitSet_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__Ratio_6);
#line 781 "set_bbbtree.m"
      return;
    }
#line 779 "set_bbbtree.m"
  }
#line 776 "set_bbbtree.m"
}

#line 638 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_list_r_4_p_0(
#line 638 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 638 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 638 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 638 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 638 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 638 "set_bbbtree.m"
{
#line 641 "set_bbbtree.m"
  while (MR_TRUE)
#line 641 "set_bbbtree.m"
    {
#line 641 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 641 "set_bbbtree.m"
      {
#line 641 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 641 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 641 "set_bbbtree.m"
        else
#line 642 "set_bbbtree.m"
          {
#line 642 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 642 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 642 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;

#line 643 "set_bbbtree.m"
            {
#line 643 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__X_8, &mercury__set_bbbtree__STATE_VARIABLE_Set_13_13, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 644 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 644 "set_bbbtree.m"
            {
#line 644 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;
#line 644 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Xs_9;

#line 644 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 644 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 644 "set_bbbtree.m"
            }
#line 644 "set_bbbtree.m"
            continue;
#line 642 "set_bbbtree.m"
          }
#line 641 "set_bbbtree.m"
      }
#line 641 "set_bbbtree.m"
      break;
#line 641 "set_bbbtree.m"
    }
#line 638 "set_bbbtree.m"
}

#line 606 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_r_4_p_0(
#line 606 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 606 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 606 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 606 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 606 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 606 "set_bbbtree.m"
{
#line 609 "set_bbbtree.m"
  {
#line 609 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 609 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "set_bbbtree.m"
      {
#line 609 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 609 "set_bbbtree.m"
        {
#line 609 "set_bbbtree.m"
          MR_Word base;
#line 609 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 609 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 609 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 609 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 609 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 609 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 609 "set_bbbtree.m"
        }
#line 609 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = MR_TRUE;
#line 609 "set_bbbtree.m"
      }
#line 609 "set_bbbtree.m"
    else
#line 611 "set_bbbtree.m"
      {
#line 611 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 611 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 611 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 611 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 611 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 612 "set_bbbtree.m"
        {
#line 612 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 618 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 615 "set_bbbtree.m"
          {
#line 615 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 616 "set_bbbtree.m"
            {
#line 616 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 615 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 615 "set_bbbtree.m"
              {
#line 617 "set_bbbtree.m"
                {
#line 617 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 617 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 615 "set_bbbtree.m"
              }
#line 615 "set_bbbtree.m"
          }
#line 618 "set_bbbtree.m"
        else
#line 618 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 2))
#line 620 "set_bbbtree.m"
            {
#line 620 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_19;

#line 621 "set_bbbtree.m"
              {
#line 621 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
#line 620 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 620 "set_bbbtree.m"
                {
#line 622 "set_bbbtree.m"
                  {
#line 622 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
#line 622 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = MR_TRUE;
#line 620 "set_bbbtree.m"
                }
#line 620 "set_bbbtree.m"
            }
#line 618 "set_bbbtree.m"
          else
#line 618 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_FALSE;
#line 611 "set_bbbtree.m"
      }
#line 609 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 609 "set_bbbtree.m"
  }
#line 606 "set_bbbtree.m"
}

#line 577 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_r_4_p_0(
#line 577 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 577 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 577 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 577 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 577 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 577 "set_bbbtree.m"
{
#line 580 "set_bbbtree.m"
  {
#line 580 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 580 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "set_bbbtree.m"
      {
#line 580 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 580 "set_bbbtree.m"
        {
#line 580 "set_bbbtree.m"
          MR_Word base;
#line 580 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 580 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 580 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 580 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 580 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 580 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 580 "set_bbbtree.m"
        }
#line 580 "set_bbbtree.m"
      }
#line 580 "set_bbbtree.m"
    else
#line 582 "set_bbbtree.m"
      {
#line 582 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 582 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 582 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 582 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 582 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 583 "set_bbbtree.m"
        {
#line 583 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 589 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 586 "set_bbbtree.m"
          {
#line 586 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 587 "set_bbbtree.m"
            {
#line 587 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 588 "set_bbbtree.m"
            {
#line 588 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 588 "set_bbbtree.m"
              return;
            }
#line 586 "set_bbbtree.m"
          }
#line 589 "set_bbbtree.m"
        else
#line 589 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 0))
#line 597 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 589 "set_bbbtree.m"
          else
#line 591 "set_bbbtree.m"
            {
#line 591 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_19;

#line 592 "set_bbbtree.m"
              {
#line 592 "set_bbbtree.m"
                mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
#line 593 "set_bbbtree.m"
              {
#line 593 "set_bbbtree.m"
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 593 "set_bbbtree.m"
                return;
              }
#line 591 "set_bbbtree.m"
            }
#line 582 "set_bbbtree.m"
      }
#line 580 "set_bbbtree.m"
  }
#line 577 "set_bbbtree.m"
}

#line 466 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__def_ratio_1_p_0(
#line 466 "set_bbbtree.m"
  MR_Integer * mercury__set_bbbtree__HeadVar__1_1)
#line 466 "set_bbbtree.m"
{
#line 468 "set_bbbtree.m"
  {
#line 468 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 468 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 5;
#line 468 "set_bbbtree.m"
  }
#line 466 "set_bbbtree.m"
}

#line 408 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_4_p_0(
#line 408 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 408 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 408 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_6,
#line 408 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_7,
#line 408 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__FalseSet_8)
#line 408 "set_bbbtree.m"
{
#line 1413 "set_bbbtree.m"
  {
#line 1413 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_9;
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_10;
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__FalseList_11;
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_22;
#line 1413 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_29;

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__Set_6, mercury__set_bbbtree__V_15_15, &mercury__set_bbbtree__List_9);
    }
#line 1415 "set_bbbtree.m"
    {
#line 1415 "set_bbbtree.m"
      mercury__list__filter_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__P_5, mercury__set_bbbtree__List_9, &mercury__set_bbbtree__TrueList_10, &mercury__set_bbbtree__FalseList_11);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_22, mercury__set_bbbtree__TrueList_10, mercury__set_bbbtree__TrueSet_7, (MR_Integer) 5);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_29, mercury__set_bbbtree__FalseList_11, mercury__set_bbbtree__FalseSet_8, (MR_Integer) 5);
#line 781 "set_bbbtree.m"
      return;
    }
#line 1413 "set_bbbtree.m"
  }
#line 408 "set_bbbtree.m"
}

#line 401 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_3_p_0(
#line 401 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 401 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_4,
#line 401 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_5,
#line 401 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_6)
#line 401 "set_bbbtree.m"
{
#line 1408 "set_bbbtree.m"
  {
#line 1408 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1408 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_7;
#line 1408 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_8;
#line 1408 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_19;

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__V_12_12, &mercury__set_bbbtree__List_7);
    }
#line 1410 "set_bbbtree.m"
    {
#line 1410 "set_bbbtree.m"
      mercury__list__filter_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__P_4, mercury__set_bbbtree__List_7, &mercury__set_bbbtree__TrueList_8);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__InitSet_19, mercury__set_bbbtree__TrueList_8, mercury__set_bbbtree__TrueSet_6, (MR_Integer) 5);
#line 781 "set_bbbtree.m"
      return;
    }
#line 1408 "set_bbbtree.m"
  }
#line 401 "set_bbbtree.m"
}

#line 396 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__filter_map_2_f_0(
#line 396 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 396 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 396 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__PF_4,
#line 396 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 396 "set_bbbtree.m"
{
#line 1401 "set_bbbtree.m"
  {
#line 1401 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1401 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1401 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1401 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1401 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1401 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_34;

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 649 "list.opt"
    {
#line 649 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__PF_4, mercury__set_bbbtree__L1_7, &mercury__set_bbbtree__L2_8);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_34, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1401 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1401 "set_bbbtree.m"
  }
#line 396 "set_bbbtree.m"
}

#line 392 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__map_2_f_0(
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_4,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 392 "set_bbbtree.m"
{
#line 1396 "set_bbbtree.m"
  {
#line 1396 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1396 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1396 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1396 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1396 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1396 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_20;

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 1398 "set_bbbtree.m"
    {
#line 1398 "set_bbbtree.m"
      mercury__set_bbbtree__L2_8 = mercury__list__map_2_f_0(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__F_4, mercury__set_bbbtree__L1_7);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_20, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1396 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1396 "set_bbbtree.m"
  }
#line 392 "set_bbbtree.m"
}

#line 389 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__all_true_2_p_0(
#line 389 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 389 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_3,
#line 389 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_4)
#line 389 "set_bbbtree.m"
{
#line 1390 "set_bbbtree.m"
  {
#line 1390 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_5;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__S_4, mercury__set_bbbtree__V_9_9, &mercury__set_bbbtree__L_5);
    }
#line 1392 "set_bbbtree.m"
    {
#line 1392 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__all_true_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__P_3, mercury__set_bbbtree__L_5);
    }
#line 1390 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1390 "set_bbbtree.m"
  }
#line 389 "set_bbbtree.m"
}

#line 382 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_5(
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 382 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 382 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 382 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 382 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_7(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1385 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
  }
#line 382 "set_bbbtree.m"
}

#line 379 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_4(
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 379 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 379 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 379 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 379 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_6(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1385 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
  }
#line 379 "set_bbbtree.m"
}

#line 376 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_3(
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 376 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 376 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 376 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 376 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_5(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1385 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
  }
#line 376 "set_bbbtree.m"
}

#line 373 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_2(
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 373 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 373 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 373 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 373 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      mercury__list__foldl6_14_p_2(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1386 "set_bbbtree.m"
      return;
    }
#line 1385 "set_bbbtree.m"
  }
#line 373 "set_bbbtree.m"
}

#line 370 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_1(
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 370 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 370 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 370 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 370 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      mercury__list__foldl6_14_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1386 "set_bbbtree.m"
      return;
    }
#line 1385 "set_bbbtree.m"
  }
#line 370 "set_bbbtree.m"
}

#line 367 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_0(
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 367 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 367 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 367 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 367 "set_bbbtree.m"
{
#line 1385 "set_bbbtree.m"
  {
#line 1385 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1385 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      mercury__list__foldl6_14_p_0(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1386 "set_bbbtree.m"
      return;
    }
#line 1385 "set_bbbtree.m"
  }
#line 367 "set_bbbtree.m"
}

#line 360 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_5(
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 360 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 360 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 360 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 360 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 360 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 360 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 360 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 360 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 360 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 360 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 360 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 360 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_5(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1382 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
  }
#line 360 "set_bbbtree.m"
}

#line 357 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_4(
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 357 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 357 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 357 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 357 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 357 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 357 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 357 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 357 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 357 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 357 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 357 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 357 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_4(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1382 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
  }
#line 357 "set_bbbtree.m"
}

#line 354 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_3(
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 354 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 354 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 354 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 354 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 354 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 354 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 354 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 354 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 354 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 354 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 354 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 354 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_3(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1382 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
  }
#line 354 "set_bbbtree.m"
}

#line 351 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_2(
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 351 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 351 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 351 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 351 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 351 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 351 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 351 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 351 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 351 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 351 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 351 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 351 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      mercury__list__foldl5_12_p_2(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1383 "set_bbbtree.m"
      return;
    }
#line 1382 "set_bbbtree.m"
  }
#line 351 "set_bbbtree.m"
}

#line 348 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_1(
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 348 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 348 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 348 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 348 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 348 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 348 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 348 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 348 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 348 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 348 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 348 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 348 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      mercury__list__foldl5_12_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1383 "set_bbbtree.m"
      return;
    }
#line 1382 "set_bbbtree.m"
  }
#line 348 "set_bbbtree.m"
}

#line 345 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_0(
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 345 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 345 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 345 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 345 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 345 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 345 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 345 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 345 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 345 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 345 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 345 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 345 "set_bbbtree.m"
{
#line 1382 "set_bbbtree.m"
  {
#line 1382 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1382 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1383 "set_bbbtree.m"
    {
#line 1383 "set_bbbtree.m"
      mercury__list__foldl5_12_p_0(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1383 "set_bbbtree.m"
      return;
    }
#line 1382 "set_bbbtree.m"
  }
#line 345 "set_bbbtree.m"
}

#line 338 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_5(
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 338 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 338 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 338 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 338 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 338 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_7(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 338 "set_bbbtree.m"
}

#line 335 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_4(
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 335 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 335 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 335 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 335 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 335 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 335 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 335 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 335 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 335 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 335 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_6(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 335 "set_bbbtree.m"
}

#line 332 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_3(
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 332 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 332 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 332 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 332 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 332 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 332 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 332 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 332 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 332 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 332 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_5(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 332 "set_bbbtree.m"
}

#line 329 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_2(
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 329 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 329 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 329 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 329 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 329 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 329 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 329 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 329 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 329 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 329 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl4_10_p_2(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 329 "set_bbbtree.m"
}

#line 326 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_1(
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 326 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 326 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 326 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 326 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 326 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 326 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 326 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 326 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 326 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 326 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl4_10_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 326 "set_bbbtree.m"
}

#line 323 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_0(
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 323 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 323 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 323 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 323 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 323 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 323 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 323 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 323 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 323 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 323 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl4_10_p_0(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 323 "set_bbbtree.m"
}

#line 318 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_5(
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 318 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 318 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 318 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 318 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 318 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 318 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 318 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_5(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 318 "set_bbbtree.m"
}

#line 316 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_4(
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 316 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 316 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 316 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 316 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 316 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 316 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 316 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_4(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 316 "set_bbbtree.m"
}

#line 314 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_3(
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 314 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 314 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 314 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 314 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 314 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 314 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 314 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 314 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_3(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 314 "set_bbbtree.m"
}

#line 312 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_2(
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 312 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 312 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 312 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 312 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 312 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 312 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 312 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 312 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl3_8_p_2(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 312 "set_bbbtree.m"
}

#line 310 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_1(
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 310 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 310 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 310 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 310 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 310 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 310 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 310 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 310 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl3_8_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 310 "set_bbbtree.m"
}

#line 308 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_0(
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 308 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 308 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 308 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 308 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 308 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 308 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 308 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 308 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl3_8_p_0(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 308 "set_bbbtree.m"
}

#line 303 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_5(
#line 303 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 303 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 303 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 303 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 303 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 303 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 303 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 303 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 303 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 303 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_6(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 303 "set_bbbtree.m"
}

#line 301 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_4(
#line 301 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 301 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 301 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 301 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 301 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 301 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 301 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 301 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 301 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 301 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_5(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 301 "set_bbbtree.m"
}

#line 299 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_3(
#line 299 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 299 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 299 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 299 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 299 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 299 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 299 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 299 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 299 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 299 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_4(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 299 "set_bbbtree.m"
}

#line 297 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_2(
#line 297 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 297 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 297 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 297 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 297 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 297 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 297 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 297 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 297 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 297 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl2_6_p_2(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 297 "set_bbbtree.m"
}

#line 295 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_1(
#line 295 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 295 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 295 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 295 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 295 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 295 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 295 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 295 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 295 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 295 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl2_6_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 295 "set_bbbtree.m"
}

#line 293 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_0(
#line 293 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 293 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 293 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 293 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 293 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 293 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 293 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 293 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 293 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 293 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl2_6_p_0(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 293 "set_bbbtree.m"
}

#line 288 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_5(
#line 288 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 288 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 288 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 288 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 288 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 288 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 288 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_5(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 288 "set_bbbtree.m"
}

#line 286 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_4(
#line 286 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 286 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 286 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 286 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 286 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 286 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 286 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_4(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 286 "set_bbbtree.m"
}

#line 284 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_3(
#line 284 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 284 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 284 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 284 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 284 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 284 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 284 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_3(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 284 "set_bbbtree.m"
}

#line 283 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_2(
#line 283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 283 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 283 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 283 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl_4_p_2(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 283 "set_bbbtree.m"
}

#line 282 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_1(
#line 282 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 282 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 282 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 282 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 282 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 282 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 282 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl_4_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 282 "set_bbbtree.m"
}

#line 281 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_0(
#line 281 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 281 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 281 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 281 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 281 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 281 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 281 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl_4_p_0(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 281 "set_bbbtree.m"
}

#line 279 "set_bbbtree.m"
MR_Box MR_CALL 
mercury__set_bbbtree__fold_3_f_0(
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_10,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_11,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_5,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 279 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__A_7)
#line 279 "set_bbbtree.m"
{
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__B_8;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_10, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_16_16, &mercury__set_bbbtree__V_9_9);
    }
#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_bbbtree__F_5, mercury__set_bbbtree__V_9_9, mercury__set_bbbtree__A_7, &mercury__set_bbbtree__B_8);
    }
#line 1367 "set_bbbtree.m"
    return mercury__set_bbbtree__B_8;
#line 1367 "set_bbbtree.m"
  }
#line 279 "set_bbbtree.m"
}

#line 276 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__superset_2_p_0(
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 276 "set_bbbtree.m"
{
#line 1073 "set_bbbtree.m"
  {
#line 1073 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1073 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;

#line 1054 "set_bbbtree.m"
    {
#line 1054 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 479 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1073 "set_bbbtree.m"
  }
#line 276 "set_bbbtree.m"
}

#line 271 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__subset_2_p_0(
#line 271 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 271 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 271 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 271 "set_bbbtree.m"
{
#line 1073 "set_bbbtree.m"
  {
#line 1073 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1073 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_5;

#line 1054 "set_bbbtree.m"
    {
#line 1054 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_5, (MR_Integer) 5);
    }
#line 479 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1073 "set_bbbtree.m"
  }
#line 271 "set_bbbtree.m"
}

#line 265 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__difference_2_f_0(
#line 265 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 265 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 265 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 265 "set_bbbtree.m"
{
#line 1052 "set_bbbtree.m"
  {
#line 1052 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1052 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 1054 "set_bbbtree.m"
    {
#line 1054 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 1052 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 1052 "set_bbbtree.m"
  }
#line 265 "set_bbbtree.m"
}

#line 262 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_3_p_0(
#line 262 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 262 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 262 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 262 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 262 "set_bbbtree.m"
{
#line 1052 "set_bbbtree.m"
  {
#line 1052 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1054 "set_bbbtree.m"
    {
#line 1054 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 1054 "set_bbbtree.m"
      return;
    }
#line 1052 "set_bbbtree.m"
  }
#line 262 "set_bbbtree.m"
}

#line 256 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_1_f_0(
#line 256 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 256 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 256 "set_bbbtree.m"
{
#line 1027 "set_bbbtree.m"
  {
#line 1027 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1027 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;

#line 1027 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "set_bbbtree.m"
      mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1027 "set_bbbtree.m"
    else
#line 1029 "set_bbbtree.m"
      {
#line 1029 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Set_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1029 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1029 "set_bbbtree.m"
        {
#line 1029 "set_bbbtree.m"
          return mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__intersect_list_r_3_f_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Sets_4, (MR_Integer) 5);
        }
#line 1029 "set_bbbtree.m"
      }
#line 1027 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 1027 "set_bbbtree.m"
  }
#line 256 "set_bbbtree.m"
}

#line 250 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__power_intersect_1_f_0(
#line 250 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 250 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SS_3)
#line 250 "set_bbbtree.m"
{
#line 1001 "set_bbbtree.m"
  {
#line 1001 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1001 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 1008 "set_bbbtree.m"
    if ((mercury__set_bbbtree__SS_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "set_bbbtree.m"
    else
#line 1009 "set_bbbtree.m"
      {
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 0)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 2)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 3)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_16;
#line 1009 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 1)));

#line 1010 "set_bbbtree.m"
        {
#line 1010 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__L_12, mercury__set_bbbtree__V_10, &mercury__set_bbbtree__Intersection0_16, (MR_Integer) 5);
        }
#line 1011 "set_bbbtree.m"
        {
#line 1011 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__R_13, mercury__set_bbbtree__Intersection0_16, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
        }
#line 1009 "set_bbbtree.m"
      }
#line 1001 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 1001 "set_bbbtree.m"
  }
#line 250 "set_bbbtree.m"
}

#line 247 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_intersect_2_p_0(
#line 247 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 247 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Sets_3,
#line 247 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 247 "set_bbbtree.m"
{
#line 1001 "set_bbbtree.m"
  {
#line 1001 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1008 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "set_bbbtree.m"
    else
#line 1009 "set_bbbtree.m"
      {
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 0)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 2)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 3)));
#line 1009 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_14;
#line 1009 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 1)));

#line 1010 "set_bbbtree.m"
        {
#line 1010 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__L_10, mercury__set_bbbtree__V_8, &mercury__set_bbbtree__Intersection0_14, (MR_Integer) 5);
        }
#line 1011 "set_bbbtree.m"
        {
#line 1011 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__R_11, mercury__set_bbbtree__Intersection0_14, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 1011 "set_bbbtree.m"
          return;
        }
#line 1009 "set_bbbtree.m"
      }
#line 1001 "set_bbbtree.m"
  }
#line 247 "set_bbbtree.m"
}

#line 242 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_2_f_0(
#line 242 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 242 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 242 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 242 "set_bbbtree.m"
{
#line 970 "set_bbbtree.m"
  {
#line 970 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 970 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 972 "set_bbbtree.m"
    {
#line 972 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 970 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 970 "set_bbbtree.m"
  }
#line 242 "set_bbbtree.m"
}

#line 239 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__intersect_3_p_0(
#line 239 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 239 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 239 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 239 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 239 "set_bbbtree.m"
{
#line 970 "set_bbbtree.m"
  {
#line 970 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 972 "set_bbbtree.m"
    {
#line 972 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 972 "set_bbbtree.m"
      return;
    }
#line 970 "set_bbbtree.m"
  }
#line 239 "set_bbbtree.m"
}

#line 234 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__power_union_1_f_0(
#line 234 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 234 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SS_3)
#line 234 "set_bbbtree.m"
{
#line 944 "set_bbbtree.m"
  {
#line 944 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 944 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 946 "set_bbbtree.m"
    {
#line 946 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SS_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 944 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 944 "set_bbbtree.m"
  }
#line 234 "set_bbbtree.m"
}

#line 231 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_union_2_p_0(
#line 231 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 231 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Sets_3,
#line 231 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 231 "set_bbbtree.m"
{
#line 944 "set_bbbtree.m"
  {
#line 944 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 946 "set_bbbtree.m"
    {
#line 946 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Sets_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 946 "set_bbbtree.m"
      return;
    }
#line 944 "set_bbbtree.m"
  }
#line 231 "set_bbbtree.m"
}

#line 226 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__union_list_1_f_0(
#line 226 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 226 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__ListofSets_3)
#line 226 "set_bbbtree.m"
{
#line 926 "set_bbbtree.m"
  {
#line 926 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 926 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;
#line 926 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__ListofSets_3, mercury__set_bbbtree__V_5_5, &mercury__set_bbbtree__HeadVar__2_2);
    }
#line 926 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 926 "set_bbbtree.m"
  }
#line 226 "set_bbbtree.m"
}

#line 221 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__union_2_f_0(
#line 221 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 221 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 221 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 221 "set_bbbtree.m"
{
#line 905 "set_bbbtree.m"
  {
#line 905 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 905 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 907 "set_bbbtree.m"
    {
#line 907 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 905 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 905 "set_bbbtree.m"
  }
#line 221 "set_bbbtree.m"
}

#line 218 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__union_3_p_0(
#line 218 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 218 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 218 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 218 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 218 "set_bbbtree.m"
{
#line 905 "set_bbbtree.m"
  {
#line 905 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 907 "set_bbbtree.m"
    {
#line 907 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 907 "set_bbbtree.m"
      return;
    }
#line 905 "set_bbbtree.m"
  }
#line 218 "set_bbbtree.m"
}

#line 213 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__to_sorted_list_1_f_0(
#line 213 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 213 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_3)
#line 213 "set_bbbtree.m"
{
#line 883 "set_bbbtree.m"
  {
#line 883 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 883 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Xs_4;
#line 883 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__S_3, mercury__set_bbbtree__V_8_8, &mercury__set_bbbtree__Xs_4);
    }
#line 883 "set_bbbtree.m"
    return mercury__set_bbbtree__Xs_4;
#line 883 "set_bbbtree.m"
  }
#line 213 "set_bbbtree.m"
}

#line 211 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_1(
#line 211 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 211 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 211 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_4)
#line 211 "set_bbbtree.m"
{
#line 883 "set_bbbtree.m"
  {
#line 883 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 883 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 884 "set_bbbtree.m"
      return;
    }
#line 883 "set_bbbtree.m"
  }
#line 211 "set_bbbtree.m"
}

#line 210 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_0(
#line 210 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 210 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 210 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_4)
#line 210 "set_bbbtree.m"
{
#line 883 "set_bbbtree.m"
  {
#line 883 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 883 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 884 "set_bbbtree.m"
      return;
    }
#line 883 "set_bbbtree.m"
  }
#line 210 "set_bbbtree.m"
}

#line 203 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_len_3_p_0(
#line 203 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 203 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 203 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 203 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 203 "set_bbbtree.m"
{
#line 810 "set_bbbtree.m"
  {
#line 810 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 810 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "set_bbbtree.m"
    else
#line 811 "set_bbbtree.m"
      {
#line 811 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_9;

#line 812 "set_bbbtree.m"
        {
#line 812 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, &mercury__set_bbbtree__RestOfList_9, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 816 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "set_bbbtree.m"
          {
#line 815 "set_bbbtree.m"
          }
#line 816 "set_bbbtree.m"
        else
#line 817 "set_bbbtree.m"
          {
#line 819 "set_bbbtree.m"
            {
#line 819 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 819 "set_bbbtree.m"
              return;
            }
#line 817 "set_bbbtree.m"
          }
#line 811 "set_bbbtree.m"
      }
#line 810 "set_bbbtree.m"
  }
#line 203 "set_bbbtree.m"
}

#line 193 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__from_sorted_list_1_f_0(
#line 193 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 193 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3)
#line 193 "set_bbbtree.m"
{
#line 873 "set_bbbtree.m"
  {
#line 873 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 873 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;

#line 873 "set_bbbtree.m"
    {
#line 873 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4);
    }
#line 873 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 873 "set_bbbtree.m"
  }
#line 193 "set_bbbtree.m"
}

#line 189 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_1_f_0(
#line 189 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 189 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_3)
#line 189 "set_bbbtree.m"
{
#line 804 "set_bbbtree.m"
  {
#line 804 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 804 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 804 "set_bbbtree.m"
    {
#line 804 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4);
    }
#line 804 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 804 "set_bbbtree.m"
  }
#line 189 "set_bbbtree.m"
}

#line 186 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_2_p_0(
#line 186 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 186 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3,
#line 186 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 186 "set_bbbtree.m"
{
#line 806 "set_bbbtree.m"
  {
#line 806 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 806 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_5;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__List_3, (MR_Integer) 0, &mercury__set_bbbtree__N_5);
    }
#line 810 "set_bbbtree.m"
    if ((mercury__set_bbbtree__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "set_bbbtree.m"
    else
#line 811 "set_bbbtree.m"
      {
#line 811 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_15;

#line 812 "set_bbbtree.m"
        {
#line 812 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_3, &mercury__set_bbbtree__RestOfList_15, mercury__set_bbbtree__N_5, mercury__set_bbbtree__Set_4);
        }
#line 816 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "set_bbbtree.m"
          {
#line 815 "set_bbbtree.m"
          }
#line 816 "set_bbbtree.m"
        else
#line 817 "set_bbbtree.m"
          {
#line 819 "set_bbbtree.m"
            {
#line 819 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 819 "set_bbbtree.m"
              return;
            }
#line 817 "set_bbbtree.m"
          }
#line 811 "set_bbbtree.m"
      }
#line 806 "set_bbbtree.m"
  }
#line 186 "set_bbbtree.m"
}

#line 180 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__from_list_1_f_0(
#line 180 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 180 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3)
#line 180 "set_bbbtree.m"
{
#line 772 "set_bbbtree.m"
  {
#line 772 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 772 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;
#line 772 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
#line 772 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 772 "set_bbbtree.m"
  }
#line 180 "set_bbbtree.m"
}

#line 176 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__list_to_set_1_f_0(
#line 176 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 176 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_3)
#line 176 "set_bbbtree.m"
{
#line 772 "set_bbbtree.m"
  {
#line 772 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 772 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 772 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 772 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 772 "set_bbbtree.m"
  }
#line 176 "set_bbbtree.m"
}

#line 174 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__list_to_set_2_p_0(
#line 174 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 174 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3,
#line 174 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 174 "set_bbbtree.m"
{
#line 772 "set_bbbtree.m"
  {
#line 772 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 772 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 781 "set_bbbtree.m"
    {
#line 781 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__InitSet_10, mercury__set_bbbtree__List_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 781 "set_bbbtree.m"
      return;
    }
#line 772 "set_bbbtree.m"
  }
#line 174 "set_bbbtree.m"
}

#line 168 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_largest_3_p_0(
#line 168 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 168 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_4,
#line 168 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 168 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 168 "set_bbbtree.m"
{
#line 753 "set_bbbtree.m"
  {
#line 753 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 753 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 753 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 753 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 753 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 753 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 753 "set_bbbtree.m"
      {
#line 753 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 753 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 753 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 759 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "set_bbbtree.m"
          {
#line 757 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 758 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 756 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 756 "set_bbbtree.m"
          }
#line 759 "set_bbbtree.m"
        else
#line 761 "set_bbbtree.m"
          {
#line 761 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_14;
#line 761 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 761 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 762 "set_bbbtree.m"
            {
#line 762 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_14);
            }
#line 761 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 761 "set_bbbtree.m"
              {
#line 763 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 763 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 764 "set_bbbtree.m"
                {
#line 764 "set_bbbtree.m"
                  MR_Word base;
#line 764 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 764 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 764 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 764 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 764 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 764 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_14));
#line 764 "set_bbbtree.m"
                }
#line 764 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 761 "set_bbbtree.m"
              }
#line 761 "set_bbbtree.m"
          }
#line 753 "set_bbbtree.m"
      }
#line 753 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 753 "set_bbbtree.m"
  }
#line 168 "set_bbbtree.m"
}

#line 161 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_least_3_p_0(
#line 161 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 161 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_4,
#line 161 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 161 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 161 "set_bbbtree.m"
{
#line 733 "set_bbbtree.m"
  {
#line 733 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 733 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 733 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 733 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 733 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 733 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 733 "set_bbbtree.m"
      {
#line 733 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 733 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 733 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 733 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 739 "set_bbbtree.m"
        if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "set_bbbtree.m"
          {
#line 737 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 738 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 736 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 736 "set_bbbtree.m"
          }
#line 739 "set_bbbtree.m"
        else
#line 741 "set_bbbtree.m"
          {
#line 741 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_14;
#line 741 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 741 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 742 "set_bbbtree.m"
            {
#line 742 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_14);
            }
#line 741 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 741 "set_bbbtree.m"
              {
#line 743 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 743 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 744 "set_bbbtree.m"
                {
#line 744 "set_bbbtree.m"
                  MR_Word base;
#line 744 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 744 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 744 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 744 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 744 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_14));
#line 744 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 744 "set_bbbtree.m"
                }
#line 744 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 741 "set_bbbtree.m"
              }
#line 741 "set_bbbtree.m"
          }
#line 733 "set_bbbtree.m"
      }
#line 733 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 733 "set_bbbtree.m"
  }
#line 161 "set_bbbtree.m"
}

#line 154 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_list_3_p_0(
#line 154 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 154 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 154 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
#line 154 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
#line 154 "set_bbbtree.m"
{
#line 722 "set_bbbtree.m"
  while (MR_TRUE)
#line 722 "set_bbbtree.m"
    {
#line 722 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 722 "set_bbbtree.m"
      {
#line 722 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 722 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 722 "set_bbbtree.m"
          {
#line 722 "set_bbbtree.m"
            *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 722 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 722 "set_bbbtree.m"
          }
#line 722 "set_bbbtree.m"
        else
#line 723 "set_bbbtree.m"
          {
#line 723 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 723 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 723 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 724 "set_bbbtree.m"
            {
#line 724 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__STATE_VARIABLE_Set_12_12);
            }
#line 723 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 725 "set_bbbtree.m"
              {
#line 725 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 725 "set_bbbtree.m"
                {
#line 725 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 725 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 725 "set_bbbtree.m"
                  mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 725 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 725 "set_bbbtree.m"
                }
#line 725 "set_bbbtree.m"
                continue;
#line 725 "set_bbbtree.m"
              }
#line 723 "set_bbbtree.m"
          }
#line 722 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 722 "set_bbbtree.m"
      }
#line 722 "set_bbbtree.m"
      break;
#line 722 "set_bbbtree.m"
    }
#line 154 "set_bbbtree.m"
}

#line 146 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_3_p_0(
#line 146 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 146 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 146 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 146 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 146 "set_bbbtree.m"
{
#line 700 "set_bbbtree.m"
  {
#line 700 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 700 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 700 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 700 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 700 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;
#line 700 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Result_10;

#line 700 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 700 "set_bbbtree.m"
      {
#line 700 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 700 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 700 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 700 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 701 "set_bbbtree.m"
        {
#line 701 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__Result_10, mercury__set_bbbtree__X_4, mercury__set_bbbtree__V_5);
        }
#line 708 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 1))
#line 704 "set_bbbtree.m"
          {
#line 704 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_11;
#line 704 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_12;
#line 704 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_15_15;

#line 705 "set_bbbtree.m"
            {
#line 705 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_11);
            }
#line 704 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 704 "set_bbbtree.m"
              {
#line 706 "set_bbbtree.m"
                mercury__set_bbbtree__V_15_15 = (MR_Integer) 1;
#line 706 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_12 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_15_15);
#line 707 "set_bbbtree.m"
                {
#line 707 "set_bbbtree.m"
                  MR_Word base;
#line 707 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 707 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 707 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 707 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_12));
#line 707 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_11));
#line 707 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 707 "set_bbbtree.m"
                }
#line 707 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 704 "set_bbbtree.m"
              }
#line 704 "set_bbbtree.m"
          }
#line 708 "set_bbbtree.m"
        else
#line 708 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 0))
#line 1249 "set_bbbtree.m"
            {
#line 1249 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__LSize_21;

#line 490 "set_bbbtree.m"
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_21 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
              else
#line 491 "set_bbbtree.m"
                {
#line 491 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_29 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_31;
#line 491 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_32;

#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree__LSize_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___L_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                  mercury__set_bbbtree___R_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                }
#line 1251 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 == (MR_Integer) 0);
#line 1254 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 1253 "set_bbbtree.m"
                *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 1254 "set_bbbtree.m"
              else
#line 1255 "set_bbbtree.m"
                {
#line 1255 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__RSize_22;

#line 490 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_22 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
                  else
#line 491 "set_bbbtree.m"
                    {
#line 491 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_33 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_35;
#line 491 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_36;

#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree__RSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___L_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
                      mercury__set_bbbtree___R_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
                    }
#line 1256 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_22 == (MR_Integer) 0);
#line 1259 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 1258 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 1259 "set_bbbtree.m"
                  else
#line 1272 "set_bbbtree.m"
                    {
#line 1266 "set_bbbtree.m"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 > mercury__set_bbbtree__RSize_22);
#line 1272 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 1269 "set_bbbtree.m"
                        {
#line 1269 "set_bbbtree.m"
                          MR_Box mercury__set_bbbtree__X_23;
#line 1269 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__NewL_24;

#line 1267 "set_bbbtree.m"
                          {
#line 1267 "set_bbbtree.m"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_23, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_24);
                          }
#line 1269 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                            {
#line 1268 "set_bbbtree.m"
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_23, mercury__set_bbbtree__NewL_24, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                            }
#line 1269 "set_bbbtree.m"
                          else
#line 1270 "set_bbbtree.m"
                            {
#line 1270 "set_bbbtree.m"
                              {
#line 1270 "set_bbbtree.m"
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                              }
#line 1270 "set_bbbtree.m"
                            }
#line 1269 "set_bbbtree.m"
                        }
#line 1272 "set_bbbtree.m"
                      else
#line 1275 "set_bbbtree.m"
                        {
#line 1275 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__NewR_25;
#line 1275 "set_bbbtree.m"
                          MR_Box mercury__set_bbbtree__X_28;

#line 1273 "set_bbbtree.m"
                          {
#line 1273 "set_bbbtree.m"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_28, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_25);
                          }
#line 1275 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 1274 "set_bbbtree.m"
                            {
#line 1274 "set_bbbtree.m"
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_28, mercury__set_bbbtree__L_7, mercury__set_bbbtree__NewR_25, mercury__set_bbbtree__Set_9);
                            }
#line 1275 "set_bbbtree.m"
                          else
#line 1276 "set_bbbtree.m"
                            {
#line 1276 "set_bbbtree.m"
                              {
#line 1276 "set_bbbtree.m"
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                              }
#line 1276 "set_bbbtree.m"
                            }
#line 1275 "set_bbbtree.m"
                        }
#line 1272 "set_bbbtree.m"
                    }
#line 1255 "set_bbbtree.m"
                }
#line 1249 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = MR_TRUE;
#line 1249 "set_bbbtree.m"
            }
#line 708 "set_bbbtree.m"
          else
#line 710 "set_bbbtree.m"
            {
#line 710 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_13;
#line 710 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_14_14;
#line 710 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__NewN_16;

#line 711 "set_bbbtree.m"
              {
#line 711 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_13);
              }
#line 710 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 710 "set_bbbtree.m"
                {
#line 712 "set_bbbtree.m"
                  mercury__set_bbbtree__V_14_14 = (MR_Integer) 1;
#line 712 "set_bbbtree.m"
                  mercury__set_bbbtree__NewN_16 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_14_14);
#line 713 "set_bbbtree.m"
                  {
#line 713 "set_bbbtree.m"
                    MR_Word base;
#line 713 "set_bbbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 713 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_9 = base;
#line 713 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 713 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_16));
#line 713 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 713 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_13));
#line 713 "set_bbbtree.m"
                  }
#line 713 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = MR_TRUE;
#line 710 "set_bbbtree.m"
                }
#line 710 "set_bbbtree.m"
            }
#line 700 "set_bbbtree.m"
      }
#line 700 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 700 "set_bbbtree.m"
  }
#line 146 "set_bbbtree.m"
}

#line 139 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__delete_list_2_f_0(
#line 139 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 139 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 139 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_5)
#line 139 "set_bbbtree.m"
{
#line 690 "set_bbbtree.m"
  {
#line 690 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 690 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 690 "set_bbbtree.m"
    {
#line 690 "set_bbbtree.m"
      mercury__set_bbbtree__delete_list_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Xs_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__STATE_VARIABLE_S_7);
    }
#line 690 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 690 "set_bbbtree.m"
  }
#line 139 "set_bbbtree.m"
}

#line 136 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_list_3_p_0(
#line 136 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 136 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 136 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
#line 136 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
#line 136 "set_bbbtree.m"
{
#line 692 "set_bbbtree.m"
  while (MR_TRUE)
#line 692 "set_bbbtree.m"
    {
#line 692 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 692 "set_bbbtree.m"
      {
#line 692 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 692 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "set_bbbtree.m"
          *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 692 "set_bbbtree.m"
        else
#line 693 "set_bbbtree.m"
          {
#line 693 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 693 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 693 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;
#line 693 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 682 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewSet_19;

#line 680 "set_bbbtree.m"
            {
#line 680 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__NewSet_19);
            }
#line 682 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 681 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__NewSet_19;
#line 682 "set_bbbtree.m"
            else
#line 681 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 685 "set_bbbtree.m"
            mercury__set_bbbtree__STATE_VARIABLE_Set_12_12 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 695 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 695 "set_bbbtree.m"
            {
#line 695 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 695 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 695 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 695 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 695 "set_bbbtree.m"
            }
#line 695 "set_bbbtree.m"
            continue;
#line 693 "set_bbbtree.m"
          }
#line 692 "set_bbbtree.m"
      }
#line 692 "set_bbbtree.m"
      break;
#line 692 "set_bbbtree.m"
    }
#line 136 "set_bbbtree.m"
}

#line 130 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__delete_2_f_0(
#line 130 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 130 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 130 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_5)
#line 130 "set_bbbtree.m"
{
#line 679 "set_bbbtree.m"
  {
#line 679 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 679 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 679 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 682 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_14;

#line 680 "set_bbbtree.m"
    {
#line 680 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__T_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__NewSet_14);
    }
#line 682 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__NewSet_14;
#line 682 "set_bbbtree.m"
    else
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__STATE_VARIABLE_S_0_6;
#line 685 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 679 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 679 "set_bbbtree.m"
  }
#line 130 "set_bbbtree.m"
}

#line 128 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_3_p_1(
#line 128 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 128 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 128 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 128 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 128 "set_bbbtree.m"
{
#line 679 "set_bbbtree.m"
  {
#line 679 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 679 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 682 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 680 "set_bbbtree.m"
    {
#line 680 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 682 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 682 "set_bbbtree.m"
    else
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 685 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 679 "set_bbbtree.m"
  }
#line 128 "set_bbbtree.m"
}

#line 127 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_3_p_0(
#line 127 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 127 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 127 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 127 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 127 "set_bbbtree.m"
{
#line 679 "set_bbbtree.m"
  {
#line 679 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 679 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 682 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 680 "set_bbbtree.m"
    {
#line 680 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 682 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 682 "set_bbbtree.m"
    else
#line 681 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 685 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 679 "set_bbbtree.m"
  }
#line 127 "set_bbbtree.m"
}

#line 119 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__insert_list_2_f_0(
#line 119 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 119 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 119 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_5)
#line 119 "set_bbbtree.m"
{
#line 634 "set_bbbtree.m"
  {
#line 634 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 634 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 636 "set_bbbtree.m"
    {
#line 636 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__Xs_5, &mercury__set_bbbtree__STATE_VARIABLE_S_7, (MR_Integer) 5);
    }
#line 634 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 634 "set_bbbtree.m"
  }
#line 119 "set_bbbtree.m"
}

#line 116 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_list_3_p_0(
#line 116 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
#line 116 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_4,
#line 116 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 116 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 116 "set_bbbtree.m"
{
#line 634 "set_bbbtree.m"
  {
#line 634 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 636 "set_bbbtree.m"
    {
#line 636 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
#line 636 "set_bbbtree.m"
      return;
    }
#line 634 "set_bbbtree.m"
  }
#line 116 "set_bbbtree.m"
}

#line 110 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_3_p_0(
#line 110 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
#line 110 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 110 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 110 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 110 "set_bbbtree.m"
{
#line 600 "set_bbbtree.m"
  {
#line 600 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 604 "set_bbbtree.m"
    {
#line 604 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
    }
#line 600 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 600 "set_bbbtree.m"
  }
#line 110 "set_bbbtree.m"
}

#line 104 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__insert_2_f_0(
#line 104 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 104 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 104 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_5)
#line 104 "set_bbbtree.m"
{
#line 569 "set_bbbtree.m"
  {
#line 569 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 569 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 569 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;

#line 573 "set_bbbtree.m"
    {
#line 573 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__T_5, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_15, (MR_Integer) 5);
    }
#line 575 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 569 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 569 "set_bbbtree.m"
  }
#line 104 "set_bbbtree.m"
}

#line 102 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_3_p_1(
#line 102 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 102 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 102 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 102 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 102 "set_bbbtree.m"
{
#line 569 "set_bbbtree.m"
  {
#line 569 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 569 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 573 "set_bbbtree.m"
    {
#line 573 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 575 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 569 "set_bbbtree.m"
  }
#line 102 "set_bbbtree.m"
}

#line 101 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_3_p_0(
#line 101 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 101 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 101 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 101 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 101 "set_bbbtree.m"
{
#line 569 "set_bbbtree.m"
  {
#line 569 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 569 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 573 "set_bbbtree.m"
    {
#line 573 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 575 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 569 "set_bbbtree.m"
  }
#line 101 "set_bbbtree.m"
}

#line 95 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__equal_2_p_0(
#line 95 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 95 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 95 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 95 "set_bbbtree.m"
{
#line 560 "set_bbbtree.m"
  {
#line 560 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 560 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;
#line 560 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_15;
#line 560 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Ratio_19;

#line 1054 "set_bbbtree.m"
    {
#line 1054 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 479 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 560 "set_bbbtree.m"
      {
#line 468 "set_bbbtree.m"
        mercury__set_bbbtree__Ratio_19 = (MR_Integer) 5;
#line 1054 "set_bbbtree.m"
        {
#line 1054 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_15, mercury__set_bbbtree__Ratio_19);
        }
#line 479 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "set_bbbtree.m"
      }
#line 560 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 560 "set_bbbtree.m"
  }
#line 95 "set_bbbtree.m"
}

#line 90 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__is_singleton_2_p_0(
#line 90 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 90 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 90 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__V_3)
#line 90 "set_bbbtree.m"
{
#line 556 "set_bbbtree.m"
  {
#line 556 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 556 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 556 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 556 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;

#line 556 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 556 "set_bbbtree.m"
      {
#line 556 "set_bbbtree.m"
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 556 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 556 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 556 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 556 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 556 "set_bbbtree.m"
          {
#line 556 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 556 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "set_bbbtree.m"
          }
#line 556 "set_bbbtree.m"
      }
#line 556 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 556 "set_bbbtree.m"
  }
#line 90 "set_bbbtree.m"
}

#line 88 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__make_singleton_set_1_f_0(
#line 88 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 88 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_3)
#line 88 "set_bbbtree.m"
{
#line 554 "set_bbbtree.m"
  {
#line 554 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 554 "set_bbbtree.m"
    {
#line 554 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 0) = mercury__set_bbbtree__T_3;
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 1) = ((MR_Box) ((MR_Integer) 1));
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 554 "set_bbbtree.m"
    }
#line 554 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 554 "set_bbbtree.m"
  }
#line 88 "set_bbbtree.m"
}

#line 86 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_2(
#line 86 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 86 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__V_3,
#line 86 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 86 "set_bbbtree.m"
{
#line 554 "set_bbbtree.m"
  {
#line 554 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 554 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;

#line 554 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
      {
#line 554 "set_bbbtree.m"
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 554 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
          {
#line 554 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
          }
#line 554 "set_bbbtree.m"
      }
#line 554 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
  }
#line 86 "set_bbbtree.m"
}

#line 85 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_1(
#line 85 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 85 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 85 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 85 "set_bbbtree.m"
{
#line 554 "set_bbbtree.m"
  {
#line 554 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 554 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;
#line 554 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_8_8;

#line 554 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
      {
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 554 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 554 "set_bbbtree.m"
        {
#line 554 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__V_3, mercury__set_bbbtree__V_8_8);
        }
#line 554 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
          {
#line 554 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 554 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
              {
#line 554 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
              }
#line 554 "set_bbbtree.m"
          }
#line 554 "set_bbbtree.m"
      }
#line 554 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
  }
#line 85 "set_bbbtree.m"
}

#line 84 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_0(
#line 84 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 84 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 84 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2)
#line 84 "set_bbbtree.m"
{
#line 554 "set_bbbtree.m"
  {
#line 554 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 554 "set_bbbtree.m"
    {
#line 554 "set_bbbtree.m"
      MR_Word base;
#line 554 "set_bbbtree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 554 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = base;
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_3;
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_5_5));
#line 554 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_6_6));
#line 554 "set_bbbtree.m"
    }
#line 554 "set_bbbtree.m"
  }
#line 84 "set_bbbtree.m"
}

#line 78 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_1(
#line 78 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 78 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 78 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_7)
#line 78 "set_bbbtree.m"
{
#line 538 "set_bbbtree.m"
  while (MR_TRUE)
#line 538 "set_bbbtree.m"
    {
#line 538 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 538 "set_bbbtree.m"
      {
#line 538 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 538 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 538 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 538 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 538 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 538 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 538 "set_bbbtree.m"
          {
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 543 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "set_bbbtree.m"
              {
#line 542 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 543 "set_bbbtree.m"
            else
#line 546 "set_bbbtree.m"
              {
#line 546 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 546 "set_bbbtree.m"
                {
#line 546 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 546 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 546 "set_bbbtree.m"
                }
#line 546 "set_bbbtree.m"
                continue;
#line 546 "set_bbbtree.m"
              }
#line 538 "set_bbbtree.m"
          }
#line 538 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 538 "set_bbbtree.m"
      }
#line 538 "set_bbbtree.m"
      break;
#line 538 "set_bbbtree.m"
    }
#line 78 "set_bbbtree.m"
}

#line 77 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_0(
#line 77 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 77 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 77 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_7)
#line 77 "set_bbbtree.m"
{
#line 538 "set_bbbtree.m"
  while (MR_TRUE)
#line 538 "set_bbbtree.m"
    {
#line 538 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 538 "set_bbbtree.m"
      {
#line 538 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 538 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 538 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 538 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 538 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 538 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 538 "set_bbbtree.m"
          {
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 538 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 543 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "set_bbbtree.m"
              {
#line 542 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 542 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 542 "set_bbbtree.m"
              }
#line 543 "set_bbbtree.m"
            else
#line 546 "set_bbbtree.m"
              {
#line 546 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 546 "set_bbbtree.m"
                {
#line 546 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 546 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 546 "set_bbbtree.m"
                }
#line 546 "set_bbbtree.m"
                continue;
#line 546 "set_bbbtree.m"
              }
#line 538 "set_bbbtree.m"
          }
#line 538 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 538 "set_bbbtree.m"
      }
#line 538 "set_bbbtree.m"
      break;
#line 538 "set_bbbtree.m"
    }
#line 77 "set_bbbtree.m"
}

#line 71 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_1(
#line 71 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 71 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 71 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_7)
#line 71 "set_bbbtree.m"
{
#line 524 "set_bbbtree.m"
  while (MR_TRUE)
#line 524 "set_bbbtree.m"
    {
#line 524 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 524 "set_bbbtree.m"
      {
#line 524 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 524 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 524 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 524 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 524 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 524 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 524 "set_bbbtree.m"
          {
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 529 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "set_bbbtree.m"
              {
#line 528 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 529 "set_bbbtree.m"
            else
#line 532 "set_bbbtree.m"
              {
#line 532 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 532 "set_bbbtree.m"
                {
#line 532 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 532 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 532 "set_bbbtree.m"
                }
#line 532 "set_bbbtree.m"
                continue;
#line 532 "set_bbbtree.m"
              }
#line 524 "set_bbbtree.m"
          }
#line 524 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 524 "set_bbbtree.m"
      }
#line 524 "set_bbbtree.m"
      break;
#line 524 "set_bbbtree.m"
    }
#line 71 "set_bbbtree.m"
}

#line 70 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_0(
#line 70 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 70 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 70 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_7)
#line 70 "set_bbbtree.m"
{
#line 524 "set_bbbtree.m"
  while (MR_TRUE)
#line 524 "set_bbbtree.m"
    {
#line 524 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 524 "set_bbbtree.m"
      {
#line 524 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 524 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 524 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 524 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 524 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 524 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 524 "set_bbbtree.m"
          {
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 524 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 529 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "set_bbbtree.m"
              {
#line 528 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 528 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 528 "set_bbbtree.m"
              }
#line 529 "set_bbbtree.m"
            else
#line 532 "set_bbbtree.m"
              {
#line 532 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 532 "set_bbbtree.m"
                {
#line 532 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 532 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 532 "set_bbbtree.m"
                }
#line 532 "set_bbbtree.m"
                continue;
#line 532 "set_bbbtree.m"
              }
#line 524 "set_bbbtree.m"
          }
#line 524 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 524 "set_bbbtree.m"
      }
#line 524 "set_bbbtree.m"
      break;
#line 524 "set_bbbtree.m"
    }
#line 70 "set_bbbtree.m"
}

#line 64 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__contains_2_p_0(
#line 64 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 64 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 64 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4)
#line 64 "set_bbbtree.m"
{
#line 510 "set_bbbtree.m"
  {
#line 510 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 510 "set_bbbtree.m"
    {
#line 510 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_3);
    }
#line 510 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 510 "set_bbbtree.m"
  }
#line 64 "set_bbbtree.m"
}

#line 59 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__is_member_3_p_0(
#line 59 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 59 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 59 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_5,
#line 59 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Result_6)
#line 59 "set_bbbtree.m"
{
#line 517 "set_bbbtree.m"
  {
#line 517 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 515 "set_bbbtree.m"
    {
#line 515 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_5);
    }
#line 517 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 516 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 1;
#line 517 "set_bbbtree.m"
    else
#line 518 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 0;
#line 517 "set_bbbtree.m"
  }
#line 59 "set_bbbtree.m"
}

#line 496 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 496 "set_bbbtree.m"
  void * mercury__set_bbbtree__env_ptr_arg)
#line 496 "set_bbbtree.m"
{
#line 496 "set_bbbtree.m"
  {
#line 496 "set_bbbtree.m"
    struct mercury__set_bbbtree__member_2_p_1_env_0_s * mercury__set_bbbtree__env_ptr = (struct mercury__set_bbbtree__member_2_p_1_env_0_s *) mercury__set_bbbtree__env_ptr_arg;

#line 497 "set_bbbtree.m"
    {
#line 497 "set_bbbtree.m"
      mercury__builtin__compare_3_p_0((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, &(mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10, *((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__X_3), (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_4);
    }
#line 497 "set_bbbtree.m"
    (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Result_8 == (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10);
#line 497 "set_bbbtree.m"
    if ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 497 "set_bbbtree.m"
      {
#line 497 "set_bbbtree.m"
        ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont)((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr);
#line 497 "set_bbbtree.m"
        return;
      }
#line 496 "set_bbbtree.m"
  }
#line 496 "set_bbbtree.m"
}

#line 54 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__member_2_p_1(
#line 54 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 54 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_3,
#line 54 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 54 "set_bbbtree.m"
  MR_Cont mercury__set_bbbtree__cont,
#line 54 "set_bbbtree.m"
  void * mercury__set_bbbtree__cont_env_ptr)
#line 54 "set_bbbtree.m"
{
#line 54 "set_bbbtree.m"
  {
#line 54 "set_bbbtree.m"
    struct mercury__set_bbbtree__member_2_p_1_env_0_s mercury__set_bbbtree__env;

#line 54 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9 = mercury__set_bbbtree__TypeInfo_for_T_9;
#line 54 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3 = mercury__set_bbbtree__X_3;
#line 54 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont = mercury__set_bbbtree__cont;
#line 54 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr = mercury__set_bbbtree__cont_env_ptr;
#line 496 "set_bbbtree.m"
    {
#line 496 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__L_6;
#line 496 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__R_7;
#line 496 "set_bbbtree.m"
      MR_Integer mercury__set_bbbtree___N_5;

#line 496 "set_bbbtree.m"
      (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 496 "set_bbbtree.m"
      if ((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 496 "set_bbbtree.m"
        {
#line 496 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 496 "set_bbbtree.m"
          mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 496 "set_bbbtree.m"
          mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 496 "set_bbbtree.m"
          mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 499 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 1;
#line 500 "set_bbbtree.m"
          {
#line 500 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__L_6, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 502 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 2;
#line 503 "set_bbbtree.m"
          {
#line 503 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__R_7, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 505 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 0;
#line 506 "set_bbbtree.m"
          *((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3) = (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 505 "set_bbbtree.m"
          {
#line 505 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1_1(&mercury__set_bbbtree__env);
          }
#line 496 "set_bbbtree.m"
        }
#line 496 "set_bbbtree.m"
    }
#line 54 "set_bbbtree.m"
  }
#line 54 "set_bbbtree.m"
}

#line 53 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__member_2_p_0(
#line 53 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 53 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_3,
#line 53 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 53 "set_bbbtree.m"
{
#line 496 "set_bbbtree.m"
  while (MR_TRUE)
#line 496 "set_bbbtree.m"
    {
#line 496 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 496 "set_bbbtree.m"
      {
#line 496 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 496 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_4;
#line 496 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_6;
#line 496 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_7;
#line 496 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_8;
#line 496 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_5;

#line 496 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 496 "set_bbbtree.m"
          {
#line 496 "set_bbbtree.m"
            mercury__set_bbbtree__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 496 "set_bbbtree.m"
            mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 496 "set_bbbtree.m"
            mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 496 "set_bbbtree.m"
            mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 497 "set_bbbtree.m"
            {
#line 497 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, &mercury__set_bbbtree__Result_8, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
            }
#line 501 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 1))
#line 500 "set_bbbtree.m"
              {
#line 500 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 500 "set_bbbtree.m"
                {
#line 500 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__L_6;

#line 500 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 500 "set_bbbtree.m"
                }
#line 500 "set_bbbtree.m"
                continue;
#line 500 "set_bbbtree.m"
              }
#line 501 "set_bbbtree.m"
            else
#line 501 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 0))
#line 506 "set_bbbtree.m"
                {
#line 506 "set_bbbtree.m"
                  return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
                }
#line 501 "set_bbbtree.m"
              else
#line 503 "set_bbbtree.m"
                {
#line 503 "set_bbbtree.m"
                  /* direct tailcall eliminated */
#line 503 "set_bbbtree.m"
                  {
#line 503 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__R_7;

#line 503 "set_bbbtree.m"
                    mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 503 "set_bbbtree.m"
                  }
#line 503 "set_bbbtree.m"
                  continue;
#line 503 "set_bbbtree.m"
                }
#line 496 "set_bbbtree.m"
          }
#line 496 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 496 "set_bbbtree.m"
      }
#line 496 "set_bbbtree.m"
      break;
#line 496 "set_bbbtree.m"
    }
#line 53 "set_bbbtree.m"
}

#line 47 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__count_2_p_0(
#line 47 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 47 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 47 "set_bbbtree.m"
  MR_Integer * mercury__set_bbbtree__HeadVar__2_2)
#line 47 "set_bbbtree.m"
{
#line 490 "set_bbbtree.m"
  {
#line 490 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 491 "set_bbbtree.m"
        *mercury__set_bbbtree__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 490 "set_bbbtree.m"
  }
#line 47 "set_bbbtree.m"
}

#line 46 "set_bbbtree.m"
MR_Integer MR_CALL 
mercury__set_bbbtree__count_1_f_0(
#line 46 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 46 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3)
#line 46 "set_bbbtree.m"
{
#line 490 "set_bbbtree.m"
  {
#line 490 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 490 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Count_4;

#line 490 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Set_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "set_bbbtree.m"
      mercury__set_bbbtree__Count_4 = (MR_Integer) 0;
#line 490 "set_bbbtree.m"
    else
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 0));
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_8;
#line 491 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_9;

#line 491 "set_bbbtree.m"
        mercury__set_bbbtree__Count_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 1)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 2)));
#line 491 "set_bbbtree.m"
        mercury__set_bbbtree___R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
      }
#line 490 "set_bbbtree.m"
    return mercury__set_bbbtree__Count_4;
#line 490 "set_bbbtree.m"
  }
#line 46 "set_bbbtree.m"
}

#line 41 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__non_empty_1_p_0(
#line 41 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 41 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 41 "set_bbbtree.m"
{
#line 483 "set_bbbtree.m"
  {
#line 483 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 483 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_2_2;
#line 483 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_3_3;
#line 483 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_4_4;
#line 483 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;

#line 483 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 483 "set_bbbtree.m"
      {
#line 483 "set_bbbtree.m"
        mercury__set_bbbtree__V_2_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 483 "set_bbbtree.m"
        mercury__set_bbbtree__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 483 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 483 "set_bbbtree.m"
      }
#line 483 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 483 "set_bbbtree.m"
  }
#line 41 "set_bbbtree.m"
}

#line 39 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__is_empty_1_p_0(
#line 39 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
#line 39 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 39 "set_bbbtree.m"
{
#line 481 "set_bbbtree.m"
  {
#line 481 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 481 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 481 "set_bbbtree.m"
  }
#line 39 "set_bbbtree.m"
}

#line 35 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__empty_1_p_0(
#line 35 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
#line 35 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 35 "set_bbbtree.m"
{
#line 479 "set_bbbtree.m"
  {
#line 479 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 479 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 479 "set_bbbtree.m"
  }
#line 35 "set_bbbtree.m"
}

#line 31 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__init_1_p_0(
#line 31 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
#line 31 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__1_1)
#line 31 "set_bbbtree.m"
{
#line 475 "set_bbbtree.m"
  {
#line 475 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 475 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "set_bbbtree.m"
  }
#line 31 "set_bbbtree.m"
}

#line 30 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__init_0_f_0(
#line 30 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_3)
#line 30 "set_bbbtree.m"
{
#line 475 "set_bbbtree.m"
  {
#line 475 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 475 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 475 "set_bbbtree.m"
    return mercury__set_bbbtree__S_2;
#line 475 "set_bbbtree.m"
  }
#line 30 "set_bbbtree.m"
}

void mercury__set_bbbtree__init(void)
{
}

void mercury__set_bbbtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1);
}

void mercury__set_bbbtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module set_bbbtree. */
