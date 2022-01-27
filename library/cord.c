/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module cord. */
/* :- implementation. */

/*
INIT mercury__cord__init
ENDINIT
*/

#include "cord.mih"


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




#line 86 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0;

#line 89 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1;

#line 92 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1];

#line 95 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1;

#line 98 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1];

#line 101 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1];

#line 104 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2];

#line 107 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2];

#line 110 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2];

#line 113 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1];

#line 116 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0;

#line 119 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1;

#line 122 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2];

#line 125 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1;

#line 128 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2];

#line 131 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2;

#line 134 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1];

#line 137 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1];

#line 140 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1];

#line 143 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[3];

#line 146 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3];

#line 149 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3];

#line 152 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
#line 155 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 157 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 159 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3);

#line 162 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
#line 165 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 167 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 169 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 171 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4);

#line 174 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
#line 177 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 179 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 181 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3);

#line 184 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
#line 187 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 189 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 191 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 193 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4);

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__cord__HeadVar__4_4);

#line 622 "cord.m"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(
#line 622 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 622 "cord.m"
  MR_Integer mercury__cord__Acc_3);

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 258 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 258 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 258 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 258 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 258 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 418 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 418 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 418 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 418 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 418 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 296 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 296 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 296 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2);


static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
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



#line 624 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0 = {
  (MR_String) "empty_cord",
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

#line 639 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 647 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 652 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1 = {
  (MR_String) "nonempty_cord",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__cord__cord__field_types_cord_1_1,
  NULL,
  NULL,
  NULL
};

#line 667 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0
};

#line 672 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 677 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__cord__cord__du_stag_ordered_cord_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_1_1
  }
};

#line 691 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0,
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 697 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 703 "cord.c"
const MR_TypeCtorInfo_Struct mercury__cord__cord__type_ctor_info_cord_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord",
  {
    mercury__cord__cord__du_name_ordered_cord_1
  },
  {
    mercury__cord__cord__du_ptag_ordered_cord_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__cord__cord__functor_number_map_cord_1
};

#line 724 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 729 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0 = {
  (MR_String) "unit_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__cord__cord__field_types_cord_node_1_0,
  NULL,
  NULL,
  NULL
};

#line 744 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 752 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__cord__list__pti_list_1__pseudo_1
};

#line 758 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1 = {
  (MR_String) "list_node",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__cord__cord__field_types_cord_node_1_1,
  NULL,
  NULL,
  NULL
};

#line 773 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 779 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2 = {
  (MR_String) "branch_node",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__cord__cord__field_types_cord_node_1_2,
  NULL,
  NULL,
  NULL
};

#line 794 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 799 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_1
};

#line 804 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2
};

#line 809 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_2
  }
};

#line 828 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2,
  &mercury__cord__cord__du_functor_desc_cord_node_1_1,
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 835 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 842 "cord.c"
const MR_TypeCtorInfo_Struct mercury__cord__cord__type_ctor_info_cord_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_node_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_node_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord_node",
  {
    mercury__cord__cord__du_name_ordered_cord_node_1
  },
  {
    mercury__cord__cord__du_ptag_ordered_cord_node_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__cord__cord__functor_number_map_cord_node_1
};

#line 863 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
#line 866 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 868 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 870 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 872 "cord.c"
{
#line 874 "cord.c"
  {
#line 876 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 879 "cord.c"
    {
#line 881 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 884 "cord.c"
    return mercury__cord__succeeded;
#line 886 "cord.c"
  }
#line 888 "cord.c"
}

#line 891 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
#line 894 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 896 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 898 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 900 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 902 "cord.c"
{
#line 904 "cord.c"
  {
#line 906 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 909 "cord.c"
    {
#line 911 "cord.c"
      mercury__cord____Compare____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 914 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 916 "cord.c"
  }
#line 918 "cord.c"
}

#line 921 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
#line 924 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 926 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 928 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 930 "cord.c"
{
#line 932 "cord.c"
  {
#line 934 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 937 "cord.c"
    {
#line 939 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 942 "cord.c"
    return mercury__cord__succeeded;
#line 944 "cord.c"
  }
#line 946 "cord.c"
}

#line 949 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
#line 952 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 954 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 956 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 958 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 960 "cord.c"
{
#line 962 "cord.c"
  {
#line 964 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 967 "cord.c"
    {
#line 969 "cord.c"
      mercury__cord____Compare____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 972 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 974 "cord.c"
  }
#line 976 "cord.c"
}

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 332 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Integer mercury__cord__STATE_VARIABLE_A_15_15_13 = (mercury__cord__HeadVar__3_3 + (MR_Integer) 1);
#line 334 "list.opt"
            MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 336 "list.opt"
              MR_Integer mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 622 "cord.m"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(
#line 622 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 622 "cord.m"
  MR_Integer mercury__cord__Acc_3)
#line 622 "cord.m"
{
#line 624 "cord.m"
  while (MR_TRUE)
#line 624 "cord.m"
    {
#line 624 "cord.m"
      /* tailcall optimized into a loop */
#line 624 "cord.m"
      {
#line 624 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 624 "cord.m"
        MR_Integer mercury__cord__HeadVar__4_4;

#line 624 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 626 "cord.m"
          {
#line 626 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "cord.m"
            MR_Integer mercury__cord__V_17_17;

#line 627 "cord.m"
            {
#line 627 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(mercury__cord__A_14, mercury__cord__Acc_3);
            }
#line 626 "cord.m"
            /* direct tailcall eliminated */
#line 626 "cord.m"
            {
#line 626 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_15;
#line 626 "cord.m"
              MR_Integer mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 626 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 626 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 626 "cord.m"
            }
#line 626 "cord.m"
            continue;
#line 626 "cord.m"
          }
#line 624 "cord.m"
        else
#line 624 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 625 "cord.m"
            {
#line 625 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 625 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 625 "cord.m"
              {
#line 625 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 625 "cord.m"
              }
#line 347 "list.opt"
              {
#line 347 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 625 "cord.m"
            }
#line 624 "cord.m"
          else
#line 624 "cord.m"
            {
#line 468 "cord.m"
              mercury__cord__HeadVar__4_4 = (mercury__cord__Acc_3 + (MR_Integer) 1);
#line 624 "cord.m"
            }
#line 624 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 624 "cord.m"
      }
#line 624 "cord.m"
      break;
#line 624 "cord.m"
    }
#line 622 "cord.m"
}

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 332 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 334 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Box mercury__cord__STATE_VARIABLE_A_15_15_13;
#line 342 "list.opt"
            MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));

#line 342 "list.opt"
            {
#line 342 "list.opt"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__H_10_9, mercury__cord__HeadVar__3_3);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 336 "list.opt"
              MR_Box mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 258 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 258 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 258 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 258 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 258 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4)
#line 258 "list.int"
{
#line 348 "list.opt"
  {
#line 348 "list.opt"
    MR_bool mercury__cord__succeeded;

#line 348 "list.opt"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "list.opt"
      *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 348 "list.opt"
    else
#line 350 "list.opt"
      {
#line 350 "list.opt"
        MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 350 "list.opt"
        MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 350 "list.opt"
        MR_Box mercury__cord__STATE_VARIABLE_A_15_15_13;
#line 358 "list.opt"
        MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box);

#line 351 "list.opt"
        {
#line 351 "list.opt"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__V_18_18, mercury__cord__T_11_10, mercury__cord__HeadVar__3_3, &mercury__cord__STATE_VARIABLE_A_15_15_13);
        }
#line 358 "list.opt"
        mercury__cord__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));
#line 358 "list.opt"
        {
#line 358 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__H_10_9, mercury__cord__STATE_VARIABLE_A_15_15_13);
        }
#line 350 "list.opt"
      }
#line 348 "list.opt"
  }
#line 258 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__cord__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 418 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 418 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 418 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 418 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 418 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4)
#line 418 "cord.m"
{
#line 420 "cord.m"
  {
#line 420 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 420 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "cord.m"
      {
#line 420 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "cord.m"
        *mercury__cord__HeadVar__4_4 = mercury__cord__Prev_1;
#line 420 "cord.m"
      }
#line 420 "cord.m"
    else
#line 421 "cord.m"
      {
#line 421 "cord.m"
        MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 421 "cord.m"
        MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 421 "cord.m"
        MR_Word mercury__cord__AllButLast0_11;

#line 422 "cord.m"
        {
#line 422 "cord.m"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLast0_11, mercury__cord__HeadVar__4_4);
        }
#line 423 "cord.m"
        {
#line 423 "cord.m"
          MR_Word base;
#line 423 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 423 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__Prev_1;
#line 423 "cord.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__AllButLast0_11));
#line 423 "cord.m"
        }
#line 421 "cord.m"
      }
#line 420 "cord.m"
  }
#line 418 "cord.m"
}

#line 296 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 296 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 296 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 296 "cord.m"
{
#line 298 "cord.m"
  while (MR_TRUE)
#line 298 "cord.m"
    {
#line 298 "cord.m"
      /* tailcall optimized into a loop */
#line 298 "cord.m"
      {
#line 298 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 298 "cord.m"
        MR_Word mercury__cord__HeadVar__3_3;

#line 298 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "cord.m"
          mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__2_2;
#line 298 "cord.m"
        else
#line 299 "cord.m"
          {
#line 299 "cord.m"
            MR_Box mercury__cord__X_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 299 "cord.m"
            MR_Word mercury__cord__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "cord.m"
            MR_Word mercury__cord__V_8_8;

#line 300 "cord.m"
            {
#line 300 "cord.m"
              mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 0) = mercury__cord__X_5;
#line 300 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 300 "cord.m"
            }
#line 299 "cord.m"
            /* direct tailcall eliminated */
#line 299 "cord.m"
            {
#line 299 "cord.m"
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Xs_6;
#line 299 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_8_8;

#line 299 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 299 "cord.m"
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 299 "cord.m"
            }
#line 299 "cord.m"
            continue;
#line 299 "cord.m"
          }
#line 298 "cord.m"
        return mercury__cord__HeadVar__3_3;
#line 298 "cord.m"
      }
#line 298 "cord.m"
      break;
#line 298 "cord.m"
    }
#line 296 "cord.m"
}

#line 234 "cord.m"
void MR_CALL 
mercury__cord____Compare____cord_node_1_0(
#line 234 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_38,
#line 234 "cord.m"
  MR_Word * mercury__cord__HeadVar__1_1,
#line 234 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 234 "cord.m"
  MR_Word mercury__cord__HeadVar__3_3)
#line 234 "cord.m"
{
#line 234 "cord.m"
  while (MR_TRUE)
#line 234 "cord.m"
    {
#line 234 "cord.m"
      /* tailcall optimized into a loop */
#line 234 "cord.m"
      {
#line 234 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 234 "cord.m"
        MR_Integer mercury__cord__CastX_36 = (MR_Integer) mercury__cord__HeadVar__2_2;
#line 234 "cord.m"
        MR_Integer mercury__cord__CastY_37 = (MR_Integer) mercury__cord__HeadVar__3_3;

#line 234 "cord.m"
        mercury__cord__succeeded = (mercury__cord__CastX_36 == mercury__cord__CastY_37);
#line 234 "cord.m"
        if (mercury__cord__succeeded)
#line 1469 "cord.c"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "cord.m"
        else
#line 234 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 234 "cord.m"
            {
#line 234 "cord.m"
              MR_Word mercury__cord__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "cord.m"
              MR_Word mercury__cord__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 234 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 234 "cord.m"
                {
#line 234 "cord.m"
                  MR_Word mercury__cord__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "cord.m"
                  MR_Word mercury__cord__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "cord.m"
                  MR_Word mercury__cord__V_35_35;

#line 234 "cord.m"
                  {
#line 234 "cord.m"
                    mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_35_35, mercury__cord__V_46_46, mercury__cord__V_33_33);
                  }
#line 1498 "cord.c"
                  mercury__cord__succeeded = (mercury__cord__V_35_35 == (MR_Integer) 0);
#line 234 "cord.m"
                  mercury__cord__succeeded = !(mercury__cord__succeeded);
#line 234 "cord.m"
                  if (mercury__cord__succeeded)
#line 234 "cord.m"
                    *mercury__cord__HeadVar__1_1 = mercury__cord__V_35_35;
#line 234 "cord.m"
                  else
#line 234 "cord.m"
                    {
#line 234 "cord.m"
                      /* direct tailcall eliminated */
#line 234 "cord.m"
                      {
#line 234 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_45_45;
#line 234 "cord.m"
                        MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_34_34;

#line 234 "cord.m"
                        mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 234 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 234 "cord.m"
                      }
#line 234 "cord.m"
                      continue;
#line 234 "cord.m"
                    }
#line 234 "cord.m"
                }
#line 234 "cord.m"
              else
#line 234 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1535 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 234 "cord.m"
                else
#line 1539 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 234 "cord.m"
            }
#line 234 "cord.m"
          else
#line 234 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 234 "cord.m"
              {
#line 234 "cord.m"
                MR_Word mercury__cord__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "cord.m"
                MR_Box mercury__cord__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 234 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1556 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 234 "cord.m"
                else
#line 234 "cord.m"
                  if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 234 "cord.m"
                    {
#line 234 "cord.m"
                      MR_Box mercury__cord__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0));
#line 234 "cord.m"
                      MR_Word mercury__cord__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "cord.m"
                      MR_Word mercury__cord__V_19_19;

#line 234 "cord.m"
                      {
#line 234 "cord.m"
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_19_19, mercury__cord__V_48_48, mercury__cord__V_17_17);
                      }
#line 1576 "cord.c"
                      mercury__cord__succeeded = (mercury__cord__V_19_19 == (MR_Integer) 0);
#line 234 "cord.m"
                      mercury__cord__succeeded = !(mercury__cord__succeeded);
#line 234 "cord.m"
                      if (mercury__cord__succeeded)
#line 234 "cord.m"
                        *mercury__cord__HeadVar__1_1 = mercury__cord__V_19_19;
#line 234 "cord.m"
                      else
#line 234 "cord.m"
                        {
#line 234 "cord.m"
                          mercury__list____Compare____list_1_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_47_47, mercury__cord__V_18_18);
#line 234 "cord.m"
                          return;
                        }
