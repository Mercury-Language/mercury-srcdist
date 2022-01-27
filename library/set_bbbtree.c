/*
** Automatically generated from `set_bbbtree.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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



#line 56 "set_bbbtree.m"
struct mercury__set_bbbtree__member_2_p_1_env_0_s {
#line 56 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9;
#line 56 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__member_2_p_1_env_0__X_3;
#line 56 "set_bbbtree.m"
  MR_Cont mercury__set_bbbtree__member_2_p_1_env_0__cont;
#line 56 "set_bbbtree.m"
  void * mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr;
#line 492 "set_bbbtree.m"
  MR_bool mercury__set_bbbtree__member_2_p_1_env_0__succeeded;
#line 492 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 492 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__Result_8;
#line 492 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__V_10_10;
#line 56 "set_bbbtree.m"
};


#line 115 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0;

#line 118 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1;

#line 121 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4];

#line 124 "set_bbbtree.c"
static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1;

#line 127 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1];

#line 130 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1];

#line 133 "set_bbbtree.c"
static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2];

#line 136 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2];

#line 139 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2];

#line 142 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 145 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 147 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 149 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3);

#line 152 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 155 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 157 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 159 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 161 "set_bbbtree.c"
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

#line 1181 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1181 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1181 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1181 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1181 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1181 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10);

#line 1158 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1158 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1158 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1158 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1158 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1117 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1117 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1117 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1117 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1117 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

#line 1084 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1084 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1084 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1084 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1084 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8);

#line 818 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 818 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 818 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 818 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 818 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8);

#line 1340 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1340 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1340 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1340 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1340 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1340 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1318 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1318 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1318 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1318 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 1285 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1285 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1285 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1285 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5);

#line 1009 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1009 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1009 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

#line 492 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 492 "set_bbbtree.m"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 692 "set_bbbtree.c"
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

#line 707 "set_bbbtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1 = {
  &mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 715 "set_bbbtree.c"
static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1
};

#line 723 "set_bbbtree.c"
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

#line 738 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0
};

#line 743 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 748 "set_bbbtree.c"
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

#line 762 "set_bbbtree.c"
static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0,
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

#line 768 "set_bbbtree.c"
static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 774 "set_bbbtree.c"
const MR_TypeCtorInfo_Struct mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001)),
  ((MR_Box) (mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001)),
  (MR_String) "set_bbbtree",
  (MR_String) "set_bbbtree",
  {     mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1 },
  {     mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1
};

#line 791 "set_bbbtree.c"
static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
#line 794 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 796 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
#line 798 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3)
#line 800 "set_bbbtree.c"
{
#line 802 "set_bbbtree.c"
  {
#line 804 "set_bbbtree.c"
    MR_bool mercury__set_bbbtree__succeeded;

#line 807 "set_bbbtree.c"
    {
#line 809 "set_bbbtree.c"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), ((MR_Word) mercury__set_bbbtree__wrapper_arg_2), ((MR_Word) mercury__set_bbbtree__wrapper_arg_3));
    }
#line 812 "set_bbbtree.c"
    return mercury__set_bbbtree__succeeded;
#line 814 "set_bbbtree.c"
  }
#line 816 "set_bbbtree.c"
}

#line 819 "set_bbbtree.c"
static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
#line 822 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
#line 824 "set_bbbtree.c"
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
#line 826 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
#line 828 "set_bbbtree.c"
  MR_Box mercury__set_bbbtree__wrapper_arg_4)
#line 830 "set_bbbtree.c"
{
#line 832 "set_bbbtree.c"
  {
#line 834 "set_bbbtree.c"
    MR_Word mercury__set_bbbtree__conv0_HeadVar__1_1;

#line 837 "set_bbbtree.c"
    {
#line 839 "set_bbbtree.c"
      mercury__set_bbbtree____Compare____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), &mercury__set_bbbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__set_bbbtree__wrapper_arg_3), ((MR_Word) mercury__set_bbbtree__wrapper_arg_4));
    }
#line 842 "set_bbbtree.c"
    *mercury__set_bbbtree__wrapper_arg_2 = ((MR_Box) (mercury__set_bbbtree__conv0_HeadVar__1_1));
#line 844 "set_bbbtree.c"
  }
#line 846 "set_bbbtree.c"
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

#line 903 "set_bbbtree.m"
            {
#line 903 "set_bbbtree.m"
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

#line 1181 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
#line 1181 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_6,
#line 1181 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_7,
#line 1181 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_8,
#line 1181 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9,
#line 1181 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_10)
#line 1181 "set_bbbtree.m"
{
#line 1184 "set_bbbtree.m"
  {
#line 1184 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1184 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_11;
#line 1184 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_12;
#line 1188 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Val_13;

#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_11 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_36;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_37;

#line 487 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_12 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_38 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_40;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_41;

#line 487 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 1188 "set_bbbtree.m"
    mercury__set_bbbtree__Val_13 = (mercury__set_bbbtree__LSize_11 + mercury__set_bbbtree__RSize_12);
#line 1189 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_13 < (MR_Integer) 2);
#line 1193 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 1192 "set_bbbtree.m"
      {
#line 1192 "set_bbbtree.m"
        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1192 "set_bbbtree.m"
        return;
      }
#line 1193 "set_bbbtree.m"
    else
#line 1210 "set_bbbtree.m"
      {
#line 1194 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__LSize_11);

#line 1195 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_12 > mercury__set_bbbtree__Val_29);
#line 1210 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1206 "set_bbbtree.m"
          if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "set_bbbtree.m"
            {
#line 1208 "set_bbbtree.m"
              {
#line 1208 "set_bbbtree.m"
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.1");
#line 1208 "set_bbbtree.m"
                return;
              }
#line 1207 "set_bbbtree.m"
            }
#line 1206 "set_bbbtree.m"
          else
#line 1198 "set_bbbtree.m"
            {
#line 1198 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1198 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__RR_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1198 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RLSize_18;
#line 1198 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree__RRSize_19;
#line 1198 "set_bbbtree.m"
              MR_Box mercury__set_bbbtree___V0_14 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1198 "set_bbbtree.m"
              MR_Integer mercury__set_bbbtree___N0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 486 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                mercury__set_bbbtree__RLSize_18 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
              else
#line 487 "set_bbbtree.m"
                {
#line 487 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_42 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_44;
#line 487 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_45;

#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree__RLSize_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree___L_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree___R_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                }
#line 486 "set_bbbtree.m"
              if ((mercury__set_bbbtree__RR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                mercury__set_bbbtree__RRSize_19 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
              else
#line 487 "set_bbbtree.m"
                {
#line 487 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V_46 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___L_48;
#line 487 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree___R_49;

#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree__RRSize_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree___L_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                  mercury__set_bbbtree___R_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                }
#line 1201 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RLSize_18 < mercury__set_bbbtree__RRSize_19);
#line 1203 "set_bbbtree.m"
              if (mercury__set_bbbtree__succeeded)
#line 1109 "set_bbbtree.m"
                {
#line 1109 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__B_56 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1109 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1109 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1109 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__A_X_and_Y_61;
#line 1109 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1110 "set_bbbtree.m"
                  {
#line 1110 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y_58, &mercury__set_bbbtree__A_X_and_Y_61);
                  }
#line 1111 "set_bbbtree.m"
                  {
#line 1111 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_56, mercury__set_bbbtree__A_X_and_Y_61, mercury__set_bbbtree__Z_59, mercury__set_bbbtree__Set_9);
#line 1111 "set_bbbtree.m"
                    return;
                  }
#line 1109 "set_bbbtree.m"
                }
#line 1203 "set_bbbtree.m"
              else
#line 1143 "set_bbbtree.m"
                {
#line 1143 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree__C_68 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 1143 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Y_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 1143 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__Z_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 1143 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N0_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

#line 1149 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__Y_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "set_bbbtree.m"
                    {
#line 1151 "set_bbbtree.m"
                      {
#line 1151 "set_bbbtree.m"
                        mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_l.2");
#line 1151 "set_bbbtree.m"
                        return;
                      }
#line 1150 "set_bbbtree.m"
                    }
#line 1149 "set_bbbtree.m"
                  else
#line 1145 "set_bbbtree.m"
                    {
#line 1145 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree__B_73 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 0));
#line 1145 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y1_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 2)));
#line 1145 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__Y2_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 3)));
#line 1145 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__A_X_and_Y1_77;
#line 1145 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree__C_Y2_and_Z_78;
#line 1145 "set_bbbtree.m"
                      MR_Integer mercury__set_bbbtree___N1_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 1)));

#line 1146 "set_bbbtree.m"
                      {
#line 1146 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y1_75, &mercury__set_bbbtree__A_X_and_Y1_77);
                      }
#line 1147 "set_bbbtree.m"
                      {
#line 1147 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__C_68, mercury__set_bbbtree__Y2_76, mercury__set_bbbtree__Z_71, &mercury__set_bbbtree__C_Y2_and_Z_78);
                      }
#line 1148 "set_bbbtree.m"
                      {
#line 1148 "set_bbbtree.m"
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_73, mercury__set_bbbtree__A_X_and_Y1_77, mercury__set_bbbtree__C_Y2_and_Z_78, mercury__set_bbbtree__Set_9);
#line 1148 "set_bbbtree.m"
                        return;
                      }
#line 1145 "set_bbbtree.m"
                    }
#line 1143 "set_bbbtree.m"
                }
#line 1198 "set_bbbtree.m"
            }
#line 1210 "set_bbbtree.m"
        else
#line 1227 "set_bbbtree.m"
          {
#line 1211 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_30 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__RSize_12);

#line 1212 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_11 > mercury__set_bbbtree__Val_30);
#line 1227 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1223 "set_bbbtree.m"
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "set_bbbtree.m"
                {
#line 1225 "set_bbbtree.m"
                  {
#line 1225 "set_bbbtree.m"
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.2");
#line 1225 "set_bbbtree.m"
                    return;
                  }
#line 1224 "set_bbbtree.m"
                }
#line 1223 "set_bbbtree.m"
              else
#line 1215 "set_bbbtree.m"
                {
#line 1215 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 1215 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__LR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 1215 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LLSize_24;
#line 1215 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree__LRSize_25;
#line 1215 "set_bbbtree.m"
                  MR_Box mercury__set_bbbtree___V1_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 1215 "set_bbbtree.m"
                  MR_Integer mercury__set_bbbtree___N1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));

#line 486 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LL_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                    mercury__set_bbbtree__LLSize_24 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
                  else
#line 487 "set_bbbtree.m"
                    {
#line 487 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_80 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_82;
#line 487 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_83;

#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree__LLSize_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree___L_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree___R_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                    }
#line 486 "set_bbbtree.m"
                  if ((mercury__set_bbbtree__LR_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                    mercury__set_bbbtree__LRSize_25 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
                  else
#line 487 "set_bbbtree.m"
                    {
#line 487 "set_bbbtree.m"
                      MR_Box mercury__set_bbbtree___V_84 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___L_86;
#line 487 "set_bbbtree.m"
                      MR_Word mercury__set_bbbtree___R_87;

#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree__LRSize_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree___L_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                      mercury__set_bbbtree___R_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                    }
#line 1218 "set_bbbtree.m"
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LRSize_25 < mercury__set_bbbtree__LLSize_24);
#line 1220 "set_bbbtree.m"
                  if (mercury__set_bbbtree__succeeded)
#line 1219 "set_bbbtree.m"
                    {
#line 1219 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1219 "set_bbbtree.m"
                      return;
                    }
#line 1220 "set_bbbtree.m"
                  else
#line 1221 "set_bbbtree.m"
                    {
#line 1221 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1221 "set_bbbtree.m"
                      return;
                    }
#line 1215 "set_bbbtree.m"
                }
#line 1227 "set_bbbtree.m"
            else
#line 1228 "set_bbbtree.m"
              {
#line 1228 "set_bbbtree.m"
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
#line 1228 "set_bbbtree.m"
                return;
              }
#line 1227 "set_bbbtree.m"
          }
#line 1210 "set_bbbtree.m"
      }
#line 1184 "set_bbbtree.m"
  }
#line 1181 "set_bbbtree.m"
}

#line 1158 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1158 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1158 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1158 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1158 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1158 "set_bbbtree.m"
{
#line 1161 "set_bbbtree.m"
  {
#line 1161 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1161 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "set_bbbtree.m"
      {
#line 1162 "set_bbbtree.m"
        {
#line 1162 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.1");
#line 1162 "set_bbbtree.m"
          return;
        }
#line 1161 "set_bbbtree.m"
      }
#line 1161 "set_bbbtree.m"
    else
#line 1163 "set_bbbtree.m"
      {
#line 1163 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1163 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1163 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1163 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1169 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Y_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "set_bbbtree.m"
          {
#line 1171 "set_bbbtree.m"
            {
#line 1171 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.2");
#line 1171 "set_bbbtree.m"
              return;
            }
#line 1170 "set_bbbtree.m"
          }
#line 1169 "set_bbbtree.m"
        else
#line 1165 "set_bbbtree.m"
          {
#line 1165 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__B_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 0));
#line 1165 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 2)));
#line 1165 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Y2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 3)));
#line 1165 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__A_X_and_Y1_20;
#line 1165 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__C_Y2_and_Z_21;
#line 1165 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 1)));

#line 1166 "set_bbbtree.m"
            {
#line 1166 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__Y1_18, &mercury__set_bbbtree__A_X_and_Y1_20);
            }
#line 1167 "set_bbbtree.m"
            {
#line 1167 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y2_19, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__C_Y2_and_Z_21);
            }
#line 1168 "set_bbbtree.m"
            {
#line 1168 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_16, mercury__set_bbbtree__A_X_and_Y1_20, mercury__set_bbbtree__C_Y2_and_Z_21, mercury__set_bbbtree__HeadVar__4_4);
#line 1168 "set_bbbtree.m"
              return;
            }
#line 1165 "set_bbbtree.m"
          }
#line 1163 "set_bbbtree.m"
      }
#line 1161 "set_bbbtree.m"
  }
#line 1158 "set_bbbtree.m"
}

#line 1117 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
#line 1117 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
#line 1117 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1117 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
#line 1117 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
#line 1117 "set_bbbtree.m"
{
#line 1120 "set_bbbtree.m"
  {
#line 1120 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1120 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "set_bbbtree.m"
      {
#line 1121 "set_bbbtree.m"
        {
#line 1121 "set_bbbtree.m"
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.single_rot_r");
#line 1121 "set_bbbtree.m"
          return;
        }
#line 1120 "set_bbbtree.m"
      }
#line 1120 "set_bbbtree.m"
    else
#line 1122 "set_bbbtree.m"
      {
#line 1122 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1122 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1122 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1122 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__B_Y_and_Z_16;
#line 1122 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1123 "set_bbbtree.m"
        {
#line 1123 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y_13, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__B_Y_and_Z_16);
        }
#line 1124 "set_bbbtree.m"
        {
#line 1124 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__B_Y_and_Z_16, mercury__set_bbbtree__HeadVar__4_4);
#line 1124 "set_bbbtree.m"
          return;
        }
#line 1122 "set_bbbtree.m"
      }
#line 1120 "set_bbbtree.m"
  }
#line 1117 "set_bbbtree.m"
}

#line 1084 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
#line 1084 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_5,
#line 1084 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__L_6,
#line 1084 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_7,
#line 1084 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Tree_8)
#line 1084 "set_bbbtree.m"
{
#line 1087 "set_bbbtree.m"
  {
#line 1087 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1087 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__LSize_9;
#line 1087 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__RSize_10;
#line 1087 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_11;
#line 1087 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Tree0_12;
#line 1087 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_13_13;

#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      mercury__set_bbbtree__LSize_9 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_18;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_19;

#line 487 "set_bbbtree.m"
        mercury__set_bbbtree__LSize_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      mercury__set_bbbtree__RSize_10 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_22;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_23;

#line 487 "set_bbbtree.m"
        mercury__set_bbbtree__RSize_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 1090 "set_bbbtree.m"
    mercury__set_bbbtree__V_13_13 = ((MR_Integer) 1 + mercury__set_bbbtree__LSize_9);
#line 1090 "set_bbbtree.m"
    mercury__set_bbbtree__N_11 = (mercury__set_bbbtree__V_13_13 + mercury__set_bbbtree__RSize_10);
#line 1091 "set_bbbtree.m"
    {
#line 1091 "set_bbbtree.m"
      mercury__set_bbbtree__Tree0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 0) = mercury__set_bbbtree__X_5;
#line 1091 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 1) = ((MR_Box) (mercury__set_bbbtree__N_11));
#line 1091 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 2) = ((MR_Box) (mercury__set_bbbtree__L_6));
#line 1091 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 3) = ((MR_Box) (mercury__set_bbbtree__R_7));
#line 1091 "set_bbbtree.m"
    }
#line 1092 "set_bbbtree.m"
    *mercury__set_bbbtree__Tree_8 = mercury__set_bbbtree__Tree0_12;
#line 1087 "set_bbbtree.m"
  }
#line 1084 "set_bbbtree.m"
}

#line 818 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
#line 818 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_5,
#line 818 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__RestOfList_6,
#line 818 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__N_7,
#line 818 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_8)
#line 818 "set_bbbtree.m"
{
#line 836 "set_bbbtree.m"
  {
#line 836 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 > (MR_Integer) 3);

#line 836 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 823 "set_bbbtree.m"
      {
#line 823 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NL_9 = (mercury__set_bbbtree__N_7 / (MR_Integer) 2);
#line 823 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__NR_10;
#line 823 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList0_11;
#line 823 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12;
#line 823 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__V_21_21 = (mercury__set_bbbtree__N_7 - mercury__set_bbbtree__NL_9);

#line 824 "set_bbbtree.m"
        mercury__set_bbbtree__NR_10 = (mercury__set_bbbtree__V_21_21 - (MR_Integer) 1);
#line 825 "set_bbbtree.m"
        {
#line 825 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_5, &mercury__set_bbbtree__RestOfList0_11, mercury__set_bbbtree__NL_9, &mercury__set_bbbtree__L_12);
        }
#line 831 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "set_bbbtree.m"
          {
#line 834 "set_bbbtree.m"
            {
#line 834 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.1");
#line 834 "set_bbbtree.m"
              return;
            }
#line 833 "set_bbbtree.m"
          }
#line 831 "set_bbbtree.m"
        else
#line 827 "set_bbbtree.m"
          {
#line 827 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_13 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 0));
#line 827 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 1)));
#line 827 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_15;

#line 828 "set_bbbtree.m"
            {
#line 828 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__RestOfList1_14, mercury__set_bbbtree__RestOfList_6, mercury__set_bbbtree__NR_10, &mercury__set_bbbtree__R_15);
            }
#line 830 "set_bbbtree.m"
            {
#line 830 "set_bbbtree.m"
              MR_Word base;
#line 830 "set_bbbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 830 "set_bbbtree.m"
              *mercury__set_bbbtree__Set_8 = base;
#line 830 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_13;
#line 830 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 830 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_12));
#line 830 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_15));
#line 830 "set_bbbtree.m"
            }
#line 827 "set_bbbtree.m"
          }
#line 823 "set_bbbtree.m"
      }
#line 836 "set_bbbtree.m"
    else
#line 846 "set_bbbtree.m"
      {
#line 836 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 3);
#line 846 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 842 "set_bbbtree.m"
          {
#line 842 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_16;
#line 842 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Y_17;
#line 842 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__Z_18;
#line 842 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RestOfList0_45;
#line 837 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_24_24;
#line 837 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_25_25;

#line 837 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 837 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 837 "set_bbbtree.m"
              {
#line 837 "set_bbbtree.m"
                mercury__set_bbbtree__X_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 837 "set_bbbtree.m"
                mercury__set_bbbtree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 837 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 837 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 837 "set_bbbtree.m"
                  {
#line 837 "set_bbbtree.m"
                    mercury__set_bbbtree__Y_17 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 0));
#line 837 "set_bbbtree.m"
                    mercury__set_bbbtree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_24_24, (MR_Integer) 1)));
#line 837 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 837 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 837 "set_bbbtree.m"
                      {
#line 837 "set_bbbtree.m"
                        mercury__set_bbbtree__Z_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 0));
#line 837 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_25_25, (MR_Integer) 1)));
#line 837 "set_bbbtree.m"
                      }
#line 837 "set_bbbtree.m"
                  }
#line 837 "set_bbbtree.m"
              }
#line 842 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 838 "set_bbbtree.m"
              {
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_26_26;
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_28_28;
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_29_29;
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_30_30;
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_32_32;
#line 838 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_33_33;

#line 838 "set_bbbtree.m"
                *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_45;
#line 840 "set_bbbtree.m"
                mercury__set_bbbtree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "set_bbbtree.m"
                mercury__set_bbbtree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "set_bbbtree.m"
                {
#line 840 "set_bbbtree.m"
                  mercury__set_bbbtree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 840 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 0) = mercury__set_bbbtree__X_16;
#line 840 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 1) = ((MR_Box) ((MR_Integer) 1));
#line 840 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 2) = ((MR_Box) (mercury__set_bbbtree__V_28_28));
#line 840 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_26_26, 3) = ((MR_Box) (mercury__set_bbbtree__V_29_29));
#line 840 "set_bbbtree.m"
                }
#line 841 "set_bbbtree.m"
                mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "set_bbbtree.m"
                mercury__set_bbbtree__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "set_bbbtree.m"
                {
#line 841 "set_bbbtree.m"
                  mercury__set_bbbtree__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 841 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 0) = mercury__set_bbbtree__Z_18;
#line 841 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 841 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 2) = ((MR_Box) (mercury__set_bbbtree__V_32_32));
#line 841 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_30_30, 3) = ((MR_Box) (mercury__set_bbbtree__V_33_33));
#line 841 "set_bbbtree.m"
                }
#line 839 "set_bbbtree.m"
                {
#line 839 "set_bbbtree.m"
                  MR_Word base;
#line 839 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 839 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_8 = base;
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_17;
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_26_26));
#line 839 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_30_30));
#line 839 "set_bbbtree.m"
                }
#line 838 "set_bbbtree.m"
              }
#line 842 "set_bbbtree.m"
            else
#line 844 "set_bbbtree.m"
              {
#line 844 "set_bbbtree.m"
                {
#line 844 "set_bbbtree.m"
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.2");
#line 844 "set_bbbtree.m"
                  return;
                }
#line 844 "set_bbbtree.m"
              }
#line 842 "set_bbbtree.m"
          }
#line 846 "set_bbbtree.m"
        else
#line 854 "set_bbbtree.m"
          {
#line 846 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 2);
#line 854 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 850 "set_bbbtree.m"
              {
#line 850 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__RestOfList0_46;
#line 850 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__X_47;
#line 850 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__Y_48;
#line 847 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_35_35;

#line 847 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 847 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 847 "set_bbbtree.m"
                  {
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__X_47 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 847 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 847 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 847 "set_bbbtree.m"
                      {
#line 847 "set_bbbtree.m"
                        mercury__set_bbbtree__Y_48 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 0));
#line 847 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_35_35, (MR_Integer) 1)));
#line 847 "set_bbbtree.m"
                      }
#line 847 "set_bbbtree.m"
                  }
#line 850 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 848 "set_bbbtree.m"
                  {
#line 848 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_36_36;
#line 848 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_38_38;
#line 848 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_39_39;
#line 848 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__V_40_40;

#line 848 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_46;
#line 849 "set_bbbtree.m"
                    mercury__set_bbbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "set_bbbtree.m"
                    mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "set_bbbtree.m"
                    {
#line 849 "set_bbbtree.m"
                      mercury__set_bbbtree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 0) = mercury__set_bbbtree__X_47;
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 1) = ((MR_Box) ((MR_Integer) 1));
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 2) = ((MR_Box) (mercury__set_bbbtree__V_38_38));
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_36_36, 3) = ((MR_Box) (mercury__set_bbbtree__V_39_39));
#line 849 "set_bbbtree.m"
                    }
#line 849 "set_bbbtree.m"
                    mercury__set_bbbtree__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "set_bbbtree.m"
                    {
#line 849 "set_bbbtree.m"
                      MR_Word base;
#line 849 "set_bbbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 849 "set_bbbtree.m"
                      *mercury__set_bbbtree__Set_8 = base;
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_48;
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_36_36));
#line 849 "set_bbbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_40_40));
#line 849 "set_bbbtree.m"
                    }
#line 848 "set_bbbtree.m"
                  }
#line 850 "set_bbbtree.m"
                else
#line 852 "set_bbbtree.m"
                  {
#line 852 "set_bbbtree.m"
                    {
#line 852 "set_bbbtree.m"
                      mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.3");
#line 852 "set_bbbtree.m"
                      return;
                    }
#line 852 "set_bbbtree.m"
                  }
#line 850 "set_bbbtree.m"
              }
#line 854 "set_bbbtree.m"
            else
#line 862 "set_bbbtree.m"
              {
#line 854 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 1);
#line 862 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 858 "set_bbbtree.m"
                  {
#line 858 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__RestOfList0_49;
#line 858 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree__X_50;

#line 855 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
#line 855 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 855 "set_bbbtree.m"
                      {
#line 855 "set_bbbtree.m"
                        mercury__set_bbbtree__X_50 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
#line 855 "set_bbbtree.m"
                        mercury__set_bbbtree__RestOfList0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
#line 856 "set_bbbtree.m"
                        {
#line 856 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_42_42;
#line 856 "set_bbbtree.m"
                          MR_Word mercury__set_bbbtree__V_43_43;

#line 856 "set_bbbtree.m"
                          *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_49;
#line 857 "set_bbbtree.m"
                          mercury__set_bbbtree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "set_bbbtree.m"
                          mercury__set_bbbtree__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "set_bbbtree.m"
                          {
#line 857 "set_bbbtree.m"
                            MR_Word base;
#line 857 "set_bbbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 857 "set_bbbtree.m"
                            *mercury__set_bbbtree__Set_8 = base;
#line 857 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_50;
#line 857 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
#line 857 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_42_42));
#line 857 "set_bbbtree.m"
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_43_43));
#line 857 "set_bbbtree.m"
                          }
#line 856 "set_bbbtree.m"
                        }
#line 855 "set_bbbtree.m"
                      }
#line 855 "set_bbbtree.m"
                    else
#line 860 "set_bbbtree.m"
                      {
#line 860 "set_bbbtree.m"
                        {
#line 860 "set_bbbtree.m"
                          mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.4");
#line 860 "set_bbbtree.m"
                          return;
                        }
#line 860 "set_bbbtree.m"
                      }
#line 858 "set_bbbtree.m"
                  }
#line 862 "set_bbbtree.m"
                else
#line 864 "set_bbbtree.m"
                  {
#line 864 "set_bbbtree.m"
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__List_5;
#line 865 "set_bbbtree.m"
                    *mercury__set_bbbtree__Set_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "set_bbbtree.m"
                  }
#line 862 "set_bbbtree.m"
              }
#line 854 "set_bbbtree.m"
          }
#line 846 "set_bbbtree.m"
      }
#line 836 "set_bbbtree.m"
  }
#line 818 "set_bbbtree.m"
}

#line 455 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0(
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_25,
#line 455 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__1_1,
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__3_3)
#line 455 "set_bbbtree.m"
{
#line 455 "set_bbbtree.m"
  while (MR_TRUE)
#line 455 "set_bbbtree.m"
    {
#line 455 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 455 "set_bbbtree.m"
      {
#line 455 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 455 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_23 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;
#line 455 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_24 = (MR_Integer) mercury__set_bbbtree__HeadVar__3_3;

#line 455 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_23 == mercury__set_bbbtree__CastY_24);
#line 455 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 2255 "set_bbbtree.c"
          *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 455 "set_bbbtree.m"
        else
#line 455 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 455 "set_bbbtree.m"
          else
#line 2267 "set_bbbtree.c"
            *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 455 "set_bbbtree.m"
        else
#line 455 "set_bbbtree.m"
          {
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 455 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 455 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_34_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));

#line 455 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2284 "set_bbbtree.c"
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 455 "set_bbbtree.m"
            else
#line 455 "set_bbbtree.m"
              {
#line 455 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 0));
#line 455 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 1)));
#line 455 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 455 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 455 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__V_20_20;

#line 455 "set_bbbtree.m"
                {
#line 455 "set_bbbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__V_34_34, mercury__set_bbbtree__V_16_16);
                }
#line 2306 "set_bbbtree.c"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_20_20 == (MR_Integer) 0);
#line 455 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 455 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_20_20;
#line 455 "set_bbbtree.m"
                else
#line 455 "set_bbbtree.m"
                  {
#line 455 "set_bbbtree.m"
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
#line 2343 "set_bbbtree.c"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_21_21 == (MR_Integer) 0);
#line 455 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 455 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
                      *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_21_21;
#line 455 "set_bbbtree.m"
                    else
#line 455 "set_bbbtree.m"
                      {
#line 455 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__V_22_22;

#line 455 "set_bbbtree.m"
                        {
#line 455 "set_bbbtree.m"
                          mercury__set_bbbtree____Compare____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__V_22_22, mercury__set_bbbtree__V_32_32, mercury__set_bbbtree__V_18_18);
                        }
#line 2363 "set_bbbtree.c"
                        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_22_22 == (MR_Integer) 0);
#line 455 "set_bbbtree.m"
                        mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
#line 455 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
                          *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__V_22_22;
#line 455 "set_bbbtree.m"
                        else
#line 455 "set_bbbtree.m"
                          {
#line 455 "set_bbbtree.m"
                            /* direct tailcall eliminated */
