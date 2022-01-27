/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__cord__HeadVar__4_4);

#line 640 "cord.m"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(
#line 640 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 640 "cord.m"
  MR_Integer mercury__cord__Acc_3);

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4);

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4);

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

#line 436 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 436 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 436 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 436 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 436 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 314 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2);

#line 295 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
#line 295 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 295 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2);

#line 273 "cord.m"
static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
#line 273 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_19,
#line 273 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 273 "cord.m"
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



#line 666 "cord.c"
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

#line 681 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 689 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 694 "cord.c"
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

#line 709 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0
};

#line 714 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 719 "cord.c"
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

#line 733 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0,
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 739 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 745 "cord.c"
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

#line 766 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 771 "cord.c"
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

#line 786 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 794 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__cord__list__pti_list_1__pseudo_1
};

#line 800 "cord.c"
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

#line 815 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 821 "cord.c"
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

#line 836 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 841 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_1
};

#line 846 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2
};

#line 851 "cord.c"
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

#line 870 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2,
  &mercury__cord__cord__du_functor_desc_cord_node_1_1,
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 877 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 884 "cord.c"
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

#line 905 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
#line 908 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 910 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 912 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 914 "cord.c"
{
#line 916 "cord.c"
  {
#line 918 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 921 "cord.c"
    {
#line 923 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 926 "cord.c"
    return mercury__cord__succeeded;
#line 928 "cord.c"
  }
#line 930 "cord.c"
}

#line 933 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
#line 936 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 938 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 940 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 942 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 944 "cord.c"
{
#line 946 "cord.c"
  {
#line 948 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 951 "cord.c"
    {
#line 953 "cord.c"
      mercury__cord____Compare____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 956 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 958 "cord.c"
  }
#line 960 "cord.c"
}

#line 963 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
#line 966 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 968 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 970 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 972 "cord.c"
{
#line 974 "cord.c"
  {
#line 976 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 979 "cord.c"
    {
#line 981 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 984 "cord.c"
    return mercury__cord__succeeded;
#line 986 "cord.c"
  }
#line 988 "cord.c"
}

#line 991 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
#line 994 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 996 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 998 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 1000 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 1002 "cord.c"
{
#line 1004 "cord.c"
  {
#line 1006 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 1009 "cord.c"
    {
#line 1011 "cord.c"
      mercury__cord____Compare____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 1014 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 1016 "cord.c"
  }
#line 1018 "cord.c"
}

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
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

#line 640 "cord.m"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(
#line 640 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 640 "cord.m"
  MR_Integer mercury__cord__Acc_3)
#line 640 "cord.m"
{
#line 642 "cord.m"
  while (MR_TRUE)
#line 642 "cord.m"
    {
#line 642 "cord.m"
      /* tailcall optimized into a loop */
#line 642 "cord.m"
      {
#line 642 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 642 "cord.m"
        MR_Integer mercury__cord__HeadVar__4_4;

#line 642 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 644 "cord.m"
          {
#line 644 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 644 "cord.m"
            MR_Integer mercury__cord__V_17_17;

#line 645 "cord.m"
            {
#line 645 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(mercury__cord__A_14, mercury__cord__Acc_3);
            }
#line 644 "cord.m"
            /* direct tailcall eliminated */
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_15;
#line 644 "cord.m"
              MR_Integer mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 644 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 644 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 644 "cord.m"
            }
#line 644 "cord.m"
            continue;
#line 644 "cord.m"
          }
#line 642 "cord.m"
        else
#line 642 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 643 "cord.m"
            {
#line 643 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 643 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 643 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 643 "cord.m"
              {
#line 643 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 643 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 643 "cord.m"
              }
#line 347 "list.opt"
              {
#line 347 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 643 "cord.m"
            }
#line 642 "cord.m"
          else
#line 642 "cord.m"
            {
#line 486 "cord.m"
              mercury__cord__HeadVar__4_4 = (mercury__cord__Acc_3 + (MR_Integer) 1);
#line 642 "cord.m"
            }
#line 642 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 642 "cord.m"
      }
#line 642 "cord.m"
      break;
#line 642 "cord.m"
    }
#line 640 "cord.m"
}

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4)
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
            MR_Word mercury__cord__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Word mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 372 "cord.m"
            if ((mercury__cord__H_10_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "cord.m"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__HeadVar__3_3;
#line 372 "cord.m"
            else
#line 373 "cord.m"
              {
#line 373 "cord.m"
                MR_Word mercury__cord__N_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__H_10_9, (MR_Integer) 0)));
#line 373 "cord.m"
                MR_Word mercury__cord__V_52_52;
#line 373 "cord.m"
                MR_Word mercury__cord__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 373 "cord.m"
                {
#line 373 "cord.m"
                  mercury__cord__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 0) = ((MR_Box) (mercury__cord__N_50));
#line 373 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 1) = ((MR_Box) (mercury__cord__V_53_53));
#line 373 "cord.m"
                }
#line 373 "cord.m"
                {
#line 373 "cord.m"
                  mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__list_2_2_f_0(mercury__cord__V_27_27, mercury__cord__V_52_52, mercury__cord__HeadVar__3_3);
                }
#line 373 "cord.m"
              }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

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

#line 130 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4)
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
            MR_Word mercury__cord__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Word mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 342 "list.opt"
            {
#line 342 "list.opt"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__f_43_43_2_f_0(mercury__cord__V_27_27, mercury__cord__H_10_9, mercury__cord__HeadVar__3_3);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 336 "list.opt"
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

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

#line 436 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 436 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 436 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 436 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 436 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4)
#line 436 "cord.m"
{
#line 438 "cord.m"
  {
#line 438 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 438 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "cord.m"
      {
#line 438 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "cord.m"
        *mercury__cord__HeadVar__4_4 = mercury__cord__Prev_1;
#line 438 "cord.m"
      }
#line 438 "cord.m"
    else
#line 439 "cord.m"
      {
#line 439 "cord.m"
        MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 439 "cord.m"
        MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 439 "cord.m"
        MR_Word mercury__cord__AllButLast0_11;

#line 440 "cord.m"
        {
#line 440 "cord.m"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLast0_11, mercury__cord__HeadVar__4_4);
        }
#line 441 "cord.m"
        {
#line 441 "cord.m"
          MR_Word base;
#line 441 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 441 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__Prev_1;
#line 441 "cord.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__AllButLast0_11));
#line 441 "cord.m"
        }
#line 439 "cord.m"
      }
#line 438 "cord.m"
  }
#line 436 "cord.m"
}

#line 314 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 314 "cord.m"
{
#line 316 "cord.m"
  while (MR_TRUE)
#line 316 "cord.m"
    {
#line 316 "cord.m"
      /* tailcall optimized into a loop */
#line 316 "cord.m"
      {
#line 316 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 316 "cord.m"
        MR_Word mercury__cord__HeadVar__3_3;

#line 316 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "cord.m"
          mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__2_2;
#line 316 "cord.m"
        else
#line 317 "cord.m"
          {
#line 317 "cord.m"
            MR_Box mercury__cord__X_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 317 "cord.m"
            MR_Word mercury__cord__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "cord.m"
            MR_Word mercury__cord__V_8_8;

#line 318 "cord.m"
            {
#line 318 "cord.m"
              mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 0) = mercury__cord__X_5;
#line 318 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 318 "cord.m"
            }
#line 317 "cord.m"
            /* direct tailcall eliminated */
#line 317 "cord.m"
            {
#line 317 "cord.m"
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Xs_6;
#line 317 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_8_8;

#line 317 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 317 "cord.m"
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 317 "cord.m"
            }
#line 317 "cord.m"
            continue;
#line 317 "cord.m"
          }
#line 316 "cord.m"
        return mercury__cord__HeadVar__3_3;
#line 316 "cord.m"
      }
#line 316 "cord.m"
      break;
#line 316 "cord.m"
    }
#line 314 "cord.m"
}

#line 295 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
#line 295 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 295 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 295 "cord.m"
{
#line 297 "cord.m"
  while (MR_TRUE)
#line 297 "cord.m"
    {
#line 297 "cord.m"
      /* tailcall optimized into a loop */
#line 297 "cord.m"
      {
#line 297 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 297 "cord.m"
        MR_Word mercury__cord__L_3;

#line 297 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "cord.m"
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
#line 297 "cord.m"
        else
#line 298 "cord.m"
          {
#line 298 "cord.m"
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "cord.m"
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

#line 302 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 2))))
#line 306 "cord.m"
              {
#line 306 "cord.m"
                MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
#line 306 "cord.m"
                MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
#line 306 "cord.m"
                MR_Word mercury__cord__V_14_14;
#line 306 "cord.m"
                MR_Word mercury__cord__V_15_15;

#line 307 "cord.m"
                {
#line 307 "cord.m"
                  mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__B_13));
#line 307 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
#line 307 "cord.m"
                }
#line 307 "cord.m"
                {
#line 307 "cord.m"
                  mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__A_12));
#line 307 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 307 "cord.m"
                }
#line 307 "cord.m"
                /* direct tailcall eliminated */
#line 307 "cord.m"
                {
#line 307 "cord.m"
                  MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

#line 307 "cord.m"
                  mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 307 "cord.m"
                }
#line 307 "cord.m"
                continue;
#line 306 "cord.m"
              }
#line 302 "cord.m"
            else
#line 302 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 1))))
#line 303 "cord.m"
                {
#line 303 "cord.m"
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
#line 303 "cord.m"
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
#line 303 "cord.m"
                  MR_Word mercury__cord__V_16_16;
#line 303 "cord.m"
                  MR_Word mercury__cord__V_17_17;

#line 304 "cord.m"
                  {
#line 304 "cord.m"
                    mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_10;
#line 304 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 304 "cord.m"
                  }
#line 304 "cord.m"
                  {
#line 304 "cord.m"
                    mercury__cord__V_16_16 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__T_11, mercury__cord__V_17_17);
                  }
#line 304 "cord.m"
                  /* direct tailcall eliminated */
#line 304 "cord.m"
                  {
#line 304 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 304 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

#line 304 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 304 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 304 "cord.m"
                  }
#line 304 "cord.m"
                  continue;
#line 303 "cord.m"
                }
#line 302 "cord.m"
              else
#line 300 "cord.m"
                {
#line 300 "cord.m"
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
#line 300 "cord.m"
                  MR_Word mercury__cord__V_18_18;

#line 301 "cord.m"
                  {
#line 301 "cord.m"
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
#line 301 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 301 "cord.m"
                  }
#line 301 "cord.m"
                  /* direct tailcall eliminated */
#line 301 "cord.m"
                  {
#line 301 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 301 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

#line 301 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 301 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 301 "cord.m"
                  }
#line 301 "cord.m"
                  continue;
#line 300 "cord.m"
                }
#line 298 "cord.m"
          }
#line 297 "cord.m"
        return mercury__cord__L_3;
#line 297 "cord.m"
      }
#line 297 "cord.m"
      break;
#line 297 "cord.m"
    }