#line 234 "cord.m"
                    }
#line 234 "cord.m"
                  else
#line 1597 "cord.c"
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 234 "cord.m"
              }
#line 234 "cord.m"
            else
#line 234 "cord.m"
              {
#line 234 "cord.m"
                MR_Box mercury__cord__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 234 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1610 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 234 "cord.m"
                else
#line 234 "cord.m"
                  if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1616 "cord.c"
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 234 "cord.m"
                  else
#line 234 "cord.m"
                    {
#line 234 "cord.m"
                      MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__3_3, (MR_Integer) 0));

#line 234 "cord.m"
                      {
#line 234 "cord.m"
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_49_49, mercury__cord__V_5_5);
#line 234 "cord.m"
                        return;
                      }
#line 234 "cord.m"
                    }
#line 234 "cord.m"
              }
#line 234 "cord.m"
      }
#line 234 "cord.m"
      break;
#line 234 "cord.m"
    }
#line 234 "cord.m"
}

#line 234 "cord.m"
MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0(
#line 234 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 234 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 234 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 234 "cord.m"
{
#line 234 "cord.m"
  while (MR_TRUE)
#line 234 "cord.m"
    {
#line 234 "cord.m"
      /* tailcall optimized into a loop */
#line 234 "cord.m"
      {
#line 234 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 234 "cord.m"
        MR_Integer mercury__cord__CastX_13 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 234 "cord.m"
        MR_Integer mercury__cord__CastY_14 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 234 "cord.m"
        mercury__cord__succeeded = (mercury__cord__CastX_13 == mercury__cord__CastY_14);
#line 234 "cord.m"
        if (mercury__cord__succeeded)
#line 234 "cord.m"
          mercury__cord__succeeded = MR_TRUE;
#line 234 "cord.m"
        else
#line 234 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 234 "cord.m"
            {
#line 234 "cord.m"
              MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "cord.m"
              MR_Word mercury__cord__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "cord.m"
              MR_Word mercury__cord__V_11_11;
#line 234 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 234 "cord.m"
              mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 234 "cord.m"
              if (mercury__cord__succeeded)
#line 234 "cord.m"
                {
#line 234 "cord.m"
                  mercury__cord__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "cord.m"
                  mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 1702 "cord.c"
                  {
#line 1704 "cord.c"
                    mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_9_9, mercury__cord__V_11_11);
                  }
#line 234 "cord.m"
                  if (mercury__cord__succeeded)
#line 1709 "cord.c"
                    {
#line 1711 "cord.c"
                      /* direct tailcall eliminated */
#line 1713 "cord.c"
                      {
#line 1715 "cord.c"
                        MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_10_10;
#line 1717 "cord.c"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_12_12;

#line 1720 "cord.c"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 1722 "cord.c"
                        mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 1724 "cord.c"
                      }
#line 1726 "cord.c"
                      continue;
#line 1728 "cord.c"
                    }
#line 234 "cord.m"
                }
#line 234 "cord.m"
            }
#line 234 "cord.m"
          else
#line 234 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 234 "cord.m"
              {
#line 234 "cord.m"
                MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 234 "cord.m"
                MR_Word mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "cord.m"
                MR_Box mercury__cord__V_7_7;
#line 234 "cord.m"
                MR_Word mercury__cord__V_8_8;

#line 234 "cord.m"
                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 234 "cord.m"
                if (mercury__cord__succeeded)
#line 234 "cord.m"
                  {
#line 234 "cord.m"
                    mercury__cord__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 234 "cord.m"
                    mercury__cord__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 1759 "cord.c"
                    {
#line 1761 "cord.c"
                      mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_5_5, mercury__cord__V_7_7);
                    }
#line 234 "cord.m"
                    if (mercury__cord__succeeded)
#line 1766 "cord.c"
                      {
#line 1768 "cord.c"
                        return mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_6_6, mercury__cord__V_8_8);
                      }
#line 234 "cord.m"
                  }
#line 234 "cord.m"
              }
#line 234 "cord.m"
            else
#line 234 "cord.m"
              {
#line 234 "cord.m"
                MR_Box mercury__cord__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 234 "cord.m"
                MR_Box mercury__cord__V_4_4;

#line 234 "cord.m"
                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 234 "cord.m"
                if (mercury__cord__succeeded)
#line 234 "cord.m"
                  {
#line 234 "cord.m"
                    mercury__cord__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 1792 "cord.c"
                    {
#line 1794 "cord.c"
                      return mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_3_3, mercury__cord__V_4_4);
                    }
#line 234 "cord.m"
                  }
#line 234 "cord.m"
              }
#line 234 "cord.m"
        return mercury__cord__succeeded;
#line 234 "cord.m"
      }
#line 234 "cord.m"
      break;
#line 234 "cord.m"
    }
#line 234 "cord.m"
}

#line 230 "cord.m"
void MR_CALL 
mercury__cord____Compare____cord_1_0(
#line 230 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 230 "cord.m"
  MR_Word * mercury__cord__HeadVar__1_1,
#line 230 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 230 "cord.m"
  MR_Word mercury__cord__HeadVar__3_3)
#line 230 "cord.m"
{
#line 230 "cord.m"
  {
#line 230 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 230 "cord.m"
    MR_Integer mercury__cord__CastX_8 = (MR_Integer) mercury__cord__HeadVar__2_2;
#line 230 "cord.m"
    MR_Integer mercury__cord__CastY_9 = (MR_Integer) mercury__cord__HeadVar__3_3;

#line 230 "cord.m"
    mercury__cord__succeeded = (mercury__cord__CastX_8 == mercury__cord__CastY_9);
#line 230 "cord.m"
    if (mercury__cord__succeeded)
#line 1838 "cord.c"
      *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "cord.m"
    else
#line 230 "cord.m"
      if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "cord.m"
        if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "cord.m"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "cord.m"
        else
#line 1850 "cord.c"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 230 "cord.m"
      else
#line 230 "cord.m"
        {
#line 230 "cord.m"
          MR_Word mercury__cord__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 230 "cord.m"
          if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1861 "cord.c"
            *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 230 "cord.m"
          else
#line 230 "cord.m"
            {
#line 230 "cord.m"
              MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));

#line 230 "cord.m"
              {
#line 230 "cord.m"
                mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__HeadVar__1_1, mercury__cord__V_13_13, mercury__cord__V_7_7);
#line 230 "cord.m"
                return;
              }
#line 230 "cord.m"
            }
#line 230 "cord.m"
        }
#line 230 "cord.m"
  }
#line 230 "cord.m"
}

#line 230 "cord.m"
MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0(
#line 230 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 230 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 230 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 230 "cord.m"
{
#line 230 "cord.m"
  {
#line 230 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 230 "cord.m"
    MR_Integer mercury__cord__CastX_7 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 230 "cord.m"
    MR_Integer mercury__cord__CastY_8 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 230 "cord.m"
    mercury__cord__succeeded = (mercury__cord__CastX_7 == mercury__cord__CastY_8);
#line 230 "cord.m"
    if (mercury__cord__succeeded)
#line 230 "cord.m"
      mercury__cord__succeeded = MR_TRUE;
#line 230 "cord.m"
    else
#line 230 "cord.m"
      if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "cord.m"
        {
#line 230 "cord.m"
          MR_Integer mercury__cord__CastX_3 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 230 "cord.m"
          MR_Integer mercury__cord__CastY_4 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 230 "cord.m"
          mercury__cord__succeeded = (mercury__cord__CastY_4 == mercury__cord__CastX_3);
#line 230 "cord.m"
        }
#line 230 "cord.m"
      else
#line 230 "cord.m"
        {
#line 230 "cord.m"
          MR_Word mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 230 "cord.m"
          MR_Word mercury__cord__V_6_6;

#line 230 "cord.m"
          mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 230 "cord.m"
          if (mercury__cord__succeeded)
#line 230 "cord.m"
            {
#line 230 "cord.m"
              mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 1944 "cord.c"
              {
#line 1946 "cord.c"
                return mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_5_5, mercury__cord__V_6_6);
              }
#line 230 "cord.m"
            }
#line 230 "cord.m"
        }
#line 230 "cord.m"
    return mercury__cord__succeeded;
#line 230 "cord.m"
  }
#line 230 "cord.m"
}

#line 741 "cord.m"
void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
#line 741 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_65,
#line 741 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_66,
#line 741 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_67,
#line 741 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_68,
#line 741 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_E_69,
#line 741 "cord.m"
  MR_Word mercury__cord__P_1,