#line 455 "set_bbbtree.m"
                            {
#line 455 "set_bbbtree.m"
                              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_31_31;
#line 455 "set_bbbtree.m"
                              MR_Word mercury__set_bbbtree__HeadVar__3__tmp_copy_3 = mercury__set_bbbtree__V_19_19;

#line 455 "set_bbbtree.m"
                              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__3__tmp_copy_3;
#line 455 "set_bbbtree.m"
                              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 455 "set_bbbtree.m"
                            }
#line 455 "set_bbbtree.m"
                            continue;
#line 455 "set_bbbtree.m"
                          }
#line 455 "set_bbbtree.m"
                      }
#line 455 "set_bbbtree.m"
                  }
#line 455 "set_bbbtree.m"
              }
#line 455 "set_bbbtree.m"
          }
#line 455 "set_bbbtree.m"
      }
#line 455 "set_bbbtree.m"
      break;
#line 455 "set_bbbtree.m"
    }
#line 455 "set_bbbtree.m"
}

#line 455 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0(
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 455 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 455 "set_bbbtree.m"
{
#line 455 "set_bbbtree.m"
  while (MR_TRUE)
#line 455 "set_bbbtree.m"
    {
#line 455 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 455 "set_bbbtree.m"
      {
#line 455 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 455 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastX_13 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 455 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__CastY_14 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 455 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_13 == mercury__set_bbbtree__CastY_14);
#line 455 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = MR_TRUE;
#line 455 "set_bbbtree.m"
        else
#line 455 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "set_bbbtree.m"
          {
#line 455 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__CastX_3 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
#line 455 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__CastY_4 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

#line 455 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastY_4 == mercury__set_bbbtree__CastX_3);
#line 455 "set_bbbtree.m"
          }
#line 455 "set_bbbtree.m"
        else
#line 455 "set_bbbtree.m"
          {
#line 455 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 455 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 455 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_9_9;
#line 455 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_10_10;
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_11_11;
#line 455 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;

#line 455 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 455 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
              {
#line 455 "set_bbbtree.m"
                mercury__set_bbbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 455 "set_bbbtree.m"
                mercury__set_bbbtree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 455 "set_bbbtree.m"
                mercury__set_bbbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 455 "set_bbbtree.m"
                mercury__set_bbbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 2493 "set_bbbtree.c"
                {
#line 2495 "set_bbbtree.c"
                  mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__V_9_9);
                }
#line 455 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
                  {
#line 2502 "set_bbbtree.c"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == mercury__set_bbbtree__V_10_10);
#line 455 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 455 "set_bbbtree.m"
                      {
#line 2508 "set_bbbtree.c"
                        {
#line 2510 "set_bbbtree.c"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__V_7_7, mercury__set_bbbtree__V_11_11);
                        }
#line 455 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 2515 "set_bbbtree.c"
                          {
#line 2517 "set_bbbtree.c"
                            /* direct tailcall eliminated */
#line 2519 "set_bbbtree.c"
                            {
#line 2521 "set_bbbtree.c"
                              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_8_8;
#line 2523 "set_bbbtree.c"
                              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 2526 "set_bbbtree.c"
                              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 2528 "set_bbbtree.c"
                              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 2530 "set_bbbtree.c"
                            }
#line 2532 "set_bbbtree.c"
                            continue;
#line 2534 "set_bbbtree.c"
                          }
#line 455 "set_bbbtree.m"
                      }
#line 455 "set_bbbtree.m"
                  }
#line 455 "set_bbbtree.m"
              }
#line 455 "set_bbbtree.m"
          }
#line 455 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 455 "set_bbbtree.m"
      }
#line 455 "set_bbbtree.m"
      break;
#line 455 "set_bbbtree.m"
    }
