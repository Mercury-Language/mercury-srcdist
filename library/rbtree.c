/*
** Automatically generated from `rbtree.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 86 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0;

#line 89 "rbtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2;

#line 92 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4];

#line 95 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1;

#line 98 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4];

#line 101 "rbtree.c"
static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2;

#line 104 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1];

#line 107 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1];

#line 110 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1];

#line 113 "rbtree.c"
static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3];

#line 116 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3];

#line 119 "rbtree.c"
static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3];

#line 122 "rbtree.c"
static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
#line 125 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 127 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 129 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_3,
#line 131 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4);

#line 134 "rbtree.c"
static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
#line 137 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 139 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 141 "rbtree.c"
  MR_Box * mercury__rbtree__wrapper_arg_3,
#line 143 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4,
#line 145 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_5);

#line 191 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__V_37_37,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 191 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 191 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4);

#line 232 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__V_31_31,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 232 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 605 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
#line 605 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
#line 605 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 605 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 605 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 605 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4);

#line 486 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
#line 486 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
#line 486 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 486 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 486 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 486 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4);

#line 294 "rbtree.m"
static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
#line 294 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
#line 294 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 294 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 294 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 294 "rbtree.m"
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



#line 580 "rbtree.c"
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

#line 595 "rbtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 604 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

#line 612 "rbtree.c"
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

#line 627 "rbtree.c"
static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

#line 635 "rbtree.c"
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

#line 650 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0
};

#line 655 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

#line 660 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2
};

#line 665 "rbtree.c"
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

#line 684 "rbtree.c"
static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

#line 691 "rbtree.c"
static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 698 "rbtree.c"
const MR_TypeCtorInfo_Struct mercury__rbtree__rbtree__type_ctor_info_rbtree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rbtree____Unify____rbtree_2_0_10001)),
  ((MR_Box) (mercury__rbtree____Compare____rbtree_2_0_10001)),
  (MR_String) "rbtree",
  (MR_String) "rbtree",
  {
    mercury__rbtree__rbtree__du_name_ordered_rbtree_2
  },
  {
    mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rbtree__rbtree__functor_number_map_rbtree_2
};

#line 719 "rbtree.c"
static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
#line 722 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 724 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 726 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_3,
#line 728 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4)
#line 730 "rbtree.c"
{
#line 732 "rbtree.c"
  {
#line 734 "rbtree.c"
    MR_bool mercury__rbtree__succeeded;

#line 737 "rbtree.c"
    {
#line 739 "rbtree.c"
      mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), ((MR_Word) mercury__rbtree__wrapper_arg_3), ((MR_Word) mercury__rbtree__wrapper_arg_4));
    }
#line 742 "rbtree.c"
    return mercury__rbtree__succeeded;
#line 744 "rbtree.c"
  }
#line 746 "rbtree.c"
}

#line 749 "rbtree.c"
static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
#line 752 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_1,
#line 754 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_2,
#line 756 "rbtree.c"
  MR_Box * mercury__rbtree__wrapper_arg_3,
#line 758 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_4,
#line 760 "rbtree.c"
  MR_Box mercury__rbtree__wrapper_arg_5)
#line 762 "rbtree.c"
{
#line 764 "rbtree.c"
  {
#line 766 "rbtree.c"
    MR_Word mercury__rbtree__conv0_HeadVar__1_1;

#line 769 "rbtree.c"
    {
#line 771 "rbtree.c"
      mercury__rbtree____Compare____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), &mercury__rbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rbtree__wrapper_arg_4), ((MR_Word) mercury__rbtree__wrapper_arg_5));
    }
#line 774 "rbtree.c"
    *mercury__rbtree__wrapper_arg_3 = ((MR_Box) (mercury__rbtree__conv0_HeadVar__1_1));
#line 776 "rbtree.c"
  }
#line 778 "rbtree.c"
}

#line 191 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__V_37_37,
#line 191 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 191 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 191 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 191 "rbtree.m"
{
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1062 "rbtree.m"
              MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1062 "rbtree.m"
              mercury__rbtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
#line 1062 "rbtree.m"
              {
#line 1062 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_29_29 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1073 "rbtree.m"
              /* direct tailcall eliminated */
#line 1073 "rbtree.m"
              {
#line 1073 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
              continue;
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1062 "rbtree.m"
              MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1062 "rbtree.m"
              mercury__rbtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
#line 1062 "rbtree.m"
              {
#line 1062 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_18_18 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1069 "rbtree.m"
              /* direct tailcall eliminated */
#line 1069 "rbtree.m"
              {
#line 1069 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
              }
#line 1069 "rbtree.m"
              continue;
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 191 "rbtree.m"
}

#line 232 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__V_31_31,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 232 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 232 "rbtree.m"
{
#line 1105 "rbtree.m"
  {
#line 1105 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1105 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "rbtree.m"
      *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1105 "rbtree.m"
    else
#line 1105 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1112 "rbtree.m"
        {
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left_23;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right_24;
#line 1102 "rbtree.m"
          MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

#line 1102 "rbtree.m"
          {
#line 1102 "rbtree.m"
            mercury__rbtree__W0_22 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_18, mercury__rbtree__V0_19);
          }
#line 1115 "rbtree.m"
          {
#line 1115 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
          }
#line 1116 "rbtree.m"
          {
#line 1116 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
          }
#line 1117 "rbtree.m"
          {
#line 1117 "rbtree.m"
            MR_Word base;
#line 1117 "rbtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = base;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1117 "rbtree.m"
          }
#line 1112 "rbtree.m"
        }
#line 1105 "rbtree.m"
      else
#line 1106 "rbtree.m"
        {
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left_13;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right_14;
#line 1102 "rbtree.m"
          MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

#line 1102 "rbtree.m"
          {
#line 1102 "rbtree.m"
            mercury__rbtree__W0_12 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_8, mercury__rbtree__V0_9);
          }
#line 1109 "rbtree.m"
          {
#line 1109 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
          }
#line 1110 "rbtree.m"
          {
#line 1110 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
          }
#line 1111 "rbtree.m"
          {
#line 1111 "rbtree.m"
            MR_Word base;
#line 1111 "rbtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = base;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1111 "rbtree.m"
          }
#line 1106 "rbtree.m"
        }
#line 1105 "rbtree.m"
  }
#line 232 "rbtree.m"
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

#line 864 "rbtree.m"
void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 864 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 864 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 864 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 864 "rbtree.m"
{
#line 866 "rbtree.m"
  {
#line 866 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 866 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "rbtree.m"
      {
#line 866 "rbtree.m"
        *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "rbtree.m"
        *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "rbtree.m"
      }
#line 866 "rbtree.m"
    else
#line 866 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 892 "rbtree.m"
        {
#line 892 "rbtree.m"
          MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 892 "rbtree.m"
          MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__Result_33;

#line 893 "rbtree.m"
          {
#line 893 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
          }
#line 908 "rbtree.m"
          if ((mercury__rbtree__Result_33 == (MR_Integer) 1))
#line 909 "rbtree.m"
            {
#line 909 "rbtree.m"
              MR_Word mercury__rbtree__NewL_41;

#line 910 "rbtree.m"
              {
#line 910 "rbtree.m"
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
              }
#line 911 "rbtree.m"
              {
#line 911 "rbtree.m"
                MR_Word base;
#line 911 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 911 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 911 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 911 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 911 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
#line 911 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 911 "rbtree.m"
              }
#line 909 "rbtree.m"
            }
#line 908 "rbtree.m"
          else
#line 908 "rbtree.m"
            if ((mercury__rbtree__Result_33 == (MR_Integer) 0))
#line 895 "rbtree.m"
              {
#line 898 "rbtree.m"
                MR_Box mercury__rbtree__NewK_34;
#line 898 "rbtree.m"
                MR_Box mercury__rbtree__NewV_35;
#line 898 "rbtree.m"
                MR_Word mercury__rbtree__NewL_36;

#line 896 "rbtree.m"
                {
#line 896 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
                }
#line 898 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 897 "rbtree.m"
                  {
#line 897 "rbtree.m"
                    MR_Word base;
#line 897 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 897 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 897 "rbtree.m"
                  }
#line 898 "rbtree.m"
                else
#line 902 "rbtree.m"
                  {
#line 902 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_37;
#line 902 "rbtree.m"
                    MR_Box mercury__rbtree__NewK_39;
#line 902 "rbtree.m"
                    MR_Box mercury__rbtree__NewV_40;

#line 900 "rbtree.m"
                    {
#line 900 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                    }
#line 902 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 901 "rbtree.m"
                      {
#line 901 "rbtree.m"
                        MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 901 "rbtree.m"
                        {
#line 901 "rbtree.m"
                          MR_Word base;
#line 901 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 901 "rbtree.m"
                          *mercury__rbtree__HeadVar__5_5 = base;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
#line 901 "rbtree.m"
                        }
#line 901 "rbtree.m"
                      }
#line 902 "rbtree.m"
                    else
#line 904 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "rbtree.m"
                  }
#line 907 "rbtree.m"
                {
#line 907 "rbtree.m"
                  MR_Word base;
#line 907 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 907 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
#line 907 "rbtree.m"
                }
#line 895 "rbtree.m"
              }
#line 908 "rbtree.m"
            else
#line 913 "rbtree.m"
              {
#line 913 "rbtree.m"
                MR_Word mercury__rbtree__NewR_42;

#line 914 "rbtree.m"
                {
#line 914 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
                }
#line 915 "rbtree.m"
                {
#line 915 "rbtree.m"
                  MR_Word base;
#line 915 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 915 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 915 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 915 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 915 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
#line 915 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
#line 915 "rbtree.m"
                }
#line 913 "rbtree.m"
              }
#line 892 "rbtree.m"
        }
#line 866 "rbtree.m"
      else
#line 867 "rbtree.m"
        {
#line 867 "rbtree.m"
          MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 867 "rbtree.m"
          MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__Result_15;

#line 868 "rbtree.m"
          {
#line 868 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
          }
#line 883 "rbtree.m"
          if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 884 "rbtree.m"
            {
#line 884 "rbtree.m"
              MR_Word mercury__rbtree__NewL_23;

#line 885 "rbtree.m"
              {
#line 885 "rbtree.m"
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
              }
#line 886 "rbtree.m"
              {
#line 886 "rbtree.m"
                MR_Word base;
#line 886 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rbtree.m"
                *mercury__rbtree__HeadVar__5_5 = base;
#line 886 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 886 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 886 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 886 "rbtree.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 886 "rbtree.m"
              }
#line 884 "rbtree.m"
            }
#line 883 "rbtree.m"
          else
#line 883 "rbtree.m"
            if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 870 "rbtree.m"
              {
#line 873 "rbtree.m"
                MR_Box mercury__rbtree__NewK_16;
#line 873 "rbtree.m"
                MR_Box mercury__rbtree__NewV_17;
#line 873 "rbtree.m"
                MR_Word mercury__rbtree__NewL_18;

#line 871 "rbtree.m"
                {
#line 871 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
                }
#line 873 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 872 "rbtree.m"
                  {
#line 872 "rbtree.m"
                    MR_Word base;
#line 872 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 872 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 872 "rbtree.m"
                  }
#line 873 "rbtree.m"
                else
#line 877 "rbtree.m"
                  {
#line 877 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_19;
#line 877 "rbtree.m"
                    MR_Box mercury__rbtree__NewK_21;
#line 877 "rbtree.m"
                    MR_Box mercury__rbtree__NewV_22;

#line 875 "rbtree.m"
                    {
#line 875 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                    }
#line 877 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 876 "rbtree.m"
                      {
#line 876 "rbtree.m"
                        MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 876 "rbtree.m"
                        {
#line 876 "rbtree.m"
                          MR_Word base;
#line 876 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 876 "rbtree.m"
                          *mercury__rbtree__HeadVar__5_5 = base;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
#line 876 "rbtree.m"
                        }
#line 876 "rbtree.m"
                      }
#line 877 "rbtree.m"
                    else
#line 879 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 877 "rbtree.m"
                  }
#line 882 "rbtree.m"
                {
#line 882 "rbtree.m"
                  MR_Word base;
#line 882 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 882 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 882 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
#line 882 "rbtree.m"
                }
#line 870 "rbtree.m"
              }
#line 883 "rbtree.m"
            else
#line 888 "rbtree.m"
              {
#line 888 "rbtree.m"
                MR_Word mercury__rbtree__NewR_24;

#line 889 "rbtree.m"
                {
#line 889 "rbtree.m"
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
                }
#line 890 "rbtree.m"
                {
#line 890 "rbtree.m"
                  MR_Word base;
#line 890 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 890 "rbtree.m"
                  *mercury__rbtree__HeadVar__5_5 = base;
#line 890 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 890 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 890 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
#line 890 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
#line 890 "rbtree.m"
                }
#line 888 "rbtree.m"
              }
#line 867 "rbtree.m"
        }
#line 866 "rbtree.m"
  }
#line 864 "rbtree.m"
}

#line 605 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
#line 605 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
#line 605 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 605 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 605 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 605 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 605 "rbtree.m"
{
#line 609 "rbtree.m"
  while (MR_TRUE)
#line 609 "rbtree.m"
    {
#line 609 "rbtree.m"
      /* tailcall optimized into a loop */
#line 609 "rbtree.m"
      {
#line 609 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 609 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "rbtree.m"
          {
#line 609 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 609 "rbtree.m"
            {
#line 609 "rbtree.m"
              MR_Word base;
#line 609 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 609 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 609 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 609 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 609 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 609 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 609 "rbtree.m"
            }
#line 609 "rbtree.m"
          }
#line 609 "rbtree.m"
        else
#line 609 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 628 "rbtree.m"
            {
#line 628 "rbtree.m"
              MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 628 "rbtree.m"
              MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 628 "rbtree.m"
              MR_Word mercury__rbtree__L0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 628 "rbtree.m"
              MR_Word mercury__rbtree__R0_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 640 "rbtree.m"
              MR_Box mercury__rbtree__LK_27;
#line 640 "rbtree.m"
              MR_Box mercury__rbtree__LV_28;
#line 640 "rbtree.m"
              MR_Word mercury__rbtree__LL_29;
#line 640 "rbtree.m"
              MR_Word mercury__rbtree__LR_30;
#line 640 "rbtree.m"
              MR_Box mercury__rbtree__RK_31;
#line 640 "rbtree.m"
              MR_Box mercury__rbtree__RV_32;
#line 640 "rbtree.m"
              MR_Word mercury__rbtree__RL_33;
#line 640 "rbtree.m"
              MR_Word mercury__rbtree__RR_34;

#line 630 "rbtree.m"
              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_22)) == (MR_mktag((MR_Integer) 1)));
#line 630 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 630 "rbtree.m"
                {
#line 630 "rbtree.m"
                  mercury__rbtree__LK_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 0));
#line 630 "rbtree.m"
                  mercury__rbtree__LV_28 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 1));
#line 630 "rbtree.m"
                  mercury__rbtree__LL_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 2)));
#line 630 "rbtree.m"
                  mercury__rbtree__LR_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 3)));
#line 631 "rbtree.m"
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_23)) == (MR_mktag((MR_Integer) 1)));
#line 631 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 631 "rbtree.m"
                    {
#line 631 "rbtree.m"
                      mercury__rbtree__RK_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 0));
#line 631 "rbtree.m"
                      mercury__rbtree__RV_32 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 1));
#line 631 "rbtree.m"
                      mercury__rbtree__RL_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 2)));
#line 631 "rbtree.m"
                      mercury__rbtree__RR_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 3)));
#line 631 "rbtree.m"
                    }
#line 630 "rbtree.m"
                }
#line 640 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 636 "rbtree.m"
                {
#line 636 "rbtree.m"
                  MR_Word mercury__rbtree__L_35;
#line 636 "rbtree.m"
                  MR_Word mercury__rbtree__R_36;
#line 636 "rbtree.m"
                  MR_Word mercury__rbtree__Tree0_37;

#line 636 "rbtree.m"
                  {
#line 636 "rbtree.m"
                    mercury__rbtree__L_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 636 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 0) = mercury__rbtree__LK_27;
#line 636 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 1) = mercury__rbtree__LV_28;
#line 636 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 2) = ((MR_Box) (mercury__rbtree__LL_29));
#line 636 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 3) = ((MR_Box) (mercury__rbtree__LR_30));
#line 636 "rbtree.m"
                  }
#line 637 "rbtree.m"
                  {
#line 637 "rbtree.m"
                    mercury__rbtree__R_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 637 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 0) = mercury__rbtree__RK_31;
#line 637 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 1) = mercury__rbtree__RV_32;
#line 637 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 2) = ((MR_Box) (mercury__rbtree__RL_33));
#line 637 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 3) = ((MR_Box) (mercury__rbtree__RR_34));
#line 637 "rbtree.m"
                  }
#line 638 "rbtree.m"
                  {
#line 638 "rbtree.m"
                    mercury__rbtree__Tree0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 638 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 0) = mercury__rbtree__K0_20;
#line 638 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 1) = mercury__rbtree__V0_21;
#line 638 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 2) = ((MR_Box) (mercury__rbtree__L_35));
#line 638 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 3) = ((MR_Box) (mercury__rbtree__R_36));
#line 638 "rbtree.m"
                  }
#line 639 "rbtree.m"
                  /* direct tailcall eliminated */
#line 639 "rbtree.m"
                  {
#line 639 "rbtree.m"
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_37;

#line 639 "rbtree.m"
                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 639 "rbtree.m"
                  }
#line 639 "rbtree.m"
                  continue;
#line 636 "rbtree.m"
                }
#line 640 "rbtree.m"
              else
#line 642 "rbtree.m"
                {
#line 642 "rbtree.m"
                  MR_Word mercury__rbtree__Result_38;

#line 642 "rbtree.m"
                  {
#line 642 "rbtree.m"
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_38, mercury__rbtree__K_2, mercury__rbtree__K0_20);
                  }
#line 666 "rbtree.m"
                  if ((mercury__rbtree__Result_38 == (MR_Integer) 1))
#line 644 "rbtree.m"
                    {
#line 644 "rbtree.m"
                      MR_Word mercury__rbtree__NewL_39;
#line 663 "rbtree.m"
                      MR_Box mercury__rbtree__LK_65;
#line 663 "rbtree.m"
                      MR_Box mercury__rbtree__LV_66;
#line 663 "rbtree.m"
                      MR_Word mercury__rbtree__LL_67;
#line 663 "rbtree.m"
                      MR_Word mercury__rbtree__LR_68;

#line 645 "rbtree.m"
                      {
#line 645 "rbtree.m"
                        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_39);
                      }
#line 650 "rbtree.m"
                      mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_39)) == (MR_mktag((MR_Integer) 1)));
#line 650 "rbtree.m"
                      if (mercury__rbtree__succeeded)
#line 650 "rbtree.m"
                        {
#line 650 "rbtree.m"
                          mercury__rbtree__LK_65 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 0));
#line 650 "rbtree.m"
                          mercury__rbtree__LV_66 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 1));
#line 650 "rbtree.m"
                          mercury__rbtree__LL_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 2)));
#line 650 "rbtree.m"
                          mercury__rbtree__LR_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 3)));
#line 656 "rbtree.m"
                          {
#line 653 "rbtree.m"
                            MR_Box mercury__rbtree___LLK1_40;
#line 653 "rbtree.m"
                            MR_Box mercury__rbtree___LLV1_41;
#line 653 "rbtree.m"
                            MR_Word mercury__rbtree___LLL1_42;
#line 653 "rbtree.m"
                            MR_Word mercury__rbtree___LLR1_43;

#line 653 "rbtree.m"
                            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_67)) == (MR_mktag((MR_Integer) 1)));
#line 653 "rbtree.m"
                            if (mercury__rbtree__succeeded)
#line 653 "rbtree.m"
                              {
#line 653 "rbtree.m"
                                mercury__rbtree___LLK1_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 0));
#line 653 "rbtree.m"
                                mercury__rbtree___LLV1_41 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 1));
#line 653 "rbtree.m"
                                mercury__rbtree___LLL1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 2)));
#line 653 "rbtree.m"
                                mercury__rbtree___LLR1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 3)));
#line 654 "rbtree.m"
                                {
#line 654 "rbtree.m"
                                  MR_Word mercury__rbtree__TreeR_44;

#line 654 "rbtree.m"
                                  {
#line 654 "rbtree.m"
                                    mercury__rbtree__TreeR_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 654 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 0) = mercury__rbtree__K0_20;
#line 654 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 1) = mercury__rbtree__V0_21;
#line 654 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 2) = ((MR_Box) (mercury__rbtree__LR_68));
#line 654 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 654 "rbtree.m"
                                  }
#line 655 "rbtree.m"
                                  {
#line 655 "rbtree.m"
                                    MR_Word base;
#line 655 "rbtree.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 655 "rbtree.m"
                                    *mercury__rbtree__HeadVar__4_4 = base;
#line 655 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_65;
#line 655 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_66;
#line 655 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_67));
#line 655 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_44));
#line 655 "rbtree.m"
                                  }
#line 654 "rbtree.m"
                                }
#line 653 "rbtree.m"
                              }
#line 653 "rbtree.m"
                            else
#line 660 "rbtree.m"
                              {
#line 660 "rbtree.m"
                                MR_Box mercury__rbtree__LRK_45;
#line 660 "rbtree.m"
                                MR_Box mercury__rbtree__LRV_46;
#line 660 "rbtree.m"
                                MR_Word mercury__rbtree__LRL_47;
#line 660 "rbtree.m"
                                MR_Word mercury__rbtree__LRR_48;

#line 656 "rbtree.m"
                                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_68)) == (MR_mktag((MR_Integer) 1)));
#line 656 "rbtree.m"
                                if (mercury__rbtree__succeeded)
#line 656 "rbtree.m"
                                  {
#line 656 "rbtree.m"
                                    mercury__rbtree__LRK_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 0));
#line 656 "rbtree.m"
                                    mercury__rbtree__LRV_46 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 1));
#line 656 "rbtree.m"
                                    mercury__rbtree__LRL_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 2)));
#line 656 "rbtree.m"
                                    mercury__rbtree__LRR_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 3)));
#line 657 "rbtree.m"
                                    {
#line 657 "rbtree.m"
                                      MR_Word mercury__rbtree__TreeL_49;
#line 657 "rbtree.m"
                                      MR_Word mercury__rbtree__TreeR_63;

#line 657 "rbtree.m"
                                      {
#line 657 "rbtree.m"
                                        mercury__rbtree__TreeL_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 657 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 0) = mercury__rbtree__LK_65;
#line 657 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 1) = mercury__rbtree__LV_66;
#line 657 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 2) = ((MR_Box) (mercury__rbtree__LL_67));
#line 657 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 3) = ((MR_Box) (mercury__rbtree__LRL_47));
#line 657 "rbtree.m"
                                      }
#line 658 "rbtree.m"
                                      {
#line 658 "rbtree.m"
                                        mercury__rbtree__TreeR_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 658 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 0) = mercury__rbtree__K0_20;
#line 658 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 1) = mercury__rbtree__V0_21;
#line 658 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 2) = ((MR_Box) (mercury__rbtree__LRR_48));
#line 658 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 658 "rbtree.m"
                                      }
#line 659 "rbtree.m"
                                      {
#line 659 "rbtree.m"
                                        MR_Word base;
#line 659 "rbtree.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 659 "rbtree.m"
                                        *mercury__rbtree__HeadVar__4_4 = base;
#line 659 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_45;
#line 659 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_46;
#line 659 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_49));
#line 659 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_63));
#line 659 "rbtree.m"
                                      }
#line 657 "rbtree.m"
                                    }
#line 656 "rbtree.m"
                                  }
#line 656 "rbtree.m"
                                else
