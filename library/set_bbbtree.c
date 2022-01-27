/*
** Automatically generated from `set_bbbtree.m'
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
#line 490 "set_bbbtree.m"
  MR_bool mercury__set_bbbtree__member_2_p_1_env_0__succeeded;
#line 490 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 490 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__Result_8;
#line 490 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__V_10_10;
#line 54 "set_bbbtree.m"
};


#line 108 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0;

#line 111 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1;

#line 114 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4];

#line 117 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1;

#line 120 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1];

#line 123 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1];

#line 126 "set_bbbtree.c"
static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2];

#line 129 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2];

#line 132 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2];

#line 135 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 138 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 140 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 142 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3);

#line 145 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 148 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 150 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 152 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 154 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_4);

#line 133 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__V_27_27,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 107 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__set_bbbtree__V_16_16,
#line 107 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3);

#line 133 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__V_18_18,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__set_bbbtree__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1179 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1179 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1179 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1179 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1179 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1179 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10);

#line 1156 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1156 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1156 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1115 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1115 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1115 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1115 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1115 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1082 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1082 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1082 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1082 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1082 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8);

#line 816 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 816 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 816 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 816 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 816 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8);

#line 1338 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1338 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1338 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1316 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1316 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1316 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1316 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1283 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1283 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1283 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1283 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5);

#line 1007 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1007 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1007 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 490 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 490 "set_bbbtree.m"
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
#include "type_desc.mh"
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



#line 685 "set_bbbtree.c"
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

#line 700 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1 = {
  &mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 708 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1
};

#line 716 "set_bbbtree.c"
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

#line 731 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0
};

#line 736 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 741 "set_bbbtree.c"
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

#line 755 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0,
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 761 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 767 "set_bbbtree.c"
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

#line 788 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 791 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 793 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 795 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3)
#line 797 "set_bbbtree.c"
{
#line 799 "set_bbbtree.c"
  {
#line 801 "set_bbbtree.c"
    MR_bool mercury__set_bbbtree__succeeded;

#line 804 "set_bbbtree.c"
    {
#line 806 "set_bbbtree.c"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), ((MR_Word) mercury__set_bbbtree__wrapper_arg_2), ((MR_Word) mercury__set_bbbtree__wrapper_arg_3));
    }
#line 809 "set_bbbtree.c"
    return mercury__set_bbbtree__succeeded;
#line 811 "set_bbbtree.c"
  }
#line 813 "set_bbbtree.c"
}

#line 816 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 819 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 821 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 823 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 825 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_4)
#line 827 "set_bbbtree.c"
{
#line 829 "set_bbbtree.c"
  {
#line 831 "set_bbbtree.c"
    MR_Word mercury__set_bbbtree__conv0_HeadVar__1_1;

#line 834 "set_bbbtree.c"
    {
#line 836 "set_bbbtree.c"
      mercury__set_bbbtree____Compare____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), &mercury__set_bbbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__set_bbbtree__wrapper_arg_3), ((MR_Word) mercury__set_bbbtree__wrapper_arg_4));
    }
#line 839 "set_bbbtree.c"
    *mercury__set_bbbtree__wrapper_arg_2 = ((MR_Box) (mercury__set_bbbtree__conv0_HeadVar__1_1));
#line 841 "set_bbbtree.c"
  }
#line 843 "set_bbbtree.c"
}

#line 133 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__V_27_27,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
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
        MR_bool mercury__set_bbbtree__succeeded;

#line 380 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__set_bbbtree__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__set_bbbtree__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 901 "set_bbbtree.m"
            {
#line 901 "set_bbbtree.m"
              mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__V_27_27, mercury__set_bbbtree__H_10_9, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13, (MR_Integer) 5);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
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

#line 107 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__set_bbbtree__V_16_16,
#line 107 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3)
#line 107 "list.int"
{
#line 696 "list.opt"
  while (MR_TRUE)
#line 696 "list.opt"
    {
#line 696 "list.opt"
      /* tailcall optimized into a loop */
#line 696 "list.opt"
      {
#line 696 "list.opt"
        MR_bool mercury__set_bbbtree__succeeded;

#line 696 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "list.opt"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "list.opt"
        else
#line 697 "list.opt"
          {
#line 697 "list.opt"
            MR_Box mercury__set_bbbtree__H0_6_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 697 "list.opt"
            MR_Word mercury__set_bbbtree__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 703 "list.opt"
            MR_Box mercury__set_bbbtree__H_9_9;
#line 710 "list.opt"
            MR_bool MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__V_16_16, (MR_Integer) 1)));

#line 710 "list.opt"
            {
#line 710 "list.opt"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__V_16_16), mercury__set_bbbtree__H0_6_6, &mercury__set_bbbtree__H_9_9);
            }
#line 703 "list.opt"
            if (mercury__set_bbbtree__succeeded)
#line 701 "list.opt"
              {
#line 701 "list.opt"
                MR_Word mercury__set_bbbtree__TrueTail_10_10;

#line 701 "list.opt"
                {
#line 701 "list.opt"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__V_16_16, mercury__set_bbbtree__T0_7_7, &mercury__set_bbbtree__TrueTail_10_10);
                }
#line 702 "list.opt"
                {
#line 702 "list.opt"
                  MR_Word base;
#line 702 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "list.opt"
                  *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 702 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__H_9_9;
#line 702 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__TrueTail_10_10));
#line 702 "list.opt"
                }
#line 701 "list.opt"
              }
#line 703 "list.opt"
            else
#line 704 "list.opt"
              {
#line 704 "list.opt"
                /* direct tailcall eliminated */
#line 704 "list.opt"
                {
#line 704 "list.opt"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T0_7_7;

#line 704 "list.opt"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 704 "list.opt"
                }
#line 704 "list.opt"
                continue;
#line 704 "list.opt"
              }
#line 697 "list.opt"
          }
#line 696 "list.opt"
      }
#line 696 "list.opt"
      break;
#line 696 "list.opt"
    }
#line 107 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__V_18_18,
#line 133 "list.int"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__set_bbbtree__HeadVar__4_4)
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
        MR_bool mercury__set_bbbtree__succeeded;

#line 380 "list.opt"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__set_bbbtree__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Word mercury__set_bbbtree__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;
#line 390 "list.opt"
            MR_Box MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__V_18_18, (MR_Integer) 1)));

#line 390 "list.opt"
            {
#line 390 "list.opt"
              mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13 = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__V_18_18), mercury__set_bbbtree__H_10_9, mercury__set_bbbtree__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
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

#line 1179 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1179 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1179 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1179 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1179 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1179 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10)
#line 1179 "set_bbbtree.m"
{
#line 1182 "set_bbbtree.m"
  {
#line 1182 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1182 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_11;
#line 1182 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_12;
#line 1186 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Val_13;

#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_11 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_36;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_37;

#line 485 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_12 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_38 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_40;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_41;

#line 485 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 1186 "set_bbbtree.m"
    mercury__set_bbbtree__Val_13 = (mercury__set_bbbtree__LSize_11 + mercury__set_bbbtree__RSize_12);
#line 1187 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_13 < (MR_Integer) 2);
#line 1191 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 1190 "set_bbbtree.m"
      {
#line 1190 "set_bbbtree.m"
        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1190 "set_bbbtree.m"
        return;
      }
#line 1191 "set_bbbtree.m"
    else
#line 1208 "set_bbbtree.m"
      {
#line 1192 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__LSize_11);

#line 1193 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_12 > mercury__set_bbbtree__Val_29);
#line 1208 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1204 "set_bbbtree.m"
          if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "set_bbbtree.m"
            {
#line 1206 "set_bbbtree.m"
              {
#line 1206 "set_bbbtree.m"
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.1");
#line 1206 "set_bbbtree.m"
                return;
              }
#line 1205 "set_bbbtree.m"
            }
#line 1204 "set_bbbtree.m"
          else
#line 1196 "set_bbbtree.m"
            {
#line 1196 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1196 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RR_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1196 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RLSize_18;
#line 1196 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RRSize_19;
#line 1196 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree___V0_14 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1196 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree___N0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 484 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                mercury__set_bbbtree__RLSize_18 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
              else
#line 485 "set_bbbtree.m"
                {
#line 485 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_42 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_44;
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_45;

#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree__RLSize_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___L_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___R_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                }
#line 484 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                mercury__set_bbbtree__RRSize_19 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
              else
#line 485 "set_bbbtree.m"
                {
#line 485 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_46 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_48;
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_49;

#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree__RRSize_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___L_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___R_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                }
#line 1199 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RLSize_18 < mercury__set_bbbtree__RRSize_19);
#line 1201 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 1107 "set_bbbtree.m"
                {
#line 1107 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__B_56 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1107 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1107 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1107 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__A_X_and_Y_61;
#line 1107 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1108 "set_bbbtree.m"
                  {
#line 1108 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y_58, &mercury__set_bbbtree__A_X_and_Y_61);
                  }
#line 1109 "set_bbbtree.m"
                  {
#line 1109 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_56, mercury__set_bbbtree__A_X_and_Y_61, mercury__set_bbbtree__Z_59, mercury__set_bbbtree__Set_9);
#line 1109 "set_bbbtree.m"
                    return;
                  }
#line 1107 "set_bbbtree.m"
                }
#line 1201 "set_bbbtree.m"
              else
#line 1141 "set_bbbtree.m"
                {
#line 1141 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__C_68 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1141 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1141 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1141 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N0_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1147 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__Y_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1148 "set_bbbtree.m"
                    {
#line 1149 "set_bbbtree.m"
                      {
#line 1149 "set_bbbtree.m"
                        mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_l.2");
#line 1149 "set_bbbtree.m"
                        return;
                      }
#line 1148 "set_bbbtree.m"
                    }
#line 1147 "set_bbbtree.m"
                  else
#line 1143 "set_bbbtree.m"
                    {
#line 1143 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree__B_73 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 0));
#line 1143 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y1_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 2)));
#line 1143 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y2_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 3)));
#line 1143 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__A_X_and_Y1_77;
#line 1143 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__C_Y2_and_Z_78;
#line 1143 "set_bbbtree.m"
                      MR_Integer mercury__set_bbbtree___N1_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 1)));

#line 1144 "set_bbbtree.m"
                      {
#line 1144 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y1_75, &mercury__set_bbbtree__A_X_and_Y1_77);
                      }
#line 1145 "set_bbbtree.m"
                      {
#line 1145 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__C_68, mercury__set_bbbtree__Y2_76, mercury__set_bbbtree__Z_71, &mercury__set_bbbtree__C_Y2_and_Z_78);
                      }
#line 1146 "set_bbbtree.m"
                      {
#line 1146 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_73, mercury__set_bbbtree__A_X_and_Y1_77, mercury__set_bbbtree__C_Y2_and_Z_78, mercury__set_bbbtree__Set_9);
#line 1146 "set_bbbtree.m"
                        return;
                      }
#line 1143 "set_bbbtree.m"
                    }
#line 1141 "set_bbbtree.m"
                }
#line 1196 "set_bbbtree.m"
            }
#line 1208 "set_bbbtree.m"
        else
#line 1225 "set_bbbtree.m"
          {
#line 1209 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_30 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__RSize_12);

#line 1210 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_11 > mercury__set_bbbtree__Val_30);
#line 1225 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1221 "set_bbbtree.m"
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "set_bbbtree.m"
                {
#line 1223 "set_bbbtree.m"
                  {
#line 1223 "set_bbbtree.m"
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.2");
#line 1223 "set_bbbtree.m"
                    return;
                  }
#line 1222 "set_bbbtree.m"
                }
#line 1221 "set_bbbtree.m"
              else
#line 1213 "set_bbbtree.m"
                {
#line 1213 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 1213 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 1213 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LLSize_24;
#line 1213 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LRSize_25;
#line 1213 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V1_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 1213 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));

#line 484 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LL_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                    mercury__set_bbbtree__LLSize_24 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
                  else
#line 485 "set_bbbtree.m"
                    {
#line 485 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_80 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_82;
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_83;

#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree__LLSize_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___L_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___R_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                    }
#line 484 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LR_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                    mercury__set_bbbtree__LRSize_25 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
                  else
#line 485 "set_bbbtree.m"
                    {
#line 485 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_84 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_86;
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_87;

#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree__LRSize_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___L_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___R_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                    }
#line 1216 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LRSize_25 < mercury__set_bbbtree__LLSize_24);
#line 1218 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 1217 "set_bbbtree.m"
                    {
#line 1217 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1217 "set_bbbtree.m"
                      return;
                    }
#line 1218 "set_bbbtree.m"
                  else
#line 1219 "set_bbbtree.m"
                    {
#line 1219 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1219 "set_bbbtree.m"
                      return;
                    }
#line 1213 "set_bbbtree.m"
                }
#line 1225 "set_bbbtree.m"
            else
#line 1226 "set_bbbtree.m"
              {
#line 1226 "set_bbbtree.m"
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1226 "set_bbbtree.m"
                return;
              }
#line 1225 "set_bbbtree.m"
          }
#line 1208 "set_bbbtree.m"
      }
#line 1182 "set_bbbtree.m"
  }
#line 1179 "set_bbbtree.m"
}

#line 1156 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1156 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1156 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1156 "set_bbbtree.m"
{
#line 1159 "set_bbbtree.m"
  {
#line 1159 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1159 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1159 "set_bbbtree.m"
      {
#line 1160 "set_bbbtree.m"
        {
#line 1160 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.1");
#line 1160 "set_bbbtree.m"
          return;
        }
#line 1159 "set_bbbtree.m"
      }
#line 1159 "set_bbbtree.m"
    else
#line 1161 "set_bbbtree.m"
      {
#line 1161 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1161 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1161 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1161 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1167 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Y_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "set_bbbtree.m"
          {
#line 1169 "set_bbbtree.m"
            {
#line 1169 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.2");
#line 1169 "set_bbbtree.m"
              return;
            }
#line 1168 "set_bbbtree.m"
          }
#line 1167 "set_bbbtree.m"
        else
#line 1163 "set_bbbtree.m"
          {
#line 1163 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__B_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 0));
#line 1163 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 2)));
#line 1163 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 3)));
#line 1163 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__A_X_and_Y1_20;
#line 1163 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__C_Y2_and_Z_21;
#line 1163 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 1)));

#line 1164 "set_bbbtree.m"
            {
#line 1164 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__Y1_18, &mercury__set_bbbtree__A_X_and_Y1_20);
            }
#line 1165 "set_bbbtree.m"
            {
#line 1165 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y2_19, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__C_Y2_and_Z_21);
            }
#line 1166 "set_bbbtree.m"
            {
#line 1166 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_16, mercury__set_bbbtree__A_X_and_Y1_20, mercury__set_bbbtree__C_Y2_and_Z_21, mercury__set_bbbtree__HeadVar__4_4);
#line 1166 "set_bbbtree.m"
              return;
            }
#line 1163 "set_bbbtree.m"
          }
#line 1161 "set_bbbtree.m"
      }
#line 1159 "set_bbbtree.m"
  }
#line 1156 "set_bbbtree.m"
}

#line 1115 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1115 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1115 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1115 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1115 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1115 "set_bbbtree.m"
{
#line 1118 "set_bbbtree.m"
  {
#line 1118 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1118 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "set_bbbtree.m"
      {
#line 1119 "set_bbbtree.m"
        {
#line 1119 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.single_rot_r");
#line 1119 "set_bbbtree.m"
          return;
        }
#line 1118 "set_bbbtree.m"
      }
#line 1118 "set_bbbtree.m"
    else
#line 1120 "set_bbbtree.m"
      {
#line 1120 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1120 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1120 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1120 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__B_Y_and_Z_16;
#line 1120 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1121 "set_bbbtree.m"
        {
#line 1121 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y_13, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__B_Y_and_Z_16);
        }
#line 1122 "set_bbbtree.m"
        {
#line 1122 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__B_Y_and_Z_16, mercury__set_bbbtree__HeadVar__4_4);
#line 1122 "set_bbbtree.m"
          return;
        }
#line 1120 "set_bbbtree.m"
      }
#line 1118 "set_bbbtree.m"
  }
#line 1115 "set_bbbtree.m"
}

#line 1082 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1082 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1082 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1082 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1082 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8)
#line 1082 "set_bbbtree.m"
{
#line 1085 "set_bbbtree.m"
  {
#line 1085 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1085 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_9;
#line 1085 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_10;
#line 1085 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_11;
#line 1085 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Tree0_12;
#line 1085 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_13_13;

#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_9 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_18;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_19;

#line 485 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_10 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_22;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_23;

#line 485 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 1088 "set_bbbtree.m"
    mercury__set_bbbtree__V_13_13 = ((MR_Integer) 1 + mercury__set_bbbtree__LSize_9);
#line 1088 "set_bbbtree.m"
    mercury__set_bbbtree__N_11 = (mercury__set_bbbtree__V_13_13 + mercury__set_bbbtree__RSize_10);
#line 1089 "set_bbbtree.m"
    {
#line 1089 "set_bbbtree.m"
      mercury__set_bbbtree__Tree0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 0) = mercury__set_bbbtree__X_5;
#line 1089 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 1) = ((MR_Box) (mercury__set_bbbtree__N_11));
#line 1089 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 2) = ((MR_Box) (mercury__set_bbbtree__L_6));
#line 1089 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 3) = ((MR_Box) (mercury__set_bbbtree__R_7));
#line 1089 "set_bbbtree.m"
    }
#line 1090 "set_bbbtree.m"
    *mercury__set_bbbtree__Tree_8 = mercury__set_bbbtree__Tree0_12;
#line 1085 "set_bbbtree.m"
  }
#line 1082 "set_bbbtree.m"
}

