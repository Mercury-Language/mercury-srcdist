/*
** Automatically generated from `rbtree.m'
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


/* :- module rbtree. */
/* :- implementation. */

/*
INIT mercury__rbtree__init
ENDINIT
*/

#include "rbtree.mih"


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




#line 94 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0;

#line 97 "rbtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2;

#line 100 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4];

#line 103 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1;

#line 106 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4];

#line 109 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2;

#line 112 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1];

#line 115 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1];

#line 118 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1];

#line 121 "rbtree.c"
static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3];

#line 124 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3];

#line 127 "rbtree.c"
static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3];

#line 130 "rbtree.c"
static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
#line 133 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 135 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 137 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_3,
#line 139 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4);

#line 142 "rbtree.c"
static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
#line 145 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 147 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 149 "rbtree.c"
  MR_Box * mercury__rbtree__wrapper_arg_3,
#line 151 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4,
#line 153 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_5);

#line 186 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__V_37_37,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 186 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 186 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4);

#line 227 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__V_31_31,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 227 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 600 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
#line 600 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
#line 600 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 600 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 600 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 600 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4);

#line 481 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
#line 481 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
#line 481 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 481 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 481 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 481 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4);

#line 289 "rbtree.m"
static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
#line 289 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
#line 289 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 289 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 289 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 289 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4);


static /* final */ const MR_Box mercury__rbtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rbtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__rbtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_2[0])),
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



#line 588 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0 = {
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

#line 603 "rbtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 612 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

#line 620 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1 = {
  (MR_String) "red",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rbtree__rbtree__field_types_rbtree_2_1,
  NULL,
  NULL,
  NULL
};

#line 635 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

#line 643 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2 = {
  (MR_String) "black",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rbtree__rbtree__field_types_rbtree_2_2,
  NULL,
  NULL,
  NULL
};

#line 658 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0
};

#line 663 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

#line 668 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2
};

#line 673 "rbtree.c"
static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2
  }
};

#line 692 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

#line 699 "rbtree.c"
static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 706 "rbtree.c"
const MR_TypeCtorInfo_Struct mercury__rbtree__rbtree__type_ctor_info_rbtree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rbtree____Unify____rbtree_2_0_10001)),
  ((MR_Box) (mercury__rbtree____Compare____rbtree_2_0_10001)),
  (MR_String) "rbtree",
  (MR_String) "rbtree",
  {     mercury__rbtree__rbtree__du_name_ordered_rbtree_2 },
  {     mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rbtree__rbtree__functor_number_map_rbtree_2
};

#line 723 "rbtree.c"
static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
#line 726 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 728 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 730 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_3,
#line 732 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4)
#line 734 "rbtree.c"
{
#line 736 "rbtree.c"
  {
#line 738 "rbtree.c"
    MR_bool mercury__rbtree__succeeded;

#line 741 "rbtree.c"
    {
#line 743 "rbtree.c"
      mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), ((MR_Word) mercury__rbtree__wrapper_arg_3), ((MR_Word) mercury__rbtree__wrapper_arg_4));
    }
#line 746 "rbtree.c"
    return mercury__rbtree__succeeded;
#line 748 "rbtree.c"
  }
#line 750 "rbtree.c"
}

#line 753 "rbtree.c"
static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
#line 756 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 758 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 760 "rbtree.c"
  MR_Box * mercury__rbtree__wrapper_arg_3,
#line 762 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4,
#line 764 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_5)
#line 766 "rbtree.c"
{
#line 768 "rbtree.c"
  {
#line 770 "rbtree.c"
    MR_Word mercury__rbtree__conv0_HeadVar__1_1;

#line 773 "rbtree.c"
    {
#line 775 "rbtree.c"
      mercury__rbtree____Compare____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), &mercury__rbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rbtree__wrapper_arg_4), ((MR_Word) mercury__rbtree__wrapper_arg_5));
    }
#line 778 "rbtree.c"
    *mercury__rbtree__wrapper_arg_3 = ((MR_Box) (mercury__rbtree__conv0_HeadVar__1_1));
#line 780 "rbtree.c"
  }
#line 782 "rbtree.c"
}

#line 186 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__V_37_37,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 186 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 186 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 186 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1057 "rbtree.m"
            MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1057 "rbtree.m"
            mercury__rbtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
#line 1057 "rbtree.m"
            {
#line 1057 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_29_29 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1068 "rbtree.m"
            /* direct tailcall eliminated */
#line 1068 "rbtree.m"
            {
#line 1068 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
            }
#line 1068 "rbtree.m"
            continue;
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1057 "rbtree.m"
            MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1057 "rbtree.m"
            mercury__rbtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
#line 1057 "rbtree.m"
            {
#line 1057 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_18_18 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1064 "rbtree.m"
            /* direct tailcall eliminated */
#line 1064 "rbtree.m"
            {
#line 1064 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
            }
#line 1064 "rbtree.m"
            continue;
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 186 "rbtree.m"
}

#line 227 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__V_31_31,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 227 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 227 "rbtree.m"
{
#line 1100 "rbtree.m"
  {
#line 1100 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1100 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "rbtree.m"
      *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "rbtree.m"
    else
#line 1100 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1107 "rbtree.m"
      {
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__W0_22;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left_23;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right_24;
#line 1097 "rbtree.m"
        MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

#line 1097 "rbtree.m"
        {
#line 1097 "rbtree.m"
          mercury__rbtree__W0_22 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_18, mercury__rbtree__V0_19);
        }
#line 1110 "rbtree.m"
        {
#line 1110 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
        }
#line 1111 "rbtree.m"
        {
#line 1111 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
        }
#line 1112 "rbtree.m"
        {
#line 1112 "rbtree.m"
          MR_Word base;
#line 1112 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "rbtree.m"
          *mercury__rbtree__HeadVar__3_3 = base;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1112 "rbtree.m"
        }
#line 1107 "rbtree.m"
      }
#line 1100 "rbtree.m"
    else
#line 1101 "rbtree.m"
      {
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__W0_12;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left_13;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right_14;
#line 1097 "rbtree.m"
        MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

#line 1097 "rbtree.m"
        {
#line 1097 "rbtree.m"
          mercury__rbtree__W0_12 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_8, mercury__rbtree__V0_9);
        }
#line 1104 "rbtree.m"
        {
#line 1104 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
        }
#line 1105 "rbtree.m"
        {
#line 1105 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
        }
#line 1106 "rbtree.m"
        {
#line 1106 "rbtree.m"
          MR_Word base;
#line 1106 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "rbtree.m"
          *mercury__rbtree__HeadVar__3_3 = base;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1106 "rbtree.m"
        }
#line 1101 "rbtree.m"
      }
#line 1100 "rbtree.m"
  }
#line 227 "rbtree.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__rbtree__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 859 "rbtree.m"
void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 859 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 859 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 859 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 859 "rbtree.m"
{
#line 861 "rbtree.m"
  {
#line 861 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 861 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "rbtree.m"
      {
#line 861 "rbtree.m"
        *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "rbtree.m"
        *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "rbtree.m"
      }
#line 861 "rbtree.m"
    else
#line 861 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 887 "rbtree.m"
      {
#line 887 "rbtree.m"
        MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 887 "rbtree.m"
        MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__Result_33;

#line 888 "rbtree.m"
        {
#line 888 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
        }
#line 903 "rbtree.m"
        if ((mercury__rbtree__Result_33 == (MR_Integer) 1))
#line 904 "rbtree.m"
          {
#line 904 "rbtree.m"
            MR_Word mercury__rbtree__NewL_41;

#line 905 "rbtree.m"
            {
#line 905 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
            }
#line 906 "rbtree.m"
            {
#line 906 "rbtree.m"
              MR_Word base;
#line 906 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 906 "rbtree.m"
              *mercury__rbtree__HeadVar__5_5 = base;
#line 906 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 906 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 906 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
#line 906 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 906 "rbtree.m"
            }
#line 904 "rbtree.m"
          }
#line 903 "rbtree.m"
        else
#line 903 "rbtree.m"
        if ((mercury__rbtree__Result_33 == (MR_Integer) 0))
#line 890 "rbtree.m"
          {
#line 893 "rbtree.m"
            MR_Box mercury__rbtree__NewK_34;
#line 893 "rbtree.m"
            MR_Box mercury__rbtree__NewV_35;
#line 893 "rbtree.m"
            MR_Word mercury__rbtree__NewL_36;

#line 891 "rbtree.m"
            {
#line 891 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
            }
#line 893 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 892 "rbtree.m"
              {
#line 892 "rbtree.m"
                MR_Word base;
#line 892 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 892 "rbtree.m"
              }
#line 893 "rbtree.m"
            else
#line 897 "rbtree.m"
              {
#line 897 "rbtree.m"
                MR_Word mercury__rbtree__NewR_37;
#line 897 "rbtree.m"
                MR_Box mercury__rbtree__NewK_39;
#line 897 "rbtree.m"
                MR_Box mercury__rbtree__NewV_40;

#line 895 "rbtree.m"
                {
#line 895 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                }
#line 897 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 896 "rbtree.m"
                  {
#line 896 "rbtree.m"
                    MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 896 "rbtree.m"
                    {
#line 896 "rbtree.m"
                      MR_Word base;
#line 896 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 896 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
#line 896 "rbtree.m"
                    }
#line 896 "rbtree.m"
                  }
#line 897 "rbtree.m"
                else
#line 899 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "rbtree.m"
              }
#line 902 "rbtree.m"
            {
#line 902 "rbtree.m"
              MR_Word base;
#line 902 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 902 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
#line 902 "rbtree.m"
            }
#line 890 "rbtree.m"
          }
#line 903 "rbtree.m"
        else
#line 908 "rbtree.m"
          {
#line 908 "rbtree.m"
            MR_Word mercury__rbtree__NewR_42;

#line 909 "rbtree.m"
            {
#line 909 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
            }
#line 910 "rbtree.m"
            {
#line 910 "rbtree.m"
              MR_Word base;
#line 910 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 910 "rbtree.m"
              *mercury__rbtree__HeadVar__5_5 = base;
#line 910 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 910 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 910 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
#line 910 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
#line 910 "rbtree.m"
            }
#line 908 "rbtree.m"
          }
#line 887 "rbtree.m"
      }
#line 861 "rbtree.m"
    else
#line 862 "rbtree.m"
      {
#line 862 "rbtree.m"
        MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 862 "rbtree.m"
        MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__Result_15;

#line 863 "rbtree.m"
        {
#line 863 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
        }
#line 878 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 879 "rbtree.m"
          {
#line 879 "rbtree.m"
            MR_Word mercury__rbtree__NewL_23;

#line 880 "rbtree.m"
            {
#line 880 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
            }
#line 881 "rbtree.m"
            {
#line 881 "rbtree.m"
              MR_Word base;
#line 881 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 881 "rbtree.m"
              *mercury__rbtree__HeadVar__5_5 = base;
#line 881 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 881 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 881 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 881 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 881 "rbtree.m"
            }
#line 879 "rbtree.m"
          }
#line 878 "rbtree.m"
        else
#line 878 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 865 "rbtree.m"
          {
#line 868 "rbtree.m"
            MR_Box mercury__rbtree__NewK_16;
#line 868 "rbtree.m"
            MR_Box mercury__rbtree__NewV_17;
#line 868 "rbtree.m"
            MR_Word mercury__rbtree__NewL_18;

#line 866 "rbtree.m"
            {
#line 866 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
            }
#line 868 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 867 "rbtree.m"
              {
#line 867 "rbtree.m"
                MR_Word base;
#line 867 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 867 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 867 "rbtree.m"
              }
#line 868 "rbtree.m"
            else
#line 872 "rbtree.m"
              {
#line 872 "rbtree.m"
                MR_Word mercury__rbtree__NewR_19;
#line 872 "rbtree.m"
                MR_Box mercury__rbtree__NewK_21;
#line 872 "rbtree.m"
                MR_Box mercury__rbtree__NewV_22;

#line 870 "rbtree.m"
                {
#line 870 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                }
#line 872 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 871 "rbtree.m"
                  {
#line 871 "rbtree.m"
                    MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 871 "rbtree.m"
                    {
#line 871 "rbtree.m"
                      MR_Word base;
#line 871 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 871 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
#line 871 "rbtree.m"
                    }
#line 871 "rbtree.m"
                  }
#line 872 "rbtree.m"
                else
#line 874 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "rbtree.m"
              }
#line 877 "rbtree.m"
            {
#line 877 "rbtree.m"
              MR_Word base;
#line 877 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 877 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
#line 877 "rbtree.m"
            }
#line 865 "rbtree.m"
          }
#line 878 "rbtree.m"
        else
#line 883 "rbtree.m"
          {
#line 883 "rbtree.m"
            MR_Word mercury__rbtree__NewR_24;

#line 884 "rbtree.m"
            {
#line 884 "rbtree.m"
              mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
            }
#line 885 "rbtree.m"
            {
#line 885 "rbtree.m"
              MR_Word base;
#line 885 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 885 "rbtree.m"
              *mercury__rbtree__HeadVar__5_5 = base;
#line 885 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 885 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 885 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
#line 885 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
#line 885 "rbtree.m"
            }
#line 883 "rbtree.m"
          }
#line 862 "rbtree.m"
      }
#line 861 "rbtree.m"
  }
#line 859 "rbtree.m"
}

#line 600 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
#line 600 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
#line 600 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 600 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 600 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 600 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 600 "rbtree.m"
{
#line 604 "rbtree.m"
  while (MR_TRUE)
#line 604 "rbtree.m"
    {
#line 604 "rbtree.m"
      /* tailcall optimized into a loop */
#line 604 "rbtree.m"
      {
#line 604 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 604 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "rbtree.m"
          {
#line 604 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 604 "rbtree.m"
            {
#line 604 "rbtree.m"
              MR_Word base;
#line 604 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 604 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 604 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 604 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 604 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 604 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 604 "rbtree.m"
            }
#line 604 "rbtree.m"
          }
#line 604 "rbtree.m"
        else
#line 604 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 623 "rbtree.m"
          {
#line 623 "rbtree.m"
            MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 623 "rbtree.m"
            MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 623 "rbtree.m"
            MR_Word mercury__rbtree__L0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 623 "rbtree.m"
            MR_Word mercury__rbtree__R0_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 635 "rbtree.m"
            MR_Box mercury__rbtree__LK_27;
#line 635 "rbtree.m"
            MR_Box mercury__rbtree__LV_28;
#line 635 "rbtree.m"
            MR_Word mercury__rbtree__LL_29;
#line 635 "rbtree.m"
            MR_Word mercury__rbtree__LR_30;
#line 635 "rbtree.m"
            MR_Box mercury__rbtree__RK_31;
#line 635 "rbtree.m"
            MR_Box mercury__rbtree__RV_32;
#line 635 "rbtree.m"
            MR_Word mercury__rbtree__RL_33;
#line 635 "rbtree.m"
            MR_Word mercury__rbtree__RR_34;

#line 625 "rbtree.m"
            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_22)) == (MR_mktag((MR_Integer) 1)));
#line 625 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 625 "rbtree.m"
              {
#line 625 "rbtree.m"
                mercury__rbtree__LK_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 0));
#line 625 "rbtree.m"
                mercury__rbtree__LV_28 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 1));
#line 625 "rbtree.m"
                mercury__rbtree__LL_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 2)));
#line 625 "rbtree.m"
                mercury__rbtree__LR_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 3)));
#line 626 "rbtree.m"
                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_23)) == (MR_mktag((MR_Integer) 1)));
#line 626 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 626 "rbtree.m"
                  {
#line 626 "rbtree.m"
                    mercury__rbtree__RK_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 0));
#line 626 "rbtree.m"
                    mercury__rbtree__RV_32 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 1));
#line 626 "rbtree.m"
                    mercury__rbtree__RL_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 2)));
#line 626 "rbtree.m"
                    mercury__rbtree__RR_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 3)));
#line 626 "rbtree.m"
                  }
#line 625 "rbtree.m"
              }
#line 635 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 631 "rbtree.m"
              {
#line 631 "rbtree.m"
                MR_Word mercury__rbtree__L_35;
#line 631 "rbtree.m"
                MR_Word mercury__rbtree__R_36;
#line 631 "rbtree.m"
                MR_Word mercury__rbtree__Tree0_37;

#line 631 "rbtree.m"
                {
#line 631 "rbtree.m"
                  mercury__rbtree__L_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 631 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 0) = mercury__rbtree__LK_27;
#line 631 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 1) = mercury__rbtree__LV_28;
#line 631 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 2) = ((MR_Box) (mercury__rbtree__LL_29));
#line 631 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 3) = ((MR_Box) (mercury__rbtree__LR_30));
#line 631 "rbtree.m"
                }
#line 632 "rbtree.m"
                {
#line 632 "rbtree.m"
                  mercury__rbtree__R_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 632 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 0) = mercury__rbtree__RK_31;
#line 632 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 1) = mercury__rbtree__RV_32;
#line 632 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 2) = ((MR_Box) (mercury__rbtree__RL_33));
#line 632 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 3) = ((MR_Box) (mercury__rbtree__RR_34));
#line 632 "rbtree.m"
                }
#line 633 "rbtree.m"
                {
#line 633 "rbtree.m"
                  mercury__rbtree__Tree0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 633 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 0) = mercury__rbtree__K0_20;
#line 633 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 1) = mercury__rbtree__V0_21;
#line 633 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 2) = ((MR_Box) (mercury__rbtree__L_35));
#line 633 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 3) = ((MR_Box) (mercury__rbtree__R_36));
#line 633 "rbtree.m"
                }
#line 634 "rbtree.m"
                /* direct tailcall eliminated */
#line 634 "rbtree.m"
                {
#line 634 "rbtree.m"
                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_37;

#line 634 "rbtree.m"
                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 634 "rbtree.m"
                }
#line 634 "rbtree.m"
                continue;
#line 631 "rbtree.m"
              }
#line 635 "rbtree.m"
            else
#line 637 "rbtree.m"
              {
#line 637 "rbtree.m"
                MR_Word mercury__rbtree__Result_38;

#line 637 "rbtree.m"
                {
#line 637 "rbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_38, mercury__rbtree__K_2, mercury__rbtree__K0_20);
                }
#line 661 "rbtree.m"
                if ((mercury__rbtree__Result_38 == (MR_Integer) 1))
#line 639 "rbtree.m"
                  {
#line 639 "rbtree.m"
                    MR_Word mercury__rbtree__NewL_39;
#line 658 "rbtree.m"
                    MR_Box mercury__rbtree__LK_65;
#line 658 "rbtree.m"
                    MR_Box mercury__rbtree__LV_66;
#line 658 "rbtree.m"
                    MR_Word mercury__rbtree__LL_67;
#line 658 "rbtree.m"
                    MR_Word mercury__rbtree__LR_68;

#line 640 "rbtree.m"
                    {
#line 640 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_39);
                    }
#line 645 "rbtree.m"
                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_39)) == (MR_mktag((MR_Integer) 1)));
#line 645 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 645 "rbtree.m"
                      {
#line 645 "rbtree.m"
                        mercury__rbtree__LK_65 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 0));
#line 645 "rbtree.m"
                        mercury__rbtree__LV_66 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 1));
#line 645 "rbtree.m"
                        mercury__rbtree__LL_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 2)));
#line 645 "rbtree.m"
                        mercury__rbtree__LR_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 3)));
#line 651 "rbtree.m"
                        {
#line 648 "rbtree.m"
                          MR_Box mercury__rbtree___LLK1_40;
#line 648 "rbtree.m"
                          MR_Box mercury__rbtree___LLV1_41;
#line 648 "rbtree.m"
                          MR_Word mercury__rbtree___LLL1_42;
#line 648 "rbtree.m"
                          MR_Word mercury__rbtree___LLR1_43;

#line 648 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_67)) == (MR_mktag((MR_Integer) 1)));
#line 648 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 648 "rbtree.m"
                            {
#line 648 "rbtree.m"
                              mercury__rbtree___LLK1_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 0));
#line 648 "rbtree.m"
                              mercury__rbtree___LLV1_41 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 1));
#line 648 "rbtree.m"
                              mercury__rbtree___LLL1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 2)));
#line 648 "rbtree.m"
                              mercury__rbtree___LLR1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 3)));
#line 649 "rbtree.m"
                              {
#line 649 "rbtree.m"
                                MR_Word mercury__rbtree__TreeR_44;

#line 649 "rbtree.m"
                                {
#line 649 "rbtree.m"
                                  mercury__rbtree__TreeR_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 649 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 0) = mercury__rbtree__K0_20;
#line 649 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 1) = mercury__rbtree__V0_21;
#line 649 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 2) = ((MR_Box) (mercury__rbtree__LR_68));
#line 649 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 649 "rbtree.m"
                                }
#line 650 "rbtree.m"
                                {
#line 650 "rbtree.m"
                                  MR_Word base;
#line 650 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 650 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 650 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_65;
#line 650 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_66;
#line 650 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_67));
#line 650 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_44));
#line 650 "rbtree.m"
                                }
#line 649 "rbtree.m"
                              }
#line 648 "rbtree.m"
                            }
#line 648 "rbtree.m"
                          else
#line 655 "rbtree.m"
                            {
#line 655 "rbtree.m"
                              MR_Box mercury__rbtree__LRK_45;
#line 655 "rbtree.m"
                              MR_Box mercury__rbtree__LRV_46;
#line 655 "rbtree.m"
                              MR_Word mercury__rbtree__LRL_47;
#line 655 "rbtree.m"
                              MR_Word mercury__rbtree__LRR_48;

#line 651 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_68)) == (MR_mktag((MR_Integer) 1)));
#line 651 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 651 "rbtree.m"
                                {
#line 651 "rbtree.m"
                                  mercury__rbtree__LRK_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 0));
#line 651 "rbtree.m"
                                  mercury__rbtree__LRV_46 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 1));
#line 651 "rbtree.m"
                                  mercury__rbtree__LRL_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 2)));
#line 651 "rbtree.m"
                                  mercury__rbtree__LRR_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 3)));