#line 295 "cord.m"
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
#line 1865 "cord.c"
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
#line 1894 "cord.c"
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
#line 1931 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 234 "cord.m"
                else
#line 1935 "cord.c"
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
#line 1952 "cord.c"
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
#line 1972 "cord.c"
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
#line 1993 "cord.c"
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
#line 2006 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 234 "cord.m"
                else
#line 234 "cord.m"
                  if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2012 "cord.c"
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
#line 2098 "cord.c"
                  {
#line 2100 "cord.c"
                    mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_9_9, mercury__cord__V_11_11);
                  }
#line 234 "cord.m"
                  if (mercury__cord__succeeded)
#line 2105 "cord.c"
                    {
#line 2107 "cord.c"
                      /* direct tailcall eliminated */
#line 2109 "cord.c"
                      {
#line 2111 "cord.c"
                        MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_10_10;
#line 2113 "cord.c"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_12_12;

#line 2116 "cord.c"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 2118 "cord.c"
                        mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 2120 "cord.c"
                      }
#line 2122 "cord.c"
                      continue;
#line 2124 "cord.c"
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
#line 2155 "cord.c"
                    {
#line 2157 "cord.c"
                      mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_5_5, mercury__cord__V_7_7);
                    }
#line 234 "cord.m"
                    if (mercury__cord__succeeded)