#line 816 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 816 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 816 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 816 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 816 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8)
#line 816 "set_bbbtree.m"
{
#line 834 "set_bbbtree.m"
  {
#line 834 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 > (MR_Integer) 3);

#line 834 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 821 "set_bbbtree.m"
      {
#line 821 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NL_9 = (mercury__set_bbbtree__N_7 / (MR_Integer) 2);
#line 821 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NR_10;
#line 821 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList0_11;
#line 821 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12;
#line 821 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__V_21_21 = (mercury__set_bbbtree__N_7 - mercury__set_bbbtree__NL_9);

#line 822 "set_bbbtree.m"
        mercury__set_bbbtree__NR_10 = (mercury__set_bbbtree__V_21_21 - (MR_Integer) 1);
#line 823 "set_bbbtree.m"
        {
#line 823 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_5, &mercury__set_bbbtree__RestOfList0_11, mercury__set_bbbtree__NL_9, &mercury__set_bbbtree__L_12);
        }
#line 829 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "set_bbbtree.m"
          {
#line 832 "set_bbbtree.m"
            {
#line 832 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.1");
#line 832 "set_bbbtree.m"
              return;
            }
#line 831 "set_bbbtree.m"
          }
#line 829 "set_bbbtree.m"
        else
#line 825 "set_bbbtree.m"
          {
#line 825 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_13 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 0));
#line 825 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 1)));
#line 825 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_15;

#line 826 "set_bbbtree.m"
            {
#line 826 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__RestOfList1_14, mercury__set_bbbtree__RestOfList_6, mercury__set_bbbtree__NR_10, &mercury__set_bbbtree__R_15);
            }
#line 828 "set_bbbtree.m"
            {
#line 828 "set_bbbtree.m"
              MR_Word base;
#line 828 "set_bbbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 828 "set_bbbtree.m"
              *mercury__set_bbbtree__Set_8 = base;
#line 828 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_13;
#line 828 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 828 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_12));
#line 828 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_15));
#line 828 "set_bbbtree.m"
            }
#line 825 "set_bbbtree.m"
          }
#line 821 "set_bbbtree.m"
      }
#line 834 "set_bbbtree.m"
    else
#line 844 "set_bbbtree.m"
      {
#line 834 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 3);
#line 844 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 840 "set_bbbtree.m"
          {
#line 840 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_16;
#line 840 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Y_17;
#line 840 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Z_18;
#line 840 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList0_45;
#line 835 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_24_24;
#line 835 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_25_25;

#line 835 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 835 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 835 "set_bbbtree.m"
              {
#line 835 "set_bbbtree.m"
                mercury__set_bbbtree__X_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 835 "set_bbbtree.m"
                mercury__set_bbbtree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 835 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 835 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 835 "set_bbbtree.m"
                  {
#line 835 "set_bbbtree.m"
                    mercury__set_bbbtree__Y_17 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 0));
#line 835 "set_bbbtree.m"
                    mercury__set_bbbtree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 1)));
#line 835 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 835 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 835 "set_bbbtree.m"
                      {
#line 835 "set_bbbtree.m"
                        mercury__set_bbbtree__Z_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 0));
#line 835 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 1)));
#line 835 "set_bbbtree.m"
                      }
#line 835 "set_bbbtree.m"
                  }
#line 835 "set_bbbtree.m"
              }
#line 840 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 836 "set_bbbtree.m"
              {
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_26_26;
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_28_28;
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_29_29;
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_30_30;
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_32_32;
#line 836 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_33_33;

#line 836 "set_bbbtree.m"
                *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_45;
#line 838 "set_bbbtree.m"
                mercury__set_bbbtree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "set_bbbtree.m"
                mercury__set_bbbtree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "set_bbbtree.m"
                {
#line 838 "set_bbbtree.m"
                  mercury__set_bbbtree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 838 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 0) = mercury__set_bbbtree__X_16;
#line 838 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 1) = ((MR_Box) ((MR_Integer) 1));
#line 838 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 2) = ((MR_Box) (mercury__set_bbbtree__V_28_28));
#line 838 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 3) = ((MR_Box) (mercury__set_bbbtree__V_29_29));
#line 838 "set_bbbtree.m"
                }
#line 839 "set_bbbtree.m"
                mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "set_bbbtree.m"
                mercury__set_bbbtree__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "set_bbbtree.m"
                {
#line 839 "set_bbbtree.m"
                  mercury__set_bbbtree__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 0) = mercury__set_bbbtree__Z_18;
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 2) = ((MR_Box) (mercury__set_bbbtree__V_32_32));
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 3) = ((MR_Box) (mercury__set_bbbtree__V_33_33));
#line 839 "set_bbbtree.m"
                }
#line 837 "set_bbbtree.m"
                {
#line 837 "set_bbbtree.m"
                  MR_Word base;
#line 837 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 837 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_8 = base;
#line 837 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_17;
#line 837 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 837 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_26_26));
#line 837 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_30_30));
#line 837 "set_bbbtree.m"
                }
#line 836 "set_bbbtree.m"
              }
#line 840 "set_bbbtree.m"
            else
#line 842 "set_bbbtree.m"
              {
#line 842 "set_bbbtree.m"
                {
#line 842 "set_bbbtree.m"
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.2");
#line 842 "set_bbbtree.m"
                  return;
                }
#line 842 "set_bbbtree.m"
              }
#line 840 "set_bbbtree.m"
          }
#line 844 "set_bbbtree.m"
        else
#line 852 "set_bbbtree.m"
          {
#line 844 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 2);
#line 852 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 848 "set_bbbtree.m"
              {
#line 848 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__RestOfList0_46;
#line 848 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__X_47;
#line 848 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__Y_48;
#line 845 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_35_35;

#line 845 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 845 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 845 "set_bbbtree.m"
                  {
#line 845 "set_bbbtree.m"
                    mercury__set_bbbtree__X_47 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 845 "set_bbbtree.m"
                    mercury__set_bbbtree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 845 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 845 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 845 "set_bbbtree.m"
                      {
#line 845 "set_bbbtree.m"
                        mercury__set_bbbtree__Y_48 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 0));
#line 845 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 1)));
#line 845 "set_bbbtree.m"
                      }
#line 845 "set_bbbtree.m"
                  }
#line 848 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 846 "set_bbbtree.m"
                  {
#line 846 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_36_36;
#line 846 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_38_38;
#line 846 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_39_39;
#line 846 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_40_40;

#line 846 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_46;
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "set_bbbtree.m"
                    {
#line 847 "set_bbbtree.m"
                      mercury__set_bbbtree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 0) = mercury__set_bbbtree__X_47;
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 1) = ((MR_Box) ((MR_Integer) 1));
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 2) = ((MR_Box) (mercury__set_bbbtree__V_38_38));
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 3) = ((MR_Box) (mercury__set_bbbtree__V_39_39));
#line 847 "set_bbbtree.m"
                    }
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "set_bbbtree.m"
                    {
#line 847 "set_bbbtree.m"
                      MR_Word base;
#line 847 "set_bbbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 847 "set_bbbtree.m"
                      *mercury__set_bbbtree__Set_8 = base;
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_48;
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_36_36));
#line 847 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_40_40));
#line 847 "set_bbbtree.m"
                    }
#line 846 "set_bbbtree.m"
                  }
#line 848 "set_bbbtree.m"
                else
#line 850 "set_bbbtree.m"
                  {
#line 850 "set_bbbtree.m"
                    {
#line 850 "set_bbbtree.m"
                      mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.3");
#line 850 "set_bbbtree.m"
                      return;
                    }
#line 850 "set_bbbtree.m"
                  }
#line 848 "set_bbbtree.m"
              }
#line 852 "set_bbbtree.m"
            else