#line 741 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 741 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 741 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 741 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 741 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 741 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
#line 741 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
#line 741 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
#line 741 "cord.m"
{
#line 746 "cord.m"
  {
#line 746 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 746 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 751 "cord.m"
      {
#line 751 "cord.m"
        MR_Word mercury__cord__XA_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 751 "cord.m"
        MR_Word mercury__cord__XB_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 751 "cord.m"
        MR_Word mercury__cord__YA_48;
#line 751 "cord.m"
        MR_Word mercury__cord__YB_49;
#line 751 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_59_59;
#line 751 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_60_60;
#line 751 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_C_61_61;

#line 752 "cord.m"
        {
#line 752 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XA_46, &mercury__cord__YA_48, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_61_61);
        }
#line 753 "cord.m"
        {
#line 753 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XB_47, &mercury__cord__YB_49, mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_61_61, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 751 "cord.m"
        {
#line 751 "cord.m"
          MR_Word base;
#line 751 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 751 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_48));
#line 751 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_49));
#line 751 "cord.m"
        }
#line 751 "cord.m"
      }
#line 746 "cord.m"
    else
#line 746 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 748 "cord.m"
        {
#line 748 "cord.m"
          MR_Box mercury__cord__XH_26 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 748 "cord.m"
          MR_Word mercury__cord__XT_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 748 "cord.m"
          MR_Box mercury__cord__YH_28;
#line 748 "cord.m"
          MR_Word mercury__cord__YT_29;
#line 748 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_39_39;
#line 748 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_40_40;
#line 748 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_C_41_41;
#line 749 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 749 "cord.m"
          {
#line 749 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_26, &mercury__cord__YH_28, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_41_41);
          }
#line 750 "cord.m"
          {
#line 750 "cord.m"
            mercury__list__map_foldl3_9_p_1(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XT_27, &mercury__cord__YT_29, mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_41_41, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 748 "cord.m"
          {
#line 748 "cord.m"
            MR_Word base;
#line 748 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 748 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_28;
#line 748 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_29));
#line 748 "cord.m"
          }
#line 748 "cord.m"
        }
#line 746 "cord.m"
      else
#line 746 "cord.m"
        {
#line 746 "cord.m"
          MR_Box mercury__cord__X_11 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 746 "cord.m"
          MR_Box mercury__cord__Y_12;
#line 747 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 747 "cord.m"
          {
#line 747 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_11, &mercury__cord__Y_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 746 "cord.m"
          {
#line 746 "cord.m"
            MR_Word base;
#line 746 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 746 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_12;
#line 746 "cord.m"
          }
#line 746 "cord.m"
        }
#line 746 "cord.m"
  }
#line 741 "cord.m"
}

#line 722 "cord.m"
void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_49,
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_50,
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_51,
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_52,
#line 722 "cord.m"
  MR_Word mercury__cord__P_1,
#line 722 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 722 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 722 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 722 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 722 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 722 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
#line 722 "cord.m"
{
#line 726 "cord.m"
  {
#line 726 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 726 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 731 "cord.m"
      {
#line 731 "cord.m"
        MR_Word mercury__cord__XA_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 731 "cord.m"
        MR_Word mercury__cord__XB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 731 "cord.m"
        MR_Word mercury__cord__YA_37;
#line 731 "cord.m"
        MR_Word mercury__cord__YB_38;
#line 731 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_45_45;
#line 731 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_46_46;

#line 732 "cord.m"
        {
#line 732 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XA_35, &mercury__cord__YA_37, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_46_46);
        }
#line 733 "cord.m"
        {
#line 733 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XB_36, &mercury__cord__YB_38, mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_46_46, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 731 "cord.m"
        {
#line 731 "cord.m"
          MR_Word base;
#line 731 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 731 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_37));
#line 731 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_38));
#line 731 "cord.m"
        }
#line 731 "cord.m"
      }
#line 726 "cord.m"
    else
#line 726 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 728 "cord.m"
        {
#line 728 "cord.m"
          MR_Box mercury__cord__XH_20 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 728 "cord.m"
          MR_Word mercury__cord__XT_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 728 "cord.m"
          MR_Box mercury__cord__YH_22;
#line 728 "cord.m"
          MR_Word mercury__cord__YT_23;
#line 728 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_30_30;
#line 728 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_31_31;
#line 729 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 729 "cord.m"
          {
#line 729 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_20, &mercury__cord__YH_22, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_31_31);
          }
#line 730 "cord.m"
          {
#line 730 "cord.m"
            mercury__list__map_foldl2_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XT_21, &mercury__cord__YT_23, mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_31_31, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 728 "cord.m"
          {
#line 728 "cord.m"
            MR_Word base;
#line 728 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 728 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_22;
#line 728 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_23));
#line 728 "cord.m"
          }
#line 728 "cord.m"
        }
#line 726 "cord.m"
      else
#line 726 "cord.m"
        {
#line 726 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 726 "cord.m"
          MR_Box mercury__cord__Y_10;
#line 727 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 727 "cord.m"
          {
#line 727 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_9, &mercury__cord__Y_10, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 726 "cord.m"
          {
#line 726 "cord.m"
            MR_Word base;
#line 726 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 726 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_10;
#line 726 "cord.m"
          }
#line 726 "cord.m"
        }
#line 726 "cord.m"
  }
#line 722 "cord.m"
}

#line 704 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
#line 704 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 704 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 704 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 704 "cord.m"
  MR_Word mercury__cord__P_1,
#line 704 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 704 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 704 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 704 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 704 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 712 "cord.m"
        if (mercury__cord__succeeded)
#line 712 "cord.m"
          {
#line 714 "cord.m"
            {
#line 714 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 712 "cord.m"
            if (mercury__cord__succeeded)
#line 712 "cord.m"
              {
#line 712 "cord.m"
                {
#line 712 "cord.m"
                  MR_Word base;
#line 712 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
                }
#line 712 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 712 "cord.m"
              }
#line 712 "cord.m"
          }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 709 "cord.m"
          if (mercury__cord__succeeded)
#line 709 "cord.m"
            {
#line 711 "cord.m"
              {
#line 711 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 709 "cord.m"
              if (mercury__cord__succeeded)
#line 709 "cord.m"
                {
#line 709 "cord.m"
                  {
#line 709 "cord.m"
                    MR_Word base;
#line 709 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
                  }
#line 709 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 709 "cord.m"
                }
#line 709 "cord.m"
            }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          if (mercury__cord__succeeded)
#line 707 "cord.m"
            {
#line 707 "cord.m"
              {
#line 707 "cord.m"
                MR_Word base;
#line 707 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
              }
#line 707 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
            }
#line 707 "cord.m"
        }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
  }
#line 704 "cord.m"
}

#line 702 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
#line 702 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 702 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 702 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 702 "cord.m"
  MR_Word mercury__cord__P_1,
#line 702 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 702 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 702 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 702 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 702 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 712 "cord.m"
        if (mercury__cord__succeeded)
#line 712 "cord.m"
          {
#line 714 "cord.m"
            {
#line 714 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 712 "cord.m"
            if (mercury__cord__succeeded)
#line 712 "cord.m"
              {
#line 712 "cord.m"
                {
#line 712 "cord.m"
                  MR_Word base;
#line 712 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
                }
#line 712 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 712 "cord.m"
              }
#line 712 "cord.m"
          }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 709 "cord.m"
          if (mercury__cord__succeeded)
#line 709 "cord.m"
            {
#line 711 "cord.m"
              {
#line 711 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 709 "cord.m"
              if (mercury__cord__succeeded)
#line 709 "cord.m"
                {
#line 709 "cord.m"
                  {
#line 709 "cord.m"
                    MR_Word base;
#line 709 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
                  }
#line 709 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 709 "cord.m"
                }
#line 709 "cord.m"
            }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          if (mercury__cord__succeeded)
#line 707 "cord.m"
            {
#line 707 "cord.m"
              {
#line 707 "cord.m"
                MR_Word base;
#line 707 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
              }
#line 707 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
            }
#line 707 "cord.m"
        }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
  }
#line 702 "cord.m"
}

#line 700 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
#line 700 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 700 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 700 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 700 "cord.m"
  MR_Word mercury__cord__P_1,
#line 700 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 700 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 700 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 700 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 700 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 712 "cord.m"
        if (mercury__cord__succeeded)
#line 712 "cord.m"
          {
#line 714 "cord.m"
            {
#line 714 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 712 "cord.m"
            if (mercury__cord__succeeded)
#line 712 "cord.m"
              {
#line 712 "cord.m"
                {
#line 712 "cord.m"
                  MR_Word base;
#line 712 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
                }
#line 712 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 712 "cord.m"
              }
#line 712 "cord.m"
          }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 709 "cord.m"
          if (mercury__cord__succeeded)
#line 709 "cord.m"
            {
#line 711 "cord.m"
              {
#line 711 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 709 "cord.m"
              if (mercury__cord__succeeded)
#line 709 "cord.m"
                {
#line 709 "cord.m"
                  {
#line 709 "cord.m"
                    MR_Word base;
#line 709 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
                  }
#line 709 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 709 "cord.m"
                }
#line 709 "cord.m"
            }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          if (mercury__cord__succeeded)
#line 707 "cord.m"
            {
#line 707 "cord.m"
              {
#line 707 "cord.m"
                MR_Word base;
#line 707 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
              }
#line 707 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
            }
#line 707 "cord.m"
        }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
  }
#line 700 "cord.m"
}

#line 698 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
#line 698 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 698 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 698 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 698 "cord.m"
  MR_Word mercury__cord__P_1,
#line 698 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 698 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 698 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 698 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 698 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 714 "cord.m"
        {
#line 714 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 712 "cord.m"
        {
#line 712 "cord.m"
          MR_Word base;
#line 712 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
        }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 711 "cord.m"
          {
#line 711 "cord.m"
            mercury__list__map_foldl_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 709 "cord.m"
          {
#line 709 "cord.m"
            MR_Word base;
#line 709 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
          }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          {
#line 707 "cord.m"
            MR_Word base;
#line 707 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
          }
#line 707 "cord.m"
        }
#line 707 "cord.m"
  }
#line 698 "cord.m"
}

#line 696 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
#line 696 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 696 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 696 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 696 "cord.m"
  MR_Word mercury__cord__P_1,
#line 696 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 696 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 696 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 696 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 696 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 714 "cord.m"
        {
#line 714 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 712 "cord.m"
        {
#line 712 "cord.m"
          MR_Word base;
#line 712 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
        }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 711 "cord.m"
          {
#line 711 "cord.m"
            mercury__list__map_foldl_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 709 "cord.m"
          {
#line 709 "cord.m"
            MR_Word base;
#line 709 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
          }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          {
#line 707 "cord.m"
            MR_Word base;
#line 707 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
          }
#line 707 "cord.m"
        }
#line 707 "cord.m"
  }
#line 696 "cord.m"
}

#line 694 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
#line 694 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 694 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 694 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 694 "cord.m"
  MR_Word mercury__cord__P_1,
#line 694 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 694 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 694 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 694 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 694 "cord.m"
{
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 712 "cord.m"
      {
#line 712 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 712 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 712 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 712 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 713 "cord.m"
        {
#line 713 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 714 "cord.m"
        {
#line 714 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 712 "cord.m"
        {
#line 712 "cord.m"
          MR_Word base;
#line 712 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 712 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 712 "cord.m"
        }
#line 712 "cord.m"
      }
#line 707 "cord.m"
    else
#line 707 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 709 "cord.m"
        {
#line 709 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 709 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 709 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 709 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 710 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 710 "cord.m"
          {
#line 710 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 711 "cord.m"
          {
#line 711 "cord.m"
            mercury__list__map_foldl_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 709 "cord.m"
          {
#line 709 "cord.m"
            MR_Word base;
#line 709 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 709 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 709 "cord.m"
          }
#line 709 "cord.m"
        }
#line 707 "cord.m"
      else
#line 707 "cord.m"
        {
#line 707 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 707 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 708 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 708 "cord.m"
          {
#line 708 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 707 "cord.m"
          {
#line 707 "cord.m"
            MR_Word base;
#line 707 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 707 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 707 "cord.m"
          }
#line 707 "cord.m"
        }
#line 707 "cord.m"
  }
#line 694 "cord.m"
}

#line 676 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_5(
#line 676 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 676 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 676 "cord.m"
  MR_Word mercury__cord__P_1,
#line 676 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 676 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 676 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 676 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 683 "cord.m"
            if (mercury__cord__succeeded)
#line 685 "cord.m"
              {
#line 685 "cord.m"
                /* direct tailcall eliminated */
#line 685 "cord.m"
                {
#line 685 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
                }
#line 685 "cord.m"
                continue;
#line 685 "cord.m"
              }
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
        return mercury__cord__succeeded;
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 676 "cord.m"
}

#line 674 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_4(
#line 674 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 674 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 674 "cord.m"
  MR_Word mercury__cord__P_1,
#line 674 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 674 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 674 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 674 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 683 "cord.m"
            if (mercury__cord__succeeded)
#line 685 "cord.m"
              {
#line 685 "cord.m"
                /* direct tailcall eliminated */
#line 685 "cord.m"
                {
#line 685 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
                }
#line 685 "cord.m"
                continue;
#line 685 "cord.m"
              }
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
        return mercury__cord__succeeded;
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 674 "cord.m"
}

#line 672 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_3(
#line 672 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 672 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 672 "cord.m"
  MR_Word mercury__cord__P_1,
#line 672 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 672 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 672 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 672 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 683 "cord.m"
            if (mercury__cord__succeeded)
#line 685 "cord.m"
              {
#line 685 "cord.m"
                /* direct tailcall eliminated */
#line 685 "cord.m"
                {
#line 685 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
                }
#line 685 "cord.m"
                continue;
#line 685 "cord.m"
              }
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
        return mercury__cord__succeeded;
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 672 "cord.m"
}

#line 671 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_2(
#line 671 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 671 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 671 "cord.m"
  MR_Word mercury__cord__P_1,
#line 671 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 671 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 671 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 671 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__foldr_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 685 "cord.m"
            /* direct tailcall eliminated */
#line 685 "cord.m"
            {
#line 685 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
            }
#line 685 "cord.m"
            continue;
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__list__foldr_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
                return;
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 680 "cord.m"
                return;
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 671 "cord.m"
}

#line 670 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_1(
#line 670 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 670 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 670 "cord.m"
  MR_Word mercury__cord__P_1,
#line 670 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 670 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 670 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 670 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__foldr_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 685 "cord.m"
            /* direct tailcall eliminated */
#line 685 "cord.m"
            {
#line 685 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
            }
#line 685 "cord.m"
            continue;
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__list__foldr_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
                return;
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 680 "cord.m"
                return;
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 670 "cord.m"
}

#line 669 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_0(
#line 669 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 669 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 669 "cord.m"
  MR_Word mercury__cord__P_1,
#line 669 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 669 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 669 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 669 "cord.m"
{
#line 679 "cord.m"
  while (MR_TRUE)
#line 679 "cord.m"
    {
#line 679 "cord.m"
      /* tailcall optimized into a loop */
#line 679 "cord.m"
      {
#line 679 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 679 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 683 "cord.m"
          {
#line 683 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 683 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 684 "cord.m"
            {
#line 684 "cord.m"
              mercury__cord__foldr_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 685 "cord.m"
            /* direct tailcall eliminated */
#line 685 "cord.m"
            {
#line 685 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 685 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 685 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 685 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 685 "cord.m"
            }
#line 685 "cord.m"
            continue;
#line 683 "cord.m"
          }
#line 679 "cord.m"
        else
#line 679 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cord.m"
            {
#line 681 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 681 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 682 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 682 "cord.m"
              }
#line 682 "cord.m"
              {
#line 682 "cord.m"
                mercury__list__foldr_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
                return;
              }
#line 681 "cord.m"
            }
#line 679 "cord.m"
          else
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 680 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 680 "cord.m"
              {
#line 680 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 680 "cord.m"
                return;
              }
#line 679 "cord.m"
            }
#line 679 "cord.m"
      }
#line 679 "cord.m"
      break;
#line 679 "cord.m"
    }
#line 669 "cord.m"
}

#line 657 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldr_node_3_f_0(
#line 657 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_18,
#line 657 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_19,
#line 657 "cord.m"
  MR_Word mercury__cord__F_1,
#line 657 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 657 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 657 "cord.m"
{
#line 659 "cord.m"
  while (MR_TRUE)
#line 659 "cord.m"
    {
#line 659 "cord.m"
      /* tailcall optimized into a loop */
#line 659 "cord.m"
      {
#line 659 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 659 "cord.m"
        MR_Box mercury__cord__HeadVar__4_4;

#line 659 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 661 "cord.m"
          {
#line 661 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 661 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 661 "cord.m"
            MR_Box mercury__cord__V_17_17;

#line 662 "cord.m"
            {
#line 662 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__foldr_node_3_f_0(mercury__cord__TypeInfo_for_T_18, mercury__cord__TypeInfo_for_U_19, mercury__cord__F_1, mercury__cord__B_15, mercury__cord__Acc_3);
            }
#line 661 "cord.m"
            /* direct tailcall eliminated */
#line 661 "cord.m"
            {
#line 661 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_14;
#line 661 "cord.m"
              MR_Box mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 661 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 661 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 661 "cord.m"
            }
#line 661 "cord.m"
            continue;
#line 661 "cord.m"
          }
#line 659 "cord.m"
        else
#line 659 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 660 "cord.m"
            {
#line 660 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 660 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 660 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 660 "cord.m"
              {
#line 660 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 660 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 660 "cord.m"
              }
#line 363 "list.opt"
              {
#line 363 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 660 "cord.m"
            }
#line 659 "cord.m"
          else
#line 659 "cord.m"
            {
#line 659 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 659 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 659 "cord.m"
              {
#line 659 "cord.m"
                mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_6, mercury__cord__Acc_3);
              }
#line 659 "cord.m"
            }
#line 659 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 659 "cord.m"
      }
#line 659 "cord.m"
      break;
#line 659 "cord.m"
    }
#line 657 "cord.m"
}