#line 2162 "cord.c"
                      {
#line 2164 "cord.c"
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
#line 2188 "cord.c"
                    {
#line 2190 "cord.c"
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
#line 2234 "cord.c"
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
#line 2246 "cord.c"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 230 "cord.m"
      else
#line 230 "cord.m"
        {
#line 230 "cord.m"
          MR_Word mercury__cord__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 230 "cord.m"
          if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2257 "cord.c"
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
#line 2340 "cord.c"
              {
#line 2342 "cord.c"
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

#line 759 "cord.m"
void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
#line 759 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_65,
#line 759 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_66,
#line 759 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_67,
#line 759 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_68,
#line 759 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_E_69,
#line 759 "cord.m"
  MR_Word mercury__cord__P_1,
#line 759 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 759 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 759 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 759 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 759 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 759 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
#line 759 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
#line 759 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
#line 759 "cord.m"
{
#line 764 "cord.m"
  {
#line 764 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 764 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
      {
#line 769 "cord.m"
        MR_Word mercury__cord__XA_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
        MR_Word mercury__cord__XB_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
        MR_Word mercury__cord__YA_48;
#line 769 "cord.m"
        MR_Word mercury__cord__YB_49;
#line 769 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_59_59;
#line 769 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_60_60;
#line 769 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_C_61_61;

#line 770 "cord.m"
        {
#line 770 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XA_46, &mercury__cord__YA_48, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_61_61);
        }
#line 771 "cord.m"
        {
#line 771 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XB_47, &mercury__cord__YB_49, mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_61_61, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 769 "cord.m"
        {
#line 769 "cord.m"
          MR_Word base;
#line 769 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 769 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_48));
#line 769 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_49));
#line 769 "cord.m"
        }
#line 769 "cord.m"
      }
#line 764 "cord.m"
    else
#line 764 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 766 "cord.m"
        {
#line 766 "cord.m"
          MR_Box mercury__cord__XH_26 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 766 "cord.m"
          MR_Word mercury__cord__XT_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 766 "cord.m"
          MR_Box mercury__cord__YH_28;
#line 766 "cord.m"
          MR_Word mercury__cord__YT_29;
#line 766 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_39_39;
#line 766 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_40_40;
#line 766 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_C_41_41;
#line 767 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 767 "cord.m"
          {
#line 767 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_26, &mercury__cord__YH_28, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_41_41);
          }
#line 768 "cord.m"
          {
#line 768 "cord.m"
            mercury__list__map_foldl3_9_p_1(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XT_27, &mercury__cord__YT_29, mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_41_41, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 766 "cord.m"
          {
#line 766 "cord.m"
            MR_Word base;
#line 766 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 766 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_28;
#line 766 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_29));
#line 766 "cord.m"
          }
#line 766 "cord.m"
        }
#line 764 "cord.m"
      else
#line 764 "cord.m"
        {
#line 764 "cord.m"
          MR_Box mercury__cord__X_11 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 764 "cord.m"
          MR_Box mercury__cord__Y_12;
#line 765 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 765 "cord.m"
          {
#line 765 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_11, &mercury__cord__Y_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 764 "cord.m"
          {
#line 764 "cord.m"
            MR_Word base;
#line 764 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 764 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 764 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_12;
#line 764 "cord.m"
          }
#line 764 "cord.m"
        }
#line 764 "cord.m"
  }
#line 759 "cord.m"
}

#line 740 "cord.m"
void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
#line 740 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_49,
#line 740 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_50,
#line 740 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_51,
#line 740 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_52,
#line 740 "cord.m"
  MR_Word mercury__cord__P_1,
#line 740 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 740 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 740 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 740 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 740 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 740 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
#line 740 "cord.m"
{
#line 744 "cord.m"
  {
#line 744 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 744 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 749 "cord.m"
      {
#line 749 "cord.m"
        MR_Word mercury__cord__XA_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 749 "cord.m"
        MR_Word mercury__cord__XB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 749 "cord.m"
        MR_Word mercury__cord__YA_37;
#line 749 "cord.m"
        MR_Word mercury__cord__YB_38;
#line 749 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_45_45;
#line 749 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_46_46;

#line 750 "cord.m"
        {
#line 750 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XA_35, &mercury__cord__YA_37, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_46_46);
        }
#line 751 "cord.m"
        {
#line 751 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XB_36, &mercury__cord__YB_38, mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_46_46, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 749 "cord.m"
        {
#line 749 "cord.m"
          MR_Word base;
#line 749 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 749 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_37));
#line 749 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_38));
#line 749 "cord.m"
        }
#line 749 "cord.m"
      }
#line 744 "cord.m"
    else
#line 744 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 746 "cord.m"
        {
#line 746 "cord.m"
          MR_Box mercury__cord__XH_20 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 746 "cord.m"
          MR_Word mercury__cord__XT_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 746 "cord.m"
          MR_Box mercury__cord__YH_22;
#line 746 "cord.m"
          MR_Word mercury__cord__YT_23;
#line 746 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_30_30;
#line 746 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_31_31;
#line 747 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 747 "cord.m"
          {
#line 747 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_20, &mercury__cord__YH_22, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_31_31);
          }
#line 748 "cord.m"
          {
#line 748 "cord.m"
            mercury__list__map_foldl2_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XT_21, &mercury__cord__YT_23, mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_31_31, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 746 "cord.m"
          {
#line 746 "cord.m"
            MR_Word base;
#line 746 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 746 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_22;
#line 746 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_23));
#line 746 "cord.m"
          }
#line 746 "cord.m"
        }
#line 744 "cord.m"
      else
#line 744 "cord.m"
        {
#line 744 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 744 "cord.m"
          MR_Box mercury__cord__Y_10;
#line 745 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 745 "cord.m"
          {
#line 745 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_9, &mercury__cord__Y_10, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 744 "cord.m"
          {
#line 744 "cord.m"
            MR_Word base;
#line 744 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 744 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 744 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_10;
#line 744 "cord.m"
          }
#line 744 "cord.m"
        }
#line 744 "cord.m"
  }
#line 740 "cord.m"
}

#line 722 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 722 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 722 "cord.m"
  MR_Word mercury__cord__P_1,
#line 722 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 722 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 722 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 722 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 722 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 730 "cord.m"
        if (mercury__cord__succeeded)
#line 730 "cord.m"
          {
#line 732 "cord.m"
            {
#line 732 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 730 "cord.m"
            if (mercury__cord__succeeded)
#line 730 "cord.m"
              {
#line 730 "cord.m"
                {
#line 730 "cord.m"
                  MR_Word base;
#line 730 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
                }
#line 730 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 730 "cord.m"
              }
#line 730 "cord.m"
          }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 727 "cord.m"
          if (mercury__cord__succeeded)
#line 727 "cord.m"
            {
#line 729 "cord.m"
              {
#line 729 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 727 "cord.m"
              if (mercury__cord__succeeded)
#line 727 "cord.m"
                {
#line 727 "cord.m"
                  {
#line 727 "cord.m"
                    MR_Word base;
#line 727 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
                  }
#line 727 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 727 "cord.m"
                }
#line 727 "cord.m"
            }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          if (mercury__cord__succeeded)
#line 725 "cord.m"
            {
#line 725 "cord.m"
              {
#line 725 "cord.m"
                MR_Word base;
#line 725 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
              }
#line 725 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 725 "cord.m"
            }
#line 725 "cord.m"
        }
#line 725 "cord.m"
    return mercury__cord__succeeded;
#line 725 "cord.m"
  }
#line 722 "cord.m"
}

#line 720 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
#line 720 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 720 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 720 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 720 "cord.m"
  MR_Word mercury__cord__P_1,
#line 720 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 720 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 720 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 720 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 720 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 730 "cord.m"
        if (mercury__cord__succeeded)
#line 730 "cord.m"
          {
#line 732 "cord.m"
            {
#line 732 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 730 "cord.m"
            if (mercury__cord__succeeded)
#line 730 "cord.m"
              {
#line 730 "cord.m"
                {
#line 730 "cord.m"
                  MR_Word base;
#line 730 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
                }
#line 730 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 730 "cord.m"
              }
#line 730 "cord.m"
          }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 727 "cord.m"
          if (mercury__cord__succeeded)
#line 727 "cord.m"
            {
#line 729 "cord.m"
              {
#line 729 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 727 "cord.m"
              if (mercury__cord__succeeded)
#line 727 "cord.m"
                {
#line 727 "cord.m"
                  {
#line 727 "cord.m"
                    MR_Word base;
#line 727 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
                  }
#line 727 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 727 "cord.m"
                }
#line 727 "cord.m"
            }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          if (mercury__cord__succeeded)
#line 725 "cord.m"
            {
#line 725 "cord.m"
              {
#line 725 "cord.m"
                MR_Word base;
#line 725 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
              }
#line 725 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 725 "cord.m"
            }
#line 725 "cord.m"
        }
#line 725 "cord.m"
    return mercury__cord__succeeded;
#line 725 "cord.m"
  }
#line 720 "cord.m"
}

#line 718 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
#line 718 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 718 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 718 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 718 "cord.m"
  MR_Word mercury__cord__P_1,
#line 718 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 718 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 718 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 718 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 718 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 730 "cord.m"
        if (mercury__cord__succeeded)
#line 730 "cord.m"
          {
#line 732 "cord.m"
            {
#line 732 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 730 "cord.m"
            if (mercury__cord__succeeded)
#line 730 "cord.m"
              {
#line 730 "cord.m"
                {
#line 730 "cord.m"
                  MR_Word base;
#line 730 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
                }
#line 730 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 730 "cord.m"
              }
#line 730 "cord.m"
          }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 727 "cord.m"
          if (mercury__cord__succeeded)
#line 727 "cord.m"
            {
#line 729 "cord.m"
              {
#line 729 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 727 "cord.m"
              if (mercury__cord__succeeded)
#line 727 "cord.m"
                {
#line 727 "cord.m"
                  {
#line 727 "cord.m"
                    MR_Word base;
#line 727 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
                  }
#line 727 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 727 "cord.m"
                }
#line 727 "cord.m"
            }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          if (mercury__cord__succeeded)
#line 725 "cord.m"
            {
#line 725 "cord.m"
              {
#line 725 "cord.m"
                MR_Word base;
#line 725 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
              }
#line 725 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 725 "cord.m"
            }
#line 725 "cord.m"
        }
#line 725 "cord.m"
    return mercury__cord__succeeded;
#line 725 "cord.m"
  }
#line 718 "cord.m"
}

#line 716 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
#line 716 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 716 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 716 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 716 "cord.m"
  MR_Word mercury__cord__P_1,
#line 716 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 716 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 716 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 716 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 716 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 732 "cord.m"
        {
#line 732 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 730 "cord.m"
        {
#line 730 "cord.m"
          MR_Word base;
#line 730 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
        }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 729 "cord.m"
          {
#line 729 "cord.m"
            mercury__list__map_foldl_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 727 "cord.m"
          {
#line 727 "cord.m"
            MR_Word base;
#line 727 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
          }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          {
#line 725 "cord.m"
            MR_Word base;
#line 725 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
          }
#line 725 "cord.m"
        }
#line 725 "cord.m"
  }
#line 716 "cord.m"
}

#line 714 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
#line 714 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 714 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 714 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 714 "cord.m"
  MR_Word mercury__cord__P_1,
#line 714 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 714 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 714 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 714 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 714 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 732 "cord.m"
        {
#line 732 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 730 "cord.m"
        {
#line 730 "cord.m"
          MR_Word base;
#line 730 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
        }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 729 "cord.m"
          {
#line 729 "cord.m"
            mercury__list__map_foldl_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 727 "cord.m"
          {
#line 727 "cord.m"
            MR_Word base;
#line 727 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
          }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          {
#line 725 "cord.m"
            MR_Word base;
#line 725 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
          }
#line 725 "cord.m"
        }
#line 725 "cord.m"
  }
#line 714 "cord.m"
}

#line 712 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
#line 712 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 712 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 712 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 712 "cord.m"
  MR_Word mercury__cord__P_1,
#line 712 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 712 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 712 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 712 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 712 "cord.m"
{
#line 725 "cord.m"
  {
#line 725 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 725 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "cord.m"
      {
#line 730 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 730 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 730 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 730 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 730 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 731 "cord.m"
        {
#line 731 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 732 "cord.m"
        {
#line 732 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 730 "cord.m"
        {
#line 730 "cord.m"
          MR_Word base;
#line 730 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 730 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 730 "cord.m"
        }
#line 730 "cord.m"
      }
#line 725 "cord.m"
    else
#line 725 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 727 "cord.m"
        {
#line 727 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 727 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 727 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 727 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 728 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 728 "cord.m"
          {
#line 728 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 729 "cord.m"
          {
#line 729 "cord.m"
            mercury__list__map_foldl_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 727 "cord.m"
          {
#line 727 "cord.m"
            MR_Word base;
#line 727 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 727 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 727 "cord.m"
          }
#line 727 "cord.m"
        }
#line 725 "cord.m"
      else
#line 725 "cord.m"
        {
#line 725 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 725 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 726 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 726 "cord.m"
          {
#line 726 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 725 "cord.m"
          {
#line 725 "cord.m"
            MR_Word base;
#line 725 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 725 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 725 "cord.m"
          }
#line 725 "cord.m"
        }
#line 725 "cord.m"
  }
#line 712 "cord.m"
}

#line 694 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_5(
#line 694 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 694 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 694 "cord.m"
  MR_Word mercury__cord__P_1,
#line 694 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 694 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 694 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 694 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 701 "cord.m"
            if (mercury__cord__succeeded)
#line 703 "cord.m"
              {
#line 703 "cord.m"
                /* direct tailcall eliminated */
#line 703 "cord.m"
                {
#line 703 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
                }
#line 703 "cord.m"
                continue;
#line 703 "cord.m"
              }
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
        return mercury__cord__succeeded;
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 694 "cord.m"
}

#line 692 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_4(
#line 692 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 692 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 692 "cord.m"
  MR_Word mercury__cord__P_1,
#line 692 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 692 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 692 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 692 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 701 "cord.m"
            if (mercury__cord__succeeded)
#line 703 "cord.m"
              {
#line 703 "cord.m"
                /* direct tailcall eliminated */
#line 703 "cord.m"
                {
#line 703 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
                }
#line 703 "cord.m"
                continue;
#line 703 "cord.m"
              }
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
        return mercury__cord__succeeded;
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 692 "cord.m"
}

#line 690 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_4_p_3(
#line 690 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 690 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 690 "cord.m"
  MR_Word mercury__cord__P_1,
#line 690 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 690 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 690 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 690 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 701 "cord.m"
            if (mercury__cord__succeeded)
#line 703 "cord.m"
              {
#line 703 "cord.m"
                /* direct tailcall eliminated */
#line 703 "cord.m"
                {
#line 703 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
                }
#line 703 "cord.m"
                continue;
#line 703 "cord.m"
              }
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldr_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
        return mercury__cord__succeeded;
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 690 "cord.m"
}

#line 689 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_2(
#line 689 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 689 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 689 "cord.m"
  MR_Word mercury__cord__P_1,
#line 689 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 689 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 689 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 689 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__foldr_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 703 "cord.m"
            /* direct tailcall eliminated */
#line 703 "cord.m"
            {
#line 703 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
            }
#line 703 "cord.m"
            continue;
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__list__foldr_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 700 "cord.m"
                return;
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 698 "cord.m"
                return;
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 689 "cord.m"
}

#line 688 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_1(
#line 688 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 688 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 688 "cord.m"
  MR_Word mercury__cord__P_1,
#line 688 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 688 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 688 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 688 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__foldr_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 703 "cord.m"
            /* direct tailcall eliminated */
#line 703 "cord.m"
            {
#line 703 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
            }
#line 703 "cord.m"
            continue;
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__list__foldr_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 700 "cord.m"
                return;
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 698 "cord.m"
                return;
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 688 "cord.m"
}

#line 687 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_4_p_0(
#line 687 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 687 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 687 "cord.m"
  MR_Word mercury__cord__P_1,
#line 687 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 687 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 687 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 687 "cord.m"
{
#line 697 "cord.m"
  while (MR_TRUE)
#line 697 "cord.m"
    {
#line 697 "cord.m"
      /* tailcall optimized into a loop */
#line 697 "cord.m"
      {
#line 697 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 697 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 701 "cord.m"
          {
#line 701 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 702 "cord.m"
            {
#line 702 "cord.m"
              mercury__cord__foldr_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__B_21, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 703 "cord.m"
            /* direct tailcall eliminated */
#line 703 "cord.m"
            {
#line 703 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_20;
#line 703 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 703 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 703 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 703 "cord.m"
            }
#line 703 "cord.m"
            continue;
#line 701 "cord.m"
          }
#line 697 "cord.m"
        else
#line 697 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 699 "cord.m"
            {
#line 699 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 699 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 700 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 700 "cord.m"
              }
#line 700 "cord.m"
              {
#line 700 "cord.m"
                mercury__list__foldr_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 700 "cord.m"
                return;
              }
#line 699 "cord.m"
            }
#line 697 "cord.m"
          else
#line 697 "cord.m"
            {
#line 697 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 698 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 698 "cord.m"
              {
#line 698 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 698 "cord.m"
                return;
              }
#line 697 "cord.m"
            }
#line 697 "cord.m"
      }
#line 697 "cord.m"
      break;
#line 697 "cord.m"
    }
#line 687 "cord.m"
}

#line 675 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldr_node_3_f_0(
#line 675 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_18,
#line 675 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_19,
#line 675 "cord.m"
  MR_Word mercury__cord__F_1,
#line 675 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 675 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 675 "cord.m"
{
#line 677 "cord.m"
  while (MR_TRUE)
#line 677 "cord.m"
    {
#line 677 "cord.m"
      /* tailcall optimized into a loop */
#line 677 "cord.m"
      {
#line 677 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 677 "cord.m"
        MR_Box mercury__cord__HeadVar__4_4;

#line 677 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 679 "cord.m"
          {
#line 679 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 679 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 679 "cord.m"
            MR_Box mercury__cord__V_17_17;

#line 680 "cord.m"
            {
#line 680 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__foldr_node_3_f_0(mercury__cord__TypeInfo_for_T_18, mercury__cord__TypeInfo_for_U_19, mercury__cord__F_1, mercury__cord__B_15, mercury__cord__Acc_3);
            }
#line 679 "cord.m"
            /* direct tailcall eliminated */
#line 679 "cord.m"
            {
#line 679 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_14;
#line 679 "cord.m"
              MR_Box mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 679 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 679 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 679 "cord.m"
            }
#line 679 "cord.m"
            continue;
#line 679 "cord.m"
          }
#line 677 "cord.m"
        else
#line 677 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 678 "cord.m"
            {
#line 678 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 678 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 678 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 678 "cord.m"
              {
#line 678 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 678 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 678 "cord.m"
              }
#line 363 "list.opt"
              {
#line 363 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 678 "cord.m"
            }
#line 677 "cord.m"
          else
#line 677 "cord.m"
            {
#line 677 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 677 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 677 "cord.m"
              {
#line 677 "cord.m"
                mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_6, mercury__cord__Acc_3);
              }
#line 677 "cord.m"
            }
#line 677 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 677 "cord.m"
      }
#line 677 "cord.m"
      break;
#line 677 "cord.m"
    }
#line 675 "cord.m"
}

#line 659 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_5(
#line 659 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 659 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 659 "cord.m"
  MR_Word mercury__cord__P_1,
#line 659 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 659 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 659 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 659 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 666 "cord.m"
            if (mercury__cord__succeeded)
#line 668 "cord.m"
              {
#line 668 "cord.m"
                /* direct tailcall eliminated */
#line 668 "cord.m"
                {
#line 668 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
                }
#line 668 "cord.m"
                continue;
#line 668 "cord.m"
              }
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_5(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
        return mercury__cord__succeeded;
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 659 "cord.m"
}

#line 657 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_4(
#line 657 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 657 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 657 "cord.m"
  MR_Word mercury__cord__P_1,
#line 657 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 657 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 657 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 657 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 666 "cord.m"
            if (mercury__cord__succeeded)
#line 668 "cord.m"
              {
#line 668 "cord.m"
                /* direct tailcall eliminated */
#line 668 "cord.m"
                {
#line 668 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
                }
#line 668 "cord.m"
                continue;
#line 668 "cord.m"
              }
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_4(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
        return mercury__cord__succeeded;
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 657 "cord.m"
}

#line 655 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_4_p_3(
#line 655 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 655 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 655 "cord.m"
  MR_Word mercury__cord__P_1,
#line 655 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 655 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 655 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 655 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 666 "cord.m"
            if (mercury__cord__succeeded)
#line 668 "cord.m"
              {
#line 668 "cord.m"
                /* direct tailcall eliminated */
#line 668 "cord.m"
                {
#line 668 "cord.m"
                  MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
                  MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
                  mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
                  mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
                }
#line 668 "cord.m"
                continue;
#line 668 "cord.m"
              }
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                return mercury__cord__succeeded = mercury__list__foldl_4_p_3(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                return mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
        return mercury__cord__succeeded;
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 655 "cord.m"
}

#line 654 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_2(
#line 654 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 654 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 654 "cord.m"
  MR_Word mercury__cord__P_1,
#line 654 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 654 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 654 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 654 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__foldl_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 668 "cord.m"
            /* direct tailcall eliminated */
#line 668 "cord.m"
            {
#line 668 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
            }
#line 668 "cord.m"
            continue;
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__list__foldl_4_p_2(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 665 "cord.m"
                return;
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 663 "cord.m"
                return;
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 654 "cord.m"
}

#line 653 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_1(
#line 653 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 653 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 653 "cord.m"
  MR_Word mercury__cord__P_1,
#line 653 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 653 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 653 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 653 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__foldl_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 668 "cord.m"
            /* direct tailcall eliminated */
#line 668 "cord.m"
            {
#line 668 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
            }
#line 668 "cord.m"
            continue;
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__list__foldl_4_p_1(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 665 "cord.m"
                return;
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 663 "cord.m"
                return;
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 653 "cord.m"
}

#line 652 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_4_p_0(
#line 652 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_27,
#line 652 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_28,
#line 652 "cord.m"
  MR_Word mercury__cord__P_1,
#line 652 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 652 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 652 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 652 "cord.m"
{
#line 662 "cord.m"
  while (MR_TRUE)
#line 662 "cord.m"
    {
#line 662 "cord.m"
      /* tailcall optimized into a loop */
#line 662 "cord.m"
      {
#line 662 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 662 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 666 "cord.m"
          {
#line 666 "cord.m"
            MR_Word mercury__cord__A_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "cord.m"
            MR_Word mercury__cord__B_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "cord.m"
            MR_Box mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 667 "cord.m"
            {
#line 667 "cord.m"
              mercury__cord__foldl_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__A_20, mercury__cord__STATE_VARIABLE_Acc_0_3, &mercury__cord__STATE_VARIABLE_Acc_25_25);
            }
#line 668 "cord.m"
            /* direct tailcall eliminated */
#line 668 "cord.m"
            {
#line 668 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_21;
#line 668 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__cord__STATE_VARIABLE_Acc_25_25;

#line 668 "cord.m"
              mercury__cord__STATE_VARIABLE_Acc_0_3 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_3;
#line 668 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 668 "cord.m"
            }
#line 668 "cord.m"
            continue;
#line 666 "cord.m"
          }
#line 662 "cord.m"
        else
#line 662 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 664 "cord.m"
            {
#line 664 "cord.m"
              MR_Box mercury__cord__H_12 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 664 "cord.m"
              MR_Word mercury__cord__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "cord.m"
              MR_Word mercury__cord__V_17_17;

#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_12;
#line 665 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_13));
#line 665 "cord.m"
              }
#line 665 "cord.m"
              {
#line 665 "cord.m"
                mercury__list__foldl_4_p_0(mercury__cord__TypeInfo_for_T_27, mercury__cord__TypeInfo_for_U_28, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 665 "cord.m"
                return;
              }
#line 664 "cord.m"
            }
#line 662 "cord.m"
          else
#line 662 "cord.m"
            {
#line 662 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 663 "cord.m"
              {
#line 663 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_6, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 663 "cord.m"
                return;
              }
#line 662 "cord.m"
            }
#line 662 "cord.m"
      }
#line 662 "cord.m"
      break;
#line 662 "cord.m"
    }
#line 652 "cord.m"
}

#line 640 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldl_node_3_f_0(
#line 640 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_18,
#line 640 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_19,
#line 640 "cord.m"
  MR_Word mercury__cord__F_1,
#line 640 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 640 "cord.m"
  MR_Box mercury__cord__Acc_3)
#line 640 "cord.m"
{
#line 642 "cord.m"
  while (MR_TRUE)
#line 642 "cord.m"
    {
#line 642 "cord.m"
      /* tailcall optimized into a loop */
#line 642 "cord.m"
      {
#line 642 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 642 "cord.m"
        MR_Box mercury__cord__HeadVar__4_4;

#line 642 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 644 "cord.m"
          {
#line 644 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "cord.m"
            MR_Word mercury__cord__B_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 644 "cord.m"
            MR_Box mercury__cord__V_17_17;

#line 645 "cord.m"
            {
#line 645 "cord.m"
              mercury__cord__V_17_17 = mercury__cord__foldl_node_3_f_0(mercury__cord__TypeInfo_for_T_18, mercury__cord__TypeInfo_for_U_19, mercury__cord__F_1, mercury__cord__A_14, mercury__cord__Acc_3);
            }
#line 644 "cord.m"
            /* direct tailcall eliminated */
#line 644 "cord.m"
            {
#line 644 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_15;
#line 644 "cord.m"
              MR_Box mercury__cord__Acc__tmp_copy_3 = mercury__cord__V_17_17;

#line 644 "cord.m"
              mercury__cord__Acc_3 = mercury__cord__Acc__tmp_copy_3;
#line 644 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 644 "cord.m"
            }
#line 644 "cord.m"
            continue;
#line 644 "cord.m"
          }
#line 642 "cord.m"
        else
#line 642 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 643 "cord.m"
            {
#line 643 "cord.m"
              MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 643 "cord.m"
              MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 643 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 643 "cord.m"
              {
#line 643 "cord.m"
                mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 0) = mercury__cord__H_9;
#line 643 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_12_12, 1) = ((MR_Box) (mercury__cord__T_10));
#line 643 "cord.m"
              }
#line 347 "list.opt"
              {
#line 347 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_12_12, mercury__cord__Acc_3, &mercury__cord__HeadVar__4_4);
              }
#line 643 "cord.m"
            }
#line 642 "cord.m"
          else
#line 642 "cord.m"
            {
#line 642 "cord.m"
              MR_Box mercury__cord__X_6 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 642 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 642 "cord.m"
              {
#line 642 "cord.m"
                mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_6, mercury__cord__Acc_3);
              }
#line 642 "cord.m"
            }
#line 642 "cord.m"
        return mercury__cord__HeadVar__4_4;
#line 642 "cord.m"
      }
#line 642 "cord.m"
      break;
#line 642 "cord.m"
    }
#line 640 "cord.m"
}

#line 597 "cord.m"
void MR_CALL 
mercury__cord__filter_node_4_p_0(
#line 597 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_29,
#line 597 "cord.m"
  MR_Word mercury__cord__P_5,
#line 597 "cord.m"
  MR_Word mercury__cord__Node_6,
#line 597 "cord.m"
  MR_Word * mercury__cord__Trues_7,
#line 597 "cord.m"
  MR_Word * mercury__cord__Falses_8)
#line 597 "cord.m"
{
#line 610 "cord.m"
  {
#line 610 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 610 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 2))))
#line 628 "cord.m"
      {
#line 628 "cord.m"
        MR_Word mercury__cord__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 0)));
#line 628 "cord.m"
        MR_Word mercury__cord__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 1)));