#line 455 "set_bbbtree.m"
}

#line 1340 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
#line 1340 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1340 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1340 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1340 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1340 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1340 "set_bbbtree.m"
{
#line 1343 "set_bbbtree.m"
  while (MR_TRUE)
#line 1343 "set_bbbtree.m"
    {
#line 1343 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1343 "set_bbbtree.m"
      {
#line 1343 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1343 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1343 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1343 "set_bbbtree.m"
        else
#line 1344 "set_bbbtree.m"
          {
#line 1344 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1344 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1344 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1344 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1344 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1345 "set_bbbtree.m"
            {
#line 1345 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1349 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1350 "set_bbbtree.m"
              {
#line 1350 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Set0_15;

#line 1351 "set_bbbtree.m"
                {
#line 1351 "set_bbbtree.m"
                  mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1352 "set_bbbtree.m"
                {
#line 1352 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__R_10, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1352 "set_bbbtree.m"
                  return;
                }
#line 1350 "set_bbbtree.m"
              }
#line 1349 "set_bbbtree.m"
            else
#line 1349 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1355 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__R_10;
#line 1349 "set_bbbtree.m"
            else
#line 1348 "set_bbbtree.m"
              {
#line 1348 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1348 "set_bbbtree.m"
                {
#line 1348 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_10;

#line 1348 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1348 "set_bbbtree.m"
                }
#line 1348 "set_bbbtree.m"
                continue;
#line 1348 "set_bbbtree.m"
              }
#line 1344 "set_bbbtree.m"
          }
#line 1343 "set_bbbtree.m"
      }
#line 1343 "set_bbbtree.m"
      break;
#line 1343 "set_bbbtree.m"
    }
#line 1340 "set_bbbtree.m"
}

#line 1318 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
#line 1318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
#line 1318 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1318 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
#line 1318 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1318 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1318 "set_bbbtree.m"
{
#line 1321 "set_bbbtree.m"
  while (MR_TRUE)
#line 1321 "set_bbbtree.m"
    {
#line 1321 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1321 "set_bbbtree.m"
      {
#line 1321 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1321 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1321 "set_bbbtree.m"
        else
#line 1322 "set_bbbtree.m"
          {
#line 1322 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1322 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1322 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1322 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Result_14;
#line 1322 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1323 "set_bbbtree.m"
            {
#line 1323 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
#line 1327 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 1))
#line 1326 "set_bbbtree.m"
              {
#line 1326 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1326 "set_bbbtree.m"
                {
#line 1326 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_9;

#line 1326 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1326 "set_bbbtree.m"
                }
#line 1326 "set_bbbtree.m"
                continue;
#line 1326 "set_bbbtree.m"
              }
#line 1327 "set_bbbtree.m"
            else
#line 1327 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_14 == (MR_Integer) 0))
#line 1333 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__L_9;
#line 1327 "set_bbbtree.m"
            else
#line 1328 "set_bbbtree.m"
              {
#line 1328 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Set0_15;

#line 1329 "set_bbbtree.m"
                {
#line 1329 "set_bbbtree.m"
                  mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__R_10, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1330 "set_bbbtree.m"
                {
#line 1330 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1330 "set_bbbtree.m"
                  return;
                }
#line 1328 "set_bbbtree.m"
              }
#line 1322 "set_bbbtree.m"
          }
#line 1321 "set_bbbtree.m"
      }
#line 1321 "set_bbbtree.m"
      break;
#line 1321 "set_bbbtree.m"
    }
#line 1318 "set_bbbtree.m"
}

#line 1285 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__R_2,
#line 1285 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 1285 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4,
#line 1285 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_5)
#line 1285 "set_bbbtree.m"
{
#line 1288 "set_bbbtree.m"
  {
#line 1288 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1288 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "set_bbbtree.m"
      {
#line 1289 "set_bbbtree.m"
        mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1289 "set_bbbtree.m"
        return;
      }
#line 1288 "set_bbbtree.m"
    else
#line 1291 "set_bbbtree.m"
      {
#line 1291 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__LV_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1291 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__LN_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1291 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1291 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 1295 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1294 "set_bbbtree.m"
          {
#line 1294 "set_bbbtree.m"
            mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1294 "set_bbbtree.m"
            return;
          }
#line 1295 "set_bbbtree.m"
        else
#line 1296 "set_bbbtree.m"
          {
#line 1296 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__RV_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 0));
#line 1296 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__RN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 1)));
#line 1296 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RL_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 2)));
#line 1296 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__RR_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 3)));
#line 1298 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__Val_22 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__LN_11);

#line 1299 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_22 < mercury__set_bbbtree__RN_19);
#line 1303 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1301 "set_bbbtree.m"
              {
#line 1301 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__NewL_23;

#line 1301 "set_bbbtree.m"
                {
#line 1301 "set_bbbtree.m"
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__RL_20, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__Ratio_5);
                }
#line 1302 "set_bbbtree.m"
                {
#line 1302 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__RV_18, mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__RR_21, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1302 "set_bbbtree.m"
                  return;
                }
#line 1301 "set_bbbtree.m"
              }
#line 1303 "set_bbbtree.m"
            else
#line 1309 "set_bbbtree.m"
              {
#line 1304 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__RN_19);

#line 1305 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_29 < mercury__set_bbbtree__LN_11);
#line 1309 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1307 "set_bbbtree.m"
                  {
#line 1307 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree__NewR_24;

#line 1307 "set_bbbtree.m"
                    {
#line 1307 "set_bbbtree.m"
                      mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__LR_13, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Ratio_5);
                    }
#line 1308 "set_bbbtree.m"
                    {
#line 1308 "set_bbbtree.m"
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__LV_10, mercury__set_bbbtree__LL_12, mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
#line 1308 "set_bbbtree.m"
                      return;
                    }
#line 1307 "set_bbbtree.m"
                  }
#line 1309 "set_bbbtree.m"
                else
#line 1310 "set_bbbtree.m"
                  {
#line 1310 "set_bbbtree.m"
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_3, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__R_2, mercury__set_bbbtree__Set_4);
#line 1310 "set_bbbtree.m"
                    return;
                  }
#line 1309 "set_bbbtree.m"
              }
#line 1296 "set_bbbtree.m"
          }
#line 1291 "set_bbbtree.m"
      }
#line 1288 "set_bbbtree.m"
  }
#line 1285 "set_bbbtree.m"
}

#line 1052 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_r_4_p_0(
#line 1052 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 1052 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1052 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1052 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1052 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1052 "set_bbbtree.m"
{
#line 1055 "set_bbbtree.m"
  {
#line 1055 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1055 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1055 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1055 "set_bbbtree.m"
    else
#line 1056 "set_bbbtree.m"
      {
#line 1056 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 1056 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 1056 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1057 "set_bbbtree.m"
        {
#line 1057 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1058 "set_bbbtree.m"
        {
#line 1058 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1059 "set_bbbtree.m"
        {
#line 1059 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1060 "set_bbbtree.m"
        {
#line 1060 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 1061 "set_bbbtree.m"
        {
#line 1061 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 1063 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 1245 "set_bbbtree.m"
          {
#line 1245 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 486 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
            else
#line 487 "set_bbbtree.m"
              {
#line 487 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 487 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
              }
#line 1247 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1250 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1249 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1250 "set_bbbtree.m"
            else
#line 1251 "set_bbbtree.m"
              {
#line 1251 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 486 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
                else
#line 487 "set_bbbtree.m"
                  {
#line 487 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                  }
#line 1252 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1255 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1254 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1255 "set_bbbtree.m"
                else
#line 1268 "set_bbbtree.m"
                  {
#line 1262 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1268 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1265 "set_bbbtree.m"
                      {
#line 1265 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1265 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1263 "set_bbbtree.m"
                        {
#line 1263 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1265 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1264 "set_bbbtree.m"
                          {
#line 1264 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1264 "set_bbbtree.m"
                            return;
                          }
#line 1265 "set_bbbtree.m"
                        else
#line 1266 "set_bbbtree.m"
                          {
#line 1266 "set_bbbtree.m"
                            {
#line 1266 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1266 "set_bbbtree.m"
                              return;
                            }
#line 1266 "set_bbbtree.m"
                          }
#line 1265 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                    else
#line 1271 "set_bbbtree.m"
                      {
#line 1271 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1271 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1269 "set_bbbtree.m"
                        {
#line 1269 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1271 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1270 "set_bbbtree.m"
                          {
#line 1270 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
#line 1270 "set_bbbtree.m"
                            return;
                          }
#line 1271 "set_bbbtree.m"
                        else
#line 1272 "set_bbbtree.m"
                          {
#line 1272 "set_bbbtree.m"
                            {
#line 1272 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1272 "set_bbbtree.m"
                              return;
                            }
#line 1272 "set_bbbtree.m"
                          }
#line 1271 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                  }
#line 1251 "set_bbbtree.m"
              }
#line 1245 "set_bbbtree.m"
          }
#line 1063 "set_bbbtree.m"
        else
#line 1064 "set_bbbtree.m"
          {
#line 1064 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 1064 "set_bbbtree.m"
            return;
          }
#line 1056 "set_bbbtree.m"
      }
#line 1055 "set_bbbtree.m"
  }
#line 1052 "set_bbbtree.m"
}

#line 1028 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_r_3_f_0(
#line 1028 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 1028 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1028 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1028 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 1028 "set_bbbtree.m"
{
#line 1031 "set_bbbtree.m"
  while (MR_TRUE)
#line 1031 "set_bbbtree.m"
    {
#line 1031 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1031 "set_bbbtree.m"
      {
#line 1031 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;
#line 1031 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__HeadVar__4_4;

#line 1031 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "set_bbbtree.m"
          mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__1_1;
#line 1031 "set_bbbtree.m"
        else
#line 1033 "set_bbbtree.m"
          {
#line 1033 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1033 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Sets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1033 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Intersect1_11;

#line 1034 "set_bbbtree.m"
            {
#line 1034 "set_bbbtree.m"
              mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Set_8, &mercury__set_bbbtree__Intersect1_11, mercury__set_bbbtree__HeadVar__3_3);
            }
#line 1033 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 1033 "set_bbbtree.m"
            {
#line 1033 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Intersect1_11;
#line 1033 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Sets_9;

#line 1033 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1033 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1033 "set_bbbtree.m"
            }
#line 1033 "set_bbbtree.m"
            continue;
#line 1033 "set_bbbtree.m"
          }
#line 1031 "set_bbbtree.m"
        return mercury__set_bbbtree__HeadVar__4_4;
#line 1031 "set_bbbtree.m"
      }
#line 1031 "set_bbbtree.m"
      break;
#line 1031 "set_bbbtree.m"
    }
#line 1028 "set_bbbtree.m"
}

#line 1009 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1009 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 1009 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 1009 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 1009 "set_bbbtree.m"
{
#line 1012 "set_bbbtree.m"
  while (MR_TRUE)
#line 1012 "set_bbbtree.m"
    {
#line 1012 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 1012 "set_bbbtree.m"
      {
#line 1012 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 1012 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "set_bbbtree.m"
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "set_bbbtree.m"
          else
#line 1013 "set_bbbtree.m"
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "set_bbbtree.m"
        else
#line 1012 "set_bbbtree.m"
          {
#line 1012 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1012 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1012 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1014 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1012 "set_bbbtree.m"
            if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "set_bbbtree.m"
            else
#line 1016 "set_bbbtree.m"
              {
#line 1016 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection0_26;
#line 1016 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree__Intersection1_27;

#line 1017 "set_bbbtree.m"
                {
#line 1017 "set_bbbtree.m"
                  mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_33_33, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Intersection0_26, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1019 "set_bbbtree.m"
                {
#line 1019 "set_bbbtree.m"
                  mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__V_31_31, mercury__set_bbbtree__Intersection0_26, &mercury__set_bbbtree__Intersection1_27, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 1021 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 1021 "set_bbbtree.m"
                {
#line 1021 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__V_30_30;
#line 1021 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Intersection1_27;

#line 1021 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 1021 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 1021 "set_bbbtree.m"
                }
#line 1021 "set_bbbtree.m"
                continue;
#line 1016 "set_bbbtree.m"
              }
#line 1012 "set_bbbtree.m"
          }
#line 1012 "set_bbbtree.m"
      }
#line 1012 "set_bbbtree.m"
      break;
#line 1012 "set_bbbtree.m"
    }
#line 1009 "set_bbbtree.m"
}

#line 1001 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_intersect_r_3_p_0(
#line 1001 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 1001 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 1001 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 1001 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 1001 "set_bbbtree.m"
{
#line 1004 "set_bbbtree.m"
  {
#line 1004 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1004 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "set_bbbtree.m"
    else
#line 1005 "set_bbbtree.m"
      {
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_11;
#line 1005 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1006 "set_bbbtree.m"
        {
#line 1006 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__L_7, mercury__set_bbbtree__V_5, &mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 1007 "set_bbbtree.m"
        {
#line 1007 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 1007 "set_bbbtree.m"
          return;
        }
#line 1005 "set_bbbtree.m"
      }
#line 1004 "set_bbbtree.m"
  }
#line 1001 "set_bbbtree.m"
}

#line 970 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__intersect_r_4_p_0(
#line 970 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 970 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 970 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 970 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 970 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 970 "set_bbbtree.m"
{
#line 973 "set_bbbtree.m"
  {
#line 973 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 973 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "set_bbbtree.m"
    else
#line 974 "set_bbbtree.m"
      {
#line 974 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 974 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 974 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 975 "set_bbbtree.m"
        {
#line 975 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 976 "set_bbbtree.m"
        {
#line 976 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 977 "set_bbbtree.m"
        {
#line 977 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 978 "set_bbbtree.m"
        {
#line 978 "set_bbbtree.m"
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 979 "set_bbbtree.m"
        {
#line 979 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 981 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 980 "set_bbbtree.m"
          {
#line 980 "set_bbbtree.m"
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 980 "set_bbbtree.m"
            return;
          }
#line 981 "set_bbbtree.m"
        else
#line 1245 "set_bbbtree.m"
          {
#line 1245 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_22;

#line 486 "set_bbbtree.m"
            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
            else
#line 487 "set_bbbtree.m"
              {
#line 487 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_32;
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_33;

#line 487 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
              }
#line 1247 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
#line 1250 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1249 "set_bbbtree.m"
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
#line 1250 "set_bbbtree.m"
            else
#line 1251 "set_bbbtree.m"
              {
#line 1251 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_23;

#line 486 "set_bbbtree.m"
                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
                else
#line 487 "set_bbbtree.m"
                  {
#line 487 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_36;
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_37;

#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                  }
#line 1252 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
#line 1255 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1254 "set_bbbtree.m"
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
#line 1255 "set_bbbtree.m"
                else
#line 1268 "set_bbbtree.m"
                  {
#line 1262 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
#line 1268 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1265 "set_bbbtree.m"
                      {
#line 1265 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_24;
#line 1265 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_25;

#line 1263 "set_bbbtree.m"
                        {
#line 1263 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
#line 1265 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1264 "set_bbbtree.m"
                          {
#line 1264 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
#line 1264 "set_bbbtree.m"
                            return;
                          }
#line 1265 "set_bbbtree.m"
                        else
#line 1266 "set_bbbtree.m"
                          {
#line 1266 "set_bbbtree.m"
                            {
#line 1266 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
#line 1266 "set_bbbtree.m"
                              return;
                            }
#line 1266 "set_bbbtree.m"
                          }
#line 1265 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                    else
#line 1271 "set_bbbtree.m"
                      {
#line 1271 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_26;
#line 1271 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_29;

#line 1269 "set_bbbtree.m"
                        {
#line 1269 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
#line 1271 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1270 "set_bbbtree.m"
                          {
#line 1270 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
#line 1270 "set_bbbtree.m"
                            return;
                          }
#line 1271 "set_bbbtree.m"
                        else
#line 1272 "set_bbbtree.m"
                          {
#line 1272 "set_bbbtree.m"
                            {
#line 1272 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
#line 1272 "set_bbbtree.m"
                              return;
                            }
#line 1272 "set_bbbtree.m"
                          }
#line 1271 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                  }
#line 1251 "set_bbbtree.m"
              }
#line 1245 "set_bbbtree.m"
          }
#line 974 "set_bbbtree.m"
      }
#line 973 "set_bbbtree.m"
  }
#line 970 "set_bbbtree.m"
}

#line 944 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_union_r_3_p_0(
#line 944 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 944 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 944 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 944 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 944 "set_bbbtree.m"
{
#line 947 "set_bbbtree.m"
  {
#line 947 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 947 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "set_bbbtree.m"
    else
#line 948 "set_bbbtree.m"
      {
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LUnion_11;
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RUnion_12;
#line 948 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Union_13;
#line 948 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 949 "set_bbbtree.m"
        {
#line 949 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 950 "set_bbbtree.m"
        {
#line 950 "set_bbbtree.m"
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__RUnion_12, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 951 "set_bbbtree.m"
        {
#line 951 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__RUnion_12, &mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__3_3);
        }
#line 952 "set_bbbtree.m"
        {
#line 952 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__V_5, mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
#line 952 "set_bbbtree.m"
          return;
        }
#line 948 "set_bbbtree.m"
      }
#line 947 "set_bbbtree.m"
  }
#line 944 "set_bbbtree.m"
}

#line 905 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__union_r_4_p_0(
#line 905 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
#line 905 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 905 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 905 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_3,
#line 905 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 905 "set_bbbtree.m"
{
#line 908 "set_bbbtree.m"
  {
#line 908 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 908 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 908 "set_bbbtree.m"
    else
#line 910 "set_bbbtree.m"
      {
#line 910 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRL_14;
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__NewRR_15;
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__LSet_16;
#line 910 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RSet_17;
#line 910 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 911 "set_bbbtree.m"
        {
#line 911 "set_bbbtree.m"
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 912 "set_bbbtree.m"
        {
#line 912 "set_bbbtree.m"
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 913 "set_bbbtree.m"
        {
#line 913 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 914 "set_bbbtree.m"
        {
#line 914 "set_bbbtree.m"
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
#line 915 "set_bbbtree.m"
        {
#line 915 "set_bbbtree.m"
          mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__HeadVar__4_4);
#line 915 "set_bbbtree.m"
          return;
        }
#line 910 "set_bbbtree.m"
      }
#line 908 "set_bbbtree.m"
  }
#line 905 "set_bbbtree.m"
}

#line 884 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_1(
#line 884 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 884 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 884 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 884 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 884 "set_bbbtree.m"
{
#line 886 "set_bbbtree.m"
  while (MR_TRUE)
#line 886 "set_bbbtree.m"
    {
#line 886 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 886 "set_bbbtree.m"
      {
#line 886 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 886 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 886 "set_bbbtree.m"
        else
#line 888 "set_bbbtree.m"
          {
#line 888 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 888 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 889 "set_bbbtree.m"
            {
#line 889 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 890 "set_bbbtree.m"
            {
#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 890 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 890 "set_bbbtree.m"
            }
#line 890 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 890 "set_bbbtree.m"
            {
#line 890 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 890 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 890 "set_bbbtree.m"
            }
#line 890 "set_bbbtree.m"
            continue;
#line 888 "set_bbbtree.m"
          }
#line 886 "set_bbbtree.m"
      }
#line 886 "set_bbbtree.m"
      break;
#line 886 "set_bbbtree.m"
    }
#line 884 "set_bbbtree.m"
}

#line 883 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_0(
#line 883 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
#line 883 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 883 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 883 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_3)
#line 883 "set_bbbtree.m"
{
#line 886 "set_bbbtree.m"
  while (MR_TRUE)
#line 886 "set_bbbtree.m"
    {
#line 886 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 886 "set_bbbtree.m"
      {
#line 886 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 886 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "set_bbbtree.m"
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
#line 886 "set_bbbtree.m"
        else
#line 888 "set_bbbtree.m"
          {
#line 888 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__List0_11;
#line 888 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__V_12_12;
#line 888 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 889 "set_bbbtree.m"
            {
#line 889 "set_bbbtree.m"
              mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
#line 890 "set_bbbtree.m"
            {
#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 0) = mercury__set_bbbtree__V_5;
#line 890 "set_bbbtree.m"
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__V_12_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
#line 890 "set_bbbtree.m"
            }
#line 890 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 890 "set_bbbtree.m"
            {
#line 890 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_7;
#line 890 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__V_12_12;

#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 890 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 890 "set_bbbtree.m"
            }
#line 890 "set_bbbtree.m"
            continue;
#line 888 "set_bbbtree.m"
          }
#line 886 "set_bbbtree.m"
      }
#line 886 "set_bbbtree.m"
      break;
#line 886 "set_bbbtree.m"
    }
#line 883 "set_bbbtree.m"
}

#line 772 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__list_to_set_r_3_p_0(
#line 772 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 772 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_4,
#line 772 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_5,
#line 772 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__Ratio_6)
#line 772 "set_bbbtree.m"
{
#line 775 "set_bbbtree.m"
  {
#line 775 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 775 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__InitSet_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__Ratio_6);
#line 777 "set_bbbtree.m"
      return;
    }
#line 775 "set_bbbtree.m"
  }
#line 772 "set_bbbtree.m"
}

#line 634 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_list_r_4_p_0(
#line 634 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
#line 634 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 634 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 634 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 634 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 634 "set_bbbtree.m"
{
#line 637 "set_bbbtree.m"
  while (MR_TRUE)
#line 637 "set_bbbtree.m"
    {
#line 637 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 637 "set_bbbtree.m"
      {
#line 637 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 637 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 637 "set_bbbtree.m"
        else
#line 638 "set_bbbtree.m"
          {
#line 638 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 638 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 638 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;

#line 639 "set_bbbtree.m"
            {
#line 639 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__X_8, &mercury__set_bbbtree__STATE_VARIABLE_Set_13_13, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 640 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 640 "set_bbbtree.m"
            {
#line 640 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;
#line 640 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__Xs_9;

#line 640 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 640 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 640 "set_bbbtree.m"
            }
#line 640 "set_bbbtree.m"
            continue;
#line 638 "set_bbbtree.m"
          }
#line 637 "set_bbbtree.m"
      }
#line 637 "set_bbbtree.m"
      break;
#line 637 "set_bbbtree.m"
    }
#line 634 "set_bbbtree.m"
}

#line 602 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_r_4_p_0(
#line 602 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 602 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 602 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 602 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 602 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 602 "set_bbbtree.m"
{
#line 605 "set_bbbtree.m"
  {
#line 605 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 605 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "set_bbbtree.m"
      {
#line 605 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 605 "set_bbbtree.m"
        {
#line 605 "set_bbbtree.m"
          MR_Word base;
#line 605 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 605 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 605 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 605 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 605 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 605 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 605 "set_bbbtree.m"
        }
#line 605 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = MR_TRUE;
#line 605 "set_bbbtree.m"
      }
#line 605 "set_bbbtree.m"
    else
#line 607 "set_bbbtree.m"
      {
#line 607 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 607 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 607 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 607 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 607 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 608 "set_bbbtree.m"
        {
#line 608 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 614 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 611 "set_bbbtree.m"
          {
#line 611 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 612 "set_bbbtree.m"
            {
#line 612 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 611 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 611 "set_bbbtree.m"
              {
#line 613 "set_bbbtree.m"
                {
#line 613 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 613 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 611 "set_bbbtree.m"
              }
#line 611 "set_bbbtree.m"
          }
#line 614 "set_bbbtree.m"
        else
#line 614 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 2))
#line 616 "set_bbbtree.m"
          {
#line 616 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_19;

#line 617 "set_bbbtree.m"
            {
#line 617 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 616 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 616 "set_bbbtree.m"
              {
#line 618 "set_bbbtree.m"
                {
#line 618 "set_bbbtree.m"
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                }
#line 618 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 616 "set_bbbtree.m"
              }
#line 616 "set_bbbtree.m"
          }
#line 614 "set_bbbtree.m"
        else
#line 614 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = MR_FALSE;
#line 607 "set_bbbtree.m"
      }
#line 605 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 605 "set_bbbtree.m"
  }
#line 602 "set_bbbtree.m"
}

#line 573 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_r_4_p_0(
#line 573 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
#line 573 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 573 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_2,
#line 573 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
#line 573 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
#line 573 "set_bbbtree.m"
{
#line 576 "set_bbbtree.m"
  {
#line 576 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 576 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "set_bbbtree.m"
      {
#line 576 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 576 "set_bbbtree.m"
        {
#line 576 "set_bbbtree.m"
          MR_Word base;
#line 576 "set_bbbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 576 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = base;
#line 576 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
#line 576 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 576 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 576 "set_bbbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 576 "set_bbbtree.m"
        }
#line 576 "set_bbbtree.m"
      }
#line 576 "set_bbbtree.m"
    else
#line 578 "set_bbbtree.m"
      {
#line 578 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 578 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 578 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 578 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_17;
#line 578 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 579 "set_bbbtree.m"
        {
#line 579 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
#line 585 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 1))
#line 582 "set_bbbtree.m"
          {
#line 582 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_18;

#line 583 "set_bbbtree.m"
            {
#line 583 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 584 "set_bbbtree.m"
            {
#line 584 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 584 "set_bbbtree.m"
              return;
            }
#line 582 "set_bbbtree.m"
          }
#line 585 "set_bbbtree.m"
        else
#line 585 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_17 == (MR_Integer) 0))
#line 593 "set_bbbtree.m"
          *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
#line 585 "set_bbbtree.m"
        else
#line 587 "set_bbbtree.m"
          {
#line 587 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_19;

#line 588 "set_bbbtree.m"
            {
#line 588 "set_bbbtree.m"
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
            }
#line 589 "set_bbbtree.m"
            {
#line 589 "set_bbbtree.m"
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
#line 589 "set_bbbtree.m"
              return;
            }
#line 587 "set_bbbtree.m"
          }
#line 578 "set_bbbtree.m"
      }
#line 576 "set_bbbtree.m"
  }
#line 573 "set_bbbtree.m"
}

#line 462 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__def_ratio_1_p_0(
#line 462 "set_bbbtree.m"
  MR_Integer * mercury__set_bbbtree__HeadVar__1_1)
#line 462 "set_bbbtree.m"
{
#line 464 "set_bbbtree.m"
  {
#line 464 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 464 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 5;
#line 464 "set_bbbtree.m"
  }
#line 462 "set_bbbtree.m"
}

#line 404 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_4_p_0(
#line 404 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 404 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 404 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_6,
#line 404 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_7,
#line 404 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__FalseSet_8)
#line 404 "set_bbbtree.m"
{
#line 1409 "set_bbbtree.m"
  {
#line 1409 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_9;
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_10;
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__FalseList_11;
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_22;
#line 1409 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_29;

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__Set_6, mercury__set_bbbtree__V_15_15, &mercury__set_bbbtree__List_9);
    }
#line 1411 "set_bbbtree.m"
    {
#line 1411 "set_bbbtree.m"
      mercury__list__filter_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__P_5, mercury__set_bbbtree__List_9, &mercury__set_bbbtree__TrueList_10, &mercury__set_bbbtree__FalseList_11);
    }
#line 471 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_22, mercury__set_bbbtree__TrueList_10, mercury__set_bbbtree__TrueSet_7, (MR_Integer) 5);
    }
#line 471 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_29, mercury__set_bbbtree__FalseList_11, mercury__set_bbbtree__FalseSet_8, (MR_Integer) 5);
#line 777 "set_bbbtree.m"
      return;
    }
#line 1409 "set_bbbtree.m"
  }
#line 404 "set_bbbtree.m"
}

#line 397 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__filter_3_p_0(
#line 397 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 397 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_4,
#line 397 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_5,
#line 397 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__TrueSet_6)
#line 397 "set_bbbtree.m"
{
#line 1404 "set_bbbtree.m"
  {
#line 1404 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1404 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__List_7;
#line 1404 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__TrueList_8;
#line 1404 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1404 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_19;

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__V_12_12, &mercury__set_bbbtree__List_7);
    }
#line 1406 "set_bbbtree.m"
    {
#line 1406 "set_bbbtree.m"
      mercury__list__filter_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__P_4, mercury__set_bbbtree__List_7, &mercury__set_bbbtree__TrueList_8);
    }
#line 471 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__InitSet_19, mercury__set_bbbtree__TrueList_8, mercury__set_bbbtree__TrueSet_6, (MR_Integer) 5);
#line 777 "set_bbbtree.m"
      return;
    }
#line 1404 "set_bbbtree.m"
  }
#line 397 "set_bbbtree.m"
}

#line 392 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__filter_map_2_f_0(
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__PF_4,
#line 392 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 392 "set_bbbtree.m"
{
#line 1397 "set_bbbtree.m"
  {
#line 1397 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1397 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1397 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1397 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1397 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1397 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_34;

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 715 "list.opt"
    {
#line 715 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__PF_4, mercury__set_bbbtree__L1_7, &mercury__set_bbbtree__L2_8);
    }
#line 471 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_34, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1397 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1397 "set_bbbtree.m"
  }
#line 392 "set_bbbtree.m"
}

#line 388 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__map_2_f_0(
#line 388 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
#line 388 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
#line 388 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_4,
#line 388 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_5)
#line 388 "set_bbbtree.m"
{
#line 1392 "set_bbbtree.m"
  {
#line 1392 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1392 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S2_6;
#line 1392 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L1_7;
#line 1392 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L2_8;
#line 1392 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_20;

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__V_13_13, &mercury__set_bbbtree__L1_7);
    }
#line 1394 "set_bbbtree.m"
    {
#line 1394 "set_bbbtree.m"
      mercury__set_bbbtree__L2_8 = mercury__list__map_2_f_0(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__F_4, mercury__set_bbbtree__L1_7);
    }
#line 471 "set_bbbtree.m"
    mercury__set_bbbtree__InitSet_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_20, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
#line 1392 "set_bbbtree.m"
    return mercury__set_bbbtree__S2_6;
#line 1392 "set_bbbtree.m"
  }
#line 388 "set_bbbtree.m"
}

#line 385 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__all_true_2_p_0(
#line 385 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 385 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_3,
#line 385 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_4)
#line 385 "set_bbbtree.m"
{
#line 1386 "set_bbbtree.m"
  {
#line 1386 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1386 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_5;
#line 1386 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__S_4, mercury__set_bbbtree__V_9_9, &mercury__set_bbbtree__L_5);
    }
#line 1388 "set_bbbtree.m"
    {
#line 1388 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__all_true_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__P_3, mercury__set_bbbtree__L_5);
    }
#line 1386 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1386 "set_bbbtree.m"
  }
#line 385 "set_bbbtree.m"
}

#line 378 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_5(
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 378 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 378 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 378 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 378 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_7(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1381 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
  }
#line 378 "set_bbbtree.m"
}

#line 375 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_4(
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 375 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 375 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 375 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 375 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_6(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1381 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
  }
#line 375 "set_bbbtree.m"
}

#line 372 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_3(
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 372 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 372 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 372 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 372 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_5(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
#line 1381 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
  }
#line 372 "set_bbbtree.m"
}

#line 369 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_2(
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 369 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 369 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 369 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 369 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      mercury__list__foldl6_14_p_2(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1382 "set_bbbtree.m"
      return;
    }
#line 1381 "set_bbbtree.m"
  }
#line 369 "set_bbbtree.m"
}

#line 366 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_1(
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 366 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 366 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 366 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 366 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      mercury__list__foldl6_14_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1382 "set_bbbtree.m"
      return;
    }
#line 1381 "set_bbbtree.m"
  }
#line 366 "set_bbbtree.m"
}

#line 363 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold6_14_p_0(
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_15,
#line 363 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_16,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
#line 363 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
#line 363 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
#line 363 "set_bbbtree.m"
{
#line 1381 "set_bbbtree.m"
  {
#line 1381 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_35_35;
#line 1381 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__V_53_53, &mercury__set_bbbtree__V_35_35);
    }
#line 1382 "set_bbbtree.m"
    {
#line 1382 "set_bbbtree.m"
      mercury__list__foldl6_14_p_0(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__V_35_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
#line 1382 "set_bbbtree.m"
      return;
    }
#line 1381 "set_bbbtree.m"
  }
#line 363 "set_bbbtree.m"
}

#line 356 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_5(
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 356 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 356 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 356 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 356 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 356 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 356 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 356 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 356 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 356 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 356 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 356 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 356 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_5(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1378 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
  }
#line 356 "set_bbbtree.m"
}

#line 353 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_4(
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 353 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 353 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 353 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 353 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 353 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 353 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 353 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 353 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 353 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 353 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 353 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 353 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_4(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1378 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
  }
#line 353 "set_bbbtree.m"
}

#line 350 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_3(
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 350 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 350 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 350 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 350 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 350 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 350 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 350 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 350 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 350 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 350 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 350 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 350 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_3(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
#line 1378 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
  }
#line 350 "set_bbbtree.m"
}

#line 347 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_2(
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 347 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 347 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 347 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 347 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 347 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 347 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 347 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 347 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 347 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 347 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 347 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 347 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      mercury__list__foldl5_12_p_2(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1379 "set_bbbtree.m"
      return;
    }
#line 1378 "set_bbbtree.m"
  }
#line 347 "set_bbbtree.m"
}

#line 344 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_1(
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 344 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 344 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 344 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 344 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 344 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 344 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 344 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 344 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      mercury__list__foldl5_12_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1379 "set_bbbtree.m"
      return;
    }
#line 1378 "set_bbbtree.m"
  }
#line 344 "set_bbbtree.m"
}

#line 341 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold5_12_p_0(
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_13,
#line 341 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_14,
#line 341 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
#line 341 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
#line 341 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
#line 341 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
#line 341 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
#line 341 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
#line 341 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
#line 341 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
#line 341 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
#line 341 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
#line 341 "set_bbbtree.m"
{
#line 1378 "set_bbbtree.m"
  {
#line 1378 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_30_30;
#line 1378 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__V_46_46, &mercury__set_bbbtree__V_30_30);
    }
#line 1379 "set_bbbtree.m"
    {
#line 1379 "set_bbbtree.m"
      mercury__list__foldl5_12_p_0(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__V_30_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
#line 1379 "set_bbbtree.m"
      return;
    }
#line 1378 "set_bbbtree.m"
  }
#line 341 "set_bbbtree.m"
}

#line 334 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_5(
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 334 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 334 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 334 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 334 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 334 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 334 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 334 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 334 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 334 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 334 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_7(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1375 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
  }
#line 334 "set_bbbtree.m"
}

#line 331 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_4(
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 331 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 331 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 331 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 331 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 331 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 331 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 331 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 331 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 331 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 331 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_6(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1375 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
  }
#line 331 "set_bbbtree.m"
}

#line 328 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_3(
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 328 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 328 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 328 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 328 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 328 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 328 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 328 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 328 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 328 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 328 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_5(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
#line 1375 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
  }
#line 328 "set_bbbtree.m"
}

#line 325 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_2(
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 325 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 325 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 325 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 325 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 325 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 325 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 325 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 325 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 325 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 325 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      mercury__list__foldl4_10_p_2(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1376 "set_bbbtree.m"
      return;
    }
#line 1375 "set_bbbtree.m"
  }
#line 325 "set_bbbtree.m"
}

#line 322 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_1(
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 322 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 322 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 322 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 322 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 322 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 322 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 322 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      mercury__list__foldl4_10_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1376 "set_bbbtree.m"
      return;
    }
#line 1375 "set_bbbtree.m"
  }
#line 322 "set_bbbtree.m"
}

#line 319 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold4_10_p_0(
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_11,
#line 319 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_12,
#line 319 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
#line 319 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
#line 319 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
#line 319 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
#line 319 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
#line 319 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
#line 319 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
#line 319 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
#line 319 "set_bbbtree.m"
{
#line 1375 "set_bbbtree.m"
  {
#line 1375 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25;
#line 1375 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__V_39_39, &mercury__set_bbbtree__V_25_25);
    }
#line 1376 "set_bbbtree.m"
    {
#line 1376 "set_bbbtree.m"
      mercury__list__foldl4_10_p_0(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__V_25_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
#line 1376 "set_bbbtree.m"
      return;
    }
#line 1375 "set_bbbtree.m"
  }
#line 319 "set_bbbtree.m"
}

#line 314 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_5(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_5(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1372 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
  }