#line 641 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_5(
#line 641 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 641 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 641 "cord.m"
  MR_Word mercury__cord__P_1,
#line 641 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 641 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 641 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 641 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 648 "cord.m"
            if (mercury__cord__succeeded)
#line 650 "cord.m"
              {
#line 650 "cord.m"
                /* direct tailcall eliminated */
#line 650 "cord.m"
                {
#line 650 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
                }
#line 650 "cord.m"
                continue;
#line 650 "cord.m"
              }
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
        return mercury__cord__succeeded;
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 641 "cord.m"
}

#line 639 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_4(
#line 639 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 639 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 639 "cord.m"
  MR_Word mercury__cord__P_1,
#line 639 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 639 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 639 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 639 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 648 "cord.m"
            if (mercury__cord__succeeded)
#line 650 "cord.m"
              {
#line 650 "cord.m"
                /* direct tailcall eliminated */
#line 650 "cord.m"
                {
#line 650 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
                }
#line 650 "cord.m"
                continue;
#line 650 "cord.m"
              }
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
        return mercury__cord__succeeded;
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 639 "cord.m"
}

#line 637 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_3(
#line 637 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 637 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 637 "cord.m"
  MR_Word mercury__cord__P_1,
#line 637 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 637 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 637 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 637 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 648 "cord.m"
            if (mercury__cord__succeeded)
#line 650 "cord.m"
              {
#line 650 "cord.m"
                /* direct tailcall eliminated */
#line 650 "cord.m"
                {
#line 650 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
                }
#line 650 "cord.m"
                continue;
#line 650 "cord.m"
              }
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
        return mercury__cord__succeeded;
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 637 "cord.m"
}

#line 636 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_2(
#line 636 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 636 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 636 "cord.m"
  MR_Word mercury__cord__P_1,
#line 636 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 636 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 636 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 636 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__foldl_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 650 "cord.m"
            /* direct tailcall eliminated */
#line 650 "cord.m"
            {
#line 650 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
            }
#line 650 "cord.m"
            continue;
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__list__foldl_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 647 "cord.m"
                return;
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 645 "cord.m"
                return;
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 636 "cord.m"
}

#line 635 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_1(
#line 635 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 635 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 635 "cord.m"
  MR_Word mercury__cord__P_1,
#line 635 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 635 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 635 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 635 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__foldl_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 650 "cord.m"
            /* direct tailcall eliminated */
#line 650 "cord.m"
            {
#line 650 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
            }
#line 650 "cord.m"
            continue;
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__list__foldl_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 647 "cord.m"
                return;
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 645 "cord.m"
                return;
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 635 "cord.m"
}

#line 634 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_0(
#line 634 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 634 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 634 "cord.m"
  MR_Word mercury__cord__P_1,
#line 634 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 634 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 634 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 634 "cord.m"
{
#line 644 "cord.m"
  while (MR_TRUE)
#line 644 "cord.m"
    {
#line 644 "cord.m"
      /* tailcall optimized into a loop */
#line 644 "cord.m"
      {
#line 644 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 644 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 648 "cord.m"
          {
#line 648 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 648 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 648 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 649 "cord.m"
            {
#line 649 "cord.m"
              mercury__cord__foldl_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 650 "cord.m"
            /* direct tailcall eliminated */
#line 650 "cord.m"
            {
#line 650 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 650 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 650 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 650 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 650 "cord.m"
            }
#line 650 "cord.m"
            continue;
#line 648 "cord.m"
          }
#line 644 "cord.m"
        else
#line 644 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 646 "cord.m"
            {
#line 646 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 646 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 647 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 647 "cord.m"
              }
#line 647 "cord.m"
              {
#line 647 "cord.m"
                mercury__list__foldl_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 647 "cord.m"
                return;
              }
#line 646 "cord.m"
            }
#line 644 "cord.m"
          else
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 645 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 645 "cord.m"
              {
#line 645 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 645 "cord.m"
                return;
              }
#line 644 "cord.m"
            }
#line 644 "cord.m"
      }
#line 644 "cord.m"
      break;
#line 644 "cord.m"
    }
#line 634 "cord.m"
}

#line 622 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldl_node_3_f_0(
#line 622 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_18,
#line 622 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_19,
#line 622 "cord.m"
  MR_Word mercury__cord__F_1,
#line 622 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 622 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 622 "cord.m"
{
#line 624 "cord.m"
  while (MR_TRUE)
#line 624 "cord.m"
    {
#line 624 "cord.m"
      /* tailcall optimized into a loop */
#line 624 "cord.m"
      {
#line 624 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 624 "cord.m"
        MR_Box mercury__cord__HeadVar__4_4;

#line 624 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 626 "cord.m"
          {
#line 626 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "cord.m"
            MR_Box mercury__cord__V_17_17;

#line 627 "cord.m"
            {
#line 627 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__foldl_node_3_f_0(mercury__cord__TypeInfo_for_T_18, mercury__cord__TypeInfo_for_U_19, mercury__cord__F_1, mercury__cord__A_14, mercury__cord__Acc_3);
            }
#line 626 "cord.m"
            /* direct tailcall eliminated */
#line 626 "cord.m"
            {
#line 626 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_15;
#line 626 "cord.m"
              MR_Box mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 626 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 626 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 626 "cord.m"
            }
#line 626 "cord.m"
            continue;
#line 626 "cord.m"
          }
#line 624 "cord.m"
        else
#line 624 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 625 "cord.m"
            {
#line 625 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 625 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 625 "cord.m"
              {
#line 625 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 625 "cord.m"
              }
#line 347 "list.opt"
              {
#line 347 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 625 "cord.m"
            }
#line 624 "cord.m"
          else
#line 624 "cord.m"
            {
#line 624 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 624 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 624 "cord.m"
              {
#line 624 "cord.m"
                mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_6, mercury__cord__Acc_3);
              }
#line 624 "cord.m"
            }
#line 624 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 624 "cord.m"
      }
#line 624 "cord.m"
      break;
#line 624 "cord.m"
    }
#line 622 "cord.m"
}

#line 579 "cord.m"
void MR_CALL 
mercury__cord__filter_node_4_p_0(
#line 579 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_29,
#line 579 "cord.m"
  MR_Word mercury__cord__P_5,
#line 579 "cord.m"
  MR_Word mercury__cord__Node_6,
#line 579 "cord.m"
  MR_Word * mercury__cord__Trues_7,
#line 579 "cord.m"
  MR_Word * mercury__cord__Falses_8)
#line 579 "cord.m"
{
#line 592 "cord.m"
  {
#line 592 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 592 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 2))))
#line 610 "cord.m"
      {
#line 610 "cord.m"
        MR_Word mercury__cord__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 0)));
#line 610 "cord.m"
        MR_Word mercury__cord__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 1)));
#line 610 "cord.m"
        MR_Word mercury__cord__CATrues_20;
#line 610 "cord.m"
        MR_Word mercury__cord__CAFalses_21;
#line 610 "cord.m"
        MR_Word mercury__cord__CBTrues_22;
#line 610 "cord.m"
        MR_Word mercury__cord__CBFalses_23;

#line 611 "cord.m"
        {
#line 611 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__A_18, &mercury__cord__CATrues_20, &mercury__cord__CAFalses_21);
        }
#line 612 "cord.m"
        {
#line 612 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__B_19, &mercury__cord__CBTrues_22, &mercury__cord__CBFalses_23);
        }
#line 613 "cord.m"
        {
#line 613 "cord.m"
          *mercury__cord__Trues_7 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CATrues_20, mercury__cord__CBTrues_22);
        }
#line 614 "cord.m"
        {
#line 614 "cord.m"
          *mercury__cord__Falses_8 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CAFalses_21, mercury__cord__CBFalses_23);
        }
#line 610 "cord.m"
      }
#line 592 "cord.m"
    else
#line 592 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 1))))
#line 593 "cord.m"
        {
#line 593 "cord.m"
          MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 0));
#line 593 "cord.m"
          MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 1)));
#line 593 "cord.m"
          MR_Word mercury__cord__TrueList_12;
#line 593 "cord.m"
          MR_Word mercury__cord__FalseList_13;
#line 593 "cord.m"
          MR_Word mercury__cord__V_24_24;

#line 594 "cord.m"
          {
#line 594 "cord.m"
            mercury__cord__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 0) = mercury__cord__H_10;
#line 594 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 1) = ((MR_Box) (mercury__cord__T_11));
#line 594 "cord.m"
          }
#line 594 "cord.m"
          {
#line 594 "cord.m"
            mercury__list__filter_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__V_24_24, &mercury__cord__TrueList_12, &mercury__cord__FalseList_13);
          }
#line 598 "cord.m"
          if ((mercury__cord__TrueList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "cord.m"
            *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "cord.m"
          else
#line 599 "cord.m"
            {
#line 599 "cord.m"
              MR_Box mercury__cord__TH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 0));
#line 599 "cord.m"
              MR_Word mercury__cord__TT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 1)));
#line 599 "cord.m"
              MR_Word mercury__cord__V_25_25;

#line 600 "cord.m"
              {
#line 600 "cord.m"
                mercury__cord__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 0) = mercury__cord__TH_14;
#line 600 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 1) = ((MR_Box) (mercury__cord__TT_15));
#line 600 "cord.m"
              }
#line 600 "cord.m"
              {
#line 600 "cord.m"
                MR_Word base;
#line 600 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 600 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 600 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_25_25));
#line 600 "cord.m"
              }
#line 599 "cord.m"
            }
#line 605 "cord.m"
          if ((mercury__cord__FalseList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "cord.m"
            *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "cord.m"
          else
#line 606 "cord.m"
            {
#line 606 "cord.m"
              MR_Box mercury__cord__FH_16 = (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 0));
#line 606 "cord.m"
              MR_Word mercury__cord__FT_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 1)));
#line 606 "cord.m"
              MR_Word mercury__cord__V_26_26;

#line 607 "cord.m"
              {
#line 607 "cord.m"
                mercury__cord__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 0) = mercury__cord__FH_16;
#line 607 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 1) = ((MR_Box) (mercury__cord__FT_17));
#line 607 "cord.m"
              }
#line 607 "cord.m"
              {
#line 607 "cord.m"
                MR_Word base;
#line 607 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 607 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 607 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_26_26));
#line 607 "cord.m"
              }
#line 606 "cord.m"
            }
#line 593 "cord.m"
        }
#line 592 "cord.m"
      else
#line 584 "cord.m"
        {
#line 584 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_6, (MR_Integer) 0));
#line 585 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_5, (MR_Integer) 1)));

#line 585 "cord.m"
          {
#line 585 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_5), mercury__cord__X_9);
          }
#line 588 "cord.m"
          if (mercury__cord__succeeded)
#line 586 "cord.m"
            {
#line 586 "cord.m"
              {
#line 586 "cord.m"
                MR_Word base;
#line 586 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 586 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 586 "cord.m"
              }
#line 587 "cord.m"
              *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "cord.m"
            }
#line 588 "cord.m"
          else
#line 589 "cord.m"
            {
#line 589 "cord.m"
              *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "cord.m"
              {
#line 590 "cord.m"
                MR_Word base;
#line 590 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 590 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 590 "cord.m"
              }
#line 589 "cord.m"
            }
#line 584 "cord.m"
        }
#line 592 "cord.m"
  }
#line 579 "cord.m"
}

#line 545 "cord.m"
void MR_CALL 
mercury__cord__filter_node_3_p_0(
#line 545 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_20,
#line 545 "cord.m"
  MR_Word mercury__cord__P_4,
#line 545 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 545 "cord.m"
  MR_Word * mercury__cord__Trues_6)
#line 545 "cord.m"
{
#line 556 "cord.m"
  {
#line 556 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 556 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 567 "cord.m"
      {
#line 567 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 567 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 567 "cord.m"
        MR_Word mercury__cord__CATrues_15;
#line 567 "cord.m"
        MR_Word mercury__cord__CBTrues_16;

#line 568 "cord.m"
        {
#line 568 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__CATrues_15);
        }
#line 569 "cord.m"
        {
#line 569 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__CBTrues_16);
        }
#line 570 "cord.m"
        {
#line 570 "cord.m"
          *mercury__cord__Trues_6 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__CATrues_15, mercury__cord__CBTrues_16);
        }
#line 567 "cord.m"
      }
#line 556 "cord.m"
    else
#line 556 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 557 "cord.m"
        {
#line 557 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 557 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 557 "cord.m"
          MR_Word mercury__cord__TrueList_10;
#line 557 "cord.m"
          MR_Word mercury__cord__V_17_17;

#line 558 "cord.m"
          {
#line 558 "cord.m"
            mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_8;
#line 558 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_9));
#line 558 "cord.m"
          }
#line 558 "cord.m"
          {
#line 558 "cord.m"
            mercury__list__filter_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__V_17_17, &mercury__cord__TrueList_10);
          }
#line 562 "cord.m"
          if ((mercury__cord__TrueList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "cord.m"
          else
#line 563 "cord.m"
            {
#line 563 "cord.m"
              MR_Box mercury__cord__TH_11 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 0));
#line 563 "cord.m"
              MR_Word mercury__cord__TT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 1)));
#line 563 "cord.m"
              MR_Word mercury__cord__V_18_18;

#line 564 "cord.m"
              {
#line 564 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__TH_11;
#line 564 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__TT_12));
#line 564 "cord.m"
              }
#line 564 "cord.m"
              {
#line 564 "cord.m"
                MR_Word base;
#line 564 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "cord.m"
                *mercury__cord__Trues_6 = base;
#line 564 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_18_18));
#line 564 "cord.m"
              }