#line 661 "rbtree.m"
                                  {
#line 661 "rbtree.m"
                                    MR_Word base;
#line 661 "rbtree.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 661 "rbtree.m"
                                    *mercury__rbtree__HeadVar__4_4 = base;
#line 661 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 661 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 661 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 661 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 661 "rbtree.m"
                                  }
#line 660 "rbtree.m"
                              }
#line 656 "rbtree.m"
                          }
#line 650 "rbtree.m"
                        }
#line 650 "rbtree.m"
                      else
#line 664 "rbtree.m"
                        {
#line 664 "rbtree.m"
                          MR_Word base;
#line 664 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 664 "rbtree.m"
                          *mercury__rbtree__HeadVar__4_4 = base;
#line 664 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 664 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 664 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 664 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 664 "rbtree.m"
                        }
#line 644 "rbtree.m"
                    }
#line 666 "rbtree.m"
                  else
#line 666 "rbtree.m"
                    if ((mercury__rbtree__Result_38 == (MR_Integer) 0))
#line 690 "rbtree.m"
                      {
#line 690 "rbtree.m"
                        MR_Word mercury__rbtree__NewL_120;
#line 708 "rbtree.m"
                        MR_Box mercury__rbtree__LK_106;
#line 708 "rbtree.m"
                        MR_Box mercury__rbtree__LV_107;
#line 708 "rbtree.m"
                        MR_Word mercury__rbtree__LL_108;
#line 708 "rbtree.m"
                        MR_Word mercury__rbtree__LR_109;

#line 691 "rbtree.m"
                        {
#line 691 "rbtree.m"
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_120);
                        }
#line 695 "rbtree.m"
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_120)) == (MR_mktag((MR_Integer) 1)));
#line 695 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 695 "rbtree.m"
                          {
#line 695 "rbtree.m"
                            mercury__rbtree__LK_106 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 0));
#line 695 "rbtree.m"
                            mercury__rbtree__LV_107 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 1));
#line 695 "rbtree.m"
                            mercury__rbtree__LL_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 2)));
#line 695 "rbtree.m"
                            mercury__rbtree__LR_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 3)));
#line 701 "rbtree.m"
                            {
#line 698 "rbtree.m"
                              MR_Box mercury__rbtree___LLK2_59;
#line 698 "rbtree.m"
                              MR_Box mercury__rbtree___LLV2_60;
#line 698 "rbtree.m"
                              MR_Word mercury__rbtree___LLL2_61;
#line 698 "rbtree.m"
                              MR_Word mercury__rbtree___LLR2_62;

#line 698 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_108)) == (MR_mktag((MR_Integer) 1)));
#line 698 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 698 "rbtree.m"
                                {
#line 698 "rbtree.m"
                                  mercury__rbtree___LLK2_59 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 0));
#line 698 "rbtree.m"
                                  mercury__rbtree___LLV2_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 1));
#line 698 "rbtree.m"
                                  mercury__rbtree___LLL2_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 2)));
#line 698 "rbtree.m"
                                  mercury__rbtree___LLR2_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 3)));
#line 699 "rbtree.m"
                                  {
#line 699 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_91;

#line 699 "rbtree.m"
                                    {
#line 699 "rbtree.m"
                                      mercury__rbtree__TreeR_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 0) = mercury__rbtree__K0_20;
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 1) = mercury__rbtree__V0_21;
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 2) = ((MR_Box) (mercury__rbtree__LR_109));
#line 699 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 699 "rbtree.m"
                                    }
#line 700 "rbtree.m"
                                    {
#line 700 "rbtree.m"
                                      MR_Word base;
#line 700 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 700 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 700 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_106;
#line 700 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_107;
#line 700 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_108));
#line 700 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_91));
#line 700 "rbtree.m"
                                    }
#line 699 "rbtree.m"
                                  }
#line 698 "rbtree.m"
                                }
#line 698 "rbtree.m"
                              else
#line 705 "rbtree.m"
                                {
#line 705 "rbtree.m"
                                  MR_Box mercury__rbtree__LRK_95;
#line 705 "rbtree.m"
                                  MR_Box mercury__rbtree__LRV_96;
#line 705 "rbtree.m"
                                  MR_Word mercury__rbtree__LRL_97;
#line 705 "rbtree.m"
                                  MR_Word mercury__rbtree__LRR_98;

#line 701 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_109)) == (MR_mktag((MR_Integer) 1)));
#line 701 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 701 "rbtree.m"
                                    {
#line 701 "rbtree.m"
                                      mercury__rbtree__LRK_95 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 0));
#line 701 "rbtree.m"
                                      mercury__rbtree__LRV_96 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 1));
#line 701 "rbtree.m"
                                      mercury__rbtree__LRL_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 2)));
#line 701 "rbtree.m"
                                      mercury__rbtree__LRR_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 3)));
#line 702 "rbtree.m"
                                      {
#line 702 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeR_92;
#line 702 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_93;

#line 702 "rbtree.m"
                                        {
#line 702 "rbtree.m"
                                          mercury__rbtree__TreeL_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 702 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 0) = mercury__rbtree__LK_106;
#line 702 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 1) = mercury__rbtree__LV_107;
#line 702 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 2) = ((MR_Box) (mercury__rbtree__LL_108));
#line 702 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 3) = ((MR_Box) (mercury__rbtree__LRL_97));
#line 702 "rbtree.m"
                                        }
#line 703 "rbtree.m"
                                        {
#line 703 "rbtree.m"
                                          mercury__rbtree__TreeR_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 703 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 0) = mercury__rbtree__K0_20;
#line 703 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 1) = mercury__rbtree__V0_21;
#line 703 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 2) = ((MR_Box) (mercury__rbtree__LRR_98));
#line 703 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 703 "rbtree.m"
                                        }
#line 704 "rbtree.m"
                                        {
#line 704 "rbtree.m"
                                          MR_Word base;
#line 704 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 704 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 704 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_95;
#line 704 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_96;
#line 704 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_93));
#line 704 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_92));
#line 704 "rbtree.m"
                                        }
#line 702 "rbtree.m"
                                      }
#line 701 "rbtree.m"
                                    }
#line 701 "rbtree.m"
                                  else
#line 706 "rbtree.m"
                                    {
#line 706 "rbtree.m"
                                      MR_Word base;
#line 706 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 706 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 706 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 706 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 706 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
#line 706 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 706 "rbtree.m"
                                    }
#line 705 "rbtree.m"
                                }
#line 701 "rbtree.m"
                            }
#line 695 "rbtree.m"
                          }
#line 695 "rbtree.m"
                        else
#line 709 "rbtree.m"
                          {
#line 709 "rbtree.m"
                            MR_Word base;
#line 709 "rbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 709 "rbtree.m"
                            *mercury__rbtree__HeadVar__4_4 = base;
#line 709 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 709 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 709 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
#line 709 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
#line 709 "rbtree.m"
                          }
#line 690 "rbtree.m"
                      }
#line 666 "rbtree.m"
                    else
#line 667 "rbtree.m"
                      {
#line 667 "rbtree.m"
                        MR_Word mercury__rbtree__NewR_50;
#line 686 "rbtree.m"
                        MR_Box mercury__rbtree__RK_79;
#line 686 "rbtree.m"
                        MR_Box mercury__rbtree__RV_80;
#line 686 "rbtree.m"
                        MR_Word mercury__rbtree__RL_81;
#line 686 "rbtree.m"
                        MR_Word mercury__rbtree__RR_82;

#line 668 "rbtree.m"
                        {
#line 668 "rbtree.m"
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_23, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                        }
#line 673 "rbtree.m"
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
#line 673 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 673 "rbtree.m"
                          {
#line 673 "rbtree.m"
                            mercury__rbtree__RK_79 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
#line 673 "rbtree.m"
                            mercury__rbtree__RV_80 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
#line 673 "rbtree.m"
                            mercury__rbtree__RL_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
#line 673 "rbtree.m"
                            mercury__rbtree__RR_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
#line 680 "rbtree.m"
                            {
#line 680 "rbtree.m"
                              MR_Box mercury__rbtree__RLK_51;
#line 680 "rbtree.m"
                              MR_Box mercury__rbtree__RLV_52;
#line 680 "rbtree.m"
                              MR_Word mercury__rbtree__RLL_53;
#line 680 "rbtree.m"
                              MR_Word mercury__rbtree__RLR_54;

#line 676 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_81)) == (MR_mktag((MR_Integer) 1)));
#line 676 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 676 "rbtree.m"
                                {
#line 676 "rbtree.m"
                                  mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 0));
#line 676 "rbtree.m"
                                  mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 1));
#line 676 "rbtree.m"
                                  mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 2)));
#line 676 "rbtree.m"
                                  mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 3)));
#line 677 "rbtree.m"
                                  {
#line 677 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_73;
#line 677 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_74;

#line 677 "rbtree.m"
                                    {
#line 677 "rbtree.m"
                                      mercury__rbtree__TreeL_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 0) = mercury__rbtree__K0_20;
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 1) = mercury__rbtree__V0_21;
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 677 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
#line 677 "rbtree.m"
                                    }
#line 678 "rbtree.m"
                                    {
#line 678 "rbtree.m"
                                      mercury__rbtree__TreeR_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 678 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 0) = mercury__rbtree__RK_79;
#line 678 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 1) = mercury__rbtree__RV_80;
#line 678 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
#line 678 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 3) = ((MR_Box) (mercury__rbtree__RR_82));
#line 678 "rbtree.m"
                                    }
#line 679 "rbtree.m"
                                    {
#line 679 "rbtree.m"
                                      MR_Word base;
#line 679 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 679 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
#line 679 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
#line 679 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_74));
#line 679 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_73));
#line 679 "rbtree.m"
                                    }
#line 677 "rbtree.m"
                                  }
#line 676 "rbtree.m"
                                }
#line 676 "rbtree.m"
                              else
#line 683 "rbtree.m"
                                {
#line 680 "rbtree.m"
                                  MR_Box mercury__rbtree___RRK_55;
#line 680 "rbtree.m"
                                  MR_Box mercury__rbtree___RRV_56;
#line 680 "rbtree.m"
                                  MR_Word mercury__rbtree___RRL_57;
#line 680 "rbtree.m"
                                  MR_Word mercury__rbtree___RRR_58;

#line 680 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_82)) == (MR_mktag((MR_Integer) 1)));
#line 680 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 680 "rbtree.m"
                                    {
#line 680 "rbtree.m"
                                      mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 0));
#line 680 "rbtree.m"
                                      mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 1));
#line 680 "rbtree.m"
                                      mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 2)));
#line 680 "rbtree.m"
                                      mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 3)));
#line 681 "rbtree.m"
                                      {
#line 681 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_75;

#line 681 "rbtree.m"
                                        {
#line 681 "rbtree.m"
                                          mercury__rbtree__TreeL_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 681 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 0) = mercury__rbtree__K0_20;
#line 681 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 1) = mercury__rbtree__V0_21;
#line 681 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 681 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 3) = ((MR_Box) (mercury__rbtree__RL_81));
#line 681 "rbtree.m"
                                        }
#line 682 "rbtree.m"
                                        {
#line 682 "rbtree.m"
                                          MR_Word base;
#line 682 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 682 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 682 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_79;
#line 682 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_80;
#line 682 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_75));
#line 682 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_82));
#line 682 "rbtree.m"
                                        }
#line 681 "rbtree.m"
                                      }
#line 680 "rbtree.m"
                                    }
#line 680 "rbtree.m"
                                  else
#line 684 "rbtree.m"
                                    {
#line 684 "rbtree.m"
                                      MR_Word base;
#line 684 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 684 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 684 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 684 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 684 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 684 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 684 "rbtree.m"
                                    }
#line 683 "rbtree.m"
                                }
#line 680 "rbtree.m"
                            }
#line 673 "rbtree.m"
                          }
#line 673 "rbtree.m"
                        else
#line 687 "rbtree.m"
                          {
#line 687 "rbtree.m"
                            MR_Word base;
#line 687 "rbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 687 "rbtree.m"
                            *mercury__rbtree__HeadVar__4_4 = base;
#line 687 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 687 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 687 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
#line 687 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 687 "rbtree.m"
                          }
#line 667 "rbtree.m"
                      }
#line 642 "rbtree.m"
                }
#line 628 "rbtree.m"
            }
#line 609 "rbtree.m"
          else
#line 610 "rbtree.m"
            {
#line 610 "rbtree.m"
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 610 "rbtree.m"
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 610 "rbtree.m"
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 610 "rbtree.m"
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 610 "rbtree.m"
              MR_Word mercury__rbtree__Result_16;

#line 612 "rbtree.m"
              {
#line 612 "rbtree.m"
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
#line 617 "rbtree.m"
              if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 614 "rbtree.m"
                {
#line 614 "rbtree.m"
                  MR_Word mercury__rbtree__NewL_17;

#line 615 "rbtree.m"
                  {
#line 615 "rbtree.m"
                    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                  }
#line 616 "rbtree.m"
                  {
#line 616 "rbtree.m"
                    MR_Word base;
#line 616 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 616 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 616 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 616 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 616 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 616 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 616 "rbtree.m"
                  }
#line 614 "rbtree.m"
                }
#line 617 "rbtree.m"
              else
#line 617 "rbtree.m"
                if ((mercury__rbtree__Result_16 == (MR_Integer) 0))
#line 622 "rbtree.m"
                  {
#line 622 "rbtree.m"
                    MR_Word mercury__rbtree__NewL_19;

#line 623 "rbtree.m"
                    {
#line 623 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_19);
                    }
#line 624 "rbtree.m"
                    {
#line 624 "rbtree.m"
                      MR_Word base;
#line 624 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 624 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 624 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 624 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 624 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_19));
#line 624 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 624 "rbtree.m"
                    }
#line 622 "rbtree.m"
                  }
#line 617 "rbtree.m"
                else
#line 618 "rbtree.m"
                  {
#line 618 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_18;

#line 619 "rbtree.m"
                    {
#line 619 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
#line 620 "rbtree.m"
                    {
#line 620 "rbtree.m"
                      MR_Word base;
#line 620 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 620 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 620 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 620 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 620 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 620 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 620 "rbtree.m"
                    }
#line 618 "rbtree.m"
                  }
#line 610 "rbtree.m"
            }
#line 609 "rbtree.m"
      }
#line 609 "rbtree.m"
      break;
#line 609 "rbtree.m"
    }
#line 605 "rbtree.m"
}

#line 486 "rbtree.m"
static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
#line 486 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
#line 486 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 486 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 486 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 486 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 486 "rbtree.m"
{
#line 490 "rbtree.m"
  while (MR_TRUE)
#line 490 "rbtree.m"
    {
#line 490 "rbtree.m"
      /* tailcall optimized into a loop */
#line 490 "rbtree.m"
      {
#line 490 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 490 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "rbtree.m"
          {
#line 490 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 490 "rbtree.m"
            {
#line 490 "rbtree.m"
              MR_Word base;
#line 490 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 490 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 490 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 490 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 490 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 490 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 490 "rbtree.m"
            }
#line 490 "rbtree.m"
          }
#line 490 "rbtree.m"
        else
#line 490 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 506 "rbtree.m"
            {
#line 506 "rbtree.m"
              MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 506 "rbtree.m"
              MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 506 "rbtree.m"
              MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 506 "rbtree.m"
              MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 516 "rbtree.m"
              MR_Box mercury__rbtree__LK_26;
#line 516 "rbtree.m"
              MR_Box mercury__rbtree__LV_27;
#line 516 "rbtree.m"
              MR_Word mercury__rbtree__LL_28;
#line 516 "rbtree.m"
              MR_Word mercury__rbtree__LR_29;
#line 516 "rbtree.m"
              MR_Box mercury__rbtree__RK_30;
#line 516 "rbtree.m"
              MR_Box mercury__rbtree__RV_31;
#line 516 "rbtree.m"
              MR_Word mercury__rbtree__RL_32;
#line 516 "rbtree.m"
              MR_Word mercury__rbtree__RR_33;

#line 508 "rbtree.m"
              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
#line 508 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 508 "rbtree.m"
                {
#line 508 "rbtree.m"
                  mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
#line 508 "rbtree.m"
                  mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
#line 508 "rbtree.m"
                  mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
#line 508 "rbtree.m"
                  mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
#line 509 "rbtree.m"
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
#line 509 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 509 "rbtree.m"
                    {
#line 509 "rbtree.m"
                      mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
#line 509 "rbtree.m"
                      mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
#line 509 "rbtree.m"
                      mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
#line 509 "rbtree.m"
                      mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
#line 509 "rbtree.m"
                    }
#line 508 "rbtree.m"
                }
#line 516 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 512 "rbtree.m"
                {
#line 512 "rbtree.m"
                  MR_Word mercury__rbtree__L_34;
#line 512 "rbtree.m"
                  MR_Word mercury__rbtree__R_35;
#line 512 "rbtree.m"
                  MR_Word mercury__rbtree__Tree0_36;

#line 512 "rbtree.m"
                  {
#line 512 "rbtree.m"
                    mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 512 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
#line 512 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
#line 512 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
#line 512 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
#line 512 "rbtree.m"
                  }
#line 513 "rbtree.m"
                  {
#line 513 "rbtree.m"
                    mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 513 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
#line 513 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
#line 513 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
#line 513 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
#line 513 "rbtree.m"
                  }
#line 514 "rbtree.m"
                  {
#line 514 "rbtree.m"
                    mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
#line 514 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
#line 514 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
#line 514 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
#line 514 "rbtree.m"
                  }
#line 515 "rbtree.m"
                  /* direct tailcall eliminated */
#line 515 "rbtree.m"
                  {
#line 515 "rbtree.m"
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

#line 515 "rbtree.m"
                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 515 "rbtree.m"
                  }
#line 515 "rbtree.m"
                  continue;
#line 512 "rbtree.m"
                }
#line 516 "rbtree.m"
              else
#line 518 "rbtree.m"
                {
#line 518 "rbtree.m"
                  MR_Word mercury__rbtree__Result_37;

#line 518 "rbtree.m"
                  {
#line 518 "rbtree.m"
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                  }
#line 522 "rbtree.m"
                  if ((mercury__rbtree__Result_37 == (MR_Integer) 1))
#line 523 "rbtree.m"
                    {
#line 523 "rbtree.m"
                      MR_Word mercury__rbtree__NewL_38;
#line 545 "rbtree.m"
                      MR_Box mercury__rbtree__LK_62;
#line 545 "rbtree.m"
                      MR_Box mercury__rbtree__LV_63;
#line 545 "rbtree.m"
                      MR_Word mercury__rbtree__LL_64;
#line 545 "rbtree.m"
                      MR_Word mercury__rbtree__LR_65;

#line 524 "rbtree.m"
                      {
#line 524 "rbtree.m"
                        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                      }
#line 529 "rbtree.m"
                      mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
#line 529 "rbtree.m"
                      if (mercury__rbtree__succeeded)
#line 529 "rbtree.m"
                        {
#line 529 "rbtree.m"
                          mercury__rbtree__LK_62 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
#line 529 "rbtree.m"
                          mercury__rbtree__LV_63 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
#line 529 "rbtree.m"
                          mercury__rbtree__LL_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
#line 529 "rbtree.m"
                          mercury__rbtree__LR_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
#line 535 "rbtree.m"
                          {
#line 532 "rbtree.m"
                            MR_Box mercury__rbtree___LLK_39;
#line 532 "rbtree.m"
                            MR_Box mercury__rbtree___LLV_40;
#line 532 "rbtree.m"
                            MR_Word mercury__rbtree___LLL_41;
#line 532 "rbtree.m"
                            MR_Word mercury__rbtree___LLR_42;

#line 532 "rbtree.m"
                            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_64)) == (MR_mktag((MR_Integer) 1)));
#line 532 "rbtree.m"
                            if (mercury__rbtree__succeeded)
#line 532 "rbtree.m"
                              {
#line 532 "rbtree.m"
                                mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 0));
#line 532 "rbtree.m"
                                mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 1));
#line 532 "rbtree.m"
                                mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 2)));
#line 532 "rbtree.m"
                                mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 3)));
#line 533 "rbtree.m"
                                {
#line 533 "rbtree.m"
                                  MR_Word mercury__rbtree__TreeR_43;

#line 533 "rbtree.m"
                                  {
#line 533 "rbtree.m"
                                    mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
#line 533 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
#line 533 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_65));
#line 533 "rbtree.m"
                                    MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 533 "rbtree.m"
                                  }
#line 534 "rbtree.m"
                                  {
#line 534 "rbtree.m"
                                    MR_Word base;
#line 534 "rbtree.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 534 "rbtree.m"
                                    *mercury__rbtree__HeadVar__4_4 = base;
#line 534 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_62;
#line 534 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_63;
#line 534 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_64));
#line 534 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
#line 534 "rbtree.m"
                                  }
#line 533 "rbtree.m"
                                }
#line 532 "rbtree.m"
                              }
#line 532 "rbtree.m"
                            else
#line 539 "rbtree.m"
                              {
#line 539 "rbtree.m"
                                MR_Box mercury__rbtree__LRK_44;
#line 539 "rbtree.m"
                                MR_Box mercury__rbtree__LRV_45;
#line 539 "rbtree.m"
                                MR_Word mercury__rbtree__LRL_46;
#line 539 "rbtree.m"
                                MR_Word mercury__rbtree__LRR_47;

#line 535 "rbtree.m"
                                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_65)) == (MR_mktag((MR_Integer) 1)));
#line 535 "rbtree.m"
                                if (mercury__rbtree__succeeded)
#line 535 "rbtree.m"
                                  {
#line 535 "rbtree.m"
                                    mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 0));
#line 535 "rbtree.m"
                                    mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 1));
#line 535 "rbtree.m"
                                    mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 2)));
#line 535 "rbtree.m"
                                    mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 3)));
#line 536 "rbtree.m"
                                    {
#line 536 "rbtree.m"
                                      MR_Word mercury__rbtree__TreeL_48;
#line 536 "rbtree.m"
                                      MR_Word mercury__rbtree__TreeR_60;

#line 536 "rbtree.m"
                                      {
#line 536 "rbtree.m"
                                        mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 536 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_62;
#line 536 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_63;
#line 536 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_64));
#line 536 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
#line 536 "rbtree.m"
                                      }
#line 537 "rbtree.m"
                                      {
#line 537 "rbtree.m"
                                        mercury__rbtree__TreeR_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 537 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 0) = mercury__rbtree__K0_19;
#line 537 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 1) = mercury__rbtree__V0_20;
#line 537 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
#line 537 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 537 "rbtree.m"
                                      }
#line 538 "rbtree.m"
                                      {
#line 538 "rbtree.m"
                                        MR_Word base;
#line 538 "rbtree.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "rbtree.m"
                                        *mercury__rbtree__HeadVar__4_4 = base;
#line 538 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
#line 538 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
#line 538 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
#line 538 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_60));
#line 538 "rbtree.m"
                                      }
#line 536 "rbtree.m"
                                    }
#line 535 "rbtree.m"
                                  }
#line 535 "rbtree.m"
                                else
#line 543 "rbtree.m"
                                  {
#line 543 "rbtree.m"
                                    MR_Word base;
#line 543 "rbtree.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 543 "rbtree.m"
                                    *mercury__rbtree__HeadVar__4_4 = base;
#line 543 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 543 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 543 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 543 "rbtree.m"
                                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 543 "rbtree.m"
                                  }
#line 539 "rbtree.m"
                              }
#line 535 "rbtree.m"
                          }
#line 529 "rbtree.m"
                        }
#line 529 "rbtree.m"
                      else
#line 546 "rbtree.m"
                        {
#line 546 "rbtree.m"
                          MR_Word base;
#line 546 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 546 "rbtree.m"
                          *mercury__rbtree__HeadVar__4_4 = base;
#line 546 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 546 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 546 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 546 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 546 "rbtree.m"
                        }