#line 860 "set_bbbtree.m"
              {
#line 852 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 1);
#line 860 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 856 "set_bbbtree.m"
                  {
#line 856 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__RestOfList0_49;
#line 856 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree__X_50;

#line 853 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 853 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 853 "set_bbbtree.m"
                      {
#line 853 "set_bbbtree.m"
                        mercury__set_bbbtree__X_50 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 853 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 854 "set_bbbtree.m"
                        {
#line 854 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_42_42;
#line 854 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_43_43;

#line 854 "set_bbbtree.m"
                          *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_49;
#line 855 "set_bbbtree.m"
                          mercury__set_bbbtree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "set_bbbtree.m"
                          mercury__set_bbbtree__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "set_bbbtree.m"
                          {
#line 855 "set_bbbtree.m"
                            MR_Word base;
#line 855 "set_bbbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 855 "set_bbbtree.m"
                            *mercury__set_bbbtree__Set_8 = base;
#line 855 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_50;
#line 855 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 855 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_42_42));
#line 855 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_43_43));
#line 855 "set_bbbtree.m"
                          }
#line 854 "set_bbbtree.m"
                        }
#line 853 "set_bbbtree.m"
                      }
#line 853 "set_bbbtree.m"
                    else
#line 858 "set_bbbtree.m"
                      {
#line 858 "set_bbbtree.m"
                        {
#line 858 "set_bbbtree.m"
                          mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.4");
#line 858 "set_bbbtree.m"
                          return;
                        }
#line 858 "set_bbbtree.m"
                      }
#line 856 "set_bbbtree.m"
                  }
#line 860 "set_bbbtree.m"
                else
#line 862 "set_bbbtree.m"
                  {
#line 862 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__List_5;
#line 863 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 862 "set_bbbtree.m"
                  }
#line 860 "set_bbbtree.m"
              }
#line 852 "set_bbbtree.m"
          }
#line 844 "set_bbbtree.m"
      }
#line 834 "set_bbbtree.m"
  }
#line 816 "set_bbbtree.m"
}

#line 453 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0(
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_25,
#line 453 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__1_1,
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3)
#line 453 "set_bbbtree.m"
{
#line 453 "set_bbbtree.m"
  while (MR_TRUE)
#line 453 "set_bbbtree.m"
    {
#line 453 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 453 "set_bbbtree.m"
      {
#line 453 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 453 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_23 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;
#line 453 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_24 = (MR_Integer) mercury__set_bbbtree__HeadVar__3_3;

#line 453 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_23 == mercury__set_bbbtree__CastY_24);
#line 453 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 2252 "set_bbbtree.c"
          *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "set_bbbtree.m"
        else
#line 453 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 453 "set_bbbtree.m"
            else
#line 2264 "set_bbbtree.c"
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 453 "set_bbbtree.m"
          else
#line 453 "set_bbbtree.m"
            {
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 453 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 453 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_34_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));

#line 453 "set_bbbtree.m"
              if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2281 "set_bbbtree.c"
                *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 453 "set_bbbtree.m"
              else
#line 453 "set_bbbtree.m"
                {
#line 453 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 0));
#line 453 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 1)));
#line 453 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 453 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 453 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__V_20_20;

#line 453 "set_bbbtree.m"
                  {
#line 453 "set_bbbtree.m"
                    mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__V_34_34, mercury__set_bbbtree__V_16_16);
                  }
#line 2303 "set_bbbtree.c"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_20_20 == (MR_Integer) 0);
#line 453 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 453 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                    *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_20_20;
#line 453 "set_bbbtree.m"
                  else
#line 453 "set_bbbtree.m"
                    {
#line 453 "set_bbbtree.m"
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
#line 2340 "set_bbbtree.c"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_21_21 == (MR_Integer) 0);
#line 453 "set_bbbtree.m"
                      mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 453 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                        *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_21_21;
#line 453 "set_bbbtree.m"
                      else
#line 453 "set_bbbtree.m"
                        {
#line 453 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_22_22;

#line 453 "set_bbbtree.m"
                          {
#line 453 "set_bbbtree.m"
                            mercury__set_bbbtree____Compare____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_22_22, mercury__set_bbbtree__V_32_32, mercury__set_bbbtree__V_18_18);
                          }
#line 2360 "set_bbbtree.c"
                          mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_22_22 == (MR_Integer) 0);
#line 453 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 453 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                            *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_22_22;
#line 453 "set_bbbtree.m"
                          else
#line 453 "set_bbbtree.m"
                            {
#line 453 "set_bbbtree.m"
                              /* direct tailcall eliminated */
#line 453 "set_bbbtree.m"
                              {
#line 453 "set_bbbtree.m"
                                MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_31_31;
#line 453 "set_bbbtree.m"
                                MR_Word mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__V_19_19;

#line 453 "set_bbbtree.m"
                                mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 453 "set_bbbtree.m"
                                mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 453 "set_bbbtree.m"
                              }
#line 453 "set_bbbtree.m"
                              continue;
#line 453 "set_bbbtree.m"
                            }
#line 453 "set_bbbtree.m"
                        }
#line 453 "set_bbbtree.m"
                    }
#line 453 "set_bbbtree.m"
                }
#line 453 "set_bbbtree.m"
            }
#line 453 "set_bbbtree.m"
      }
#line 453 "set_bbbtree.m"
      break;
#line 453 "set_bbbtree.m"
    }
#line 453 "set_bbbtree.m"
}

#line 453 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0(
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 453 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 453 "set_bbbtree.m"
{
#line 453 "set_bbbtree.m"
  while (MR_TRUE)
#line 453 "set_bbbtree.m"
    {
#line 453 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 453 "set_bbbtree.m"
      {
#line 453 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 453 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_13 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 453 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_14 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 453 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_13 == mercury__set_bbbtree__CastY_14);
#line 453 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = MR_TRUE;
#line 453 "set_bbbtree.m"
        else
#line 453 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "set_bbbtree.m"
            {
#line 453 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__CastX_3 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 453 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__CastY_4 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 453 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastY_4 == mercury__set_bbbtree__CastX_3);
#line 453 "set_bbbtree.m"
            }
#line 453 "set_bbbtree.m"
          else
#line 453 "set_bbbtree.m"
            {
#line 453 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 453 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 453 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree__V_9_9;
#line 453 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_10_10;
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_11_11;
#line 453 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__V_12_12;

#line 453 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 453 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                {
#line 453 "set_bbbtree.m"
                  mercury__set_bbbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 453 "set_bbbtree.m"
                  mercury__set_bbbtree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 453 "set_bbbtree.m"
                  mercury__set_bbbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 453 "set_bbbtree.m"
                  mercury__set_bbbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 2490 "set_bbbtree.c"
                  {
#line 2492 "set_bbbtree.c"
                    mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__V_9_9);
                  }
#line 453 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                    {
#line 2499 "set_bbbtree.c"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == mercury__set_bbbtree__V_10_10);
#line 453 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 453 "set_bbbtree.m"
                        {
#line 2505 "set_bbbtree.c"
                          {
#line 2507 "set_bbbtree.c"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_7_7, mercury__set_bbbtree__V_11_11);
                          }
#line 453 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 2512 "set_bbbtree.c"
                            {
#line 2514 "set_bbbtree.c"
                              /* direct tailcall eliminated */
#line 2516 "set_bbbtree.c"
                              {
#line 2518 "set_bbbtree.c"
                                MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_8_8;
#line 2520 "set_bbbtree.c"
                                MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 2523 "set_bbbtree.c"
                                mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 2525 "set_bbbtree.c"
                                mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 2527 "set_bbbtree.c"
                              }
#line 2529 "set_bbbtree.c"
                              continue;
#line 2531 "set_bbbtree.c"
                            }
#line 453 "set_bbbtree.m"
                        }
#line 453 "set_bbbtree.m"
                    }
#line 453 "set_bbbtree.m"
                }
#line 453 "set_bbbtree.m"
            }
#line 453 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 453 "set_bbbtree.m"
      }
#line 453 "set_bbbtree.m"
      break;
#line 453 "set_bbbtree.m"
    }
#line 453 "set_bbbtree.m"
}