#line 628 "cord.m"
        MR_Word mercury__cord__CATrues_20;
#line 628 "cord.m"
        MR_Word mercury__cord__CAFalses_21;
#line 628 "cord.m"
        MR_Word mercury__cord__CBTrues_22;
#line 628 "cord.m"
        MR_Word mercury__cord__CBFalses_23;

#line 629 "cord.m"
        {
#line 629 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__A_18, &mercury__cord__CATrues_20, &mercury__cord__CAFalses_21);
        }
#line 630 "cord.m"
        {
#line 630 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__B_19, &mercury__cord__CBTrues_22, &mercury__cord__CBFalses_23);
        }
#line 631 "cord.m"
        {
#line 631 "cord.m"
          *mercury__cord__Trues_7 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CATrues_20, mercury__cord__CBTrues_22);
        }
#line 632 "cord.m"
        {
#line 632 "cord.m"
          *mercury__cord__Falses_8 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CAFalses_21, mercury__cord__CBFalses_23);
        }
#line 628 "cord.m"
      }
#line 610 "cord.m"
    else
#line 610 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 1))))
#line 611 "cord.m"
        {
#line 611 "cord.m"
          MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 0));
#line 611 "cord.m"
          MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 1)));
#line 611 "cord.m"
          MR_Word mercury__cord__TrueList_12;
#line 611 "cord.m"
          MR_Word mercury__cord__FalseList_13;
#line 611 "cord.m"
          MR_Word mercury__cord__V_24_24;

#line 612 "cord.m"
          {
#line 612 "cord.m"
            mercury__cord__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 0) = mercury__cord__H_10;
#line 612 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 1) = ((MR_Box) (mercury__cord__T_11));
#line 612 "cord.m"
          }
#line 612 "cord.m"
          {
#line 612 "cord.m"
            mercury__list__filter_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__V_24_24, &mercury__cord__TrueList_12, &mercury__cord__FalseList_13);
          }
#line 616 "cord.m"
          if ((mercury__cord__TrueList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "cord.m"
            *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "cord.m"
          else
#line 617 "cord.m"
            {
#line 617 "cord.m"
              MR_Box mercury__cord__TH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 0));
#line 617 "cord.m"
              MR_Word mercury__cord__TT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 1)));
#line 617 "cord.m"
              MR_Word mercury__cord__V_25_25;

#line 618 "cord.m"
              {
#line 618 "cord.m"
                mercury__cord__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 0) = mercury__cord__TH_14;
#line 618 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 1) = ((MR_Box) (mercury__cord__TT_15));
#line 618 "cord.m"
              }
#line 618 "cord.m"
              {
#line 618 "cord.m"
                MR_Word base;
#line 618 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 618 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_25_25));
#line 618 "cord.m"
              }
#line 617 "cord.m"
            }
#line 623 "cord.m"
          if ((mercury__cord__FalseList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "cord.m"
            *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "cord.m"
          else
#line 624 "cord.m"
            {
#line 624 "cord.m"
              MR_Box mercury__cord__FH_16 = (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 0));
#line 624 "cord.m"
              MR_Word mercury__cord__FT_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 1)));
#line 624 "cord.m"
              MR_Word mercury__cord__V_26_26;

#line 625 "cord.m"
              {
#line 625 "cord.m"
                mercury__cord__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 0) = mercury__cord__FH_16;
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 1) = ((MR_Box) (mercury__cord__FT_17));
#line 625 "cord.m"
              }
#line 625 "cord.m"
              {
#line 625 "cord.m"
                MR_Word base;
#line 625 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 625 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_26_26));
#line 625 "cord.m"
              }
#line 624 "cord.m"
            }
#line 611 "cord.m"
        }
#line 610 "cord.m"
      else