#line 523 "rbtree.m"
                    }
#line 522 "rbtree.m"
                  else
#line 522 "rbtree.m"
                    if ((mercury__rbtree__Result_37 == (MR_Integer) 0))
#line 521 "rbtree.m"
                      {
#line 521 "rbtree.m"
                        MR_Word base;
#line 521 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 521 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 521 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K_2;
#line 521 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V_3;
#line 521 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 521 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 521 "rbtree.m"
                      }
#line 522 "rbtree.m"
                    else
#line 549 "rbtree.m"
                      {
#line 549 "rbtree.m"
                        MR_Word mercury__rbtree__NewR_50;
#line 571 "rbtree.m"
                        MR_Box mercury__rbtree__RK_76;
#line 571 "rbtree.m"
                        MR_Box mercury__rbtree__RV_77;
#line 571 "rbtree.m"
                        MR_Word mercury__rbtree__RL_78;
#line 571 "rbtree.m"
                        MR_Word mercury__rbtree__RR_79;

#line 550 "rbtree.m"
                        {
#line 550 "rbtree.m"
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                        }
#line 555 "rbtree.m"
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
#line 555 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 555 "rbtree.m"
                          {
#line 555 "rbtree.m"
                            mercury__rbtree__RK_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
#line 555 "rbtree.m"
                            mercury__rbtree__RV_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
#line 555 "rbtree.m"
                            mercury__rbtree__RL_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
#line 555 "rbtree.m"
                            mercury__rbtree__RR_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
#line 562 "rbtree.m"
                            {
#line 562 "rbtree.m"
                              MR_Box mercury__rbtree__RLK_51;
#line 562 "rbtree.m"
                              MR_Box mercury__rbtree__RLV_52;
#line 562 "rbtree.m"
                              MR_Word mercury__rbtree__RLL_53;
#line 562 "rbtree.m"
                              MR_Word mercury__rbtree__RLR_54;

#line 558 "rbtree.m"
                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_78)) == (MR_mktag((MR_Integer) 1)));
#line 558 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 558 "rbtree.m"
                                {
#line 558 "rbtree.m"
                                  mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 0));
#line 558 "rbtree.m"
                                  mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 1));
#line 558 "rbtree.m"
                                  mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 2)));
#line 558 "rbtree.m"
                                  mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 3)));
#line 559 "rbtree.m"
                                  {
#line 559 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeR_70;
#line 559 "rbtree.m"
                                    MR_Word mercury__rbtree__TreeL_71;

#line 559 "rbtree.m"
                                    {
#line 559 "rbtree.m"
                                      mercury__rbtree__TreeL_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 0) = mercury__rbtree__K0_19;
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 1) = mercury__rbtree__V0_20;
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 559 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
#line 559 "rbtree.m"
                                    }
#line 560 "rbtree.m"
                                    {
#line 560 "rbtree.m"
                                      mercury__rbtree__TreeR_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 560 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 0) = mercury__rbtree__RK_76;
#line 560 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 1) = mercury__rbtree__RV_77;
#line 560 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
#line 560 "rbtree.m"
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 3) = ((MR_Box) (mercury__rbtree__RR_79));
#line 560 "rbtree.m"
                                    }
#line 561 "rbtree.m"
                                    {
#line 561 "rbtree.m"
                                      MR_Word base;
#line 561 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 561 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 561 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
#line 561 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
#line 561 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_71));
#line 561 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_70));
#line 561 "rbtree.m"
                                    }
#line 559 "rbtree.m"
                                  }
#line 558 "rbtree.m"
                                }
#line 558 "rbtree.m"
                              else
#line 565 "rbtree.m"
                                {
#line 562 "rbtree.m"
                                  MR_Box mercury__rbtree___RRK_55;
#line 562 "rbtree.m"
                                  MR_Box mercury__rbtree___RRV_56;
#line 562 "rbtree.m"
                                  MR_Word mercury__rbtree___RRL_57;
#line 562 "rbtree.m"
                                  MR_Word mercury__rbtree___RRR_58;

#line 562 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_79)) == (MR_mktag((MR_Integer) 1)));
#line 562 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 562 "rbtree.m"
                                    {
#line 562 "rbtree.m"
                                      mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 0));
#line 562 "rbtree.m"
                                      mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 1));
#line 562 "rbtree.m"
                                      mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 2)));
#line 562 "rbtree.m"
                                      mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 3)));
#line 563 "rbtree.m"
                                      {
#line 563 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_72;

#line 563 "rbtree.m"
                                        {
#line 563 "rbtree.m"
                                          mercury__rbtree__TreeL_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 563 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 0) = mercury__rbtree__K0_19;
#line 563 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 1) = mercury__rbtree__V0_20;
#line 563 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 563 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 3) = ((MR_Box) (mercury__rbtree__RL_78));
#line 563 "rbtree.m"
                                        }
#line 564 "rbtree.m"
                                        {
#line 564 "rbtree.m"
                                          MR_Word base;
#line 564 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 564 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 564 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_76;
#line 564 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_77;
#line 564 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_72));
#line 564 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_79));
#line 564 "rbtree.m"
                                        }
#line 563 "rbtree.m"
                                      }
#line 562 "rbtree.m"
                                    }
#line 562 "rbtree.m"
                                  else
#line 569 "rbtree.m"
                                    {
#line 569 "rbtree.m"
                                      MR_Word base;
#line 569 "rbtree.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 569 "rbtree.m"
                                      *mercury__rbtree__HeadVar__4_4 = base;
#line 569 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 569 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 569 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 569 "rbtree.m"
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 569 "rbtree.m"
                                    }
#line 565 "rbtree.m"
                                }
#line 562 "rbtree.m"
                            }
#line 555 "rbtree.m"
                          }
#line 555 "rbtree.m"
                        else
#line 572 "rbtree.m"
                          {
#line 572 "rbtree.m"
                            MR_Word base;
#line 572 "rbtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 572 "rbtree.m"
                            *mercury__rbtree__HeadVar__4_4 = base;
#line 572 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 572 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 572 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 572 "rbtree.m"
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
#line 572 "rbtree.m"
                          }
#line 549 "rbtree.m"
                      }
#line 518 "rbtree.m"
                }
#line 506 "rbtree.m"
            }
#line 490 "rbtree.m"
          else
#line 491 "rbtree.m"
            {
#line 491 "rbtree.m"
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 491 "rbtree.m"
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 491 "rbtree.m"
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 491 "rbtree.m"
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 491 "rbtree.m"
              MR_Word mercury__rbtree__Result_16;

#line 493 "rbtree.m"
              {
#line 493 "rbtree.m"
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
#line 497 "rbtree.m"
              if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 498 "rbtree.m"
                {
#line 498 "rbtree.m"
                  MR_Word mercury__rbtree__NewL_17;

#line 499 "rbtree.m"
                  {
#line 499 "rbtree.m"
                    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                  }
#line 500 "rbtree.m"
                  {
#line 500 "rbtree.m"
                    MR_Word base;
#line 500 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 500 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 500 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 500 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 500 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 500 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 500 "rbtree.m"
                  }
#line 498 "rbtree.m"
                }
#line 497 "rbtree.m"
              else
#line 497 "rbtree.m"
                if ((mercury__rbtree__Result_16 == (MR_Integer) 0))
#line 496 "rbtree.m"
                  {
#line 496 "rbtree.m"
                    MR_Word base;
#line 496 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 496 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 496 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 496 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 496 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 496 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 496 "rbtree.m"
                  }
#line 497 "rbtree.m"
                else
#line 502 "rbtree.m"
                  {
#line 502 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_18;

#line 503 "rbtree.m"
                    {
#line 503 "rbtree.m"
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
#line 504 "rbtree.m"
                    {
#line 504 "rbtree.m"
                      MR_Word base;
#line 504 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 504 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 504 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 504 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 504 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 504 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 504 "rbtree.m"
                    }
#line 502 "rbtree.m"
                  }
#line 491 "rbtree.m"
            }
#line 490 "rbtree.m"
      }
#line 490 "rbtree.m"
      break;
#line 490 "rbtree.m"
    }
#line 486 "rbtree.m"
}

#line 294 "rbtree.m"
static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
#line 294 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
#line 294 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 294 "rbtree.m"
  MR_Box mercury__rbtree__K_2,
#line 294 "rbtree.m"
  MR_Box mercury__rbtree__V_3,
#line 294 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 294 "rbtree.m"
{
#line 299 "rbtree.m"
  while (MR_TRUE)
#line 299 "rbtree.m"
    {
#line 299 "rbtree.m"
      /* tailcall optimized into a loop */
#line 299 "rbtree.m"
      {
#line 299 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 299 "rbtree.m"
        if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "rbtree.m"
          {
#line 299 "rbtree.m"
            MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "rbtree.m"
            MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 299 "rbtree.m"
            {
#line 299 "rbtree.m"
              MR_Word base;
#line 299 "rbtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 299 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = base;
#line 299 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
#line 299 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
#line 299 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 299 "rbtree.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 299 "rbtree.m"
            }
#line 299 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 299 "rbtree.m"
          }
#line 299 "rbtree.m"
        else
#line 299 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 317 "rbtree.m"
            {
#line 317 "rbtree.m"
              MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 317 "rbtree.m"
              MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 317 "rbtree.m"
              MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 317 "rbtree.m"
              MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 329 "rbtree.m"
              MR_Box mercury__rbtree__LK_26;
#line 329 "rbtree.m"
              MR_Box mercury__rbtree__LV_27;
#line 329 "rbtree.m"
              MR_Word mercury__rbtree__LL_28;
#line 329 "rbtree.m"
              MR_Word mercury__rbtree__LR_29;
#line 329 "rbtree.m"
              MR_Box mercury__rbtree__RK_30;
#line 329 "rbtree.m"
              MR_Box mercury__rbtree__RV_31;
#line 329 "rbtree.m"
              MR_Word mercury__rbtree__RL_32;
#line 329 "rbtree.m"
              MR_Word mercury__rbtree__RR_33;

#line 319 "rbtree.m"
              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
#line 319 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 319 "rbtree.m"
                {
#line 319 "rbtree.m"
                  mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
#line 319 "rbtree.m"
                  mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
#line 319 "rbtree.m"
                  mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
#line 319 "rbtree.m"
                  mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
#line 320 "rbtree.m"
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
#line 320 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 320 "rbtree.m"
                    {
#line 320 "rbtree.m"
                      mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
#line 320 "rbtree.m"
                      mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
#line 320 "rbtree.m"
                      mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
#line 320 "rbtree.m"
                      mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
#line 320 "rbtree.m"
                    }
#line 319 "rbtree.m"
                }
#line 329 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 325 "rbtree.m"
                {
#line 325 "rbtree.m"
                  MR_Word mercury__rbtree__L_34;
#line 325 "rbtree.m"
                  MR_Word mercury__rbtree__R_35;
#line 325 "rbtree.m"
                  MR_Word mercury__rbtree__Tree0_36;

#line 325 "rbtree.m"
                  {
#line 325 "rbtree.m"
                    mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 325 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
#line 325 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
#line 325 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
#line 325 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
#line 325 "rbtree.m"
                  }
#line 326 "rbtree.m"
                  {
#line 326 "rbtree.m"
                    mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 326 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
#line 326 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
#line 326 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
#line 326 "rbtree.m"
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
#line 326 "rbtree.m"
                  }
#line 327 "rbtree.m"
                  {
#line 327 "rbtree.m"
                    mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 327 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
#line 327 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
#line 327 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
#line 327 "rbtree.m"
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
#line 327 "rbtree.m"
                  }
#line 328 "rbtree.m"
                  /* direct tailcall eliminated */
#line 328 "rbtree.m"
                  {
#line 328 "rbtree.m"
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

#line 328 "rbtree.m"
                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 328 "rbtree.m"
                  }
#line 328 "rbtree.m"
                  continue;
#line 325 "rbtree.m"
                }
#line 329 "rbtree.m"
              else
#line 331 "rbtree.m"
                {
#line 331 "rbtree.m"
                  MR_Word mercury__rbtree__Result_37;

#line 331 "rbtree.m"
                  {
#line 331 "rbtree.m"
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                  }
#line 355 "rbtree.m"
                  if ((mercury__rbtree__Result_37 == (MR_Integer) 1))
#line 333 "rbtree.m"
                    {
#line 333 "rbtree.m"
                      MR_Word mercury__rbtree__NewL_38;
#line 352 "rbtree.m"
                      MR_Box mercury__rbtree__LK_60;
#line 352 "rbtree.m"
                      MR_Box mercury__rbtree__LV_61;
#line 352 "rbtree.m"
                      MR_Word mercury__rbtree__LL_62;
#line 352 "rbtree.m"
                      MR_Word mercury__rbtree__LR_63;

#line 334 "rbtree.m"
                      {
#line 334 "rbtree.m"
                        mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                      }
#line 333 "rbtree.m"
                      if (mercury__rbtree__succeeded)
#line 333 "rbtree.m"
                        {
#line 339 "rbtree.m"
                          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
#line 339 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 339 "rbtree.m"
                            {
#line 339 "rbtree.m"
                              mercury__rbtree__LK_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
#line 339 "rbtree.m"
                              mercury__rbtree__LV_61 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
#line 339 "rbtree.m"
                              mercury__rbtree__LL_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
#line 339 "rbtree.m"
                              mercury__rbtree__LR_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
#line 345 "rbtree.m"
                              {
#line 342 "rbtree.m"
                                MR_Box mercury__rbtree___LLK_39;
#line 342 "rbtree.m"
                                MR_Box mercury__rbtree___LLV_40;
#line 342 "rbtree.m"
                                MR_Word mercury__rbtree___LLL_41;
#line 342 "rbtree.m"
                                MR_Word mercury__rbtree___LLR_42;

#line 342 "rbtree.m"
                                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_62)) == (MR_mktag((MR_Integer) 1)));
#line 342 "rbtree.m"
                                if (mercury__rbtree__succeeded)
#line 342 "rbtree.m"
                                  {
#line 342 "rbtree.m"
                                    mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 0));
#line 342 "rbtree.m"
                                    mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 1));
#line 342 "rbtree.m"
                                    mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 2)));
#line 342 "rbtree.m"
                                    mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 3)));
#line 343 "rbtree.m"
                                    {
#line 343 "rbtree.m"
                                      MR_Word mercury__rbtree__TreeR_43;

#line 343 "rbtree.m"
                                      {
#line 343 "rbtree.m"
                                        mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 343 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
#line 343 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
#line 343 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_63));
#line 343 "rbtree.m"
                                        MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 343 "rbtree.m"
                                      }
#line 344 "rbtree.m"
                                      {
#line 344 "rbtree.m"
                                        MR_Word base;
#line 344 "rbtree.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 344 "rbtree.m"
                                        *mercury__rbtree__HeadVar__4_4 = base;
#line 344 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_60;
#line 344 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_61;
#line 344 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_62));
#line 344 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
#line 344 "rbtree.m"
                                      }
#line 343 "rbtree.m"
                                    }
#line 342 "rbtree.m"
                                  }
#line 342 "rbtree.m"
                                else
#line 349 "rbtree.m"
                                  {
#line 349 "rbtree.m"
                                    MR_Box mercury__rbtree__LRK_44;
#line 349 "rbtree.m"
                                    MR_Box mercury__rbtree__LRV_45;
#line 349 "rbtree.m"
                                    MR_Word mercury__rbtree__LRL_46;
#line 349 "rbtree.m"
                                    MR_Word mercury__rbtree__LRR_47;

#line 345 "rbtree.m"
                                    mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_63)) == (MR_mktag((MR_Integer) 1)));
#line 345 "rbtree.m"
                                    if (mercury__rbtree__succeeded)
#line 345 "rbtree.m"
                                      {
#line 345 "rbtree.m"
                                        mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 0));
#line 345 "rbtree.m"
                                        mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 1));
#line 345 "rbtree.m"
                                        mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 2)));
#line 345 "rbtree.m"
                                        mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 3)));
#line 346 "rbtree.m"
                                        {
#line 346 "rbtree.m"
                                          MR_Word mercury__rbtree__TreeL_48;
#line 346 "rbtree.m"
                                          MR_Word mercury__rbtree__TreeR_58;

#line 346 "rbtree.m"
                                          {
#line 346 "rbtree.m"
                                            mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 346 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_60;
#line 346 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_61;
#line 346 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_62));
#line 346 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
#line 346 "rbtree.m"
                                          }
#line 347 "rbtree.m"
                                          {
#line 347 "rbtree.m"
                                            mercury__rbtree__TreeR_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 347 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 0) = mercury__rbtree__K0_19;
#line 347 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 1) = mercury__rbtree__V0_20;
#line 347 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
#line 347 "rbtree.m"
                                            MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 347 "rbtree.m"
                                          }
#line 348 "rbtree.m"
                                          {
#line 348 "rbtree.m"
                                            MR_Word base;
#line 348 "rbtree.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "rbtree.m"
                                            *mercury__rbtree__HeadVar__4_4 = base;
#line 348 "rbtree.m"
                                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
#line 348 "rbtree.m"
                                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
#line 348 "rbtree.m"
                                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
#line 348 "rbtree.m"
                                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_58));
#line 348 "rbtree.m"
                                          }
#line 346 "rbtree.m"
                                        }
#line 345 "rbtree.m"
                                      }
#line 345 "rbtree.m"
                                    else
#line 350 "rbtree.m"
                                      {
#line 350 "rbtree.m"
                                        MR_Word base;
#line 350 "rbtree.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 350 "rbtree.m"
                                        *mercury__rbtree__HeadVar__4_4 = base;
#line 350 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 350 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 350 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 350 "rbtree.m"
                                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 350 "rbtree.m"
                                      }
#line 349 "rbtree.m"
                                  }
#line 345 "rbtree.m"
                              }
#line 339 "rbtree.m"
                            }
#line 339 "rbtree.m"
                          else
#line 353 "rbtree.m"
                            {
#line 353 "rbtree.m"
                              MR_Word base;
#line 353 "rbtree.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rbtree.m"
                              *mercury__rbtree__HeadVar__4_4 = base;
#line 353 "rbtree.m"
                              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 353 "rbtree.m"
                              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 353 "rbtree.m"
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
#line 353 "rbtree.m"
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
#line 353 "rbtree.m"
                            }
#line 352 "rbtree.m"
                          mercury__rbtree__succeeded = MR_TRUE;
#line 333 "rbtree.m"
                        }
#line 333 "rbtree.m"
                    }
#line 355 "rbtree.m"
                  else
#line 355 "rbtree.m"
                    if ((mercury__rbtree__Result_37 == (MR_Integer) 2))
#line 356 "rbtree.m"
                      {
#line 356 "rbtree.m"
                        MR_Word mercury__rbtree__NewR_49;
#line 375 "rbtree.m"
                        MR_Box mercury__rbtree__RK_74;
#line 375 "rbtree.m"
                        MR_Box mercury__rbtree__RV_75;
#line 375 "rbtree.m"
                        MR_Word mercury__rbtree__RL_76;
#line 375 "rbtree.m"
                        MR_Word mercury__rbtree__RR_77;

#line 357 "rbtree.m"
                        {
#line 357 "rbtree.m"
                          mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_49);
                        }
#line 356 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 356 "rbtree.m"
                          {
#line 362 "rbtree.m"
                            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_49)) == (MR_mktag((MR_Integer) 1)));
#line 362 "rbtree.m"
                            if (mercury__rbtree__succeeded)
#line 362 "rbtree.m"
                              {
#line 362 "rbtree.m"
                                mercury__rbtree__RK_74 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 0));
#line 362 "rbtree.m"
                                mercury__rbtree__RV_75 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 1));
#line 362 "rbtree.m"
                                mercury__rbtree__RL_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 2)));
#line 362 "rbtree.m"
                                mercury__rbtree__RR_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 3)));
#line 369 "rbtree.m"
                                {
#line 369 "rbtree.m"
                                  MR_Box mercury__rbtree__RLK_50;
#line 369 "rbtree.m"
                                  MR_Box mercury__rbtree__RLV_51;
#line 369 "rbtree.m"
                                  MR_Word mercury__rbtree__RLL_52;
#line 369 "rbtree.m"
                                  MR_Word mercury__rbtree__RLR_53;

#line 365 "rbtree.m"
                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_76)) == (MR_mktag((MR_Integer) 1)));
#line 365 "rbtree.m"
                                  if (mercury__rbtree__succeeded)
#line 365 "rbtree.m"
                                    {
#line 365 "rbtree.m"
                                      mercury__rbtree__RLK_50 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 0));
#line 365 "rbtree.m"
                                      mercury__rbtree__RLV_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 1));
#line 365 "rbtree.m"
                                      mercury__rbtree__RLL_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 2)));
#line 365 "rbtree.m"
                                      mercury__rbtree__RLR_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 3)));
#line 366 "rbtree.m"
                                      {
#line 366 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeR_68;
#line 366 "rbtree.m"
                                        MR_Word mercury__rbtree__TreeL_69;

#line 366 "rbtree.m"
                                        {
#line 366 "rbtree.m"
                                          mercury__rbtree__TreeL_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 0) = mercury__rbtree__K0_19;
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 1) = mercury__rbtree__V0_20;
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 366 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 3) = ((MR_Box) (mercury__rbtree__RLL_52));
#line 366 "rbtree.m"
                                        }
#line 367 "rbtree.m"
                                        {
#line 367 "rbtree.m"
                                          mercury__rbtree__TreeR_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 367 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 0) = mercury__rbtree__RK_74;
#line 367 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 1) = mercury__rbtree__RV_75;
#line 367 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 2) = ((MR_Box) (mercury__rbtree__RLR_53));
#line 367 "rbtree.m"
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 3) = ((MR_Box) (mercury__rbtree__RR_77));
#line 367 "rbtree.m"
                                        }
#line 368 "rbtree.m"
                                        {
#line 368 "rbtree.m"
                                          MR_Word base;
#line 368 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 368 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 368 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_50;
#line 368 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_51;
#line 368 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_69));
#line 368 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_68));
#line 368 "rbtree.m"
                                        }
#line 366 "rbtree.m"
                                      }
#line 365 "rbtree.m"
                                    }
#line 365 "rbtree.m"
                                  else
#line 372 "rbtree.m"
                                    {
#line 369 "rbtree.m"
                                      MR_Box mercury__rbtree___RRK_54;
#line 369 "rbtree.m"
                                      MR_Box mercury__rbtree___RRV_55;
#line 369 "rbtree.m"
                                      MR_Word mercury__rbtree___RRL_56;
#line 369 "rbtree.m"
                                      MR_Word mercury__rbtree___RRR_57;

#line 369 "rbtree.m"
                                      mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_77)) == (MR_mktag((MR_Integer) 1)));
#line 369 "rbtree.m"
                                      if (mercury__rbtree__succeeded)
#line 369 "rbtree.m"
                                        {
#line 369 "rbtree.m"
                                          mercury__rbtree___RRK_54 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 0));
#line 369 "rbtree.m"
                                          mercury__rbtree___RRV_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 1));
#line 369 "rbtree.m"
                                          mercury__rbtree___RRL_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 2)));
#line 369 "rbtree.m"
                                          mercury__rbtree___RRR_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 3)));
#line 370 "rbtree.m"
                                          {
#line 370 "rbtree.m"
                                            MR_Word mercury__rbtree__TreeL_70;

#line 370 "rbtree.m"
                                            {
#line 370 "rbtree.m"
                                              mercury__rbtree__TreeL_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 370 "rbtree.m"
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 0) = mercury__rbtree__K0_19;
#line 370 "rbtree.m"
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 1) = mercury__rbtree__V0_20;
#line 370 "rbtree.m"
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 370 "rbtree.m"
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 3) = ((MR_Box) (mercury__rbtree__RL_76));
#line 370 "rbtree.m"
                                            }