#line 652 "rbtree.m"
                                  {
#line 652 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_49;
#line 652 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_63;

#line 652 "rbtree.m"
                                    {
#line 652 "rbtree.m"
                                      mercury__rbtree__TreeL_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 652 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 0) = mercury__rbtree__LK_65;
#line 652 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 1) = mercury__rbtree__LV_66;
#line 652 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 2) = ((MR_Box) (mercury__rbtree__LL_67));
#line 652 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 3) = ((MR_Box) (mercury__rbtree__LRL_47));
#line 652 "rbtree.m"
                                    }
#line 653 "rbtree.m"
                                    {
#line 653 "rbtree.m"
                                      mercury__rbtree__TreeR_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 0) = mercury__rbtree__K0_20;
#line 653 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 1) = mercury__rbtree__V0_21;
#line 653 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 2) = ((MR_Box) (mercury__rbtree__LRR_48));
#line 653 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 653 "rbtree.m"
                                    }
#line 654 "rbtree.m"
                                    {
#line 654 "rbtree.m"
                                      MR_Word base;
#line 654 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 654 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 654 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_45;
#line 654 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_46;
#line 654 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_49));
#line 654 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_63));
#line 654 "rbtree.m"
                                    }
#line 652 "rbtree.m"
                                  }
#line 651 "rbtree.m"
                                }
#line 651 "rbtree.m"
                              else
#line 656 "rbtree.m"
                                {
#line 656 "rbtree.m"
                                  MR_Word base;
#line 656 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 656 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 656 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 656 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 656 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 656 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 656 "rbtree.m"
                                }
#line 655 "rbtree.m"
                            }
#line 651 "rbtree.m"
                        }
#line 645 "rbtree.m"
                      }
#line 645 "rbtree.m"
                    else
#line 659 "rbtree.m"
                      {
#line 659 "rbtree.m"
                        MR_Word base;
#line 659 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 659 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 659 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 659 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 659 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 659 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 659 "rbtree.m"
                      }
#line 639 "rbtree.m"
                  }
#line 661 "rbtree.m"
                else
#line 661 "rbtree.m"
                if ((mercury__rbtree__Result_38 == (MR_Integer) 0))
#line 685 "rbtree.m"
                  {
#line 685 "rbtree.m"
                    MR_Word mercury__rbtree__NewL_120;
#line 703 "rbtree.m"
                    MR_Box mercury__rbtree__LK_106;
#line 703 "rbtree.m"
                    MR_Box mercury__rbtree__LV_107;
#line 703 "rbtree.m"
                    MR_Word mercury__rbtree__LL_108;
#line 703 "rbtree.m"
                    MR_Word mercury__rbtree__LR_109;

#line 686 "rbtree.m"
                    {
#line 686 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_120);
                    }
#line 690 "rbtree.m"
                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_120)) == (MR_mktag((MR_Integer) 1)));
#line 690 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 690 "rbtree.m"
                      {
#line 690 "rbtree.m"
                        mercury__rbtree__LK_106 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 0));
#line 690 "rbtree.m"
                        mercury__rbtree__LV_107 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 1));
#line 690 "rbtree.m"
                        mercury__rbtree__LL_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 2)));
#line 690 "rbtree.m"
                        mercury__rbtree__LR_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 3)));
#line 696 "rbtree.m"
                        {
#line 693 "rbtree.m"
                          MR_Box mercury__rbtree___LLK2_59;
#line 693 "rbtree.m"
                          MR_Box mercury__rbtree___LLV2_60;
#line 693 "rbtree.m"
                          MR_Word mercury__rbtree___LLL2_61;
#line 693 "rbtree.m"
                          MR_Word mercury__rbtree___LLR2_62;

#line 693 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_108)) == (MR_mktag((MR_Integer) 1)));
#line 693 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 693 "rbtree.m"
                            {
#line 693 "rbtree.m"
                              mercury__rbtree___LLK2_59 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 0));
#line 693 "rbtree.m"
                              mercury__rbtree___LLV2_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 1));
#line 693 "rbtree.m"
                              mercury__rbtree___LLL2_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 2)));
#line 693 "rbtree.m"
                              mercury__rbtree___LLR2_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 3)));
#line 694 "rbtree.m"
                              {
#line 694 "rbtree.m"
                                MR_Word mercury__rbtree__TreeR_91;

#line 694 "rbtree.m"
                                {
#line 694 "rbtree.m"
                                  mercury__rbtree__TreeR_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 694 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 0) = mercury__rbtree__K0_20;
#line 694 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 1) = mercury__rbtree__V0_21;
#line 694 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 2) = ((MR_Box) (mercury__rbtree__LR_109));
#line 694 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 694 "rbtree.m"
                                }
#line 695 "rbtree.m"
                                {
#line 695 "rbtree.m"
                                  MR_Word base;
#line 695 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 695 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 695 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_106;
#line 695 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_107;
#line 695 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_108));
#line 695 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_91));
#line 695 "rbtree.m"
                                }
#line 694 "rbtree.m"
                              }
#line 693 "rbtree.m"
                            }
#line 693 "rbtree.m"
                          else
#line 700 "rbtree.m"
                            {
#line 700 "rbtree.m"
                              MR_Box mercury__rbtree__LRK_95;
#line 700 "rbtree.m"
                              MR_Box mercury__rbtree__LRV_96;
#line 700 "rbtree.m"
                              MR_Word mercury__rbtree__LRL_97;
#line 700 "rbtree.m"
                              MR_Word mercury__rbtree__LRR_98;

#line 696 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_109)) == (MR_mktag((MR_Integer) 1)));
#line 696 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 696 "rbtree.m"
                                {
#line 696 "rbtree.m"
                                  mercury__rbtree__LRK_95 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 0));
#line 696 "rbtree.m"
                                  mercury__rbtree__LRV_96 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 1));
#line 696 "rbtree.m"
                                  mercury__rbtree__LRL_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 2)));
#line 696 "rbtree.m"
                                  mercury__rbtree__LRR_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 3)));
#line 697 "rbtree.m"
                                  {
#line 697 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_92;
#line 697 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_93;

#line 697 "rbtree.m"
                                    {
#line 697 "rbtree.m"
                                      mercury__rbtree__TreeL_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 697 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 0) = mercury__rbtree__LK_106;
#line 697 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 1) = mercury__rbtree__LV_107;
#line 697 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 2) = ((MR_Box) (mercury__rbtree__LL_108));
#line 697 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 3) = ((MR_Box) (mercury__rbtree__LRL_97));
#line 697 "rbtree.m"
                                    }
#line 698 "rbtree.m"
                                    {
#line 698 "rbtree.m"
                                      mercury__rbtree__TreeR_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 698 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 0) = mercury__rbtree__K0_20;
#line 698 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 1) = mercury__rbtree__V0_21;
#line 698 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 2) = ((MR_Box) (mercury__rbtree__LRR_98));
#line 698 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 698 "rbtree.m"
                                    }
#line 699 "rbtree.m"
                                    {
#line 699 "rbtree.m"
                                      MR_Word base;
#line 699 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 699 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_95;
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_96;
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_93));
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_92));
#line 699 "rbtree.m"
                                    }
#line 697 "rbtree.m"
                                  }
#line 696 "rbtree.m"
                                }
#line 696 "rbtree.m"
                              else
#line 701 "rbtree.m"
                                {
#line 701 "rbtree.m"
                                  MR_Word base;
#line 701 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 701 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 701 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 701 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 701 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
#line 701 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 701 "rbtree.m"
                                }
#line 700 "rbtree.m"
                            }
#line 696 "rbtree.m"
                        }
#line 690 "rbtree.m"
                      }
#line 690 "rbtree.m"
                    else
#line 704 "rbtree.m"
                      {
#line 704 "rbtree.m"
                        MR_Word base;
#line 704 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 704 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 704 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 704 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 704 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
#line 704 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 704 "rbtree.m"
                      }
#line 685 "rbtree.m"
                  }
#line 661 "rbtree.m"
                else
#line 662 "rbtree.m"
                  {
#line 662 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_50;
#line 681 "rbtree.m"
                    MR_Box mercury__rbtree__RK_79;
#line 681 "rbtree.m"
                    MR_Box mercury__rbtree__RV_80;
#line 681 "rbtree.m"
                    MR_Word mercury__rbtree__RL_81;
#line 681 "rbtree.m"
                    MR_Word mercury__rbtree__RR_82;

#line 663 "rbtree.m"
                    {
#line 663 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_23, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                    }
#line 668 "rbtree.m"
                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
#line 668 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 668 "rbtree.m"
                      {
#line 668 "rbtree.m"
                        mercury__rbtree__RK_79 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
#line 668 "rbtree.m"
                        mercury__rbtree__RV_80 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
#line 668 "rbtree.m"
                        mercury__rbtree__RL_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
#line 668 "rbtree.m"
                        mercury__rbtree__RR_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
#line 675 "rbtree.m"
                        {
#line 675 "rbtree.m"
                          MR_Box mercury__rbtree__RLK_51;
#line 675 "rbtree.m"
                          MR_Box mercury__rbtree__RLV_52;
#line 675 "rbtree.m"
                          MR_Word mercury__rbtree__RLL_53;
#line 675 "rbtree.m"
                          MR_Word mercury__rbtree__RLR_54;

#line 671 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_81)) == (MR_mktag((MR_Integer) 1)));
#line 671 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 671 "rbtree.m"
                            {
#line 671 "rbtree.m"
                              mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 0));
#line 671 "rbtree.m"
                              mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 1));
#line 671 "rbtree.m"
                              mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 2)));
#line 671 "rbtree.m"
                              mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 3)));
#line 672 "rbtree.m"
                              {
#line 672 "rbtree.m"
                                MR_Word mercury__rbtree__TreeR_73;
#line 672 "rbtree.m"
                                MR_Word mercury__rbtree__TreeL_74;

#line 672 "rbtree.m"
                                {
#line 672 "rbtree.m"
                                  mercury__rbtree__TreeL_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 672 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 0) = mercury__rbtree__K0_20;
#line 672 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 1) = mercury__rbtree__V0_21;
#line 672 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 672 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
#line 672 "rbtree.m"
                                }
#line 673 "rbtree.m"
                                {
#line 673 "rbtree.m"
                                  mercury__rbtree__TreeR_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 673 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 0) = mercury__rbtree__RK_79;
#line 673 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 1) = mercury__rbtree__RV_80;
#line 673 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
#line 673 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 3) = ((MR_Box) (mercury__rbtree__RR_82));
#line 673 "rbtree.m"
                                }
#line 674 "rbtree.m"
                                {
#line 674 "rbtree.m"
                                  MR_Word base;
#line 674 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 674 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 674 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
#line 674 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
#line 674 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_74));
#line 674 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_73));
#line 674 "rbtree.m"
                                }
#line 672 "rbtree.m"
                              }
#line 671 "rbtree.m"
                            }
#line 671 "rbtree.m"
                          else
#line 678 "rbtree.m"
                            {
#line 675 "rbtree.m"
                              MR_Box mercury__rbtree___RRK_55;
#line 675 "rbtree.m"
                              MR_Box mercury__rbtree___RRV_56;
#line 675 "rbtree.m"
                              MR_Word mercury__rbtree___RRL_57;
#line 675 "rbtree.m"
                              MR_Word mercury__rbtree___RRR_58;

#line 675 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_82)) == (MR_mktag((MR_Integer) 1)));
#line 675 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 675 "rbtree.m"
                                {
#line 675 "rbtree.m"
                                  mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 0));
#line 675 "rbtree.m"
                                  mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 1));
#line 675 "rbtree.m"
                                  mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 2)));
#line 675 "rbtree.m"
                                  mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 3)));
#line 676 "rbtree.m"
                                  {
#line 676 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_75;

#line 676 "rbtree.m"
                                    {
#line 676 "rbtree.m"
                                      mercury__rbtree__TreeL_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 676 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 0) = mercury__rbtree__K0_20;
#line 676 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 1) = mercury__rbtree__V0_21;
#line 676 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 676 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 3) = ((MR_Box) (mercury__rbtree__RL_81));
#line 676 "rbtree.m"
                                    }
#line 677 "rbtree.m"
                                    {
#line 677 "rbtree.m"
                                      MR_Word base;
#line 677 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 677 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_79;
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_80;
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_75));
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_82));
#line 677 "rbtree.m"
                                    }
#line 676 "rbtree.m"
                                  }
#line 675 "rbtree.m"
                                }
#line 675 "rbtree.m"
                              else
#line 679 "rbtree.m"
                                {
#line 679 "rbtree.m"
                                  MR_Word base;
#line 679 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 679 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 679 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 679 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 679 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 679 "rbtree.m"
                                }
#line 678 "rbtree.m"
                            }
#line 675 "rbtree.m"
                        }
#line 668 "rbtree.m"
                      }
#line 668 "rbtree.m"
                    else
#line 682 "rbtree.m"
                      {
#line 682 "rbtree.m"
                        MR_Word base;
#line 682 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 682 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 682 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 682 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 682 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 682 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 682 "rbtree.m"
                      }
#line 662 "rbtree.m"
                  }
#line 637 "rbtree.m"
              }
#line 623 "rbtree.m"
          }
#line 604 "rbtree.m"
        else
#line 605 "rbtree.m"
          {
#line 605 "rbtree.m"
            MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 605 "rbtree.m"
            MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 605 "rbtree.m"
            MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 605 "rbtree.m"
            MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 605 "rbtree.m"
            MR_Word mercury__rbtree__Result_16;

#line 607 "rbtree.m"
            {
#line 607 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
            }
#line 612 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 609 "rbtree.m"
              {
#line 609 "rbtree.m"
                MR_Word mercury__rbtree__NewL_17;

#line 610 "rbtree.m"
                {
#line 610 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                }
#line 611 "rbtree.m"
                {
#line 611 "rbtree.m"
                  MR_Word base;
#line 611 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 611 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 611 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 611 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 611 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 611 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 611 "rbtree.m"
                }
#line 609 "rbtree.m"
              }
#line 612 "rbtree.m"
            else
#line 612 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 0))
#line 617 "rbtree.m"
              {
#line 617 "rbtree.m"
                MR_Word mercury__rbtree__NewL_19;

#line 618 "rbtree.m"
                {
#line 618 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_19);
                }
#line 619 "rbtree.m"
                {
#line 619 "rbtree.m"
                  MR_Word base;
#line 619 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 619 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 619 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 619 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 619 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_19));
#line 619 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 619 "rbtree.m"
                }
#line 617 "rbtree.m"
              }
#line 612 "rbtree.m"
            else
#line 613 "rbtree.m"
              {
#line 613 "rbtree.m"
                MR_Word mercury__rbtree__NewR_18;

#line 614 "rbtree.m"
                {
#line 614 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                }
#line 615 "rbtree.m"
                {
#line 615 "rbtree.m"
                  MR_Word base;
#line 615 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 615 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 615 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 615 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 615 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 615 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 615 "rbtree.m"
                }
#line 613 "rbtree.m"
              }
#line 605 "rbtree.m"
          }
#line 604 "rbtree.m"
      }
#line 604 "rbtree.m"
      break;
#line 604 "rbtree.m"
    }
#line 600 "rbtree.m"
}

#line 481 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
#line 481 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
#line 481 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 481 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 481 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 481 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 481 "rbtree.m"
{
#line 485 "rbtree.m"
  while (MR_TRUE)
#line 485 "rbtree.m"
    {
#line 485 "rbtree.m"
      /* tailcall optimized into a loop */
#line 485 "rbtree.m"
      {
#line 485 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 485 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "rbtree.m"
          {
#line 485 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 485 "rbtree.m"
            {
#line 485 "rbtree.m"
              MR_Word base;
#line 485 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 485 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 485 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 485 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 485 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 485 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 485 "rbtree.m"
            }
#line 485 "rbtree.m"
          }
#line 485 "rbtree.m"
        else
#line 485 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 501 "rbtree.m"
          {
#line 501 "rbtree.m"
            MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 501 "rbtree.m"
            MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 501 "rbtree.m"
            MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 501 "rbtree.m"
            MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 511 "rbtree.m"
            MR_Box mercury__rbtree__LK_26;
#line 511 "rbtree.m"
            MR_Box mercury__rbtree__LV_27;
#line 511 "rbtree.m"
            MR_Word mercury__rbtree__LL_28;
#line 511 "rbtree.m"
            MR_Word mercury__rbtree__LR_29;
#line 511 "rbtree.m"
            MR_Box mercury__rbtree__RK_30;
#line 511 "rbtree.m"
            MR_Box mercury__rbtree__RV_31;
#line 511 "rbtree.m"
            MR_Word mercury__rbtree__RL_32;
#line 511 "rbtree.m"
            MR_Word mercury__rbtree__RR_33;

#line 503 "rbtree.m"
            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
#line 503 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 503 "rbtree.m"
              {
#line 503 "rbtree.m"
                mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
#line 503 "rbtree.m"
                mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
#line 503 "rbtree.m"
                mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
#line 503 "rbtree.m"
                mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
#line 504 "rbtree.m"
                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
#line 504 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 504 "rbtree.m"
                  {
#line 504 "rbtree.m"
                    mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
#line 504 "rbtree.m"
                    mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
#line 504 "rbtree.m"
                    mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
#line 504 "rbtree.m"
                    mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
#line 504 "rbtree.m"
                  }
#line 503 "rbtree.m"
              }
#line 511 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 507 "rbtree.m"
              {
#line 507 "rbtree.m"
                MR_Word mercury__rbtree__L_34;
#line 507 "rbtree.m"
                MR_Word mercury__rbtree__R_35;
#line 507 "rbtree.m"
                MR_Word mercury__rbtree__Tree0_36;

#line 507 "rbtree.m"
                {
#line 507 "rbtree.m"
                  mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 507 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
#line 507 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
#line 507 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
#line 507 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
#line 507 "rbtree.m"
                }
#line 508 "rbtree.m"
                {
#line 508 "rbtree.m"
                  mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 508 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
#line 508 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
#line 508 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
#line 508 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
#line 508 "rbtree.m"
                }
#line 509 "rbtree.m"
                {
#line 509 "rbtree.m"
                  mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 509 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
#line 509 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
#line 509 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
#line 509 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
#line 509 "rbtree.m"
                }
#line 510 "rbtree.m"
                /* direct tailcall eliminated */
#line 510 "rbtree.m"
                {
#line 510 "rbtree.m"
                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

#line 510 "rbtree.m"
                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 510 "rbtree.m"
                }
#line 510 "rbtree.m"
                continue;
#line 507 "rbtree.m"
              }
#line 511 "rbtree.m"
            else
#line 513 "rbtree.m"
              {
#line 513 "rbtree.m"
                MR_Word mercury__rbtree__Result_37;

#line 513 "rbtree.m"
                {
#line 513 "rbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                }
#line 517 "rbtree.m"
                if ((mercury__rbtree__Result_37 == (MR_Integer) 1))
#line 518 "rbtree.m"
                  {
#line 518 "rbtree.m"
                    MR_Word mercury__rbtree__NewL_38;
#line 540 "rbtree.m"
                    MR_Box mercury__rbtree__LK_62;
#line 540 "rbtree.m"
                    MR_Box mercury__rbtree__LV_63;
#line 540 "rbtree.m"
                    MR_Word mercury__rbtree__LL_64;
#line 540 "rbtree.m"
                    MR_Word mercury__rbtree__LR_65;

#line 519 "rbtree.m"
                    {
#line 519 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                    }
#line 524 "rbtree.m"
                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
#line 524 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 524 "rbtree.m"
                      {
#line 524 "rbtree.m"
                        mercury__rbtree__LK_62 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
#line 524 "rbtree.m"
                        mercury__rbtree__LV_63 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
#line 524 "rbtree.m"
                        mercury__rbtree__LL_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
#line 524 "rbtree.m"
                        mercury__rbtree__LR_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
#line 530 "rbtree.m"
                        {
#line 527 "rbtree.m"
                          MR_Box mercury__rbtree___LLK_39;
#line 527 "rbtree.m"
                          MR_Box mercury__rbtree___LLV_40;
#line 527 "rbtree.m"
                          MR_Word mercury__rbtree___LLL_41;
#line 527 "rbtree.m"
                          MR_Word mercury__rbtree___LLR_42;

#line 527 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_64)) == (MR_mktag((MR_Integer) 1)));
#line 527 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 527 "rbtree.m"
                            {
#line 527 "rbtree.m"
                              mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 0));
#line 527 "rbtree.m"
                              mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 1));
#line 527 "rbtree.m"
                              mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 2)));
#line 527 "rbtree.m"
                              mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 3)));
#line 528 "rbtree.m"
                              {
#line 528 "rbtree.m"
                                MR_Word mercury__rbtree__TreeR_43;

#line 528 "rbtree.m"
                                {
#line 528 "rbtree.m"
                                  mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 528 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
#line 528 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
#line 528 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_65));
#line 528 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 528 "rbtree.m"
                                }
#line 529 "rbtree.m"
                                {
#line 529 "rbtree.m"
                                  MR_Word base;
#line 529 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 529 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 529 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_62;
#line 529 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_63;
#line 529 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_64));
#line 529 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
#line 529 "rbtree.m"
                                }
#line 528 "rbtree.m"
                              }
#line 527 "rbtree.m"
                            }
#line 527 "rbtree.m"
                          else
#line 534 "rbtree.m"
                            {
#line 534 "rbtree.m"
                              MR_Box mercury__rbtree__LRK_44;
#line 534 "rbtree.m"
                              MR_Box mercury__rbtree__LRV_45;
#line 534 "rbtree.m"
                              MR_Word mercury__rbtree__LRL_46;
#line 534 "rbtree.m"
                              MR_Word mercury__rbtree__LRR_47;

#line 530 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_65)) == (MR_mktag((MR_Integer) 1)));
#line 530 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 530 "rbtree.m"
                                {
#line 530 "rbtree.m"
                                  mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 0));
#line 530 "rbtree.m"
                                  mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 1));
#line 530 "rbtree.m"
                                  mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 2)));
#line 530 "rbtree.m"
                                  mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 3)));