#line 1338 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1338 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1338 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1338 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1338 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1338 "set_bbbtree.m"
{
#line 1341 "set_bbbtree.m"
  while (MR_TRUE)
#line 1341 "set_bbbtree.m"
    {
#line 1341 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1341 "set_bbbtree.m"
      {
#line 1341 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1341 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "set_bbbtree.m"
        else
#line 1342 "set_bbbtree.m"
          {
#line 1342 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1342 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1342 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1342 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1342 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1343 "set_bbbtree.m"
            {
#line 1343 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1347 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1348 "set_bbbtree.m"
              {
#line 1348 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Set0_15;

#line 1349 "set_bbbtree.m"
                {
#line 1349 "set_bbbtree.m"
                  mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1350 "set_bbbtree.m"
                {
#line 1350 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__R_10, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1350 "set_bbbtree.m"
                  return;
                }
#line 1348 "set_bbbtree.m"
              }
#line 1347 "set_bbbtree.m"
            else
#line 1347 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1353 "set_bbbtree.m"
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__R_10;
#line 1347 "set_bbbtree.m"
              else
#line 1346 "set_bbbtree.m"
                {
#line 1346 "set_bbbtree.m"
                  /* direct tailcall eliminated */
#line 1346 "set_bbbtree.m"
                  {
#line 1346 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_10;

#line 1346 "set_bbbtree.m"
                    mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1346 "set_bbbtree.m"
                  }
#line 1346 "set_bbbtree.m"
                  continue;
#line 1346 "set_bbbtree.m"
                }
#line 1342 "set_bbbtree.m"
          }
#line 1341 "set_bbbtree.m"
      }
#line 1341 "set_bbbtree.m"
      break;
#line 1341 "set_bbbtree.m"
    }
#line 1338 "set_bbbtree.m"
}

#line 1316 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1316 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1316 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1316 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1316 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1316 "set_bbbtree.m"
{
#line 1319 "set_bbbtree.m"
  while (MR_TRUE)
#line 1319 "set_bbbtree.m"
    {
#line 1319 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1319 "set_bbbtree.m"
      {
#line 1319 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1319 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1319 "set_bbbtree.m"
        else
#line 1320 "set_bbbtree.m"
          {
#line 1320 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1320 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1320 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1320 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1320 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1321 "set_bbbtree.m"
            {
#line 1321 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1325 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1324 "set_bbbtree.m"
              {
#line 1324 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1324 "set_bbbtree.m"
                {
#line 1324 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_9;

#line 1324 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1324 "set_bbbtree.m"
                }
#line 1324 "set_bbbtree.m"
                continue;
#line 1324 "set_bbbtree.m"
              }
#line 1325 "set_bbbtree.m"
            else
#line 1325 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1331 "set_bbbtree.m"
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__L_9;
#line 1325 "set_bbbtree.m"
              else
#line 1326 "set_bbbtree.m"
                {
#line 1326 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Set0_15;

#line 1327 "set_bbbtree.m"
                  {
#line 1327 "set_bbbtree.m"
                    mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__R_10, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                  }
#line 1328 "set_bbbtree.m"
                  {
#line 1328 "set_bbbtree.m"
                    mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1328 "set_bbbtree.m"
                    return;
                  }
#line 1326 "set_bbbtree.m"
                }
#line 1320 "set_bbbtree.m"
          }
#line 1319 "set_bbbtree.m"
      }
#line 1319 "set_bbbtree.m"
      break;
#line 1319 "set_bbbtree.m"
    }
#line 1316 "set_bbbtree.m"
}

#line 1283 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1283 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1283 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1283 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1283 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5)
#line 1283 "set_bbbtree.m"
{
#line 1286 "set_bbbtree.m"
  {
#line 1286 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1286 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "set_bbbtree.m"
      {
#line 1287 "set_bbbtree.m"
        mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1287 "set_bbbtree.m"
        return;
      }
#line 1286 "set_bbbtree.m"
    else
#line 1289 "set_bbbtree.m"
      {
#line 1289 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__LV_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1289 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__LN_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1289 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1289 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 1293 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "set_bbbtree.m"
          {
#line 1292 "set_bbbtree.m"
            mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1292 "set_bbbtree.m"
            return;
          }
#line 1293 "set_bbbtree.m"
        else
#line 1294 "set_bbbtree.m"
          {
#line 1294 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__RV_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 0));
#line 1294 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__RN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 1)));
#line 1294 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RL_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 2)));
#line 1294 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RR_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 3)));
#line 1296 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_22 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__LN_11);

#line 1297 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_22 < mercury__set_bbbtree__RN_19);
#line 1301 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1299 "set_bbbtree.m"
              {
#line 1299 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__NewL_23;

#line 1299 "set_bbbtree.m"
                {
#line 1299 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__RL_20, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__Ratio_5);
                }
#line 1300 "set_bbbtree.m"
                {
#line 1300 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__RV_18, mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__RR_21, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1300 "set_bbbtree.m"
                  return;
                }
#line 1299 "set_bbbtree.m"
              }
#line 1301 "set_bbbtree.m"
            else
#line 1307 "set_bbbtree.m"
              {
#line 1302 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__RN_19);

#line 1303 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_29 < mercury__set_bbbtree__LN_11);
#line 1307 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1305 "set_bbbtree.m"
                  {
#line 1305 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__NewR_24;

#line 1305 "set_bbbtree.m"
                    {
#line 1305 "set_bbbtree.m"
                      mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__LR_13, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Ratio_5);
                    }
#line 1306 "set_bbbtree.m"
                    {
#line 1306 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__LV_10, mercury__set_bbbtree__LL_12, mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1306 "set_bbbtree.m"
                      return;
                    }
#line 1305 "set_bbbtree.m"
                  }
#line 1307 "set_bbbtree.m"
                else
#line 1308 "set_bbbtree.m"
                  {
#line 1308 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_3, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__R_2, mercury__set_bbbtree__Set_4);
#line 1308 "set_bbbtree.m"
                    return;
                  }
#line 1307 "set_bbbtree.m"
              }
#line 1294 "set_bbbtree.m"
          }
#line 1289 "set_bbbtree.m"
      }
#line 1286 "set_bbbtree.m"
  }
#line 1283 "set_bbbtree.m"
}

#line 1050 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_r_4_p_0(
#line 1050 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 1050 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1050 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1050 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1050 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1050 "set_bbbtree.m"
{
#line 1053 "set_bbbtree.m"
  {
#line 1053 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1053 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "set_bbbtree.m"
    else
#line 1054 "set_bbbtree.m"
      {
#line 1054 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 1054 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 1054 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1055 "set_bbbtree.m"
        {
#line 1055 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1056 "set_bbbtree.m"
        {
#line 1056 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1057 "set_bbbtree.m"
        {
#line 1057 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1058 "set_bbbtree.m"
        {
#line 1058 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1059 "set_bbbtree.m"
        {
#line 1059 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 1061 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1243 "set_bbbtree.m"
          {
#line 1243 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 484 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
            else
#line 485 "set_bbbtree.m"
              {
#line 485 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 485 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 485 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
              }
#line 1245 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1248 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1247 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1248 "set_bbbtree.m"
            else
#line 1249 "set_bbbtree.m"
              {
#line 1249 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 484 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
                else
#line 485 "set_bbbtree.m"
                  {
#line 485 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 485 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                  }
#line 1250 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1253 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1252 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1253 "set_bbbtree.m"
                else
#line 1266 "set_bbbtree.m"
                  {
#line 1260 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1266 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1263 "set_bbbtree.m"
                      {
#line 1263 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1263 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1261 "set_bbbtree.m"
                        {
#line 1261 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1263 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1262 "set_bbbtree.m"
                          {
#line 1262 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1262 "set_bbbtree.m"
                            return;
                          }
#line 1263 "set_bbbtree.m"
                        else
#line 1264 "set_bbbtree.m"
                          {
#line 1264 "set_bbbtree.m"
                            {
#line 1264 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1264 "set_bbbtree.m"
                              return;
                            }
#line 1264 "set_bbbtree.m"
                          }
#line 1263 "set_bbbtree.m"
                      }
#line 1266 "set_bbbtree.m"
                    else
#line 1269 "set_bbbtree.m"
                      {
#line 1269 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1269 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1267 "set_bbbtree.m"
                        {
#line 1267 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1269 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                          {
#line 1268 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
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
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1270 "set_bbbtree.m"
                              return;
                            }
#line 1270 "set_bbbtree.m"
                          }
#line 1269 "set_bbbtree.m"
                      }
#line 1266 "set_bbbtree.m"
                  }
#line 1249 "set_bbbtree.m"
              }
#line 1243 "set_bbbtree.m"
          }
#line 1061 "set_bbbtree.m"
        else
#line 1062 "set_bbbtree.m"
          {
#line 1062 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1062 "set_bbbtree.m"
            return;
          }
#line 1054 "set_bbbtree.m"
      }
#line 1053 "set_bbbtree.m"
  }
#line 1050 "set_bbbtree.m"
}

#line 1026 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_r_3_f_0(
#line 1026 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 1026 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1026 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1026 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 1026 "set_bbbtree.m"
{
#line 1029 "set_bbbtree.m"
  while (MR_TRUE)
#line 1029 "set_bbbtree.m"
    {
#line 1029 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1029 "set_bbbtree.m"
      {
#line 1029 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 1029 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__HeadVar__4_4;

#line 1029 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "set_bbbtree.m"
          mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__1_1;
#line 1029 "set_bbbtree.m"
        else
#line 1031 "set_bbbtree.m"
          {
#line 1031 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1031 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Sets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1031 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Intersect1_11;

#line 1032 "set_bbbtree.m"
            {
#line 1032 "set_bbbtree.m"
              mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Set_8, &mercury__set_bbbtree__Intersect1_11, mercury__set_bbbtree__HeadVar__3_3);
            }
#line 1031 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 1031 "set_bbbtree.m"
            {
#line 1031 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Intersect1_11;
#line 1031 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Sets_9;

#line 1031 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1031 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1031 "set_bbbtree.m"
            }
#line 1031 "set_bbbtree.m"
            continue;
#line 1031 "set_bbbtree.m"
          }
#line 1029 "set_bbbtree.m"
        return mercury__set_bbbtree__HeadVar__4_4;
#line 1029 "set_bbbtree.m"
      }
#line 1029 "set_bbbtree.m"
      break;
#line 1029 "set_bbbtree.m"
    }
#line 1026 "set_bbbtree.m"
}

#line 1007 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1007 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1007 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1007 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1007 "set_bbbtree.m"
{
#line 1010 "set_bbbtree.m"
  while (MR_TRUE)
#line 1010 "set_bbbtree.m"
    {
#line 1010 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1010 "set_bbbtree.m"
      {
#line 1010 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1010 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "set_bbbtree.m"
          else
#line 1011 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "set_bbbtree.m"
        else
#line 1010 "set_bbbtree.m"
          {
#line 1010 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1010 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1010 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1012 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1010 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "set_bbbtree.m"
            else
#line 1014 "set_bbbtree.m"
              {
#line 1014 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection0_26;
#line 1014 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection1_27;

#line 1015 "set_bbbtree.m"
                {
#line 1015 "set_bbbtree.m"
                  mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_33_33, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Intersection0_26, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1017 "set_bbbtree.m"
                {
#line 1017 "set_bbbtree.m"
                  mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_31_31, mercury__set_bbbtree__Intersection0_26, &mercury__set_bbbtree__Intersection1_27, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1019 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1019 "set_bbbtree.m"
                {
#line 1019 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_30_30;
#line 1019 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Intersection1_27;

#line 1019 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1019 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1019 "set_bbbtree.m"
                }
#line 1019 "set_bbbtree.m"
                continue;
#line 1014 "set_bbbtree.m"
              }
#line 1010 "set_bbbtree.m"
          }
#line 1010 "set_bbbtree.m"
      }
#line 1010 "set_bbbtree.m"
      break;
#line 1010 "set_bbbtree.m"
    }
#line 1007 "set_bbbtree.m"
}

#line 999 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_intersect_r_3_p_0(
#line 999 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 999 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 999 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 999 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 999 "set_bbbtree.m"
{
#line 1002 "set_bbbtree.m"
  {
#line 1002 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1002 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "set_bbbtree.m"
    else
#line 1003 "set_bbbtree.m"
      {
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_11;
#line 1003 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1004 "set_bbbtree.m"
        {
#line 1004 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__L_7, mercury__set_bbbtree__V_5, &mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 1005 "set_bbbtree.m"
        {
#line 1005 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 1005 "set_bbbtree.m"
          return;
        }
#line 1003 "set_bbbtree.m"
      }
#line 1002 "set_bbbtree.m"
  }
#line 999 "set_bbbtree.m"
}

#line 968 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__intersect_r_4_p_0(
#line 968 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 968 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 968 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 968 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 968 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 968 "set_bbbtree.m"
{
#line 971 "set_bbbtree.m"
  {
#line 971 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 971 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "set_bbbtree.m"
    else
#line 972 "set_bbbtree.m"
      {
#line 972 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 972 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 972 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 973 "set_bbbtree.m"
        {
#line 973 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 974 "set_bbbtree.m"
        {
#line 974 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 975 "set_bbbtree.m"
        {
#line 975 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 976 "set_bbbtree.m"
        {
#line 976 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 977 "set_bbbtree.m"
        {
#line 977 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 979 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 978 "set_bbbtree.m"
          {
#line 978 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 978 "set_bbbtree.m"
            return;
          }
#line 979 "set_bbbtree.m"
        else
#line 1243 "set_bbbtree.m"
          {
#line 1243 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 484 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
            else
#line 485 "set_bbbtree.m"
              {
#line 485 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 485 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 485 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
              }
#line 1245 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1248 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1247 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1248 "set_bbbtree.m"
            else
#line 1249 "set_bbbtree.m"
              {
#line 1249 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 484 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
                else
#line 485 "set_bbbtree.m"
                  {
#line 485 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 485 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                  }
#line 1250 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1253 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1252 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1253 "set_bbbtree.m"
                else
#line 1266 "set_bbbtree.m"
                  {
#line 1260 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1266 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1263 "set_bbbtree.m"
                      {
#line 1263 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1263 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1261 "set_bbbtree.m"
                        {
#line 1261 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1263 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1262 "set_bbbtree.m"
                          {
#line 1262 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1262 "set_bbbtree.m"
                            return;
                          }
#line 1263 "set_bbbtree.m"
                        else
#line 1264 "set_bbbtree.m"
                          {
#line 1264 "set_bbbtree.m"
                            {
#line 1264 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1264 "set_bbbtree.m"
                              return;
                            }
#line 1264 "set_bbbtree.m"
                          }
#line 1263 "set_bbbtree.m"
                      }
#line 1266 "set_bbbtree.m"
                    else
#line 1269 "set_bbbtree.m"
                      {
#line 1269 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1269 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1267 "set_bbbtree.m"
                        {
#line 1267 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1269 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                          {
#line 1268 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
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
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1270 "set_bbbtree.m"
                              return;
                            }
#line 1270 "set_bbbtree.m"
                          }
#line 1269 "set_bbbtree.m"
                      }
#line 1266 "set_bbbtree.m"
                  }
#line 1249 "set_bbbtree.m"
              }
#line 1243 "set_bbbtree.m"
          }
#line 972 "set_bbbtree.m"
      }
#line 971 "set_bbbtree.m"
  }
#line 968 "set_bbbtree.m"
}

#line 942 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_union_r_3_p_0(
#line 942 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 942 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 942 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 942 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 942 "set_bbbtree.m"
{
#line 945 "set_bbbtree.m"
  {
#line 945 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 945 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "set_bbbtree.m"
    else
#line 946 "set_bbbtree.m"
      {
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LUnion_11;
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RUnion_12;
#line 946 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Union_13;
#line 946 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 947 "set_bbbtree.m"
        {
#line 947 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 948 "set_bbbtree.m"
        {
#line 948 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__RUnion_12, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 949 "set_bbbtree.m"
        {
#line 949 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__RUnion_12, &mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 950 "set_bbbtree.m"
        {
#line 950 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__V_5, mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 950 "set_bbbtree.m"
          return;
        }
#line 946 "set_bbbtree.m"
      }
#line 945 "set_bbbtree.m"
  }
#line 942 "set_bbbtree.m"
}

#line 903 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__union_r_4_p_0(
#line 903 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 903 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 903 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 903 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_3,
#line 903 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 903 "set_bbbtree.m"
{
#line 906 "set_bbbtree.m"
  {
#line 906 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 906 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 906 "set_bbbtree.m"
    else
#line 908 "set_bbbtree.m"
      {
#line 908 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 908 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 908 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 909 "set_bbbtree.m"
        {
#line 909 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 910 "set_bbbtree.m"
        {
#line 910 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 911 "set_bbbtree.m"
        {
#line 911 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 912 "set_bbbtree.m"
        {
#line 912 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 913 "set_bbbtree.m"
        {
#line 913 "set_bbbtree.m"
          mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__HeadVar__4_4);
#line 913 "set_bbbtree.m"
          return;
        }
#line 908 "set_bbbtree.m"
      }
#line 906 "set_bbbtree.m"
  }
#line 903 "set_bbbtree.m"
}

#line 882 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_1(
#line 882 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 882 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 882 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 882 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 882 "set_bbbtree.m"
{
#line 884 "set_bbbtree.m"
  while (MR_TRUE)
#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 884 "set_bbbtree.m"
      {
#line 884 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 884 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 884 "set_bbbtree.m"
        else
#line 886 "set_bbbtree.m"
          {
#line 886 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 886 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 887 "set_bbbtree.m"
            {
#line 887 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 888 "set_bbbtree.m"
            {
#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 888 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 888 "set_bbbtree.m"
            }
#line 888 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 888 "set_bbbtree.m"
            {
#line 888 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 888 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 888 "set_bbbtree.m"
            }
#line 888 "set_bbbtree.m"
            continue;
#line 886 "set_bbbtree.m"
          }
#line 884 "set_bbbtree.m"
      }
#line 884 "set_bbbtree.m"
      break;
#line 884 "set_bbbtree.m"
    }
#line 882 "set_bbbtree.m"
}

#line 881 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_0(
#line 881 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 881 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 881 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 881 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 881 "set_bbbtree.m"
{
#line 884 "set_bbbtree.m"
  while (MR_TRUE)
#line 884 "set_bbbtree.m"
    {
#line 884 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 884 "set_bbbtree.m"
      {
#line 884 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 884 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 884 "set_bbbtree.m"
        else
#line 886 "set_bbbtree.m"
          {
#line 886 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 886 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 886 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 887 "set_bbbtree.m"
            {
#line 887 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 888 "set_bbbtree.m"
            {
#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 888 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 888 "set_bbbtree.m"
            }
#line 888 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 888 "set_bbbtree.m"
            {
#line 888 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 888 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 888 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 888 "set_bbbtree.m"
            }
#line 888 "set_bbbtree.m"
            continue;
#line 886 "set_bbbtree.m"
          }
#line 884 "set_bbbtree.m"
      }
#line 884 "set_bbbtree.m"
      break;
#line 884 "set_bbbtree.m"
    }
#line 881 "set_bbbtree.m"
}

#line 770 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__list_to_set_r_3_p_0(
#line 770 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 770 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_4,
#line 770 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_5,
#line 770 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_6)
#line 770 "set_bbbtree.m"
{
#line 773 "set_bbbtree.m"
  {
#line 773 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 773 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__InitSet_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__Ratio_6);
#line 775 "set_bbbtree.m"
      return;
    }
#line 773 "set_bbbtree.m"
  }
#line 770 "set_bbbtree.m"
}

#line 632 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_list_r_4_p_0(
#line 632 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 632 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 632 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 632 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 632 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 632 "set_bbbtree.m"
{
#line 635 "set_bbbtree.m"
  while (MR_TRUE)
#line 635 "set_bbbtree.m"
    {
#line 635 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 635 "set_bbbtree.m"
      {
#line 635 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 635 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 635 "set_bbbtree.m"
        else
#line 636 "set_bbbtree.m"
          {
#line 636 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 636 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 636 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;

#line 637 "set_bbbtree.m"
            {
#line 637 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__X_8, &mercury__set_bbbtree__STATE_VARIABLE_Set_13_13, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 638 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 638 "set_bbbtree.m"
            {
#line 638 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;
#line 638 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Xs_9;

#line 638 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 638 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 638 "set_bbbtree.m"
            }
#line 638 "set_bbbtree.m"
            continue;
#line 636 "set_bbbtree.m"
          }
#line 635 "set_bbbtree.m"
      }
#line 635 "set_bbbtree.m"
      break;
#line 635 "set_bbbtree.m"
    }
#line 632 "set_bbbtree.m"
}

#line 600 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_r_4_p_0(
#line 600 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 600 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 600 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 600 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 600 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 600 "set_bbbtree.m"
{
#line 603 "set_bbbtree.m"
  {
#line 603 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 603 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "set_bbbtree.m"
      {
#line 603 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 603 "set_bbbtree.m"
        {
#line 603 "set_bbbtree.m"
          MR_Word base;
#line 603 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 603 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 603 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 603 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 603 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 603 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 603 "set_bbbtree.m"
        }
#line 603 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = MR_TRUE;
#line 603 "set_bbbtree.m"
      }
#line 603 "set_bbbtree.m"
    else
#line 605 "set_bbbtree.m"
      {
#line 605 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 605 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 605 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 605 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 605 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 606 "set_bbbtree.m"
        {
#line 606 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 612 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 609 "set_bbbtree.m"
          {
#line 609 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 610 "set_bbbtree.m"
            {
#line 610 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 609 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 609 "set_bbbtree.m"
              {
#line 611 "set_bbbtree.m"
                {
#line 611 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 611 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 609 "set_bbbtree.m"
              }
#line 609 "set_bbbtree.m"
          }
#line 612 "set_bbbtree.m"
        else
#line 612 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 2))
#line 614 "set_bbbtree.m"
            {
#line 614 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_19;

#line 615 "set_bbbtree.m"
              {
#line 615 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
#line 614 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 614 "set_bbbtree.m"
                {
#line 616 "set_bbbtree.m"
                  {
#line 616 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
#line 616 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = MR_TRUE;
#line 614 "set_bbbtree.m"
                }
#line 614 "set_bbbtree.m"
            }
#line 612 "set_bbbtree.m"
          else
#line 612 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_FALSE;
#line 605 "set_bbbtree.m"
      }
#line 603 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 603 "set_bbbtree.m"
  }
#line 600 "set_bbbtree.m"
}

#line 571 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_r_4_p_0(
#line 571 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 571 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 571 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 571 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 571 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 571 "set_bbbtree.m"
{
#line 574 "set_bbbtree.m"
  {
#line 574 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 574 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "set_bbbtree.m"
      {
#line 574 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 574 "set_bbbtree.m"
        {
#line 574 "set_bbbtree.m"
          MR_Word base;
#line 574 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 574 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 574 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 574 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 574 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 574 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 574 "set_bbbtree.m"
        }
#line 574 "set_bbbtree.m"
      }
#line 574 "set_bbbtree.m"
    else
#line 576 "set_bbbtree.m"
      {
#line 576 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 576 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 576 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 576 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 576 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 577 "set_bbbtree.m"
        {
#line 577 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 583 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 580 "set_bbbtree.m"
          {
#line 580 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 581 "set_bbbtree.m"
            {
#line 581 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 582 "set_bbbtree.m"
            {
#line 582 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 582 "set_bbbtree.m"
              return;
            }
#line 580 "set_bbbtree.m"
          }
#line 583 "set_bbbtree.m"
        else
#line 583 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 0))
#line 591 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 583 "set_bbbtree.m"
          else
#line 585 "set_bbbtree.m"
            {
#line 585 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_19;

#line 586 "set_bbbtree.m"
              {
#line 586 "set_bbbtree.m"
                mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
#line 587 "set_bbbtree.m"
              {
#line 587 "set_bbbtree.m"
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 587 "set_bbbtree.m"
                return;
              }
#line 585 "set_bbbtree.m"
            }
#line 576 "set_bbbtree.m"
      }
#line 574 "set_bbbtree.m"
  }
#line 571 "set_bbbtree.m"
}

#line 460 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__def_ratio_1_p_0(
#line 460 "set_bbbtree.m"
  MR_Integer * mercury__set_bbbtree__HeadVar__1_1)
#line 460 "set_bbbtree.m"
{
#line 462 "set_bbbtree.m"
  {
#line 462 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 462 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 5;
#line 462 "set_bbbtree.m"
  }
#line 460 "set_bbbtree.m"
}

#line 402 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_4_p_0(
#line 402 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 402 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 402 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_6,
#line 402 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_7,
#line 402 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__FalseSet_8)
#line 402 "set_bbbtree.m"
{
#line 1407 "set_bbbtree.m"
  {
#line 1407 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_9;
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_10;
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__FalseList_11;
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_22;
#line 1407 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_29;

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__Set_6, mercury__set_bbbtree__V_15_15, &mercury__set_bbbtree__List_9);
    }
#line 1409 "set_bbbtree.m"
    {
#line 1409 "set_bbbtree.m"
      mercury__list__filter_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__P_5, mercury__set_bbbtree__List_9, &mercury__set_bbbtree__TrueList_10, &mercury__set_bbbtree__FalseList_11);
    }
#line 469 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_22, mercury__set_bbbtree__TrueList_10, mercury__set_bbbtree__TrueSet_7, (MR_Integer) 5);
    }
#line 469 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_29, mercury__set_bbbtree__FalseList_11, mercury__set_bbbtree__FalseSet_8, (MR_Integer) 5);
#line 775 "set_bbbtree.m"
      return;
    }
#line 1407 "set_bbbtree.m"
  }
#line 402 "set_bbbtree.m"
}

#line 395 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_3_p_0(
#line 395 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 395 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_4,
#line 395 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_5,
#line 395 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_6)
#line 395 "set_bbbtree.m"
{
#line 1402 "set_bbbtree.m"
  {
#line 1402 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1402 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_7;
#line 1402 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_8;
#line 1402 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1402 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_19;

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__V_12_12, &mercury__set_bbbtree__List_7);
    }
#line 1404 "set_bbbtree.m"
    {
#line 1404 "set_bbbtree.m"
      mercury__list__filter_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__P_4, mercury__set_bbbtree__List_7, &mercury__set_bbbtree__TrueList_8);
    }
#line 469 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__InitSet_19, mercury__set_bbbtree__TrueList_8, mercury__set_bbbtree__TrueSet_6, (MR_Integer) 5);
#line 775 "set_bbbtree.m"
      return;
    }
#line 1402 "set_bbbtree.m"
  }
#line 395 "set_bbbtree.m"
}

#line 390 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__filter_map_2_f_0(
#line 390 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 390 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 390 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__PF_4,
#line 390 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 390 "set_bbbtree.m"
{
#line 1395 "set_bbbtree.m"
  {
#line 1395 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1395 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1395 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1395 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1395 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_34;

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 715 "list.opt"
    {
#line 715 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__PF_4, mercury__set_bbbtree__L1_7, &mercury__set_bbbtree__L2_8);
    }
#line 469 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_34, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1395 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1395 "set_bbbtree.m"
  }
#line 390 "set_bbbtree.m"
}

#line 386 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__map_2_f_0(
#line 386 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 386 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 386 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_4,
#line 386 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 386 "set_bbbtree.m"
{
#line 1390 "set_bbbtree.m"
  {
#line 1390 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1390 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_20;

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 1392 "set_bbbtree.m"
    {
#line 1392 "set_bbbtree.m"
      mercury__set_bbbtree__L2_8 = mercury__list__map_2_f_0(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__F_4, mercury__set_bbbtree__L1_7);
    }
#line 469 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_20, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1390 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1390 "set_bbbtree.m"
  }
#line 386 "set_bbbtree.m"
}

#line 383 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__all_true_2_p_0(
#line 383 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 383 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_3,
#line 383 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_4)
#line 383 "set_bbbtree.m"
{
#line 1384 "set_bbbtree.m"
  {
#line 1384 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1384 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_5;
#line 1384 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__S_4, mercury__set_bbbtree__V_9_9, &mercury__set_bbbtree__L_5);
    }
#line 1386 "set_bbbtree.m"
    {
#line 1386 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__all_true_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__P_3, mercury__set_bbbtree__L_5);
    }
#line 1384 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1384 "set_bbbtree.m"
  }
#line 383 "set_bbbtree.m"
}

#line 376 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_5(
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
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_7(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 376 "set_bbbtree.m"
}

#line 373 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_4(
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
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_6(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 373 "set_bbbtree.m"
}

#line 370 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_3(
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
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_5(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1379 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
  }
#line 370 "set_bbbtree.m"
}

#line 367 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_2(
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
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl6_14_p_2(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 367 "set_bbbtree.m"
}

#line 364 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_1(
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 364 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 364 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 364 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 364 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl6_14_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 364 "set_bbbtree.m"
}

#line 361 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_0(
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 361 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 361 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 361 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 361 "set_bbbtree.m"
{
#line 1379 "set_bbbtree.m"
  {
#line 1379 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1379 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1380 "set_bbbtree.m"
    {
#line 1380 "set_bbbtree.m"
      mercury__list__foldl6_14_p_0(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1380 "set_bbbtree.m"
      return;
    }
#line 1379 "set_bbbtree.m"
  }
#line 361 "set_bbbtree.m"
}

#line 354 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_5(
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
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_5(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 354 "set_bbbtree.m"
}

#line 351 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_4(
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
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_4(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 351 "set_bbbtree.m"
}

#line 348 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_3(
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
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_3(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1376 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
  }
#line 348 "set_bbbtree.m"
}

#line 345 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_2(
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
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl5_12_p_2(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 345 "set_bbbtree.m"
}

#line 342 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_1(
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 342 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 342 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 342 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 342 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 342 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 342 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 342 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 342 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 342 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 342 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 342 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 342 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl5_12_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 342 "set_bbbtree.m"
}

#line 339 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_0(
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 339 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 339 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 339 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 339 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 339 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 339 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 339 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 339 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 339 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 339 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 339 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 339 "set_bbbtree.m"
{
#line 1376 "set_bbbtree.m"
  {
#line 1376 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1376 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1377 "set_bbbtree.m"
    {
#line 1377 "set_bbbtree.m"
      mercury__list__foldl5_12_p_0(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1377 "set_bbbtree.m"
      return;
    }
#line 1376 "set_bbbtree.m"
  }
#line 339 "set_bbbtree.m"
}

#line 332 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_5(
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
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_7(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 332 "set_bbbtree.m"
}

#line 329 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_4(
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
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_6(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 329 "set_bbbtree.m"
}

#line 326 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_3(
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
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_5(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1373 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
  }
#line 326 "set_bbbtree.m"
}

#line 323 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_2(
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
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl4_10_p_2(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 323 "set_bbbtree.m"
}

#line 320 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_1(
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 320 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 320 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 320 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 320 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 320 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 320 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 320 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 320 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 320 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 320 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl4_10_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 320 "set_bbbtree.m"
}

#line 317 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_0(
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 317 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 317 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 317 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 317 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 317 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 317 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 317 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 317 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 317 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 317 "set_bbbtree.m"
{
#line 1373 "set_bbbtree.m"
  {
#line 1373 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1373 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1374 "set_bbbtree.m"
    {
#line 1374 "set_bbbtree.m"
      mercury__list__foldl4_10_p_0(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1374 "set_bbbtree.m"
      return;
    }
#line 1373 "set_bbbtree.m"
  }
#line 317 "set_bbbtree.m"
}

#line 312 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_5(
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
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_5(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 312 "set_bbbtree.m"
}

#line 310 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_4(
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
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_4(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 310 "set_bbbtree.m"
}

#line 308 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_3(
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
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_3(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1370 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
  }
#line 308 "set_bbbtree.m"
}

#line 306 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_2(
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 306 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 306 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 306 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 306 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 306 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 306 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 306 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 306 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl3_8_p_2(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 306 "set_bbbtree.m"
}

#line 304 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_1(
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 304 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 304 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 304 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 304 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 304 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 304 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 304 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 304 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl3_8_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 304 "set_bbbtree.m"
}

#line 302 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_0(
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_9,
#line 302 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_10,
#line 302 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
#line 302 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
#line 302 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
#line 302 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
#line 302 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
#line 302 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
#line 302 "set_bbbtree.m"
{
#line 1370 "set_bbbtree.m"
  {
#line 1370 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1370 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1371 "set_bbbtree.m"
    {
#line 1371 "set_bbbtree.m"
      mercury__list__foldl3_8_p_0(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1371 "set_bbbtree.m"
      return;
    }
#line 1370 "set_bbbtree.m"
  }
#line 302 "set_bbbtree.m"
}

#line 297 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_5(
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
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_6(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1367 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
  }
#line 297 "set_bbbtree.m"
}

#line 295 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_4(
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
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_5(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1367 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
  }
#line 295 "set_bbbtree.m"
}

#line 293 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_3(
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
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_4(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1367 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
  }
#line 293 "set_bbbtree.m"
}

#line 291 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_2(
#line 291 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 291 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 291 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 291 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 291 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 291 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 291 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 291 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 291 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 291 "set_bbbtree.m"
{
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      mercury__list__foldl2_6_p_2(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1368 "set_bbbtree.m"
      return;
    }
#line 1367 "set_bbbtree.m"
  }
#line 291 "set_bbbtree.m"
}

#line 289 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_1(
#line 289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 289 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 289 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 289 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 289 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 289 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 289 "set_bbbtree.m"
{
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      mercury__list__foldl2_6_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1368 "set_bbbtree.m"
      return;
    }
#line 1367 "set_bbbtree.m"
  }
#line 289 "set_bbbtree.m"
}

#line 287 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_0(
#line 287 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
#line 287 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
#line 287 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
#line 287 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_7,
#line 287 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_8,
#line 287 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
#line 287 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
#line 287 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
#line 287 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
#line 287 "set_bbbtree.m"
{
#line 1367 "set_bbbtree.m"
  {
#line 1367 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1367 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1368 "set_bbbtree.m"
    {
#line 1368 "set_bbbtree.m"
      mercury__list__foldl2_6_p_0(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1368 "set_bbbtree.m"
      return;
    }
#line 1367 "set_bbbtree.m"
  }
#line 287 "set_bbbtree.m"
}

#line 283 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_5(
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
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_5(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1364 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
  }
#line 283 "set_bbbtree.m"
}

#line 282 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_4(
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
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_4(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1364 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
  }
#line 282 "set_bbbtree.m"
}

#line 281 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_3(
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
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_3(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1364 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
  }
#line 281 "set_bbbtree.m"
}

#line 280 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_2(
#line 280 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 280 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 280 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 280 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 280 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 280 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 280 "set_bbbtree.m"
{
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      mercury__list__foldl_4_p_2(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1365 "set_bbbtree.m"
      return;
    }
#line 1364 "set_bbbtree.m"
  }
#line 280 "set_bbbtree.m"
}

#line 279 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_1(
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 279 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 279 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 279 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 279 "set_bbbtree.m"
{
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      mercury__list__foldl_4_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1365 "set_bbbtree.m"
      return;
    }
#line 1364 "set_bbbtree.m"
  }
#line 279 "set_bbbtree.m"
}

#line 278 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_0(
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 278 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 278 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 278 "set_bbbtree.m"
{
#line 1364 "set_bbbtree.m"
  {
#line 1364 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1364 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1365 "set_bbbtree.m"
    {
#line 1365 "set_bbbtree.m"
      mercury__list__foldl_4_p_0(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1365 "set_bbbtree.m"
      return;
    }
#line 1364 "set_bbbtree.m"
  }
#line 278 "set_bbbtree.m"
}

#line 276 "set_bbbtree.m"
MR_Box MR_CALL 
mercury__set_bbbtree__fold_3_f_0(
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_10,
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_11,
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_5,
#line 276 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 276 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__A_7)
#line 276 "set_bbbtree.m"
{
#line 1361 "set_bbbtree.m"
  {
#line 1361 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1361 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__B_8;
#line 1361 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9;
#line 1361 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_10, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_16_16, &mercury__set_bbbtree__V_9_9);
    }
#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_bbbtree__F_5, mercury__set_bbbtree__V_9_9, mercury__set_bbbtree__A_7, &mercury__set_bbbtree__B_8);
    }
#line 1361 "set_bbbtree.m"
    return mercury__set_bbbtree__B_8;
#line 1361 "set_bbbtree.m"
  }
#line 276 "set_bbbtree.m"
}

#line 274 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__superset_2_p_0(
#line 274 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 274 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 274 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 274 "set_bbbtree.m"
{
#line 1067 "set_bbbtree.m"
  {
#line 1067 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1067 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;

#line 1048 "set_bbbtree.m"
    {
#line 1048 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 473 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1067 "set_bbbtree.m"
  }
#line 274 "set_bbbtree.m"
}

#line 269 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__subset_2_p_0(
#line 269 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 269 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 269 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 269 "set_bbbtree.m"
{
#line 1067 "set_bbbtree.m"
  {
#line 1067 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1067 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_5;

#line 1048 "set_bbbtree.m"
    {
#line 1048 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_5, (MR_Integer) 5);
    }
#line 473 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1067 "set_bbbtree.m"
  }
#line 269 "set_bbbtree.m"
}

#line 264 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__difference_2_f_0(
#line 264 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 264 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 264 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 264 "set_bbbtree.m"
{
#line 1046 "set_bbbtree.m"
  {
#line 1046 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1046 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 1048 "set_bbbtree.m"
    {
#line 1048 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 1046 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 1046 "set_bbbtree.m"
  }
#line 264 "set_bbbtree.m"
}

#line 261 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_3_p_0(
#line 261 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 261 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 261 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 261 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 261 "set_bbbtree.m"
{
#line 1046 "set_bbbtree.m"
  {
#line 1046 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1048 "set_bbbtree.m"
    {
#line 1048 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 1048 "set_bbbtree.m"
      return;
    }
#line 1046 "set_bbbtree.m"
  }
#line 261 "set_bbbtree.m"
}

#line 255 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_1_f_0(
#line 255 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 255 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 255 "set_bbbtree.m"
{
#line 1021 "set_bbbtree.m"
  {
#line 1021 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1021 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;

#line 1021 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "set_bbbtree.m"
      mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1021 "set_bbbtree.m"
    else
#line 1023 "set_bbbtree.m"
      {
#line 1023 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Set_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1023 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1023 "set_bbbtree.m"
        {
#line 1023 "set_bbbtree.m"
          return mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__intersect_list_r_3_f_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Sets_4, (MR_Integer) 5);
        }
#line 1023 "set_bbbtree.m"
      }
#line 1021 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 1021 "set_bbbtree.m"
  }
#line 255 "set_bbbtree.m"
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
#line 995 "set_bbbtree.m"
  {
#line 995 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 995 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 1002 "set_bbbtree.m"
    if ((mercury__set_bbbtree__SS_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "set_bbbtree.m"
    else
#line 1003 "set_bbbtree.m"
      {
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 0)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 2)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 3)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_16;
#line 1003 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 1)));

#line 1004 "set_bbbtree.m"
        {
#line 1004 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__L_12, mercury__set_bbbtree__V_10, &mercury__set_bbbtree__Intersection0_16, (MR_Integer) 5);
        }
#line 1005 "set_bbbtree.m"
        {
#line 1005 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__R_13, mercury__set_bbbtree__Intersection0_16, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
        }
#line 1003 "set_bbbtree.m"
      }
#line 995 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 995 "set_bbbtree.m"
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
#line 995 "set_bbbtree.m"
  {
#line 995 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1002 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "set_bbbtree.m"
    else
#line 1003 "set_bbbtree.m"
      {
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 0)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 2)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 3)));
#line 1003 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_14;
#line 1003 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 1)));

#line 1004 "set_bbbtree.m"
        {
#line 1004 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__L_10, mercury__set_bbbtree__V_8, &mercury__set_bbbtree__Intersection0_14, (MR_Integer) 5);
        }
#line 1005 "set_bbbtree.m"
        {
#line 1005 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__R_11, mercury__set_bbbtree__Intersection0_14, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 1005 "set_bbbtree.m"
          return;
        }
#line 1003 "set_bbbtree.m"
      }
#line 995 "set_bbbtree.m"
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
#line 964 "set_bbbtree.m"
  {
#line 964 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 964 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 966 "set_bbbtree.m"
    {
#line 966 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 964 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 964 "set_bbbtree.m"
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
#line 964 "set_bbbtree.m"
  {
#line 964 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 966 "set_bbbtree.m"
    {
#line 966 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 966 "set_bbbtree.m"
      return;
    }
#line 964 "set_bbbtree.m"
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
#line 938 "set_bbbtree.m"
  {
#line 938 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 938 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 940 "set_bbbtree.m"
    {
#line 940 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SS_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 938 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 938 "set_bbbtree.m"
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
#line 938 "set_bbbtree.m"
  {
#line 938 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 940 "set_bbbtree.m"
    {
#line 940 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Sets_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 940 "set_bbbtree.m"
      return;
    }
#line 938 "set_bbbtree.m"
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
#line 920 "set_bbbtree.m"
  {
#line 920 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 920 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;
#line 920 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__ListofSets_3, mercury__set_bbbtree__V_5_5, &mercury__set_bbbtree__HeadVar__2_2);
    }
#line 920 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 920 "set_bbbtree.m"
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
#line 899 "set_bbbtree.m"
  {
#line 899 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 899 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 901 "set_bbbtree.m"
    {
#line 901 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 899 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 899 "set_bbbtree.m"
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
#line 899 "set_bbbtree.m"
  {
#line 899 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 901 "set_bbbtree.m"
    {
#line 901 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 901 "set_bbbtree.m"
      return;
    }
#line 899 "set_bbbtree.m"
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
#line 877 "set_bbbtree.m"
  {
#line 877 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 877 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Xs_4;
#line 877 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__S_3, mercury__set_bbbtree__V_8_8, &mercury__set_bbbtree__Xs_4);
    }
#line 877 "set_bbbtree.m"
    return mercury__set_bbbtree__Xs_4;
#line 877 "set_bbbtree.m"
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
#line 877 "set_bbbtree.m"
  {
#line 877 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 877 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 878 "set_bbbtree.m"
      return;
    }
#line 877 "set_bbbtree.m"
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
#line 877 "set_bbbtree.m"
  {
#line 877 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 877 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 878 "set_bbbtree.m"
    {
#line 878 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 878 "set_bbbtree.m"
      return;
    }
#line 877 "set_bbbtree.m"
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
#line 804 "set_bbbtree.m"
  {
#line 804 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 804 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "set_bbbtree.m"
    else
#line 805 "set_bbbtree.m"
      {
#line 805 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_9;

#line 806 "set_bbbtree.m"
        {
#line 806 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, &mercury__set_bbbtree__RestOfList_9, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 810 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 809 "set_bbbtree.m"
          {
#line 809 "set_bbbtree.m"
          }
#line 810 "set_bbbtree.m"
        else
#line 811 "set_bbbtree.m"
          {
#line 813 "set_bbbtree.m"
            {
#line 813 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 813 "set_bbbtree.m"
              return;
            }
#line 811 "set_bbbtree.m"
          }
#line 805 "set_bbbtree.m"
      }
#line 804 "set_bbbtree.m"
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
#line 867 "set_bbbtree.m"
  {
#line 867 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 867 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;

#line 867 "set_bbbtree.m"
    {
#line 867 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4);
    }
#line 867 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 867 "set_bbbtree.m"
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
#line 798 "set_bbbtree.m"
  {
#line 798 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 798 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 798 "set_bbbtree.m"
    {
#line 798 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4);
    }
#line 798 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 798 "set_bbbtree.m"
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
#line 800 "set_bbbtree.m"
  {
#line 800 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 800 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_5;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__List_3, (MR_Integer) 0, &mercury__set_bbbtree__N_5);
    }
#line 804 "set_bbbtree.m"
    if ((mercury__set_bbbtree__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "set_bbbtree.m"
    else
#line 805 "set_bbbtree.m"
      {
#line 805 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_15;

#line 806 "set_bbbtree.m"
        {
#line 806 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_3, &mercury__set_bbbtree__RestOfList_15, mercury__set_bbbtree__N_5, mercury__set_bbbtree__Set_4);
        }
#line 810 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 809 "set_bbbtree.m"
          {
#line 809 "set_bbbtree.m"
          }
#line 810 "set_bbbtree.m"
        else
#line 811 "set_bbbtree.m"
          {
#line 813 "set_bbbtree.m"
            {
#line 813 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 813 "set_bbbtree.m"
              return;
            }
#line 811 "set_bbbtree.m"
          }
#line 805 "set_bbbtree.m"
      }
#line 800 "set_bbbtree.m"
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
#line 766 "set_bbbtree.m"
  {
#line 766 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 766 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;
#line 766 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
#line 766 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 766 "set_bbbtree.m"
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
#line 766 "set_bbbtree.m"
  {
#line 766 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 766 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 766 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 766 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 766 "set_bbbtree.m"
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
#line 766 "set_bbbtree.m"
  {
#line 766 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 766 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 775 "set_bbbtree.m"
    {
#line 775 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__InitSet_10, mercury__set_bbbtree__List_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 775 "set_bbbtree.m"
      return;
    }
#line 766 "set_bbbtree.m"
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
#line 747 "set_bbbtree.m"
  {
#line 747 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 747 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 747 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 747 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 747 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 747 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 747 "set_bbbtree.m"
      {
#line 747 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 747 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 747 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 747 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 753 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "set_bbbtree.m"
          {
#line 751 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 752 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 750 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 750 "set_bbbtree.m"
          }
#line 753 "set_bbbtree.m"
        else
#line 755 "set_bbbtree.m"
          {
#line 755 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_14;
#line 755 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 755 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 756 "set_bbbtree.m"
            {
#line 756 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_14);
            }
#line 755 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 755 "set_bbbtree.m"
              {
#line 757 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 757 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 758 "set_bbbtree.m"
                {
#line 758 "set_bbbtree.m"
                  MR_Word base;
#line 758 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 758 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 758 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 758 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 758 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 758 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_14));
#line 758 "set_bbbtree.m"
                }
#line 758 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 755 "set_bbbtree.m"
              }
#line 755 "set_bbbtree.m"
          }
#line 747 "set_bbbtree.m"
      }
#line 747 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 747 "set_bbbtree.m"
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
#line 727 "set_bbbtree.m"
  {
#line 727 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 727 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 727 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 727 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 727 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 727 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 727 "set_bbbtree.m"
      {
#line 727 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 727 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 727 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 733 "set_bbbtree.m"
        if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "set_bbbtree.m"
          {
#line 731 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 732 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 730 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 730 "set_bbbtree.m"
          }
#line 733 "set_bbbtree.m"
        else
#line 735 "set_bbbtree.m"
          {
#line 735 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_14;
#line 735 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 735 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 736 "set_bbbtree.m"
            {
#line 736 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_14);
            }
#line 735 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 735 "set_bbbtree.m"
              {
#line 737 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 737 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 738 "set_bbbtree.m"
                {
#line 738 "set_bbbtree.m"
                  MR_Word base;
#line 738 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 738 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 738 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 738 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 738 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_14));
#line 738 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 738 "set_bbbtree.m"
                }
#line 738 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 735 "set_bbbtree.m"
              }
#line 735 "set_bbbtree.m"
          }
#line 727 "set_bbbtree.m"
      }
#line 727 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 727 "set_bbbtree.m"
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
#line 716 "set_bbbtree.m"
  while (MR_TRUE)
#line 716 "set_bbbtree.m"
    {
#line 716 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 716 "set_bbbtree.m"
      {
#line 716 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 716 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "set_bbbtree.m"
          {
#line 716 "set_bbbtree.m"
            *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 716 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 716 "set_bbbtree.m"
          }
#line 716 "set_bbbtree.m"
        else
#line 717 "set_bbbtree.m"
          {
#line 717 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 717 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 718 "set_bbbtree.m"
            {
#line 718 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__STATE_VARIABLE_Set_12_12);
            }
#line 717 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 719 "set_bbbtree.m"
              {
#line 719 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 719 "set_bbbtree.m"
                {
#line 719 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 719 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 719 "set_bbbtree.m"
                  mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 719 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 719 "set_bbbtree.m"
                }
#line 719 "set_bbbtree.m"
                continue;
#line 719 "set_bbbtree.m"
              }
#line 717 "set_bbbtree.m"
          }
#line 716 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 716 "set_bbbtree.m"
      }
#line 716 "set_bbbtree.m"
      break;
#line 716 "set_bbbtree.m"
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
#line 694 "set_bbbtree.m"
  {
#line 694 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 694 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 694 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 694 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 694 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;
#line 694 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Result_10;

#line 694 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 694 "set_bbbtree.m"
      {
#line 694 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 694 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 694 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 694 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 695 "set_bbbtree.m"
        {
#line 695 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__Result_10, mercury__set_bbbtree__X_4, mercury__set_bbbtree__V_5);
        }
#line 702 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 1))
#line 698 "set_bbbtree.m"
          {
#line 698 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_11;
#line 698 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_12;
#line 698 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_15_15;

#line 699 "set_bbbtree.m"
            {
#line 699 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_11);
            }
#line 698 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 698 "set_bbbtree.m"
              {
#line 700 "set_bbbtree.m"
                mercury__set_bbbtree__V_15_15 = (MR_Integer) 1;
#line 700 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_12 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_15_15);
#line 701 "set_bbbtree.m"
                {
#line 701 "set_bbbtree.m"
                  MR_Word base;
#line 701 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 701 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 701 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 701 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_12));
#line 701 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_11));
#line 701 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 701 "set_bbbtree.m"
                }
#line 701 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 698 "set_bbbtree.m"
              }
#line 698 "set_bbbtree.m"
          }
#line 702 "set_bbbtree.m"
        else
#line 702 "set_bbbtree.m"
          if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 0))
#line 1243 "set_bbbtree.m"
            {
#line 1243 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__LSize_21;

#line 484 "set_bbbtree.m"
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_21 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
              else
#line 485 "set_bbbtree.m"
                {
#line 485 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_29 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_31;
#line 485 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_32;

#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree__LSize_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___L_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                  mercury__set_bbbtree___R_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                }
#line 1245 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 == (MR_Integer) 0);
#line 1248 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 1247 "set_bbbtree.m"
                *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 1248 "set_bbbtree.m"
              else
#line 1249 "set_bbbtree.m"
                {
#line 1249 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__RSize_22;

#line 484 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_22 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
                  else
#line 485 "set_bbbtree.m"
                    {
#line 485 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_33 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_35;
#line 485 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_36;

#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree__RSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___L_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
                      mercury__set_bbbtree___R_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
                    }
#line 1250 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_22 == (MR_Integer) 0);
#line 1253 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 1252 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 1253 "set_bbbtree.m"
                  else
#line 1266 "set_bbbtree.m"
                    {
#line 1260 "set_bbbtree.m"
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 > mercury__set_bbbtree__RSize_22);
#line 1266 "set_bbbtree.m"
                      if (mercury__set_bbbtree__succeeded)
#line 1263 "set_bbbtree.m"
                        {
#line 1263 "set_bbbtree.m"
                          MR_Box mercury__set_bbbtree__X_23;
#line 1263 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__NewL_24;

#line 1261 "set_bbbtree.m"
                          {
#line 1261 "set_bbbtree.m"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_23, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_24);
                          }
#line 1263 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 1262 "set_bbbtree.m"
                            {
#line 1262 "set_bbbtree.m"
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_23, mercury__set_bbbtree__NewL_24, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                            }
#line 1263 "set_bbbtree.m"
                          else
#line 1264 "set_bbbtree.m"
                            {
#line 1264 "set_bbbtree.m"
                              {
#line 1264 "set_bbbtree.m"
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                              }
#line 1264 "set_bbbtree.m"
                            }
#line 1263 "set_bbbtree.m"
                        }
#line 1266 "set_bbbtree.m"
                      else
#line 1269 "set_bbbtree.m"
                        {
#line 1269 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__NewR_25;
#line 1269 "set_bbbtree.m"
                          MR_Box mercury__set_bbbtree__X_28;

#line 1267 "set_bbbtree.m"
                          {
#line 1267 "set_bbbtree.m"
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_28, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_25);
                          }
#line 1269 "set_bbbtree.m"
                          if (mercury__set_bbbtree__succeeded)
#line 1268 "set_bbbtree.m"
                            {
#line 1268 "set_bbbtree.m"
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_28, mercury__set_bbbtree__L_7, mercury__set_bbbtree__NewR_25, mercury__set_bbbtree__Set_9);
                            }
#line 1269 "set_bbbtree.m"
                          else
#line 1270 "set_bbbtree.m"
                            {
#line 1270 "set_bbbtree.m"
                              {
#line 1270 "set_bbbtree.m"
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                              }
#line 1270 "set_bbbtree.m"
                            }
#line 1269 "set_bbbtree.m"
                        }
#line 1266 "set_bbbtree.m"
                    }
#line 1249 "set_bbbtree.m"
                }
#line 1243 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = MR_TRUE;
#line 1243 "set_bbbtree.m"
            }
#line 702 "set_bbbtree.m"
          else
#line 704 "set_bbbtree.m"
            {
#line 704 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__NewR_13;
#line 704 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__V_14_14;
#line 704 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__NewN_16;

#line 705 "set_bbbtree.m"
              {
#line 705 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_13);
              }
#line 704 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 704 "set_bbbtree.m"
                {
#line 706 "set_bbbtree.m"
                  mercury__set_bbbtree__V_14_14 = (MR_Integer) 1;
#line 706 "set_bbbtree.m"
                  mercury__set_bbbtree__NewN_16 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_14_14);
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
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_16));
#line 707 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 707 "set_bbbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_13));
#line 707 "set_bbbtree.m"
                  }
#line 707 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = MR_TRUE;
#line 704 "set_bbbtree.m"
                }
#line 704 "set_bbbtree.m"
            }
#line 694 "set_bbbtree.m"
      }
#line 694 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 694 "set_bbbtree.m"
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
#line 684 "set_bbbtree.m"
  {
#line 684 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 684 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 684 "set_bbbtree.m"
    {
#line 684 "set_bbbtree.m"
      mercury__set_bbbtree__delete_list_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Xs_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__STATE_VARIABLE_S_7);
    }
#line 684 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 684 "set_bbbtree.m"
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
#line 686 "set_bbbtree.m"
  while (MR_TRUE)
#line 686 "set_bbbtree.m"
    {
#line 686 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 686 "set_bbbtree.m"
      {
#line 686 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 686 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "set_bbbtree.m"
          *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 686 "set_bbbtree.m"
        else
#line 687 "set_bbbtree.m"
          {
#line 687 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 687 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;
#line 687 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 676 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewSet_19;

#line 674 "set_bbbtree.m"
            {
#line 674 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__NewSet_19);
            }
#line 676 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 675 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__NewSet_19;
#line 676 "set_bbbtree.m"
            else
#line 675 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 679 "set_bbbtree.m"
            mercury__set_bbbtree__STATE_VARIABLE_Set_12_12 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 689 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 689 "set_bbbtree.m"
            {
#line 689 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 689 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 689 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 689 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 689 "set_bbbtree.m"
            }
#line 689 "set_bbbtree.m"
            continue;
#line 687 "set_bbbtree.m"
          }
#line 686 "set_bbbtree.m"
      }
#line 686 "set_bbbtree.m"
      break;
#line 686 "set_bbbtree.m"
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
#line 673 "set_bbbtree.m"
  {
#line 673 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 673 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 673 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 676 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_14;

#line 674 "set_bbbtree.m"
    {
#line 674 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__T_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__NewSet_14);
    }
#line 676 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__NewSet_14;
#line 676 "set_bbbtree.m"
    else
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__STATE_VARIABLE_S_0_6;
#line 679 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 673 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 673 "set_bbbtree.m"
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
#line 673 "set_bbbtree.m"
  {
#line 673 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 673 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 676 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 674 "set_bbbtree.m"
    {
#line 674 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 676 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 676 "set_bbbtree.m"
    else
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 679 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 673 "set_bbbtree.m"
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
#line 673 "set_bbbtree.m"
  {
#line 673 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 673 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 676 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 674 "set_bbbtree.m"
    {
#line 674 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 676 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 676 "set_bbbtree.m"
    else
#line 675 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 679 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 673 "set_bbbtree.m"
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
#line 628 "set_bbbtree.m"
  {
#line 628 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 628 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 630 "set_bbbtree.m"
    {
#line 630 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__Xs_5, &mercury__set_bbbtree__STATE_VARIABLE_S_7, (MR_Integer) 5);
    }
#line 628 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 628 "set_bbbtree.m"
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
#line 628 "set_bbbtree.m"
  {
#line 628 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 630 "set_bbbtree.m"
    {
#line 630 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
#line 630 "set_bbbtree.m"
      return;
    }
#line 628 "set_bbbtree.m"
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
#line 594 "set_bbbtree.m"
  {
#line 594 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 598 "set_bbbtree.m"
    {
#line 598 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
    }
#line 594 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 594 "set_bbbtree.m"
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
#line 563 "set_bbbtree.m"
  {
#line 563 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 563 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 563 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;

#line 567 "set_bbbtree.m"
    {
#line 567 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__T_5, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_15, (MR_Integer) 5);
    }
#line 569 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 563 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 563 "set_bbbtree.m"
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
#line 563 "set_bbbtree.m"
  {
#line 563 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 563 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 567 "set_bbbtree.m"
    {
#line 567 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 569 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 563 "set_bbbtree.m"
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
#line 563 "set_bbbtree.m"
  {
#line 563 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 563 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 567 "set_bbbtree.m"
    {
#line 567 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 569 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 563 "set_bbbtree.m"
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
#line 554 "set_bbbtree.m"
  {
#line 554 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;
#line 554 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_15;
#line 554 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Ratio_19;

#line 1048 "set_bbbtree.m"
    {
#line 1048 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 473 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 554 "set_bbbtree.m"
      {
#line 462 "set_bbbtree.m"
        mercury__set_bbbtree__Ratio_19 = (MR_Integer) 5;
#line 1048 "set_bbbtree.m"
        {
#line 1048 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_15, mercury__set_bbbtree__Ratio_19);
        }
#line 473 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "set_bbbtree.m"
      }
#line 554 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 554 "set_bbbtree.m"
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
#line 550 "set_bbbtree.m"
  {
#line 550 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 550 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;

#line 550 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 550 "set_bbbtree.m"
      {
#line 550 "set_bbbtree.m"
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 550 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 550 "set_bbbtree.m"
          {
#line 550 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 550 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "set_bbbtree.m"
          }
#line 550 "set_bbbtree.m"
      }
#line 550 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 550 "set_bbbtree.m"
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
#line 548 "set_bbbtree.m"
  {
#line 548 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 548 "set_bbbtree.m"
    {
#line 548 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 0) = mercury__set_bbbtree__T_3;
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 1) = ((MR_Box) ((MR_Integer) 1));
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 548 "set_bbbtree.m"
    }
#line 548 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 548 "set_bbbtree.m"
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
#line 548 "set_bbbtree.m"
  {
#line 548 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 548 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;

#line 548 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
      {
#line 548 "set_bbbtree.m"
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 548 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
          {
#line 548 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "set_bbbtree.m"
          }
#line 548 "set_bbbtree.m"
      }
#line 548 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 548 "set_bbbtree.m"
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
#line 548 "set_bbbtree.m"
  {
#line 548 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 548 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;
#line 548 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_8_8;

#line 548 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
      {
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 548 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 548 "set_bbbtree.m"
        {
#line 548 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__V_3, mercury__set_bbbtree__V_8_8);
        }
#line 548 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
          {
#line 548 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 548 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
              {
#line 548 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 548 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "set_bbbtree.m"
              }
#line 548 "set_bbbtree.m"
          }
#line 548 "set_bbbtree.m"
      }
#line 548 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 548 "set_bbbtree.m"
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
#line 548 "set_bbbtree.m"
  {
#line 548 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 548 "set_bbbtree.m"
    {
#line 548 "set_bbbtree.m"
      MR_Word base;
#line 548 "set_bbbtree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 548 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = base;
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_3;
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_5_5));
#line 548 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_6_6));
#line 548 "set_bbbtree.m"
    }
#line 548 "set_bbbtree.m"
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
#line 532 "set_bbbtree.m"
  while (MR_TRUE)
#line 532 "set_bbbtree.m"
    {
#line 532 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 532 "set_bbbtree.m"
      {
#line 532 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 532 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 532 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 532 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 532 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 532 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 532 "set_bbbtree.m"
          {
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 537 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "set_bbbtree.m"
              {
#line 536 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 537 "set_bbbtree.m"
            else
#line 540 "set_bbbtree.m"
              {
#line 540 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 540 "set_bbbtree.m"
                {
#line 540 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 540 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 540 "set_bbbtree.m"
                }
#line 540 "set_bbbtree.m"
                continue;
#line 540 "set_bbbtree.m"
              }
#line 532 "set_bbbtree.m"
          }
#line 532 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 532 "set_bbbtree.m"
      }
#line 532 "set_bbbtree.m"
      break;
#line 532 "set_bbbtree.m"
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
#line 532 "set_bbbtree.m"
  while (MR_TRUE)
#line 532 "set_bbbtree.m"
    {
#line 532 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 532 "set_bbbtree.m"
      {
#line 532 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 532 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 532 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 532 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 532 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 532 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 532 "set_bbbtree.m"
          {
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 532 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 537 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "set_bbbtree.m"
              {
#line 536 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 536 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 536 "set_bbbtree.m"
              }
#line 537 "set_bbbtree.m"
            else
#line 540 "set_bbbtree.m"
              {
#line 540 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 540 "set_bbbtree.m"
                {
#line 540 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 540 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 540 "set_bbbtree.m"
                }
#line 540 "set_bbbtree.m"
                continue;
#line 540 "set_bbbtree.m"
              }
#line 532 "set_bbbtree.m"
          }
#line 532 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 532 "set_bbbtree.m"
      }
#line 532 "set_bbbtree.m"
      break;
#line 532 "set_bbbtree.m"
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
#line 518 "set_bbbtree.m"
  while (MR_TRUE)
#line 518 "set_bbbtree.m"
    {
#line 518 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 518 "set_bbbtree.m"
      {
#line 518 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 518 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 518 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 518 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 518 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 518 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 518 "set_bbbtree.m"
          {
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 523 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "set_bbbtree.m"
              {
#line 522 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 523 "set_bbbtree.m"
            else
#line 526 "set_bbbtree.m"
              {
#line 526 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 526 "set_bbbtree.m"
                {
#line 526 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 526 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 526 "set_bbbtree.m"
                }
#line 526 "set_bbbtree.m"
                continue;
#line 526 "set_bbbtree.m"
              }
#line 518 "set_bbbtree.m"
          }
#line 518 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 518 "set_bbbtree.m"
      }
#line 518 "set_bbbtree.m"
      break;
#line 518 "set_bbbtree.m"
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
#line 518 "set_bbbtree.m"
  while (MR_TRUE)
#line 518 "set_bbbtree.m"
    {
#line 518 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 518 "set_bbbtree.m"
      {
#line 518 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 518 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 518 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 518 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 518 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 518 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 518 "set_bbbtree.m"
          {
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 518 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 523 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "set_bbbtree.m"
              {
#line 522 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 522 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 522 "set_bbbtree.m"
              }
#line 523 "set_bbbtree.m"
            else
#line 526 "set_bbbtree.m"
              {
#line 526 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 526 "set_bbbtree.m"
                {
#line 526 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 526 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 526 "set_bbbtree.m"
                }
#line 526 "set_bbbtree.m"
                continue;
#line 526 "set_bbbtree.m"
              }
#line 518 "set_bbbtree.m"
          }
#line 518 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 518 "set_bbbtree.m"
      }
#line 518 "set_bbbtree.m"
      break;
#line 518 "set_bbbtree.m"
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
#line 504 "set_bbbtree.m"
  {
#line 504 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 504 "set_bbbtree.m"
    {
#line 504 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_3);
    }
#line 504 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 504 "set_bbbtree.m"
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
#line 511 "set_bbbtree.m"
  {
#line 511 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 509 "set_bbbtree.m"
    {
#line 509 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_5);
    }
#line 511 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 510 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 1;
#line 511 "set_bbbtree.m"
    else
#line 512 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 0;
#line 511 "set_bbbtree.m"
  }
#line 59 "set_bbbtree.m"
}

#line 490 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 490 "set_bbbtree.m"
  void * mercury__set_bbbtree__env_ptr_arg)
#line 490 "set_bbbtree.m"
{
#line 490 "set_bbbtree.m"
  {
#line 490 "set_bbbtree.m"
    struct mercury__set_bbbtree__member_2_p_1_env_0_s * mercury__set_bbbtree__env_ptr = (struct mercury__set_bbbtree__member_2_p_1_env_0_s *) mercury__set_bbbtree__env_ptr_arg;

#line 491 "set_bbbtree.m"
    {
#line 491 "set_bbbtree.m"
      mercury__builtin__compare_3_p_0((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, &(mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10, *((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__X_3), (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_4);
    }
#line 491 "set_bbbtree.m"
    (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Result_8 == (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10);
#line 491 "set_bbbtree.m"
    if ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 491 "set_bbbtree.m"
      {
#line 491 "set_bbbtree.m"
        ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont)((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr);
#line 491 "set_bbbtree.m"
        return;
      }
#line 490 "set_bbbtree.m"
  }
#line 490 "set_bbbtree.m"
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
#line 490 "set_bbbtree.m"
    {
#line 490 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__L_6;
#line 490 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__R_7;
#line 490 "set_bbbtree.m"
      MR_Integer mercury__set_bbbtree___N_5;

#line 490 "set_bbbtree.m"
      (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 490 "set_bbbtree.m"
      if ((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 490 "set_bbbtree.m"
        {
#line 490 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 490 "set_bbbtree.m"
          mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 490 "set_bbbtree.m"
          mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 490 "set_bbbtree.m"
          mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 493 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 1;
#line 494 "set_bbbtree.m"
          {
#line 494 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__L_6, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 496 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 2;
#line 497 "set_bbbtree.m"
          {
#line 497 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__R_7, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 499 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 0;
#line 500 "set_bbbtree.m"
          *((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3) = (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 499 "set_bbbtree.m"
          {
#line 499 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1_1(&mercury__set_bbbtree__env);
          }
#line 490 "set_bbbtree.m"
        }
#line 490 "set_bbbtree.m"
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
#line 490 "set_bbbtree.m"
  while (MR_TRUE)
#line 490 "set_bbbtree.m"
    {
#line 490 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 490 "set_bbbtree.m"
      {
#line 490 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 490 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_4;
#line 490 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_6;
#line 490 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_7;
#line 490 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_8;
#line 490 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_5;

#line 490 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 490 "set_bbbtree.m"
          {
#line 490 "set_bbbtree.m"
            mercury__set_bbbtree__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 490 "set_bbbtree.m"
            mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 490 "set_bbbtree.m"
            mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 490 "set_bbbtree.m"
            mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 491 "set_bbbtree.m"
            {
#line 491 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, &mercury__set_bbbtree__Result_8, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
            }
#line 495 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 1))
#line 494 "set_bbbtree.m"
              {
#line 494 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 494 "set_bbbtree.m"
                {
#line 494 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__L_6;

#line 494 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 494 "set_bbbtree.m"
                }
#line 494 "set_bbbtree.m"
                continue;
#line 494 "set_bbbtree.m"
              }
#line 495 "set_bbbtree.m"
            else
#line 495 "set_bbbtree.m"
              if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 0))
#line 500 "set_bbbtree.m"
                {
#line 500 "set_bbbtree.m"
                  return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
                }
#line 495 "set_bbbtree.m"
              else
#line 497 "set_bbbtree.m"
                {
#line 497 "set_bbbtree.m"
                  /* direct tailcall eliminated */
#line 497 "set_bbbtree.m"
                  {
#line 497 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__R_7;

#line 497 "set_bbbtree.m"
                    mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 497 "set_bbbtree.m"
                  }
#line 497 "set_bbbtree.m"
                  continue;
#line 497 "set_bbbtree.m"
                }
#line 490 "set_bbbtree.m"
          }
#line 490 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 490 "set_bbbtree.m"
      }
#line 490 "set_bbbtree.m"
      break;
#line 490 "set_bbbtree.m"
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
#line 484 "set_bbbtree.m"
  {
#line 484 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 485 "set_bbbtree.m"
        *mercury__set_bbbtree__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 484 "set_bbbtree.m"
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
#line 484 "set_bbbtree.m"
  {
#line 484 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 484 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Count_4;

#line 484 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Set_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "set_bbbtree.m"
      mercury__set_bbbtree__Count_4 = (MR_Integer) 0;
#line 484 "set_bbbtree.m"
    else
#line 485 "set_bbbtree.m"
      {
#line 485 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 0));
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_8;
#line 485 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_9;

#line 485 "set_bbbtree.m"
        mercury__set_bbbtree__Count_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 1)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 2)));
#line 485 "set_bbbtree.m"
        mercury__set_bbbtree___R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 3)));
#line 485 "set_bbbtree.m"
      }
#line 484 "set_bbbtree.m"
    return mercury__set_bbbtree__Count_4;
#line 484 "set_bbbtree.m"
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
#line 477 "set_bbbtree.m"
  {
#line 477 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 477 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_2_2;
#line 477 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_3_3;
#line 477 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_4_4;
#line 477 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;

#line 477 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 477 "set_bbbtree.m"
      {
#line 477 "set_bbbtree.m"
        mercury__set_bbbtree__V_2_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 477 "set_bbbtree.m"
        mercury__set_bbbtree__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 477 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 477 "set_bbbtree.m"
      }
#line 477 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 477 "set_bbbtree.m"
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
#line 475 "set_bbbtree.m"
  {
#line 475 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 475 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 475 "set_bbbtree.m"
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
#line 473 "set_bbbtree.m"
  {
#line 473 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 473 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 473 "set_bbbtree.m"
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
#line 469 "set_bbbtree.m"
  {
#line 469 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 469 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "set_bbbtree.m"
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
#line 469 "set_bbbtree.m"
  {
#line 469 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 469 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 469 "set_bbbtree.m"
    return mercury__set_bbbtree__S_2;
#line 469 "set_bbbtree.m"
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