#line 371 "rbtree.m"
                                            {
#line 371 "rbtree.m"
                                              MR_Word base;
#line 371 "rbtree.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "rbtree.m"
                                              *mercury__rbtree__HeadVar__4_4 = base;
#line 371 "rbtree.m"
                                              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_74;
#line 371 "rbtree.m"
                                              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_75;
#line 371 "rbtree.m"
                                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_70));
#line 371 "rbtree.m"
                                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_77));
#line 371 "rbtree.m"
                                            }
#line 370 "rbtree.m"
                                          }
#line 369 "rbtree.m"
                                        }
#line 369 "rbtree.m"
                                      else
#line 373 "rbtree.m"
                                        {
#line 373 "rbtree.m"
                                          MR_Word base;
#line 373 "rbtree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 373 "rbtree.m"
                                          *mercury__rbtree__HeadVar__4_4 = base;
#line 373 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 373 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 373 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 373 "rbtree.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
#line 373 "rbtree.m"
                                        }
#line 372 "rbtree.m"
                                    }
#line 369 "rbtree.m"
                                }
#line 362 "rbtree.m"
                              }
#line 362 "rbtree.m"
                            else
#line 376 "rbtree.m"
                              {
#line 376 "rbtree.m"
                                MR_Word base;
#line 376 "rbtree.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 376 "rbtree.m"
                                *mercury__rbtree__HeadVar__4_4 = base;
#line 376 "rbtree.m"
                                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
#line 376 "rbtree.m"
                                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
#line 376 "rbtree.m"
                                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
#line 376 "rbtree.m"
                                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
#line 376 "rbtree.m"
                              }
#line 375 "rbtree.m"
                            mercury__rbtree__succeeded = MR_TRUE;
#line 356 "rbtree.m"
                          }
#line 356 "rbtree.m"
                      }
#line 355 "rbtree.m"
                    else
#line 355 "rbtree.m"
                      mercury__rbtree__succeeded = MR_FALSE;
#line 331 "rbtree.m"
                }
#line 317 "rbtree.m"
            }
#line 299 "rbtree.m"
          else
#line 300 "rbtree.m"
            {
#line 300 "rbtree.m"
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 300 "rbtree.m"
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 300 "rbtree.m"
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 300 "rbtree.m"
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 300 "rbtree.m"
              MR_Word mercury__rbtree__Result_16;

#line 302 "rbtree.m"
              {
#line 302 "rbtree.m"
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
#line 307 "rbtree.m"
              if ((mercury__rbtree__Result_16 == (MR_Integer) 1))
#line 304 "rbtree.m"
                {
#line 304 "rbtree.m"
                  MR_Word mercury__rbtree__NewL_17;

#line 305 "rbtree.m"
                  {
#line 305 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                  }
#line 304 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 304 "rbtree.m"
                    {
#line 306 "rbtree.m"
                      {
#line 306 "rbtree.m"
                        MR_Word base;
#line 306 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 306 "rbtree.m"
                        *mercury__rbtree__HeadVar__4_4 = base;
#line 306 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 306 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 306 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 306 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
#line 306 "rbtree.m"
                      }
#line 306 "rbtree.m"
                      mercury__rbtree__succeeded = MR_TRUE;
#line 304 "rbtree.m"
                    }
#line 304 "rbtree.m"
                }
#line 307 "rbtree.m"
              else
#line 307 "rbtree.m"
                if ((mercury__rbtree__Result_16 == (MR_Integer) 2))
#line 308 "rbtree.m"
                  {
#line 308 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_18;

#line 309 "rbtree.m"
                    {
#line 309 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
#line 308 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 308 "rbtree.m"
                      {
#line 310 "rbtree.m"
                        {
#line 310 "rbtree.m"
                          MR_Word base;
#line 310 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 310 "rbtree.m"
                          *mercury__rbtree__HeadVar__4_4 = base;
#line 310 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
#line 310 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
#line 310 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
#line 310 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 310 "rbtree.m"
                        }
#line 310 "rbtree.m"
                        mercury__rbtree__succeeded = MR_TRUE;
#line 308 "rbtree.m"
                      }
#line 308 "rbtree.m"
                  }
#line 307 "rbtree.m"
                else
#line 307 "rbtree.m"
                  mercury__rbtree__succeeded = MR_FALSE;
#line 300 "rbtree.m"
            }
#line 299 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 299 "rbtree.m"
      }
#line 299 "rbtree.m"
      break;
#line 299 "rbtree.m"
    }
#line 294 "rbtree.m"
}

#line 248 "rbtree.m"
void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0(
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_60,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_61,
#line 248 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__1_1,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3)
#line 248 "rbtree.m"
{
#line 248 "rbtree.m"
  while (MR_TRUE)
#line 248 "rbtree.m"
    {
#line 248 "rbtree.m"
      /* tailcall optimized into a loop */
#line 248 "rbtree.m"
      {
#line 248 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 248 "rbtree.m"
        MR_Integer mercury__rbtree__CastX_58 = (MR_Integer) mercury__rbtree__HeadVar__2_2;
#line 248 "rbtree.m"
        MR_Integer mercury__rbtree__CastY_59 = (MR_Integer) mercury__rbtree__HeadVar__3_3;

#line 248 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__CastX_58 == mercury__rbtree__CastY_59);
#line 248 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 4166 "rbtree.c"
          *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "rbtree.m"
        else
#line 248 "rbtree.m"
          if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "rbtree.m"
            if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "rbtree.m"
              *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "rbtree.m"
            else
#line 248 "rbtree.m"
              if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4180 "rbtree.c"
                *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "rbtree.m"
              else
#line 4184 "rbtree.c"
                *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "rbtree.m"
          else
#line 248 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 248 "rbtree.m"
              {
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_72_72 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_73_73 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

#line 248 "rbtree.m"
                if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4203 "rbtree.c"
                  *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "rbtree.m"
                else
#line 248 "rbtree.m"
                  if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 248 "rbtree.m"
                    {
#line 248 "rbtree.m"
                      MR_Box mercury__rbtree__V_51_51 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 248 "rbtree.m"
                      MR_Box mercury__rbtree__V_52_52 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_55_55;

#line 248 "rbtree.m"
                      {
#line 248 "rbtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_55_55, mercury__rbtree__V_73_73, mercury__rbtree__V_51_51);
                      }
#line 4227 "rbtree.c"
                      mercury__rbtree__succeeded = (mercury__rbtree__V_55_55 == (MR_Integer) 0);
#line 248 "rbtree.m"
                      mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                      if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                        *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_55_55;
#line 248 "rbtree.m"
                      else
#line 248 "rbtree.m"
                        {
#line 248 "rbtree.m"
                          MR_Word mercury__rbtree__V_56_56;

#line 248 "rbtree.m"
                          {
#line 248 "rbtree.m"
                            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_56_56, mercury__rbtree__V_72_72, mercury__rbtree__V_52_52);
                          }
#line 4247 "rbtree.c"
                          mercury__rbtree__succeeded = (mercury__rbtree__V_56_56 == (MR_Integer) 0);
#line 248 "rbtree.m"
                          mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_56_56;
#line 248 "rbtree.m"
                          else
#line 248 "rbtree.m"
                            {
#line 248 "rbtree.m"
                              MR_Word mercury__rbtree__V_57_57;

#line 248 "rbtree.m"
                              {
#line 248 "rbtree.m"
                                mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_57_57, mercury__rbtree__V_71_71, mercury__rbtree__V_53_53);
                              }
#line 4267 "rbtree.c"
                              mercury__rbtree__succeeded = (mercury__rbtree__V_57_57 == (MR_Integer) 0);
#line 248 "rbtree.m"
                              mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                                *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_57_57;
#line 248 "rbtree.m"
                              else
#line 248 "rbtree.m"
                                {
#line 248 "rbtree.m"
                                  /* direct tailcall eliminated */
#line 248 "rbtree.m"
                                  {
#line 248 "rbtree.m"
                                    MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_70_70;
#line 248 "rbtree.m"
                                    MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_54_54;

#line 248 "rbtree.m"
                                    mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
#line 248 "rbtree.m"
                                    mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 248 "rbtree.m"
                                  }
#line 248 "rbtree.m"
                                  continue;
#line 248 "rbtree.m"
                                }
#line 248 "rbtree.m"
                            }
#line 248 "rbtree.m"
                        }
#line 248 "rbtree.m"
                    }
#line 248 "rbtree.m"
                  else
#line 4306 "rbtree.c"
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "rbtree.m"
              }
#line 248 "rbtree.m"
            else
#line 248 "rbtree.m"
              {
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_76_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

#line 248 "rbtree.m"
                if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4325 "rbtree.c"
                  *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "rbtree.m"
                else
#line 248 "rbtree.m"
                  if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4331 "rbtree.c"
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "rbtree.m"
                  else
#line 248 "rbtree.m"
                    {
#line 248 "rbtree.m"
                      MR_Box mercury__rbtree__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 248 "rbtree.m"
                      MR_Box mercury__rbtree__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 248 "rbtree.m"
                      MR_Word mercury__rbtree__V_24_24;

#line 248 "rbtree.m"
                      {
#line 248 "rbtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_24_24, mercury__rbtree__V_77_77, mercury__rbtree__V_20_20);
                      }
#line 4353 "rbtree.c"
                      mercury__rbtree__succeeded = (mercury__rbtree__V_24_24 == (MR_Integer) 0);
#line 248 "rbtree.m"
                      mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                      if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                        *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_24_24;
#line 248 "rbtree.m"
                      else
#line 248 "rbtree.m"
                        {
#line 248 "rbtree.m"
                          MR_Word mercury__rbtree__V_25_25;

#line 248 "rbtree.m"
                          {
#line 248 "rbtree.m"
                            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_25_25, mercury__rbtree__V_76_76, mercury__rbtree__V_21_21);
                          }
#line 4373 "rbtree.c"
                          mercury__rbtree__succeeded = (mercury__rbtree__V_25_25 == (MR_Integer) 0);
#line 248 "rbtree.m"
                          mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                          if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_25_25;
#line 248 "rbtree.m"
                          else
#line 248 "rbtree.m"
                            {
#line 248 "rbtree.m"
                              MR_Word mercury__rbtree__V_26_26;

#line 248 "rbtree.m"
                              {
#line 248 "rbtree.m"
                                mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_26_26, mercury__rbtree__V_75_75, mercury__rbtree__V_22_22);
                              }
#line 4393 "rbtree.c"
                              mercury__rbtree__succeeded = (mercury__rbtree__V_26_26 == (MR_Integer) 0);
#line 248 "rbtree.m"
                              mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
#line 248 "rbtree.m"
                              if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                                *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_26_26;
#line 248 "rbtree.m"
                              else
#line 248 "rbtree.m"
                                {
#line 248 "rbtree.m"
                                  /* direct tailcall eliminated */
#line 248 "rbtree.m"
                                  {
#line 248 "rbtree.m"
                                    MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_74_74;
#line 248 "rbtree.m"
                                    MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_23_23;

#line 248 "rbtree.m"
                                    mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
#line 248 "rbtree.m"
                                    mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 248 "rbtree.m"
                                  }
#line 248 "rbtree.m"
                                  continue;
#line 248 "rbtree.m"
                                }
#line 248 "rbtree.m"
                            }
#line 248 "rbtree.m"
                        }
#line 248 "rbtree.m"
                    }
#line 248 "rbtree.m"
              }
#line 248 "rbtree.m"
      }
#line 248 "rbtree.m"
      break;
#line 248 "rbtree.m"
    }
#line 248 "rbtree.m"
}

#line 248 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0(
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_23,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_24,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 248 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2)
#line 248 "rbtree.m"
{
#line 248 "rbtree.m"
  while (MR_TRUE)
#line 248 "rbtree.m"
    {
#line 248 "rbtree.m"
      /* tailcall optimized into a loop */
#line 248 "rbtree.m"
      {
#line 248 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 248 "rbtree.m"
        MR_Integer mercury__rbtree__CastX_21 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
#line 248 "rbtree.m"
        MR_Integer mercury__rbtree__CastY_22 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

#line 248 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__CastX_21 == mercury__rbtree__CastY_22);
#line 248 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
          mercury__rbtree__succeeded = MR_TRUE;
#line 248 "rbtree.m"
        else
#line 248 "rbtree.m"
          if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "rbtree.m"
            {
#line 248 "rbtree.m"
              MR_Integer mercury__rbtree__CastX_3 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
#line 248 "rbtree.m"
              MR_Integer mercury__rbtree__CastY_4 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

#line 248 "rbtree.m"
              mercury__rbtree__succeeded = (mercury__rbtree__CastY_4 == mercury__rbtree__CastX_3);
#line 248 "rbtree.m"
            }
#line 248 "rbtree.m"
          else
#line 248 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 248 "rbtree.m"
              {
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_14_14 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_17_17;
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_18_18;
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_19_19;
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_20_20;

#line 248 "rbtree.m"
                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 248 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                  {
#line 248 "rbtree.m"
                    mercury__rbtree__V_17_17 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 248 "rbtree.m"
                    mercury__rbtree__V_18_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 248 "rbtree.m"
                    mercury__rbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "rbtree.m"
                    mercury__rbtree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 4527 "rbtree.c"
                    {
#line 4529 "rbtree.c"
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_13_13, mercury__rbtree__V_17_17);
                    }
#line 248 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                      {
#line 4536 "rbtree.c"
                        {
#line 4538 "rbtree.c"
                          mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_14_14, mercury__rbtree__V_18_18);
                        }
#line 248 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                          {
#line 4545 "rbtree.c"
                            {
#line 4547 "rbtree.c"
                              mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_15_15, mercury__rbtree__V_19_19);
                            }
#line 248 "rbtree.m"
                            if (mercury__rbtree__succeeded)
#line 4552 "rbtree.c"
                              {
#line 4554 "rbtree.c"
                                /* direct tailcall eliminated */
#line 4556 "rbtree.c"
                                {
#line 4558 "rbtree.c"
                                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_16_16;
#line 4560 "rbtree.c"
                                  MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_20_20;

#line 4563 "rbtree.c"
                                  mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 4565 "rbtree.c"
                                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 4567 "rbtree.c"
                                }
#line 4569 "rbtree.c"
                                continue;
#line 4571 "rbtree.c"
                              }
#line 248 "rbtree.m"
                          }
#line 248 "rbtree.m"
                      }
#line 248 "rbtree.m"
                  }
#line 248 "rbtree.m"
              }
#line 248 "rbtree.m"
            else
#line 248 "rbtree.m"
              {
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_9_9;
#line 248 "rbtree.m"
                MR_Box mercury__rbtree__V_10_10;
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_11_11;
#line 248 "rbtree.m"
                MR_Word mercury__rbtree__V_12_12;

#line 248 "rbtree.m"
                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                  {
#line 248 "rbtree.m"
                    mercury__rbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 248 "rbtree.m"
                    mercury__rbtree__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 248 "rbtree.m"
                    mercury__rbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "rbtree.m"
                    mercury__rbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 4616 "rbtree.c"
                    {
#line 4618 "rbtree.c"
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_5_5, mercury__rbtree__V_9_9);
                    }
#line 248 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                      {
#line 4625 "rbtree.c"
                        {
#line 4627 "rbtree.c"
                          mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_6_6, mercury__rbtree__V_10_10);
                        }
#line 248 "rbtree.m"
                        if (mercury__rbtree__succeeded)
#line 248 "rbtree.m"
                          {
#line 4634 "rbtree.c"
                            {
#line 4636 "rbtree.c"
                              mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_7_7, mercury__rbtree__V_11_11);
                            }
#line 248 "rbtree.m"
                            if (mercury__rbtree__succeeded)
#line 4641 "rbtree.c"
                              {
#line 4643 "rbtree.c"
                                /* direct tailcall eliminated */
#line 4645 "rbtree.c"
                                {
#line 4647 "rbtree.c"
                                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_8_8;
#line 4649 "rbtree.c"
                                  MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_12_12;

#line 4652 "rbtree.c"
                                  mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 4654 "rbtree.c"
                                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 4656 "rbtree.c"
                                }
#line 4658 "rbtree.c"
                                continue;
#line 4660 "rbtree.c"
                              }
#line 248 "rbtree.m"
                          }
#line 248 "rbtree.m"
                      }
#line 248 "rbtree.m"
                  }
#line 248 "rbtree.m"
              }
#line 248 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 248 "rbtree.m"
      }
#line 248 "rbtree.m"
      break;
#line 248 "rbtree.m"
    }
#line 248 "rbtree.m"
}