#line 531 "rbtree.m"
                                  {
#line 531 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_48;
#line 531 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_60;

#line 531 "rbtree.m"
                                    {
#line 531 "rbtree.m"
                                      mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 531 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_62;
#line 531 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_63;
#line 531 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_64));
#line 531 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
#line 531 "rbtree.m"
                                    }
#line 532 "rbtree.m"
                                    {
#line 532 "rbtree.m"
                                      mercury__rbtree__TreeR_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 532 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 0) = mercury__rbtree__K0_19;
#line 532 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 1) = mercury__rbtree__V0_20;
#line 532 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
#line 532 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 532 "rbtree.m"
                                    }
#line 533 "rbtree.m"
                                    {
#line 533 "rbtree.m"
                                      MR_Word base;
#line 533 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 533 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
#line 533 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
#line 533 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
#line 533 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_60));
#line 533 "rbtree.m"
                                    }
#line 531 "rbtree.m"
                                  }
#line 530 "rbtree.m"
                                }
#line 530 "rbtree.m"
                              else
#line 538 "rbtree.m"
                                {
#line 538 "rbtree.m"
                                  MR_Word base;
#line 538 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 538 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 538 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 538 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 538 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 538 "rbtree.m"
                                }
#line 534 "rbtree.m"
                            }
#line 530 "rbtree.m"
                        }
#line 524 "rbtree.m"
                      }
#line 524 "rbtree.m"
                    else
#line 541 "rbtree.m"
                      {
#line 541 "rbtree.m"
                        MR_Word base;
#line 541 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 541 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 541 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 541 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 541 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 541 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 541 "rbtree.m"
                      }
#line 518 "rbtree.m"
                  }
#line 517 "rbtree.m"
                else
#line 517 "rbtree.m"
                if ((mercury__rbtree__Result_37 == (MR_Integer) 0))
#line 516 "rbtree.m"
                  {
#line 516 "rbtree.m"
                    MR_Word base;
#line 516 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 516 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K_2;
#line 516 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V_3;
#line 516 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 516 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 516 "rbtree.m"
                  }
#line 517 "rbtree.m"
                else
#line 544 "rbtree.m"
                  {
#line 544 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_50;
#line 566 "rbtree.m"
                    MR_Box mercury__rbtree__RK_76;
#line 566 "rbtree.m"
                    MR_Box mercury__rbtree__RV_77;
#line 566 "rbtree.m"
                    MR_Word mercury__rbtree__RL_78;
#line 566 "rbtree.m"
                    MR_Word mercury__rbtree__RR_79;

#line 545 "rbtree.m"
                    {
#line 545 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                    }
#line 550 "rbtree.m"
                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
#line 550 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 550 "rbtree.m"
                      {
#line 550 "rbtree.m"
                        mercury__rbtree__RK_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
#line 550 "rbtree.m"
                        mercury__rbtree__RV_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
#line 550 "rbtree.m"
                        mercury__rbtree__RL_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
#line 550 "rbtree.m"
                        mercury__rbtree__RR_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
#line 557 "rbtree.m"
                        {
#line 557 "rbtree.m"
                          MR_Box mercury__rbtree__RLK_51;
#line 557 "rbtree.m"
                          MR_Box mercury__rbtree__RLV_52;
#line 557 "rbtree.m"
                          MR_Word mercury__rbtree__RLL_53;
#line 557 "rbtree.m"
                          MR_Word mercury__rbtree__RLR_54;

#line 553 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_78)) == (MR_mktag((MR_Integer) 1)));
#line 553 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 553 "rbtree.m"
                            {
#line 553 "rbtree.m"
                              mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 0));
#line 553 "rbtree.m"
                              mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 1));
#line 553 "rbtree.m"
                              mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 2)));
#line 553 "rbtree.m"
                              mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 3)));
#line 554 "rbtree.m"
                              {
#line 554 "rbtree.m"
                                MR_Word mercury__rbtree__TreeR_70;
#line 554 "rbtree.m"
                                MR_Word mercury__rbtree__TreeL_71;

#line 554 "rbtree.m"
                                {
#line 554 "rbtree.m"
                                  mercury__rbtree__TreeL_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 554 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 0) = mercury__rbtree__K0_19;
#line 554 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 1) = mercury__rbtree__V0_20;
#line 554 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 554 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
#line 554 "rbtree.m"
                                }
#line 555 "rbtree.m"
                                {
#line 555 "rbtree.m"
                                  mercury__rbtree__TreeR_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 555 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 0) = mercury__rbtree__RK_76;
#line 555 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 1) = mercury__rbtree__RV_77;
#line 555 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
#line 555 "rbtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 3) = ((MR_Box) (mercury__rbtree__RR_79));
#line 555 "rbtree.m"
                                }
#line 556 "rbtree.m"
                                {
#line 556 "rbtree.m"
                                  MR_Word base;
#line 556 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 556 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 556 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
#line 556 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
#line 556 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_71));
#line 556 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_70));
#line 556 "rbtree.m"
                                }
#line 554 "rbtree.m"
                              }
#line 553 "rbtree.m"
                            }
#line 553 "rbtree.m"
                          else
#line 560 "rbtree.m"
                            {
#line 557 "rbtree.m"
                              MR_Box mercury__rbtree___RRK_55;
#line 557 "rbtree.m"
                              MR_Box mercury__rbtree___RRV_56;
#line 557 "rbtree.m"
                              MR_Word mercury__rbtree___RRL_57;
#line 557 "rbtree.m"
                              MR_Word mercury__rbtree___RRR_58;

#line 557 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_79)) == (MR_mktag((MR_Integer) 1)));
#line 557 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 557 "rbtree.m"
                                {
#line 557 "rbtree.m"
                                  mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 0));
#line 557 "rbtree.m"
                                  mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 1));
#line 557 "rbtree.m"
                                  mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 2)));
#line 557 "rbtree.m"
                                  mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 3)));
#line 558 "rbtree.m"
                                  {
#line 558 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_72;

#line 558 "rbtree.m"
                                    {
#line 558 "rbtree.m"
                                      mercury__rbtree__TreeL_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 558 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 0) = mercury__rbtree__K0_19;
#line 558 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 1) = mercury__rbtree__V0_20;
#line 558 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 558 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 3) = ((MR_Box) (mercury__rbtree__RL_78));
#line 558 "rbtree.m"
                                    }
#line 559 "rbtree.m"
                                    {
#line 559 "rbtree.m"
                                      MR_Word base;
#line 559 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 559 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_76;
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_77;
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_72));
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_79));
#line 559 "rbtree.m"
                                    }
#line 558 "rbtree.m"
                                  }
#line 557 "rbtree.m"
                                }
#line 557 "rbtree.m"
                              else
#line 564 "rbtree.m"
                                {
#line 564 "rbtree.m"
                                  MR_Word base;
#line 564 "rbtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 564 "rbtree.m"
                                  *mercury__rbtree__HeadVar__4_4 = base;
#line 564 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 564 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 564 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 564 "rbtree.m"
                                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 564 "rbtree.m"
                                }
#line 560 "rbtree.m"
                            }
#line 557 "rbtree.m"
                        }
#line 550 "rbtree.m"
                      }
#line 550 "rbtree.m"
                    else
#line 567 "rbtree.m"
                      {
#line 567 "rbtree.m"
                        MR_Word base;
#line 567 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 567 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 567 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 567 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 567 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 567 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 567 "rbtree.m"
                      }
#line 544 "rbtree.m"
                  }
#line 513 "rbtree.m"
              }
#line 501 "rbtree.m"
          }
#line 485 "rbtree.m"
        else
#line 486 "rbtree.m"
          {
#line 486 "rbtree.m"
            MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 486 "rbtree.m"
            MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 486 "rbtree.m"
            MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 486 "rbtree.m"
            MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 486 "rbtree.m"
            MR_Word mercury__rbtree__Result_16;

#line 488 "rbtree.m"
            {
#line 488 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
            }
#line 492 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 493 "rbtree.m"
              {
#line 493 "rbtree.m"
                MR_Word mercury__rbtree__NewL_17;

#line 494 "rbtree.m"
                {
#line 494 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                }
#line 495 "rbtree.m"
                {
#line 495 "rbtree.m"
                  MR_Word base;
#line 495 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 495 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 495 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 495 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 495 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 495 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 495 "rbtree.m"
                }
#line 493 "rbtree.m"
              }
#line 492 "rbtree.m"
            else
#line 492 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 0))
#line 491 "rbtree.m"
              {
#line 491 "rbtree.m"
                MR_Word base;
#line 491 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 491 "rbtree.m"
                *mercury__rbtree__HeadVar__4_4 = base;
#line 491 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 491 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 491 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 491 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 491 "rbtree.m"
              }
#line 492 "rbtree.m"
            else
#line 497 "rbtree.m"
              {
#line 497 "rbtree.m"
                MR_Word mercury__rbtree__NewR_18;

#line 498 "rbtree.m"
                {
#line 498 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                }
#line 499 "rbtree.m"
                {
#line 499 "rbtree.m"
                  MR_Word base;
#line 499 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 499 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 499 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 499 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 499 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 499 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 499 "rbtree.m"
                }
#line 497 "rbtree.m"
              }
#line 486 "rbtree.m"
          }
#line 485 "rbtree.m"
      }
#line 485 "rbtree.m"
      break;
#line 485 "rbtree.m"
    }
#line 481 "rbtree.m"
}

#line 289 "rbtree.m"
static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
#line 289 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
#line 289 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 289 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 289 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 289 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 289 "rbtree.m"
{
#line 294 "rbtree.m"
  while (MR_TRUE)
#line 294 "rbtree.m"
    {
#line 294 "rbtree.m"
      /* tailcall optimized into a loop */
#line 294 "rbtree.m"
      {
#line 294 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 294 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "rbtree.m"
          {
#line 294 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 294 "rbtree.m"
            {
#line 294 "rbtree.m"
              MR_Word base;
#line 294 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 294 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 294 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 294 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 294 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 294 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 294 "rbtree.m"
            }
#line 294 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 294 "rbtree.m"
          }
#line 294 "rbtree.m"
        else
#line 294 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 312 "rbtree.m"
          {
#line 312 "rbtree.m"
            MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 312 "rbtree.m"
            MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 312 "rbtree.m"
            MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 312 "rbtree.m"
            MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 324 "rbtree.m"
            MR_Box mercury__rbtree__LK_26;
#line 324 "rbtree.m"
            MR_Box mercury__rbtree__LV_27;
#line 324 "rbtree.m"
            MR_Word mercury__rbtree__LL_28;
#line 324 "rbtree.m"
            MR_Word mercury__rbtree__LR_29;
#line 324 "rbtree.m"
            MR_Box mercury__rbtree__RK_30;
#line 324 "rbtree.m"
            MR_Box mercury__rbtree__RV_31;
#line 324 "rbtree.m"
            MR_Word mercury__rbtree__RL_32;
#line 324 "rbtree.m"
            MR_Word mercury__rbtree__RR_33;

#line 314 "rbtree.m"
            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
#line 314 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 314 "rbtree.m"
              {
#line 314 "rbtree.m"
                mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
#line 314 "rbtree.m"
                mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
#line 314 "rbtree.m"
                mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
#line 314 "rbtree.m"
                mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
#line 315 "rbtree.m"
                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
#line 315 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 315 "rbtree.m"
                  {
#line 315 "rbtree.m"
                    mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
#line 315 "rbtree.m"
                    mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
#line 315 "rbtree.m"
                    mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
#line 315 "rbtree.m"
                    mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
#line 315 "rbtree.m"
                  }
#line 314 "rbtree.m"
              }
#line 324 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 320 "rbtree.m"
              {
#line 320 "rbtree.m"
                MR_Word mercury__rbtree__L_34;
#line 320 "rbtree.m"
                MR_Word mercury__rbtree__R_35;
#line 320 "rbtree.m"
                MR_Word mercury__rbtree__Tree0_36;

#line 320 "rbtree.m"
                {
#line 320 "rbtree.m"
                  mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
#line 320 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
#line 320 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
#line 320 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
#line 320 "rbtree.m"
                }
#line 321 "rbtree.m"
                {
#line 321 "rbtree.m"
                  mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
#line 321 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
#line 321 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
#line 321 "rbtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
#line 321 "rbtree.m"
                }
#line 322 "rbtree.m"
                {
#line 322 "rbtree.m"
                  mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 322 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
#line 322 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
#line 322 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
#line 322 "rbtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
#line 322 "rbtree.m"
                }
#line 323 "rbtree.m"
                /* direct tailcall eliminated */
#line 323 "rbtree.m"
                {
#line 323 "rbtree.m"
                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

#line 323 "rbtree.m"
                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 323 "rbtree.m"
                }
#line 323 "rbtree.m"
                continue;
#line 320 "rbtree.m"
              }
#line 324 "rbtree.m"
            else
#line 326 "rbtree.m"
              {
#line 326 "rbtree.m"
                MR_Word mercury__rbtree__Result_37;

#line 326 "rbtree.m"
                {
#line 326 "rbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                }
#line 350 "rbtree.m"
                if ((mercury__rbtree__Result_37 == (MR_Integer) 1))
#line 328 "rbtree.m"
                  {
#line 328 "rbtree.m"
                    MR_Word mercury__rbtree__NewL_38;
#line 347 "rbtree.m"
                    MR_Box mercury__rbtree__LK_60;
#line 347 "rbtree.m"
                    MR_Box mercury__rbtree__LV_61;
#line 347 "rbtree.m"
                    MR_Word mercury__rbtree__LL_62;
#line 347 "rbtree.m"
                    MR_Word mercury__rbtree__LR_63;

#line 329 "rbtree.m"
                    {
#line 329 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                    }
#line 328 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 328 "rbtree.m"
                      {
#line 334 "rbtree.m"
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
#line 334 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 334 "rbtree.m"
                          {
#line 334 "rbtree.m"
                            mercury__rbtree__LK_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
#line 334 "rbtree.m"
                            mercury__rbtree__LV_61 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
#line 334 "rbtree.m"
                            mercury__rbtree__LL_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
#line 334 "rbtree.m"
                            mercury__rbtree__LR_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
#line 340 "rbtree.m"
                            {
#line 337 "rbtree.m"
                              MR_Box mercury__rbtree___LLK_39;
#line 337 "rbtree.m"
                              MR_Box mercury__rbtree___LLV_40;
#line 337 "rbtree.m"
                              MR_Word mercury__rbtree___LLL_41;
#line 337 "rbtree.m"
                              MR_Word mercury__rbtree___LLR_42;

#line 337 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_62)) == (MR_mktag((MR_Integer) 1)));
#line 337 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 337 "rbtree.m"
                                {
#line 337 "rbtree.m"
                                  mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 0));
#line 337 "rbtree.m"
                                  mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 1));
#line 337 "rbtree.m"
                                  mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 2)));
#line 337 "rbtree.m"
                                  mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 3)));
#line 338 "rbtree.m"
                                  {
#line 338 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_43;

#line 338 "rbtree.m"
                                    {
#line 338 "rbtree.m"
                                      mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
#line 338 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
#line 338 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_63));
#line 338 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 338 "rbtree.m"
                                    }
#line 339 "rbtree.m"
                                    {
#line 339 "rbtree.m"
                                      MR_Word base;
#line 339 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 339 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_60;
#line 339 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_61;
#line 339 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_62));
#line 339 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
#line 339 "rbtree.m"
                                    }
#line 338 "rbtree.m"
                                  }
#line 337 "rbtree.m"
                                }
#line 337 "rbtree.m"
                              else
#line 344 "rbtree.m"
                                {
#line 344 "rbtree.m"
                                  MR_Box mercury__rbtree__LRK_44;
#line 344 "rbtree.m"
                                  MR_Box mercury__rbtree__LRV_45;
#line 344 "rbtree.m"
                                  MR_Word mercury__rbtree__LRL_46;
#line 344 "rbtree.m"
                                  MR_Word mercury__rbtree__LRR_47;

#line 340 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_63)) == (MR_mktag((MR_Integer) 1)));
#line 340 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 340 "rbtree.m"
                                    {
#line 340 "rbtree.m"
                                      mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 0));
#line 340 "rbtree.m"
                                      mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 1));
#line 340 "rbtree.m"
                                      mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 2)));
#line 340 "rbtree.m"
                                      mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 3)));
#line 341 "rbtree.m"
                                      {
#line 341 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_48;
#line 341 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeR_58;

#line 341 "rbtree.m"
                                        {
#line 341 "rbtree.m"
                                          mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 341 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_60;
#line 341 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_61;
#line 341 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_62));
#line 341 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
#line 341 "rbtree.m"
                                        }
#line 342 "rbtree.m"
                                        {
#line 342 "rbtree.m"
                                          mercury__rbtree__TreeR_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 342 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 0) = mercury__rbtree__K0_19;
#line 342 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 1) = mercury__rbtree__V0_20;
#line 342 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
#line 342 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 342 "rbtree.m"
                                        }
#line 343 "rbtree.m"
                                        {
#line 343 "rbtree.m"
                                          MR_Word base;
#line 343 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 343 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 343 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
#line 343 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
#line 343 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
#line 343 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_58));
#line 343 "rbtree.m"
                                        }
#line 341 "rbtree.m"
                                      }
#line 340 "rbtree.m"
                                    }
#line 340 "rbtree.m"
                                  else
#line 345 "rbtree.m"
                                    {
#line 345 "rbtree.m"
                                      MR_Word base;
#line 345 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 345 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 345 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 345 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 345 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 345 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 345 "rbtree.m"
                                    }
#line 344 "rbtree.m"
                                }
#line 340 "rbtree.m"
                            }
#line 334 "rbtree.m"
                          }
#line 334 "rbtree.m"
                        else
#line 348 "rbtree.m"
                          {
#line 348 "rbtree.m"
                            MR_Word base;
#line 348 "rbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "rbtree.m"
                            *mercury__rbtree__HeadVar__4_4 = base;
#line 348 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 348 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 348 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 348 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 348 "rbtree.m"
                          }
#line 347 "rbtree.m"
                        mercury__rbtree__succeeded = MR_TRUE;
#line 328 "rbtree.m"
                      }
#line 328 "rbtree.m"
                  }
#line 350 "rbtree.m"
                else
#line 350 "rbtree.m"
                if ((mercury__rbtree__Result_37 == (MR_Integer) 2))
#line 351 "rbtree.m"
                  {
#line 351 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_49;
#line 370 "rbtree.m"
                    MR_Box mercury__rbtree__RK_74;
#line 370 "rbtree.m"
                    MR_Box mercury__rbtree__RV_75;
#line 370 "rbtree.m"
                    MR_Word mercury__rbtree__RL_76;
#line 370 "rbtree.m"
                    MR_Word mercury__rbtree__RR_77;

#line 352 "rbtree.m"
                    {
#line 352 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_49);
                    }
#line 351 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 351 "rbtree.m"
                      {
#line 357 "rbtree.m"
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_49)) == (MR_mktag((MR_Integer) 1)));
#line 357 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 357 "rbtree.m"
                          {
#line 357 "rbtree.m"
                            mercury__rbtree__RK_74 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 0));
#line 357 "rbtree.m"
                            mercury__rbtree__RV_75 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 1));
#line 357 "rbtree.m"
                            mercury__rbtree__RL_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 2)));
#line 357 "rbtree.m"
                            mercury__rbtree__RR_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 3)));
#line 364 "rbtree.m"
                            {
#line 364 "rbtree.m"
                              MR_Box mercury__rbtree__RLK_50;
#line 364 "rbtree.m"
                              MR_Box mercury__rbtree__RLV_51;
#line 364 "rbtree.m"
                              MR_Word mercury__rbtree__RLL_52;
#line 364 "rbtree.m"
                              MR_Word mercury__rbtree__RLR_53;

#line 360 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_76)) == (MR_mktag((MR_Integer) 1)));
#line 360 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 360 "rbtree.m"
                                {
#line 360 "rbtree.m"
                                  mercury__rbtree__RLK_50 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 0));
#line 360 "rbtree.m"
                                  mercury__rbtree__RLV_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 1));
#line 360 "rbtree.m"
                                  mercury__rbtree__RLL_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 2)));
#line 360 "rbtree.m"
                                  mercury__rbtree__RLR_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 3)));
#line 361 "rbtree.m"
                                  {
#line 361 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_68;
#line 361 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_69;

#line 361 "rbtree.m"
                                    {
#line 361 "rbtree.m"
                                      mercury__rbtree__TreeL_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 361 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 0) = mercury__rbtree__K0_19;
#line 361 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 1) = mercury__rbtree__V0_20;
#line 361 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 361 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 3) = ((MR_Box) (mercury__rbtree__RLL_52));
#line 361 "rbtree.m"
                                    }
#line 362 "rbtree.m"
                                    {
#line 362 "rbtree.m"
                                      mercury__rbtree__TreeR_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 362 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 0) = mercury__rbtree__RK_74;
#line 362 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 1) = mercury__rbtree__RV_75;
#line 362 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 2) = ((MR_Box) (mercury__rbtree__RLR_53));
#line 362 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 3) = ((MR_Box) (mercury__rbtree__RR_77));
#line 362 "rbtree.m"
                                    }
#line 363 "rbtree.m"
                                    {
#line 363 "rbtree.m"
                                      MR_Word base;
#line 363 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 363 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 363 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_50;
#line 363 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_51;
#line 363 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_69));
#line 363 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_68));
#line 363 "rbtree.m"
                                    }
#line 361 "rbtree.m"
                                  }
#line 360 "rbtree.m"
                                }
#line 360 "rbtree.m"
                              else
#line 367 "rbtree.m"
                                {
#line 364 "rbtree.m"
                                  MR_Box mercury__rbtree___RRK_54;
#line 364 "rbtree.m"
                                  MR_Box mercury__rbtree___RRV_55;
#line 364 "rbtree.m"
                                  MR_Word mercury__rbtree___RRL_56;
#line 364 "rbtree.m"
                                  MR_Word mercury__rbtree___RRR_57;

#line 364 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_77)) == (MR_mktag((MR_Integer) 1)));
#line 364 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 364 "rbtree.m"
                                    {
#line 364 "rbtree.m"
                                      mercury__rbtree___RRK_54 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 0));