#line 602 "cord.m"
        {
#line 602 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_6, (MR_Integer) 0));
#line 603 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_5, (MR_Integer) 1)));

#line 603 "cord.m"
          {
#line 603 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_5), mercury__cord__X_9);
          }
#line 606 "cord.m"
          if (mercury__cord__succeeded)
#line 604 "cord.m"
            {
#line 604 "cord.m"
              {
#line 604 "cord.m"
                MR_Word base;
#line 604 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 604 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 604 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 604 "cord.m"
              }
#line 605 "cord.m"
              *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "cord.m"
            }
#line 606 "cord.m"
          else
#line 607 "cord.m"
            {
#line 607 "cord.m"
              *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "cord.m"
              {
#line 608 "cord.m"
                MR_Word base;
#line 608 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 608 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 608 "cord.m"
              }
#line 607 "cord.m"
            }
#line 602 "cord.m"
        }
#line 610 "cord.m"
  }
#line 597 "cord.m"
}

#line 563 "cord.m"
void MR_CALL 
mercury__cord__filter_node_3_p_0(
#line 563 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_20,
#line 563 "cord.m"
  MR_Word mercury__cord__P_4,
#line 563 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 563 "cord.m"
  MR_Word * mercury__cord__Trues_6)
#line 563 "cord.m"
{
#line 574 "cord.m"
  {
#line 574 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 574 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 585 "cord.m"
      {
#line 585 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 585 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 585 "cord.m"
        MR_Word mercury__cord__CATrues_15;
#line 585 "cord.m"
        MR_Word mercury__cord__CBTrues_16;

#line 586 "cord.m"
        {
#line 586 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__CATrues_15);
        }
#line 587 "cord.m"
        {
#line 587 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__CBTrues_16);
        }
#line 588 "cord.m"
        {
#line 588 "cord.m"
          *mercury__cord__Trues_6 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__CATrues_15, mercury__cord__CBTrues_16);
        }
#line 585 "cord.m"
      }
#line 574 "cord.m"
    else
#line 574 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 575 "cord.m"
        {
#line 575 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 575 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 575 "cord.m"
          MR_Word mercury__cord__TrueList_10;
#line 575 "cord.m"
          MR_Word mercury__cord__V_17_17;

#line 576 "cord.m"
          {
#line 576 "cord.m"
            mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_8;
#line 576 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_9));
#line 576 "cord.m"
          }
#line 576 "cord.m"
          {
#line 576 "cord.m"
            mercury__list__filter_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__V_17_17, &mercury__cord__TrueList_10);
          }
#line 580 "cord.m"
          if ((mercury__cord__TrueList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "cord.m"
          else
#line 581 "cord.m"
            {
#line 581 "cord.m"
              MR_Box mercury__cord__TH_11 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 0));
#line 581 "cord.m"
              MR_Word mercury__cord__TT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 1)));
#line 581 "cord.m"
              MR_Word mercury__cord__V_18_18;

#line 582 "cord.m"
              {
#line 582 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__TH_11;
#line 582 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__TT_12));
#line 582 "cord.m"
              }
#line 582 "cord.m"
              {
#line 582 "cord.m"
                MR_Word base;
#line 582 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 582 "cord.m"
                *mercury__cord__Trues_6 = base;
#line 582 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_18_18));
#line 582 "cord.m"
              }
#line 581 "cord.m"
            }
#line 575 "cord.m"
        }
#line 574 "cord.m"
      else
#line 568 "cord.m"
        {
#line 568 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 569 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 569 "cord.m"
          {
#line 569 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__X_7);
          }
#line 571 "cord.m"
          if (mercury__cord__succeeded)
#line 570 "cord.m"
            {
#line 570 "cord.m"
              MR_Word base;
#line 570 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "cord.m"
              *mercury__cord__Trues_6 = base;
#line 570 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_5));
#line 570 "cord.m"
            }
#line 571 "cord.m"
          else
#line 572 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "cord.m"
        }
#line 574 "cord.m"
  }
#line 563 "cord.m"
}

#line 537 "cord.m"
void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
#line 537 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 537 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 537 "cord.m"
  MR_Word mercury__cord__P_4,
#line 537 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 537 "cord.m"
  MR_Word * mercury__cord__PNode_6)
#line 537 "cord.m"
{
#line 545 "cord.m"
  {
#line 545 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 545 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 551 "cord.m"
      {
#line 551 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 551 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 551 "cord.m"
        MR_Word mercury__cord__PA_15;
#line 551 "cord.m"
        MR_Word mercury__cord__PB_16;

#line 552 "cord.m"
        {
#line 552 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__PA_15);
        }
#line 553 "cord.m"
        {
#line 553 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__PB_16);
        }
#line 554 "cord.m"
        {
#line 554 "cord.m"
          MR_Word base;
#line 554 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "cord.m"
          *mercury__cord__PNode_6 = base;
#line 554 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__PA_15));
#line 554 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__PB_16));
#line 554 "cord.m"
        }
#line 551 "cord.m"
      }
#line 545 "cord.m"
    else
#line 545 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 546 "cord.m"
        {
#line 546 "cord.m"
          MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 546 "cord.m"
          MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 546 "cord.m"
          MR_Box mercury__cord__PH_11;
#line 546 "cord.m"
          MR_Word mercury__cord__PT_12;
#line 547 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 547 "cord.m"
          {
#line 547 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__H_9, &mercury__cord__PH_11);
          }
#line 548 "cord.m"
          {
#line 548 "cord.m"
            mercury__list__map_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__T_10, &mercury__cord__PT_12);
          }
#line 549 "cord.m"
          {
#line 549 "cord.m"
            MR_Word base;
#line 549 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 549 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__PH_11;
#line 549 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__PT_12));
#line 549 "cord.m"
          }
#line 546 "cord.m"
        }
#line 545 "cord.m"
      else
#line 542 "cord.m"
        {
#line 542 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 542 "cord.m"
          MR_Box mercury__cord__PX_8;
#line 543 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 543 "cord.m"
          {
#line 543 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_4), mercury__cord__X_7, &mercury__cord__PX_8);
          }
#line 544 "cord.m"
          {
#line 544 "cord.m"
            MR_Word base;
#line 544 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 544 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 544 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__PX_8;
#line 544 "cord.m"
          }
#line 542 "cord.m"
        }
#line 545 "cord.m"
  }
#line 537 "cord.m"
}

#line 519 "cord.m"
MR_Word MR_CALL 
mercury__cord__map_node_2_f_0(
#line 519 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 519 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 519 "cord.m"
  MR_Word mercury__cord__F_4,
#line 519 "cord.m"
  MR_Word mercury__cord__Node_5)
#line 519 "cord.m"
{
#line 525 "cord.m"
  {
#line 525 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 525 "cord.m"
    MR_Word mercury__cord__PNode_6;

#line 525 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 529 "cord.m"
      {
#line 529 "cord.m"
        MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 529 "cord.m"
        MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 529 "cord.m"
        MR_Word mercury__cord__V_12_12;
#line 529 "cord.m"
        MR_Word mercury__cord__V_13_13;

#line 530 "cord.m"
        {
#line 530 "cord.m"
          mercury__cord__V_12_12 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__A_10);
        }
#line 530 "cord.m"
        {
#line 530 "cord.m"
          mercury__cord__V_13_13 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__B_11);
        }
#line 530 "cord.m"
        {
#line 530 "cord.m"
          mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 530 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_13_13));
#line 530 "cord.m"
        }
#line 529 "cord.m"
      }
#line 525 "cord.m"
    else
#line 525 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 526 "cord.m"
        {
#line 526 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 526 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 526 "cord.m"
          MR_Box mercury__cord__V_14_14;
#line 526 "cord.m"
          MR_Word mercury__cord__V_15_15;
#line 527 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 527 "cord.m"
          {
#line 527 "cord.m"
            mercury__cord__V_14_14 = mercury__cord__func_0(((MR_Box) mercury__cord__F_4), mercury__cord__H_8);
          }
#line 527 "cord.m"
          {
#line 527 "cord.m"
            mercury__cord__V_15_15 = mercury__list__map_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__T_9);
          }
#line 527 "cord.m"
          {
#line 527 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 0) = mercury__cord__V_14_14;
#line 527 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 527 "cord.m"
          }
#line 526 "cord.m"
        }
#line 525 "cord.m"
      else
#line 523 "cord.m"
        {
#line 523 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 523 "cord.m"
          MR_Box mercury__cord__V_16_16;
#line 524 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 524 "cord.m"
          {
#line 524 "cord.m"
            mercury__cord__V_16_16 = mercury__cord__func_1(((MR_Box) mercury__cord__F_4), mercury__cord__X_7);
          }
#line 524 "cord.m"
          {
#line 524 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 524 "cord.m"
            MR_hl_field(MR_mktag(0), mercury__cord__PNode_6, 0) = mercury__cord__V_16_16;
#line 524 "cord.m"
          }
#line 523 "cord.m"
        }
#line 525 "cord.m"
    return mercury__cord__PNode_6;
#line 525 "cord.m"
  }
#line 519 "cord.m"
}

#line 493 "cord.m"
void MR_CALL 
mercury__cord__member_node_2_p_0(
#line 493 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 493 "cord.m"
  MR_Box * mercury__cord__X_3,
#line 493 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 493 "cord.m"
  MR_Cont mercury__cord__cont,
#line 493 "cord.m"
  void * mercury__cord__cont_env_ptr)
#line 493 "cord.m"
{
#line 498 "cord.m"
  while (MR_TRUE)
#line 498 "cord.m"
    {
#line 498 "cord.m"
      /* tailcall optimized into a loop */
#line 498 "cord.m"
      {
#line 498 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 498 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 506 "cord.m"
          {
#line 506 "cord.m"
            MR_Word mercury__cord__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 506 "cord.m"
            MR_Word mercury__cord__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));

#line 508 "cord.m"
            {
#line 508 "cord.m"
              mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__A_7, mercury__cord__cont, mercury__cord__cont_env_ptr);
            }
#line 510 "cord.m"
            /* direct tailcall eliminated */
#line 510 "cord.m"
            {
#line 510 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_4 = mercury__cord__B_8;

#line 510 "cord.m"
              mercury__cord__Node_4 = mercury__cord__Node__tmp_copy_4;
#line 510 "cord.m"
            }
#line 510 "cord.m"
            continue;
#line 506 "cord.m"
          }
#line 498 "cord.m"
        else
#line 498 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 499 "cord.m"
            {
#line 499 "cord.m"
              MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 499 "cord.m"
              MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));

#line 501 "cord.m"
              *mercury__cord__X_3 = mercury__cord__H_5;
#line 501 "cord.m"
              {
#line 501 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
              }
#line 503 "cord.m"
              {
#line 503 "cord.m"
                mercury__list__member_2_p_1(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__T_6, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 503 "cord.m"
                return;
              }
#line 499 "cord.m"
            }
#line 498 "cord.m"
          else
#line 497 "cord.m"
            {
#line 497 "cord.m"
              *mercury__cord__X_3 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 497 "cord.m"
              {
#line 497 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
#line 497 "cord.m"
                return;
              }
#line 497 "cord.m"
            }