#line 864 "rbtree.m"
void MR_CALL 
mercury__rbtree__delete_2_5_p_1(
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 864 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 864 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 864 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 864 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 864 "rbtree.m"
{
#line 866 "rbtree.m"
  {
#line 866 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 866 "rbtree.m"
    {
#line 866 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, mercury__rbtree__HeadVar__5_5);
#line 866 "rbtree.m"
      return;
    }
#line 866 "rbtree.m"
  }
#line 864 "rbtree.m"
}

#line 863 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__delete_2_5_p_0(
#line 863 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
#line 863 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
#line 863 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 863 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 863 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 863 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4,
#line 863 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__5_5)
#line 863 "rbtree.m"
{
#line 866 "rbtree.m"
  {
#line 866 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 866 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "rbtree.m"
      {
#line 866 "rbtree.m"
        mercury__rbtree__succeeded = (mercury__rbtree__HeadVar__3_3 == (MR_Integer) 0);
#line 866 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 866 "rbtree.m"
          {
#line 866 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "rbtree.m"
            *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 866 "rbtree.m"
          }
#line 866 "rbtree.m"
      }
#line 866 "rbtree.m"
    else
#line 866 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 892 "rbtree.m"
        {
#line 892 "rbtree.m"
          MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 892 "rbtree.m"
          MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "rbtree.m"
          MR_Word mercury__rbtree__Result_33;

#line 893 "rbtree.m"
          {
#line 893 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
          }
#line 908 "rbtree.m"
          if ((mercury__rbtree__Result_33 == (MR_Integer) 1))
#line 909 "rbtree.m"
            {
#line 909 "rbtree.m"
              MR_Word mercury__rbtree__NewL_41;

#line 910 "rbtree.m"
              {
#line 910 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
              }
#line 909 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 909 "rbtree.m"
                {
#line 911 "rbtree.m"
                  {
#line 911 "rbtree.m"
                    MR_Word base;
#line 911 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 911 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 911 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 911 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 911 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
#line 911 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 911 "rbtree.m"
                  }
#line 911 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 909 "rbtree.m"
                }
#line 909 "rbtree.m"
            }
#line 908 "rbtree.m"
          else
#line 908 "rbtree.m"
            if ((mercury__rbtree__Result_33 == (MR_Integer) 0))
#line 895 "rbtree.m"
              {
#line 898 "rbtree.m"
                MR_Box mercury__rbtree__NewK_34;
#line 898 "rbtree.m"
                MR_Box mercury__rbtree__NewV_35;
#line 898 "rbtree.m"
                MR_Word mercury__rbtree__NewL_36;

#line 896 "rbtree.m"
                {
#line 896 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
                }
#line 898 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 897 "rbtree.m"
                  {
#line 897 "rbtree.m"
                    MR_Word base;
#line 897 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 897 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
#line 897 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
#line 897 "rbtree.m"
                  }
#line 898 "rbtree.m"
                else
#line 902 "rbtree.m"
                  {
#line 902 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_37;
#line 902 "rbtree.m"
                    MR_Box mercury__rbtree__NewK_39;
#line 902 "rbtree.m"
                    MR_Box mercury__rbtree__NewV_40;

#line 900 "rbtree.m"
                    {
#line 900 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                    }
#line 902 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 901 "rbtree.m"
                      {
#line 901 "rbtree.m"
                        MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 901 "rbtree.m"
                        {
#line 901 "rbtree.m"
                          MR_Word base;
#line 901 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 901 "rbtree.m"
                          *mercury__rbtree__HeadVar__5_5 = base;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
#line 901 "rbtree.m"
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
#line 901 "rbtree.m"
                        }
#line 901 "rbtree.m"
                      }
#line 902 "rbtree.m"
                    else
#line 904 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "rbtree.m"
                  }
#line 907 "rbtree.m"
                {
#line 907 "rbtree.m"
                  MR_Word base;
#line 907 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 907 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
#line 907 "rbtree.m"
                }
#line 895 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 895 "rbtree.m"
              }
#line 908 "rbtree.m"
            else
#line 913 "rbtree.m"
              {
#line 913 "rbtree.m"
                MR_Word mercury__rbtree__NewR_42;

#line 914 "rbtree.m"
                {
#line 914 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
                }
#line 913 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 913 "rbtree.m"
                  {
#line 915 "rbtree.m"
                    {
#line 915 "rbtree.m"
                      MR_Word base;
#line 915 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 915 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 915 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
#line 915 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
#line 915 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
#line 915 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
#line 915 "rbtree.m"
                    }
#line 915 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 913 "rbtree.m"
                  }
#line 913 "rbtree.m"
              }
#line 892 "rbtree.m"
        }
#line 866 "rbtree.m"
      else
#line 867 "rbtree.m"
        {
#line 867 "rbtree.m"
          MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 867 "rbtree.m"
          MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 867 "rbtree.m"
          MR_Word mercury__rbtree__Result_15;

#line 868 "rbtree.m"
          {
#line 868 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
          }
#line 883 "rbtree.m"
          if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 884 "rbtree.m"
            {
#line 884 "rbtree.m"
              MR_Word mercury__rbtree__NewL_23;

#line 885 "rbtree.m"
              {
#line 885 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
              }
#line 884 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 884 "rbtree.m"
                {
#line 886 "rbtree.m"
                  {
#line 886 "rbtree.m"
                    MR_Word base;
#line 886 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 886 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 886 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 886 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 886 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 886 "rbtree.m"
                  }
#line 886 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 884 "rbtree.m"
                }
#line 884 "rbtree.m"
            }
#line 883 "rbtree.m"
          else
#line 883 "rbtree.m"
            if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 870 "rbtree.m"
              {
#line 873 "rbtree.m"
                MR_Box mercury__rbtree__NewK_16;
#line 873 "rbtree.m"
                MR_Box mercury__rbtree__NewV_17;
#line 873 "rbtree.m"
                MR_Word mercury__rbtree__NewL_18;

#line 871 "rbtree.m"
                {
#line 871 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
                }
#line 873 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 872 "rbtree.m"
                  {
#line 872 "rbtree.m"
                    MR_Word base;
#line 872 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 872 "rbtree.m"
                    *mercury__rbtree__HeadVar__5_5 = base;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
#line 872 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
#line 872 "rbtree.m"
                  }
#line 873 "rbtree.m"
                else
#line 877 "rbtree.m"
                  {
#line 877 "rbtree.m"
                    MR_Word mercury__rbtree__NewR_19;
#line 877 "rbtree.m"
                    MR_Box mercury__rbtree__NewK_21;
#line 877 "rbtree.m"
                    MR_Box mercury__rbtree__NewV_22;

#line 875 "rbtree.m"
                    {
#line 875 "rbtree.m"
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                    }
#line 877 "rbtree.m"
                    if (mercury__rbtree__succeeded)
#line 876 "rbtree.m"
                      {
#line 876 "rbtree.m"
                        MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 876 "rbtree.m"
                        {
#line 876 "rbtree.m"
                          MR_Word base;
#line 876 "rbtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 876 "rbtree.m"
                          *mercury__rbtree__HeadVar__5_5 = base;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 876 "rbtree.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
#line 876 "rbtree.m"
                        }
#line 876 "rbtree.m"
                      }
#line 877 "rbtree.m"
                    else
#line 879 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 877 "rbtree.m"
                  }
#line 882 "rbtree.m"
                {
#line 882 "rbtree.m"
                  MR_Word base;
#line 882 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 882 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 882 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
#line 882 "rbtree.m"
                }
#line 870 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 870 "rbtree.m"
              }
#line 883 "rbtree.m"
            else
#line 888 "rbtree.m"
              {
#line 888 "rbtree.m"
                MR_Word mercury__rbtree__NewR_24;

#line 889 "rbtree.m"
                {
#line 889 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
                }
#line 888 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 888 "rbtree.m"
                  {
#line 890 "rbtree.m"
                    {
#line 890 "rbtree.m"
                      MR_Word base;
#line 890 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 890 "rbtree.m"
                      *mercury__rbtree__HeadVar__5_5 = base;
#line 890 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
#line 890 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
#line 890 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
#line 890 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
#line 890 "rbtree.m"
                    }
#line 890 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 888 "rbtree.m"
                  }
#line 888 "rbtree.m"
              }
#line 867 "rbtree.m"
        }
#line 866 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 866 "rbtree.m"
  }
#line 863 "rbtree.m"
}

#line 233 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__map_values_3_p_1(
#line 233 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
#line 233 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
#line 233 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
#line 233 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 233 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 233 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 233 "rbtree.m"
{
#line 1105 "rbtree.m"
  {
#line 1105 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1105 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "rbtree.m"
      {
#line 1105 "rbtree.m"
        *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1105 "rbtree.m"
        mercury__rbtree__succeeded = MR_TRUE;
#line 1105 "rbtree.m"
      }
#line 1105 "rbtree.m"
    else
#line 1105 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1112 "rbtree.m"
        {
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left_23;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right_24;
#line 1114 "rbtree.m"
          MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1114 "rbtree.m"
          {
#line 1114 "rbtree.m"
            mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
          }
#line 1112 "rbtree.m"
          if (mercury__rbtree__succeeded)
#line 1112 "rbtree.m"
            {
#line 1115 "rbtree.m"
              {
#line 1115 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
              }
#line 1112 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1112 "rbtree.m"
                {
#line 1116 "rbtree.m"
                  {
#line 1116 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
                  }
#line 1112 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1112 "rbtree.m"
                    {
#line 1117 "rbtree.m"
                      {
#line 1117 "rbtree.m"
                        MR_Word base;
#line 1117 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "rbtree.m"
                        *mercury__rbtree__HeadVar__3_3 = base;
#line 1117 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1117 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1117 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1117 "rbtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1117 "rbtree.m"
                      }
#line 1117 "rbtree.m"
                      mercury__rbtree__succeeded = MR_TRUE;
#line 1112 "rbtree.m"
                    }
#line 1112 "rbtree.m"
                }
#line 1112 "rbtree.m"
            }
#line 1112 "rbtree.m"
        }
#line 1105 "rbtree.m"
      else
#line 1106 "rbtree.m"
        {
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left_13;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right_14;
#line 1108 "rbtree.m"
          MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1108 "rbtree.m"
          {
#line 1108 "rbtree.m"
            mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
          }
#line 1106 "rbtree.m"
          if (mercury__rbtree__succeeded)
#line 1106 "rbtree.m"
            {
#line 1109 "rbtree.m"
              {
#line 1109 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
              }
#line 1106 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1106 "rbtree.m"
                {
#line 1110 "rbtree.m"
                  {
#line 1110 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
                  }
#line 1106 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1106 "rbtree.m"
                    {
#line 1111 "rbtree.m"
                      {
#line 1111 "rbtree.m"
                        MR_Word base;
#line 1111 "rbtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "rbtree.m"
                        *mercury__rbtree__HeadVar__3_3 = base;
#line 1111 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1111 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1111 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1111 "rbtree.m"
                        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1111 "rbtree.m"
                      }
#line 1111 "rbtree.m"
                      mercury__rbtree__succeeded = MR_TRUE;
#line 1106 "rbtree.m"
                    }
#line 1106 "rbtree.m"
                }
#line 1106 "rbtree.m"
            }
#line 1106 "rbtree.m"
        }
#line 1105 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 1105 "rbtree.m"
  }
#line 233 "rbtree.m"
}

#line 232 "rbtree.m"
void MR_CALL 
mercury__rbtree__map_values_3_p_0(
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 232 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 232 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__3_3)
#line 232 "rbtree.m"
{
#line 1105 "rbtree.m"
  {
#line 1105 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1105 "rbtree.m"
    if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "rbtree.m"
      *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1105 "rbtree.m"
    else
#line 1105 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1112 "rbtree.m"
        {
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1112 "rbtree.m"
          MR_Box mercury__rbtree__W0_22;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Left_23;
#line 1112 "rbtree.m"
          MR_Word mercury__rbtree__Right_24;
#line 1114 "rbtree.m"
          void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1114 "rbtree.m"
          {
#line 1114 "rbtree.m"
            mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
          }
#line 1115 "rbtree.m"
          {
#line 1115 "rbtree.m"
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
          }
#line 1116 "rbtree.m"
          {
#line 1116 "rbtree.m"
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
          }
#line 1117 "rbtree.m"
          {
#line 1117 "rbtree.m"
            MR_Word base;
#line 1117 "rbtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = base;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
#line 1117 "rbtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
#line 1117 "rbtree.m"
          }
#line 1112 "rbtree.m"
        }
#line 1105 "rbtree.m"
      else
#line 1106 "rbtree.m"
        {
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1106 "rbtree.m"
          MR_Box mercury__rbtree__W0_12;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Left_13;
#line 1106 "rbtree.m"
          MR_Word mercury__rbtree__Right_14;
#line 1108 "rbtree.m"
          void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1108 "rbtree.m"
          {
#line 1108 "rbtree.m"
            mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
          }
#line 1109 "rbtree.m"
          {
#line 1109 "rbtree.m"
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
          }
#line 1110 "rbtree.m"
          {
#line 1110 "rbtree.m"
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
          }
#line 1111 "rbtree.m"
          {
#line 1111 "rbtree.m"
            MR_Word base;
#line 1111 "rbtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = base;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
#line 1111 "rbtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
#line 1111 "rbtree.m"
          }
#line 1106 "rbtree.m"
        }
#line 1105 "rbtree.m"
  }
#line 232 "rbtree.m"
}

#line 230 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__map_values_2_f_0(
#line 230 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_17,
#line 230 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_18,
#line 230 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_19,
#line 230 "rbtree.m"
  MR_Word mercury__rbtree__F_4,
#line 230 "rbtree.m"
  MR_Word mercury__rbtree__T1_5)
#line 230 "rbtree.m"
{
#line 1103 "rbtree.m"
  {
#line 1103 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1103 "rbtree.m"
    MR_Word mercury__rbtree__T2_6;

#line 1103 "rbtree.m"
    {
#line 1103 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__F_4, mercury__rbtree__T1_5, &mercury__rbtree__T2_6);
    }
#line 1103 "rbtree.m"
    return mercury__rbtree__T2_6;
#line 1103 "rbtree.m"
  }
#line 230 "rbtree.m"
}

#line 227 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_4(
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 227 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 227 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 227 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 227 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 227 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 227 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 227 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 227 "rbtree.m"
{
#line 1089 "rbtree.m"
  while (MR_TRUE)
#line 1089 "rbtree.m"
    {
#line 1089 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1089 "rbtree.m"
      {
#line 1089 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1089 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1089 "rbtree.m"
          }
#line 1089 "rbtree.m"
        else
#line 1089 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1094 "rbtree.m"
            {
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1096 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1095 "rbtree.m"
              {
#line 1095 "rbtree.m"
                mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
#line 1096 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1096 "rbtree.m"
              {
#line 1096 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
#line 1097 "rbtree.m"
              /* direct tailcall eliminated */
#line 1097 "rbtree.m"
              {
#line 1097 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1097 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1097 "rbtree.m"
              }
#line 1097 "rbtree.m"
              continue;
#line 1094 "rbtree.m"
            }
#line 1089 "rbtree.m"
          else
#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1092 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1091 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
#line 1092 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1092 "rbtree.m"
              {
#line 1092 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
#line 1093 "rbtree.m"
              /* direct tailcall eliminated */
#line 1093 "rbtree.m"
              {
#line 1093 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1093 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1093 "rbtree.m"
              }
#line 1093 "rbtree.m"
              continue;
#line 1090 "rbtree.m"
            }
#line 1089 "rbtree.m"
      }
#line 1089 "rbtree.m"
      break;
#line 1089 "rbtree.m"
    }
#line 227 "rbtree.m"
}

#line 225 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_3(
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 225 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 225 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 225 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 225 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 225 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 225 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 225 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 225 "rbtree.m"
{
#line 1089 "rbtree.m"
  while (MR_TRUE)
#line 1089 "rbtree.m"
    {
#line 1089 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1089 "rbtree.m"
      {
#line 1089 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1089 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1089 "rbtree.m"
          }
#line 1089 "rbtree.m"
        else
#line 1089 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1094 "rbtree.m"
            {
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1096 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1095 "rbtree.m"
              {
#line 1095 "rbtree.m"
                mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
#line 1096 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1096 "rbtree.m"
              {
#line 1096 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
#line 1097 "rbtree.m"
              /* direct tailcall eliminated */
#line 1097 "rbtree.m"
              {
#line 1097 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1097 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1097 "rbtree.m"
              }
#line 1097 "rbtree.m"
              continue;
#line 1094 "rbtree.m"
            }
#line 1089 "rbtree.m"
          else
#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1092 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1091 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
#line 1092 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1092 "rbtree.m"
              {
#line 1092 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
#line 1093 "rbtree.m"
              /* direct tailcall eliminated */
#line 1093 "rbtree.m"
              {
#line 1093 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1093 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1093 "rbtree.m"
              }
#line 1093 "rbtree.m"
              continue;
#line 1090 "rbtree.m"
            }
#line 1089 "rbtree.m"
      }
#line 1089 "rbtree.m"
      break;
#line 1089 "rbtree.m"
    }
#line 225 "rbtree.m"
}

#line 223 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_2(
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 223 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 223 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 223 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 223 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 223 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 223 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 223 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 223 "rbtree.m"
{
#line 1089 "rbtree.m"
  while (MR_TRUE)
#line 1089 "rbtree.m"
    {
#line 1089 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1089 "rbtree.m"
      {
#line 1089 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1089 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1089 "rbtree.m"
          }
#line 1089 "rbtree.m"
        else
#line 1089 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1094 "rbtree.m"
            {
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1096 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1095 "rbtree.m"
              {
#line 1095 "rbtree.m"
                mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
#line 1096 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1096 "rbtree.m"
              {
#line 1096 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
#line 1097 "rbtree.m"
              /* direct tailcall eliminated */
#line 1097 "rbtree.m"
              {
#line 1097 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1097 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1097 "rbtree.m"
              }
#line 1097 "rbtree.m"
              continue;
#line 1094 "rbtree.m"
            }
#line 1089 "rbtree.m"
          else
#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1092 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1091 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
#line 1092 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1092 "rbtree.m"
              {
#line 1092 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
#line 1093 "rbtree.m"
              /* direct tailcall eliminated */
#line 1093 "rbtree.m"
              {
#line 1093 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1093 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1093 "rbtree.m"
              }
#line 1093 "rbtree.m"
              continue;
#line 1090 "rbtree.m"
            }
#line 1089 "rbtree.m"
      }
#line 1089 "rbtree.m"
      break;
#line 1089 "rbtree.m"
    }
#line 223 "rbtree.m"
}

#line 221 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl3_8_p_1(
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 221 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 221 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 221 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 221 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 221 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 221 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 221 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 221 "rbtree.m"
{
#line 1089 "rbtree.m"
  while (MR_TRUE)
#line 1089 "rbtree.m"
    {
#line 1089 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1089 "rbtree.m"
      {
#line 1089 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1089 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1089 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1089 "rbtree.m"
          }
#line 1089 "rbtree.m"
        else
#line 1089 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1094 "rbtree.m"
            {
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1096 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1095 "rbtree.m"
              {
#line 1095 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
#line 1094 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1094 "rbtree.m"
                {
#line 1096 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1096 "rbtree.m"
                  {
#line 1096 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
                  }
#line 1094 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1097 "rbtree.m"
                    {
#line 1097 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1097 "rbtree.m"
                      {
#line 1097 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1097 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1097 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1097 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1097 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1097 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1097 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1097 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1097 "rbtree.m"
                      }
#line 1097 "rbtree.m"
                      continue;
#line 1097 "rbtree.m"
                    }
#line 1094 "rbtree.m"
                }
#line 1094 "rbtree.m"
            }
#line 1089 "rbtree.m"
          else
#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1092 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1091 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
#line 1090 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1090 "rbtree.m"
                {
#line 1092 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1092 "rbtree.m"
                  {
#line 1092 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
                  }
#line 1090 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1093 "rbtree.m"
                    {
#line 1093 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1093 "rbtree.m"
                      {
#line 1093 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1093 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1093 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1093 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1093 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1093 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1093 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1093 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1093 "rbtree.m"
                      }
#line 1093 "rbtree.m"
                      continue;
#line 1093 "rbtree.m"
                    }
#line 1090 "rbtree.m"
                }
#line 1090 "rbtree.m"
            }
#line 1089 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1089 "rbtree.m"
      }
#line 1089 "rbtree.m"
      break;
#line 1089 "rbtree.m"
    }
#line 221 "rbtree.m"
}

#line 219 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl3_8_p_0(
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 219 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 219 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 219 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 219 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 219 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
#line 219 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
#line 219 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
#line 219 "rbtree.m"
{
#line 1089 "rbtree.m"
  while (MR_TRUE)
#line 1089 "rbtree.m"
    {
#line 1089 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1089 "rbtree.m"
      {
#line 1089 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1089 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "rbtree.m"
          {
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1089 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1089 "rbtree.m"
          }
#line 1089 "rbtree.m"
        else
#line 1089 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1094 "rbtree.m"
            {
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1094 "rbtree.m"
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1094 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
#line 1096 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1095 "rbtree.m"
              {
#line 1095 "rbtree.m"
                mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
#line 1096 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1096 "rbtree.m"
              {
#line 1096 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
#line 1097 "rbtree.m"
              /* direct tailcall eliminated */
#line 1097 "rbtree.m"
              {
#line 1097 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
#line 1097 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1097 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1097 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1097 "rbtree.m"
              }
#line 1097 "rbtree.m"
              continue;
#line 1094 "rbtree.m"
            }
#line 1089 "rbtree.m"
          else
#line 1090 "rbtree.m"
            {
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1090 "rbtree.m"
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1090 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
#line 1092 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1091 "rbtree.m"
              {
#line 1091 "rbtree.m"
                mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
#line 1092 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1092 "rbtree.m"
              {
#line 1092 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
#line 1093 "rbtree.m"
              /* direct tailcall eliminated */
#line 1093 "rbtree.m"
              {
#line 1093 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
#line 1093 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1093 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1093 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1093 "rbtree.m"
              }
#line 1093 "rbtree.m"
              continue;
#line 1090 "rbtree.m"
            }
#line 1089 "rbtree.m"
      }
#line 1089 "rbtree.m"
      break;
#line 1089 "rbtree.m"
    }
#line 219 "rbtree.m"
}

#line 214 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_6(
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 214 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
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
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 214 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1082 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1082 "rbtree.m"
                {
#line 1084 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
                  {
#line 1084 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
#line 1082 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1085 "rbtree.m"
                    {
#line 1085 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1085 "rbtree.m"
                      {
#line 1085 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
                      }
#line 1085 "rbtree.m"
                      continue;
#line 1085 "rbtree.m"
                    }
#line 1082 "rbtree.m"
                }
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1078 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1078 "rbtree.m"
                {
#line 1080 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
#line 1078 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1081 "rbtree.m"
                    {
#line 1081 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1081 "rbtree.m"
                      {
#line 1081 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
                      }
#line 1081 "rbtree.m"
                      continue;
#line 1081 "rbtree.m"
                    }
#line 1078 "rbtree.m"
                }
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 214 "rbtree.m"
}

#line 212 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_5(
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 212 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 212 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 212 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 212 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 212 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 212 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1082 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1082 "rbtree.m"
                {
#line 1084 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
                  {
#line 1084 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
#line 1082 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1085 "rbtree.m"
                    {
#line 1085 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1085 "rbtree.m"
                      {
#line 1085 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
                      }
#line 1085 "rbtree.m"
                      continue;
#line 1085 "rbtree.m"
                    }
#line 1082 "rbtree.m"
                }
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1078 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1078 "rbtree.m"
                {
#line 1080 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
#line 1078 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1081 "rbtree.m"
                    {
#line 1081 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1081 "rbtree.m"
                      {
#line 1081 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
                      }
#line 1081 "rbtree.m"
                      continue;
#line 1081 "rbtree.m"
                    }
#line 1078 "rbtree.m"
                }
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 212 "rbtree.m"
}

#line 210 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_4(
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 210 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 210 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 210 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 210 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 210 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 210 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1082 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1082 "rbtree.m"
                {
#line 1084 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
                  {
#line 1084 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
#line 1082 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1085 "rbtree.m"
                    {
#line 1085 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1085 "rbtree.m"
                      {
#line 1085 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
                      }
#line 1085 "rbtree.m"
                      continue;
#line 1085 "rbtree.m"
                    }
#line 1082 "rbtree.m"
                }
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1078 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1078 "rbtree.m"
                {
#line 1080 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
                  {
#line 1080 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
#line 1078 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1081 "rbtree.m"
                    {
#line 1081 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1081 "rbtree.m"
                      {
#line 1081 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
                      }
#line 1081 "rbtree.m"
                      continue;
#line 1081 "rbtree.m"
                    }
#line 1078 "rbtree.m"
                }
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 210 "rbtree.m"
}

#line 208 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_3(
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 208 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 208 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 208 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 208 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 208 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 208 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1084 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
              {
#line 1084 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
#line 1085 "rbtree.m"
              /* direct tailcall eliminated */
#line 1085 "rbtree.m"
              {
#line 1085 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
              }
#line 1085 "rbtree.m"
              continue;
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1080 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
              {
#line 1080 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
#line 1081 "rbtree.m"
              /* direct tailcall eliminated */
#line 1081 "rbtree.m"
              {
#line 1081 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
              }
#line 1081 "rbtree.m"
              continue;
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 208 "rbtree.m"
}

#line 206 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_2(
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 206 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 206 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 206 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 206 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 206 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 206 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1084 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
              {
#line 1084 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
#line 1085 "rbtree.m"
              /* direct tailcall eliminated */
#line 1085 "rbtree.m"
              {
#line 1085 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
              }
#line 1085 "rbtree.m"
              continue;
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1080 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
              {
#line 1080 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
#line 1081 "rbtree.m"
              /* direct tailcall eliminated */
#line 1081 "rbtree.m"
              {
#line 1081 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
              }
#line 1081 "rbtree.m"
              continue;
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 206 "rbtree.m"
}

#line 204 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_1(
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 204 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 204 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 204 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 204 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 204 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 204 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1084 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
              {
#line 1084 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
#line 1085 "rbtree.m"
              /* direct tailcall eliminated */
#line 1085 "rbtree.m"
              {
#line 1085 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
              }
#line 1085 "rbtree.m"
              continue;
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1080 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
              {
#line 1080 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
#line 1081 "rbtree.m"
              /* direct tailcall eliminated */
#line 1081 "rbtree.m"
              {
#line 1081 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
              }
#line 1081 "rbtree.m"
              continue;
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 204 "rbtree.m"
}

#line 202 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl2_6_p_0(
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__Pred_1,
#line 202 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 202 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
#line 202 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
#line 202 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
#line 202 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
#line 202 "rbtree.m"
{
#line 1077 "rbtree.m"
  while (MR_TRUE)
#line 1077 "rbtree.m"
    {
#line 1077 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1077 "rbtree.m"
      {
#line 1077 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1077 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "rbtree.m"
          {
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
#line 1077 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
#line 1077 "rbtree.m"
          }
#line 1077 "rbtree.m"
        else
#line 1077 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1082 "rbtree.m"
            {
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "rbtree.m"
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1082 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
#line 1084 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1083 "rbtree.m"
              {
#line 1083 "rbtree.m"
                mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
#line 1084 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1084 "rbtree.m"
              {
#line 1084 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
#line 1085 "rbtree.m"
              /* direct tailcall eliminated */
#line 1085 "rbtree.m"
              {
#line 1085 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
#line 1085 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1085 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1085 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1085 "rbtree.m"
              }
#line 1085 "rbtree.m"
              continue;
#line 1082 "rbtree.m"
            }
#line 1077 "rbtree.m"
          else
#line 1078 "rbtree.m"
            {
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1078 "rbtree.m"
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1078 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
#line 1080 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1079 "rbtree.m"
              {
#line 1079 "rbtree.m"
                mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
#line 1080 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
#line 1080 "rbtree.m"
              {
#line 1080 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
#line 1081 "rbtree.m"
              /* direct tailcall eliminated */
#line 1081 "rbtree.m"
              {
#line 1081 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
#line 1081 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
#line 1081 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
#line 1081 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1081 "rbtree.m"
              }
#line 1081 "rbtree.m"
              continue;
#line 1078 "rbtree.m"
            }
#line 1077 "rbtree.m"
      }
#line 1077 "rbtree.m"
      break;
#line 1077 "rbtree.m"
    }
#line 202 "rbtree.m"
}

#line 198 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_5(
#line 198 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 198 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 198 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 198 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 198 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 198 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 198 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 198 "rbtree.m"
{
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1065 "rbtree.m"
          }
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1070 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1070 "rbtree.m"
                {
#line 1072 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
                  {
#line 1072 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
#line 1070 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
                    {
#line 1073 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1073 "rbtree.m"
                      {
#line 1073 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
                      }
#line 1073 "rbtree.m"
                      continue;
#line 1073 "rbtree.m"
                    }
#line 1070 "rbtree.m"
                }
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1066 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1066 "rbtree.m"
                {
#line 1068 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
#line 1066 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1069 "rbtree.m"
                    {
#line 1069 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1069 "rbtree.m"
                      {
#line 1069 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
                      }
#line 1069 "rbtree.m"
                      continue;
#line 1069 "rbtree.m"
                    }
#line 1066 "rbtree.m"
                }
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 198 "rbtree.m"
}

#line 196 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_4(
#line 196 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 196 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 196 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 196 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 196 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 196 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 196 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 196 "rbtree.m"
{
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1065 "rbtree.m"
          }
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1070 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1070 "rbtree.m"
                {
#line 1072 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
                  {
#line 1072 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
#line 1070 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
                    {
#line 1073 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1073 "rbtree.m"
                      {
#line 1073 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
                      }
#line 1073 "rbtree.m"
                      continue;
#line 1073 "rbtree.m"
                    }
#line 1070 "rbtree.m"
                }
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1066 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1066 "rbtree.m"
                {
#line 1068 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
#line 1066 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1069 "rbtree.m"
                    {
#line 1069 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1069 "rbtree.m"
                      {
#line 1069 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
                      }
#line 1069 "rbtree.m"
                      continue;
#line 1069 "rbtree.m"
                    }
#line 1066 "rbtree.m"
                }
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 196 "rbtree.m"
}

#line 194 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_3(
#line 194 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 194 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 194 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 194 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 194 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 194 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 194 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 194 "rbtree.m"
{
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          {
#line 1065 "rbtree.m"
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 1065 "rbtree.m"
          }
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1070 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1070 "rbtree.m"
                {
#line 1072 "rbtree.m"
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
                  {
#line 1072 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
#line 1070 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1073 "rbtree.m"
                    {
#line 1073 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1073 "rbtree.m"
                      {
#line 1073 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
                      }
#line 1073 "rbtree.m"
                      continue;
#line 1073 "rbtree.m"
                    }
#line 1070 "rbtree.m"
                }
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1066 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 1066 "rbtree.m"
                {
#line 1068 "rbtree.m"
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
                  {
#line 1068 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
#line 1066 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 1069 "rbtree.m"
                    {
#line 1069 "rbtree.m"
                      /* direct tailcall eliminated */
#line 1069 "rbtree.m"
                      {
#line 1069 "rbtree.m"
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
                      }
#line 1069 "rbtree.m"
                      continue;
#line 1069 "rbtree.m"
                    }
#line 1066 "rbtree.m"
                }
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 194 "rbtree.m"
}

#line 193 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_2(
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
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1072 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
              {
#line 1072 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
#line 1073 "rbtree.m"
              /* direct tailcall eliminated */
#line 1073 "rbtree.m"
              {
#line 1073 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
              continue;
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1068 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
              {
#line 1068 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
#line 1069 "rbtree.m"
              /* direct tailcall eliminated */
#line 1069 "rbtree.m"
              {
#line 1069 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
              }
#line 1069 "rbtree.m"
              continue;
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 193 "rbtree.m"
}

#line 192 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_1(
#line 192 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 192 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
#line 192 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
#line 192 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 192 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__2_2,
#line 192 "rbtree.m"
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
#line 192 "rbtree.m"
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
#line 192 "rbtree.m"
{
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1072 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
              {
#line 1072 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
#line 1073 "rbtree.m"
              /* direct tailcall eliminated */
#line 1073 "rbtree.m"
              {
#line 1073 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
              continue;
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1068 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
              {
#line 1068 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
#line 1069 "rbtree.m"
              /* direct tailcall eliminated */
#line 1069 "rbtree.m"
              {
#line 1069 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
              }
#line 1069 "rbtree.m"
              continue;
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 192 "rbtree.m"
}

#line 191 "rbtree.m"
void MR_CALL 
mercury__rbtree__foldl_4_p_0(
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
#line 1065 "rbtree.m"
  while (MR_TRUE)
#line 1065 "rbtree.m"
    {
#line 1065 "rbtree.m"
      /* tailcall optimized into a loop */
#line 1065 "rbtree.m"
      {
#line 1065 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 1065 "rbtree.m"
        if ((mercury__rbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "rbtree.m"
          *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
#line 1065 "rbtree.m"
        else
#line 1065 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1070 "rbtree.m"
            {
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1070 "rbtree.m"
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
#line 1070 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
#line 1072 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1071 "rbtree.m"
              {
#line 1071 "rbtree.m"
                mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
#line 1072 "rbtree.m"
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "rbtree.m"
              {
#line 1072 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
#line 1073 "rbtree.m"
              /* direct tailcall eliminated */
#line 1073 "rbtree.m"
              {
#line 1073 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
#line 1073 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

#line 1073 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1073 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1073 "rbtree.m"
              }
#line 1073 "rbtree.m"
              continue;
#line 1070 "rbtree.m"
            }
#line 1065 "rbtree.m"
          else
#line 1066 "rbtree.m"
            {
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "rbtree.m"
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
#line 1066 "rbtree.m"
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
#line 1068 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1067 "rbtree.m"
              {
#line 1067 "rbtree.m"
                mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
#line 1068 "rbtree.m"
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "rbtree.m"
              {
#line 1068 "rbtree.m"
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
#line 1069 "rbtree.m"
              /* direct tailcall eliminated */
#line 1069 "rbtree.m"
              {
#line 1069 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
#line 1069 "rbtree.m"
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

#line 1069 "rbtree.m"
                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 1069 "rbtree.m"
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
#line 1069 "rbtree.m"
              }
#line 1069 "rbtree.m"
              continue;
#line 1066 "rbtree.m"
            }
#line 1065 "rbtree.m"
      }
#line 1065 "rbtree.m"
      break;
#line 1065 "rbtree.m"
    }
#line 191 "rbtree.m"
}

#line 189 "rbtree.m"
MR_Box MR_CALL 
mercury__rbtree__foldl_3_f_0(
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_22,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_23,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_T_24,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__F_5,
#line 189 "rbtree.m"
  MR_Word mercury__rbtree__T_6,
#line 189 "rbtree.m"
  MR_Box mercury__rbtree__A_7)
#line 189 "rbtree.m"
{
#line 1063 "rbtree.m"
  {
#line 1063 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1063 "rbtree.m"
    MR_Box mercury__rbtree__B_8;

#line 1063 "rbtree.m"
    {
#line 1063 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__F_5, mercury__rbtree__T_6, mercury__rbtree__A_7, &mercury__rbtree__B_8);
    }
#line 1063 "rbtree.m"
    return mercury__rbtree__B_8;
#line 1063 "rbtree.m"
  }
#line 189 "rbtree.m"
}

#line 187 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__to_assoc_list_1_f_0(
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
#line 187 "rbtree.m"
  MR_Word mercury__rbtree__T_3)
#line 187 "rbtree.m"
{
#line 1047 "rbtree.m"
  {
#line 1047 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1047 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__2_2;

#line 1047 "rbtree.m"
    {
#line 1047 "rbtree.m"
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__T_3, &mercury__rbtree__HeadVar__2_2);
    }
#line 1047 "rbtree.m"
    return mercury__rbtree__HeadVar__2_2;
#line 1047 "rbtree.m"
  }
#line 187 "rbtree.m"
}

#line 184 "rbtree.m"
void MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_2_p_0(
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
#line 184 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 184 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 184 "rbtree.m"
{
#line 1049 "rbtree.m"
  {
#line 1049 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1049 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "rbtree.m"
    else
#line 1049 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1054 "rbtree.m"
        {
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__TypeCtorInfo_25_25;
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__TypeInfo_26_26;
#line 1054 "rbtree.m"
          MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1054 "rbtree.m"
          MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__L0_17;
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__L1_18;
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__V_19_19;
#line 1054 "rbtree.m"
          MR_Word mercury__rbtree__V_20_20;
#line 1057 "rbtree.m"
          MR_Word mercury__rbtree__conv0_HeadVar__2_2;

#line 1055 "rbtree.m"
          {
#line 1055 "rbtree.m"
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_14, &mercury__rbtree__L0_17);
          }
#line 1056 "rbtree.m"
          {
#line 1056 "rbtree.m"
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_15, &mercury__rbtree__L1_18);
          }
#line 1057 "rbtree.m"
          {
#line 1057 "rbtree.m"
            mercury__rbtree__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "rbtree.m"
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 0) = mercury__rbtree__K0_12;
#line 1057 "rbtree.m"
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 1) = mercury__rbtree__V0_13;
#line 1057 "rbtree.m"
          }
#line 1057 "rbtree.m"
          {
#line 1057 "rbtree.m"
            mercury__rbtree__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 0) = ((MR_Box) (mercury__rbtree__V_20_20));
#line 1057 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 1) = ((MR_Box) (mercury__rbtree__L1_18));
#line 1057 "rbtree.m"
          }
#line 8973 "rbtree.c"
          mercury__rbtree__TypeCtorInfo_25_25 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8975 "rbtree.c"
          {
#line 8977 "rbtree.c"
            mercury__rbtree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8979 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_25_25));
#line 8981 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
#line 8983 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
#line 8985 "rbtree.c"
          }
#line 1057 "rbtree.m"
          {
#line 1057 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_26_26, (MR_Word) mercury__rbtree__L0_17, (MR_Word) mercury__rbtree__V_19_19, &mercury__rbtree__conv0_HeadVar__2_2);
          }
#line 1057 "rbtree.m"
          *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv0_HeadVar__2_2;
#line 1054 "rbtree.m"
        }
#line 1049 "rbtree.m"
      else
#line 1050 "rbtree.m"
        {
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__TypeCtorInfo_23_23;
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__TypeInfo_24_24;
#line 1050 "rbtree.m"
          MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1050 "rbtree.m"
          MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__L0_8;
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__L1_9;
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__V_10_10;
#line 1050 "rbtree.m"
          MR_Word mercury__rbtree__V_11_11;
#line 1053 "rbtree.m"
          MR_Word mercury__rbtree__conv1_HeadVar__2_2;

#line 1051 "rbtree.m"
          {
#line 1051 "rbtree.m"
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_5, &mercury__rbtree__L0_8);
          }
#line 1052 "rbtree.m"
          {
#line 1052 "rbtree.m"
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_6, &mercury__rbtree__L1_9);
          }
#line 1053 "rbtree.m"
          {
#line 1053 "rbtree.m"
            mercury__rbtree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "rbtree.m"
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 0) = mercury__rbtree__K0_3;
#line 1053 "rbtree.m"
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 1) = mercury__rbtree__V0_4;
#line 1053 "rbtree.m"
          }
#line 1053 "rbtree.m"
          {
#line 1053 "rbtree.m"
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = ((MR_Box) (mercury__rbtree__V_11_11));
#line 1053 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__L1_9));
#line 1053 "rbtree.m"
          }
#line 9053 "rbtree.c"
          mercury__rbtree__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 9055 "rbtree.c"
          {
#line 9057 "rbtree.c"
            mercury__rbtree__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9059 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_23_23));
#line 9061 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
#line 9063 "rbtree.c"
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
#line 9065 "rbtree.c"
          }
#line 1053 "rbtree.m"
          {
#line 1053 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_24_24, (MR_Word) mercury__rbtree__L0_8, (MR_Word) mercury__rbtree__V_10_10, &mercury__rbtree__conv1_HeadVar__2_2);
          }
#line 1053 "rbtree.m"
          *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv1_HeadVar__2_2;
#line 1050 "rbtree.m"
        }
#line 1049 "rbtree.m"
  }
#line 184 "rbtree.m"
}

#line 183 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_1_f_0(
#line 183 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 183 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 183 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 183 "rbtree.m"
{
#line 1047 "rbtree.m"
  {
#line 1047 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1047 "rbtree.m"
    MR_Word mercury__rbtree__AL_4;

#line 1047 "rbtree.m"
    {
#line 1047 "rbtree.m"
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__AL_4);
    }
#line 1047 "rbtree.m"
    return mercury__rbtree__AL_4;
#line 1047 "rbtree.m"
  }
#line 183 "rbtree.m"
}

#line 181 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__from_assoc_list_1_f_0(
#line 181 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
#line 181 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
#line 181 "rbtree.m"
  MR_Word mercury__rbtree__AList_3)
#line 181 "rbtree.m"
{
#line 1035 "rbtree.m"
  {
#line 1035 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1035 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__2_2;

#line 1035 "rbtree.m"
    {
#line 1035 "rbtree.m"
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__AList_3, &mercury__rbtree__HeadVar__2_2);
    }
#line 1035 "rbtree.m"
    return mercury__rbtree__HeadVar__2_2;
#line 1035 "rbtree.m"
  }
#line 181 "rbtree.m"
}

#line 178 "rbtree.m"
void MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_2_p_0(
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 178 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 178 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 178 "rbtree.m"
{
#line 1037 "rbtree.m"
  {
#line 1037 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1037 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1037 "rbtree.m"
    else
#line 1038 "rbtree.m"
      {
#line 1038 "rbtree.m"
        MR_Box mercury__rbtree__K_3;
#line 1038 "rbtree.m"
        MR_Box mercury__rbtree__V_4;
#line 1038 "rbtree.m"
        MR_Word mercury__rbtree__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1038 "rbtree.m"
        MR_Word mercury__rbtree__Tree0_7;
#line 1038 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0)));

#line 1038 "rbtree.m"
        mercury__rbtree__K_3 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 0));
#line 1038 "rbtree.m"
        mercury__rbtree__V_4 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 1));
#line 1039 "rbtree.m"
        {
#line 1039 "rbtree.m"
          mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_5, &mercury__rbtree__Tree0_7);
        }
#line 1040 "rbtree.m"
        {
#line 1040 "rbtree.m"
          mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__K_3, mercury__rbtree__V_4, mercury__rbtree__Tree0_7, mercury__rbtree__HeadVar__2_2);
#line 1040 "rbtree.m"
          return;
        }
#line 1038 "rbtree.m"
      }
#line 1037 "rbtree.m"
  }
#line 178 "rbtree.m"
}

#line 177 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_1_f_0(
#line 177 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 177 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 177 "rbtree.m"
  MR_Word mercury__rbtree__AL_3)
#line 177 "rbtree.m"
{
#line 1035 "rbtree.m"
  {
#line 1035 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1035 "rbtree.m"
    MR_Word mercury__rbtree__RBT_4;

#line 1035 "rbtree.m"
    {
#line 1035 "rbtree.m"
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__AL_3, &mercury__rbtree__RBT_4);
    }
#line 1035 "rbtree.m"
    return mercury__rbtree__RBT_4;
#line 1035 "rbtree.m"
  }
#line 177 "rbtree.m"
}

#line 175 "rbtree.m"
void MR_CALL 
mercury__rbtree__count_2_p_0(
#line 175 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
#line 175 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
#line 175 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 175 "rbtree.m"
  MR_Integer * mercury__rbtree__HeadVar__2_2)
#line 175 "rbtree.m"
{
#line 1020 "rbtree.m"
  {
#line 1020 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1020 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Integer) 0;
#line 1020 "rbtree.m"
    else
#line 1020 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1025 "rbtree.m"
        {
#line 1025 "rbtree.m"
          MR_Word mercury__rbtree__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1025 "rbtree.m"
          MR_Word mercury__rbtree__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1025 "rbtree.m"
          MR_Integer mercury__rbtree__NO_17;
#line 1025 "rbtree.m"
          MR_Integer mercury__rbtree__N1_18;
#line 1025 "rbtree.m"
          MR_Integer mercury__rbtree__V_19_19;
#line 1025 "rbtree.m"
          MR_Box mercury__rbtree___K_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1025 "rbtree.m"
          MR_Box mercury__rbtree___V_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 1026 "rbtree.m"
          {
#line 1026 "rbtree.m"
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_14, &mercury__rbtree__NO_17);
          }
#line 1027 "rbtree.m"
          {
#line 1027 "rbtree.m"
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_15, &mercury__rbtree__N1_18);
          }
#line 1028 "rbtree.m"
          mercury__rbtree__V_19_19 = ((MR_Integer) 1 + mercury__rbtree__NO_17);
#line 1028 "rbtree.m"
          *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_19_19 + mercury__rbtree__N1_18);
#line 1025 "rbtree.m"
        }
#line 1020 "rbtree.m"
      else
#line 1021 "rbtree.m"
        {
#line 1021 "rbtree.m"
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1021 "rbtree.m"
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1021 "rbtree.m"
          MR_Integer mercury__rbtree__NO_8;
#line 1021 "rbtree.m"
          MR_Integer mercury__rbtree__N1_9;
#line 1021 "rbtree.m"
          MR_Integer mercury__rbtree__V_10_10;
#line 1021 "rbtree.m"
          MR_Box mercury__rbtree___K_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 1021 "rbtree.m"
          MR_Box mercury__rbtree___V_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 1022 "rbtree.m"
          {
#line 1022 "rbtree.m"
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_5, &mercury__rbtree__NO_8);
          }
#line 1023 "rbtree.m"
          {
#line 1023 "rbtree.m"
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_6, &mercury__rbtree__N1_9);
          }
#line 1024 "rbtree.m"
          mercury__rbtree__V_10_10 = ((MR_Integer) 1 + mercury__rbtree__NO_8);
#line 1024 "rbtree.m"
          *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_10_10 + mercury__rbtree__N1_9);
#line 1021 "rbtree.m"
        }