#line 364 "rbtree.m"
                                      mercury__rbtree___RRV_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 1));
#line 364 "rbtree.m"
                                      mercury__rbtree___RRL_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 2)));
#line 364 "rbtree.m"
                                      mercury__rbtree___RRR_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 3)));
#line 365 "rbtree.m"
                                      {
#line 365 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_70;

#line 365 "rbtree.m"
                                        {
#line 365 "rbtree.m"
                                          mercury__rbtree__TreeL_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 365 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 0) = mercury__rbtree__K0_19;
#line 365 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 1) = mercury__rbtree__V0_20;
#line 365 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 365 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 3) = ((MR_Box) (mercury__rbtree__RL_76));
#line 365 "rbtree.m"
                                        }
#line 366 "rbtree.m"
                                        {
#line 366 "rbtree.m"
                                          MR_Word base;
#line 366 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 366 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_74;
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_75;
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_70));
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_77));
#line 366 "rbtree.m"
                                        }
#line 365 "rbtree.m"
                                      }
#line 364 "rbtree.m"
                                    }
#line 364 "rbtree.m"
                                  else
#line 368 "rbtree.m"
                                    {
#line 368 "rbtree.m"
                                      MR_Word base;
#line 368 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 368 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 368 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 368 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 368 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 368 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
#line 368 "rbtree.m"
                                    }
#line 367 "rbtree.m"
                                }
#line 364 "rbtree.m"
                            }
#line 357 "rbtree.m"
                          }
#line 357 "rbtree.m"
                        else
#line 371 "rbtree.m"
                          {
#line 371 "rbtree.m"
                            MR_Word base;
#line 371 "rbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "rbtree.m"
                            *mercury__rbtree__HeadVar__4_4 = base;
#line 371 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 371 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 371 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 371 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
#line 371 "rbtree.m"
                          }
#line 370 "rbtree.m"
                        mercury__rbtree__succeeded = MR_TRUE;
#line 351 "rbtree.m"
                      }
#line 351 "rbtree.m"
                  }
#line 350 "rbtree.m"
                else
#line 350 "rbtree.m"
                  mercury__rbtree__succeeded = MR_FALSE;
#line 326 "rbtree.m"
              }
#line 312 "rbtree.m"
          }
#line 294 "rbtree.m"
        else
#line 295 "rbtree.m"
          {
#line 295 "rbtree.m"
            MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 295 "rbtree.m"
            MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 295 "rbtree.m"
            MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 295 "rbtree.m"
            MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 295 "rbtree.m"
            MR_Word mercury__rbtree__Result_16;

#line 297 "rbtree.m"
            {
#line 297 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
            }
#line 302 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 299 "rbtree.m"
              {
#line 299 "rbtree.m"
                MR_Word mercury__rbtree__NewL_17;

#line 300 "rbtree.m"
                {
#line 300 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                }
#line 299 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 299 "rbtree.m"
                  {
#line 301 "rbtree.m"
                    {
#line 301 "rbtree.m"
                      MR_Word base;
#line 301 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 301 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 301 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 301 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 301 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 301 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 301 "rbtree.m"
                    }
#line 301 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 299 "rbtree.m"
                  }
#line 299 "rbtree.m"
              }
#line 302 "rbtree.m"
            else
#line 302 "rbtree.m"
            if ((mercury__rbtree__Result_16 == (MR_Integer) 2))
#line 303 "rbtree.m"
              {
#line 303 "rbtree.m"
                MR_Word mercury__rbtree__NewR_18;

#line 304 "rbtree.m"
                {
#line 304 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                }
#line 303 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 303 "rbtree.m"
                  {
#line 305 "rbtree.m"
                    {
#line 305 "rbtree.m"
                      MR_Word base;
#line 305 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 305 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 305 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 305 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 305 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 305 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 305 "rbtree.m"
                    }
#line 305 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 303 "rbtree.m"
                  }
#line 303 "rbtree.m"
              }
#line 302 "rbtree.m"
            else
#line 302 "rbtree.m"
              mercury__rbtree__succeeded = MR_FALSE;
#line 295 "rbtree.m"
          }
#line 294 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 294 "rbtree.m"
      }
#line 294 "rbtree.m"
      break;
#line 294 "rbtree.m"
    }
#line 289 "rbtree.m"
}

#line 243 "rbtree.m"
void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0(
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_60,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_61,
#line 243 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__1_1,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3)
#line 243 "rbtree.m"
{
#line 243 "rbtree.m"
  while (MR_TRUE)
#line 243 "rbtree.m"
    {
#line 243 "rbtree.m"
      /* tailcall optimized into a loop */
#line 243 "rbtree.m"
      {
#line 243 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 243 "rbtree.m"
        MR_Integer mercury__rbtree__CastX_58 = (MR_Integer) mercury__rbtree__HeadVar__2_2;
#line 243 "rbtree.m"
        MR_Integer mercury__rbtree__CastY_59 = (MR_Integer) mercury__rbtree__HeadVar__3_3;

#line 243 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__CastX_58 == mercury__rbtree__CastY_59);
#line 243 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 4170 "rbtree.c"
          *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "rbtree.m"
          if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 243 "rbtree.m"
          else
#line 243 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4184 "rbtree.c"
            *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "rbtree.m"
          else
#line 4188 "rbtree.c"
            *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 243 "rbtree.m"
          {
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_72_72 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_73_73 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

#line 243 "rbtree.m"
            if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4207 "rbtree.c"
              *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "rbtree.m"
            else
#line 243 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 243 "rbtree.m"
              {
#line 243 "rbtree.m"
                MR_Box mercury__rbtree__V_51_51 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 243 "rbtree.m"
                MR_Box mercury__rbtree__V_52_52 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_55_55;

#line 243 "rbtree.m"
                {
#line 243 "rbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_55_55, mercury__rbtree__V_73_73, mercury__rbtree__V_51_51);
                }
#line 4231 "rbtree.c"
                mercury__rbtree__succeeded = (mercury__rbtree__V_55_55 == (MR_Integer) 0);
#line 243 "rbtree.m"
                mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                  *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_55_55;
#line 243 "rbtree.m"
                else
#line 243 "rbtree.m"
                  {
#line 243 "rbtree.m"
                    MR_Word mercury__rbtree__V_56_56;

#line 243 "rbtree.m"
                    {
#line 243 "rbtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_56_56, mercury__rbtree__V_72_72, mercury__rbtree__V_52_52);
                    }
#line 4251 "rbtree.c"
                    mercury__rbtree__succeeded = (mercury__rbtree__V_56_56 == (MR_Integer) 0);
#line 243 "rbtree.m"
                    mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                      *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_56_56;
#line 243 "rbtree.m"
                    else
#line 243 "rbtree.m"
                      {
#line 243 "rbtree.m"
                        MR_Word mercury__rbtree__V_57_57;

#line 243 "rbtree.m"
                        {
#line 243 "rbtree.m"
                          mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_57_57, mercury__rbtree__V_71_71, mercury__rbtree__V_53_53);
                        }
#line 4271 "rbtree.c"
                        mercury__rbtree__succeeded = (mercury__rbtree__V_57_57 == (MR_Integer) 0);
#line 243 "rbtree.m"
                        mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                          *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_57_57;
#line 243 "rbtree.m"
                        else
#line 243 "rbtree.m"
                          {
#line 243 "rbtree.m"
                            /* direct tailcall eliminated */
#line 243 "rbtree.m"
                            {
#line 243 "rbtree.m"
                              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_70_70;
#line 243 "rbtree.m"
                              MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_54_54;

#line 243 "rbtree.m"
                              mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
#line 243 "rbtree.m"
                              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 243 "rbtree.m"
                            }
#line 243 "rbtree.m"
                            continue;
#line 243 "rbtree.m"
                          }
#line 243 "rbtree.m"
                      }
#line 243 "rbtree.m"
                  }
#line 243 "rbtree.m"
              }
#line 243 "rbtree.m"
            else
#line 4310 "rbtree.c"
              *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "rbtree.m"
          }
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
          {
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_76_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

#line 243 "rbtree.m"
            if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4329 "rbtree.c"
              *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "rbtree.m"
            else
#line 243 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4335 "rbtree.c"
              *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "rbtree.m"
            else
#line 243 "rbtree.m"
              {
#line 243 "rbtree.m"
                MR_Box mercury__rbtree__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 243 "rbtree.m"
                MR_Box mercury__rbtree__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 243 "rbtree.m"
                MR_Word mercury__rbtree__V_24_24;

#line 243 "rbtree.m"
                {
#line 243 "rbtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_24_24, mercury__rbtree__V_77_77, mercury__rbtree__V_20_20);
                }
#line 4357 "rbtree.c"
                mercury__rbtree__succeeded = (mercury__rbtree__V_24_24 == (MR_Integer) 0);
#line 243 "rbtree.m"
                mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                  *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_24_24;
#line 243 "rbtree.m"
                else
#line 243 "rbtree.m"
                  {
#line 243 "rbtree.m"
                    MR_Word mercury__rbtree__V_25_25;

#line 243 "rbtree.m"
                    {
#line 243 "rbtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_25_25, mercury__rbtree__V_76_76, mercury__rbtree__V_21_21);
                    }
#line 4377 "rbtree.c"
                    mercury__rbtree__succeeded = (mercury__rbtree__V_25_25 == (MR_Integer) 0);
#line 243 "rbtree.m"
                    mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                      *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_25_25;
#line 243 "rbtree.m"
                    else
#line 243 "rbtree.m"
                      {
#line 243 "rbtree.m"
                        MR_Word mercury__rbtree__V_26_26;

#line 243 "rbtree.m"
                        {
#line 243 "rbtree.m"
                          mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_26_26, mercury__rbtree__V_75_75, mercury__rbtree__V_22_22);
                        }
#line 4397 "rbtree.c"
                        mercury__rbtree__succeeded = (mercury__rbtree__V_26_26 == (MR_Integer) 0);
#line 243 "rbtree.m"
                        mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 243 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                          *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_26_26;
#line 243 "rbtree.m"
                        else
#line 243 "rbtree.m"
                          {
#line 243 "rbtree.m"
                            /* direct tailcall eliminated */
#line 243 "rbtree.m"
                            {
#line 243 "rbtree.m"
                              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_74_74;
#line 243 "rbtree.m"
                              MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_23_23;

#line 243 "rbtree.m"
                              mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
#line 243 "rbtree.m"
                              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 243 "rbtree.m"
                            }
#line 243 "rbtree.m"
                            continue;
#line 243 "rbtree.m"
                          }
#line 243 "rbtree.m"
                      }
#line 243 "rbtree.m"
                  }
#line 243 "rbtree.m"
              }
#line 243 "rbtree.m"
          }
#line 243 "rbtree.m"
      }
#line 243 "rbtree.m"
      break;
#line 243 "rbtree.m"
    }
#line 243 "rbtree.m"
}

#line 243 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0(
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_23,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_24,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 243 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2)
#line 243 "rbtree.m"
{
#line 243 "rbtree.m"
  while (MR_TRUE)
#line 243 "rbtree.m"
    {
#line 243 "rbtree.m"
      /* tailcall optimized into a loop */
#line 243 "rbtree.m"
      {
#line 243 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 243 "rbtree.m"
        MR_Integer mercury__rbtree__CastX_21 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
#line 243 "rbtree.m"
        MR_Integer mercury__rbtree__CastY_22 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

#line 243 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__CastX_21 == mercury__rbtree__CastY_22);
#line 243 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
          mercury__rbtree__succeeded = MR_TRUE;
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "rbtree.m"
          {
#line 243 "rbtree.m"
            MR_Integer mercury__rbtree__CastX_3 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
#line 243 "rbtree.m"
            MR_Integer mercury__rbtree__CastY_4 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

#line 243 "rbtree.m"
            mercury__rbtree__succeeded = (mercury__rbtree__CastY_4 == mercury__rbtree__CastX_3);
#line 243 "rbtree.m"
          }
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 243 "rbtree.m"
          {
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_14_14 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_17_17;
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_18_18;
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_19_19;
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_20_20;

#line 243 "rbtree.m"
            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 243 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
              {
#line 243 "rbtree.m"
                mercury__rbtree__V_17_17 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 243 "rbtree.m"
                mercury__rbtree__V_18_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 243 "rbtree.m"
                mercury__rbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "rbtree.m"
                mercury__rbtree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 4531 "rbtree.c"
                {
#line 4533 "rbtree.c"
                  mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_13_13, mercury__rbtree__V_17_17);
                }
#line 243 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                  {
#line 4540 "rbtree.c"
                    {
#line 4542 "rbtree.c"
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_14_14, mercury__rbtree__V_18_18);
                    }
#line 243 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                      {
#line 4549 "rbtree.c"
                        {
#line 4551 "rbtree.c"
                          mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_15_15, mercury__rbtree__V_19_19);
                        }
#line 243 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 4556 "rbtree.c"
                          {
#line 4558 "rbtree.c"
                            /* direct tailcall eliminated */
#line 4560 "rbtree.c"
                            {
#line 4562 "rbtree.c"
                              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_16_16;
#line 4564 "rbtree.c"
                              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_20_20;

#line 4567 "rbtree.c"
                              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 4569 "rbtree.c"
                              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 4571 "rbtree.c"
                            }
#line 4573 "rbtree.c"
                            continue;
#line 4575 "rbtree.c"
                          }
#line 243 "rbtree.m"
                      }
#line 243 "rbtree.m"
                  }
#line 243 "rbtree.m"
              }
#line 243 "rbtree.m"
          }
#line 243 "rbtree.m"
        else
#line 243 "rbtree.m"
          {
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_9_9;
#line 243 "rbtree.m"
            MR_Box mercury__rbtree__V_10_10;
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_11_11;
#line 243 "rbtree.m"
            MR_Word mercury__rbtree__V_12_12;

#line 243 "rbtree.m"
            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 243 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
              {
#line 243 "rbtree.m"
                mercury__rbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 243 "rbtree.m"
                mercury__rbtree__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 243 "rbtree.m"
                mercury__rbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "rbtree.m"
                mercury__rbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 4620 "rbtree.c"
                {
#line 4622 "rbtree.c"
                  mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_5_5, mercury__rbtree__V_9_9);
                }
#line 243 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                  {
#line 4629 "rbtree.c"
                    {
#line 4631 "rbtree.c"
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_6_6, mercury__rbtree__V_10_10);
                    }
#line 243 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 243 "rbtree.m"
                      {
#line 4638 "rbtree.c"
                        {
#line 4640 "rbtree.c"
                          mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_7_7, mercury__rbtree__V_11_11);
                        }
#line 243 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 4645 "rbtree.c"
                          {
#line 4647 "rbtree.c"
                            /* direct tailcall eliminated */
#line 4649 "rbtree.c"
                            {
#line 4651 "rbtree.c"
                              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_8_8;
#line 4653 "rbtree.c"
                              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_12_12;

#line 4656 "rbtree.c"
                              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 4658 "rbtree.c"
                              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 4660 "rbtree.c"
                            }
#line 4662 "rbtree.c"
                            continue;
#line 4664 "rbtree.c"
                          }
#line 243 "rbtree.m"
                      }
#line 243 "rbtree.m"
                  }
#line 243 "rbtree.m"
              }
#line 243 "rbtree.m"
          }
#line 243 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 243 "rbtree.m"
      }
#line 243 "rbtree.m"
      break;
#line 243 "rbtree.m"
    }
#line 243 "rbtree.m"
}