#line 314 "set_bbbtree.m"
}

#line 312 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_4(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_4(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1372 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
  }
#line 312 "set_bbbtree.m"
}

#line 310 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_3(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_3(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
#line 1372 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
  }
#line 310 "set_bbbtree.m"
}

#line 308 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_2(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      mercury__list__foldl3_8_p_2(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1373 "set_bbbtree.m"
      return;
    }
#line 1372 "set_bbbtree.m"
  }
#line 308 "set_bbbtree.m"
}

#line 306 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_1(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      mercury__list__foldl3_8_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1373 "set_bbbtree.m"
      return;
    }
#line 1372 "set_bbbtree.m"
  }
#line 306 "set_bbbtree.m"
}

#line 304 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold3_8_p_0(
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
#line 1372 "set_bbbtree.m"
  {
#line 1372 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_20_20;
#line 1372 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__V_32_32, &mercury__set_bbbtree__V_20_20);
    }
#line 1373 "set_bbbtree.m"
    {
#line 1373 "set_bbbtree.m"
      mercury__list__foldl3_8_p_0(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__V_20_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
#line 1373 "set_bbbtree.m"
      return;
    }
#line 1372 "set_bbbtree.m"
  }
#line 304 "set_bbbtree.m"
}

#line 299 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_5(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_6(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1369 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
  }