#line 563 "cord.m"
            }
#line 557 "cord.m"
        }
#line 556 "cord.m"
      else
#line 550 "cord.m"
        {
#line 550 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 551 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 551 "cord.m"
          {
#line 551 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__X_7);
          }
#line 553 "cord.m"
          if (mercury__cord__succeeded)
#line 552 "cord.m"
            {
#line 552 "cord.m"
              MR_Word base;
#line 552 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "cord.m"
              *mercury__cord__Trues_6 = base;
#line 552 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_5));
#line 552 "cord.m"
            }
#line 553 "cord.m"
          else
#line 554 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "cord.m"
        }
#line 556 "cord.m"
  }
#line 545 "cord.m"
}

#line 519 "cord.m"
void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
#line 519 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 519 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 519 "cord.m"
  MR_Word mercury__cord__P_4,
#line 519 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 519 "cord.m"
  MR_Word * mercury__cord__PNode_6)
#line 519 "cord.m"
{
#line 527 "cord.m"
  {
#line 527 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 527 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 533 "cord.m"
      {
#line 533 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 533 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 533 "cord.m"
        MR_Word mercury__cord__PA_15;
#line 533 "cord.m"
        MR_Word mercury__cord__PB_16;

#line 534 "cord.m"
        {
#line 534 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__PA_15);
        }
#line 535 "cord.m"
        {
#line 535 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__PB_16);
        }
#line 536 "cord.m"
        {
#line 536 "cord.m"
          MR_Word base;
#line 536 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "cord.m"
          *mercury__cord__PNode_6 = base;
#line 536 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__PA_15));
#line 536 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__PB_16));
#line 536 "cord.m"
        }
#line 533 "cord.m"
      }
#line 527 "cord.m"
    else
#line 527 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 528 "cord.m"
        {
#line 528 "cord.m"
          MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 528 "cord.m"
          MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 528 "cord.m"
          MR_Box mercury__cord__PH_11;
#line 528 "cord.m"
          MR_Word mercury__cord__PT_12;
#line 529 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 529 "cord.m"
          {
#line 529 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__H_9, &mercury__cord__PH_11);
          }
#line 530 "cord.m"
          {
#line 530 "cord.m"
            mercury__list__map_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__T_10, &mercury__cord__PT_12);
          }
#line 531 "cord.m"
          {
#line 531 "cord.m"
            MR_Word base;
#line 531 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 531 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__PH_11;
#line 531 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__PT_12));
#line 531 "cord.m"
          }
#line 528 "cord.m"
        }
#line 527 "cord.m"
      else
#line 524 "cord.m"
        {
#line 524 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 524 "cord.m"
          MR_Box mercury__cord__PX_8;
#line 525 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 525 "cord.m"
          {
#line 525 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_4), mercury__cord__X_7, &mercury__cord__PX_8);
          }
#line 526 "cord.m"
          {
#line 526 "cord.m"
            MR_Word base;
#line 526 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 526 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 526 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__PX_8;
#line 526 "cord.m"
          }
#line 524 "cord.m"
        }
#line 527 "cord.m"
  }
#line 519 "cord.m"
}

#line 501 "cord.m"
MR_Word MR_CALL 
mercury__cord__map_node_2_f_0(
#line 501 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 501 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 501 "cord.m"
  MR_Word mercury__cord__F_4,
#line 501 "cord.m"
  MR_Word mercury__cord__Node_5)
#line 501 "cord.m"
{
#line 507 "cord.m"
  {
#line 507 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 507 "cord.m"
    MR_Word mercury__cord__PNode_6;

#line 507 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 511 "cord.m"
      {
#line 511 "cord.m"
        MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 511 "cord.m"
        MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 511 "cord.m"
        MR_Word mercury__cord__V_12_12;
#line 511 "cord.m"
        MR_Word mercury__cord__V_13_13;

#line 512 "cord.m"
        {
#line 512 "cord.m"
          mercury__cord__V_12_12 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__A_10);
        }
#line 512 "cord.m"
        {
#line 512 "cord.m"
          mercury__cord__V_13_13 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__B_11);
        }
#line 512 "cord.m"
        {
#line 512 "cord.m"
          mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 512 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_13_13));
#line 512 "cord.m"
        }
#line 511 "cord.m"
      }
#line 507 "cord.m"
    else
#line 507 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 508 "cord.m"
        {
#line 508 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 508 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 508 "cord.m"
          MR_Box mercury__cord__V_14_14;
#line 508 "cord.m"
          MR_Word mercury__cord__V_15_15;
#line 509 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 509 "cord.m"
          {
#line 509 "cord.m"
            mercury__cord__V_14_14 = mercury__cord__func_0(((MR_Box) mercury__cord__F_4), mercury__cord__H_8);
          }
#line 509 "cord.m"
          {
#line 509 "cord.m"
            mercury__cord__V_15_15 = mercury__list__map_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__T_9);
          }
#line 509 "cord.m"
          {
#line 509 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 0) = mercury__cord__V_14_14;
#line 509 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 509 "cord.m"
          }
#line 508 "cord.m"
        }
#line 507 "cord.m"
      else
#line 505 "cord.m"
        {
#line 505 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 505 "cord.m"
          MR_Box mercury__cord__V_16_16;
#line 506 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 506 "cord.m"
          {
#line 506 "cord.m"
            mercury__cord__V_16_16 = mercury__cord__func_1(((MR_Box) mercury__cord__F_4), mercury__cord__X_7);
          }
#line 506 "cord.m"
          {
#line 506 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 506 "cord.m"
            MR_hl_field(MR_mktag(0), mercury__cord__PNode_6, 0) = mercury__cord__V_16_16;
#line 506 "cord.m"
          }
#line 505 "cord.m"
        }
#line 507 "cord.m"
    return mercury__cord__PNode_6;
#line 507 "cord.m"
  }
#line 501 "cord.m"
}

#line 475 "cord.m"
void MR_CALL 
mercury__cord__member_node_2_p_0(
#line 475 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 475 "cord.m"
  MR_Box * mercury__cord__X_3,
#line 475 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 475 "cord.m"
  MR_Cont mercury__cord__cont,
#line 475 "cord.m"
  void * mercury__cord__cont_env_ptr)
#line 475 "cord.m"
{
#line 480 "cord.m"
  while (MR_TRUE)
#line 480 "cord.m"
    {
#line 480 "cord.m"
      /* tailcall optimized into a loop */
#line 480 "cord.m"
      {
#line 480 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 480 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 488 "cord.m"
          {
#line 488 "cord.m"
            MR_Word mercury__cord__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 488 "cord.m"
            MR_Word mercury__cord__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));

#line 490 "cord.m"
            {
#line 490 "cord.m"
              mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__A_7, mercury__cord__cont, mercury__cord__cont_env_ptr);
            }
#line 492 "cord.m"
            /* direct tailcall eliminated */
#line 492 "cord.m"
            {
#line 492 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_4 = mercury__cord__B_8;

#line 492 "cord.m"
              mercury__cord__Node_4 = mercury__cord__Node__tmp_copy_4;
#line 492 "cord.m"
            }
#line 492 "cord.m"
            continue;
#line 488 "cord.m"
          }
#line 480 "cord.m"
        else
#line 480 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 481 "cord.m"
            {
#line 481 "cord.m"
              MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 481 "cord.m"
              MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));

#line 483 "cord.m"
              *mercury__cord__X_3 = mercury__cord__H_5;
#line 483 "cord.m"
              {
#line 483 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
              }
#line 485 "cord.m"
              {
#line 485 "cord.m"
                mercury__list__member_2_p_1(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__T_6, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 485 "cord.m"
                return;
              }
#line 481 "cord.m"
            }
#line 480 "cord.m"
          else
#line 479 "cord.m"
            {
#line 479 "cord.m"
              *mercury__cord__X_3 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 479 "cord.m"
              {
#line 479 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
#line 479 "cord.m"
                return;
              }
#line 479 "cord.m"
            }
#line 480 "cord.m"
      }
#line 480 "cord.m"
      break;
#line 480 "cord.m"
    }
#line 475 "cord.m"
}

#line 447 "cord.m"
void MR_CALL 
mercury__cord__get_last_node_2_p_0(
#line 447 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 447 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 447 "cord.m"
  MR_Box * mercury__cord__Last_4)
#line 447 "cord.m"
{
#line 452 "cord.m"
  while (MR_TRUE)
#line 452 "cord.m"
    {
#line 452 "cord.m"
      /* tailcall optimized into a loop */
#line 452 "cord.m"
      {
#line 452 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 452 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 462 "cord.m"
          {
#line 462 "cord.m"
            MR_Word mercury__cord__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));
#line 462 "cord.m"
            MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));

#line 463 "cord.m"
            /* direct tailcall eliminated */
#line 463 "cord.m"
            {
#line 463 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__B_10;

#line 463 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 463 "cord.m"
            }
#line 463 "cord.m"
            continue;
#line 462 "cord.m"
          }
#line 452 "cord.m"
        else
#line 452 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 453 "cord.m"
            {
#line 453 "cord.m"
              MR_Box mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 453 "cord.m"
              MR_Word mercury__cord__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));

#line 457 "cord.m"
              if ((mercury__cord__Tail_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "cord.m"
                *mercury__cord__Last_4 = mercury__cord__Head_5;
#line 457 "cord.m"
              else
#line 459 "cord.m"
                {
#line 459 "cord.m"
                  mercury__list__det_last_2_p_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Tail_6, mercury__cord__Last_4);
#line 459 "cord.m"
                  return;
                }
#line 453 "cord.m"
            }
#line 452 "cord.m"
          else
#line 451 "cord.m"
            *mercury__cord__Last_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 452 "cord.m"
      }
#line 452 "cord.m"
      break;
#line 452 "cord.m"
    }
#line 447 "cord.m"
}

#line 430 "cord.m"
void MR_CALL 
mercury__cord__get_first_node_2_p_0(
#line 430 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 430 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 430 "cord.m"
  MR_Box * mercury__cord__Head_4)
#line 430 "cord.m"
{
#line 435 "cord.m"
  while (MR_TRUE)
#line 435 "cord.m"
    {
#line 435 "cord.m"
      /* tailcall optimized into a loop */
#line 435 "cord.m"
      {
#line 435 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 435 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 438 "cord.m"
          {
#line 438 "cord.m"
            MR_Word mercury__cord__A_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));
#line 438 "cord.m"
            MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));

#line 439 "cord.m"
            /* direct tailcall eliminated */
#line 439 "cord.m"
            {
#line 439 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__A_6;

#line 439 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 439 "cord.m"
            }
#line 439 "cord.m"
            continue;
#line 438 "cord.m"
          }
#line 435 "cord.m"
        else
#line 435 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 436 "cord.m"
            {
#line 436 "cord.m"
              MR_Word mercury__cord__V_5_5;

#line 436 "cord.m"
              *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 436 "cord.m"
              mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));
#line 436 "cord.m"
            }
#line 435 "cord.m"
          else
#line 434 "cord.m"
            *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 435 "cord.m"
      }
#line 435 "cord.m"
      break;
#line 435 "cord.m"
    }
#line 430 "cord.m"
}

#line 395 "cord.m"
void MR_CALL 
mercury__cord__split_last_node_3_p_0(
#line 395 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 395 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 395 "cord.m"
  MR_Word * mercury__cord__AllButLast_5,
#line 395 "cord.m"
  MR_Box * mercury__cord__Last_6)
#line 395 "cord.m"
{
#line 401 "cord.m"
  {
#line 401 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 401 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 413 "cord.m"
      {
#line 413 "cord.m"
        MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 413 "cord.m"
        MR_Word mercury__cord__B0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 413 "cord.m"
        MR_Word mercury__cord__B_14;
#line 413 "cord.m"
        MR_Word mercury__cord__V_15_15;

#line 414 "cord.m"
        {
#line 414 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__B0_13, &mercury__cord__B_14, mercury__cord__Last_6);
        }
#line 415 "cord.m"
        {
#line 415 "cord.m"
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
#line 415 "cord.m"
        }
#line 415 "cord.m"
        {
#line 415 "cord.m"
          *mercury__cord__AllButLast_5 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__V_15_15, mercury__cord__B_14);
        }
#line 413 "cord.m"
      }
#line 401 "cord.m"
    else
#line 401 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 402 "cord.m"
        {
#line 402 "cord.m"
          MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 402 "cord.m"
          MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 402 "cord.m"
          MR_Word mercury__cord__AllButLastList_9;

#line 403 "cord.m"
          {
#line 403 "cord.m"
            mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLastList_9, mercury__cord__Last_6);
          }
#line 407 "cord.m"
          if ((mercury__cord__AllButLastList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "cord.m"
            *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "cord.m"
          else
#line 408 "cord.m"
            {
#line 408 "cord.m"
              MR_Box mercury__cord__AllButLastHead_10 = (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 0));
#line 408 "cord.m"
              MR_Word mercury__cord__AllButLastTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 1)));
#line 408 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 409 "cord.m"
              {
#line 409 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__AllButLastHead_10;
#line 409 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__AllButLastTail_11));
#line 409 "cord.m"
              }
#line 409 "cord.m"
              {
#line 409 "cord.m"
                MR_Word base;
#line 409 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "cord.m"
                *mercury__cord__AllButLast_5 = base;
#line 409 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 409 "cord.m"
              }
#line 408 "cord.m"
            }
#line 402 "cord.m"
        }
#line 401 "cord.m"
      else
#line 399 "cord.m"
        {
#line 399 "cord.m"
          *mercury__cord__Last_6 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 400 "cord.m"
          *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "cord.m"
        }