#line 859 "rbtree.m"
void MR_CALL 
mercury__rbtree__delete_2_5_p_1(
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 859 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 859 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 859 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 859 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 859 "rbtree.m"
{
#line 861 "rbtree.m"
  {
#line 861 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 861 "rbtree.m"
    {
#line 861 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, mercury__rbtree__HeadVar__5_5);
#line 861 "rbtree.m"
      return;
    }
#line 861 "rbtree.m"
  }
#line 859 "rbtree.m"
}

#line 858 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__delete_2_5_p_0(
#line 858 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 858 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 858 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 858 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 858 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 858 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 858 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 858 "rbtree.m"
{
#line 861 "rbtree.m"
  {
#line 861 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 861 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "rbtree.m"
      {
#line 861 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__HeadVar__3_3 == (MR_Integer) 0);
#line 861 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 861 "rbtree.m"
          {
#line 861 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "rbtree.m"
            *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 861 "rbtree.m"
          }
#line 861 "rbtree.m"
      }
#line 861 "rbtree.m"
    else
#line 861 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 887 "rbtree.m"
      {
#line 887 "rbtree.m"
        MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 887 "rbtree.m"
        MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 887 "rbtree.m"
        MR_Word mercury__rbtree__Result_33;

#line 888 "rbtree.m"
        {
#line 888 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
        }
#line 903 "rbtree.m"
        if ((mercury__rbtree__Result_33 == (MR_Integer) 1))
#line 904 "rbtree.m"
          {
#line 904 "rbtree.m"
            MR_Word mercury__rbtree__NewL_41;

#line 905 "rbtree.m"
            {
#line 905 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
            }
#line 904 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 904 "rbtree.m"
              {
#line 906 "rbtree.m"
                {
#line 906 "rbtree.m"
                  MR_Word base;
#line 906 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 906 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 906 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 906 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 906 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
#line 906 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 906 "rbtree.m"
                }
#line 906 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 904 "rbtree.m"
              }
#line 904 "rbtree.m"
          }
#line 903 "rbtree.m"
        else
#line 903 "rbtree.m"
        if ((mercury__rbtree__Result_33 == (MR_Integer) 0))
#line 890 "rbtree.m"
          {
#line 893 "rbtree.m"
            MR_Box mercury__rbtree__NewK_34;
#line 893 "rbtree.m"
            MR_Box mercury__rbtree__NewV_35;
#line 893 "rbtree.m"
            MR_Word mercury__rbtree__NewL_36;

#line 891 "rbtree.m"
            {
#line 891 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
            }
#line 893 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 892 "rbtree.m"
              {
#line 892 "rbtree.m"
                MR_Word base;
#line 892 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
#line 892 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 892 "rbtree.m"
              }
#line 893 "rbtree.m"
            else
#line 897 "rbtree.m"
              {
#line 897 "rbtree.m"
                MR_Word mercury__rbtree__NewR_37;
#line 897 "rbtree.m"
                MR_Box mercury__rbtree__NewK_39;
#line 897 "rbtree.m"
                MR_Box mercury__rbtree__NewV_40;

#line 895 "rbtree.m"
                {
#line 895 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                }
#line 897 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 896 "rbtree.m"
                  {
#line 896 "rbtree.m"
                    MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 896 "rbtree.m"
                    {
#line 896 "rbtree.m"
                      MR_Word base;
#line 896 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 896 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
#line 896 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
#line 896 "rbtree.m"
                    }
#line 896 "rbtree.m"
                  }
#line 897 "rbtree.m"
                else
#line 899 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "rbtree.m"
              }
#line 902 "rbtree.m"
            {
#line 902 "rbtree.m"
              MR_Word base;
#line 902 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 902 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
#line 902 "rbtree.m"
            }
#line 890 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 890 "rbtree.m"
          }
#line 903 "rbtree.m"
        else
#line 908 "rbtree.m"
          {
#line 908 "rbtree.m"
            MR_Word mercury__rbtree__NewR_42;

#line 909 "rbtree.m"
            {
#line 909 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
            }
#line 908 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 908 "rbtree.m"
              {
#line 910 "rbtree.m"
                {
#line 910 "rbtree.m"
                  MR_Word base;
#line 910 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 910 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 910 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 910 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 910 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
#line 910 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
#line 910 "rbtree.m"
                }
#line 910 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 908 "rbtree.m"
              }
#line 908 "rbtree.m"
          }
#line 887 "rbtree.m"
      }
#line 861 "rbtree.m"
    else
#line 862 "rbtree.m"
      {
#line 862 "rbtree.m"
        MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 862 "rbtree.m"
        MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 862 "rbtree.m"
        MR_Word mercury__rbtree__Result_15;

#line 863 "rbtree.m"
        {
#line 863 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
        }
#line 878 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 879 "rbtree.m"
          {
#line 879 "rbtree.m"
            MR_Word mercury__rbtree__NewL_23;

#line 880 "rbtree.m"
            {
#line 880 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
            }
#line 879 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 879 "rbtree.m"
              {
#line 881 "rbtree.m"
                {
#line 881 "rbtree.m"
                  MR_Word base;
#line 881 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 881 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 881 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 881 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 881 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 881 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 881 "rbtree.m"
                }
#line 881 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 879 "rbtree.m"
              }
#line 879 "rbtree.m"
          }
#line 878 "rbtree.m"
        else
#line 878 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 865 "rbtree.m"
          {
#line 868 "rbtree.m"
            MR_Box mercury__rbtree__NewK_16;
#line 868 "rbtree.m"
            MR_Box mercury__rbtree__NewV_17;
#line 868 "rbtree.m"
            MR_Word mercury__rbtree__NewL_18;

#line 866 "rbtree.m"
            {
#line 866 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
            }
#line 868 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 867 "rbtree.m"
              {
#line 867 "rbtree.m"
                MR_Word base;
#line 867 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 867 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
#line 867 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 867 "rbtree.m"
              }
#line 868 "rbtree.m"
            else
#line 872 "rbtree.m"
              {
#line 872 "rbtree.m"
                MR_Word mercury__rbtree__NewR_19;
#line 872 "rbtree.m"
                MR_Box mercury__rbtree__NewK_21;
#line 872 "rbtree.m"
                MR_Box mercury__rbtree__NewV_22;

#line 870 "rbtree.m"
                {
#line 870 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                }
#line 872 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 871 "rbtree.m"
                  {
#line 871 "rbtree.m"
                    MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 871 "rbtree.m"
                    {
#line 871 "rbtree.m"
                      MR_Word base;
#line 871 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 871 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 871 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
#line 871 "rbtree.m"
                    }
#line 871 "rbtree.m"
                  }
#line 872 "rbtree.m"
                else
#line 874 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "rbtree.m"
              }
#line 877 "rbtree.m"
            {
#line 877 "rbtree.m"
              MR_Word base;
#line 877 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 877 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
#line 877 "rbtree.m"
            }
#line 865 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 865 "rbtree.m"
          }
#line 878 "rbtree.m"
        else
#line 883 "rbtree.m"
          {
#line 883 "rbtree.m"
            MR_Word mercury__rbtree__NewR_24;

#line 884 "rbtree.m"
            {
#line 884 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
            }
#line 883 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 883 "rbtree.m"
              {
#line 885 "rbtree.m"
                {
#line 885 "rbtree.m"
                  MR_Word base;
#line 885 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 885 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 885 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 885 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 885 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
#line 885 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
#line 885 "rbtree.m"
                }
#line 885 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 883 "rbtree.m"
              }
#line 883 "rbtree.m"
          }
#line 862 "rbtree.m"
      }
#line 861 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 861 "rbtree.m"
  }
#line 858 "rbtree.m"
}

#line 228 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__map_values_3_p_1(
#line 228 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
#line 228 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
#line 228 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
#line 228 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 228 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 228 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 228 "rbtree.m"
{
#line 1100 "rbtree.m"
  {
#line 1100 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1100 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "rbtree.m"
      {
#line 1100 "rbtree.m"
        *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "rbtree.m"
        mercury__rbtree__succeeded = MR_TRUE;
#line 1100 "rbtree.m"
      }
#line 1100 "rbtree.m"
    else
#line 1100 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1107 "rbtree.m"
      {
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__W0_22;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left_23;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right_24;
#line 1109 "rbtree.m"
        MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1109 "rbtree.m"
        {
#line 1109 "rbtree.m"
          mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
        }
#line 1107 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 1107 "rbtree.m"
          {
#line 1110 "rbtree.m"
            {
#line 1110 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
            }
#line 1107 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1107 "rbtree.m"
              {
#line 1111 "rbtree.m"
                {
#line 1111 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
                }
#line 1107 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1107 "rbtree.m"
                  {
#line 1112 "rbtree.m"
                    {
#line 1112 "rbtree.m"
                      MR_Word base;
#line 1112 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "rbtree.m"
                      *mercury__rbtree__HeadVar__3_3 = base;
#line 1112 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1112 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1112 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1112 "rbtree.m"
                    }
#line 1112 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 1107 "rbtree.m"
                  }
#line 1107 "rbtree.m"
              }
#line 1107 "rbtree.m"
          }
#line 1107 "rbtree.m"
      }
#line 1100 "rbtree.m"
    else
#line 1101 "rbtree.m"
      {
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__W0_12;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left_13;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right_14;
#line 1103 "rbtree.m"
        MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1103 "rbtree.m"
        {
#line 1103 "rbtree.m"
          mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
        }
#line 1101 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 1101 "rbtree.m"
          {
#line 1104 "rbtree.m"
            {
#line 1104 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
            }
#line 1101 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1101 "rbtree.m"
              {
#line 1105 "rbtree.m"
                {
#line 1105 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
                }
#line 1101 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1101 "rbtree.m"
                  {
#line 1106 "rbtree.m"
                    {
#line 1106 "rbtree.m"
                      MR_Word base;
#line 1106 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "rbtree.m"
                      *mercury__rbtree__HeadVar__3_3 = base;
#line 1106 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1106 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1106 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1106 "rbtree.m"
                    }
#line 1106 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 1101 "rbtree.m"
                  }
#line 1101 "rbtree.m"
              }
#line 1101 "rbtree.m"
          }
#line 1101 "rbtree.m"
      }
#line 1100 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 1100 "rbtree.m"
  }
#line 228 "rbtree.m"
}

#line 227 "rbtree.m"
void MR_CALL 
mercury__rbtree__map_values_3_p_0(
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 227 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 227 "rbtree.m"
{
#line 1100 "rbtree.m"
  {
#line 1100 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1100 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "rbtree.m"
      *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "rbtree.m"
    else
#line 1100 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1107 "rbtree.m"
      {
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1107 "rbtree.m"
        MR_Box mercury__rbtree__W0_22;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Left_23;
#line 1107 "rbtree.m"
        MR_Word mercury__rbtree__Right_24;
#line 1109 "rbtree.m"
        void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1109 "rbtree.m"
        {
#line 1109 "rbtree.m"
          mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
        }
#line 1110 "rbtree.m"
        {
#line 1110 "rbtree.m"
          mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
        }
#line 1111 "rbtree.m"
        {
#line 1111 "rbtree.m"
          mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
        }
#line 1112 "rbtree.m"
        {
#line 1112 "rbtree.m"
          MR_Word base;
#line 1112 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "rbtree.m"
          *mercury__rbtree__HeadVar__3_3 = base;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1112 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1112 "rbtree.m"
        }
#line 1107 "rbtree.m"
      }
#line 1100 "rbtree.m"
    else
#line 1101 "rbtree.m"
      {
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1101 "rbtree.m"
        MR_Box mercury__rbtree__W0_12;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Left_13;
#line 1101 "rbtree.m"
        MR_Word mercury__rbtree__Right_14;
#line 1103 "rbtree.m"
        void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1103 "rbtree.m"
        {
#line 1103 "rbtree.m"
          mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
        }
#line 1104 "rbtree.m"
        {
#line 1104 "rbtree.m"
          mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
        }
#line 1105 "rbtree.m"
        {
#line 1105 "rbtree.m"
          mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
        }
#line 1106 "rbtree.m"
        {
#line 1106 "rbtree.m"
          MR_Word base;
#line 1106 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "rbtree.m"
          *mercury__rbtree__HeadVar__3_3 = base;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1106 "rbtree.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1106 "rbtree.m"
        }
#line 1101 "rbtree.m"
      }
#line 1100 "rbtree.m"
  }
#line 227 "rbtree.m"
}

#line 225 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__map_values_2_f_0(
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_17,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_18,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_19,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__F_4,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__T1_5)
#line 225 "rbtree.m"
{
#line 1098 "rbtree.m"
  {
#line 1098 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1098 "rbtree.m"
    MR_Word mercury__rbtree__T2_6;

#line 1098 "rbtree.m"
    {
#line 1098 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__F_4, mercury__rbtree__T1_5, &mercury__rbtree__T2_6);
    }
#line 1098 "rbtree.m"
    return mercury__rbtree__T2_6;
#line 1098 "rbtree.m"
  }
#line 225 "rbtree.m"
}

#line 222 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_4(
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 222 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 222 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 222 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 222 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 222 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 222 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 222 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 222 "rbtree.m"
{
#line 1084 "rbtree.m"
  while (MR_TRUE)
#line 1084 "rbtree.m"
    {
#line 1084 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1084 "rbtree.m"
      {
#line 1084 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1084 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "rbtree.m"
          {
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1084 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1084 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1091 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
            }
#line 1091 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1091 "rbtree.m"
            {
#line 1091 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
            }
#line 1092 "rbtree.m"
            /* direct tailcall eliminated */
#line 1092 "rbtree.m"
            {
#line 1092 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1092 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1092 "rbtree.m"
            }
#line 1092 "rbtree.m"
            continue;
#line 1089 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1085 "rbtree.m"
          {
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1087 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1086 "rbtree.m"
            {
#line 1086 "rbtree.m"
              mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
            }
#line 1087 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1087 "rbtree.m"
            {
#line 1087 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
            }
#line 1088 "rbtree.m"
            /* direct tailcall eliminated */
#line 1088 "rbtree.m"
            {
#line 1088 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1088 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1088 "rbtree.m"
            }
#line 1088 "rbtree.m"
            continue;
#line 1085 "rbtree.m"
          }
#line 1084 "rbtree.m"
      }
#line 1084 "rbtree.m"
      break;
#line 1084 "rbtree.m"
    }
#line 222 "rbtree.m"
}

#line 220 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_3(
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 220 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 220 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 220 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 220 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 220 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 220 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 220 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 220 "rbtree.m"
{
#line 1084 "rbtree.m"
  while (MR_TRUE)
#line 1084 "rbtree.m"
    {
#line 1084 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1084 "rbtree.m"
      {
#line 1084 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1084 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "rbtree.m"
          {
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1084 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1084 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1091 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
            }
#line 1091 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1091 "rbtree.m"
            {
#line 1091 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
            }
#line 1092 "rbtree.m"
            /* direct tailcall eliminated */
#line 1092 "rbtree.m"
            {
#line 1092 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1092 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1092 "rbtree.m"
            }
#line 1092 "rbtree.m"
            continue;
#line 1089 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1085 "rbtree.m"
          {
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1087 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1086 "rbtree.m"
            {
#line 1086 "rbtree.m"
              mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
            }
#line 1087 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1087 "rbtree.m"
            {
#line 1087 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
            }
#line 1088 "rbtree.m"
            /* direct tailcall eliminated */
#line 1088 "rbtree.m"
            {
#line 1088 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1088 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1088 "rbtree.m"
            }
#line 1088 "rbtree.m"
            continue;
#line 1085 "rbtree.m"
          }
#line 1084 "rbtree.m"
      }
#line 1084 "rbtree.m"
      break;
#line 1084 "rbtree.m"
    }
#line 220 "rbtree.m"
}

#line 218 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_2(
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 218 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 218 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 218 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 218 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 218 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 218 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 218 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 218 "rbtree.m"
{
#line 1084 "rbtree.m"
  while (MR_TRUE)
#line 1084 "rbtree.m"
    {
#line 1084 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1084 "rbtree.m"
      {
#line 1084 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1084 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "rbtree.m"
          {
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1084 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1084 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1091 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
            }
#line 1091 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1091 "rbtree.m"
            {
#line 1091 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
            }
#line 1092 "rbtree.m"
            /* direct tailcall eliminated */
#line 1092 "rbtree.m"
            {
#line 1092 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1092 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1092 "rbtree.m"
            }
#line 1092 "rbtree.m"
            continue;
#line 1089 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1085 "rbtree.m"
          {
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1087 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1086 "rbtree.m"
            {
#line 1086 "rbtree.m"
              mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
            }
#line 1087 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1087 "rbtree.m"
            {
#line 1087 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
            }
#line 1088 "rbtree.m"
            /* direct tailcall eliminated */
#line 1088 "rbtree.m"
            {
#line 1088 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1088 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1088 "rbtree.m"
            }
#line 1088 "rbtree.m"
            continue;
#line 1085 "rbtree.m"
          }
#line 1084 "rbtree.m"
      }
#line 1084 "rbtree.m"
      break;
#line 1084 "rbtree.m"
    }
#line 218 "rbtree.m"
}

#line 216 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl3_8_p_1(
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 216 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 216 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 216 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 216 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 216 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 216 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 216 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 216 "rbtree.m"
{
#line 1084 "rbtree.m"
  while (MR_TRUE)
#line 1084 "rbtree.m"
    {
#line 1084 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1084 "rbtree.m"
      {
#line 1084 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1084 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "rbtree.m"
          {
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1084 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1084 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1084 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1091 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
            }
#line 1089 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1089 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1091 "rbtree.m"
                {
#line 1091 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
                }
#line 1089 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1092 "rbtree.m"
                  {
#line 1092 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1092 "rbtree.m"
                    {
#line 1092 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1092 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1092 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1092 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1092 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1092 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1092 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1092 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1092 "rbtree.m"
                    }
#line 1092 "rbtree.m"
                    continue;
#line 1092 "rbtree.m"
                  }
#line 1089 "rbtree.m"
              }
#line 1089 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1085 "rbtree.m"
          {
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1087 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1086 "rbtree.m"
            {
#line 1086 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
            }
#line 1085 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1085 "rbtree.m"
              {
#line 1087 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1087 "rbtree.m"
                {
#line 1087 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
                }
#line 1085 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1088 "rbtree.m"
                  {
#line 1088 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1088 "rbtree.m"
                    {
#line 1088 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1088 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1088 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1088 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1088 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1088 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1088 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1088 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1088 "rbtree.m"
                    }
#line 1088 "rbtree.m"
                    continue;
#line 1088 "rbtree.m"
                  }
#line 1085 "rbtree.m"
              }
#line 1085 "rbtree.m"
          }
#line 1084 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1084 "rbtree.m"
      }
#line 1084 "rbtree.m"
      break;
#line 1084 "rbtree.m"
    }
#line 216 "rbtree.m"
}

#line 214 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_0(
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 214 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 214 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 214 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 214 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 214 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 214 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 214 "rbtree.m"
{
#line 1084 "rbtree.m"
  while (MR_TRUE)
#line 1084 "rbtree.m"
    {
#line 1084 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1084 "rbtree.m"
      {
#line 1084 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1084 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "rbtree.m"
          {
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1084 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1084 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1084 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "rbtree.m"
            MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1089 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1091 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
            }
#line 1091 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1091 "rbtree.m"
            {
#line 1091 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
            }
#line 1092 "rbtree.m"
            /* direct tailcall eliminated */
#line 1092 "rbtree.m"
            {
#line 1092 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1092 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1092 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1092 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1092 "rbtree.m"
            }
#line 1092 "rbtree.m"
            continue;
#line 1089 "rbtree.m"
          }
#line 1084 "rbtree.m"
        else
#line 1085 "rbtree.m"
          {
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1085 "rbtree.m"
            MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1085 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1087 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1086 "rbtree.m"
            {
#line 1086 "rbtree.m"
              mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
            }
#line 1087 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1087 "rbtree.m"
            {
#line 1087 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
            }
#line 1088 "rbtree.m"
            /* direct tailcall eliminated */
#line 1088 "rbtree.m"
            {
#line 1088 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1088 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1088 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1088 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1088 "rbtree.m"
            }
#line 1088 "rbtree.m"
            continue;
#line 1085 "rbtree.m"
          }
#line 1084 "rbtree.m"
      }
#line 1084 "rbtree.m"
      break;
#line 1084 "rbtree.m"
    }
#line 214 "rbtree.m"
}

#line 209 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_6(
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 209 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 209 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 209 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 209 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 209 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 209 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1077 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1077 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
                {
#line 1079 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                }
#line 1077 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1080 "rbtree.m"
                    {
#line 1080 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
                    }
#line 1080 "rbtree.m"
                    continue;
#line 1080 "rbtree.m"
                  }
#line 1077 "rbtree.m"
              }
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1073 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
              {
#line 1075 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
                {
#line 1075 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                }
#line 1073 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1076 "rbtree.m"
                  {
#line 1076 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1076 "rbtree.m"
                    {
#line 1076 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
                    }
#line 1076 "rbtree.m"
                    continue;
#line 1076 "rbtree.m"
                  }
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 209 "rbtree.m"
}

#line 207 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_5(
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 207 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 207 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 207 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 207 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 207 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 207 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1077 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1077 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
                {
#line 1079 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                }
#line 1077 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1080 "rbtree.m"
                    {
#line 1080 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
                    }
#line 1080 "rbtree.m"
                    continue;
#line 1080 "rbtree.m"
                  }
#line 1077 "rbtree.m"
              }
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1073 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
              {
#line 1075 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
                {
#line 1075 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                }
#line 1073 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1076 "rbtree.m"
                  {
#line 1076 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1076 "rbtree.m"
                    {
#line 1076 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
                    }
#line 1076 "rbtree.m"
                    continue;
#line 1076 "rbtree.m"
                  }
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 207 "rbtree.m"
}

#line 205 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_4(
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 205 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 205 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 205 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 205 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 205 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 205 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1077 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1077 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
                {
#line 1079 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                }
#line 1077 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1080 "rbtree.m"
                    {
#line 1080 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
                    }
#line 1080 "rbtree.m"
                    continue;
#line 1080 "rbtree.m"
                  }
#line 1077 "rbtree.m"
              }
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1073 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
              {
#line 1075 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
                {
#line 1075 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                }
#line 1073 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1076 "rbtree.m"
                  {
#line 1076 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1076 "rbtree.m"
                    {
#line 1076 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
                    }
#line 1076 "rbtree.m"
                    continue;
#line 1076 "rbtree.m"
                  }
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 205 "rbtree.m"
}

#line 203 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_3(
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 203 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 203 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 203 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 203 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 203 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 203 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1079 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
            {
#line 1079 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
            }
#line 1080 "rbtree.m"
            /* direct tailcall eliminated */
#line 1080 "rbtree.m"
            {
#line 1080 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
            }
#line 1080 "rbtree.m"
            continue;
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1075 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
            {
#line 1075 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
            }
#line 1076 "rbtree.m"
            /* direct tailcall eliminated */
#line 1076 "rbtree.m"
            {
#line 1076 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
            }
#line 1076 "rbtree.m"
            continue;
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 203 "rbtree.m"
}

#line 201 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_2(
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 201 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 201 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 201 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 201 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 201 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 201 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1079 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
            {
#line 1079 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
            }
#line 1080 "rbtree.m"
            /* direct tailcall eliminated */
#line 1080 "rbtree.m"
            {
#line 1080 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
            }
#line 1080 "rbtree.m"
            continue;
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1075 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
            {
#line 1075 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
            }
#line 1076 "rbtree.m"
            /* direct tailcall eliminated */
#line 1076 "rbtree.m"
            {
#line 1076 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
            }
#line 1076 "rbtree.m"
            continue;
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 201 "rbtree.m"
}

#line 199 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_1(
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 199 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 199 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 199 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 199 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 199 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 199 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1079 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
            {
#line 1079 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
            }
#line 1080 "rbtree.m"
            /* direct tailcall eliminated */
#line 1080 "rbtree.m"
            {
#line 1080 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
            }
#line 1080 "rbtree.m"
            continue;
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1075 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
            {
#line 1075 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
            }
#line 1076 "rbtree.m"
            /* direct tailcall eliminated */
#line 1076 "rbtree.m"
            {
#line 1076 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
            }
#line 1076 "rbtree.m"
            continue;
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 199 "rbtree.m"
}

#line 197 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_0(
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 197 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 197 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 197 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 197 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 197 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 197 "rbtree.m"
{
#line 1072 "rbtree.m"
  while (MR_TRUE)
#line 1072 "rbtree.m"
    {
#line 1072 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1072 "rbtree.m"
      {
#line 1072 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1072 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "rbtree.m"
          {
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1072 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1072 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1072 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "rbtree.m"
            MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1077 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1079 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
            }
#line 1079 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1079 "rbtree.m"
            {
#line 1079 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
            }
#line 1080 "rbtree.m"
            /* direct tailcall eliminated */
#line 1080 "rbtree.m"
            {
#line 1080 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1080 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1080 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1080 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1080 "rbtree.m"
            }
#line 1080 "rbtree.m"
            continue;
#line 1077 "rbtree.m"
          }
#line 1072 "rbtree.m"
        else
#line 1073 "rbtree.m"
          {
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "rbtree.m"
            MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1073 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1075 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1074 "rbtree.m"
            {
#line 1074 "rbtree.m"
              mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
            }
#line 1075 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1075 "rbtree.m"
            {
#line 1075 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
            }
#line 1076 "rbtree.m"
            /* direct tailcall eliminated */
#line 1076 "rbtree.m"
            {
#line 1076 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1076 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1076 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1076 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1076 "rbtree.m"
            }
#line 1076 "rbtree.m"
            continue;
#line 1073 "rbtree.m"
          }
#line 1072 "rbtree.m"
      }
#line 1072 "rbtree.m"
      break;
#line 1072 "rbtree.m"
    }
#line 197 "rbtree.m"
}

#line 193 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_5(
#line 193 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 193 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 193 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 193 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 193 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 193 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 193 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 193 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          {
#line 1060 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1060 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1065 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1065 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
                {
#line 1067 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                }
#line 1065 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1068 "rbtree.m"
                    {
#line 1068 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
                    }
#line 1068 "rbtree.m"
                    continue;
#line 1068 "rbtree.m"
                  }
#line 1065 "rbtree.m"
              }
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1061 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1061 "rbtree.m"
              {
#line 1063 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
                {
#line 1063 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                }
#line 1061 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1064 "rbtree.m"
                  {
#line 1064 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1064 "rbtree.m"
                    {
#line 1064 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
                    }
#line 1064 "rbtree.m"
                    continue;
#line 1064 "rbtree.m"
                  }
#line 1061 "rbtree.m"
              }
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 193 "rbtree.m"
}

#line 191 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_4(
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 191 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 191 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 191 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          {
#line 1060 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1060 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1065 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1065 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
                {
#line 1067 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                }
#line 1065 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1068 "rbtree.m"
                    {
#line 1068 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
                    }
#line 1068 "rbtree.m"
                    continue;
#line 1068 "rbtree.m"
                  }
#line 1065 "rbtree.m"
              }
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1061 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1061 "rbtree.m"
              {
#line 1063 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
                {
#line 1063 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                }
#line 1061 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1064 "rbtree.m"
                  {
#line 1064 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1064 "rbtree.m"
                    {
#line 1064 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
                    }
#line 1064 "rbtree.m"
                    continue;
#line 1064 "rbtree.m"
                  }
#line 1061 "rbtree.m"
              }
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 191 "rbtree.m"
}

#line 189 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_3(
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 189 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 189 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 189 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          {
#line 1060 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1060 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1065 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1065 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
                {
#line 1067 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                }
#line 1065 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1068 "rbtree.m"
                    {
#line 1068 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
                    }
#line 1068 "rbtree.m"
                    continue;
#line 1068 "rbtree.m"
                  }
#line 1065 "rbtree.m"
              }
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1061 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 1061 "rbtree.m"
              {
#line 1063 "rbtree.m"
                mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
                {
#line 1063 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                }
#line 1061 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 1064 "rbtree.m"
                  {
#line 1064 "rbtree.m"
                    /* direct tailcall eliminated */
#line 1064 "rbtree.m"
                    {
#line 1064 "rbtree.m"
                      MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
                      MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
                      mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
                      mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
                    }
#line 1064 "rbtree.m"
                    continue;
#line 1064 "rbtree.m"
                  }
#line 1061 "rbtree.m"
              }
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 189 "rbtree.m"
}