#line 498 "cord.m"
      }
#line 498 "cord.m"
      break;
#line 498 "cord.m"
    }
#line 493 "cord.m"
}

#line 465 "cord.m"
void MR_CALL 
mercury__cord__get_last_node_2_p_0(
#line 465 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 465 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 465 "cord.m"
  MR_Box * mercury__cord__Last_4)
#line 465 "cord.m"
{
#line 470 "cord.m"
  while (MR_TRUE)
#line 470 "cord.m"
    {
#line 470 "cord.m"
      /* tailcall optimized into a loop */
#line 470 "cord.m"
      {
#line 470 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 470 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 480 "cord.m"
          {
#line 480 "cord.m"
            MR_Word mercury__cord__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));
#line 480 "cord.m"
            MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));

#line 481 "cord.m"
            /* direct tailcall eliminated */
#line 481 "cord.m"
            {
#line 481 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__B_10;

#line 481 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 481 "cord.m"
            }
#line 481 "cord.m"
            continue;
#line 480 "cord.m"
          }
#line 470 "cord.m"
        else
#line 470 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 471 "cord.m"
            {
#line 471 "cord.m"
              MR_Box mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 471 "cord.m"
              MR_Word mercury__cord__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));

#line 475 "cord.m"
              if ((mercury__cord__Tail_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "cord.m"
                *mercury__cord__Last_4 = mercury__cord__Head_5;
#line 475 "cord.m"
              else
#line 477 "cord.m"
                {
#line 477 "cord.m"
                  mercury__list__det_last_2_p_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Tail_6, mercury__cord__Last_4);
#line 477 "cord.m"
                  return;
                }
#line 471 "cord.m"
            }
#line 470 "cord.m"
          else
#line 469 "cord.m"
            *mercury__cord__Last_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 470 "cord.m"
      }
#line 470 "cord.m"
      break;
#line 470 "cord.m"
    }
#line 465 "cord.m"
}

#line 448 "cord.m"
void MR_CALL 
mercury__cord__get_first_node_2_p_0(
#line 448 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 448 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 448 "cord.m"
  MR_Box * mercury__cord__Head_4)
#line 448 "cord.m"
{
#line 453 "cord.m"
  while (MR_TRUE)
#line 453 "cord.m"
    {
#line 453 "cord.m"
      /* tailcall optimized into a loop */
#line 453 "cord.m"
      {
#line 453 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 453 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 456 "cord.m"
          {
#line 456 "cord.m"
            MR_Word mercury__cord__A_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));
#line 456 "cord.m"
            MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));

#line 457 "cord.m"
            /* direct tailcall eliminated */
#line 457 "cord.m"
            {
#line 457 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__A_6;

#line 457 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 457 "cord.m"
            }
#line 457 "cord.m"
            continue;
#line 456 "cord.m"
          }
#line 453 "cord.m"
        else
#line 453 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 454 "cord.m"
            {
#line 454 "cord.m"
              MR_Word mercury__cord__V_5_5;

#line 454 "cord.m"
              *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 454 "cord.m"
              mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));
#line 454 "cord.m"
            }
#line 453 "cord.m"
          else
#line 452 "cord.m"
            *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 453 "cord.m"
      }
#line 453 "cord.m"
      break;
#line 453 "cord.m"
    }
#line 448 "cord.m"
}

#line 413 "cord.m"
void MR_CALL 
mercury__cord__split_last_node_3_p_0(
#line 413 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 413 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 413 "cord.m"
  MR_Word * mercury__cord__AllButLast_5,
#line 413 "cord.m"
  MR_Box * mercury__cord__Last_6)
#line 413 "cord.m"
{
#line 419 "cord.m"
  {
#line 419 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 419 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 431 "cord.m"
      {
#line 431 "cord.m"
        MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 431 "cord.m"
        MR_Word mercury__cord__B0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 431 "cord.m"
        MR_Word mercury__cord__B_14;
#line 431 "cord.m"
        MR_Word mercury__cord__V_15_15;

#line 432 "cord.m"
        {
#line 432 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__B0_13, &mercury__cord__B_14, mercury__cord__Last_6);
        }
#line 433 "cord.m"
        {
#line 433 "cord.m"
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
#line 433 "cord.m"
        }
#line 433 "cord.m"
        {
#line 433 "cord.m"
          *mercury__cord__AllButLast_5 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__V_15_15, mercury__cord__B_14);
        }
#line 431 "cord.m"
      }
#line 419 "cord.m"
    else
#line 419 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 420 "cord.m"
        {
#line 420 "cord.m"
          MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 420 "cord.m"
          MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 420 "cord.m"
          MR_Word mercury__cord__AllButLastList_9;

#line 421 "cord.m"
          {
#line 421 "cord.m"
            mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLastList_9, mercury__cord__Last_6);
          }
#line 425 "cord.m"
          if ((mercury__cord__AllButLastList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "cord.m"
            *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "cord.m"
          else
#line 426 "cord.m"
            {
#line 426 "cord.m"
              MR_Box mercury__cord__AllButLastHead_10 = (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 0));
#line 426 "cord.m"
              MR_Word mercury__cord__AllButLastTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 1)));
#line 426 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 427 "cord.m"
              {
#line 427 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__AllButLastHead_10;
#line 427 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__AllButLastTail_11));
#line 427 "cord.m"
              }
#line 427 "cord.m"
              {
#line 427 "cord.m"
                MR_Word base;
#line 427 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "cord.m"
                *mercury__cord__AllButLast_5 = base;
#line 427 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 427 "cord.m"
              }
#line 426 "cord.m"
            }
#line 420 "cord.m"
        }
#line 419 "cord.m"
      else
#line 417 "cord.m"
        {
#line 417 "cord.m"
          *mercury__cord__Last_6 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 418 "cord.m"
          *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "cord.m"
        }
#line 419 "cord.m"
  }
#line 413 "cord.m"
}

#line 380 "cord.m"
void MR_CALL 
mercury__cord__head_tail_node_3_p_0(
#line 380 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 380 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 380 "cord.m"
  MR_Box * mercury__cord__Head_5,
#line 380 "cord.m"
  MR_Word * mercury__cord__Tail_6)
#line 380 "cord.m"
{
#line 386 "cord.m"
  {
#line 386 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 386 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 397 "cord.m"
      {
#line 397 "cord.m"
        MR_Word mercury__cord__A0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 397 "cord.m"
        MR_Word mercury__cord__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 397 "cord.m"
        MR_Word mercury__cord__AC_13;

#line 398 "cord.m"
        {
#line 398 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__A0_11, mercury__cord__Head_5, &mercury__cord__AC_13);
        }
#line 402 "cord.m"
        if ((mercury__cord__AC_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 401 "cord.m"
          {
#line 401 "cord.m"
            MR_Word base;
#line 401 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "cord.m"
            *mercury__cord__Tail_6 = base;
#line 401 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__B_12));
#line 401 "cord.m"
          }
#line 402 "cord.m"
        else
#line 403 "cord.m"
          {
#line 403 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AC_13, (MR_Integer) 0)));
#line 403 "cord.m"
            MR_Word mercury__cord__V_15_15;

#line 404 "cord.m"
            {
#line 404 "cord.m"
              mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_14));
#line 404 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__B_12));
#line 404 "cord.m"
            }
#line 404 "cord.m"
            {
#line 404 "cord.m"
              MR_Word base;
#line 404 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "cord.m"
              *mercury__cord__Tail_6 = base;
#line 404 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_15_15));
#line 404 "cord.m"
            }
#line 403 "cord.m"
          }
#line 397 "cord.m"
      }
#line 386 "cord.m"
    else
#line 386 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 387 "cord.m"
        {
#line 387 "cord.m"
          MR_Word mercury__cord__T_8;

#line 387 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 387 "cord.m"
          mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 392 "cord.m"
          if ((mercury__cord__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "cord.m"
            *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "cord.m"
          else
#line 393 "cord.m"
            {
#line 393 "cord.m"
              MR_Box mercury__cord__TH_9 = (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 0));
#line 393 "cord.m"
              MR_Word mercury__cord__TT_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 1)));
#line 393 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 394 "cord.m"
              {
#line 394 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__TH_9;
#line 394 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__TT_10));
#line 394 "cord.m"
              }
#line 394 "cord.m"
              {
#line 394 "cord.m"
                MR_Word base;
#line 394 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "cord.m"
                *mercury__cord__Tail_6 = base;
#line 394 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 394 "cord.m"
              }
#line 393 "cord.m"
            }
#line 387 "cord.m"
        }
#line 386 "cord.m"
      else
#line 384 "cord.m"
        {
#line 384 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 385 "cord.m"
          *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "cord.m"
        }
#line 386 "cord.m"
  }
#line 380 "cord.m"
}

#line 370 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_list_2_2_f_0(
#line 370 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 370 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 370 "cord.m"
  MR_Word mercury__cord__L_2)
#line 370 "cord.m"
{
#line 372 "cord.m"
  {
#line 372 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 372 "cord.m"
    MR_Word mercury__cord__HeadVar__3_3;

#line 372 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "cord.m"
      mercury__cord__HeadVar__3_3 = mercury__cord__L_2;
#line 372 "cord.m"
    else
#line 373 "cord.m"
      {
#line 373 "cord.m"
        MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "cord.m"
        MR_Word mercury__cord__V_7_7;
#line 373 "cord.m"
        MR_Word mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 373 "cord.m"
        {
#line 373 "cord.m"
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = ((MR_Box) (mercury__cord__N_5));
#line 373 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__V_8_8));
#line 373 "cord.m"
        }
#line 373 "cord.m"
        {
#line 373 "cord.m"
          return mercury__cord__HeadVar__3_3 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_7_7, mercury__cord__L_2);
        }
#line 373 "cord.m"
      }
#line 372 "cord.m"
    return mercury__cord__HeadVar__3_3;
#line 372 "cord.m"
  }
#line 370 "cord.m"
}

#line 273 "cord.m"
static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
#line 273 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_19,
#line 273 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 273 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
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
        MR_Word mercury__cord__L_3;

#line 275 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "cord.m"
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
#line 275 "cord.m"
        else
#line 276 "cord.m"
          {
#line 276 "cord.m"
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "cord.m"
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

#line 280 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 2))))
#line 284 "cord.m"
              {
#line 284 "cord.m"
                MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
#line 284 "cord.m"
                MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
#line 284 "cord.m"
                MR_Word mercury__cord__V_14_14;
#line 284 "cord.m"
                MR_Word mercury__cord__V_15_15;

#line 285 "cord.m"
                {
#line 285 "cord.m"
                  mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
#line 285 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
#line 285 "cord.m"
                }
#line 285 "cord.m"
                {
#line 285 "cord.m"
                  mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__B_13));
#line 285 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 285 "cord.m"
                }
#line 285 "cord.m"
                /* direct tailcall eliminated */
#line 285 "cord.m"
                {
#line 285 "cord.m"
                  MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

#line 285 "cord.m"
                  mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 285 "cord.m"
                }
#line 285 "cord.m"
                continue;