#line 1020 "rbtree.m"
  }
#line 175 "rbtree.m"
}

#line 174 "rbtree.m"
MR_Integer MR_CALL 
mercury__rbtree__count_1_f_0(
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 174 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 174 "rbtree.m"
{
#line 1018 "rbtree.m"
  {
#line 1018 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1018 "rbtree.m"
    MR_Integer mercury__rbtree__N_4;

#line 1018 "rbtree.m"
    {
#line 1018 "rbtree.m"
      mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__N_4);
    }
#line 1018 "rbtree.m"
    return mercury__rbtree__N_4;
#line 1018 "rbtree.m"
  }
#line 174 "rbtree.m"
}

#line 170 "rbtree.m"
void MR_CALL 
mercury__rbtree__values_2_p_0(
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
#line 170 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 170 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 170 "rbtree.m"
{
#line 1005 "rbtree.m"
  {
#line 1005 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 1005 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "rbtree.m"
    else
#line 1005 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1010 "rbtree.m"
        {
#line 1010 "rbtree.m"
          MR_Box mercury__rbtree__V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1010 "rbtree.m"
          MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1010 "rbtree.m"
          MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1010 "rbtree.m"
          MR_Word mercury__rbtree__List0_16;
#line 1010 "rbtree.m"
          MR_Word mercury__rbtree__List1_17;
#line 1010 "rbtree.m"
          MR_Word mercury__rbtree__V_18_18;
#line 1010 "rbtree.m"
          MR_Box mercury__rbtree___K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

#line 1011 "rbtree.m"
          {
#line 1011 "rbtree.m"
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
          }
#line 1012 "rbtree.m"
          {
#line 1012 "rbtree.m"
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
          }
#line 1013 "rbtree.m"
          {
#line 1013 "rbtree.m"
            mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__V0_12;
#line 1013 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
#line 1013 "rbtree.m"
          }
#line 1013 "rbtree.m"
          {
#line 1013 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
#line 1013 "rbtree.m"
            return;
          }
#line 1010 "rbtree.m"
        }
#line 1005 "rbtree.m"
      else
#line 1006 "rbtree.m"
        {
#line 1006 "rbtree.m"
          MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 1006 "rbtree.m"
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1006 "rbtree.m"
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1006 "rbtree.m"
          MR_Word mercury__rbtree__List0_8;
#line 1006 "rbtree.m"
          MR_Word mercury__rbtree__List1_9;
#line 1006 "rbtree.m"
          MR_Word mercury__rbtree__V_10_10;
#line 1006 "rbtree.m"
          MR_Box mercury__rbtree___K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

#line 1007 "rbtree.m"
          {
#line 1007 "rbtree.m"
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
          }
#line 1008 "rbtree.m"
          {
#line 1008 "rbtree.m"
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
          }
#line 1009 "rbtree.m"
          {
#line 1009 "rbtree.m"
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__V0_4;
#line 1009 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
#line 1009 "rbtree.m"
          }
#line 1009 "rbtree.m"
          {
#line 1009 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
#line 1009 "rbtree.m"
            return;
          }
#line 1006 "rbtree.m"
        }
#line 1005 "rbtree.m"
  }
#line 170 "rbtree.m"
}

#line 169 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__values_1_f_0(
#line 169 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 169 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 169 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 169 "rbtree.m"
{
#line 1003 "rbtree.m"
  {
#line 1003 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 1003 "rbtree.m"
    MR_Word mercury__rbtree__Vs_4;

#line 1003 "rbtree.m"
    {
#line 1003 "rbtree.m"
      mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Vs_4);
    }
#line 1003 "rbtree.m"
    return mercury__rbtree__Vs_4;
#line 1003 "rbtree.m"
  }
#line 169 "rbtree.m"
}

#line 164 "rbtree.m"
void MR_CALL 
mercury__rbtree__keys_2_p_0(
#line 164 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
#line 164 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
#line 164 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 164 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__2_2)
#line 164 "rbtree.m"
{
#line 990 "rbtree.m"
  {
#line 990 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 990 "rbtree.m"
    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "rbtree.m"
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 990 "rbtree.m"
    else
#line 990 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 995 "rbtree.m"
        {
#line 995 "rbtree.m"
          MR_Box mercury__rbtree__K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 995 "rbtree.m"
          MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 995 "rbtree.m"
          MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 995 "rbtree.m"
          MR_Word mercury__rbtree__List0_16;
#line 995 "rbtree.m"
          MR_Word mercury__rbtree__List1_17;
#line 995 "rbtree.m"
          MR_Word mercury__rbtree__V_18_18;
#line 995 "rbtree.m"
          MR_Box mercury__rbtree___V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 996 "rbtree.m"
          {
#line 996 "rbtree.m"
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
          }
#line 997 "rbtree.m"
          {
#line 997 "rbtree.m"
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
          }
#line 998 "rbtree.m"
          {
#line 998 "rbtree.m"
            mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__K0_11;
#line 998 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
#line 998 "rbtree.m"
          }
#line 998 "rbtree.m"
          {
#line 998 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
#line 998 "rbtree.m"
            return;
          }
#line 995 "rbtree.m"
        }
#line 990 "rbtree.m"
      else
#line 991 "rbtree.m"
        {
#line 991 "rbtree.m"
          MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 991 "rbtree.m"
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 991 "rbtree.m"
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
#line 991 "rbtree.m"
          MR_Word mercury__rbtree__List0_8;
#line 991 "rbtree.m"
          MR_Word mercury__rbtree__List1_9;
#line 991 "rbtree.m"
          MR_Word mercury__rbtree__V_10_10;
#line 991 "rbtree.m"
          MR_Box mercury__rbtree___V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

#line 992 "rbtree.m"
          {
#line 992 "rbtree.m"
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
          }
#line 993 "rbtree.m"
          {
#line 993 "rbtree.m"
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
          }
#line 994 "rbtree.m"
          {
#line 994 "rbtree.m"
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__K0_3;
#line 994 "rbtree.m"
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
#line 994 "rbtree.m"
          }
#line 994 "rbtree.m"
          {
#line 994 "rbtree.m"
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
#line 994 "rbtree.m"
            return;
          }
#line 991 "rbtree.m"
        }
#line 990 "rbtree.m"
  }
#line 164 "rbtree.m"
}

#line 163 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__keys_1_f_0(
#line 163 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
#line 163 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
#line 163 "rbtree.m"
  MR_Word mercury__rbtree__RBT_3)
#line 163 "rbtree.m"
{
#line 988 "rbtree.m"
  {
#line 988 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 988 "rbtree.m"
    MR_Word mercury__rbtree__Ks_4;

#line 988 "rbtree.m"
    {
#line 988 "rbtree.m"
      mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Ks_4);
    }
#line 988 "rbtree.m"
    return mercury__rbtree__Ks_4;
#line 988 "rbtree.m"
  }
#line 163 "rbtree.m"
}