#line 188 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_2(
#line 188 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 188 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 188 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 188 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 188 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 188 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 188 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 188 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1067 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
            {
#line 1067 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
            }
#line 1068 "rbtree.m"
            /* direct tailcall eliminated */
#line 1068 "rbtree.m"
            {
#line 1068 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
            }
#line 1068 "rbtree.m"
            continue;
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1063 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
            {
#line 1063 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
            }
#line 1064 "rbtree.m"
            /* direct tailcall eliminated */
#line 1064 "rbtree.m"
            {
#line 1064 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
            }
#line 1064 "rbtree.m"
            continue;
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 188 "rbtree.m"
}

#line 187 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_1(
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 187 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 187 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 187 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1067 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
            {
#line 1067 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
            }
#line 1068 "rbtree.m"
            /* direct tailcall eliminated */
#line 1068 "rbtree.m"
            {
#line 1068 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
            }
#line 1068 "rbtree.m"
            continue;
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1063 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
            {
#line 1063 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
            }
#line 1064 "rbtree.m"
            /* direct tailcall eliminated */
#line 1064 "rbtree.m"
            {
#line 1064 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
            }
#line 1064 "rbtree.m"
            continue;
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 187 "rbtree.m"
}

#line 186 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_0(
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 186 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 186 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 186 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 186 "rbtree.m"
{
#line 1060 "rbtree.m"
  while (MR_TRUE)
#line 1060 "rbtree.m"
    {
#line 1060 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1060 "rbtree.m"
      {
#line 1060 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1060 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1060 "rbtree.m"
        else
#line 1060 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1065 "rbtree.m"
            MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1065 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1067 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
            }
#line 1067 "rbtree.m"
            mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "rbtree.m"
            {
#line 1067 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
            }
#line 1068 "rbtree.m"
            /* direct tailcall eliminated */
#line 1068 "rbtree.m"
            {
#line 1068 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1068 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1068 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1068 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1068 "rbtree.m"
            }
#line 1068 "rbtree.m"
            continue;
#line 1065 "rbtree.m"
          }
#line 1060 "rbtree.m"
        else
#line 1061 "rbtree.m"
          {
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1061 "rbtree.m"
            MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1061 "rbtree.m"
            MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1063 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1062 "rbtree.m"
            {
#line 1062 "rbtree.m"
              mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
            }
#line 1063 "rbtree.m"
            mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rbtree.m"
            {
#line 1063 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
            }
#line 1064 "rbtree.m"
            /* direct tailcall eliminated */
#line 1064 "rbtree.m"
            {
#line 1064 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1064 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1064 "rbtree.m"
              mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1064 "rbtree.m"
              mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1064 "rbtree.m"
            }
#line 1064 "rbtree.m"
            continue;
#line 1061 "rbtree.m"
          }
#line 1060 "rbtree.m"
      }
#line 1060 "rbtree.m"
      break;
#line 1060 "rbtree.m"
    }
#line 186 "rbtree.m"
}

#line 184 "rbtree.m"
MR_Box MR_CALL 
mercury__rbtree__foldl_3_f_0(
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_22,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_23,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_24,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__F_5,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__T_6,
#line 184 "rbtree.m"
  MR_Box mercury__rbtree__A_7)
#line 184 "rbtree.m"
{
#line 1058 "rbtree.m"
  {
#line 1058 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1058 "rbtree.m"
    MR_Box mercury__rbtree__B_8;

#line 1058 "rbtree.m"
    {
#line 1058 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__F_5, mercury__rbtree__T_6, mercury__rbtree__A_7, &mercury__rbtree__B_8);
    }
#line 1058 "rbtree.m"
    return mercury__rbtree__B_8;
#line 1058 "rbtree.m"
  }
#line 184 "rbtree.m"
}

#line 182 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__to_assoc_list_1_f_0(
#line 182 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
#line 182 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
#line 182 "rbtree.m"
  MR_Word mercury__rbtree__T_3)
#line 182 "rbtree.m"
{
#line 1042 "rbtree.m"
  {
#line 1042 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1042 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__2_2;

#line 1042 "rbtree.m"
    {
#line 1042 "rbtree.m"
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__T_3, &mercury__rbtree__HeadVar__2_2);
    }
#line 1042 "rbtree.m"
    return mercury__rbtree__HeadVar__2_2;
#line 1042 "rbtree.m"
  }
#line 182 "rbtree.m"
}

#line 179 "rbtree.m"
void MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_2_p_0(
#line 179 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
#line 179 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
#line 179 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 179 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 179 "rbtree.m"
{
#line 1044 "rbtree.m"
  {
#line 1044 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1044 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "rbtree.m"
    else
#line 1044 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1049 "rbtree.m"
      {
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__TypeCtorInfo_25_25;
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__TypeInfo_26_26;
#line 1049 "rbtree.m"
        MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1049 "rbtree.m"
        MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__L0_17;
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__L1_18;
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__V_19_19;
#line 1049 "rbtree.m"
        MR_Word mercury__rbtree__V_20_20;
#line 1052 "rbtree.m"
        MR_Word mercury__rbtree__conv0_HeadVar__2_2;

#line 1050 "rbtree.m"
        {
#line 1050 "rbtree.m"
          mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_14, &mercury__rbtree__L0_17);
        }
#line 1051 "rbtree.m"
        {
#line 1051 "rbtree.m"
          mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_15, &mercury__rbtree__L1_18);
        }
#line 1052 "rbtree.m"
        {
#line 1052 "rbtree.m"
          mercury__rbtree__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "rbtree.m"
          MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 0) = mercury__rbtree__K0_12;
#line 1052 "rbtree.m"
          MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 1) = mercury__rbtree__V0_13;
#line 1052 "rbtree.m"
        }
#line 1052 "rbtree.m"
        {
#line 1052 "rbtree.m"
          mercury__rbtree__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 0) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 1052 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 1) = ((MR_Box) (mercury__rbtree__L1_18));
#line 1052 "rbtree.m"
        }
#line 8977 "rbtree.c"
        mercury__rbtree__TypeCtorInfo_25_25 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8979 "rbtree.c"
        {
#line 8981 "rbtree.c"
          mercury__rbtree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8983 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_25_25));
#line 8985 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
#line 8987 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
#line 8989 "rbtree.c"
        }
#line 1052 "rbtree.m"
        {
#line 1052 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_26_26, (MR_Word) mercury__rbtree__L0_17, (MR_Word) mercury__rbtree__V_19_19, &mercury__rbtree__conv0_HeadVar__2_2);
        }
#line 1052 "rbtree.m"
        *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv0_HeadVar__2_2;
#line 1049 "rbtree.m"
      }
#line 1044 "rbtree.m"
    else
#line 1045 "rbtree.m"
      {
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__TypeCtorInfo_23_23;
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__TypeInfo_24_24;
#line 1045 "rbtree.m"
        MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1045 "rbtree.m"
        MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__L0_8;
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__L1_9;
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__V_10_10;
#line 1045 "rbtree.m"
        MR_Word mercury__rbtree__V_11_11;
#line 1048 "rbtree.m"
        MR_Word mercury__rbtree__conv1_HeadVar__2_2;

#line 1046 "rbtree.m"
        {
#line 1046 "rbtree.m"
          mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_5, &mercury__rbtree__L0_8);
        }
#line 1047 "rbtree.m"
        {
#line 1047 "rbtree.m"
          mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_6, &mercury__rbtree__L1_9);
        }
#line 1048 "rbtree.m"
        {
#line 1048 "rbtree.m"
          mercury__rbtree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "rbtree.m"
          MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 0) = mercury__rbtree__K0_3;
#line 1048 "rbtree.m"
          MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 1) = mercury__rbtree__V0_4;
#line 1048 "rbtree.m"
        }
#line 1048 "rbtree.m"
        {
#line 1048 "rbtree.m"
          mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = ((MR_Box) (mercury__rbtree__V_11_11));
#line 1048 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__L1_9));
#line 1048 "rbtree.m"
        }
#line 9057 "rbtree.c"
        mercury__rbtree__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 9059 "rbtree.c"
        {
#line 9061 "rbtree.c"
          mercury__rbtree__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9063 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_23_23));
#line 9065 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
#line 9067 "rbtree.c"
          MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
#line 9069 "rbtree.c"
        }
#line 1048 "rbtree.m"
        {
#line 1048 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_24_24, (MR_Word) mercury__rbtree__L0_8, (MR_Word) mercury__rbtree__V_10_10, &mercury__rbtree__conv1_HeadVar__2_2);
        }
#line 1048 "rbtree.m"
        *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv1_HeadVar__2_2;
#line 1045 "rbtree.m"
      }
#line 1044 "rbtree.m"
  }
#line 179 "rbtree.m"
}

#line 178 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_1_f_0(
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 178 "rbtree.m"
{
#line 1042 "rbtree.m"
  {
#line 1042 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1042 "rbtree.m"
    MR_Word mercury__rbtree__AL_4;

#line 1042 "rbtree.m"
    {
#line 1042 "rbtree.m"
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__AL_4);
    }
#line 1042 "rbtree.m"
    return mercury__rbtree__AL_4;
#line 1042 "rbtree.m"
  }
#line 178 "rbtree.m"
}

#line 176 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__from_assoc_list_1_f_0(
#line 176 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
#line 176 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
#line 176 "rbtree.m"
  MR_Word mercury__rbtree__AList_3)
#line 176 "rbtree.m"
{
#line 1030 "rbtree.m"
  {
#line 1030 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1030 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__2_2;

#line 1030 "rbtree.m"
    {
#line 1030 "rbtree.m"
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__AList_3, &mercury__rbtree__HeadVar__2_2);
    }
#line 1030 "rbtree.m"
    return mercury__rbtree__HeadVar__2_2;
#line 1030 "rbtree.m"
  }
#line 176 "rbtree.m"
}

#line 174 "rbtree.m"
void MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_2_p_0(
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 174 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 174 "rbtree.m"
{
#line 1032 "rbtree.m"
  {
#line 1032 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1032 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1032 "rbtree.m"
    else
#line 1033 "rbtree.m"
      {
#line 1033 "rbtree.m"
        MR_Box mercury__rbtree__K_3;
#line 1033 "rbtree.m"
        MR_Box mercury__rbtree__V_4;
#line 1033 "rbtree.m"
        MR_Word mercury__rbtree__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1033 "rbtree.m"
        MR_Word mercury__rbtree__Tree0_7;
#line 1033 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0)));

#line 1033 "rbtree.m"
        mercury__rbtree__K_3 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 0));
#line 1033 "rbtree.m"
        mercury__rbtree__V_4 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 1));
#line 1034 "rbtree.m"
        {
#line 1034 "rbtree.m"
          mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_5, &mercury__rbtree__Tree0_7);
        }
#line 1035 "rbtree.m"
        {
#line 1035 "rbtree.m"
          mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__K_3, mercury__rbtree__V_4, mercury__rbtree__Tree0_7, mercury__rbtree__HeadVar__2_2);
#line 1035 "rbtree.m"
          return;
        }
#line 1033 "rbtree.m"
      }
#line 1032 "rbtree.m"
  }
#line 174 "rbtree.m"
}

#line 173 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_1_f_0(
#line 173 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 173 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 173 "rbtree.m"
  MR_Word mercury__rbtree__AL_3)
#line 173 "rbtree.m"
{
#line 1030 "rbtree.m"
  {
#line 1030 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1030 "rbtree.m"
    MR_Word mercury__rbtree__RBT_4;

#line 1030 "rbtree.m"
    {
#line 1030 "rbtree.m"
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__AL_3, &mercury__rbtree__RBT_4);
    }
#line 1030 "rbtree.m"
    return mercury__rbtree__RBT_4;
#line 1030 "rbtree.m"
  }
#line 173 "rbtree.m"
}

#line 171 "rbtree.m"
void MR_CALL 
mercury__rbtree__count_2_p_0(
#line 171 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
#line 171 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
#line 171 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 171 "rbtree.m"
  MR_Integer * mercury__rbtree__HeadVar__2_2)
#line 171 "rbtree.m"
{
#line 1015 "rbtree.m"
  {
#line 1015 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1015 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Integer) 0;
#line 1015 "rbtree.m"
    else
#line 1015 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1020 "rbtree.m"
      {
#line 1020 "rbtree.m"
        MR_Word mercury__rbtree__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1020 "rbtree.m"
        MR_Word mercury__rbtree__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1020 "rbtree.m"
        MR_Integer mercury__rbtree__NO_17;
#line 1020 "rbtree.m"
        MR_Integer mercury__rbtree__N1_18;
#line 1020 "rbtree.m"
        MR_Integer mercury__rbtree__V_19_19;
#line 1020 "rbtree.m"
        MR_Box mercury__rbtree___K_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1020 "rbtree.m"
        MR_Box mercury__rbtree___V_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 1021 "rbtree.m"
        {
#line 1021 "rbtree.m"
          mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_14, &mercury__rbtree__NO_17);
        }
#line 1022 "rbtree.m"
        {
#line 1022 "rbtree.m"
          mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_15, &mercury__rbtree__N1_18);
        }
#line 1023 "rbtree.m"
        mercury__rbtree__V_19_19 = ((MR_Integer) 1 + mercury__rbtree__NO_17);
#line 1023 "rbtree.m"
        *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_19_19 + mercury__rbtree__N1_18);
#line 1020 "rbtree.m"
      }
#line 1015 "rbtree.m"
    else
#line 1016 "rbtree.m"
      {
#line 1016 "rbtree.m"
        MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1016 "rbtree.m"
        MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1016 "rbtree.m"
        MR_Integer mercury__rbtree__NO_8;
#line 1016 "rbtree.m"
        MR_Integer mercury__rbtree__N1_9;
#line 1016 "rbtree.m"
        MR_Integer mercury__rbtree__V_10_10;
#line 1016 "rbtree.m"
        MR_Box mercury__rbtree___K_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1016 "rbtree.m"
        MR_Box mercury__rbtree___V_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 1017 "rbtree.m"
        {
#line 1017 "rbtree.m"
          mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_5, &mercury__rbtree__NO_8);
        }
#line 1018 "rbtree.m"
        {
#line 1018 "rbtree.m"
          mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_6, &mercury__rbtree__N1_9);
        }
#line 1019 "rbtree.m"
        mercury__rbtree__V_10_10 = ((MR_Integer) 1 + mercury__rbtree__NO_8);
#line 1019 "rbtree.m"
        *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_10_10 + mercury__rbtree__N1_9);
#line 1016 "rbtree.m"
      }
#line 1015 "rbtree.m"
  }
#line 171 "rbtree.m"
}

#line 170 "rbtree.m"
MR_Integer MR_CALL 
mercury__rbtree__count_1_f_0(
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 170 "rbtree.m"
{
#line 1013 "rbtree.m"
  {
#line 1013 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1013 "rbtree.m"
    MR_Integer mercury__rbtree__N_4;

#line 1013 "rbtree.m"
    {
#line 1013 "rbtree.m"
      mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__N_4);
    }
#line 1013 "rbtree.m"
    return mercury__rbtree__N_4;
#line 1013 "rbtree.m"
  }
#line 170 "rbtree.m"
}

#line 166 "rbtree.m"
void MR_CALL 
mercury__rbtree__values_2_p_0(
#line 166 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
#line 166 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
#line 166 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 166 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 166 "rbtree.m"
{
#line 1000 "rbtree.m"
  {
#line 1000 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1000 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "rbtree.m"
    else
#line 1000 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1005 "rbtree.m"
      {
#line 1005 "rbtree.m"
        MR_Box mercury__rbtree__V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1005 "rbtree.m"
        MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1005 "rbtree.m"
        MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1005 "rbtree.m"
        MR_Word mercury__rbtree__List0_16;
#line 1005 "rbtree.m"
        MR_Word mercury__rbtree__List1_17;
#line 1005 "rbtree.m"
        MR_Word mercury__rbtree__V_18_18;
#line 1005 "rbtree.m"
        MR_Box mercury__rbtree___K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

#line 1006 "rbtree.m"
        {
#line 1006 "rbtree.m"
          mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
        }
#line 1007 "rbtree.m"
        {
#line 1007 "rbtree.m"
          mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
        }
#line 1008 "rbtree.m"
        {
#line 1008 "rbtree.m"
          mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__V0_12;
#line 1008 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
#line 1008 "rbtree.m"
        }
#line 1008 "rbtree.m"
        {
#line 1008 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
#line 1008 "rbtree.m"
          return;
        }
#line 1005 "rbtree.m"
      }
#line 1000 "rbtree.m"
    else
#line 1001 "rbtree.m"
      {
#line 1001 "rbtree.m"
        MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1001 "rbtree.m"
        MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1001 "rbtree.m"
        MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1001 "rbtree.m"
        MR_Word mercury__rbtree__List0_8;
#line 1001 "rbtree.m"
        MR_Word mercury__rbtree__List1_9;
#line 1001 "rbtree.m"
        MR_Word mercury__rbtree__V_10_10;
#line 1001 "rbtree.m"
        MR_Box mercury__rbtree___K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

#line 1002 "rbtree.m"
        {
#line 1002 "rbtree.m"
          mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
        }
#line 1003 "rbtree.m"
        {
#line 1003 "rbtree.m"
          mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
        }
#line 1004 "rbtree.m"
        {
#line 1004 "rbtree.m"
          mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__V0_4;
#line 1004 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
#line 1004 "rbtree.m"
        }
#line 1004 "rbtree.m"
        {
#line 1004 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
#line 1004 "rbtree.m"
          return;
        }
#line 1001 "rbtree.m"
      }
#line 1000 "rbtree.m"
  }
#line 166 "rbtree.m"
}

#line 165 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__values_1_f_0(
#line 165 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 165 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 165 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 165 "rbtree.m"
{
#line 998 "rbtree.m"
  {
#line 998 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 998 "rbtree.m"
    MR_Word mercury__rbtree__Vs_4;

#line 998 "rbtree.m"
    {
#line 998 "rbtree.m"
      mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Vs_4);
    }
#line 998 "rbtree.m"
    return mercury__rbtree__Vs_4;
#line 998 "rbtree.m"
  }
#line 165 "rbtree.m"
}

#line 160 "rbtree.m"
void MR_CALL 
mercury__rbtree__keys_2_p_0(
#line 160 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
#line 160 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
#line 160 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 160 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 160 "rbtree.m"
{
#line 985 "rbtree.m"
  {
#line 985 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 985 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 985 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "rbtree.m"
    else
#line 985 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 990 "rbtree.m"
      {
#line 990 "rbtree.m"
        MR_Box mercury__rbtree__K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 990 "rbtree.m"
        MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 990 "rbtree.m"
        MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 990 "rbtree.m"
        MR_Word mercury__rbtree__List0_16;
#line 990 "rbtree.m"
        MR_Word mercury__rbtree__List1_17;
#line 990 "rbtree.m"
        MR_Word mercury__rbtree__V_18_18;
#line 990 "rbtree.m"
        MR_Box mercury__rbtree___V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 991 "rbtree.m"
        {
#line 991 "rbtree.m"
          mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
        }
#line 992 "rbtree.m"
        {
#line 992 "rbtree.m"
          mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
        }
#line 993 "rbtree.m"
        {
#line 993 "rbtree.m"
          mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__K0_11;
#line 993 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
#line 993 "rbtree.m"
        }
#line 993 "rbtree.m"
        {
#line 993 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
#line 993 "rbtree.m"
          return;
        }
#line 990 "rbtree.m"
      }
#line 985 "rbtree.m"
    else
#line 986 "rbtree.m"
      {
#line 986 "rbtree.m"
        MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 986 "rbtree.m"
        MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 986 "rbtree.m"
        MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 986 "rbtree.m"
        MR_Word mercury__rbtree__List0_8;
#line 986 "rbtree.m"
        MR_Word mercury__rbtree__List1_9;
#line 986 "rbtree.m"
        MR_Word mercury__rbtree__V_10_10;
#line 986 "rbtree.m"
        MR_Box mercury__rbtree___V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 987 "rbtree.m"
        {
#line 987 "rbtree.m"
          mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
        }
#line 988 "rbtree.m"
        {
#line 988 "rbtree.m"
          mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
        }
#line 989 "rbtree.m"
        {
#line 989 "rbtree.m"
          mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__K0_3;
#line 989 "rbtree.m"
          MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
#line 989 "rbtree.m"
        }
#line 989 "rbtree.m"
        {
#line 989 "rbtree.m"
          mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
#line 989 "rbtree.m"
          return;
        }
#line 986 "rbtree.m"
      }
#line 985 "rbtree.m"
  }
#line 160 "rbtree.m"
}

#line 159 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__keys_1_f_0(
#line 159 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 159 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 159 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 159 "rbtree.m"
{
#line 983 "rbtree.m"
  {
#line 983 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 983 "rbtree.m"
    MR_Word mercury__rbtree__Ks_4;

#line 983 "rbtree.m"
    {
#line 983 "rbtree.m"
      mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Ks_4);
    }
#line 983 "rbtree.m"
    return mercury__rbtree__Ks_4;
#line 983 "rbtree.m"
  }
#line 159 "rbtree.m"
}