#line 299 "set_bbbtree.m"
}

#line 297 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_4(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_5(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1369 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
  }
#line 297 "set_bbbtree.m"
}

#line 295 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_3(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_4(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
#line 1369 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
  }
#line 295 "set_bbbtree.m"
}

#line 293 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_2(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      mercury__list__foldl2_6_p_2(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1370 "set_bbbtree.m"
      return;
    }
#line 1369 "set_bbbtree.m"
  }
#line 293 "set_bbbtree.m"
}

#line 291 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_1(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      mercury__list__foldl2_6_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1370 "set_bbbtree.m"
      return;
    }
#line 1369 "set_bbbtree.m"
  }
#line 291 "set_bbbtree.m"
}

#line 289 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold2_6_p_0(
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
#line 1369 "set_bbbtree.m"
  {
#line 1369 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_15_15;
#line 1369 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__V_25_25, &mercury__set_bbbtree__V_15_15);
    }
#line 1370 "set_bbbtree.m"
    {
#line 1370 "set_bbbtree.m"
      mercury__list__foldl2_6_p_0(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__V_15_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
#line 1370 "set_bbbtree.m"
      return;
    }
#line 1369 "set_bbbtree.m"
  }
#line 289 "set_bbbtree.m"
}

#line 285 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_5(
#line 285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
#line 285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
#line 285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__P_5,
#line 285 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 285 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
#line 285 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
#line 285 "set_bbbtree.m"
{
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_5(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1366 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
  }
#line 285 "set_bbbtree.m"
}

#line 284 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_4(
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
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_4(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1366 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
  }
#line 284 "set_bbbtree.m"
}

#line 283 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_3(
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
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_3(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
#line 1366 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
  }
#line 283 "set_bbbtree.m"
}

#line 282 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_2(
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
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      mercury__list__foldl_4_p_2(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1367 "set_bbbtree.m"
      return;
    }
#line 1366 "set_bbbtree.m"
  }
#line 282 "set_bbbtree.m"
}

#line 281 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_1(
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
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      mercury__list__foldl_4_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1367 "set_bbbtree.m"
      return;
    }
#line 1366 "set_bbbtree.m"
  }
#line 281 "set_bbbtree.m"
}

#line 280 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__fold_4_p_0(
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
#line 1366 "set_bbbtree.m"
  {
#line 1366 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_10_10;
#line 1366 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_18_18, &mercury__set_bbbtree__V_10_10);
    }
#line 1367 "set_bbbtree.m"
    {
#line 1367 "set_bbbtree.m"
      mercury__list__foldl_4_p_0(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__V_10_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
#line 1367 "set_bbbtree.m"
      return;
    }
#line 1366 "set_bbbtree.m"
  }
#line 280 "set_bbbtree.m"
}

#line 278 "set_bbbtree.m"
MR_Box MR_CALL 
mercury__set_bbbtree__fold_3_f_0(
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_10,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_11,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__F_5,
#line 278 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_6,
#line 278 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__A_7)
#line 278 "set_bbbtree.m"
{
#line 1363 "set_bbbtree.m"
  {
#line 1363 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1363 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__B_8;
#line 1363 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9;
#line 1363 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_10, mercury__set_bbbtree__S_6, mercury__set_bbbtree__V_16_16, &mercury__set_bbbtree__V_9_9);
    }
#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_bbbtree__F_5, mercury__set_bbbtree__V_9_9, mercury__set_bbbtree__A_7, &mercury__set_bbbtree__B_8);
    }
#line 1363 "set_bbbtree.m"
    return mercury__set_bbbtree__B_8;
#line 1363 "set_bbbtree.m"
  }
#line 278 "set_bbbtree.m"
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
#line 1069 "set_bbbtree.m"
  {
#line 1069 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1069 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;

#line 1050 "set_bbbtree.m"
    {
#line 1050 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1069 "set_bbbtree.m"
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
#line 1069 "set_bbbtree.m"
  {
#line 1069 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1069 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_5;

#line 1050 "set_bbbtree.m"
    {
#line 1050 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_5, (MR_Integer) 5);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 1069 "set_bbbtree.m"
  }
#line 271 "set_bbbtree.m"
}

#line 266 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__difference_2_f_0(
#line 266 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 266 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 266 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 266 "set_bbbtree.m"
{
#line 1048 "set_bbbtree.m"
  {
#line 1048 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1048 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 1050 "set_bbbtree.m"
    {
#line 1050 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 1048 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 1048 "set_bbbtree.m"
  }
#line 266 "set_bbbtree.m"
}

#line 263 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__difference_3_p_0(
#line 263 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 263 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 263 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 263 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 263 "set_bbbtree.m"
{
#line 1048 "set_bbbtree.m"
  {
#line 1048 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1050 "set_bbbtree.m"
    {
#line 1050 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 1050 "set_bbbtree.m"
      return;
    }
#line 1048 "set_bbbtree.m"
  }
#line 263 "set_bbbtree.m"
}

#line 257 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_1_f_0(
#line 257 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 257 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 257 "set_bbbtree.m"
{
#line 1023 "set_bbbtree.m"
  {
#line 1023 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 1023 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;

#line 1023 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "set_bbbtree.m"
      mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "set_bbbtree.m"
    else
#line 1025 "set_bbbtree.m"
      {
#line 1025 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Set_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1025 "set_bbbtree.m"
        {
#line 1025 "set_bbbtree.m"
          return mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__intersect_list_r_3_f_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Sets_4, (MR_Integer) 5);
        }
#line 1025 "set_bbbtree.m"
      }
#line 1023 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 1023 "set_bbbtree.m"
  }
#line 257 "set_bbbtree.m"
}

#line 252 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__power_intersect_1_f_0(
#line 252 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 252 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SS_3)
#line 252 "set_bbbtree.m"
{
#line 997 "set_bbbtree.m"
  {
#line 997 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 997 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 1004 "set_bbbtree.m"
    if ((mercury__set_bbbtree__SS_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "set_bbbtree.m"
    else
#line 1005 "set_bbbtree.m"
      {
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 0)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 2)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 3)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_16;
#line 1005 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 1)));

#line 1006 "set_bbbtree.m"
        {
#line 1006 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__L_12, mercury__set_bbbtree__V_10, &mercury__set_bbbtree__Intersection0_16, (MR_Integer) 5);
        }
#line 1007 "set_bbbtree.m"
        {
#line 1007 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__R_13, mercury__set_bbbtree__Intersection0_16, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
        }
#line 1005 "set_bbbtree.m"
      }
#line 997 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 997 "set_bbbtree.m"
  }
#line 252 "set_bbbtree.m"
}

#line 249 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_intersect_2_p_0(
#line 249 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 249 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Sets_3,
#line 249 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 249 "set_bbbtree.m"
{
#line 997 "set_bbbtree.m"
  {
#line 997 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 1004 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "set_bbbtree.m"
    else
#line 1005 "set_bbbtree.m"
      {
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 0)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 2)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 3)));
#line 1005 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Intersection0_14;
#line 1005 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 1)));

#line 1006 "set_bbbtree.m"
        {
#line 1006 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__L_10, mercury__set_bbbtree__V_8, &mercury__set_bbbtree__Intersection0_14, (MR_Integer) 5);
        }
#line 1007 "set_bbbtree.m"
        {
#line 1007 "set_bbbtree.m"
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__R_11, mercury__set_bbbtree__Intersection0_14, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 1007 "set_bbbtree.m"
          return;
        }
#line 1005 "set_bbbtree.m"
      }
#line 997 "set_bbbtree.m"
  }
#line 249 "set_bbbtree.m"
}