#line 158 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_largest_4_p_0(
#line 158 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
#line 158 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
#line 158 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__1_1,
#line 158 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 158 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 158 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 158 "rbtree.m"
{
#line 923 "rbtree.m"
  {
#line 923 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 923 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 938 "rbtree.m"
      {
#line 938 "rbtree.m"
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 938 "rbtree.m"
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 938 "rbtree.m"
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 938 "rbtree.m"
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 944 "rbtree.m"
        if ((mercury__rbtree__R_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "rbtree.m"
          {
#line 941 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
#line 942 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
#line 943 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_28;
#line 940 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 940 "rbtree.m"
          }
#line 944 "rbtree.m"
        else
#line 947 "rbtree.m"
          {
#line 947 "rbtree.m"
            MR_Word mercury__rbtree__NewR_39;

#line 948 "rbtree.m"
            {
#line 948 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_29, &mercury__rbtree__NewR_39);
            }
#line 947 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 947 "rbtree.m"
              {
#line 949 "rbtree.m"
                {
#line 949 "rbtree.m"
                  MR_Word base;
#line 949 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 949 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 949 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
#line 949 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
#line 949 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_28));
#line 949 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_39));
#line 949 "rbtree.m"
                }
#line 949 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 947 "rbtree.m"
              }
#line 947 "rbtree.m"
          }
#line 938 "rbtree.m"
      }
#line 923 "rbtree.m"
    else
#line 923 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 925 "rbtree.m"
        {
#line 925 "rbtree.m"
          MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 925 "rbtree.m"
          MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 925 "rbtree.m"
          MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 925 "rbtree.m"
          MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 931 "rbtree.m"
          if ((mercury__rbtree__R_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "rbtree.m"
            {
#line 928 "rbtree.m"
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
#line 929 "rbtree.m"
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
#line 930 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_12;
#line 927 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 927 "rbtree.m"
            }
#line 931 "rbtree.m"
          else
#line 934 "rbtree.m"
            {
#line 934 "rbtree.m"
              MR_Word mercury__rbtree__NewR_23;

#line 935 "rbtree.m"
              {
#line 935 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_23);
              }
#line 934 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 934 "rbtree.m"
                {
#line 936 "rbtree.m"
                  {
#line 936 "rbtree.m"
                    MR_Word base;
#line 936 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 936 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 936 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 936 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 936 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 936 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_23));
#line 936 "rbtree.m"
                  }
#line 936 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 934 "rbtree.m"
                }
#line 934 "rbtree.m"
            }
#line 925 "rbtree.m"
        }
#line 923 "rbtree.m"
      else
#line 923 "rbtree.m"
        mercury__rbtree__succeeded = MR_FALSE;
#line 923 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 923 "rbtree.m"
  }
#line 158 "rbtree.m"
}

#line 152 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_smallest_4_p_0(
#line 152 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
#line 152 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
#line 152 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__1_1,
#line 152 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 152 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 152 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 152 "rbtree.m"
{
#line 956 "rbtree.m"
  {
#line 956 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 956 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 971 "rbtree.m"
      {
#line 971 "rbtree.m"
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 971 "rbtree.m"
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 971 "rbtree.m"
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 971 "rbtree.m"
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 977 "rbtree.m"
        if ((mercury__rbtree__L_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "rbtree.m"
          {
#line 974 "rbtree.m"
            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
#line 975 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
#line 976 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_29;
#line 973 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 973 "rbtree.m"
          }
#line 977 "rbtree.m"
        else
#line 980 "rbtree.m"
          {
#line 980 "rbtree.m"
            MR_Word mercury__rbtree__NewL_39;

#line 981 "rbtree.m"
            {
#line 981 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_28, &mercury__rbtree__NewL_39);
            }
#line 980 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 980 "rbtree.m"
              {
#line 982 "rbtree.m"
                {
#line 982 "rbtree.m"
                  MR_Word base;
#line 982 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 982 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 982 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
#line 982 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
#line 982 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
#line 982 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_29));
#line 982 "rbtree.m"
                }
#line 982 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 980 "rbtree.m"
              }
#line 980 "rbtree.m"
          }
#line 971 "rbtree.m"
      }
#line 956 "rbtree.m"
    else
#line 956 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 958 "rbtree.m"
        {
#line 958 "rbtree.m"
          MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 958 "rbtree.m"
          MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 958 "rbtree.m"
          MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 958 "rbtree.m"
          MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

#line 964 "rbtree.m"
          if ((mercury__rbtree__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "rbtree.m"
            {
#line 961 "rbtree.m"
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
#line 962 "rbtree.m"
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
#line 963 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_13;
#line 960 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 960 "rbtree.m"
            }
#line 964 "rbtree.m"
          else
#line 967 "rbtree.m"
            {
#line 967 "rbtree.m"
              MR_Word mercury__rbtree__NewL_23;

#line 968 "rbtree.m"
              {
#line 968 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_23);
              }
#line 967 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 967 "rbtree.m"
                {
#line 969 "rbtree.m"
                  {
#line 969 "rbtree.m"
                    MR_Word base;
#line 969 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 969 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 969 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 969 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 969 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
#line 969 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 969 "rbtree.m"
                  }
#line 969 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 967 "rbtree.m"
                }
#line 967 "rbtree.m"
            }
#line 958 "rbtree.m"
        }
#line 956 "rbtree.m"
      else
#line 956 "rbtree.m"
        mercury__rbtree__succeeded = MR_FALSE;
#line 956 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 956 "rbtree.m"
  }
#line 152 "rbtree.m"
}

#line 146 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__remove_4_p_0(
#line 146 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_13,
#line 146 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_14,
#line 146 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 146 "rbtree.m"
  MR_Box * mercury__rbtree__V_6,
#line 146 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_8,
#line 146 "rbtree.m"
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_9)
#line 146 "rbtree.m"
{
#line 920 "rbtree.m"
  {
#line 920 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 920 "rbtree.m"
    MR_Word mercury__rbtree__V_11_11;

#line 921 "rbtree.m"
    {
#line 921 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_13, mercury__rbtree__TypeInfo_for_V_14, mercury__rbtree__STATE_VARIABLE_Tree_0_8, mercury__rbtree__K_5, (MR_Integer) 1, &mercury__rbtree__V_11_11, mercury__rbtree__STATE_VARIABLE_Tree_9);
    }
#line 920 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 920 "rbtree.m"
      {
#line 921 "rbtree.m"
        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 921 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 921 "rbtree.m"
          *mercury__rbtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__V_11_11, (MR_Integer) 0));
#line 920 "rbtree.m"
      }
#line 920 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 920 "rbtree.m"
  }
#line 146 "rbtree.m"
}

#line 141 "rbtree.m"
void MR_CALL 
mercury__rbtree__delete_3_p_0(
#line 141 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 141 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 141 "rbtree.m"
  MR_Box mercury__rbtree__K_4,
#line 141 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_7,
#line 141 "rbtree.m"
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_8)
#line 141 "rbtree.m"
{
#line 838 "rbtree.m"
  {
#line 838 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 838 "rbtree.m"
    MR_Word mercury__rbtree__V_6_6;

#line 838 "rbtree.m"
    {
#line 838 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__STATE_VARIABLE_Tree_0_7, mercury__rbtree__K_4, &mercury__rbtree__V_6_6, mercury__rbtree__STATE_VARIABLE_Tree_8);
    }
#line 838 "rbtree.m"
  }
#line 141 "rbtree.m"
}

#line 140 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__delete_2_f_0(
#line 140 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 140 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 140 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_6,
#line 140 "rbtree.m"
  MR_Box mercury__rbtree__K_5)
#line 140 "rbtree.m"
{
#line 838 "rbtree.m"
  {
#line 838 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 838 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_7;
#line 838 "rbtree.m"
    MR_Word mercury__rbtree__V_15_15;

#line 838 "rbtree.m"
    {
#line 838 "rbtree.m"
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__STATE_VARIABLE_RBT_0_6, mercury__rbtree__K_5, &mercury__rbtree__V_15_15, &mercury__rbtree__STATE_VARIABLE_RBT_7);
    }
#line 838 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_7;
#line 838 "rbtree.m"
  }
#line 140 "rbtree.m"
}

#line 134 "rbtree.m"
void MR_CALL 
mercury__rbtree__upper_bound_lookup_4_p_0(
#line 134 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 134 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 134 "rbtree.m"
  MR_Word mercury__rbtree__T_5,
#line 134 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 134 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 134 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 134 "rbtree.m"
{
#line 827 "rbtree.m"
  {
#line 827 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 827 "rbtree.m"
    MR_Box mercury__rbtree__K0_9;
#line 827 "rbtree.m"
    MR_Box mercury__rbtree__V0_10;

#line 824 "rbtree.m"
    {
#line 824 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
#line 827 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 825 "rbtree.m"
      {
#line 825 "rbtree.m"
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 826 "rbtree.m"
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 825 "rbtree.m"
      }
#line 827 "rbtree.m"
    else
#line 828 "rbtree.m"
      {
#line 828 "rbtree.m"
        {
#line 828 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.upper_bound_lookup: key not found", mercury__rbtree__SearchK_6);
#line 828 "rbtree.m"
          return;
        }
#line 828 "rbtree.m"
      }
#line 827 "rbtree.m"
  }
#line 134 "rbtree.m"
}

#line 127 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__upper_bound_search_4_p_0(
#line 127 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
#line 127 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
#line 127 "rbtree.m"
  MR_Word mercury__rbtree__Tree_5,
#line 127 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 127 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 127 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 127 "rbtree.m"
{
#line 800 "rbtree.m"
  while (MR_TRUE)
#line 800 "rbtree.m"
    {
#line 800 "rbtree.m"
      /* tailcall optimized into a loop */
#line 800 "rbtree.m"
      {
#line 800 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 800 "rbtree.m"
        MR_Box mercury__rbtree__K0_9;
#line 800 "rbtree.m"
        MR_Box mercury__rbtree__V0_10;
#line 800 "rbtree.m"
        MR_Word mercury__rbtree__Left_11;
#line 800 "rbtree.m"
        MR_Word mercury__rbtree__Right_12;
#line 800 "rbtree.m"
        MR_Word mercury__rbtree__Result_13;

#line 802 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
#line 802 "rbtree.m"
          {
#line 802 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 802 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 802 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 802 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 802 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 802 "rbtree.m"
          }
#line 802 "rbtree.m"
        else
#line 802 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
#line 801 "rbtree.m"
            {
#line 801 "rbtree.m"
              mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 801 "rbtree.m"
              mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 801 "rbtree.m"
              mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 801 "rbtree.m"
              mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 801 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 801 "rbtree.m"
            }
#line 802 "rbtree.m"
          else
#line 802 "rbtree.m"
            mercury__rbtree__succeeded = MR_FALSE;
#line 800 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 800 "rbtree.m"
          {
#line 804 "rbtree.m"
            {
#line 804 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
#line 809 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 1))
#line 814 "rbtree.m"
              {
#line 814 "rbtree.m"
                MR_Box mercury__rbtree__Kp_14;
#line 814 "rbtree.m"
                MR_Box mercury__rbtree__Vp_15;

#line 811 "rbtree.m"
                {
#line 811 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Left_11, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                }
#line 814 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 812 "rbtree.m"
                  {
#line 812 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
#line 813 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
#line 812 "rbtree.m"
                  }
#line 814 "rbtree.m"
                else
#line 815 "rbtree.m"
                  {
#line 815 "rbtree.m"
                    *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 816 "rbtree.m"
                    *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 815 "rbtree.m"
                  }
#line 814 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 814 "rbtree.m"
              }
#line 809 "rbtree.m"
            else
#line 809 "rbtree.m"
              if ((mercury__rbtree__Result_13 == (MR_Integer) 0))
#line 806 "rbtree.m"
                {
#line 807 "rbtree.m"
                  *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 808 "rbtree.m"
                  *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 806 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 806 "rbtree.m"
                }
#line 809 "rbtree.m"
              else
#line 820 "rbtree.m"
                {
#line 820 "rbtree.m"
                  /* direct tailcall eliminated */
#line 820 "rbtree.m"
                  {
#line 820 "rbtree.m"
                    MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Right_12;

#line 820 "rbtree.m"
                    mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
#line 820 "rbtree.m"
                  }
#line 820 "rbtree.m"
                  continue;
#line 820 "rbtree.m"
                }
#line 800 "rbtree.m"
          }
#line 800 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 800 "rbtree.m"
      }
#line 800 "rbtree.m"
      break;
#line 800 "rbtree.m"
    }
#line 127 "rbtree.m"
}

#line 120 "rbtree.m"
void MR_CALL 
mercury__rbtree__lower_bound_lookup_4_p_0(
#line 120 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 120 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 120 "rbtree.m"
  MR_Word mercury__rbtree__T_5,
#line 120 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 120 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 120 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 120 "rbtree.m"
{
#line 793 "rbtree.m"
  {
#line 793 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 793 "rbtree.m"
    MR_Box mercury__rbtree__K0_9;
#line 793 "rbtree.m"
    MR_Box mercury__rbtree__V0_10;

#line 790 "rbtree.m"
    {
#line 790 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
#line 793 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 791 "rbtree.m"
      {
#line 791 "rbtree.m"
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 792 "rbtree.m"
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 791 "rbtree.m"
      }
#line 793 "rbtree.m"
    else
#line 794 "rbtree.m"
      {
#line 794 "rbtree.m"
        {
#line 794 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.lower_bound_lookup: key not found", mercury__rbtree__SearchK_6);
#line 794 "rbtree.m"
          return;
        }
#line 794 "rbtree.m"
      }
#line 793 "rbtree.m"
  }
#line 120 "rbtree.m"
}

#line 113 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__lower_bound_search_4_p_0(
#line 113 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
#line 113 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
#line 113 "rbtree.m"
  MR_Word mercury__rbtree__Tree_5,
#line 113 "rbtree.m"
  MR_Box mercury__rbtree__SearchK_6,
#line 113 "rbtree.m"
  MR_Box * mercury__rbtree__K_7,
#line 113 "rbtree.m"
  MR_Box * mercury__rbtree__V_8)
#line 113 "rbtree.m"
{
#line 766 "rbtree.m"
  while (MR_TRUE)
#line 766 "rbtree.m"
    {
#line 766 "rbtree.m"
      /* tailcall optimized into a loop */
#line 766 "rbtree.m"
      {
#line 766 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 766 "rbtree.m"
        MR_Box mercury__rbtree__K0_9;
#line 766 "rbtree.m"
        MR_Box mercury__rbtree__V0_10;
#line 766 "rbtree.m"
        MR_Word mercury__rbtree__Left_11;
#line 766 "rbtree.m"
        MR_Word mercury__rbtree__Right_12;
#line 766 "rbtree.m"
        MR_Word mercury__rbtree__Result_13;

#line 768 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
#line 768 "rbtree.m"
          {
#line 768 "rbtree.m"
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 768 "rbtree.m"
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 768 "rbtree.m"
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 768 "rbtree.m"
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 768 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 768 "rbtree.m"
          }
#line 768 "rbtree.m"
        else
#line 768 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
#line 767 "rbtree.m"
            {
#line 767 "rbtree.m"
              mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
#line 767 "rbtree.m"
              mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
#line 767 "rbtree.m"
              mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
#line 767 "rbtree.m"
              mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
#line 767 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 767 "rbtree.m"
            }
#line 768 "rbtree.m"
          else
#line 768 "rbtree.m"
            mercury__rbtree__succeeded = MR_FALSE;
#line 766 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 766 "rbtree.m"
          {
#line 770 "rbtree.m"
            {
#line 770 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
#line 775 "rbtree.m"
            if ((mercury__rbtree__Result_13 == (MR_Integer) 1))
#line 777 "rbtree.m"
              {
#line 777 "rbtree.m"
                /* direct tailcall eliminated */
#line 777 "rbtree.m"
                {
#line 777 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Left_11;

#line 777 "rbtree.m"
                  mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
#line 777 "rbtree.m"
                }
#line 777 "rbtree.m"
                continue;
#line 777 "rbtree.m"
              }
#line 775 "rbtree.m"
            else
#line 775 "rbtree.m"
              if ((mercury__rbtree__Result_13 == (MR_Integer) 0))
#line 772 "rbtree.m"
                {
#line 773 "rbtree.m"
                  *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 774 "rbtree.m"
                  *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 772 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 772 "rbtree.m"
                }
#line 775 "rbtree.m"
              else
#line 783 "rbtree.m"
                {
#line 783 "rbtree.m"
                  MR_Box mercury__rbtree__Kp_14;
#line 783 "rbtree.m"
                  MR_Box mercury__rbtree__Vp_15;

#line 780 "rbtree.m"
                  {
#line 780 "rbtree.m"
                    mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Right_12, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                  }
#line 783 "rbtree.m"
                  if (mercury__rbtree__succeeded)
#line 781 "rbtree.m"
                    {
#line 781 "rbtree.m"
                      *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
#line 782 "rbtree.m"
                      *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
#line 781 "rbtree.m"
                    }
#line 783 "rbtree.m"
                  else
#line 784 "rbtree.m"
                    {
#line 784 "rbtree.m"
                      *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
#line 785 "rbtree.m"
                      *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
#line 784 "rbtree.m"
                    }
#line 783 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 783 "rbtree.m"
                }
#line 766 "rbtree.m"
          }
#line 766 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 766 "rbtree.m"
      }
#line 766 "rbtree.m"
      break;
#line 766 "rbtree.m"
    }
#line 113 "rbtree.m"
}

#line 107 "rbtree.m"
void MR_CALL 
mercury__rbtree__lookup_3_p_0(
#line 107 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
#line 107 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
#line 107 "rbtree.m"
  MR_Word mercury__rbtree__T_4,
#line 107 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 107 "rbtree.m"
  MR_Box * mercury__rbtree__V_6)
#line 107 "rbtree.m"
{
#line 760 "rbtree.m"
  {
#line 760 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 760 "rbtree.m"
    MR_Box mercury__rbtree__V0_7;

#line 758 "rbtree.m"
    {
#line 758 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_4, mercury__rbtree__K_5, &mercury__rbtree__V0_7);
    }
#line 760 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 759 "rbtree.m"
      *mercury__rbtree__V_6 = mercury__rbtree__V0_7;
#line 760 "rbtree.m"
    else
#line 761 "rbtree.m"
      {
#line 761 "rbtree.m"
        {
#line 761 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
#line 761 "rbtree.m"
          return;
        }
#line 761 "rbtree.m"
      }
#line 760 "rbtree.m"
  }
#line 107 "rbtree.m"
}

#line 106 "rbtree.m"
MR_Box MR_CALL 
mercury__rbtree__lookup_2_f_0(
#line 106 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_7,
#line 106 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_8,
#line 106 "rbtree.m"
  MR_Word mercury__rbtree__RBT_4,
#line 106 "rbtree.m"
  MR_Box mercury__rbtree__K_5)
#line 106 "rbtree.m"
{
#line 760 "rbtree.m"
  {
#line 760 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 760 "rbtree.m"
    MR_Box mercury__rbtree__V_6;
#line 760 "rbtree.m"
    MR_Box mercury__rbtree__V0_12;

#line 758 "rbtree.m"
    {
#line 758 "rbtree.m"
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, mercury__rbtree__RBT_4, mercury__rbtree__K_5, &mercury__rbtree__V0_12);
    }
#line 760 "rbtree.m"
    if (mercury__rbtree__succeeded)
#line 759 "rbtree.m"
      mercury__rbtree__V_6 = mercury__rbtree__V0_12;
#line 760 "rbtree.m"
    else
#line 761 "rbtree.m"
      {
#line 761 "rbtree.m"
        {
#line 761 "rbtree.m"
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
        }
#line 761 "rbtree.m"
      }
#line 760 "rbtree.m"
    return mercury__rbtree__V_6;
#line 760 "rbtree.m"
  }
#line 106 "rbtree.m"
}

#line 101 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__search_3_p_0(
#line 101 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
#line 101 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
#line 101 "rbtree.m"
  MR_Word mercury__rbtree__Tree_4,
#line 101 "rbtree.m"
  MR_Box mercury__rbtree__K_5,
#line 101 "rbtree.m"
  MR_Box * mercury__rbtree__V_6)
#line 101 "rbtree.m"
{
#line 738 "rbtree.m"
  while (MR_TRUE)
#line 738 "rbtree.m"
    {
#line 738 "rbtree.m"
      /* tailcall optimized into a loop */
#line 738 "rbtree.m"
      {
#line 738 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;
#line 738 "rbtree.m"
        MR_Box mercury__rbtree__K0_7;
#line 738 "rbtree.m"
        MR_Box mercury__rbtree__V0_8;
#line 738 "rbtree.m"
        MR_Word mercury__rbtree__Left_9;
#line 738 "rbtree.m"
        MR_Word mercury__rbtree__Right_10;
#line 738 "rbtree.m"
        MR_Word mercury__rbtree__Result_11;

#line 740 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 2))))
#line 740 "rbtree.m"
          {
#line 740 "rbtree.m"
            mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 0));
#line 740 "rbtree.m"
            mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 1));
#line 740 "rbtree.m"
            mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 2)));
#line 740 "rbtree.m"
            mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 3)));
#line 740 "rbtree.m"
            mercury__rbtree__succeeded = MR_TRUE;
#line 740 "rbtree.m"
          }
#line 740 "rbtree.m"
        else
#line 740 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 1))))
#line 739 "rbtree.m"
            {
#line 739 "rbtree.m"
              mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 0));
#line 739 "rbtree.m"
              mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 1));
#line 739 "rbtree.m"
              mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 2)));
#line 739 "rbtree.m"
              mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 3)));
#line 739 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 739 "rbtree.m"
            }
#line 740 "rbtree.m"
          else
#line 740 "rbtree.m"
            mercury__rbtree__succeeded = MR_FALSE;
#line 738 "rbtree.m"
        if (mercury__rbtree__succeeded)
#line 738 "rbtree.m"
          {
#line 742 "rbtree.m"
            {
#line 742 "rbtree.m"
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_12, &mercury__rbtree__Result_11, mercury__rbtree__K_5, mercury__rbtree__K0_7);
            }
#line 746 "rbtree.m"
            if ((mercury__rbtree__Result_11 == (MR_Integer) 1))
#line 748 "rbtree.m"
              {
#line 748 "rbtree.m"
                /* direct tailcall eliminated */
#line 748 "rbtree.m"
                {
#line 748 "rbtree.m"
                  MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Left_9;

#line 748 "rbtree.m"
                  mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
#line 748 "rbtree.m"
                }
#line 748 "rbtree.m"
                continue;
#line 748 "rbtree.m"
              }
#line 746 "rbtree.m"
            else
#line 746 "rbtree.m"
              if ((mercury__rbtree__Result_11 == (MR_Integer) 0))
#line 745 "rbtree.m"
                {
#line 745 "rbtree.m"
                  *mercury__rbtree__V_6 = mercury__rbtree__V0_8;
#line 745 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 745 "rbtree.m"
                }
#line 746 "rbtree.m"
              else
#line 751 "rbtree.m"
                {
#line 751 "rbtree.m"
                  /* direct tailcall eliminated */
#line 751 "rbtree.m"
                  {
#line 751 "rbtree.m"
                    MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Right_10;

#line 751 "rbtree.m"
                    mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
#line 751 "rbtree.m"
                  }
#line 751 "rbtree.m"
                  continue;
#line 751 "rbtree.m"
                }
#line 738 "rbtree.m"
          }
#line 738 "rbtree.m"
        return mercury__rbtree__succeeded;
#line 738 "rbtree.m"
      }
#line 738 "rbtree.m"
      break;
#line 738 "rbtree.m"
    }
#line 101 "rbtree.m"
}

#line 96 "rbtree.m"
void MR_CALL 
mercury__rbtree__member_3_p_0(
#line 96 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_18,
#line 96 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_19,
#line 96 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 96 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__2_2,
#line 96 "rbtree.m"
  MR_Box * mercury__rbtree__HeadVar__3_3,
#line 96 "rbtree.m"
  MR_Cont mercury__rbtree__cont,
#line 96 "rbtree.m"
  void * mercury__rbtree__cont_env_ptr)