#line 154 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_largest_4_p_0(
#line 154 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
#line 154 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
#line 154 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__1_1,
#line 154 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 154 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 154 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 154 "rbtree.m"
{
#line 918 "rbtree.m"
  {
#line 918 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 918 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 933 "rbtree.m"
      {
#line 933 "rbtree.m"
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 933 "rbtree.m"
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 933 "rbtree.m"
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 933 "rbtree.m"
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 939 "rbtree.m"
        if ((mercury__rbtree__R_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "rbtree.m"
          {
#line 936 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
#line 937 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
#line 938 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_28;
#line 935 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 935 "rbtree.m"
          }
#line 939 "rbtree.m"
        else
#line 942 "rbtree.m"
          {
#line 942 "rbtree.m"
            MR_Word mercury__rbtree__NewR_39;

#line 943 "rbtree.m"
            {
#line 943 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_29, &mercury__rbtree__NewR_39);
            }
#line 942 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 942 "rbtree.m"
              {
#line 944 "rbtree.m"
                {
#line 944 "rbtree.m"
                  MR_Word base;
#line 944 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 944 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 944 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
#line 944 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
#line 944 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_28));
#line 944 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_39));
#line 944 "rbtree.m"
                }
#line 944 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 942 "rbtree.m"
              }
#line 942 "rbtree.m"
          }
#line 933 "rbtree.m"
      }
#line 918 "rbtree.m"
    else
#line 918 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 920 "rbtree.m"
      {
#line 920 "rbtree.m"
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 920 "rbtree.m"
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 920 "rbtree.m"
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 920 "rbtree.m"
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 926 "rbtree.m"
        if ((mercury__rbtree__R_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "rbtree.m"
          {
#line 923 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
#line 924 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
#line 925 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_12;
#line 922 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 922 "rbtree.m"
          }
#line 926 "rbtree.m"
        else
#line 929 "rbtree.m"
          {
#line 929 "rbtree.m"
            MR_Word mercury__rbtree__NewR_23;

#line 930 "rbtree.m"
            {
#line 930 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_23);
            }
#line 929 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 929 "rbtree.m"
              {
#line 931 "rbtree.m"
                {
#line 931 "rbtree.m"
                  MR_Word base;
#line 931 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 931 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 931 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 931 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 931 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 931 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_23));
#line 931 "rbtree.m"
                }
#line 931 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 929 "rbtree.m"
              }
#line 929 "rbtree.m"
          }
#line 920 "rbtree.m"
      }
#line 918 "rbtree.m"
    else
#line 918 "rbtree.m"
      mercury__rbtree__succeeded = MR_FALSE;
#line 918 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 918 "rbtree.m"
  }
#line 154 "rbtree.m"
}

#line 148 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_smallest_4_p_0(
#line 148 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
#line 148 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
#line 148 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__1_1,
#line 148 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 148 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 148 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 148 "rbtree.m"
{
#line 951 "rbtree.m"
  {
#line 951 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 951 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 966 "rbtree.m"
      {
#line 966 "rbtree.m"
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 966 "rbtree.m"
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 966 "rbtree.m"
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 966 "rbtree.m"
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 972 "rbtree.m"
        if ((mercury__rbtree__L_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "rbtree.m"
          {
#line 969 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
#line 970 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
#line 971 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_29;
#line 968 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 968 "rbtree.m"
          }
#line 972 "rbtree.m"
        else
#line 975 "rbtree.m"
          {
#line 975 "rbtree.m"
            MR_Word mercury__rbtree__NewL_39;

#line 976 "rbtree.m"
            {
#line 976 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_28, &mercury__rbtree__NewL_39);
            }
#line 975 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 975 "rbtree.m"
              {
#line 977 "rbtree.m"
                {
#line 977 "rbtree.m"
                  MR_Word base;
#line 977 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 977 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 977 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
#line 977 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
#line 977 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 977 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_29));
#line 977 "rbtree.m"
                }
#line 977 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 975 "rbtree.m"
              }
#line 975 "rbtree.m"
          }
#line 966 "rbtree.m"
      }
#line 951 "rbtree.m"
    else
#line 951 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 953 "rbtree.m"
      {
#line 953 "rbtree.m"
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 953 "rbtree.m"
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 953 "rbtree.m"
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 953 "rbtree.m"
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 959 "rbtree.m"
        if ((mercury__rbtree__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "rbtree.m"
          {
#line 956 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
#line 957 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
#line 958 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_13;
#line 955 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 955 "rbtree.m"
          }
#line 959 "rbtree.m"
        else
#line 962 "rbtree.m"
          {
#line 962 "rbtree.m"
            MR_Word mercury__rbtree__NewL_23;

#line 963 "rbtree.m"
            {
#line 963 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_23);
            }
#line 962 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 962 "rbtree.m"
              {
#line 964 "rbtree.m"
                {
#line 964 "rbtree.m"
                  MR_Word base;
#line 964 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 964 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 964 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 964 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 964 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 964 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 964 "rbtree.m"
                }
#line 964 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 962 "rbtree.m"
              }
#line 962 "rbtree.m"
          }
#line 953 "rbtree.m"
      }
#line 951 "rbtree.m"
    else
#line 951 "rbtree.m"
      mercury__rbtree__succeeded = MR_FALSE;
#line 951 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 951 "rbtree.m"
  }
#line 148 "rbtree.m"
}

#line 142 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_4_p_0(
#line 142 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_13,
#line 142 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_14,
#line 142 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 142 "rbtree.m"
  MR_Box * mercury__rbtree__V_6,
#line 142 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_8,
#line 142 "rbtree.m"
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_9)
#line 142 "rbtree.m"
{
#line 915 "rbtree.m"
  {
#line 915 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 915 "rbtree.m"
    MR_Word mercury__rbtree__V_11_11;

#line 916 "rbtree.m"
    {
#line 916 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_13, mercury__rbtree__TypeInfo_for_V_14, mercury__rbtree__STATE_VARIABLE_Tree_0_8, mercury__rbtree__K_5, (MR_Integer) 1, &mercury__rbtree__V_11_11, mercury__rbtree__STATE_VARIABLE_Tree_9);
    }
#line 915 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 915 "rbtree.m"
      {
#line 916 "rbtree.m"
        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 916 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 916 "rbtree.m"
          *mercury__rbtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__V_11_11, (MR_Integer) 0));
#line 915 "rbtree.m"
      }
#line 915 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 915 "rbtree.m"
  }
#line 142 "rbtree.m"
}

#line 137 "rbtree.m"
void MR_CALL 
mercury__rbtree__delete_3_p_0(
#line 137 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 137 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 137 "rbtree.m"
  MR_Box mercury__rbtree__K_4,
#line 137 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_7,
#line 137 "rbtree.m"
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_8)
#line 137 "rbtree.m"
{
#line 833 "rbtree.m"
  {
#line 833 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 833 "rbtree.m"
    MR_Word mercury__rbtree__V_6_6;

#line 833 "rbtree.m"
    {
#line 833 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__STATE_VARIABLE_Tree_0_7, mercury__rbtree__K_4, &mercury__rbtree__V_6_6, mercury__rbtree__STATE_VARIABLE_Tree_8);
    }
#line 833 "rbtree.m"
  }
#line 137 "rbtree.m"
}

#line 136 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__delete_2_f_0(
#line 136 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 136 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 136 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_6,
#line 136 "rbtree.m"
  MR_Box mercury__rbtree__K_5)
#line 136 "rbtree.m"
{
#line 833 "rbtree.m"
  {
#line 833 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 833 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_7;
#line 833 "rbtree.m"
    MR_Word mercury__rbtree__V_15_15;

#line 833 "rbtree.m"
    {
#line 833 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__STATE_VARIABLE_RBT_0_6, mercury__rbtree__K_5, &mercury__rbtree__V_15_15, &mercury__rbtree__STATE_VARIABLE_RBT_7);
    }
#line 833 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_7;
#line 833 "rbtree.m"
  }
#line 136 "rbtree.m"
}

#line 131 "rbtree.m"
void MR_CALL 
mercury__rbtree__upper_bound_lookup_4_p_0(
#line 131 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 131 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 131 "rbtree.m"
  MR_Word mercury__rbtree__T_5,
#line 131 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 131 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 131 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 131 "rbtree.m"
{
#line 822 "rbtree.m"
  {
#line 822 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 822 "rbtree.m"
    MR_Box mercury__rbtree__K0_9;
#line 822 "rbtree.m"
    MR_Box mercury__rbtree__V0_10;

#line 819 "rbtree.m"
    {
#line 819 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
#line 822 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 820 "rbtree.m"
      {
#line 820 "rbtree.m"
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 821 "rbtree.m"
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 820 "rbtree.m"
      }
#line 822 "rbtree.m"
    else
#line 823 "rbtree.m"
      {
#line 823 "rbtree.m"
        {
#line 823 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.upper_bound_lookup: key not found", mercury__rbtree__SearchK_6);
#line 823 "rbtree.m"
          return;
        }
#line 823 "rbtree.m"
      }
#line 822 "rbtree.m"
  }
#line 131 "rbtree.m"
}

#line 124 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__upper_bound_search_4_p_0(
#line 124 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
#line 124 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
#line 124 "rbtree.m"
  MR_Word mercury__rbtree__Tree_5,
#line 124 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 124 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 124 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 124 "rbtree.m"
{
#line 795 "rbtree.m"
  while (MR_TRUE)
#line 795 "rbtree.m"
    {
#line 795 "rbtree.m"
      /* tailcall optimized into a loop */
#line 795 "rbtree.m"
      {
#line 795 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 795 "rbtree.m"
        MR_Box mercury__rbtree__K0_9;
#line 795 "rbtree.m"
        MR_Box mercury__rbtree__V0_10;
#line 795 "rbtree.m"
        MR_Word mercury__rbtree__Left_11;
#line 795 "rbtree.m"
        MR_Word mercury__rbtree__Right_12;
#line 795 "rbtree.m"
        MR_Word mercury__rbtree__Result_13;

#line 797 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
#line 797 "rbtree.m"
          {
#line 797 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 797 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 797 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 797 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 797 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 797 "rbtree.m"
          }
#line 797 "rbtree.m"
        else
#line 797 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
#line 796 "rbtree.m"
          {
#line 796 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 796 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 796 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 796 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 796 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 796 "rbtree.m"
          }
#line 797 "rbtree.m"
        else
#line 797 "rbtree.m"
          mercury__rbtree__succeeded = MR_FALSE;
#line 795 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 795 "rbtree.m"
          {
#line 799 "rbtree.m"
            {
#line 799 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
#line 804 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 1))
#line 809 "rbtree.m"
              {
#line 809 "rbtree.m"
                MR_Box mercury__rbtree__Kp_14;
#line 809 "rbtree.m"
                MR_Box mercury__rbtree__Vp_15;

#line 806 "rbtree.m"
                {
#line 806 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Left_11, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                }
#line 809 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 807 "rbtree.m"
                  {
#line 807 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
#line 808 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
#line 807 "rbtree.m"
                  }
#line 809 "rbtree.m"
                else
#line 810 "rbtree.m"
                  {
#line 810 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 811 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 810 "rbtree.m"
                  }
#line 809 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 809 "rbtree.m"
              }
#line 804 "rbtree.m"
            else
#line 804 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 0))
#line 801 "rbtree.m"
              {
#line 802 "rbtree.m"
                *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 803 "rbtree.m"
                *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 801 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 801 "rbtree.m"
              }
#line 804 "rbtree.m"
            else
#line 815 "rbtree.m"
              {
#line 815 "rbtree.m"
                /* direct tailcall eliminated */
#line 815 "rbtree.m"
                {
#line 815 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Right_12;

#line 815 "rbtree.m"
                  mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
#line 815 "rbtree.m"
                }
#line 815 "rbtree.m"
                continue;
#line 815 "rbtree.m"
              }
#line 795 "rbtree.m"
          }
#line 795 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 795 "rbtree.m"
      }
#line 795 "rbtree.m"
      break;
#line 795 "rbtree.m"
    }
#line 124 "rbtree.m"
}

#line 118 "rbtree.m"
void MR_CALL 
mercury__rbtree__lower_bound_lookup_4_p_0(
#line 118 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 118 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 118 "rbtree.m"
  MR_Word mercury__rbtree__T_5,
#line 118 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 118 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 118 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 118 "rbtree.m"
{
#line 788 "rbtree.m"
  {
#line 788 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 788 "rbtree.m"
    MR_Box mercury__rbtree__K0_9;
#line 788 "rbtree.m"
    MR_Box mercury__rbtree__V0_10;

#line 785 "rbtree.m"
    {
#line 785 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
#line 788 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 786 "rbtree.m"
      {
#line 786 "rbtree.m"
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 787 "rbtree.m"
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 786 "rbtree.m"
      }
#line 788 "rbtree.m"
    else
#line 789 "rbtree.m"
      {
#line 789 "rbtree.m"
        {
#line 789 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.lower_bound_lookup: key not found", mercury__rbtree__SearchK_6);
#line 789 "rbtree.m"
          return;
        }
#line 789 "rbtree.m"
      }
#line 788 "rbtree.m"
  }
#line 118 "rbtree.m"
}

#line 111 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__lower_bound_search_4_p_0(
#line 111 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
#line 111 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
#line 111 "rbtree.m"
  MR_Word mercury__rbtree__Tree_5,
#line 111 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 111 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 111 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 111 "rbtree.m"
{
#line 761 "rbtree.m"
  while (MR_TRUE)
#line 761 "rbtree.m"
    {
#line 761 "rbtree.m"
      /* tailcall optimized into a loop */
#line 761 "rbtree.m"
      {
#line 761 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 761 "rbtree.m"
        MR_Box mercury__rbtree__K0_9;
#line 761 "rbtree.m"
        MR_Box mercury__rbtree__V0_10;
#line 761 "rbtree.m"
        MR_Word mercury__rbtree__Left_11;
#line 761 "rbtree.m"
        MR_Word mercury__rbtree__Right_12;
#line 761 "rbtree.m"
        MR_Word mercury__rbtree__Result_13;

#line 763 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
#line 763 "rbtree.m"
          {
#line 763 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 763 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 763 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 763 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 763 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 763 "rbtree.m"
          }
#line 763 "rbtree.m"
        else
#line 763 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
#line 762 "rbtree.m"
          {
#line 762 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 762 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 762 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 762 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 762 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 762 "rbtree.m"
          }
#line 763 "rbtree.m"
        else
#line 763 "rbtree.m"
          mercury__rbtree__succeeded = MR_FALSE;
#line 761 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 761 "rbtree.m"
          {
#line 765 "rbtree.m"
            {
#line 765 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
#line 770 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 1))
#line 772 "rbtree.m"
              {
#line 772 "rbtree.m"
                /* direct tailcall eliminated */
#line 772 "rbtree.m"
                {
#line 772 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Left_11;

#line 772 "rbtree.m"
                  mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
#line 772 "rbtree.m"
                }
#line 772 "rbtree.m"
                continue;
#line 772 "rbtree.m"
              }
#line 770 "rbtree.m"
            else
#line 770 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 0))
#line 767 "rbtree.m"
              {
#line 768 "rbtree.m"
                *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 769 "rbtree.m"
                *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 767 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 767 "rbtree.m"
              }
#line 770 "rbtree.m"
            else
#line 778 "rbtree.m"
              {
#line 778 "rbtree.m"
                MR_Box mercury__rbtree__Kp_14;
#line 778 "rbtree.m"
                MR_Box mercury__rbtree__Vp_15;

#line 775 "rbtree.m"
                {
#line 775 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Right_12, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                }
#line 778 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 776 "rbtree.m"
                  {
#line 776 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
#line 777 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
#line 776 "rbtree.m"
                  }
#line 778 "rbtree.m"
                else
#line 779 "rbtree.m"
                  {
#line 779 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 780 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 779 "rbtree.m"
                  }
#line 778 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 778 "rbtree.m"
              }
#line 761 "rbtree.m"
          }
#line 761 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 761 "rbtree.m"
      }
#line 761 "rbtree.m"
      break;
#line 761 "rbtree.m"
    }
#line 111 "rbtree.m"
}

#line 105 "rbtree.m"
void MR_CALL 
mercury__rbtree__lookup_3_p_0(
#line 105 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 105 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 105 "rbtree.m"
  MR_Word mercury__rbtree__T_4,
#line 105 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 105 "rbtree.m"
  MR_Box * mercury__rbtree__V_6)
#line 105 "rbtree.m"
{
#line 755 "rbtree.m"
  {
#line 755 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 755 "rbtree.m"
    MR_Box mercury__rbtree__V0_7;

#line 753 "rbtree.m"
    {
#line 753 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_4, mercury__rbtree__K_5, &mercury__rbtree__V0_7);
    }
#line 755 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 754 "rbtree.m"
      *mercury__rbtree__V_6 = mercury__rbtree__V0_7;
#line 755 "rbtree.m"
    else
#line 756 "rbtree.m"
      {
#line 756 "rbtree.m"
        {
#line 756 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
#line 756 "rbtree.m"
          return;
        }
#line 756 "rbtree.m"
      }
#line 755 "rbtree.m"
  }
#line 105 "rbtree.m"
}

#line 104 "rbtree.m"
MR_Box MR_CALL 
mercury__rbtree__lookup_2_f_0(
#line 104 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_7,
#line 104 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_8,
#line 104 "rbtree.m"
  MR_Word mercury__rbtree__RBT_4,
#line 104 "rbtree.m"
  MR_Box mercury__rbtree__K_5)
#line 104 "rbtree.m"
{
#line 755 "rbtree.m"
  {
#line 755 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 755 "rbtree.m"
    MR_Box mercury__rbtree__V_6;
#line 755 "rbtree.m"
    MR_Box mercury__rbtree__V0_12;

#line 753 "rbtree.m"
    {
#line 753 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, mercury__rbtree__RBT_4, mercury__rbtree__K_5, &mercury__rbtree__V0_12);
    }
#line 755 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 754 "rbtree.m"
      mercury__rbtree__V_6 = mercury__rbtree__V0_12;
#line 755 "rbtree.m"
    else
#line 756 "rbtree.m"
      {
#line 756 "rbtree.m"
        {
#line 756 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
        }
#line 756 "rbtree.m"
      }
#line 755 "rbtree.m"
    return mercury__rbtree__V_6;
#line 755 "rbtree.m"
  }
#line 104 "rbtree.m"
}

#line 99 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__search_3_p_0(
#line 99 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 99 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 99 "rbtree.m"
  MR_Word mercury__rbtree__Tree_4,
#line 99 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 99 "rbtree.m"
  MR_Box * mercury__rbtree__V_6)
#line 99 "rbtree.m"
{
#line 733 "rbtree.m"
  while (MR_TRUE)
#line 733 "rbtree.m"
    {
#line 733 "rbtree.m"
      /* tailcall optimized into a loop */
#line 733 "rbtree.m"
      {
#line 733 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 733 "rbtree.m"
        MR_Box mercury__rbtree__K0_7;
#line 733 "rbtree.m"
        MR_Box mercury__rbtree__V0_8;
#line 733 "rbtree.m"
        MR_Word mercury__rbtree__Left_9;
#line 733 "rbtree.m"
        MR_Word mercury__rbtree__Right_10;
#line 733 "rbtree.m"
        MR_Word mercury__rbtree__Result_11;

#line 735 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 2))))
#line 735 "rbtree.m"
          {
#line 735 "rbtree.m"
            mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 0));
#line 735 "rbtree.m"
            mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 1));
#line 735 "rbtree.m"
            mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 2)));
#line 735 "rbtree.m"
            mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 3)));
#line 735 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 735 "rbtree.m"
          }
#line 735 "rbtree.m"
        else
#line 735 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 1))))
#line 734 "rbtree.m"
          {
#line 734 "rbtree.m"
            mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 0));
#line 734 "rbtree.m"
            mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 1));
#line 734 "rbtree.m"
            mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 2)));
#line 734 "rbtree.m"
            mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 3)));
#line 734 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 734 "rbtree.m"
          }
#line 735 "rbtree.m"
        else
#line 735 "rbtree.m"
          mercury__rbtree__succeeded = MR_FALSE;
#line 733 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 733 "rbtree.m"
          {
#line 737 "rbtree.m"
            {
#line 737 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_12, &mercury__rbtree__Result_11, mercury__rbtree__K_5, mercury__rbtree__K0_7);
            }
#line 741 "rbtree.m"
            if ((mercury__rbtree__Result_11 == (MR_Integer) 1))
#line 743 "rbtree.m"
              {
#line 743 "rbtree.m"
                /* direct tailcall eliminated */
#line 743 "rbtree.m"
                {
#line 743 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Left_9;

#line 743 "rbtree.m"
                  mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
#line 743 "rbtree.m"
                }
#line 743 "rbtree.m"
                continue;
#line 743 "rbtree.m"
              }
#line 741 "rbtree.m"
            else
#line 741 "rbtree.m"
            if ((mercury__rbtree__Result_11 == (MR_Integer) 0))
#line 740 "rbtree.m"
              {
#line 740 "rbtree.m"
                *mercury__rbtree__V_6 = mercury__rbtree__V0_8;
#line 740 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 740 "rbtree.m"
              }
#line 741 "rbtree.m"
            else
#line 746 "rbtree.m"
              {
#line 746 "rbtree.m"
                /* direct tailcall eliminated */
#line 746 "rbtree.m"
                {
#line 746 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Right_10;

#line 746 "rbtree.m"
                  mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
#line 746 "rbtree.m"
                }
#line 746 "rbtree.m"
                continue;
#line 746 "rbtree.m"
              }
#line 733 "rbtree.m"
          }
#line 733 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 733 "rbtree.m"
      }
#line 733 "rbtree.m"
      break;
#line 733 "rbtree.m"
    }
#line 99 "rbtree.m"
}

#line 94 "rbtree.m"
void MR_CALL 
mercury__rbtree__member_3_p_0(
#line 94 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_18,
#line 94 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_19,
#line 94 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 94 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 94 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__3_3,
#line 94 "rbtree.m"
  MR_Cont mercury__rbtree__cont,
#line 94 "rbtree.m"
  void * mercury__rbtree__cont_env_ptr)