#line 244 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__intersect_2_f_0(
#line 244 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 244 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 244 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 244 "set_bbbtree.m"
{
#line 966 "set_bbbtree.m"
  {
#line 966 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 966 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 968 "set_bbbtree.m"
    {
#line 968 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 966 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 966 "set_bbbtree.m"
  }
#line 244 "set_bbbtree.m"
}

#line 241 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__intersect_3_p_0(
#line 241 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 241 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 241 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 241 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 241 "set_bbbtree.m"
{
#line 966 "set_bbbtree.m"
  {
#line 966 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 968 "set_bbbtree.m"
    {
#line 968 "set_bbbtree.m"
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 968 "set_bbbtree.m"
      return;
    }
#line 966 "set_bbbtree.m"
  }
#line 241 "set_bbbtree.m"
}

#line 236 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__power_union_1_f_0(
#line 236 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 236 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SS_3)
#line 236 "set_bbbtree.m"
{
#line 940 "set_bbbtree.m"
  {
#line 940 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 940 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 942 "set_bbbtree.m"
    {
#line 942 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SS_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 940 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 940 "set_bbbtree.m"
  }
#line 236 "set_bbbtree.m"
}

#line 233 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__power_union_2_p_0(
#line 233 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 233 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Sets_3,
#line 233 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 233 "set_bbbtree.m"
{
#line 940 "set_bbbtree.m"
  {
#line 940 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 942 "set_bbbtree.m"
    {
#line 942 "set_bbbtree.m"
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Sets_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 942 "set_bbbtree.m"
      return;
    }
#line 940 "set_bbbtree.m"
  }
#line 233 "set_bbbtree.m"
}

#line 228 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__union_list_1_f_0(
#line 228 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 228 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__ListofSets_3)
#line 228 "set_bbbtree.m"
{
#line 922 "set_bbbtree.m"
  {
#line 922 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 922 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__HeadVar__2_2;
#line 922 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__ListofSets_3, mercury__set_bbbtree__V_5_5, &mercury__set_bbbtree__HeadVar__2_2);
    }
#line 922 "set_bbbtree.m"
    return mercury__set_bbbtree__HeadVar__2_2;
#line 922 "set_bbbtree.m"
  }
#line 228 "set_bbbtree.m"
}

#line 223 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__union_2_f_0(
#line 223 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 223 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S1_4,
#line 223 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S2_5)
#line 223 "set_bbbtree.m"
{
#line 901 "set_bbbtree.m"
  {
#line 901 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 901 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S3_6;

#line 903 "set_bbbtree.m"
    {
#line 903 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
#line 901 "set_bbbtree.m"
    return mercury__set_bbbtree__S3_6;
#line 901 "set_bbbtree.m"
  }
#line 223 "set_bbbtree.m"
}

#line 220 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__union_3_p_0(
#line 220 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
#line 220 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_4,
#line 220 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_5,
#line 220 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_6)
#line 220 "set_bbbtree.m"
{
#line 901 "set_bbbtree.m"
  {
#line 901 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 903 "set_bbbtree.m"
    {
#line 903 "set_bbbtree.m"
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
#line 903 "set_bbbtree.m"
      return;
    }
#line 901 "set_bbbtree.m"
  }
#line 220 "set_bbbtree.m"
}

#line 215 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__to_sorted_list_1_f_0(
#line 215 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 215 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__S_3)
#line 215 "set_bbbtree.m"
{
#line 879 "set_bbbtree.m"
  {
#line 879 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 879 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Xs_4;
#line 879 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__S_3, mercury__set_bbbtree__V_8_8, &mercury__set_bbbtree__Xs_4);
    }
#line 879 "set_bbbtree.m"
    return mercury__set_bbbtree__Xs_4;
#line 879 "set_bbbtree.m"
  }
#line 215 "set_bbbtree.m"
}

#line 213 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_1(
#line 213 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 213 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 213 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_4)
#line 213 "set_bbbtree.m"
{
#line 879 "set_bbbtree.m"
  {
#line 879 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 879 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 880 "set_bbbtree.m"
      return;
    }
#line 879 "set_bbbtree.m"
  }
#line 213 "set_bbbtree.m"
}

#line 212 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_0(
#line 212 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 212 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 212 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__List_4)
#line 212 "set_bbbtree.m"
{
#line 879 "set_bbbtree.m"
  {
#line 879 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 879 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 880 "set_bbbtree.m"
    {
#line 880 "set_bbbtree.m"
      mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__V_5_5, mercury__set_bbbtree__List_4);
#line 880 "set_bbbtree.m"
      return;
    }
#line 879 "set_bbbtree.m"
  }
#line 212 "set_bbbtree.m"
}

#line 205 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_len_3_p_0(
#line 205 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 205 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 205 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
#line 205 "set_bbbtree.m"
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
#line 205 "set_bbbtree.m"
{
#line 806 "set_bbbtree.m"
  {
#line 806 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 806 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "set_bbbtree.m"
    else
#line 807 "set_bbbtree.m"
      {
#line 807 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_9;

#line 808 "set_bbbtree.m"
        {
#line 808 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, &mercury__set_bbbtree__RestOfList_9, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__2_2);
        }
#line 812 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "set_bbbtree.m"
          {
#line 811 "set_bbbtree.m"
          }
#line 812 "set_bbbtree.m"
        else
#line 813 "set_bbbtree.m"
          {
#line 815 "set_bbbtree.m"
            {
#line 815 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 815 "set_bbbtree.m"
              return;
            }
#line 813 "set_bbbtree.m"
          }
#line 807 "set_bbbtree.m"
      }
#line 806 "set_bbbtree.m"
  }
#line 205 "set_bbbtree.m"
}

#line 195 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__from_sorted_list_1_f_0(
#line 195 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 195 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3)
#line 195 "set_bbbtree.m"
{
#line 869 "set_bbbtree.m"
  {
#line 869 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 869 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;

#line 869 "set_bbbtree.m"
    {
#line 869 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4);
    }
#line 869 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 869 "set_bbbtree.m"
  }
#line 195 "set_bbbtree.m"
}

#line 191 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_1_f_0(
#line 191 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 191 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_3)
#line 191 "set_bbbtree.m"
{
#line 800 "set_bbbtree.m"
  {
#line 800 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 800 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;

#line 800 "set_bbbtree.m"
    {
#line 800 "set_bbbtree.m"
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4);
    }
#line 800 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 800 "set_bbbtree.m"
  }
#line 191 "set_bbbtree.m"
}

#line 188 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_2_p_0(
#line 188 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 188 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3,
#line 188 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 188 "set_bbbtree.m"
{
#line 802 "set_bbbtree.m"
  {
#line 802 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 802 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_5;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__List_3, (MR_Integer) 0, &mercury__set_bbbtree__N_5);
    }
#line 806 "set_bbbtree.m"
    if ((mercury__set_bbbtree__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "set_bbbtree.m"
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "set_bbbtree.m"
    else
#line 807 "set_bbbtree.m"
      {
#line 807 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__RestOfList_15;

#line 808 "set_bbbtree.m"
        {
#line 808 "set_bbbtree.m"
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_3, &mercury__set_bbbtree__RestOfList_15, mercury__set_bbbtree__N_5, mercury__set_bbbtree__Set_4);
        }
#line 812 "set_bbbtree.m"
        if ((mercury__set_bbbtree__RestOfList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "set_bbbtree.m"
          {
#line 811 "set_bbbtree.m"
          }
#line 812 "set_bbbtree.m"
        else
#line 813 "set_bbbtree.m"
          {
#line 815 "set_bbbtree.m"
            {
#line 815 "set_bbbtree.m"
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
#line 815 "set_bbbtree.m"
              return;
            }
#line 813 "set_bbbtree.m"
          }
#line 807 "set_bbbtree.m"
      }
#line 802 "set_bbbtree.m"
  }
#line 188 "set_bbbtree.m"
}

#line 182 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__from_list_1_f_0(
#line 182 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 182 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3)
#line 182 "set_bbbtree.m"
{
#line 768 "set_bbbtree.m"
  {
#line 768 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 768 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_4;
#line 768 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
#line 768 "set_bbbtree.m"
    return mercury__set_bbbtree__Set_4;
#line 768 "set_bbbtree.m"
  }
#line 182 "set_bbbtree.m"
}

#line 178 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__list_to_set_1_f_0(
#line 178 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 178 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_3)
#line 178 "set_bbbtree.m"
{
#line 768 "set_bbbtree.m"
  {
#line 768 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 768 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 768 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
#line 768 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 768 "set_bbbtree.m"
  }
#line 178 "set_bbbtree.m"
}

#line 176 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__list_to_set_2_p_0(
#line 176 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 176 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_3,
#line 176 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_4)
#line 176 "set_bbbtree.m"
{
#line 768 "set_bbbtree.m"
  {
#line 768 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 768 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__InitSet_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 777 "set_bbbtree.m"
    {
#line 777 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__InitSet_10, mercury__set_bbbtree__List_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
#line 777 "set_bbbtree.m"
      return;
    }
#line 768 "set_bbbtree.m"
  }
#line 176 "set_bbbtree.m"
}

#line 170 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_largest_3_p_0(
#line 170 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 170 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_4,
#line 170 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 170 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 170 "set_bbbtree.m"
{
#line 749 "set_bbbtree.m"
  {
#line 749 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 749 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 749 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 749 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 749 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 749 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 749 "set_bbbtree.m"
      {
#line 749 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 749 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 749 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 749 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 755 "set_bbbtree.m"
        if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 752 "set_bbbtree.m"
          {
#line 753 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 754 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 752 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 752 "set_bbbtree.m"
          }
#line 755 "set_bbbtree.m"
        else
#line 757 "set_bbbtree.m"
          {
#line 757 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_14;
#line 757 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 757 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 758 "set_bbbtree.m"
            {
#line 758 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_14);
            }
#line 757 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 757 "set_bbbtree.m"
              {
#line 759 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 759 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 760 "set_bbbtree.m"
                {
#line 760 "set_bbbtree.m"
                  MR_Word base;
#line 760 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 760 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 760 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 760 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 760 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 760 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_14));
#line 760 "set_bbbtree.m"
                }
#line 760 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 757 "set_bbbtree.m"
              }
#line 757 "set_bbbtree.m"
          }
#line 749 "set_bbbtree.m"
      }
#line 749 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 749 "set_bbbtree.m"
  }
#line 170 "set_bbbtree.m"
}

#line 163 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_least_3_p_0(
#line 163 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 163 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_4,
#line 163 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 163 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 163 "set_bbbtree.m"
{
#line 729 "set_bbbtree.m"
  {
#line 729 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 729 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 729 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 729 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 729 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;

#line 729 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 729 "set_bbbtree.m"
      {
#line 729 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 729 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 729 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 729 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 735 "set_bbbtree.m"
        if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "set_bbbtree.m"
          {
#line 733 "set_bbbtree.m"
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
#line 734 "set_bbbtree.m"
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 732 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 732 "set_bbbtree.m"
          }
#line 735 "set_bbbtree.m"
        else
#line 737 "set_bbbtree.m"
          {
#line 737 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_14;
#line 737 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_15;
#line 737 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_16_16;

#line 738 "set_bbbtree.m"
            {
#line 738 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_14);
            }
#line 737 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 737 "set_bbbtree.m"
              {
#line 739 "set_bbbtree.m"
                mercury__set_bbbtree__V_16_16 = (MR_Integer) 1;
#line 739 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_16_16);
#line 740 "set_bbbtree.m"
                {
#line 740 "set_bbbtree.m"
                  MR_Word base;
#line 740 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 740 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 740 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 740 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
#line 740 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_14));
#line 740 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 740 "set_bbbtree.m"
                }
#line 740 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 737 "set_bbbtree.m"
              }
#line 737 "set_bbbtree.m"
          }
#line 729 "set_bbbtree.m"
      }
#line 729 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 729 "set_bbbtree.m"
  }
#line 163 "set_bbbtree.m"
}

#line 156 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_list_3_p_0(
#line 156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 156 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
#line 156 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
#line 156 "set_bbbtree.m"
{
#line 718 "set_bbbtree.m"
  while (MR_TRUE)
#line 718 "set_bbbtree.m"
    {
#line 718 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 718 "set_bbbtree.m"
      {
#line 718 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 718 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "set_bbbtree.m"
          {
#line 718 "set_bbbtree.m"
            *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 718 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 718 "set_bbbtree.m"
          }
#line 718 "set_bbbtree.m"
        else
#line 719 "set_bbbtree.m"
          {
#line 719 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 719 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 719 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 720 "set_bbbtree.m"
            {
#line 720 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__STATE_VARIABLE_Set_12_12);
            }
#line 719 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 721 "set_bbbtree.m"
              {
#line 721 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 721 "set_bbbtree.m"
                {
#line 721 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 721 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 721 "set_bbbtree.m"
                  mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 721 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 721 "set_bbbtree.m"
                }
#line 721 "set_bbbtree.m"
                continue;
#line 721 "set_bbbtree.m"
              }
#line 719 "set_bbbtree.m"
          }
#line 718 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 718 "set_bbbtree.m"
      }
#line 718 "set_bbbtree.m"
      break;
#line 718 "set_bbbtree.m"
    }
#line 156 "set_bbbtree.m"
}

#line 148 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__remove_3_p_0(
#line 148 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
#line 148 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 148 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 148 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Set_9)
#line 148 "set_bbbtree.m"
{
#line 696 "set_bbbtree.m"
  {
#line 696 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 696 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_5;
#line 696 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__N_6;
#line 696 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__L_7;
#line 696 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__R_8;
#line 696 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Result_10;

#line 696 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 696 "set_bbbtree.m"
      {
#line 696 "set_bbbtree.m"
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 696 "set_bbbtree.m"
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "set_bbbtree.m"
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 696 "set_bbbtree.m"
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 697 "set_bbbtree.m"
        {
#line 697 "set_bbbtree.m"
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__Result_10, mercury__set_bbbtree__X_4, mercury__set_bbbtree__V_5);
        }
#line 704 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 1))
#line 700 "set_bbbtree.m"
          {
#line 700 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewL_11;
#line 700 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_12;
#line 700 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_15_15;

#line 701 "set_bbbtree.m"
            {
#line 701 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_11);
            }
#line 700 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 700 "set_bbbtree.m"
              {
#line 702 "set_bbbtree.m"
                mercury__set_bbbtree__V_15_15 = (MR_Integer) 1;
#line 702 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_12 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_15_15);
#line 703 "set_bbbtree.m"
                {
#line 703 "set_bbbtree.m"
                  MR_Word base;
#line 703 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 703 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 703 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 703 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_12));
#line 703 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_11));
#line 703 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
#line 703 "set_bbbtree.m"
                }
#line 703 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 700 "set_bbbtree.m"
              }
#line 700 "set_bbbtree.m"
          }
#line 704 "set_bbbtree.m"
        else
#line 704 "set_bbbtree.m"
        if ((mercury__set_bbbtree__Result_10 == (MR_Integer) 0))
#line 1245 "set_bbbtree.m"
          {
#line 1245 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__LSize_21;

#line 486 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
              mercury__set_bbbtree__LSize_21 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
            else
#line 487 "set_bbbtree.m"
              {
#line 487 "set_bbbtree.m"
                MR_Box mercury__set_bbbtree___V_29 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___L_31;
#line 487 "set_bbbtree.m"
                MR_Word mercury__set_bbbtree___R_32;

#line 487 "set_bbbtree.m"
                mercury__set_bbbtree__LSize_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___L_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                mercury__set_bbbtree___R_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
              }
#line 1247 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 == (MR_Integer) 0);
#line 1250 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 1249 "set_bbbtree.m"
              *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
#line 1250 "set_bbbtree.m"
            else
#line 1251 "set_bbbtree.m"
              {
#line 1251 "set_bbbtree.m"
                MR_Integer mercury__set_bbbtree__RSize_22;

#line 486 "set_bbbtree.m"
                if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
                  mercury__set_bbbtree__RSize_22 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
                else
#line 487 "set_bbbtree.m"
                  {
#line 487 "set_bbbtree.m"
                    MR_Box mercury__set_bbbtree___V_33 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___L_35;
#line 487 "set_bbbtree.m"
                    MR_Word mercury__set_bbbtree___R_36;

#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree__RSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___L_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
                    mercury__set_bbbtree___R_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
                  }
#line 1252 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_22 == (MR_Integer) 0);
#line 1255 "set_bbbtree.m"
                if (mercury__set_bbbtree__succeeded)
#line 1254 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
#line 1255 "set_bbbtree.m"
                else
#line 1268 "set_bbbtree.m"
                  {
#line 1262 "set_bbbtree.m"
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 > mercury__set_bbbtree__RSize_22);
#line 1268 "set_bbbtree.m"
                    if (mercury__set_bbbtree__succeeded)
#line 1265 "set_bbbtree.m"
                      {
#line 1265 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_23;
#line 1265 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewL_24;

#line 1263 "set_bbbtree.m"
                        {
#line 1263 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_23, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_24);
                        }
#line 1265 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1264 "set_bbbtree.m"
                          {
#line 1264 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_23, mercury__set_bbbtree__NewL_24, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                          }
#line 1265 "set_bbbtree.m"
                        else
#line 1266 "set_bbbtree.m"
                          {
#line 1266 "set_bbbtree.m"
                            {
#line 1266 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                            }
#line 1266 "set_bbbtree.m"
                          }
#line 1265 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                    else
#line 1271 "set_bbbtree.m"
                      {
#line 1271 "set_bbbtree.m"
                        MR_Word mercury__set_bbbtree__NewR_25;
#line 1271 "set_bbbtree.m"
                        MR_Box mercury__set_bbbtree__X_28;

#line 1269 "set_bbbtree.m"
                        {
#line 1269 "set_bbbtree.m"
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_28, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_25);
                        }
#line 1271 "set_bbbtree.m"
                        if (mercury__set_bbbtree__succeeded)
#line 1270 "set_bbbtree.m"
                          {
#line 1270 "set_bbbtree.m"
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_28, mercury__set_bbbtree__L_7, mercury__set_bbbtree__NewR_25, mercury__set_bbbtree__Set_9);
                          }
#line 1271 "set_bbbtree.m"
                        else
#line 1272 "set_bbbtree.m"
                          {
#line 1272 "set_bbbtree.m"
                            {
#line 1272 "set_bbbtree.m"
                              mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                            }
#line 1272 "set_bbbtree.m"
                          }
#line 1271 "set_bbbtree.m"
                      }
#line 1268 "set_bbbtree.m"
                  }
#line 1251 "set_bbbtree.m"
              }
#line 1245 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = MR_TRUE;
#line 1245 "set_bbbtree.m"
          }
#line 704 "set_bbbtree.m"
        else
#line 706 "set_bbbtree.m"
          {
#line 706 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewR_13;
#line 706 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__V_14_14;
#line 706 "set_bbbtree.m"
            MR_Integer mercury__set_bbbtree__NewN_16;

#line 707 "set_bbbtree.m"
            {
#line 707 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_13);
            }
#line 706 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 706 "set_bbbtree.m"
              {
#line 708 "set_bbbtree.m"
                mercury__set_bbbtree__V_14_14 = (MR_Integer) 1;
#line 708 "set_bbbtree.m"
                mercury__set_bbbtree__NewN_16 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__V_14_14);
#line 709 "set_bbbtree.m"
                {
#line 709 "set_bbbtree.m"
                  MR_Word base;
#line 709 "set_bbbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 709 "set_bbbtree.m"
                  *mercury__set_bbbtree__Set_9 = base;
#line 709 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
#line 709 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_16));
#line 709 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
#line 709 "set_bbbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_13));
#line 709 "set_bbbtree.m"
                }
#line 709 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 706 "set_bbbtree.m"
              }
#line 706 "set_bbbtree.m"
          }
#line 696 "set_bbbtree.m"
      }
#line 696 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 696 "set_bbbtree.m"
  }
#line 148 "set_bbbtree.m"
}