#line 96 "rbtree.m"
{
#line 716 "rbtree.m"
  while (MR_TRUE)
#line 716 "rbtree.m"
    {
#line 716 "rbtree.m"
      /* tailcall optimized into a loop */
#line 716 "rbtree.m"
      {
#line 716 "rbtree.m"
        MR_bool mercury__rbtree__succeeded;

#line 716 "rbtree.m"
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 726 "rbtree.m"
          {
#line 726 "rbtree.m"
            MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 726 "rbtree.m"
            MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 726 "rbtree.m"
            MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 726 "rbtree.m"
            MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 728 "rbtree.m"
            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_12;
#line 729 "rbtree.m"
            *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_13;
#line 728 "rbtree.m"
            {
#line 728 "rbtree.m"
              mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
            }
#line 731 "rbtree.m"
            {
#line 731 "rbtree.m"
              mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_14, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
            }
#line 733 "rbtree.m"
            /* direct tailcall eliminated */
#line 733 "rbtree.m"
            {
#line 733 "rbtree.m"
              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_15;

#line 733 "rbtree.m"
              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 733 "rbtree.m"
            }
#line 733 "rbtree.m"
            continue;
#line 726 "rbtree.m"
          }
#line 716 "rbtree.m"
        else
#line 716 "rbtree.m"
          if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 717 "rbtree.m"
            {
#line 717 "rbtree.m"
              MR_Box mercury__rbtree__K0_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
#line 717 "rbtree.m"
              MR_Box mercury__rbtree__V0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
#line 717 "rbtree.m"
              MR_Word mercury__rbtree__Left_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
#line 717 "rbtree.m"
              MR_Word mercury__rbtree__Right_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

#line 719 "rbtree.m"
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_6;
#line 720 "rbtree.m"
              *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_7;
#line 719 "rbtree.m"
              {
#line 719 "rbtree.m"
                mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
              }
#line 722 "rbtree.m"
              {
#line 722 "rbtree.m"
                mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_8, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
              }
#line 724 "rbtree.m"
              /* direct tailcall eliminated */
#line 724 "rbtree.m"
              {
#line 724 "rbtree.m"
                MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_9;

#line 724 "rbtree.m"
                mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
#line 724 "rbtree.m"
              }
#line 724 "rbtree.m"
              continue;
#line 717 "rbtree.m"
            }
#line 716 "rbtree.m"
          else
#line 716 "rbtree.m"
            {
#line 716 "rbtree.m"
            }
#line 716 "rbtree.m"
      }
#line 716 "rbtree.m"
      break;
#line 716 "rbtree.m"
    }
#line 96 "rbtree.m"
}

#line 93 "rbtree.m"
void MR_CALL 
mercury__rbtree__insert_duplicate_4_p_0(
#line 93 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_30,
#line 93 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_31,
#line 93 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 93 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 93 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 93 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 93 "rbtree.m"
{
#line 586 "rbtree.m"
  {
#line 586 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 586 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "rbtree.m"
      {
#line 586 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 586 "rbtree.m"
        {
#line 586 "rbtree.m"
          MR_Word base;
#line 586 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 586 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 586 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 586 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 586 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 586 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 586 "rbtree.m"
        }
#line 586 "rbtree.m"
      }
#line 586 "rbtree.m"
    else
#line 586 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 589 "rbtree.m"
        {
#line 589 "rbtree.m"
          MR_Word mercury__rbtree__Tree0_24;
#line 594 "rbtree.m"
          MR_Box mercury__rbtree__K1_25;
#line 594 "rbtree.m"
          MR_Box mercury__rbtree__V1_26;
#line 594 "rbtree.m"
          MR_Word mercury__rbtree__L1_27;
#line 594 "rbtree.m"
          MR_Word mercury__rbtree__R1_28;

#line 590 "rbtree.m"
          {
#line 590 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_30, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
#line 592 "rbtree.m"
          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 1)));
#line 592 "rbtree.m"
          if (mercury__rbtree__succeeded)
#line 592 "rbtree.m"
            {
#line 592 "rbtree.m"
              mercury__rbtree__K1_25 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 592 "rbtree.m"
              mercury__rbtree__V1_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 592 "rbtree.m"
              mercury__rbtree__L1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 592 "rbtree.m"
              mercury__rbtree__R1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));
#line 593 "rbtree.m"
              {
#line 593 "rbtree.m"
                MR_Word base;
#line 593 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "rbtree.m"
                *mercury__rbtree__HeadVar__4_4 = base;
#line 593 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_25;
#line 593 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_26;
#line 593 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_27));
#line 593 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_28));
#line 593 "rbtree.m"
              }
#line 592 "rbtree.m"
            }
#line 592 "rbtree.m"
          else
#line 595 "rbtree.m"
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 589 "rbtree.m"
        }
#line 586 "rbtree.m"
      else
#line 587 "rbtree.m"
        {
#line 588 "rbtree.m"
          {
#line 588 "rbtree.m"
            mercury__require__error_1_p_0((MR_String) "rbtree.insert_duplicate: root node cannot be red!");
#line 588 "rbtree.m"
            return;
          }
#line 587 "rbtree.m"
        }
#line 586 "rbtree.m"
  }
#line 93 "rbtree.m"
}

#line 92 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__insert_duplicate_3_f_0(
#line 92 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 92 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 92 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
#line 92 "rbtree.m"
  MR_Box mercury__rbtree__K_6,
#line 92 "rbtree.m"
  MR_Box mercury__rbtree__V_7)
#line 92 "rbtree.m"
{
#line 584 "rbtree.m"
  {
#line 584 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 584 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

#line 584 "rbtree.m"
    {
#line 584 "rbtree.m"
      mercury__rbtree__insert_duplicate_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
#line 584 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
#line 584 "rbtree.m"
  }
#line 92 "rbtree.m"
}

#line 88 "rbtree.m"
void MR_CALL 
mercury__rbtree__set_4_p_0(
#line 88 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_35,
#line 88 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_36,
#line 88 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 88 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 88 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 88 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 88 "rbtree.m"
{
#line 461 "rbtree.m"
  {
#line 461 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 461 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "rbtree.m"
      {
#line 461 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 461 "rbtree.m"
        {
#line 461 "rbtree.m"
          MR_Word base;
#line 461 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 461 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 461 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 461 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 461 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 461 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 461 "rbtree.m"
        }
#line 461 "rbtree.m"
      }
#line 461 "rbtree.m"
    else
#line 461 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 464 "rbtree.m"
        {
#line 464 "rbtree.m"
          MR_Word mercury__rbtree__Tree0_24;

#line 465 "rbtree.m"
          {
#line 465 "rbtree.m"
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
#line 470 "rbtree.m"
          if ((mercury__rbtree__Tree0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "rbtree.m"
            {
#line 475 "rbtree.m"
              {
#line 475 "rbtree.m"
                mercury__require__error_1_p_0((MR_String) "rbtree.set: new tree is empty");
#line 475 "rbtree.m"
                return;
              }
#line 474 "rbtree.m"
            }
#line 470 "rbtree.m"
          else
#line 470 "rbtree.m"
            if (((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 2))))
#line 469 "rbtree.m"
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 470 "rbtree.m"
            else
#line 471 "rbtree.m"
              {
#line 471 "rbtree.m"
                MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 471 "rbtree.m"
                MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 471 "rbtree.m"
                MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 471 "rbtree.m"
                MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

#line 472 "rbtree.m"
                {
#line 472 "rbtree.m"
                  MR_Word base;
#line 472 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 472 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 472 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
#line 472 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
#line 472 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
#line 472 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
#line 472 "rbtree.m"
                }
#line 471 "rbtree.m"
              }
#line 464 "rbtree.m"
        }
#line 461 "rbtree.m"
      else
#line 462 "rbtree.m"
        {
#line 463 "rbtree.m"
          {
#line 463 "rbtree.m"
            mercury__require__error_1_p_0((MR_String) "rbtree.set: root node cannot be red!");
#line 463 "rbtree.m"
            return;
          }
#line 462 "rbtree.m"
        }
#line 461 "rbtree.m"
  }
#line 88 "rbtree.m"
}

#line 87 "rbtree.m"
MR_Word MR_CALL 
mercury__rbtree__set_3_f_0(
#line 87 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
#line 87 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
#line 87 "rbtree.m"
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
#line 87 "rbtree.m"
  MR_Box mercury__rbtree__K_6,
#line 87 "rbtree.m"
  MR_Box mercury__rbtree__V_7)
#line 87 "rbtree.m"
{
#line 459 "rbtree.m"
  {
#line 459 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 459 "rbtree.m"
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

#line 459 "rbtree.m"
    {
#line 459 "rbtree.m"
      mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
#line 459 "rbtree.m"
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
#line 459 "rbtree.m"
  }
#line 87 "rbtree.m"
}

#line 82 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__transform_value_4_p_0(
#line 82 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_30,
#line 82 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
#line 82 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__1_1,
#line 82 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 82 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 82 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 82 "rbtree.m"
{
#line 419 "rbtree.m"
  {
#line 419 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 419 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 436 "rbtree.m"
      {
#line 436 "rbtree.m"
        MR_Box mercury__rbtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 436 "rbtree.m"
        MR_Box mercury__rbtree__V0_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 436 "rbtree.m"
        MR_Word mercury__rbtree__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 436 "rbtree.m"
        MR_Word mercury__rbtree__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 436 "rbtree.m"
        MR_Word mercury__rbtree__Result_26;

#line 437 "rbtree.m"
        {
#line 437 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_26, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_21);
        }
#line 442 "rbtree.m"
        if ((mercury__rbtree__Result_26 == (MR_Integer) 1))
#line 443 "rbtree.m"
          {
#line 443 "rbtree.m"
            MR_Word mercury__rbtree__NewL_28;

#line 444 "rbtree.m"
            {
#line 444 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_23, &mercury__rbtree__NewL_28);
            }
#line 443 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 443 "rbtree.m"
              {
#line 445 "rbtree.m"
                {
#line 445 "rbtree.m"
                  MR_Word base;
#line 445 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 445 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 445 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
#line 445 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
#line 445 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_28));
#line 445 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
#line 445 "rbtree.m"
                }
#line 445 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 443 "rbtree.m"
              }
#line 443 "rbtree.m"
          }
#line 442 "rbtree.m"
        else
#line 442 "rbtree.m"
          if ((mercury__rbtree__Result_26 == (MR_Integer) 0))
#line 439 "rbtree.m"
            {
#line 439 "rbtree.m"
              MR_Box mercury__rbtree__NewV_27;
#line 440 "rbtree.m"
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 440 "rbtree.m"
              {
#line 440 "rbtree.m"
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_22, &mercury__rbtree__NewV_27);
              }
#line 441 "rbtree.m"
              {
#line 441 "rbtree.m"
                MR_Word base;
#line 441 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 441 "rbtree.m"
                *mercury__rbtree__HeadVar__4_4 = base;
#line 441 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__2_2;
#line 441 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_27;
#line 441 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
#line 441 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
#line 441 "rbtree.m"
              }
#line 439 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 439 "rbtree.m"
            }
#line 442 "rbtree.m"
          else
#line 447 "rbtree.m"
            {
#line 447 "rbtree.m"
              MR_Word mercury__rbtree__NewR_29;

#line 448 "rbtree.m"
              {
#line 448 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_24, &mercury__rbtree__NewR_29);
              }
#line 447 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 447 "rbtree.m"
                {
#line 449 "rbtree.m"
                  {
#line 449 "rbtree.m"
                    MR_Word base;
#line 449 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 449 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 449 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
#line 449 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
#line 449 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
#line 449 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_29));
#line 449 "rbtree.m"
                  }
#line 449 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 447 "rbtree.m"
                }
#line 447 "rbtree.m"
            }
#line 436 "rbtree.m"
      }
#line 419 "rbtree.m"
    else
#line 419 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 421 "rbtree.m"
        {
#line 421 "rbtree.m"
          MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 421 "rbtree.m"
          MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 421 "rbtree.m"
          MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 421 "rbtree.m"
          MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 421 "rbtree.m"
          MR_Word mercury__rbtree__Result_15;

#line 422 "rbtree.m"
          {
#line 422 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_10);
          }
#line 427 "rbtree.m"
          if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 428 "rbtree.m"
            {
#line 428 "rbtree.m"
              MR_Word mercury__rbtree__NewL_17;

#line 429 "rbtree.m"
              {
#line 429 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_17);
              }
#line 428 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 428 "rbtree.m"
                {
#line 430 "rbtree.m"
                  {
#line 430 "rbtree.m"
                    MR_Word base;
#line 430 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 430 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 430 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 430 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 430 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
#line 430 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 430 "rbtree.m"
                  }
#line 430 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 428 "rbtree.m"
                }
#line 428 "rbtree.m"
            }
#line 427 "rbtree.m"
          else
#line 427 "rbtree.m"
            if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 424 "rbtree.m"
              {
#line 424 "rbtree.m"
                MR_Box mercury__rbtree__NewV_16;
#line 425 "rbtree.m"
                void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

#line 425 "rbtree.m"
                {
#line 425 "rbtree.m"
                  mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_11, &mercury__rbtree__NewV_16);
                }
#line 426 "rbtree.m"
                {
#line 426 "rbtree.m"
                  MR_Word base;
#line 426 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 426 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 426 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__2_2;
#line 426 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_16;
#line 426 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 426 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 426 "rbtree.m"
                }
#line 424 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 424 "rbtree.m"
              }
#line 427 "rbtree.m"
            else
#line 432 "rbtree.m"
              {
#line 432 "rbtree.m"
                MR_Word mercury__rbtree__NewR_18;

#line 433 "rbtree.m"
                {
#line 433 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_18);
                }
#line 432 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 432 "rbtree.m"
                  {
#line 434 "rbtree.m"
                    {
#line 434 "rbtree.m"
                      MR_Word base;
#line 434 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 434 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 434 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 434 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 434 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 434 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
#line 434 "rbtree.m"
                    }
#line 434 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 432 "rbtree.m"
                  }
#line 432 "rbtree.m"
              }
#line 421 "rbtree.m"
        }
#line 419 "rbtree.m"
      else
#line 419 "rbtree.m"
        mercury__rbtree__succeeded = MR_FALSE;
#line 419 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 419 "rbtree.m"
  }
#line 82 "rbtree.m"
}

#line 75 "rbtree.m"
MR_bool MR_CALL 
mercury__rbtree__update_4_p_0(
#line 75 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_K_28,
#line 75 "rbtree.m"
  MR_Word mercury__rbtree__TypeInfo_for_V_29,
#line 75 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__1_1,
#line 75 "rbtree.m"
  MR_Box mercury__rbtree__HeadVar__2_2,
#line 75 "rbtree.m"
  MR_Word mercury__rbtree__HeadVar__3_3,
#line 75 "rbtree.m"
  MR_Word * mercury__rbtree__HeadVar__4_4)
#line 75 "rbtree.m"
{
#line 386 "rbtree.m"
  {
#line 386 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 386 "rbtree.m"
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 402 "rbtree.m"
      {
#line 402 "rbtree.m"
        MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 402 "rbtree.m"
        MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 402 "rbtree.m"
        MR_Word mercury__rbtree__L_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 402 "rbtree.m"
        MR_Word mercury__rbtree__R_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 402 "rbtree.m"
        MR_Word mercury__rbtree__Result_25;

#line 403 "rbtree.m"
        {
#line 403 "rbtree.m"
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_25, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_20);
        }
#line 407 "rbtree.m"
        if ((mercury__rbtree__Result_25 == (MR_Integer) 1))
#line 408 "rbtree.m"
          {
#line 408 "rbtree.m"
            MR_Word mercury__rbtree__NewL_26;

#line 409 "rbtree.m"
            {
#line 409 "rbtree.m"
              mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_22, &mercury__rbtree__NewL_26);
            }
#line 408 "rbtree.m"
            if (mercury__rbtree__succeeded)
#line 408 "rbtree.m"
              {
#line 410 "rbtree.m"
                {
#line 410 "rbtree.m"
                  MR_Word base;
#line 410 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 410 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 410 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 410 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_26));
#line 410 "rbtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
#line 410 "rbtree.m"
                }
#line 410 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 408 "rbtree.m"
              }
#line 408 "rbtree.m"
          }
#line 407 "rbtree.m"
        else
#line 407 "rbtree.m"
          if ((mercury__rbtree__Result_25 == (MR_Integer) 0))
#line 406 "rbtree.m"
            {
#line 406 "rbtree.m"
              {
#line 406 "rbtree.m"
                MR_Word base;
#line 406 "rbtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 406 "rbtree.m"
                *mercury__rbtree__HeadVar__4_4 = base;
#line 406 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 406 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 406 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
#line 406 "rbtree.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
#line 406 "rbtree.m"
              }
#line 406 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 406 "rbtree.m"
            }
#line 407 "rbtree.m"
          else
#line 412 "rbtree.m"
            {
#line 412 "rbtree.m"
              MR_Word mercury__rbtree__NewR_27;

#line 413 "rbtree.m"
              {
#line 413 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_23, &mercury__rbtree__NewR_27);
              }
#line 412 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 412 "rbtree.m"
                {
#line 414 "rbtree.m"
                  {
#line 414 "rbtree.m"
                    MR_Word base;
#line 414 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 414 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 414 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
#line 414 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
#line 414 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
#line 414 "rbtree.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_27));
#line 414 "rbtree.m"
                  }
#line 414 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 412 "rbtree.m"
                }
#line 412 "rbtree.m"
            }
#line 402 "rbtree.m"
      }
#line 386 "rbtree.m"
    else
#line 386 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 388 "rbtree.m"
        {
#line 388 "rbtree.m"
          MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
#line 388 "rbtree.m"
          MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
#line 388 "rbtree.m"
          MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
#line 388 "rbtree.m"
          MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
#line 388 "rbtree.m"
          MR_Word mercury__rbtree__Result_15;

#line 389 "rbtree.m"
          {
#line 389 "rbtree.m"
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_10);
          }
#line 393 "rbtree.m"
          if ((mercury__rbtree__Result_15 == (MR_Integer) 1))
#line 394 "rbtree.m"
            {
#line 394 "rbtree.m"
              MR_Word mercury__rbtree__NewL_16;

#line 395 "rbtree.m"
              {
#line 395 "rbtree.m"
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_16);
              }
#line 394 "rbtree.m"
              if (mercury__rbtree__succeeded)
#line 394 "rbtree.m"
                {
#line 396 "rbtree.m"
                  {
#line 396 "rbtree.m"
                    MR_Word base;
#line 396 "rbtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 396 "rbtree.m"
                    *mercury__rbtree__HeadVar__4_4 = base;
#line 396 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 396 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 396 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_16));
#line 396 "rbtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 396 "rbtree.m"
                  }
#line 396 "rbtree.m"
                  mercury__rbtree__succeeded = MR_TRUE;
#line 394 "rbtree.m"
                }
#line 394 "rbtree.m"
            }
#line 393 "rbtree.m"
          else
#line 393 "rbtree.m"
            if ((mercury__rbtree__Result_15 == (MR_Integer) 0))
#line 392 "rbtree.m"
              {
#line 392 "rbtree.m"
                {
#line 392 "rbtree.m"
                  MR_Word base;
#line 392 "rbtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = base;
#line 392 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 392 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 392 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 392 "rbtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
#line 392 "rbtree.m"
                }
#line 392 "rbtree.m"
                mercury__rbtree__succeeded = MR_TRUE;
#line 392 "rbtree.m"
              }
#line 393 "rbtree.m"
            else
#line 398 "rbtree.m"
              {
#line 398 "rbtree.m"
                MR_Word mercury__rbtree__NewR_17;

#line 399 "rbtree.m"
                {
#line 399 "rbtree.m"
                  mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_17);
                }
#line 398 "rbtree.m"
                if (mercury__rbtree__succeeded)
#line 398 "rbtree.m"
                  {
#line 400 "rbtree.m"
                    {
#line 400 "rbtree.m"
                      MR_Word base;
#line 400 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 400 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 400 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
#line 400 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
#line 400 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
#line 400 "rbtree.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_17));
#line 400 "rbtree.m"
                    }
#line 400 "rbtree.m"
                    mercury__rbtree__succeeded = MR_TRUE;
#line 398 "rbtree.m"
                  }
#line 398 "rbtree.m"
              }
#line 388 "rbtree.m"
        }
#line 386 "rbtree.m"
      else
#line 386 "rbtree.m"
        mercury__rbtree__succeeded = MR_FALSE;
#line 386 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 386 "rbtree.m"
  }
#line 75 "rbtree.m"
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
#line 271 "rbtree.m"
  {
#line 271 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 271 "rbtree.m"
    if ((mercury__rbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "rbtree.m"
      {
#line 271 "rbtree.m"
        MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 271 "rbtree.m"
        MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 271 "rbtree.m"
        {
#line 271 "rbtree.m"
          MR_Word base;
#line 271 "rbtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 271 "rbtree.m"
          *mercury__rbtree__HeadVar__4_4 = base;
#line 271 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
#line 271 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
#line 271 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 271 "rbtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
#line 271 "rbtree.m"
        }
#line 271 "rbtree.m"
        mercury__rbtree__succeeded = MR_TRUE;
#line 271 "rbtree.m"
      }
#line 271 "rbtree.m"
    else
#line 271 "rbtree.m"
      if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 274 "rbtree.m"
        {
#line 274 "rbtree.m"
          MR_Word mercury__rbtree__Tree0_24;

#line 275 "rbtree.m"
          {
#line 275 "rbtree.m"
            mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
#line 274 "rbtree.m"
          if (mercury__rbtree__succeeded)
#line 274 "rbtree.m"
            {
#line 280 "rbtree.m"
              if ((mercury__rbtree__Tree0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "rbtree.m"
                {
#line 285 "rbtree.m"
                  {
#line 285 "rbtree.m"
                    mercury__require__error_1_p_0((MR_String) "rbtree.insert: new tree is empty");
                  }
#line 284 "rbtree.m"
                }
#line 280 "rbtree.m"
              else
#line 280 "rbtree.m"
                if (((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 2))))
#line 279 "rbtree.m"
                  *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
#line 280 "rbtree.m"
                else
#line 281 "rbtree.m"
                  {
#line 281 "rbtree.m"
                    MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
#line 281 "rbtree.m"
                    MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
#line 281 "rbtree.m"
                    MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
#line 281 "rbtree.m"
                    MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

#line 282 "rbtree.m"
                    {
#line 282 "rbtree.m"
                      MR_Word base;
#line 282 "rbtree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 282 "rbtree.m"
                      *mercury__rbtree__HeadVar__4_4 = base;
#line 282 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
#line 282 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
#line 282 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
#line 282 "rbtree.m"
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
#line 282 "rbtree.m"
                    }
#line 281 "rbtree.m"
                  }
#line 280 "rbtree.m"
              mercury__rbtree__succeeded = MR_TRUE;
#line 274 "rbtree.m"
            }
#line 274 "rbtree.m"
        }
#line 271 "rbtree.m"
      else
#line 272 "rbtree.m"
        {
#line 273 "rbtree.m"
          {
#line 273 "rbtree.m"
            mercury__require__error_1_p_0((MR_String) "rbtree.insert: root node cannot be red!");
          }
#line 272 "rbtree.m"
          mercury__rbtree__succeeded = MR_TRUE;
#line 272 "rbtree.m"
        }
#line 271 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 271 "rbtree.m"
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
#line 261 "rbtree.m"
  {
#line 261 "rbtree.m"
    MR_bool mercury__rbtree__succeeded = (mercury__rbtree__Tree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 261 "rbtree.m"
    return mercury__rbtree__succeeded;
#line 261 "rbtree.m"
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
#line 263 "rbtree.m"
  {
#line 263 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 263 "rbtree.m"
    MR_Word mercury__rbtree__HeadVar__3_3;
#line 263 "rbtree.m"
    MR_Word mercury__rbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "rbtree.m"
    MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 263 "rbtree.m"
    {
#line 263 "rbtree.m"
      mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 263 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 0) = mercury__rbtree__K_4;
#line 263 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 1) = mercury__rbtree__V_5;
#line 263 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 2) = ((MR_Box) (mercury__rbtree__V_6_6));
#line 263 "rbtree.m"
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 3) = ((MR_Box) (mercury__rbtree__V_7_7));
#line 263 "rbtree.m"
    }
#line 263 "rbtree.m"
    return mercury__rbtree__HeadVar__3_3;
#line 263 "rbtree.m"
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
#line 258 "rbtree.m"
  {
#line 258 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;

#line 258 "rbtree.m"
    *mercury__rbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "rbtree.m"
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
#line 258 "rbtree.m"
  {
#line 258 "rbtree.m"
    MR_bool mercury__rbtree__succeeded;
#line 258 "rbtree.m"
    MR_Word mercury__rbtree__RBT_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 258 "rbtree.m"
    return mercury__rbtree__RBT_2;
#line 258 "rbtree.m"
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