#line 94 "rbtree.m"
{
#line 711 "rbtree.m"
  while (MR_TRUE)
#line 711 "rbtree.m"
    {
#line 711 "rbtree.m"
      /* tailcall optimized into a loop */
#line 711 "rbtree.m"
      {
#line 711 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 711 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 721 "rbtree.m"
          {
#line 721 "rbtree.m"
            MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 721 "rbtree.m"
            MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 721 "rbtree.m"
            MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 721 "rbtree.m"
            MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 723 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_12;
#line 724 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_13;
#line 723 "rbtree.m"
            {
#line 723 "rbtree.m"
              mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
            }
#line 726 "rbtree.m"
            {
#line 726 "rbtree.m"
              mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_14, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
            }
#line 728 "rbtree.m"
            /* direct tailcall eliminated */
#line 728 "rbtree.m"
            {
#line 728 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_15;

#line 728 "rbtree.m"
              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 728 "rbtree.m"
            }
#line 728 "rbtree.m"
            continue;
#line 721 "rbtree.m"
          }
#line 711 "rbtree.m"
        else
#line 711 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 712 "rbtree.m"
          {
#line 712 "rbtree.m"
            MR_Box mercury__rbtree__K0_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 712 "rbtree.m"
            MR_Box mercury__rbtree__V0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 712 "rbtree.m"
            MR_Word mercury__rbtree__Left_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 712 "rbtree.m"
            MR_Word mercury__rbtree__Right_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 714 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_6;
#line 715 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_7;
#line 714 "rbtree.m"
            {
#line 714 "rbtree.m"
              mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
            }
#line 717 "rbtree.m"
            {
#line 717 "rbtree.m"
              mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_8, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
            }
#line 719 "rbtree.m"
            /* direct tailcall eliminated */
#line 719 "rbtree.m"
            {
#line 719 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_9;

#line 719 "rbtree.m"
              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 719 "rbtree.m"
            }
#line 719 "rbtree.m"
            continue;
#line 712 "rbtree.m"
          }
#line 711 "rbtree.m"
        else
#line 711 "rbtree.m"
          {
#line 711 "rbtree.m"
          }
#line 711 "rbtree.m"
      }
#line 711 "rbtree.m"
      break;
#line 711 "rbtree.m"
    }
#line 94 "rbtree.m"
}

#line 91 "rbtree.m"
void MR_CALL 
mercury__rbtree__insert_duplicate_4_p_0(
#line 91 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_30,
#line 91 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_31,
#line 91 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 91 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 91 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 91 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 91 "rbtree.m"
{
#line 581 "rbtree.m"
  {
#line 581 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 581 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "rbtree.m"
      {
#line 581 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 581 "rbtree.m"
        {
#line 581 "rbtree.m"
          MR_Word base;
#line 581 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 581 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 581 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 581 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 581 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 581 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 581 "rbtree.m"
        }
#line 581 "rbtree.m"
      }
#line 581 "rbtree.m"
    else
#line 581 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 584 "rbtree.m"
      {
#line 584 "rbtree.m"
        MR_Word mercury__rbtree__Tree0_24;
#line 589 "rbtree.m"
        MR_Box mercury__rbtree__K1_25;
#line 589 "rbtree.m"
        MR_Box mercury__rbtree__V1_26;
#line 589 "rbtree.m"
        MR_Word mercury__rbtree__L1_27;
#line 589 "rbtree.m"
        MR_Word mercury__rbtree__R1_28;

#line 585 "rbtree.m"
        {
#line 585 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_30, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
        }
#line 587 "rbtree.m"
        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 1)));
#line 587 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 587 "rbtree.m"
          {
#line 587 "rbtree.m"
            mercury__rbtree__K1_25 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 587 "rbtree.m"
            mercury__rbtree__V1_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 587 "rbtree.m"
            mercury__rbtree__L1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 587 "rbtree.m"
            mercury__rbtree__R1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));
#line 588 "rbtree.m"
            {
#line 588 "rbtree.m"
              MR_Word base;
#line 588 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 588 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 588 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_25;
#line 588 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_26;
#line 588 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_27));
#line 588 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_28));
#line 588 "rbtree.m"
            }
#line 587 "rbtree.m"
          }
#line 587 "rbtree.m"
        else
#line 590 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 584 "rbtree.m"
      }
#line 581 "rbtree.m"
    else
#line 582 "rbtree.m"
      {
#line 583 "rbtree.m"
        {
#line 583 "rbtree.m"
          mercury__require__error_1_p_0((MR_String) "rbtree.insert_duplicate: root node cannot be red!");
#line 583 "rbtree.m"
          return;
        }
#line 582 "rbtree.m"
      }
#line 581 "rbtree.m"
  }
#line 91 "rbtree.m"
}

#line 90 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__insert_duplicate_3_f_0(
#line 90 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 90 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 90 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
#line 90 "rbtree.m"
  MR_Box mercury__rbtree__K_6,
#line 90 "rbtree.m"
  MR_Box mercury__rbtree__V_7)
#line 90 "rbtree.m"
{
#line 579 "rbtree.m"
  {
#line 579 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 579 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

#line 579 "rbtree.m"
    {
#line 579 "rbtree.m"
      mercury__rbtree__insert_duplicate_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
#line 579 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
#line 579 "rbtree.m"
  }
#line 90 "rbtree.m"
}

#line 86 "rbtree.m"
void MR_CALL 
mercury__rbtree__set_4_p_0(
#line 86 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_35,
#line 86 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_36,
#line 86 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 86 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 86 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 86 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 86 "rbtree.m"
{
#line 456 "rbtree.m"
  {
#line 456 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 456 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "rbtree.m"
      {
#line 456 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 456 "rbtree.m"
        {
#line 456 "rbtree.m"
          MR_Word base;
#line 456 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 456 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 456 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 456 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 456 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 456 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 456 "rbtree.m"
        }
#line 456 "rbtree.m"
      }
#line 456 "rbtree.m"
    else
#line 456 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 459 "rbtree.m"
      {
#line 459 "rbtree.m"
        MR_Word mercury__rbtree__Tree0_24;

#line 460 "rbtree.m"
        {
#line 460 "rbtree.m"
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
        }
#line 465 "rbtree.m"
        if ((mercury__rbtree__Tree0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "rbtree.m"
          {
#line 470 "rbtree.m"
            {
#line 470 "rbtree.m"
              mercury__require__error_1_p_0((MR_String) "rbtree.set: new tree is empty");
#line 470 "rbtree.m"
              return;
            }
#line 469 "rbtree.m"
          }
#line 465 "rbtree.m"
        else
#line 465 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 2))))
#line 464 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 465 "rbtree.m"
        else
#line 466 "rbtree.m"
          {
#line 466 "rbtree.m"
            MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 466 "rbtree.m"
            MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 466 "rbtree.m"
            MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 466 "rbtree.m"
            MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

#line 467 "rbtree.m"
            {
#line 467 "rbtree.m"
              MR_Word base;
#line 467 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 467 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 467 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
#line 467 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
#line 467 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
#line 467 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
#line 467 "rbtree.m"
            }
#line 466 "rbtree.m"
          }
#line 459 "rbtree.m"
      }
#line 456 "rbtree.m"
    else
#line 457 "rbtree.m"
      {
#line 458 "rbtree.m"
        {
#line 458 "rbtree.m"
          mercury__require__error_1_p_0((MR_String) "rbtree.set: root node cannot be red!");
#line 458 "rbtree.m"
          return;
        }
#line 457 "rbtree.m"
      }
#line 456 "rbtree.m"
  }
#line 86 "rbtree.m"
}

#line 85 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__set_3_f_0(
#line 85 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 85 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 85 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
#line 85 "rbtree.m"
  MR_Box mercury__rbtree__K_6,
#line 85 "rbtree.m"
  MR_Box mercury__rbtree__V_7)
#line 85 "rbtree.m"
{
#line 454 "rbtree.m"
  {
#line 454 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 454 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

#line 454 "rbtree.m"
    {
#line 454 "rbtree.m"
      mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
#line 454 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
#line 454 "rbtree.m"
  }
#line 85 "rbtree.m"
}

#line 80 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__transform_value_4_p_0(
#line 80 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_30,
#line 80 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 80 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 80 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 80 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 80 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 80 "rbtree.m"
{
#line 414 "rbtree.m"
  {
#line 414 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 414 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 431 "rbtree.m"
      {
#line 431 "rbtree.m"
        MR_Box mercury__rbtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 431 "rbtree.m"
        MR_Box mercury__rbtree__V0_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 431 "rbtree.m"
        MR_Word mercury__rbtree__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 431 "rbtree.m"
        MR_Word mercury__rbtree__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 431 "rbtree.m"
        MR_Word mercury__rbtree__Result_26;

#line 432 "rbtree.m"
        {
#line 432 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_26, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_21);
        }
#line 437 "rbtree.m"
        if ((mercury__rbtree__Result_26 == (MR_Integer) 1))
#line 438 "rbtree.m"
          {
#line 438 "rbtree.m"
            MR_Word mercury__rbtree__NewL_28;

#line 439 "rbtree.m"
            {
#line 439 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_23, &mercury__rbtree__NewL_28);
            }
#line 438 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 438 "rbtree.m"
              {
#line 440 "rbtree.m"
                {
#line 440 "rbtree.m"
                  MR_Word base;
#line 440 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 440 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 440 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
#line 440 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
#line 440 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_28));
#line 440 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
#line 440 "rbtree.m"
                }
#line 440 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 438 "rbtree.m"
              }
#line 438 "rbtree.m"
          }
#line 437 "rbtree.m"
        else
#line 437 "rbtree.m"
        if ((mercury__rbtree__Result_26 == (MR_Integer) 0))
#line 434 "rbtree.m"
          {
#line 434 "rbtree.m"
            MR_Box mercury__rbtree__NewV_27;
#line 435 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 435 "rbtree.m"
            {
#line 435 "rbtree.m"
              mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_22, &mercury__rbtree__NewV_27);
            }
#line 436 "rbtree.m"
            {
#line 436 "rbtree.m"
              MR_Word base;
#line 436 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 436 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 436 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__2_2;
#line 436 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_27;
#line 436 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
#line 436 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
#line 436 "rbtree.m"
            }
#line 434 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 434 "rbtree.m"
          }
#line 437 "rbtree.m"
        else
#line 442 "rbtree.m"
          {
#line 442 "rbtree.m"
            MR_Word mercury__rbtree__NewR_29;

#line 443 "rbtree.m"
            {
#line 443 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_24, &mercury__rbtree__NewR_29);
            }
#line 442 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 442 "rbtree.m"
              {
#line 444 "rbtree.m"
                {
#line 444 "rbtree.m"
                  MR_Word base;
#line 444 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 444 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 444 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
#line 444 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
#line 444 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
#line 444 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_29));
#line 444 "rbtree.m"
                }
#line 444 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 442 "rbtree.m"
              }
#line 442 "rbtree.m"
          }
#line 431 "rbtree.m"
      }
#line 414 "rbtree.m"
    else
#line 414 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 416 "rbtree.m"
      {
#line 416 "rbtree.m"
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 416 "rbtree.m"
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 416 "rbtree.m"
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 416 "rbtree.m"
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 416 "rbtree.m"
        MR_Word mercury__rbtree__Result_15;

#line 417 "rbtree.m"
        {
#line 417 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_10);
        }
#line 422 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 423 "rbtree.m"
          {
#line 423 "rbtree.m"
            MR_Word mercury__rbtree__NewL_17;

#line 424 "rbtree.m"
            {
#line 424 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_17);
            }
#line 423 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 423 "rbtree.m"
              {
#line 425 "rbtree.m"
                {
#line 425 "rbtree.m"
                  MR_Word base;
#line 425 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 425 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 425 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 425 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 425 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 425 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 425 "rbtree.m"
                }
#line 425 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 423 "rbtree.m"
              }
#line 423 "rbtree.m"
          }
#line 422 "rbtree.m"
        else
#line 422 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 419 "rbtree.m"
          {
#line 419 "rbtree.m"
            MR_Box mercury__rbtree__NewV_16;
#line 420 "rbtree.m"
            void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 420 "rbtree.m"
            {
#line 420 "rbtree.m"
              mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_11, &mercury__rbtree__NewV_16);
            }
#line 421 "rbtree.m"
            {
#line 421 "rbtree.m"
              MR_Word base;
#line 421 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 421 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 421 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__2_2;
#line 421 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_16;
#line 421 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 421 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 421 "rbtree.m"
            }
#line 419 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 419 "rbtree.m"
          }
#line 422 "rbtree.m"
        else
#line 427 "rbtree.m"
          {
#line 427 "rbtree.m"
            MR_Word mercury__rbtree__NewR_18;

#line 428 "rbtree.m"
            {
#line 428 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_18);
            }
#line 427 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 427 "rbtree.m"
              {
#line 429 "rbtree.m"
                {
#line 429 "rbtree.m"
                  MR_Word base;
#line 429 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 429 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 429 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 429 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 429 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 429 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 429 "rbtree.m"
                }
#line 429 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 427 "rbtree.m"
              }
#line 427 "rbtree.m"
          }
#line 416 "rbtree.m"
      }
#line 414 "rbtree.m"
    else
#line 414 "rbtree.m"
      mercury__rbtree__succeeded = MR_FALSE;
#line 414 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 414 "rbtree.m"
  }
#line 80 "rbtree.m"
}

#line 74 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__update_4_p_0(
#line 74 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_28,
#line 74 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_29,
#line 74 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 74 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 74 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 74 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 74 "rbtree.m"
{
#line 381 "rbtree.m"
  {
#line 381 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 381 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 397 "rbtree.m"
      {
#line 397 "rbtree.m"
        MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 397 "rbtree.m"
        MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 397 "rbtree.m"
        MR_Word mercury__rbtree__L_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 397 "rbtree.m"
        MR_Word mercury__rbtree__R_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 397 "rbtree.m"
        MR_Word mercury__rbtree__Result_25;

#line 398 "rbtree.m"
        {
#line 398 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_25, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_20);
        }
#line 402 "rbtree.m"
        if ((mercury__rbtree__Result_25 == (MR_Integer) 1))
#line 403 "rbtree.m"
          {
#line 403 "rbtree.m"
            MR_Word mercury__rbtree__NewL_26;

#line 404 "rbtree.m"
            {
#line 404 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_22, &mercury__rbtree__NewL_26);
            }
#line 403 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 403 "rbtree.m"
              {
#line 405 "rbtree.m"
                {
#line 405 "rbtree.m"
                  MR_Word base;
#line 405 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 405 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 405 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 405 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 405 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_26));
#line 405 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
#line 405 "rbtree.m"
                }
#line 405 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 403 "rbtree.m"
              }
#line 403 "rbtree.m"
          }
#line 402 "rbtree.m"
        else
#line 402 "rbtree.m"
        if ((mercury__rbtree__Result_25 == (MR_Integer) 0))
#line 401 "rbtree.m"
          {
#line 401 "rbtree.m"
            {
#line 401 "rbtree.m"
              MR_Word base;
#line 401 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 401 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 401 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 401 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 401 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
#line 401 "rbtree.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
#line 401 "rbtree.m"
            }
#line 401 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 401 "rbtree.m"
          }
#line 402 "rbtree.m"
        else
#line 407 "rbtree.m"
          {
#line 407 "rbtree.m"
            MR_Word mercury__rbtree__NewR_27;

#line 408 "rbtree.m"
            {
#line 408 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_23, &mercury__rbtree__NewR_27);
            }
#line 407 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 407 "rbtree.m"
              {
#line 409 "rbtree.m"
                {
#line 409 "rbtree.m"
                  MR_Word base;
#line 409 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 409 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 409 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 409 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 409 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
#line 409 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_27));
#line 409 "rbtree.m"
                }
#line 409 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 407 "rbtree.m"
              }
#line 407 "rbtree.m"
          }
#line 397 "rbtree.m"
      }
#line 381 "rbtree.m"
    else
#line 381 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 383 "rbtree.m"
      {
#line 383 "rbtree.m"
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 383 "rbtree.m"
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 383 "rbtree.m"
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 383 "rbtree.m"
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 383 "rbtree.m"
        MR_Word mercury__rbtree__Result_15;

#line 384 "rbtree.m"
        {
#line 384 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_10);
        }
#line 388 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 389 "rbtree.m"
          {
#line 389 "rbtree.m"
            MR_Word mercury__rbtree__NewL_16;

#line 390 "rbtree.m"
            {
#line 390 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_16);
            }
#line 389 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 389 "rbtree.m"
              {
#line 391 "rbtree.m"
                {
#line 391 "rbtree.m"
                  MR_Word base;
#line 391 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 391 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 391 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 391 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 391 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_16));
#line 391 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 391 "rbtree.m"
                }
#line 391 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 389 "rbtree.m"
              }
#line 389 "rbtree.m"
          }
#line 388 "rbtree.m"
        else
#line 388 "rbtree.m"
        if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 387 "rbtree.m"
          {
#line 387 "rbtree.m"
            {
#line 387 "rbtree.m"
              MR_Word base;
#line 387 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 387 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 387 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 387 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 387 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 387 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 387 "rbtree.m"
            }
#line 387 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 387 "rbtree.m"
          }
#line 388 "rbtree.m"
        else
#line 393 "rbtree.m"
          {
#line 393 "rbtree.m"
            MR_Word mercury__rbtree__NewR_17;

#line 394 "rbtree.m"
            {
#line 394 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_17);
            }
#line 393 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 393 "rbtree.m"
              {
#line 395 "rbtree.m"
                {
#line 395 "rbtree.m"
                  MR_Word base;
#line 395 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 395 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 395 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 395 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 395 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 395 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_17));
#line 395 "rbtree.m"
                }
#line 395 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 393 "rbtree.m"
              }
#line 393 "rbtree.m"
          }
#line 383 "rbtree.m"
      }
#line 381 "rbtree.m"
    else
#line 381 "rbtree.m"
      mercury__rbtree__succeeded = MR_FALSE;
#line 381 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 381 "rbtree.m"
  }
#line 74 "rbtree.m"
}

#line 69 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__insert_4_p_0(
#line 69 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_35,
#line 69 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_36,
#line 69 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 69 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 69 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 69 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 69 "rbtree.m"
{
#line 266 "rbtree.m"
  {
#line 266 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 266 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "rbtree.m"
      {
#line 266 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 266 "rbtree.m"
        {
#line 266 "rbtree.m"
          MR_Word base;
#line 266 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 266 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 266 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 266 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 266 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 266 "rbtree.m"
        }
#line 266 "rbtree.m"
        mercury__rbtree__succeeded = MR_TRUE;
#line 266 "rbtree.m"
      }
#line 266 "rbtree.m"
    else
#line 266 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 269 "rbtree.m"
      {
#line 269 "rbtree.m"
        MR_Word mercury__rbtree__Tree0_24;

#line 270 "rbtree.m"
        {
#line 270 "rbtree.m"
          mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
        }
#line 269 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 269 "rbtree.m"
          {
#line 275 "rbtree.m"
            if ((mercury__rbtree__Tree0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "rbtree.m"
              {
#line 280 "rbtree.m"
                {
#line 280 "rbtree.m"
                  mercury__require__error_1_p_0((MR_String) "rbtree.insert: new tree is empty");
                }
#line 279 "rbtree.m"
              }
#line 275 "rbtree.m"
            else
#line 275 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 2))))
#line 274 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 275 "rbtree.m"
            else
#line 276 "rbtree.m"
              {
#line 276 "rbtree.m"
                MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 276 "rbtree.m"
                MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 276 "rbtree.m"
                MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 276 "rbtree.m"
                MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

#line 277 "rbtree.m"
                {
#line 277 "rbtree.m"
                  MR_Word base;
#line 277 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 277 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 277 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
#line 277 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
#line 277 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
#line 277 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
#line 277 "rbtree.m"
                }
#line 276 "rbtree.m"
              }
#line 275 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 269 "rbtree.m"
          }
#line 269 "rbtree.m"
      }
#line 266 "rbtree.m"
    else
#line 267 "rbtree.m"
      {
#line 268 "rbtree.m"
        {
#line 268 "rbtree.m"
          mercury__require__error_1_p_0((MR_String) "rbtree.insert: root node cannot be red!");
        }
#line 267 "rbtree.m"
        mercury__rbtree__succeeded = MR_TRUE;
#line 267 "rbtree.m"
      }
#line 266 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 266 "rbtree.m"
  }
#line 69 "rbtree.m"
}

#line 64 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__is_empty_1_p_0(
#line 64 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_3,
#line 64 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_4,
#line 64 "rbtree.m"
  MR_Word mercury__rbtree__Tree_2)
#line 64 "rbtree.m"
{
#line 256 "rbtree.m"
  {
#line 256 "rbtree.m"
    MR_bool mercury__rbtree__succeeded = (mercury__rbtree__Tree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 256 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 256 "rbtree.m"
  }
#line 64 "rbtree.m"
}

#line 60 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__singleton_2_f_0(
#line 60 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_8,
#line 60 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_9,
#line 60 "rbtree.m"
  MR_Box mercury__rbtree__K_4,
#line 60 "rbtree.m"
  MR_Box mercury__rbtree__V_5)
#line 60 "rbtree.m"
{
#line 258 "rbtree.m"
  {
#line 258 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 258 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__3_3;
#line 258 "rbtree.m"
    MR_Word mercury__rbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "rbtree.m"
    MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 258 "rbtree.m"
    {
#line 258 "rbtree.m"
      mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 258 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 0) = mercury__rbtree__K_4;
#line 258 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 1) = mercury__rbtree__V_5;
#line 258 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 2) = ((MR_Box) (mercury__rbtree__V_6_6));
#line 258 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 3) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 258 "rbtree.m"
    }
#line 258 "rbtree.m"
    return mercury__rbtree__HeadVar__3_3;
#line 258 "rbtree.m"
  }
#line 60 "rbtree.m"
}

#line 56 "rbtree.m"
void MR_CALL 
mercury__rbtree__init_1_p_0(
#line 56 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_2,
#line 56 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_3,
#line 56 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__1_1)
#line 56 "rbtree.m"
{
#line 253 "rbtree.m"
  {
#line 253 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 253 "rbtree.m"
    *mercury__rbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "rbtree.m"
  }
#line 56 "rbtree.m"
}

#line 55 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__init_0_f_0(
#line 55 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_3,
#line 55 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_4)
#line 55 "rbtree.m"
{
#line 253 "rbtree.m"
  {
#line 253 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 253 "rbtree.m"
    MR_Word mercury__rbtree__RBT_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 253 "rbtree.m"
    return mercury__rbtree__RBT_2;
#line 253 "rbtree.m"
  }
#line 55 "rbtree.m"
}

void mercury__rbtree__init(void)
{
}

void mercury__rbtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rbtree__rbtree__type_ctor_info_rbtree_2);
}

void mercury__rbtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module rbtree. */