#line 141 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__delete_list_2_f_0(
#line 141 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 141 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 141 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_5)
#line 141 "set_bbbtree.m"
{
#line 686 "set_bbbtree.m"
  {
#line 686 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 686 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 686 "set_bbbtree.m"
    {
#line 686 "set_bbbtree.m"
      mercury__set_bbbtree__delete_list_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Xs_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__STATE_VARIABLE_S_7);
    }
#line 686 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 686 "set_bbbtree.m"
  }
#line 141 "set_bbbtree.m"
}

#line 138 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_list_3_p_0(
#line 138 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
#line 138 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 138 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
#line 138 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
#line 138 "set_bbbtree.m"
{
#line 688 "set_bbbtree.m"
  while (MR_TRUE)
#line 688 "set_bbbtree.m"
    {
#line 688 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 688 "set_bbbtree.m"
      {
#line 688 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded;

#line 688 "set_bbbtree.m"
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "set_bbbtree.m"
          *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 688 "set_bbbtree.m"
        else
#line 689 "set_bbbtree.m"
          {
#line 689 "set_bbbtree.m"
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 689 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 689 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;
#line 689 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 678 "set_bbbtree.m"
            MR_Word mercury__set_bbbtree__NewSet_19;

#line 676 "set_bbbtree.m"
            {
#line 676 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__NewSet_19);
            }
#line 678 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 677 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__NewSet_19;
#line 678 "set_bbbtree.m"
            else
#line 678 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
#line 681 "set_bbbtree.m"
            mercury__set_bbbtree__STATE_VARIABLE_Set_12_12 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
#line 691 "set_bbbtree.m"
            /* direct tailcall eliminated */
#line 691 "set_bbbtree.m"
            {
#line 691 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__Xs_8;
#line 691 "set_bbbtree.m"
              MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

#line 691 "set_bbbtree.m"
              mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_0__tmp_copy_2;
#line 691 "set_bbbtree.m"
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 691 "set_bbbtree.m"
            }
#line 691 "set_bbbtree.m"
            continue;
#line 689 "set_bbbtree.m"
          }
#line 688 "set_bbbtree.m"
      }
#line 688 "set_bbbtree.m"
      break;
#line 688 "set_bbbtree.m"
    }
#line 138 "set_bbbtree.m"
}

#line 132 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__delete_2_f_0(
#line 132 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 132 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 132 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_5)
#line 132 "set_bbbtree.m"
{
#line 675 "set_bbbtree.m"
  {
#line 675 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 675 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 675 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 678 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_14;

#line 676 "set_bbbtree.m"
    {
#line 676 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__T_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__NewSet_14);
    }
#line 678 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 677 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__NewSet_14;
#line 678 "set_bbbtree.m"
    else
#line 678 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__STATE_VARIABLE_S_0_6;
#line 681 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 675 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 675 "set_bbbtree.m"
  }
#line 132 "set_bbbtree.m"
}

#line 130 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_3_p_1(
#line 130 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 130 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 130 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 130 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 130 "set_bbbtree.m"
{
#line 675 "set_bbbtree.m"
  {
#line 675 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 675 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 678 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 676 "set_bbbtree.m"
    {
#line 676 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 678 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 677 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 678 "set_bbbtree.m"
    else
#line 678 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 681 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 675 "set_bbbtree.m"
  }
#line 130 "set_bbbtree.m"
}

#line 129 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__delete_3_p_0(
#line 129 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 129 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 129 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 129 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 129 "set_bbbtree.m"
{
#line 675 "set_bbbtree.m"
  {
#line 675 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 675 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 678 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__NewSet_6;

#line 676 "set_bbbtree.m"
    {
#line 676 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
#line 678 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 677 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
#line 678 "set_bbbtree.m"
    else
#line 678 "set_bbbtree.m"
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
#line 681 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 675 "set_bbbtree.m"
  }
#line 129 "set_bbbtree.m"
}

#line 121 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__insert_list_2_f_0(
#line 121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 121 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Xs_5)
#line 121 "set_bbbtree.m"
{
#line 630 "set_bbbtree.m"
  {
#line 630 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 630 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

#line 632 "set_bbbtree.m"
    {
#line 632 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__Xs_5, &mercury__set_bbbtree__STATE_VARIABLE_S_7, (MR_Integer) 5);
    }
#line 630 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 630 "set_bbbtree.m"
  }
#line 121 "set_bbbtree.m"
}

#line 118 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_list_3_p_0(
#line 118 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
#line 118 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__List_4,
#line 118 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 118 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 118 "set_bbbtree.m"
{
#line 630 "set_bbbtree.m"
  {
#line 630 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 632 "set_bbbtree.m"
    {
#line 632 "set_bbbtree.m"
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
#line 632 "set_bbbtree.m"
      return;
    }
#line 630 "set_bbbtree.m"
  }
#line 118 "set_bbbtree.m"
}

#line 112 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_3_p_0(
#line 112 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
#line 112 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 112 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 112 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 112 "set_bbbtree.m"
{
#line 596 "set_bbbtree.m"
  {
#line 596 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 600 "set_bbbtree.m"
    {
#line 600 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
    }
#line 596 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 596 "set_bbbtree.m"
  }
#line 112 "set_bbbtree.m"
}

#line 106 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__insert_2_f_0(
#line 106 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 106 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
#line 106 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_5)
#line 106 "set_bbbtree.m"
{
#line 565 "set_bbbtree.m"
  {
#line 565 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 565 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 565 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;

#line 569 "set_bbbtree.m"
    {
#line 569 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__T_5, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_15, (MR_Integer) 5);
    }
#line 571 "set_bbbtree.m"
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
#line 565 "set_bbbtree.m"
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
#line 565 "set_bbbtree.m"
  }
#line 106 "set_bbbtree.m"
}

#line 104 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_3_p_1(
#line 104 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 104 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 104 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 104 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 104 "set_bbbtree.m"
{
#line 565 "set_bbbtree.m"
  {
#line 565 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 565 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 569 "set_bbbtree.m"
    {
#line 569 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 571 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 565 "set_bbbtree.m"
  }
#line 104 "set_bbbtree.m"
}

#line 103 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__insert_3_p_0(
#line 103 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
#line 103 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 103 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
#line 103 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
#line 103 "set_bbbtree.m"
{
#line 565 "set_bbbtree.m"
  {
#line 565 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 565 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

#line 569 "set_bbbtree.m"
    {
#line 569 "set_bbbtree.m"
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
#line 571 "set_bbbtree.m"
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
#line 565 "set_bbbtree.m"
  }
#line 103 "set_bbbtree.m"
}

#line 97 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__equal_2_p_0(
#line 97 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 97 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetA_3,
#line 97 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__SetB_4)
#line 97 "set_bbbtree.m"
{
#line 556 "set_bbbtree.m"
  {
#line 556 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 556 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_8;
#line 556 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__Set_15;
#line 556 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Ratio_19;

#line 1050 "set_bbbtree.m"
    {
#line 1050 "set_bbbtree.m"
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
#line 475 "set_bbbtree.m"
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 556 "set_bbbtree.m"
      {
#line 464 "set_bbbtree.m"
        mercury__set_bbbtree__Ratio_19 = (MR_Integer) 5;
#line 1050 "set_bbbtree.m"
        {
#line 1050 "set_bbbtree.m"
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_15, mercury__set_bbbtree__Ratio_19);
        }
#line 475 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "set_bbbtree.m"
      }
#line 556 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 556 "set_bbbtree.m"
  }
#line 97 "set_bbbtree.m"
}

#line 92 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__is_singleton_2_p_0(
#line 92 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 92 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 92 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__V_3)
#line 92 "set_bbbtree.m"
{
#line 552 "set_bbbtree.m"
  {
#line 552 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 552 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 552 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 552 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;

#line 552 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 552 "set_bbbtree.m"
      {
#line 552 "set_bbbtree.m"
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 552 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 552 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 552 "set_bbbtree.m"
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_4_4 == (MR_Integer) 1);
#line 552 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 552 "set_bbbtree.m"
          {
#line 552 "set_bbbtree.m"
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "set_bbbtree.m"
            if (mercury__set_bbbtree__succeeded)
#line 552 "set_bbbtree.m"
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "set_bbbtree.m"
          }
#line 552 "set_bbbtree.m"
      }
#line 552 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 552 "set_bbbtree.m"
  }
#line 92 "set_bbbtree.m"
}

#line 90 "set_bbbtree.m"
MR_Word MR_CALL 
mercury__set_bbbtree__make_singleton_set_1_f_0(
#line 90 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 90 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__T_3)
#line 90 "set_bbbtree.m"
{
#line 550 "set_bbbtree.m"
  {
#line 550 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_4;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 550 "set_bbbtree.m"
    {
#line 550 "set_bbbtree.m"
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 0) = mercury__set_bbbtree__T_3;
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 1) = ((MR_Box) ((MR_Integer) 1));
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 2) = ((MR_Box) (mercury__set_bbbtree__V_8_8));
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 3) = ((MR_Box) (mercury__set_bbbtree__V_9_9));
#line 550 "set_bbbtree.m"
    }
#line 550 "set_bbbtree.m"
    return mercury__set_bbbtree__S_4;
#line 550 "set_bbbtree.m"
  }
#line 90 "set_bbbtree.m"
}

#line 88 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_2(
#line 88 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 88 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__V_3,
#line 88 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 88 "set_bbbtree.m"
{
#line 550 "set_bbbtree.m"
  {
#line 550 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
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
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
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
#line 88 "set_bbbtree.m"
}

#line 87 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_1(
#line 87 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 87 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 87 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 87 "set_bbbtree.m"
{
#line 550 "set_bbbtree.m"
  {
#line 550 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 550 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_4_4;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6;
#line 550 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_8_8;

#line 550 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 550 "set_bbbtree.m"
      {
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 550 "set_bbbtree.m"
        mercury__set_bbbtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 550 "set_bbbtree.m"
        {
#line 550 "set_bbbtree.m"
          mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__V_3, mercury__set_bbbtree__V_8_8);
        }
#line 550 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 550 "set_bbbtree.m"
          {
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
      }
#line 550 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 550 "set_bbbtree.m"
  }
#line 87 "set_bbbtree.m"
}

#line 86 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_0(
#line 86 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 86 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__V_3,
#line 86 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__HeadVar__2_2)
#line 86 "set_bbbtree.m"
{
#line 550 "set_bbbtree.m"
  {
#line 550 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 550 "set_bbbtree.m"
    {
#line 550 "set_bbbtree.m"
      MR_Word base;
#line 550 "set_bbbtree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 550 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = base;
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_3;
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__V_5_5));
#line 550 "set_bbbtree.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__V_6_6));
#line 550 "set_bbbtree.m"
    }
#line 550 "set_bbbtree.m"
  }
#line 86 "set_bbbtree.m"
}