#line 284 "cord.m"
              }
#line 280 "cord.m"
            else
#line 280 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 1))))
#line 281 "cord.m"
                {
#line 281 "cord.m"
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
#line 281 "cord.m"
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
#line 281 "cord.m"
                  MR_Word mercury__cord__V_16_16;
#line 281 "cord.m"
                  MR_Word mercury__cord__V_17_17;

#line 46 "list.opt"
                  {
#line 46 "list.opt"
                    mercury__list__append_3_p_1(mercury__cord__TypeInfo_for_T_19, mercury__cord__T_11, mercury__cord__HeadVar__2_2, &mercury__cord__V_17_17);
                  }
#line 282 "cord.m"
                  {
#line 282 "cord.m"
                    mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__H_10;
#line 282 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__V_17_17));
#line 282 "cord.m"
                  }
#line 282 "cord.m"
                  /* direct tailcall eliminated */
#line 282 "cord.m"
                  {
#line 282 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 282 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

#line 282 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 282 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 282 "cord.m"
                  }
#line 282 "cord.m"
                  continue;
#line 281 "cord.m"
                }
#line 280 "cord.m"
              else
#line 278 "cord.m"
                {
#line 278 "cord.m"
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
#line 278 "cord.m"
                  MR_Word mercury__cord__V_18_18;

#line 279 "cord.m"
                  {
#line 279 "cord.m"
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
#line 279 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 279 "cord.m"
                  }
#line 279 "cord.m"
                  /* direct tailcall eliminated */
#line 279 "cord.m"
                  {
#line 279 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 279 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

#line 279 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 279 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 279 "cord.m"
                  }
#line 279 "cord.m"
                  continue;
#line 278 "cord.m"
                }
#line 276 "cord.m"
          }
#line 275 "cord.m"
        return mercury__cord__L_3;
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
#line 775 "cord.m"
  {
#line 775 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 775 "cord.m"
    MR_Word mercury__cord__V_5_5;
#line 775 "cord.m"
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
        MR_Word mercury__cord__V_11_11;
#line 267 "cord.m"
        MR_Word mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        MR_Word mercury__cord__V_13_13;

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 0) = ((MR_Box) (mercury__cord__N_10));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 1) = ((MR_Box) (mercury__cord__V_12_12));
#line 267 "cord.m"
        }
#line 267 "cord.m"
        mercury__cord__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_5_5 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_11_11, mercury__cord__V_13_13);
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
        MR_Word mercury__cord__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CB_4, (MR_Integer) 0)));
#line 267 "cord.m"
        MR_Word mercury__cord__V_15_15;
#line 267 "cord.m"
        MR_Word mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        MR_Word mercury__cord__V_17_17;

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__N_14));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__V_16_16));
#line 267 "cord.m"
        }
#line 267 "cord.m"
        mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_15_15, mercury__cord__V_17_17);
        }
#line 267 "cord.m"
      }
#line 777 "cord.m"
    {
#line 777 "cord.m"
      return mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_5_5, mercury__cord__V_7_7);
    }
#line 775 "cord.m"
    return mercury__cord__succeeded;
#line 775 "cord.m"
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
#line 755 "cord.m"
  {
#line 755 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "cord.m"
      {
#line 755 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "cord.m"
        *mercury__cord__STATE_VARIABLE_C_9 = mercury__cord__STATE_VARIABLE_C_0_8;
#line 755 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 755 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 755 "cord.m"
      }
#line 755 "cord.m"
    else
#line 756 "cord.m"
      {
#line 756 "cord.m"
        MR_Word mercury__cord__NX_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 756 "cord.m"
        MR_Word mercury__cord__NY_22;

#line 757 "cord.m"
        {
#line 757 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_35, mercury__cord__TypeInfo_for_B_36, mercury__cord__TypeInfo_for_C_37, mercury__cord__TypeInfo_for_D_38, mercury__cord__TypeInfo_for_E_39, mercury__cord__HeadVar__1_1, mercury__cord__NX_21, &mercury__cord__NY_22, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 756 "cord.m"
        {
#line 756 "cord.m"
          MR_Word base;
#line 756 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 756 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_22));
#line 756 "cord.m"
        }
#line 756 "cord.m"
      }
#line 755 "cord.m"
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
#line 736 "cord.m"
  {
#line 736 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 736 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "cord.m"
      {
#line 736 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 736 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 736 "cord.m"
      }
#line 736 "cord.m"
    else
#line 737 "cord.m"
      {
#line 737 "cord.m"
        MR_Word mercury__cord__NX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 737 "cord.m"
        MR_Word mercury__cord__NY_17;

#line 738 "cord.m"
        {
#line 738 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_26, mercury__cord__TypeInfo_for_B_27, mercury__cord__TypeInfo_for_C_28, mercury__cord__TypeInfo_for_D_29, mercury__cord__HeadVar__1_1, mercury__cord__NX_16, &mercury__cord__NY_17, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 737 "cord.m"
        {
#line 737 "cord.m"
          MR_Word base;
#line 737 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 737 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_17));
#line 737 "cord.m"
        }
#line 737 "cord.m"
      }
#line 736 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        if (mercury__cord__succeeded)
#line 708 "cord.m"
          {
#line 708 "cord.m"
            {
#line 708 "cord.m"
              MR_Word base;
#line 708 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
            }
#line 708 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 708 "cord.m"
          }
#line 708 "cord.m"
      }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        if (mercury__cord__succeeded)
#line 708 "cord.m"
          {
#line 708 "cord.m"
            {
#line 708 "cord.m"
              MR_Word base;
#line 708 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
            }
#line 708 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 708 "cord.m"
          }
#line 708 "cord.m"
      }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        if (mercury__cord__succeeded)
#line 708 "cord.m"
          {
#line 708 "cord.m"
            {
#line 708 "cord.m"
              MR_Word base;
#line 708 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
            }
#line 708 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 708 "cord.m"
          }
#line 708 "cord.m"
      }
#line 707 "cord.m"
    return mercury__cord__succeeded;
#line 707 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        {
#line 708 "cord.m"
          MR_Word base;
#line 708 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
        }
#line 708 "cord.m"
      }
#line 707 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        {
#line 708 "cord.m"
          MR_Word base;
#line 708 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
        }
#line 708 "cord.m"
      }
#line 707 "cord.m"
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
#line 707 "cord.m"
  {
#line 707 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 707 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "cord.m"
      {
#line 707 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 707 "cord.m"
      }
#line 707 "cord.m"
    else
#line 708 "cord.m"
      {
#line 708 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 708 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 709 "cord.m"
        {
#line 709 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 708 "cord.m"
        {
#line 708 "cord.m"
          MR_Word base;
#line 708 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 708 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 708 "cord.m"
        }
#line 708 "cord.m"
      }
#line 707 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      {
#line 682 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 682 "cord.m"
      }
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
    return mercury__cord__succeeded;
#line 682 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      {
#line 682 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 682 "cord.m"
      }
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
    return mercury__cord__succeeded;
#line 682 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      {
#line 682 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 682 "cord.m"
      }
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
    return mercury__cord__succeeded;