#line 401 "cord.m"
  }
#line 395 "cord.m"
}

#line 362 "cord.m"
void MR_CALL 
mercury__cord__head_tail_node_3_p_0(
#line 362 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 362 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 362 "cord.m"
  MR_Box * mercury__cord__Head_5,
#line 362 "cord.m"
  MR_Word * mercury__cord__Tail_6)
#line 362 "cord.m"
{
#line 368 "cord.m"
  {
#line 368 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 368 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 379 "cord.m"
      {
#line 379 "cord.m"
        MR_Word mercury__cord__A0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 379 "cord.m"
        MR_Word mercury__cord__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 379 "cord.m"
        MR_Word mercury__cord__AC_13;

#line 380 "cord.m"
        {
#line 380 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__A0_11, mercury__cord__Head_5, &mercury__cord__AC_13);
        }
#line 384 "cord.m"
        if ((mercury__cord__AC_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "cord.m"
          {
#line 383 "cord.m"
            MR_Word base;
#line 383 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "cord.m"
            *mercury__cord__Tail_6 = base;
#line 383 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__B_12));
#line 383 "cord.m"
          }
#line 384 "cord.m"
        else
#line 385 "cord.m"
          {
#line 385 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AC_13, (MR_Integer) 0)));
#line 385 "cord.m"
            MR_Word mercury__cord__V_15_15;

#line 386 "cord.m"
            {
#line 386 "cord.m"
              mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_14));
#line 386 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__B_12));
#line 386 "cord.m"
            }
#line 386 "cord.m"
            {
#line 386 "cord.m"
              MR_Word base;
#line 386 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "cord.m"
              *mercury__cord__Tail_6 = base;
#line 386 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_15_15));
#line 386 "cord.m"
            }
#line 385 "cord.m"
          }
#line 379 "cord.m"
      }
#line 368 "cord.m"
    else
#line 368 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 369 "cord.m"
        {
#line 369 "cord.m"
          MR_Word mercury__cord__T_8;

#line 369 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 369 "cord.m"
          mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 374 "cord.m"
          if ((mercury__cord__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "cord.m"
            *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "cord.m"
          else
#line 375 "cord.m"
            {
#line 375 "cord.m"
              MR_Box mercury__cord__TH_9 = (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 0));
#line 375 "cord.m"
              MR_Word mercury__cord__TT_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 1)));
#line 375 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 376 "cord.m"
              {
#line 376 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__TH_9;
#line 376 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__TT_10));
#line 376 "cord.m"
              }
#line 376 "cord.m"
              {
#line 376 "cord.m"
                MR_Word base;
#line 376 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "cord.m"
                *mercury__cord__Tail_6 = base;
#line 376 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 376 "cord.m"
              }
#line 375 "cord.m"
            }
#line 369 "cord.m"
        }
#line 368 "cord.m"
      else
#line 366 "cord.m"
        {
#line 366 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 367 "cord.m"
          *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "cord.m"
        }
#line 368 "cord.m"
  }
#line 362 "cord.m"
}

#line 286 "cord.m"
MR_Word MR_CALL 
mercury__cord__rev_list_2_2_f_0(
#line 286 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_14,
#line 286 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 286 "cord.m"
  MR_Word mercury__cord__L0_2)
#line 286 "cord.m"
{
#line 288 "cord.m"
  while (MR_TRUE)
#line 288 "cord.m"
    {
#line 288 "cord.m"
      /* tailcall optimized into a loop */
#line 288 "cord.m"
      {
#line 288 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 288 "cord.m"
        MR_Word mercury__cord__HeadVar__3_3;

#line 288 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 290 "cord.m"
          {
#line 290 "cord.m"
            MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "cord.m"
            MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "cord.m"
            MR_Word mercury__cord__V_13_13;

#line 290 "cord.m"
            {
#line 290 "cord.m"
              mercury__cord__V_13_13 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_14, mercury__cord__A_10, mercury__cord__L0_2);
            }
#line 290 "cord.m"
            /* direct tailcall eliminated */
#line 290 "cord.m"
            {
#line 290 "cord.m"
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__B_11;
#line 290 "cord.m"
              MR_Word mercury__cord__L0__tmp_copy_2 = mercury__cord__V_13_13;

#line 290 "cord.m"
              mercury__cord__L0_2 = mercury__cord__L0__tmp_copy_2;
#line 290 "cord.m"
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 290 "cord.m"
            }
#line 290 "cord.m"
            continue;
#line 290 "cord.m"
          }
#line 288 "cord.m"
        else
#line 288 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 289 "cord.m"
            {
#line 289 "cord.m"
              MR_Box mercury__cord__H_6 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 289 "cord.m"
              MR_Word mercury__cord__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "cord.m"
              MR_Word mercury__cord__V_9_9;

#line 289 "cord.m"
              {
#line 289 "cord.m"
                mercury__cord__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_9_9, 0) = mercury__cord__H_6;
#line 289 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_9_9, 1) = ((MR_Box) (mercury__cord__L0_2));
#line 289 "cord.m"
              }
#line 289 "cord.m"
              {
#line 289 "cord.m"
                return mercury__cord__HeadVar__3_3 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__T_7, mercury__cord__V_9_9);
              }
#line 289 "cord.m"
            }
#line 288 "cord.m"
          else
#line 288 "cord.m"
            {
#line 288 "cord.m"
              MR_Box mercury__cord__X_4 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0));

#line 288 "cord.m"
              {
#line 288 "cord.m"
                mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = mercury__cord__X_4;
#line 288 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 1) = ((MR_Box) (mercury__cord__L0_2));
#line 288 "cord.m"
              }
#line 288 "cord.m"
            }
#line 288 "cord.m"
        return mercury__cord__HeadVar__3_3;
#line 288 "cord.m"
      }
#line 288 "cord.m"
      break;
#line 288 "cord.m"
    }
#line 286 "cord.m"
}

#line 273 "cord.m"
MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
#line 273 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_14,
#line 273 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 273 "cord.m"
  MR_Word mercury__cord__L0_2)
#line 273 "cord.m"
{
#line 275 "cord.m"
  while (MR_TRUE)
#line 275 "cord.m"
    {
#line 275 "cord.m"
      /* tailcall optimized into a loop */
#line 275 "cord.m"
      {
#line 275 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 275 "cord.m"
        MR_Word mercury__cord__HeadVar__3_3;

#line 275 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 277 "cord.m"
          {
#line 277 "cord.m"
            MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "cord.m"
            MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "cord.m"
            MR_Word mercury__cord__V_13_13;

#line 277 "cord.m"
            {
#line 277 "cord.m"
              mercury__cord__V_13_13 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_14, mercury__cord__B_11, mercury__cord__L0_2);
            }
#line 277 "cord.m"
            /* direct tailcall eliminated */
#line 277 "cord.m"
            {
#line 277 "cord.m"
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__A_10;
#line 277 "cord.m"
              MR_Word mercury__cord__L0__tmp_copy_2 = mercury__cord__V_13_13;

#line 277 "cord.m"
              mercury__cord__L0_2 = mercury__cord__L0__tmp_copy_2;
#line 277 "cord.m"
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 277 "cord.m"
            }
#line 277 "cord.m"
            continue;
#line 277 "cord.m"
          }
#line 275 "cord.m"
        else
#line 275 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 276 "cord.m"
            {
#line 276 "cord.m"
              MR_Box mercury__cord__H_6 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 276 "cord.m"
              MR_Word mercury__cord__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "cord.m"
              MR_Word mercury__cord__V_9_9;

#line 46 "list.opt"
              {
#line 46 "list.opt"
                mercury__list__append_3_p_1(mercury__cord__TypeInfo_for_T_14, mercury__cord__T_7, mercury__cord__L0_2, &mercury__cord__V_9_9);
              }
#line 276 "cord.m"
              {
#line 276 "cord.m"
                mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = mercury__cord__H_6;
#line 276 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 1) = ((MR_Box) (mercury__cord__V_9_9));
#line 276 "cord.m"
              }
#line 276 "cord.m"
            }
#line 275 "cord.m"
          else
#line 275 "cord.m"
            {
#line 275 "cord.m"
              MR_Box mercury__cord__X_4 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0));

#line 275 "cord.m"
              {
#line 275 "cord.m"
                mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = mercury__cord__X_4;
#line 275 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 1) = ((MR_Box) (mercury__cord__L0_2));
#line 275 "cord.m"
              }
#line 275 "cord.m"
            }
#line 275 "cord.m"
        return mercury__cord__HeadVar__3_3;
#line 275 "cord.m"
      }
#line 275 "cord.m"
      break;
#line 275 "cord.m"
    }
#line 273 "cord.m"
}

#line 221 "cord.m"
MR_bool MR_CALL 
mercury__cord__equal_2_p_0(
#line 221 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_6,
#line 221 "cord.m"
  MR_Word mercury__cord__CA_3,
#line 221 "cord.m"
  MR_Word mercury__cord__CB_4)
#line 221 "cord.m"
{
#line 757 "cord.m"
  {
#line 757 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 757 "cord.m"
    MR_Word mercury__cord__V_5_5;
#line 757 "cord.m"
    MR_Word mercury__cord__V_7_7;

#line 266 "cord.m"
    if ((mercury__cord__CA_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "cord.m"
      mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "cord.m"
    else
#line 267 "cord.m"
      {
#line 267 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CA_3, (MR_Integer) 0)));
#line 267 "cord.m"
        MR_Word mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_5_5 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__N_10, mercury__cord__V_11_11);
        }
#line 267 "cord.m"
      }
#line 266 "cord.m"
    if ((mercury__cord__CB_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "cord.m"
      mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "cord.m"
    else
#line 267 "cord.m"
      {
#line 267 "cord.m"
        MR_Word mercury__cord__N_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CB_4, (MR_Integer) 0)));
#line 267 "cord.m"
        MR_Word mercury__cord__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__N_12, mercury__cord__V_13_13);
        }
#line 267 "cord.m"
      }
#line 759 "cord.m"
    {
#line 759 "cord.m"
      return mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_5_5, mercury__cord__V_7_7);
    }
#line 757 "cord.m"
    return mercury__cord__succeeded;
#line 757 "cord.m"
  }
#line 221 "cord.m"
}

#line 211 "cord.m"
void MR_CALL 
mercury__cord__map_foldl3_9_p_0(
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_35,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_36,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_37,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_38,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_E_39,
#line 211 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 211 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 211 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 211 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 211 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 211 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 211 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
#line 211 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
#line 211 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
#line 211 "cord.m"
{
#line 737 "cord.m"
  {
#line 737 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 737 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "cord.m"
      {
#line 737 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "cord.m"
        *mercury__cord__STATE_VARIABLE_C_9 = mercury__cord__STATE_VARIABLE_C_0_8;
#line 737 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 737 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 737 "cord.m"
      }
#line 737 "cord.m"
    else
#line 738 "cord.m"
      {
#line 738 "cord.m"
        MR_Word mercury__cord__NX_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 738 "cord.m"
        MR_Word mercury__cord__NY_22;

#line 739 "cord.m"
        {
#line 739 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_35, mercury__cord__TypeInfo_for_B_36, mercury__cord__TypeInfo_for_C_37, mercury__cord__TypeInfo_for_D_38, mercury__cord__TypeInfo_for_E_39, mercury__cord__HeadVar__1_1, mercury__cord__NX_21, &mercury__cord__NY_22, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 738 "cord.m"
        {
#line 738 "cord.m"
          MR_Word base;
#line 738 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 738 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 738 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_22));
#line 738 "cord.m"
        }
#line 738 "cord.m"
      }
#line 737 "cord.m"
  }
#line 211 "cord.m"
}

#line 205 "cord.m"
void MR_CALL 
mercury__cord__map_foldl2_7_p_0(
#line 205 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_26,
#line 205 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_27,
#line 205 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_28,
#line 205 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_29,
#line 205 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 205 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 205 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 205 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 205 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 205 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 205 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
#line 205 "cord.m"
{
#line 718 "cord.m"
  {
#line 718 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 718 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "cord.m"
      {
#line 718 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 718 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 718 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 718 "cord.m"
      }
#line 718 "cord.m"
    else
#line 719 "cord.m"
      {
#line 719 "cord.m"
        MR_Word mercury__cord__NX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 719 "cord.m"
        MR_Word mercury__cord__NY_17;

#line 720 "cord.m"
        {
#line 720 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_26, mercury__cord__TypeInfo_for_B_27, mercury__cord__TypeInfo_for_C_28, mercury__cord__TypeInfo_for_D_29, mercury__cord__HeadVar__1_1, mercury__cord__NX_16, &mercury__cord__NY_17, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 719 "cord.m"
        {
#line 719 "cord.m"
          MR_Word base;
#line 719 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 719 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 719 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_17));
#line 719 "cord.m"
        }
#line 719 "cord.m"
      }
#line 718 "cord.m"
  }
#line 205 "cord.m"
}

#line 200 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_5(
#line 200 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 200 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 200 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 200 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 200 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 200 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 200 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 200 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 200 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        if (mercury__cord__succeeded)
#line 690 "cord.m"
          {
#line 690 "cord.m"
            {
#line 690 "cord.m"
              MR_Word base;
#line 690 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
            }
#line 690 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 690 "cord.m"
          }
#line 690 "cord.m"
      }
#line 689 "cord.m"
    return mercury__cord__succeeded;
#line 689 "cord.m"
  }
#line 200 "cord.m"
}

#line 198 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_4(
#line 198 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 198 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 198 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 198 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 198 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 198 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 198 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 198 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 198 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        if (mercury__cord__succeeded)
#line 690 "cord.m"
          {
#line 690 "cord.m"
            {
#line 690 "cord.m"
              MR_Word base;
#line 690 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
            }
#line 690 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 690 "cord.m"
          }
#line 690 "cord.m"
      }