#line 80 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_1(
#line 80 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 80 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 80 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_7)
#line 80 "set_bbbtree.m"
{
#line 534 "set_bbbtree.m"
  while (MR_TRUE)
#line 534 "set_bbbtree.m"
    {
#line 534 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 534 "set_bbbtree.m"
      {
#line 534 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 534 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 534 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 534 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 534 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 534 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 534 "set_bbbtree.m"
          {
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 539 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "set_bbbtree.m"
              {
#line 538 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 539 "set_bbbtree.m"
            else
#line 542 "set_bbbtree.m"
              {
#line 542 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 542 "set_bbbtree.m"
                {
#line 542 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 542 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 542 "set_bbbtree.m"
                }
#line 542 "set_bbbtree.m"
                continue;
#line 542 "set_bbbtree.m"
              }
#line 534 "set_bbbtree.m"
          }
#line 534 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 534 "set_bbbtree.m"
      }
#line 534 "set_bbbtree.m"
      break;
#line 534 "set_bbbtree.m"
    }
#line 80 "set_bbbtree.m"
}

#line 79 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_0(
#line 79 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 79 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 79 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_7)
#line 79 "set_bbbtree.m"
{
#line 534 "set_bbbtree.m"
  while (MR_TRUE)
#line 534 "set_bbbtree.m"
    {
#line 534 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 534 "set_bbbtree.m"
      {
#line 534 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 534 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 534 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_6;
#line 534 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 534 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;

#line 534 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 534 "set_bbbtree.m"
          {
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 534 "set_bbbtree.m"
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 539 "set_bbbtree.m"
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "set_bbbtree.m"
              {
#line 538 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 538 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 538 "set_bbbtree.m"
              }
#line 539 "set_bbbtree.m"
            else
#line 542 "set_bbbtree.m"
              {
#line 542 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 542 "set_bbbtree.m"
                {
#line 542 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__R_6;

#line 542 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 542 "set_bbbtree.m"
                }
#line 542 "set_bbbtree.m"
                continue;
#line 542 "set_bbbtree.m"
              }
#line 534 "set_bbbtree.m"
          }
#line 534 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 534 "set_bbbtree.m"
      }
#line 534 "set_bbbtree.m"
      break;
#line 534 "set_bbbtree.m"
    }
#line 79 "set_bbbtree.m"
}

#line 73 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_1(
#line 73 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 73 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 73 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_7)
#line 73 "set_bbbtree.m"
{
#line 520 "set_bbbtree.m"
  while (MR_TRUE)
#line 520 "set_bbbtree.m"
    {
#line 520 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 520 "set_bbbtree.m"
      {
#line 520 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 520 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 520 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 520 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 520 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 520 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 520 "set_bbbtree.m"
          {
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 525 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "set_bbbtree.m"
              {
#line 524 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
#line 525 "set_bbbtree.m"
            else
#line 528 "set_bbbtree.m"
              {
#line 528 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 528 "set_bbbtree.m"
                {
#line 528 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 528 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 528 "set_bbbtree.m"
                }
#line 528 "set_bbbtree.m"
                continue;
#line 528 "set_bbbtree.m"
              }
#line 520 "set_bbbtree.m"
          }
#line 520 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 520 "set_bbbtree.m"
      }
#line 520 "set_bbbtree.m"
      break;
#line 520 "set_bbbtree.m"
    }
#line 73 "set_bbbtree.m"
}

#line 72 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_0(
#line 72 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
#line 72 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 72 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_7)
#line 72 "set_bbbtree.m"
{
#line 520 "set_bbbtree.m"
  while (MR_TRUE)
#line 520 "set_bbbtree.m"
    {
#line 520 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 520 "set_bbbtree.m"
      {
#line 520 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 520 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_3;
#line 520 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_5;
#line 520 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_4;
#line 520 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 520 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 520 "set_bbbtree.m"
          {
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 520 "set_bbbtree.m"
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 525 "set_bbbtree.m"
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "set_bbbtree.m"
              {
#line 524 "set_bbbtree.m"
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
#line 524 "set_bbbtree.m"
                mercury__set_bbbtree__succeeded = MR_TRUE;
#line 524 "set_bbbtree.m"
              }
#line 525 "set_bbbtree.m"
            else
#line 528 "set_bbbtree.m"
              {
#line 528 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 528 "set_bbbtree.m"
                {
#line 528 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__1__tmp_copy_1 = mercury__set_bbbtree__L_5;

#line 528 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__HeadVar__1__tmp_copy_1;
#line 528 "set_bbbtree.m"
                }
#line 528 "set_bbbtree.m"
                continue;
#line 528 "set_bbbtree.m"
              }
#line 520 "set_bbbtree.m"
          }
#line 520 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 520 "set_bbbtree.m"
      }
#line 520 "set_bbbtree.m"
      break;
#line 520 "set_bbbtree.m"
    }
#line 72 "set_bbbtree.m"
}

#line 66 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__contains_2_p_0(
#line 66 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 66 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3,
#line 66 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4)
#line 66 "set_bbbtree.m"
{
#line 506 "set_bbbtree.m"
  {
#line 506 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 506 "set_bbbtree.m"
    {
#line 506 "set_bbbtree.m"
      return mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_3);
    }
#line 506 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 506 "set_bbbtree.m"
  }
#line 66 "set_bbbtree.m"
}

#line 61 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__is_member_3_p_0(
#line 61 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 61 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_4,
#line 61 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_5,
#line 61 "set_bbbtree.m"
  MR_Word * mercury__set_bbbtree__Result_6)
#line 61 "set_bbbtree.m"
{
#line 513 "set_bbbtree.m"
  {
#line 513 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 511 "set_bbbtree.m"
    {
#line 511 "set_bbbtree.m"
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_5);
    }
#line 513 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 512 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 1;
#line 513 "set_bbbtree.m"
    else
#line 514 "set_bbbtree.m"
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 0;
#line 513 "set_bbbtree.m"
  }
#line 61 "set_bbbtree.m"
}

#line 492 "set_bbbtree.m"
static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
#line 492 "set_bbbtree.m"
  void * mercury__set_bbbtree__env_ptr_arg)
#line 492 "set_bbbtree.m"
{
#line 492 "set_bbbtree.m"
  {
#line 492 "set_bbbtree.m"
    struct mercury__set_bbbtree__member_2_p_1_env_0_s * mercury__set_bbbtree__env_ptr = (struct mercury__set_bbbtree__member_2_p_1_env_0_s *) mercury__set_bbbtree__env_ptr_arg;

#line 493 "set_bbbtree.m"
    {
#line 493 "set_bbbtree.m"
      mercury__builtin__compare_3_p_0((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, &(mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10, *((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__X_3), (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_4);
    }
#line 493 "set_bbbtree.m"
    (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Result_8 == (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_10_10);
#line 493 "set_bbbtree.m"
    if ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 493 "set_bbbtree.m"
      {
#line 493 "set_bbbtree.m"
        ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont)((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr);
#line 493 "set_bbbtree.m"
        return;
      }
#line 492 "set_bbbtree.m"
  }
#line 492 "set_bbbtree.m"
}

#line 56 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__member_2_p_1(
#line 56 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 56 "set_bbbtree.m"
  MR_Box * mercury__set_bbbtree__X_3,
#line 56 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
#line 56 "set_bbbtree.m"
  MR_Cont mercury__set_bbbtree__cont,
#line 56 "set_bbbtree.m"
  void * mercury__set_bbbtree__cont_env_ptr)
#line 56 "set_bbbtree.m"
{
#line 56 "set_bbbtree.m"
  {
#line 56 "set_bbbtree.m"
    struct mercury__set_bbbtree__member_2_p_1_env_0_s mercury__set_bbbtree__env;

#line 56 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9 = mercury__set_bbbtree__TypeInfo_for_T_9;
#line 56 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3 = mercury__set_bbbtree__X_3;
#line 56 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont = mercury__set_bbbtree__cont;
#line 56 "set_bbbtree.m"
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr = mercury__set_bbbtree__cont_env_ptr;
#line 492 "set_bbbtree.m"
    {
#line 492 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__L_6;
#line 492 "set_bbbtree.m"
      MR_Word mercury__set_bbbtree__R_7;
#line 492 "set_bbbtree.m"
      MR_Integer mercury__set_bbbtree___N_5;

#line 492 "set_bbbtree.m"
      (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 492 "set_bbbtree.m"
      if ((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
#line 492 "set_bbbtree.m"
        {
#line 492 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 492 "set_bbbtree.m"
          mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 492 "set_bbbtree.m"
          mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 492 "set_bbbtree.m"
          mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 495 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 1;
#line 496 "set_bbbtree.m"
          {
#line 496 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__L_6, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 498 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 2;
#line 499 "set_bbbtree.m"
          {
#line 499 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__R_7, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
#line 501 "set_bbbtree.m"
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 0;
#line 502 "set_bbbtree.m"
          *((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3) = (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4;
#line 501 "set_bbbtree.m"
          {
#line 501 "set_bbbtree.m"
            mercury__set_bbbtree__member_2_p_1_1(&mercury__set_bbbtree__env);
          }
#line 492 "set_bbbtree.m"
        }
#line 492 "set_bbbtree.m"
    }
#line 56 "set_bbbtree.m"
  }
#line 56 "set_bbbtree.m"
}

#line 55 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__member_2_p_0(
#line 55 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
#line 55 "set_bbbtree.m"
  MR_Box mercury__set_bbbtree__X_3,
#line 55 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
#line 55 "set_bbbtree.m"
{
#line 492 "set_bbbtree.m"
  while (MR_TRUE)
#line 492 "set_bbbtree.m"
    {
#line 492 "set_bbbtree.m"
      /* tailcall optimized into a loop */
#line 492 "set_bbbtree.m"
      {
#line 492 "set_bbbtree.m"
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 492 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree__V_4;
#line 492 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__L_6;
#line 492 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__R_7;
#line 492 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree__Result_8;
#line 492 "set_bbbtree.m"
        MR_Integer mercury__set_bbbtree___N_5;

#line 492 "set_bbbtree.m"
        if (mercury__set_bbbtree__succeeded)
#line 492 "set_bbbtree.m"
          {
#line 492 "set_bbbtree.m"
            mercury__set_bbbtree__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
#line 492 "set_bbbtree.m"
            mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
#line 492 "set_bbbtree.m"
            mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 492 "set_bbbtree.m"
            mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 493 "set_bbbtree.m"
            {
#line 493 "set_bbbtree.m"
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, &mercury__set_bbbtree__Result_8, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
            }
#line 497 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 1))
#line 496 "set_bbbtree.m"
              {
#line 496 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 496 "set_bbbtree.m"
                {
#line 496 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__L_6;

#line 496 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 496 "set_bbbtree.m"
                }
#line 496 "set_bbbtree.m"
                continue;
#line 496 "set_bbbtree.m"
              }
#line 497 "set_bbbtree.m"
            else
#line 497 "set_bbbtree.m"
            if ((mercury__set_bbbtree__Result_8 == (MR_Integer) 0))
#line 502 "set_bbbtree.m"
              {
#line 502 "set_bbbtree.m"
                return mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
              }
#line 497 "set_bbbtree.m"
            else
#line 499 "set_bbbtree.m"
              {
#line 499 "set_bbbtree.m"
                /* direct tailcall eliminated */
#line 499 "set_bbbtree.m"
                {
#line 499 "set_bbbtree.m"
                  MR_Word mercury__set_bbbtree__HeadVar__2__tmp_copy_2 = mercury__set_bbbtree__R_7;

#line 499 "set_bbbtree.m"
                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__HeadVar__2__tmp_copy_2;
#line 499 "set_bbbtree.m"
                }
#line 499 "set_bbbtree.m"
                continue;
#line 499 "set_bbbtree.m"
              }
#line 492 "set_bbbtree.m"
          }
#line 492 "set_bbbtree.m"
        return mercury__set_bbbtree__succeeded;
#line 492 "set_bbbtree.m"
      }
#line 492 "set_bbbtree.m"
      break;
#line 492 "set_bbbtree.m"
    }
#line 55 "set_bbbtree.m"
}

#line 49 "set_bbbtree.m"
void MR_CALL 
mercury__set_bbbtree__count_2_p_0(
#line 49 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
#line 49 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
#line 49 "set_bbbtree.m"
  MR_Integer * mercury__set_bbbtree__HeadVar__2_2)
#line 49 "set_bbbtree.m"
{
#line 486 "set_bbbtree.m"
  {
#line 486 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_5;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_6;

#line 487 "set_bbbtree.m"
        *mercury__set_bbbtree__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 486 "set_bbbtree.m"
  }
#line 49 "set_bbbtree.m"
}

#line 48 "set_bbbtree.m"
MR_Integer MR_CALL 
mercury__set_bbbtree__count_1_f_0(
#line 48 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
#line 48 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__Set_3)
#line 48 "set_bbbtree.m"
{
#line 486 "set_bbbtree.m"
  {
#line 486 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 486 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__Count_4;

#line 486 "set_bbbtree.m"
    if ((mercury__set_bbbtree__Set_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "set_bbbtree.m"
      mercury__set_bbbtree__Count_4 = (MR_Integer) 0;
#line 486 "set_bbbtree.m"
    else
#line 487 "set_bbbtree.m"
      {
#line 487 "set_bbbtree.m"
        MR_Box mercury__set_bbbtree___V_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 0));
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___L_8;
#line 487 "set_bbbtree.m"
        MR_Word mercury__set_bbbtree___R_9;

#line 487 "set_bbbtree.m"
        mercury__set_bbbtree__Count_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 1)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 2)));
#line 487 "set_bbbtree.m"
        mercury__set_bbbtree___R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 3)));
#line 487 "set_bbbtree.m"
      }
#line 486 "set_bbbtree.m"
    return mercury__set_bbbtree__Count_4;
#line 486 "set_bbbtree.m"
  }
#line 48 "set_bbbtree.m"
}

#line 43 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__is_non_empty_1_p_0(
#line 43 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 43 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 43 "set_bbbtree.m"
{
#line 479 "set_bbbtree.m"
  {
#line 479 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 479 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_2_2;
#line 479 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_3_3;
#line 479 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_4_4;
#line 479 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;

#line 479 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 479 "set_bbbtree.m"
      {
#line 479 "set_bbbtree.m"
        mercury__set_bbbtree__V_2_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 479 "set_bbbtree.m"
        mercury__set_bbbtree__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 479 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 479 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 479 "set_bbbtree.m"
      }
#line 479 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 479 "set_bbbtree.m"
  }
#line 43 "set_bbbtree.m"
}

#line 42 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__non_empty_1_p_0(
#line 42 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
#line 42 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 42 "set_bbbtree.m"
{
#line 478 "set_bbbtree.m"
  {
#line 478 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 478 "set_bbbtree.m"
    MR_Box mercury__set_bbbtree__V_2_2;
#line 478 "set_bbbtree.m"
    MR_Integer mercury__set_bbbtree__V_3_3;
#line 478 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_4_4;
#line 478 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__V_5_5;

#line 478 "set_bbbtree.m"
    if (mercury__set_bbbtree__succeeded)
#line 478 "set_bbbtree.m"
      {
#line 478 "set_bbbtree.m"
        mercury__set_bbbtree__V_2_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
#line 478 "set_bbbtree.m"
        mercury__set_bbbtree__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 478 "set_bbbtree.m"
        mercury__set_bbbtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 478 "set_bbbtree.m"
        mercury__set_bbbtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 478 "set_bbbtree.m"
      }
#line 478 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 478 "set_bbbtree.m"
  }
#line 42 "set_bbbtree.m"
}

#line 37 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__is_empty_1_p_0(
#line 37 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
#line 37 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 37 "set_bbbtree.m"
{
#line 476 "set_bbbtree.m"
  {
#line 476 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 476 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 476 "set_bbbtree.m"
  }
#line 37 "set_bbbtree.m"
}

#line 36 "set_bbbtree.m"
MR_bool MR_CALL 
mercury__set_bbbtree__empty_1_p_0(
#line 36 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
#line 36 "set_bbbtree.m"
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
#line 36 "set_bbbtree.m"
{
#line 475 "set_bbbtree.m"
  {
#line 475 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 475 "set_bbbtree.m"
    return mercury__set_bbbtree__succeeded;
#line 475 "set_bbbtree.m"
  }
#line 36 "set_bbbtree.m"
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
#line 471 "set_bbbtree.m"
  {
#line 471 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;

#line 471 "set_bbbtree.m"
    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "set_bbbtree.m"
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
#line 471 "set_bbbtree.m"
  {
#line 471 "set_bbbtree.m"
    MR_bool mercury__set_bbbtree__succeeded;
#line 471 "set_bbbtree.m"
    MR_Word mercury__set_bbbtree__S_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 471 "set_bbbtree.m"
    return mercury__set_bbbtree__S_2;
#line 471 "set_bbbtree.m"
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