#line 682 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          mercury__cord__foldr_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 684 "cord.m"
          return;
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          mercury__cord__foldr_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 684 "cord.m"
          return;
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
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
#line 682 "cord.m"
  {
#line 682 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 682 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 682 "cord.m"
    else
#line 683 "cord.m"
      {
#line 683 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "cord.m"
        {
#line 684 "cord.m"
          mercury__cord__foldr_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 684 "cord.m"
          return;
        }
#line 683 "cord.m"
      }
#line 682 "cord.m"
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
#line 672 "cord.m"
  {
#line 672 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 672 "cord.m"
    MR_Box mercury__cord__HeadVar__4_4;

#line 672 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "cord.m"
      mercury__cord__HeadVar__4_4 = mercury__cord__Acc_3;
#line 672 "cord.m"
    else
#line 673 "cord.m"
      {
#line 673 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 673 "cord.m"
        {
#line 673 "cord.m"
          return mercury__cord__HeadVar__4_4 = mercury__cord__foldr_node_3_f_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__TypeInfo_for_U_11, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__Acc_3);
        }
#line 673 "cord.m"
      }
#line 672 "cord.m"
    return mercury__cord__HeadVar__4_4;
#line 672 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      {
#line 647 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 647 "cord.m"
      }
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_5(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
    return mercury__cord__succeeded;
#line 647 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      {
#line 647 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 647 "cord.m"
      }
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_4(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
    return mercury__cord__succeeded;
#line 647 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      {
#line 647 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 647 "cord.m"
      }
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_4_p_3(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
    return mercury__cord__succeeded;
#line 647 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          mercury__cord__foldl_node_pred_4_p_2(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 649 "cord.m"
          return;
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          mercury__cord__foldl_node_pred_4_p_1(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 649 "cord.m"
          return;
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
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
#line 647 "cord.m"
  {
#line 647 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 647 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 647 "cord.m"
    else
#line 648 "cord.m"
      {
#line 648 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "cord.m"
        {
#line 649 "cord.m"
          mercury__cord__foldl_node_pred_4_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__TypeInfo_for_U_16, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 649 "cord.m"
          return;
        }
#line 648 "cord.m"
      }
#line 647 "cord.m"
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
#line 637 "cord.m"
  {
#line 637 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 637 "cord.m"
    MR_Box mercury__cord__HeadVar__4_4;

#line 637 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "cord.m"
      mercury__cord__HeadVar__4_4 = mercury__cord__Acc_3;
#line 637 "cord.m"
    else
#line 638 "cord.m"
      {
#line 638 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 638 "cord.m"
        {
#line 638 "cord.m"
          return mercury__cord__HeadVar__4_4 = mercury__cord__foldl_node_3_f_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__TypeInfo_for_U_11, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__Acc_3);
        }
#line 638 "cord.m"
      }
#line 637 "cord.m"
    return mercury__cord__HeadVar__4_4;
#line 637 "cord.m"
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
#line 593 "cord.m"
  {
#line 593 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 593 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "cord.m"
      {
#line 593 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "cord.m"
        *mercury__cord__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "cord.m"
      }
#line 593 "cord.m"
    else
#line 594 "cord.m"
      {
#line 594 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 595 "cord.m"
        {
#line 595 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__P_1, mercury__cord__N_7, mercury__cord__HeadVar__3_3, mercury__cord__HeadVar__4_4);
#line 595 "cord.m"
          return;
        }
#line 594 "cord.m"
      }
#line 593 "cord.m"
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
#line 559 "cord.m"
  {
#line 559 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 559 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "cord.m"
    else
#line 560 "cord.m"
      {
#line 560 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 561 "cord.m"
        {
#line 561 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__P_1, mercury__cord__N_6, mercury__cord__HeadVar__3_3);
#line 561 "cord.m"
          return;
        }
#line 560 "cord.m"
      }
#line 559 "cord.m"
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
#line 533 "cord.m"
  {
#line 533 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 533 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "cord.m"
    else
#line 534 "cord.m"
      {
#line 534 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "cord.m"
        MR_Word mercury__cord__PN_7;

#line 535 "cord.m"
        {
#line 535 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__P_1, mercury__cord__N_6, &mercury__cord__PN_7);
        }
#line 534 "cord.m"
        {
#line 534 "cord.m"
          MR_Word base;
#line 534 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 534 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__PN_7));
#line 534 "cord.m"
        }
#line 534 "cord.m"
      }
#line 533 "cord.m"
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
#line 516 "cord.m"
  {
#line 516 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 516 "cord.m"
    MR_Word mercury__cord__HeadVar__3_3;

#line 516 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "cord.m"
      mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "cord.m"
    else
#line 517 "cord.m"
      {
#line 517 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 517 "cord.m"
        MR_Word mercury__cord__V_7_7;

#line 517 "cord.m"
        {
#line 517 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__F_1, mercury__cord__N_6);
        }
#line 517 "cord.m"
        {
#line 517 "cord.m"
          mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = ((MR_Box) (mercury__cord__V_7_7));
#line 517 "cord.m"
        }
#line 517 "cord.m"
      }
#line 516 "cord.m"
    return mercury__cord__HeadVar__3_3;
#line 516 "cord.m"
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
#line 490 "cord.m"
  {
#line 490 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 490 "cord.m"
    MR_Word mercury__cord__N_4;

#line 490 "cord.m"
    if (mercury__cord__succeeded)
#line 490 "cord.m"
      {
#line 490 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 491 "cord.m"
        {
#line 491 "cord.m"
          mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__X_3, mercury__cord__N_4, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 491 "cord.m"
          return;
        }
#line 490 "cord.m"
      }
#line 490 "cord.m"
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
#line 486 "cord.m"
  {
#line 486 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 486 "cord.m"
    MR_Integer mercury__cord__HeadVar__2_2;

#line 637 "cord.m"
    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Integer) 0;
#line 637 "cord.m"
    else
#line 638 "cord.m"
      {
#line 638 "cord.m"
        MR_Word mercury__cord__N_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));

#line 638 "cord.m"
        {
#line 638 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(mercury__cord__N_20, (MR_Integer) 0);
        }
#line 638 "cord.m"
      }
#line 486 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 486 "cord.m"
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
#line 462 "cord.m"
  {
#line 462 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 462 "cord.m"
    MR_Word mercury__cord__N_3;

#line 462 "cord.m"
    if (mercury__cord__succeeded)
#line 462 "cord.m"
      {
#line 462 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "cord.m"
        {
#line 463 "cord.m"
          mercury__cord__get_last_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Last_4);
        }
#line 463 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 462 "cord.m"
      }
#line 462 "cord.m"
    return mercury__cord__succeeded;
#line 462 "cord.m"
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
#line 445 "cord.m"
  {
#line 445 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 445 "cord.m"
    MR_Word mercury__cord__N_3;

#line 445 "cord.m"
    if (mercury__cord__succeeded)
#line 445 "cord.m"
      {
#line 445 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 446 "cord.m"
        {
#line 446 "cord.m"
          mercury__cord__get_first_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Head_4);
        }
#line 446 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 445 "cord.m"
      }
#line 445 "cord.m"
    return mercury__cord__succeeded;
#line 445 "cord.m"
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
#line 410 "cord.m"
  {
#line 410 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 410 "cord.m"
    MR_Word mercury__cord__N_4;

#line 410 "cord.m"
    if (mercury__cord__succeeded)
#line 410 "cord.m"
      {
#line 410 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 411 "cord.m"
        {
#line 411 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__AllButLast_5, mercury__cord__Last_6);
        }
#line 411 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 410 "cord.m"
      }
#line 410 "cord.m"
    return mercury__cord__succeeded;
#line 410 "cord.m"
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
#line 377 "cord.m"
  {
#line 377 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 377 "cord.m"
    MR_Word mercury__cord__N_4;

#line 377 "cord.m"
    if (mercury__cord__succeeded)
#line 377 "cord.m"
      {
#line 377 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "cord.m"
        {
#line 378 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__H_5, mercury__cord__T_6);
        }
#line 378 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 377 "cord.m"
      }
#line 377 "cord.m"
    return mercury__cord__succeeded;
#line 377 "cord.m"
  }
#line 107 "cord.m"
}

#line 100 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_list_1_f_0(
#line 100 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 100 "cord.m"
  MR_Word mercury__cord__Cords_3)
#line 100 "cord.m"
{
#line 365 "cord.m"
  {
#line 365 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 365 "cord.m"
    MR_Word mercury__cord__List_4;
#line 365 "cord.m"
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
#line 365 "cord.m"
    MR_Word mercury__cord__TypeInfo_10_10;
#line 365 "cord.m"
    MR_Word mercury__cord__RevCords_5;
#line 365 "cord.m"
    MR_Word mercury__cord__V_7_7;
#line 367 "cord.m"
    MR_Word mercury__cord__conv0_RevCords_5;

#line 8731 "cord.c"
    {
#line 8733 "cord.c"
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8735 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
#line 8737 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
#line 8739 "cord.c"
    }
#line 367 "cord.m"
    {
#line 367 "cord.m"
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
#line 367 "cord.m"
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
#line 368 "cord.m"
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__List_4);
    }
#line 365 "cord.m"
    return mercury__cord__List_4;
#line 365 "cord.m"
  }
#line 100 "cord.m"
}

#line 96 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_cord_1_f_0(
#line 96 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 96 "cord.m"
  MR_Word mercury__cord__Cords_3)
#line 96 "cord.m"
{
#line 360 "cord.m"
  {
#line 360 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 360 "cord.m"
    MR_Word mercury__cord__Cord_4;
#line 360 "cord.m"
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
#line 360 "cord.m"
    MR_Word mercury__cord__TypeInfo_10_10;
#line 360 "cord.m"
    MR_Word mercury__cord__RevCords_5;
#line 360 "cord.m"
    MR_Word mercury__cord__V_7_7;
#line 362 "cord.m"
    MR_Word mercury__cord__conv0_RevCords_5;

#line 8788 "cord.c"
    {
#line 8790 "cord.c"
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8792 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
#line 8794 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
#line 8796 "cord.c"
    }
#line 362 "cord.m"
    {
#line 362 "cord.m"
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
#line 362 "cord.m"
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
#line 363 "cord.m"
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__Cord_4);
    }
#line 360 "cord.m"
    return mercury__cord__Cord_4;
#line 360 "cord.m"
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
#line 348 "cord.m"
  {
#line 348 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 348 "cord.m"
    MR_Word mercury__cord__C_6;

#line 348 "cord.m"
    if ((mercury__cord__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "cord.m"
      mercury__cord__C_6 = mercury__cord__B_5;
#line 348 "cord.m"
    else
#line 348 "cord.m"
      {
#line 348 "cord.m"
        MR_Word mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__A_4, (MR_Integer) 0)));

#line 348 "cord.m"
        if ((mercury__cord__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "cord.m"
          mercury__cord__C_6 = mercury__cord__A_4;
#line 348 "cord.m"
        else
#line 353 "cord.m"
          {
#line 353 "cord.m"
            MR_Word mercury__cord__BN_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__B_5, (MR_Integer) 0)));
#line 353 "cord.m"
            MR_Word mercury__cord__V_10_10;

#line 355 "cord.m"
            {
#line 355 "cord.m"
              mercury__cord__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 355 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 1) = ((MR_Box) (mercury__cord__BN_9));
#line 355 "cord.m"
            }
#line 355 "cord.m"
            {
#line 355 "cord.m"
              mercury__cord__C_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__C_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 355 "cord.m"
            }
#line 353 "cord.m"
          }
#line 348 "cord.m"
      }
#line 348 "cord.m"
    return mercury__cord__C_6;
#line 348 "cord.m"
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
#line 337 "cord.m"
  {
#line 337 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 337 "cord.m"
    MR_Word mercury__cord__CX_6;

#line 337 "cord.m"
    if ((mercury__cord__C_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "cord.m"
      {
#line 335 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 336 "cord.m"
        {
#line 336 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_5;
#line 336 "cord.m"
        }
#line 336 "cord.m"
        {
#line 336 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 336 "cord.m"
        }
#line 335 "cord.m"
      }
#line 337 "cord.m"
    else
#line 338 "cord.m"
      {
#line 338 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_4, (MR_Integer) 0)));
#line 338 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 338 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 339 "cord.m"
        {
#line 339 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 339 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_5;
#line 339 "cord.m"
        }
#line 339 "cord.m"
        {
#line 339 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__N_7));
#line 339 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__V_9_9));
#line 339 "cord.m"
        }
#line 339 "cord.m"
        {
#line 339 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 339 "cord.m"
        }
#line 338 "cord.m"
      }
#line 337 "cord.m"
    return mercury__cord__CX_6;
#line 337 "cord.m"
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
#line 326 "cord.m"
  {
#line 326 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 326 "cord.m"
    MR_Word mercury__cord__XC_6;

#line 326 "cord.m"
    if ((mercury__cord__C_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "cord.m"
      {
#line 324 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 325 "cord.m"
        {
#line 325 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_4;
#line 325 "cord.m"
        }
#line 325 "cord.m"
        {
#line 325 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 325 "cord.m"
        }
#line 324 "cord.m"
      }
#line 326 "cord.m"
    else
#line 327 "cord.m"
      {
#line 327 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_5, (MR_Integer) 0)));
#line 327 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 327 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 328 "cord.m"
        {
#line 328 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_4;
#line 328 "cord.m"
        }
#line 328 "cord.m"
        {
#line 328 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__V_9_9));
#line 328 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__N_7));
#line 328 "cord.m"
        }
#line 328 "cord.m"
        {
#line 328 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 328 "cord.m"
        }
#line 327 "cord.m"
      }
#line 326 "cord.m"
    return mercury__cord__XC_6;
#line 326 "cord.m"
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
  MR_Word mercury__cord__TypeInfo_for_T_7,
#line 64 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 64 "cord.m"
{
#line 288 "cord.m"
  {
#line 288 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 288 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 288 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "cord.m"
    else
#line 289 "cord.m"
      {
#line 289 "cord.m"
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "cord.m"
        MR_Word mercury__cord__V_4_4;
#line 289 "cord.m"
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "cord.m"
        MR_Word mercury__cord__V_6_6;

#line 289 "cord.m"
        {
#line 289 "cord.m"
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
#line 289 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
#line 289 "cord.m"
        }
#line 289 "cord.m"
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "cord.m"
        {
#line 289 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__V_4_4, mercury__cord__V_6_6);
        }
#line 289 "cord.m"
      }
#line 288 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 288 "cord.m"
  }
#line 64 "cord.m"
}

#line 60 "cord.m"
MR_Word MR_CALL 
mercury__cord__list_1_f_0(
#line 60 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_7,
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
        MR_Word mercury__cord__V_4_4;
#line 267 "cord.m"
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        MR_Word mercury__cord__V_6_6;

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
#line 267 "cord.m"
        }
#line 267 "cord.m"
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "cord.m"
        {
#line 267 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__V_4_4, mercury__cord__V_6_6);
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