#line 689 "cord.m"
    return mercury__cord__succeeded;
#line 689 "cord.m"
  }
#line 198 "cord.m"
}

#line 196 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_3(
#line 196 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 196 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 196 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 196 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 196 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 196 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 196 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 196 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 196 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        if (mercury__cord__succeeded)
#line 690 "cord.m"
          {
#line 690 "cord.m"
            {
#line 690 "cord.m"
              MR_Word base;
#line 690 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
            }
#line 690 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 690 "cord.m"
          }
#line 690 "cord.m"
      }
#line 689 "cord.m"
    return mercury__cord__succeeded;
#line 689 "cord.m"
  }
#line 196 "cord.m"
}

#line 194 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_2(
#line 194 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 194 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 194 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 194 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 194 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 194 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 194 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 194 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 194 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        {
#line 690 "cord.m"
          MR_Word base;
#line 690 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
        }
#line 690 "cord.m"
      }
#line 689 "cord.m"
  }
#line 194 "cord.m"
}

#line 192 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_1(
#line 192 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 192 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 192 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 192 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 192 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 192 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 192 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 192 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 192 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        {
#line 690 "cord.m"
          MR_Word base;
#line 690 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
        }
#line 690 "cord.m"
      }
#line 689 "cord.m"
  }
#line 192 "cord.m"
}

#line 190 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_0(
#line 190 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 190 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 190 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 190 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 190 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 190 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 190 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 190 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 190 "cord.m"
{
#line 689 "cord.m"
  {
#line 689 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 689 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "cord.m"
      {
#line 689 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 689 "cord.m"
      }
#line 689 "cord.m"
    else
#line 690 "cord.m"
      {
#line 690 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 691 "cord.m"
        {
#line 691 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 690 "cord.m"
        {
#line 690 "cord.m"
          MR_Word base;
#line 690 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 690 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 690 "cord.m"
        }
#line 690 "cord.m"
      }
#line 689 "cord.m"
  }
#line 190 "cord.m"
}

#line 180 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_5(
#line 180 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 180 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 180 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 180 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 180 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 180 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 180 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      {
#line 664 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 664 "cord.m"
      }
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
    return mercury__cord__succeeded;
#line 664 "cord.m"
  }
#line 180 "cord.m"
}

#line 179 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_4(
#line 179 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 179 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 179 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 179 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 179 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 179 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 179 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      {
#line 664 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 664 "cord.m"
      }
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
    return mercury__cord__succeeded;
#line 664 "cord.m"
  }
#line 179 "cord.m"
}

#line 178 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_3(
#line 178 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 178 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 178 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 178 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 178 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 178 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 178 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      {
#line 664 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 664 "cord.m"
      }
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
    return mercury__cord__succeeded;
#line 664 "cord.m"
  }
#line 178 "cord.m"
}

#line 177 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_2(
#line 177 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 177 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 177 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 177 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 177 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 177 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 177 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          mercury__cord__foldr_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 666 "cord.m"
          return;
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
  }
#line 177 "cord.m"
}

#line 176 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_1(
#line 176 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 176 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 176 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 176 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 176 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 176 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 176 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          mercury__cord__foldr_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 666 "cord.m"
          return;
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
  }
#line 176 "cord.m"
}

#line 175 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_0(
#line 175 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 175 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 175 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 175 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 175 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 175 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 175 "cord.m"
{
#line 664 "cord.m"
  {
#line 664 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 664 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 664 "cord.m"
    else
#line 665 "cord.m"
      {
#line 665 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 666 "cord.m"
        {
#line 666 "cord.m"
          mercury__cord__foldr_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 666 "cord.m"
          return;
        }
#line 665 "cord.m"
      }
#line 664 "cord.m"
  }
#line 175 "cord.m"
}

#line 173 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldr_3_f_0(
#line 173 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 173 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_11,
#line 173 "cord.m"
  MR_Word mercury__cord__F_1,
#line 173 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 173 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 173 "cord.m"
{
#line 654 "cord.m"
  {
#line 654 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 654 "cord.m"
    MR_Box mercury__cord__HeadVar__4_4;

#line 654 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "cord.m"
      mercury__cord__HeadVar__4_4 = mercury__cord__Acc_3;
#line 654 "cord.m"
    else
#line 655 "cord.m"
      {
#line 655 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 655 "cord.m"
        {
#line 655 "cord.m"
          return mercury__cord__HeadVar__4_4 = mercury__cord__foldr_node_3_f_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__TypeInfo_for_U_11, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__Acc_3);
        }
#line 655 "cord.m"
      }
#line 654 "cord.m"
    return mercury__cord__HeadVar__4_4;
#line 654 "cord.m"
  }
#line 173 "cord.m"
}

#line 169 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_5(
#line 169 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 169 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 169 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 169 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 169 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 169 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 169 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      {
#line 629 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 629 "cord.m"
      }
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
    return mercury__cord__succeeded;
#line 629 "cord.m"
  }
#line 169 "cord.m"
}

#line 168 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_4(
#line 168 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 168 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 168 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 168 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 168 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 168 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 168 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      {
#line 629 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 629 "cord.m"
      }
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
    return mercury__cord__succeeded;
#line 629 "cord.m"
  }
#line 168 "cord.m"
}

#line 167 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_3(
#line 167 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 167 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 167 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 167 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 167 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 167 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 167 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      {
#line 629 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 629 "cord.m"
      }
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
    return mercury__cord__succeeded;
#line 629 "cord.m"
  }
#line 167 "cord.m"
}

#line 166 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_2(
#line 166 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 166 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 166 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 166 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 166 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 166 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 166 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          mercury__cord__foldl_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 631 "cord.m"
          return;
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
  }
#line 166 "cord.m"
}

#line 165 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_1(
#line 165 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 165 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 165 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 165 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 165 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 165 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 165 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          mercury__cord__foldl_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 631 "cord.m"
          return;
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
  }
#line 165 "cord.m"
}

#line 164 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_0(
#line 164 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 164 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_16,
#line 164 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 164 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 164 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 164 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 164 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 629 "cord.m"
    else
#line 630 "cord.m"
      {
#line 630 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "cord.m"
        {
#line 631 "cord.m"
          mercury__cord__foldl_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 631 "cord.m"
          return;
        }
#line 630 "cord.m"
      }
#line 629 "cord.m"
  }
#line 164 "cord.m"
}

#line 162 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldl_3_f_0(
#line 162 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 162 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_11,
#line 162 "cord.m"
  MR_Word mercury__cord__F_1,
#line 162 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 162 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 162 "cord.m"
{
#line 619 "cord.m"
  {
#line 619 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 619 "cord.m"
    MR_Box mercury__cord__HeadVar__4_4;

#line 619 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "cord.m"
      mercury__cord__HeadVar__4_4 = mercury__cord__Acc_3;
#line 619 "cord.m"
    else
#line 620 "cord.m"
      {
#line 620 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 620 "cord.m"
        {
#line 620 "cord.m"
          return mercury__cord__HeadVar__4_4 = mercury__cord__foldl_node_3_f_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__TypeInfo_for_U_11, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__Acc_3);
        }
#line 620 "cord.m"
      }
#line 619 "cord.m"
    return mercury__cord__HeadVar__4_4;
#line 619 "cord.m"
  }
#line 162 "cord.m"
}

#line 157 "cord.m"
void MR_CALL 
mercury__cord__filter_4_p_0(
#line 157 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 157 "cord.m"
  MR_Word mercury__cord__P_1,
#line 157 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 157 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 157 "cord.m"
  MR_Word * mercury__cord__HeadVar__4_4)
#line 157 "cord.m"
{
#line 575 "cord.m"
  {
#line 575 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 575 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "cord.m"
      {
#line 575 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "cord.m"
        *mercury__cord__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "cord.m"
      }
#line 575 "cord.m"
    else
#line 576 "cord.m"
      {
#line 576 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 577 "cord.m"
        {
#line 577 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__P_1, mercury__cord__N_7, mercury__cord__HeadVar__3_3, mercury__cord__HeadVar__4_4);
#line 577 "cord.m"
          return;
        }
#line 576 "cord.m"
      }
#line 575 "cord.m"
  }
#line 157 "cord.m"
}

#line 147 "cord.m"
void MR_CALL 
mercury__cord__filter_3_p_0(
#line 147 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 147 "cord.m"
  MR_Word mercury__cord__P_1,
#line 147 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 147 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3)
#line 147 "cord.m"
{
#line 541 "cord.m"
  {
#line 541 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 541 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "cord.m"
    else
#line 542 "cord.m"
      {
#line 542 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 543 "cord.m"
        {
#line 543 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__P_1, mercury__cord__N_6, mercury__cord__HeadVar__3_3);
#line 543 "cord.m"
          return;
        }
#line 542 "cord.m"
      }
#line 541 "cord.m"
  }
#line 147 "cord.m"
}

#line 138 "cord.m"
void MR_CALL 
mercury__cord__map_pred_3_p_0(
#line 138 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 138 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_9,
#line 138 "cord.m"
  MR_Word mercury__cord__P_1,
#line 138 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 138 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3)
#line 138 "cord.m"
{
#line 515 "cord.m"
  {
#line 515 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 515 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "cord.m"
    else
#line 516 "cord.m"
      {
#line 516 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 516 "cord.m"
        MR_Word mercury__cord__PN_7;

#line 517 "cord.m"
        {
#line 517 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__P_1, mercury__cord__N_6, &mercury__cord__PN_7);
        }
#line 516 "cord.m"
        {
#line 516 "cord.m"
          MR_Word base;
#line 516 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 516 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__PN_7));
#line 516 "cord.m"
        }
#line 516 "cord.m"
      }
#line 515 "cord.m"
  }
#line 138 "cord.m"
}

#line 137 "cord.m"
MR_Word MR_CALL 
mercury__cord__map_2_f_0(
#line 137 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 137 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_9,
#line 137 "cord.m"
  MR_Word mercury__cord__F_1,
#line 137 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 137 "cord.m"
{
#line 498 "cord.m"
  {
#line 498 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 498 "cord.m"
    MR_Word mercury__cord__HeadVar__3_3;

#line 498 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "cord.m"
      mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "cord.m"
    else
#line 499 "cord.m"
      {
#line 499 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "cord.m"
        MR_Word mercury__cord__V_7_7;

#line 499 "cord.m"
        {
#line 499 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__F_1, mercury__cord__N_6);
        }
#line 499 "cord.m"
        {
#line 499 "cord.m"
          mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = ((MR_Box) (mercury__cord__V_7_7));
#line 499 "cord.m"
        }
#line 499 "cord.m"
      }
#line 498 "cord.m"
    return mercury__cord__HeadVar__3_3;
#line 498 "cord.m"
  }
#line 137 "cord.m"
}

#line 133 "cord.m"
void MR_CALL 
mercury__cord__member_2_p_0(
#line 133 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 133 "cord.m"
  MR_Box * mercury__cord__X_3,
#line 133 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "cord.m"
  MR_Cont mercury__cord__cont,
#line 133 "cord.m"
  void * mercury__cord__cont_env_ptr)
#line 133 "cord.m"
{
#line 472 "cord.m"
  {
#line 472 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 472 "cord.m"
    MR_Word mercury__cord__N_4;

#line 472 "cord.m"
    if (mercury__cord__succeeded)
#line 472 "cord.m"
      {
#line 472 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 473 "cord.m"
        {
#line 473 "cord.m"
          mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__X_3, mercury__cord__N_4, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 473 "cord.m"
          return;
        }
#line 472 "cord.m"
      }
#line 472 "cord.m"
  }
#line 133 "cord.m"
}

#line 129 "cord.m"
MR_Integer MR_CALL 
mercury__cord__length_1_f_0(
#line 129 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 129 "cord.m"
  MR_Word mercury__cord__C_3)
#line 129 "cord.m"
{
#line 468 "cord.m"
  {
#line 468 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 468 "cord.m"
    MR_Integer mercury__cord__HeadVar__2_2;

#line 619 "cord.m"
    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Integer) 0;
#line 619 "cord.m"
    else
#line 620 "cord.m"
      {
#line 620 "cord.m"
        MR_Word mercury__cord__N_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));

#line 620 "cord.m"
        {
#line 620 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(mercury__cord__N_20, (MR_Integer) 0);
        }
#line 620 "cord.m"
      }
#line 468 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 468 "cord.m"
  }
#line 129 "cord.m"
}

#line 124 "cord.m"
MR_bool MR_CALL 
mercury__cord__get_last_2_p_0(
#line 124 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 124 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 124 "cord.m"
  MR_Box * mercury__cord__Last_4)
#line 124 "cord.m"
{
#line 444 "cord.m"
  {
#line 444 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 444 "cord.m"
    MR_Word mercury__cord__N_3;

#line 444 "cord.m"
    if (mercury__cord__succeeded)
#line 444 "cord.m"
      {
#line 444 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "cord.m"
        {
#line 445 "cord.m"
          mercury__cord__get_last_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Last_4);
        }
#line 445 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 444 "cord.m"
      }
#line 444 "cord.m"
    return mercury__cord__succeeded;
#line 444 "cord.m"
  }
#line 124 "cord.m"
}

#line 119 "cord.m"
MR_bool MR_CALL 
mercury__cord__get_first_2_p_0(
#line 119 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 119 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 119 "cord.m"
  MR_Box * mercury__cord__Head_4)
#line 119 "cord.m"
{
#line 427 "cord.m"
  {
#line 427 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 427 "cord.m"
    MR_Word mercury__cord__N_3;

#line 427 "cord.m"
    if (mercury__cord__succeeded)
#line 427 "cord.m"
      {
#line 427 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "cord.m"
        {
#line 428 "cord.m"
          mercury__cord__get_first_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Head_4);
        }
#line 428 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 427 "cord.m"
      }
#line 427 "cord.m"
    return mercury__cord__succeeded;
#line 427 "cord.m"
  }
#line 119 "cord.m"
}

#line 114 "cord.m"
MR_bool MR_CALL 
mercury__cord__split_last_3_p_0(
#line 114 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_7,
#line 114 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 114 "cord.m"
  MR_Word * mercury__cord__AllButLast_5,
#line 114 "cord.m"
  MR_Box * mercury__cord__Last_6)
#line 114 "cord.m"
{
#line 392 "cord.m"
  {
#line 392 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 392 "cord.m"
    MR_Word mercury__cord__N_4;

#line 392 "cord.m"
    if (mercury__cord__succeeded)
#line 392 "cord.m"
      {
#line 392 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 393 "cord.m"
        {
#line 393 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__AllButLast_5, mercury__cord__Last_6);
        }
#line 393 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 392 "cord.m"
      }
#line 392 "cord.m"
    return mercury__cord__succeeded;
#line 392 "cord.m"
  }
#line 114 "cord.m"
}

#line 107 "cord.m"
MR_bool MR_CALL 
mercury__cord__head_tail_3_p_0(
#line 107 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_7,
#line 107 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 107 "cord.m"
  MR_Box * mercury__cord__H_5,
#line 107 "cord.m"
  MR_Word * mercury__cord__T_6)
#line 107 "cord.m"
{
#line 359 "cord.m"
  {
#line 359 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 359 "cord.m"
    MR_Word mercury__cord__N_4;

#line 359 "cord.m"
    if (mercury__cord__succeeded)
#line 359 "cord.m"
      {
#line 359 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "cord.m"
        {
#line 360 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__H_5, mercury__cord__T_6);
        }
#line 360 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 359 "cord.m"
      }
#line 359 "cord.m"
    return mercury__cord__succeeded;
#line 359 "cord.m"
  }
#line 107 "cord.m"
}

#line 100 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_list_1_f_0(
#line 100 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 100 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 100 "cord.m"
{
#line 346 "cord.m"
  {
#line 346 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 346 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 346 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "cord.m"
    else
#line 347 "cord.m"
      {
#line 347 "cord.m"
        MR_Word mercury__cord__HeadCord_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "cord.m"
        MR_Word mercury__cord__TailCords_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 347 "cord.m"
        MR_Word mercury__cord__TailList_6;

#line 348 "cord.m"
        {
#line 348 "cord.m"
          mercury__cord__TailList_6 = mercury__cord__cord_list_to_list_1_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TailCords_4);
        }
#line 352 "cord.m"
        if ((mercury__cord__HeadCord_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "cord.m"
          mercury__cord__HeadVar__2_2 = mercury__cord__TailList_6;
#line 352 "cord.m"
        else
#line 353 "cord.m"
          {
#line 353 "cord.m"
            MR_Word mercury__cord__HeadNode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadCord_3, (MR_Integer) 0)));

#line 354 "cord.m"
            {
#line 354 "cord.m"
              return mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__HeadNode_7, mercury__cord__TailList_6);
            }
#line 353 "cord.m"
          }
#line 347 "cord.m"
      }
#line 346 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 346 "cord.m"
  }
#line 100 "cord.m"
}

#line 96 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_cord_1_f_0(
#line 96 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_6,
#line 96 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 96 "cord.m"
{
#line 342 "cord.m"
  {
#line 342 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 342 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 342 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "cord.m"
    else
#line 343 "cord.m"
      {
#line 343 "cord.m"
        MR_Word mercury__cord__HeadCord_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "cord.m"
        MR_Word mercury__cord__TailCords_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "cord.m"
        MR_Word mercury__cord__V_5_5;

#line 344 "cord.m"
        {
#line 344 "cord.m"
          mercury__cord__V_5_5 = mercury__cord__cord_list_to_cord_1_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__TailCords_4);
        }
#line 343 "cord.m"
        {
#line 343 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__HeadCord_3, mercury__cord__V_5_5);
        }
#line 343 "cord.m"
      }
#line 342 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 342 "cord.m"
  }
#line 96 "cord.m"
}

#line 92 "cord.m"
MR_Word MR_CALL 
mercury__cord__f_43_43_2_f_0(
#line 92 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 92 "cord.m"
  MR_Word mercury__cord__A_4,
#line 92 "cord.m"
  MR_Word mercury__cord__B_5)
#line 92 "cord.m"
{
#line 330 "cord.m"
  {
#line 330 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 330 "cord.m"
    MR_Word mercury__cord__C_6;

#line 330 "cord.m"
    if ((mercury__cord__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "cord.m"
      mercury__cord__C_6 = mercury__cord__B_5;
#line 330 "cord.m"
    else
#line 330 "cord.m"
      {
#line 330 "cord.m"
        MR_Word mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__A_4, (MR_Integer) 0)));

#line 330 "cord.m"
        if ((mercury__cord__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "cord.m"
          mercury__cord__C_6 = mercury__cord__A_4;
#line 330 "cord.m"
        else
#line 335 "cord.m"
          {
#line 335 "cord.m"
            MR_Word mercury__cord__BN_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__B_5, (MR_Integer) 0)));
#line 335 "cord.m"
            MR_Word mercury__cord__V_10_10;

#line 337 "cord.m"
            {
#line 337 "cord.m"
              mercury__cord__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 337 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 1) = ((MR_Box) (mercury__cord__BN_9));
#line 337 "cord.m"
            }
#line 337 "cord.m"
            {
#line 337 "cord.m"
              mercury__cord__C_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__C_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 337 "cord.m"
            }
#line 335 "cord.m"
          }
#line 330 "cord.m"
      }
#line 330 "cord.m"
    return mercury__cord__C_6;
#line 330 "cord.m"
  }
#line 92 "cord.m"
}

#line 87 "cord.m"
MR_Word MR_CALL 
mercury__cord__snoc_2_f_0(
#line 87 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 87 "cord.m"
  MR_Word mercury__cord__C_4,
#line 87 "cord.m"
  MR_Box mercury__cord__X_5)
#line 87 "cord.m"
{
#line 319 "cord.m"
  {
#line 319 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 319 "cord.m"
    MR_Word mercury__cord__CX_6;

#line 319 "cord.m"
    if ((mercury__cord__C_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "cord.m"
      {
#line 317 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 318 "cord.m"
        {
#line 318 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_5;
#line 318 "cord.m"
        }
#line 318 "cord.m"
        {
#line 318 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 318 "cord.m"
        }
#line 317 "cord.m"
      }
#line 319 "cord.m"
    else
#line 320 "cord.m"
      {
#line 320 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_4, (MR_Integer) 0)));
#line 320 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 320 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 321 "cord.m"
        {
#line 321 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_5;
#line 321 "cord.m"
        }
#line 321 "cord.m"
        {
#line 321 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__N_7));
#line 321 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__V_9_9));
#line 321 "cord.m"
        }
#line 321 "cord.m"
        {
#line 321 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 321 "cord.m"
        }
#line 320 "cord.m"
      }
#line 319 "cord.m"
    return mercury__cord__CX_6;
#line 319 "cord.m"
  }
#line 87 "cord.m"
}

#line 82 "cord.m"
MR_Word MR_CALL 
mercury__cord__cons_2_f_0(
#line 82 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 82 "cord.m"
  MR_Box mercury__cord__X_4,
#line 82 "cord.m"
  MR_Word mercury__cord__C_5)
#line 82 "cord.m"
{
#line 308 "cord.m"
  {
#line 308 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 308 "cord.m"
    MR_Word mercury__cord__XC_6;

#line 308 "cord.m"
    if ((mercury__cord__C_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "cord.m"
      {
#line 306 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 307 "cord.m"
        {
#line 307 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 307 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_4;
#line 307 "cord.m"
        }
#line 307 "cord.m"
        {
#line 307 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 307 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 307 "cord.m"
        }
#line 306 "cord.m"
      }
#line 308 "cord.m"
    else
#line 309 "cord.m"
      {
#line 309 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_5, (MR_Integer) 0)));
#line 309 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 309 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 310 "cord.m"
        {
#line 310 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_4;
#line 310 "cord.m"
        }
#line 310 "cord.m"
        {
#line 310 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__V_9_9));
#line 310 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__N_7));
#line 310 "cord.m"
        }
#line 310 "cord.m"
        {
#line 310 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 310 "cord.m"
        }
#line 309 "cord.m"
      }
#line 308 "cord.m"
    return mercury__cord__XC_6;
#line 308 "cord.m"
  }
#line 82 "cord.m"
}

#line 77 "cord.m"
MR_Word MR_CALL 
mercury__cord__from_list_1_f_0(
#line 77 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 77 "cord.m"
  MR_Word mercury__cord__Xs_3)
#line 77 "cord.m"
{
#line 259 "cord.m"
  {
#line 259 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 259 "cord.m"
    MR_Word mercury__cord__C_4;

#line 259 "cord.m"
    if ((mercury__cord__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "cord.m"
      mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "cord.m"
    else
#line 260 "cord.m"
      {
#line 260 "cord.m"
        MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 0));
#line 260 "cord.m"
        MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 1)));
#line 260 "cord.m"
        MR_Word mercury__cord__V_7_7;

#line 261 "cord.m"
        {
#line 261 "cord.m"
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = mercury__cord__H_5;
#line 261 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__T_6));
#line 261 "cord.m"
        }
#line 261 "cord.m"
        {
#line 261 "cord.m"
          mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 261 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__C_4, 0) = ((MR_Box) (mercury__cord__V_7_7));
#line 261 "cord.m"
        }
#line 260 "cord.m"
      }
#line 259 "cord.m"
    return mercury__cord__C_4;
#line 259 "cord.m"
  }
#line 77 "cord.m"
}

#line 72 "cord.m"
MR_Word MR_CALL 
mercury__cord__singleton_1_f_0(
#line 72 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 72 "cord.m"
  MR_Box mercury__cord__X_3)
#line 72 "cord.m"
{
#line 251 "cord.m"
  {
#line 251 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 251 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;
#line 251 "cord.m"
    MR_Word mercury__cord__V_4_4;

#line 251 "cord.m"
    {
#line 251 "cord.m"
      mercury__cord__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "cord.m"
      MR_hl_field(MR_mktag(0), mercury__cord__V_4_4, 0) = mercury__cord__X_3;
#line 251 "cord.m"
    }
#line 251 "cord.m"
    {
#line 251 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "cord.m"
      MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, 0) = ((MR_Box) (mercury__cord__V_4_4));
#line 251 "cord.m"
    }
#line 251 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 251 "cord.m"
  }
#line 72 "cord.m"
}

#line 68 "cord.m"
MR_bool MR_CALL 
mercury__cord__is_empty_1_p_0(
#line 68 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_2,
#line 68 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 68 "cord.m"
{
#line 247 "cord.m"
  {
#line 247 "cord.m"
    MR_bool mercury__cord__succeeded = (mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 247 "cord.m"
    return mercury__cord__succeeded;
#line 247 "cord.m"
  }
#line 68 "cord.m"
}

#line 64 "cord.m"
MR_Word MR_CALL 
mercury__cord__rev_list_1_f_0(
#line 64 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 64 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 64 "cord.m"
{
#line 279 "cord.m"
  {
#line 279 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 279 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 279 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 279 "cord.m"
    else
#line 280 "cord.m"
      {
#line 280 "cord.m"
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "cord.m"
        MR_Word mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 280 "cord.m"
        {
#line 280 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__rev_list_2_2_f_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__V_4_4);
        }
#line 280 "cord.m"
      }
#line 279 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 279 "cord.m"
  }
#line 64 "cord.m"
}

#line 60 "cord.m"
MR_Word MR_CALL 
mercury__cord__list_1_f_0(
#line 60 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 60 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 60 "cord.m"
{
#line 266 "cord.m"
  {
#line 266 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 266 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 266 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "cord.m"
    else
#line 267 "cord.m"
      {
#line 267 "cord.m"
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "cord.m"
        MR_Word mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 267 "cord.m"
        {
#line 267 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__V_4_4);
        }
#line 267 "cord.m"
      }
#line 266 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 266 "cord.m"
  }
#line 60 "cord.m"
}

#line 51 "cord.m"
MR_Word MR_CALL 
mercury__cord__empty_0_f_0(
#line 51 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_2)
#line 51 "cord.m"
{
#line 243 "cord.m"
  {
#line 243 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 243 "cord.m"
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 243 "cord.m"
    return mercury__cord__HeadVar__1_1;
#line 243 "cord.m"
  }
#line 51 "cord.m"
}

#line 45 "cord.m"
MR_Word MR_CALL 
mercury__cord__init_0_f_0(
#line 45 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_2)
#line 45 "cord.m"
{
#line 241 "cord.m"
  {
#line 241 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 241 "cord.m"
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 241 "cord.m"
    return mercury__cord__HeadVar__1_1;
#line 241 "cord.m"
  }
#line 45 "cord.m"
}

void mercury__cord__init(void)
{
}

void mercury__cord__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__cord__cord__type_ctor_info_cord_1);
	MR_register_type_ctor_info(&mercury__cord__cord__type_ctor_info_cord_node_1);
}

void mercury__cord__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module cord. */
